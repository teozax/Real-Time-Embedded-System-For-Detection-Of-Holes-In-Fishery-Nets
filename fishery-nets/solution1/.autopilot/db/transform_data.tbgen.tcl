set moduleName transform_data
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {transform_data}
set C_modelType { void 0 }
set C_modelArgList {
	{ inputImage_data_stream_0_V int 8 regular {fifo 0 volatile }  }
	{ inputImage_data_stream_1_V int 8 regular {fifo 0 volatile }  }
	{ inputImage_data_stream_2_V int 8 regular {fifo 0 volatile }  }
	{ I_V_V int 32 regular {fifo 1 volatile } {global 1}  }
	{ I_COPY_V_V int 32 regular {fifo 1 volatile } {global 1}  }
	{ I_2_V_V int 32 regular {fifo 1 volatile } {global 1}  }
	{ ONES_V_V int 32 regular {fifo 1 volatile } {global 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "inputImage_data_stream_0_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "inputImage_data_stream_1_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "inputImage_data_stream_2_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "I_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "I_COPY_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "I_2_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "ONES_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} ]}
# RTL Port declarations: 
set portNum 31
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
	{ inputImage_data_stream_0_V_dout sc_in sc_lv 8 signal 0 } 
	{ inputImage_data_stream_0_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ inputImage_data_stream_0_V_read sc_out sc_logic 1 signal 0 } 
	{ inputImage_data_stream_1_V_dout sc_in sc_lv 8 signal 1 } 
	{ inputImage_data_stream_1_V_empty_n sc_in sc_logic 1 signal 1 } 
	{ inputImage_data_stream_1_V_read sc_out sc_logic 1 signal 1 } 
	{ inputImage_data_stream_2_V_dout sc_in sc_lv 8 signal 2 } 
	{ inputImage_data_stream_2_V_empty_n sc_in sc_logic 1 signal 2 } 
	{ inputImage_data_stream_2_V_read sc_out sc_logic 1 signal 2 } 
	{ I_V_V_din sc_out sc_lv 32 signal 3 } 
	{ I_V_V_full_n sc_in sc_logic 1 signal 3 } 
	{ I_V_V_write sc_out sc_logic 1 signal 3 } 
	{ I_COPY_V_V_din sc_out sc_lv 32 signal 4 } 
	{ I_COPY_V_V_full_n sc_in sc_logic 1 signal 4 } 
	{ I_COPY_V_V_write sc_out sc_logic 1 signal 4 } 
	{ I_2_V_V_din sc_out sc_lv 32 signal 5 } 
	{ I_2_V_V_full_n sc_in sc_logic 1 signal 5 } 
	{ I_2_V_V_write sc_out sc_logic 1 signal 5 } 
	{ ONES_V_V_din sc_out sc_lv 32 signal 6 } 
	{ ONES_V_V_full_n sc_in sc_logic 1 signal 6 } 
	{ ONES_V_V_write sc_out sc_logic 1 signal 6 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
 	{ "name": "inputImage_data_stream_0_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "inputImage_data_stream_0_V", "role": "dout" }} , 
 	{ "name": "inputImage_data_stream_0_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inputImage_data_stream_0_V", "role": "empty_n" }} , 
 	{ "name": "inputImage_data_stream_0_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inputImage_data_stream_0_V", "role": "read" }} , 
 	{ "name": "inputImage_data_stream_1_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "inputImage_data_stream_1_V", "role": "dout" }} , 
 	{ "name": "inputImage_data_stream_1_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inputImage_data_stream_1_V", "role": "empty_n" }} , 
 	{ "name": "inputImage_data_stream_1_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inputImage_data_stream_1_V", "role": "read" }} , 
 	{ "name": "inputImage_data_stream_2_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "inputImage_data_stream_2_V", "role": "dout" }} , 
 	{ "name": "inputImage_data_stream_2_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inputImage_data_stream_2_V", "role": "empty_n" }} , 
 	{ "name": "inputImage_data_stream_2_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inputImage_data_stream_2_V", "role": "read" }} , 
 	{ "name": "I_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "I_V_V", "role": "din" }} , 
 	{ "name": "I_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "I_V_V", "role": "full_n" }} , 
 	{ "name": "I_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "I_V_V", "role": "write" }} , 
 	{ "name": "I_COPY_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "I_COPY_V_V", "role": "din" }} , 
 	{ "name": "I_COPY_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "I_COPY_V_V", "role": "full_n" }} , 
 	{ "name": "I_COPY_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "I_COPY_V_V", "role": "write" }} , 
 	{ "name": "I_2_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "I_2_V_V", "role": "din" }} , 
 	{ "name": "I_2_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "I_2_V_V", "role": "full_n" }} , 
 	{ "name": "I_2_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "I_2_V_V", "role": "write" }} , 
 	{ "name": "ONES_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ONES_V_V", "role": "din" }} , 
 	{ "name": "ONES_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ONES_V_V", "role": "full_n" }} , 
 	{ "name": "ONES_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ONES_V_V", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "transform_data",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "129605", "EstimateLatencyMax" : "129605",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "inputImage_data_stream_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "inputImage_data_stream_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "inputImage_data_stream_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "inputImage_data_stream_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "inputImage_data_stream_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "inputImage_data_stream_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "I_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "I_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "I_COPY_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "I_COPY_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "I_2_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "I_2_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ONES_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "ONES_V_V_blk_n", "Type" : "RtlSignal"}]}]}]}


set ArgLastReadFirstWriteLatency {
	transform_data {
		inputImage_data_stream_0_V {Type I LastRead 2 FirstWrite -1}
		inputImage_data_stream_1_V {Type I LastRead 2 FirstWrite -1}
		inputImage_data_stream_2_V {Type I LastRead 2 FirstWrite -1}
		I_V_V {Type O LastRead -1 FirstWrite 5}
		I_COPY_V_V {Type O LastRead -1 FirstWrite 5}
		I_2_V_V {Type O LastRead -1 FirstWrite 5}
		ONES_V_V {Type O LastRead -1 FirstWrite 5}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "129605", "Max" : "129605"}
	, {"Name" : "Interval", "Min" : "129605", "Max" : "129605"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	inputImage_data_stream_0_V { ap_fifo {  { inputImage_data_stream_0_V_dout fifo_data 0 8 }  { inputImage_data_stream_0_V_empty_n fifo_status 0 1 }  { inputImage_data_stream_0_V_read fifo_update 1 1 } } }
	inputImage_data_stream_1_V { ap_fifo {  { inputImage_data_stream_1_V_dout fifo_data 0 8 }  { inputImage_data_stream_1_V_empty_n fifo_status 0 1 }  { inputImage_data_stream_1_V_read fifo_update 1 1 } } }
	inputImage_data_stream_2_V { ap_fifo {  { inputImage_data_stream_2_V_dout fifo_data 0 8 }  { inputImage_data_stream_2_V_empty_n fifo_status 0 1 }  { inputImage_data_stream_2_V_read fifo_update 1 1 } } }
	I_V_V { ap_fifo {  { I_V_V_din fifo_data 1 32 }  { I_V_V_full_n fifo_status 0 1 }  { I_V_V_write fifo_update 1 1 } } }
	I_COPY_V_V { ap_fifo {  { I_COPY_V_V_din fifo_data 1 32 }  { I_COPY_V_V_full_n fifo_status 0 1 }  { I_COPY_V_V_write fifo_update 1 1 } } }
	I_2_V_V { ap_fifo {  { I_2_V_V_din fifo_data 1 32 }  { I_2_V_V_full_n fifo_status 0 1 }  { I_2_V_V_write fifo_update 1 1 } } }
	ONES_V_V { ap_fifo {  { ONES_V_V_din fifo_data 1 32 }  { ONES_V_V_full_n fifo_status 0 1 }  { ONES_V_V_write fifo_update 1 1 } } }
}
