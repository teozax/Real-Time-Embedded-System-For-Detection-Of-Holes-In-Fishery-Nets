############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project fishery-nets
set_top net_holes_detection
add_files fishery-nets/code/src/image-smoothing.cpp
add_files fishery-nets/code/src/guided-filter.cpp
add_files fishery-nets/code/src/extra-functions.cpp
add_files fishery-nets/code/src/core.h
add_files fishery-nets/code/src/core.cpp
add_files fishery-nets/code/src/cclwindows.cpp
add_files -tb fishery-nets/test-data -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb fishery-nets/code/tb/test-core.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xczu9eg-ffvb1156-2-e} -tool vivado
create_clock -period 5 -name default
#source "./fishery-nets/solution1/directives.tcl"
csim_design -clean
csynth_design
cosim_design
export_design -format ip_catalog
