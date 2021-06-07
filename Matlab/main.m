clear all; close all; clc;

v = VideoReader('video.mp4');  % Open video file
current_frame = readFrame(v); % get the first frame (this step is necessary for the extraction of frame size)
% time_interval = 0 ;
[x,y,~] = size(current_frame);  % get height and width dimensions of frame (symbol '~' means we do not care/there is not 3rd dimension)

% while v.CurrentTime < 33
%     current_frame = readFrame(v);
% end
resize_value = 4; % determine a scale factor to resize each frame for faster processing
previous_frame = zeros(x/resize_value, y/resize_value); % create a frame to store the previous of the current frame
output = zeros(x, y);

while v.CurrentTime < 45  % until we reach the end of video
    current_frame = readFrame(v); % read the next frame of video
    current_frame = imresize(current_frame, 1/resize_value); % resize the current frame, based on scale factor
    output = zeros(x/resize_value, y/resize_value);
    tic;
      I_enhanced = ex_enhancement(current_frame);
      [results, Labels] = CCL_windows(I_enhanced);
    toc;

    output(:,:,1) = results(:,:,1) .* previous_frame(:,:,1); % red component: holes
    output(:,:,2) = 0; % green component
    output(:,:,3) = results(:,:,3);  % blue component:nets

    R = output(:,:,1); % get holes
    %1    restore the parts of the holes that got lost during multiplication of red components of results and previous_frame
    faulty_labels = unique(R .* Labels); % get uniquely the labels of all detected holes into the list-array faulty_labels
    faulty_labels = faulty_labels(faulty_labels ~= 0); % get rid of label 0, because it means nets
    R = Labels .* 0; % initialize red component
    for i = 1:size(faulty_labels)
        R = R + (Labels == faulty_labels(i));  % remake the red component, but this time with the help of image Labels that contains all the pixels for each label of list faulty_labels
    end
    R = R > 0;
    %1
    output(:,:,1) = R; % store the final red component at new frame
    output(:,:,2) = output(:,:,1) .* output(:,:,3);  % find the common pixels between extended holes (after previous processing) and nets
    output(:,:,3) = output(:,:,3) - output(:,:,2); % remove parts of nets where common pixels with red component appear

    previous_frame(:,:,1) = results(:,:,1); % store the current results of holes to be used for processing of next frame
%     current_frame = imresize(current_frame, resize_value);
%     output = imresize(output, resize_value);

%     close all;
    imshowpair(current_frame,output,'montage');
end
