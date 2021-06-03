set moduleName mean_filter_2D
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
set C_modelName {mean_filter_2D}
set C_modelType { void 0 }
set C_modelArgList {
	{ img_in_data_stream_V int 16 regular {fifo 0 volatile }  }
	{ img_out_data_stream_V int 16 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "img_in_data_stream_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "img_out_data_stream_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 13
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ img_in_data_stream_V_dout sc_in sc_lv 16 signal 0 } 
	{ img_in_data_stream_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ img_in_data_stream_V_read sc_out sc_logic 1 signal 0 } 
	{ img_out_data_stream_V_din sc_out sc_lv 16 signal 1 } 
	{ img_out_data_stream_V_full_n sc_in sc_logic 1 signal 1 } 
	{ img_out_data_stream_V_write sc_out sc_logic 1 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "img_in_data_stream_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "img_in_data_stream_V", "role": "dout" }} , 
 	{ "name": "img_in_data_stream_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_in_data_stream_V", "role": "empty_n" }} , 
 	{ "name": "img_in_data_stream_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_in_data_stream_V", "role": "read" }} , 
 	{ "name": "img_out_data_stream_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "img_out_data_stream_V", "role": "din" }} , 
 	{ "name": "img_out_data_stream_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_out_data_stream_V", "role": "full_n" }} , 
 	{ "name": "img_out_data_stream_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_out_data_stream_V", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "mean_filter_2D",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "134262", "EstimateLatencyMax" : "134262",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_Filter2D_fu_18"}],
		"Port" : [
			{"Name" : "img_in_data_stream_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_Filter2D_fu_18", "Port" : "p_src_data_stream_V"}]},
			{"Name" : "img_out_data_stream_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_Filter2D_fu_18", "Port" : "p_dst_data_stream_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_Filter2D_fu_18", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9"],
		"CDFG" : "Filter2D",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "134261", "EstimateLatencyMax" : "134261",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p_src_data_stream_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "p_src_data_stream_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p_dst_data_stream_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "p_dst_data_stream_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Filter2D_fu_18.k_buf_0_val_0_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Filter2D_fu_18.k_buf_0_val_1_U", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Filter2D_fu_18.k_buf_0_val_2_U", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Filter2D_fu_18.k_buf_0_val_3_U", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Filter2D_fu_18.k_buf_0_val_4_U", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Filter2D_fu_18.k_buf_0_val_5_U", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Filter2D_fu_18.k_buf_0_val_6_U", "Parent" : "1"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Filter2D_fu_18.k_buf_0_val_7_U", "Parent" : "1"}]}


set ArgLastReadFirstWriteLatency {
	mean_filter_2D {
		img_in_data_stream_V {Type I LastRead 3 FirstWrite -1}
		img_out_data_stream_V {Type O LastRead -1 FirstWrite 6}}
	Filter2D {
		p_src_data_stream_V {Type I LastRead 3 FirstWrite -1}
		p_dst_data_stream_V {Type O LastRead -1 FirstWrite 6}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "134262", "Max" : "134262"}
	, {"Name" : "Interval", "Min" : "134262", "Max" : "134262"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	img_in_data_stream_V { ap_fifo {  { img_in_data_stream_V_dout fifo_data 0 16 }  { img_in_data_stream_V_empty_n fifo_status 0 1 }  { img_in_data_stream_V_read fifo_update 1 1 } } }
	img_out_data_stream_V { ap_fifo {  { img_out_data_stream_V_din fifo_data 1 16 }  { img_out_data_stream_V_full_n fifo_status 0 1 }  { img_out_data_stream_V_write fifo_update 1 1 } } }
}
