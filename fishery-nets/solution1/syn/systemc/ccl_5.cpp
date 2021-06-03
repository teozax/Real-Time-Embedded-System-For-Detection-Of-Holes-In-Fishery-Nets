#include "ccl.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ccl::thread_sext_ln559_5_fu_18800_p1() {
    sext_ln559_5_fu_18800_p1 = esl_sext<64,16>(select_ln850_8_fu_18792_p3.read());
}

void ccl::thread_sext_ln559_6_fu_19334_p1() {
    sext_ln559_6_fu_19334_p1 = esl_sext<64,16>(select_ln850_9_fu_19326_p3.read());
}

void ccl::thread_sext_ln559_7_fu_19505_p1() {
    sext_ln559_7_fu_19505_p1 = esl_sext<64,16>(select_ln851_10_fu_19497_p3.read());
}

void ccl::thread_sext_ln559_8_fu_20053_p1() {
    sext_ln559_8_fu_20053_p1 = esl_sext<64,16>(ap_phi_mux_p_01106_0_i_phi_fu_17597_p4.read());
}

void ccl::thread_sext_ln559_fu_18419_p1() {
    sext_ln559_fu_18419_p1 = esl_sext<64,16>(select_ln850_fu_18411_p3.read());
}

void ccl::thread_sext_ln835_1_fu_18992_p1() {
    sext_ln835_1_fu_18992_p1 = esl_sext<64,18>(add_ln835_2_fu_18986_p2.read());
}

void ccl::thread_sext_ln835_2_fu_19462_p1() {
    sext_ln835_2_fu_19462_p1 = esl_sext<64,18>(add_ln835_3_fu_19456_p2.read());
}

void ccl::thread_sext_ln835_fu_18553_p1() {
    sext_ln835_fu_18553_p1 = esl_sext<18,10>(add_ln68_fu_18547_p2.read());
}

void ccl::thread_shl_ln728_1_fu_18736_p3() {
    shl_ln728_1_fu_18736_p3 = esl_concat<16,16>(above_fu_18685_p3.read(), ap_const_lv16_0);
}

void ccl::thread_shl_ln_fu_18727_p3() {
    shl_ln_fu_18727_p3 = esl_concat<16,16>(previous_fu_18651_p3.read(), ap_const_lv16_0);
}

void ccl::thread_sizes_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        sizes_V_address0 =  (sc_lv<17>) (sext_ln835_2_fu_19462_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln218_reg_39682.read()))) {
        sizes_V_address0 = grp_windows_fu_17784_sizes_V_address0.read();
    } else {
        sizes_V_address0 =  (sc_lv<17>) ("XXXXXXXXXXXXXXXXX");
    }
}

void ccl::thread_sizes_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()))) {
        sizes_V_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln218_reg_39682.read()))) {
        sizes_V_ce0 = grp_windows_fu_17784_sizes_V_ce0.read();
    } else {
        sizes_V_ce0 = ap_const_logic_0;
    }
}

void ccl::thread_sizes_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        sizes_V_d0 = ap_const_lv17_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln218_reg_39682.read()))) {
        sizes_V_d0 = grp_windows_fu_17784_sizes_V_d0.read();
    } else {
        sizes_V_d0 =  (sc_lv<17>) ("XXXXXXXXXXXXXXXXX");
    }
}

void ccl::thread_sizes_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln132_fu_19386_p2.read()))) {
        sizes_V_we0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln218_reg_39682.read()))) {
        sizes_V_we0 = grp_windows_fu_17784_sizes_V_we0.read();
    } else {
        sizes_V_we0 = ap_const_logic_0;
    }
}

void ccl::thread_smax31_cast_fu_23086_p1() {
    smax31_cast_fu_23086_p1 = esl_zext<18,17>(smax31_fu_23078_p3.read());
}

void ccl::thread_smax31_fu_23078_p3() {
    smax31_fu_23078_p3 = (!empty_489_fu_23072_p2.read()[0].is_01())? sc_lv<17>(): ((empty_489_fu_23072_p2.read()[0].to_bool())? add_ln160_fu_23062_p2.read(): empty_488_fu_23058_p1.read());
}

void ccl::thread_smax33_cast_fu_23463_p1() {
    smax33_cast_fu_23463_p1 = esl_zext<18,17>(smax33_fu_23458_p3.read());
}

void ccl::thread_smax33_fu_23458_p3() {
    smax33_fu_23458_p3 = (!empty_492_reg_32256.read()[0].is_01())? sc_lv<17>(): ((empty_492_reg_32256.read()[0].to_bool())? add_ln172_reg_32251.read(): empty_491_reg_32246.read());
}

void ccl::thread_storemerge_fu_18894_p3() {
    storemerge_fu_18894_p3 = esl_concat<16,16>(ap_phi_reg_pp1_iter1_storemerge_in_in_reg_17474.read(), ap_const_lv16_0);
}

void ccl::thread_sub_ln147_1_fu_22763_p2() {
    sub_ln147_1_fu_22763_p2 = (!ap_const_lv8_0.is_01() || !trunc_ln147_1_fu_22753_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_0) - sc_biguint<8>(trunc_ln147_1_fu_22753_p4.read()));
}

void ccl::thread_sub_ln147_fu_22747_p2() {
    sub_ln147_fu_22747_p2 = (!ap_const_lv32_0.is_01() || !grp_local_sort_fu_18064_ap_return_0.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_0) - sc_biguint<32>(grp_local_sort_fu_18064_ap_return_0.read()));
}

void ccl::thread_sub_ln1499_fu_19273_p2() {
    sub_ln1499_fu_19273_p2 = (!tmp_5_fu_19253_p3.read().is_01() || !zext_ln1499_fu_19269_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_5_fu_19253_p3.read()) - sc_biguint<18>(zext_ln1499_fu_19269_p1.read()));
}

void ccl::thread_sub_ln160_1_fu_23090_p2() {
    sub_ln160_1_fu_23090_p2 = (!smax31_cast_fu_23086_p1.read().is_01() || !p_cast19981_fu_23068_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(smax31_cast_fu_23086_p1.read()) - sc_biguint<18>(p_cast19981_fu_23068_p1.read()));
}

void ccl::thread_sub_ln160_fu_23024_p2() {
    sub_ln160_fu_23024_p2 = (!ap_const_lv16_FFCD.is_01() || !row_0_i_reg_17603.read().is_01())? sc_lv<16>(): (sc_bigint<16>(ap_const_lv16_FFCD) - sc_biguint<16>(row_0_i_reg_17603.read()));
}

void ccl::thread_sub_ln162_fu_27281_p2() {
    sub_ln162_fu_27281_p2 = (!tmp_9_fu_27261_p3.read().is_01() || !zext_ln162_fu_27277_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_9_fu_27261_p3.read()) - sc_biguint<18>(zext_ln162_fu_27277_p1.read()));
}

void ccl::thread_sub_ln172_1_fu_23467_p2() {
    sub_ln172_1_fu_23467_p2 = (!smax33_cast_fu_23463_p1.read().is_01() || !p_cast19978_fu_23455_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(smax33_cast_fu_23463_p1.read()) - sc_biguint<18>(p_cast19978_fu_23455_p1.read()));
}

void ccl::thread_sub_ln172_fu_23398_p2() {
    sub_ln172_fu_23398_p2 = (!ap_const_lv16_FFCD.is_01() || !col_0_i_reg_17650.read().is_01())? sc_lv<16>(): (sc_bigint<16>(ap_const_lv16_FFCD) - sc_biguint<16>(col_0_i_reg_17650.read()));
}

void ccl::thread_sub_ln835_1_fu_18537_p2() {
    sub_ln835_1_fu_18537_p2 = (!p_shl_cast_fu_18517_p3.read().is_01() || !zext_ln835_1_fu_18533_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl_cast_fu_18517_p3.read()) - sc_biguint<18>(zext_ln835_1_fu_18533_p1.read()));
}

void ccl::thread_sub_ln835_2_fu_18976_p2() {
    sub_ln835_2_fu_18976_p2 = (!tmp_1_fu_18956_p3.read().is_01() || !zext_ln835_5_fu_18972_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_1_fu_18956_p3.read()) - sc_biguint<18>(zext_ln835_5_fu_18972_p1.read()));
}

void ccl::thread_sub_ln835_3_fu_19446_p2() {
    sub_ln835_3_fu_19446_p2 = (!tmp_7_fu_19426_p3.read().is_01() || !zext_ln835_7_fu_19442_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_7_fu_19426_p3.read()) - sc_biguint<18>(zext_ln835_7_fu_19442_p1.read()));
}

void ccl::thread_sub_ln835_fu_18504_p2() {
    sub_ln835_fu_18504_p2 = (!p_shl1_cast_fu_18484_p3.read().is_01() || !zext_ln835_fu_18500_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl1_cast_fu_18484_p3.read()) - sc_biguint<18>(zext_ln835_fu_18500_p1.read()));
}

void ccl::thread_tmp_10_fu_27269_p3() {
    tmp_10_fu_27269_p3 = esl_concat<9,5>(select_ln227_1_fu_27253_p3.read(), ap_const_lv5_0);
}

void ccl::thread_tmp_1_fu_18956_p3() {
    tmp_1_fu_18956_p3 = esl_concat<9,9>(select_ln105_1_fu_18948_p3.read(), ap_const_lv9_0);
}

void ccl::thread_tmp_2_fu_18964_p3() {
    tmp_2_fu_18964_p3 = esl_concat<9,5>(select_ln105_1_fu_18948_p3.read(), ap_const_lv5_0);
}

void ccl::thread_tmp_38_fu_18492_p3() {
    tmp_38_fu_18492_p3 = esl_concat<9,5>(select_ln97_1_fu_18476_p3.read(), ap_const_lv5_0);
}

void ccl::thread_tmp_39_fu_18525_p3() {
    tmp_39_fu_18525_p3 = esl_concat<9,5>(select_ln97_2_fu_18510_p3.read(), ap_const_lv5_0);
}

void ccl::thread_tmp_49_fu_22739_p3() {
    tmp_49_fu_22739_p3 = grp_local_sort_fu_18064_ap_return_0.read().range(31, 31);
}

void ccl::thread_tmp_5_fu_19253_p3() {
    tmp_5_fu_19253_p3 = esl_concat<9,9>(select_ln119_1_fu_19245_p3.read(), ap_const_lv9_0);
}

void ccl::thread_tmp_6_fu_19261_p3() {
    tmp_6_fu_19261_p3 = esl_concat<9,5>(select_ln119_1_fu_19245_p3.read(), ap_const_lv5_0);
}

void ccl::thread_tmp_7_fu_19426_p3() {
    tmp_7_fu_19426_p3 = esl_concat<9,9>(select_ln136_1_fu_19418_p3.read(), ap_const_lv9_0);
}

void ccl::thread_tmp_8_fu_19434_p3() {
    tmp_8_fu_19434_p3 = esl_concat<9,5>(select_ln136_1_fu_19418_p3.read(), ap_const_lv5_0);
}

void ccl::thread_tmp_9_fu_27261_p3() {
    tmp_9_fu_27261_p3 = esl_concat<9,9>(select_ln227_1_fu_27253_p3.read(), ap_const_lv9_0);
}

void ccl::thread_tmp_s_fu_24148_p271() {
    tmp_s_fu_24148_p271 = (!ap_const_lv9_1FF.is_01() || !trunc_ln211_fu_23559_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_1FF) + sc_biguint<9>(trunc_ln211_fu_23559_p1.read()));
}

void ccl::thread_trunc_ln147_1_fu_22753_p4() {
    trunc_ln147_1_fu_22753_p4 = sub_ln147_fu_22747_p2.read().range(8, 1);
}

void ccl::thread_trunc_ln147_2_fu_22769_p4() {
    trunc_ln147_2_fu_22769_p4 = grp_local_sort_fu_18064_ap_return_0.read().range(8, 1);
}

void ccl::thread_trunc_ln1499_fu_23047_p1() {
    trunc_ln1499_fu_23047_p1 = select_ln153_fu_23036_p3.read().range(9-1, 0);
}

void ccl::thread_trunc_ln203_fu_20117_p1() {
    trunc_ln203_fu_20117_p1 = N_6_fu_3042.read().range(8-1, 0);
}

void ccl::thread_trunc_ln211_fu_23559_p1() {
    trunc_ln211_fu_23559_p1 = select_ln211_3_fu_23551_p3.read().range(9-1, 0);
}

void ccl::thread_trunc_ln731_fu_20101_p1() {
    trunc_ln731_fu_20101_p1 = select_ln850_10_fu_20084_p3.read().range(15-1, 0);
}

void ccl::thread_trunc_ln851_10_fu_19487_p1() {
    trunc_ln851_10_fu_19487_p1 = results_V_q1.read().range(16-1, 0);
}

void ccl::thread_trunc_ln851_11_fu_20066_p1() {
    trunc_ln851_11_fu_20066_p1 = labels_V_q1.read().range(16-1, 0);
}

void ccl::thread_trunc_ln851_2_fu_18627_p1() {
    trunc_ln851_2_fu_18627_p1 = results_V_q0.read().range(16-1, 0);
}

void ccl::thread_trunc_ln851_3_fu_18667_p1() {
    trunc_ln851_3_fu_18667_p1 = results_V_q1.read().range(16-1, 0);
}

void ccl::thread_trunc_ln851_4_fu_19011_p1() {
    trunc_ln851_4_fu_19011_p1 = results_V_q1.read().range(16-1, 0);
}

void ccl::thread_trunc_ln851_5_fu_19060_p1() {
    trunc_ln851_5_fu_19060_p1 = labels_V_q0.read().range(16-1, 0);
}

void ccl::thread_trunc_ln851_6_fu_18863_p1() {
    trunc_ln851_6_fu_18863_p1 = labels_V_q1.read().range(16-1, 0);
}

void ccl::thread_trunc_ln851_7_fu_18824_p1() {
    trunc_ln851_7_fu_18824_p1 = labels_V_q1.read().range(16-1, 0);
}

void ccl::thread_trunc_ln851_8_fu_18768_p1() {
    trunc_ln851_8_fu_18768_p1 = p_Val2_39_fu_2238.read().range(16-1, 0);
}

void ccl::thread_trunc_ln851_9_fu_19308_p1() {
    trunc_ln851_9_fu_19308_p1 = results_V_q1.read().range(16-1, 0);
}

void ccl::thread_trunc_ln851_fu_18388_p1() {
    trunc_ln851_fu_18388_p1 = p_Val2_42_reg_27328.read().range(16-1, 0);
}

void ccl::thread_window_sizes_0_V_4_fu_20105_p3() {
    window_sizes_0_V_4_fu_20105_p3 = esl_concat<15,16>(trunc_ln731_fu_20101_p1.read(), ap_const_lv16_0);
}

void ccl::thread_window_sizes_0_V_5_fu_20113_p1() {
    window_sizes_0_V_5_fu_20113_p1 = esl_zext<32,31>(window_sizes_0_V_4_fu_20105_p3.read());
}

void ccl::thread_ws_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6757_write_state40.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage0_01001.read(), ap_const_boolean_0))) {
        ws_V_V_din = tmp_V_215_reg_35580_pp5_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6756_write_state40.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0_01001.read(), ap_const_boolean_0))) {
        ws_V_V_din = tmp_V_216_reg_35565_pp5_iter2_reg.read();
    } else if (((esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6754_write_state40.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage0_01001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6755_write_state40.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage0_01001.read(), ap_const_boolean_0)))) {
        ws_V_V_din = tmp_V_1_reg_36941_pp5_iter2_reg.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, phi_ln160_reg_17639.read()) && 
                 !(esl_seteq<1,1,1>(ap_const_logic_0, ws_V_V_full_n.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, phi_ln160_reg_17639.read()))) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln211_reg_39673.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage0_01001.read(), ap_const_boolean_0)))) {
        ws_V_V_din = ap_const_lv32_0;
    } else {
        ws_V_V_din =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ccl::thread_ws_V_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln218_reg_39682.read()))) {
        ws_V_V_read = grp_windows_fu_17784_window_V_V_read.read();
    } else {
        ws_V_V_read = ap_const_logic_0;
    }
}

void ccl::thread_ws_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, phi_ln160_reg_17639.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ws_V_V_full_n.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, phi_ln160_reg_17639.read()))) || 
         (esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6754_write_state40.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6755_write_state40.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6756_write_state40.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6757_write_state40.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln211_reg_39673.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)))) {
        ws_V_V_write = ap_const_logic_1;
    } else {
        ws_V_V_write = ap_const_logic_0;
    }
}

void ccl::thread_xor_ln160_fu_27216_p2() {
    xor_ln160_fu_27216_p2 = (icmp_ln163_reg_30878.read() ^ ap_const_lv1_1);
}

void ccl::thread_y_fu_27199_p2() {
    y_fu_27199_p2 = (!y_0_i_reg_17741.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(y_0_i_reg_17741.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void ccl::thread_zext_ln113_1_fu_19114_p1() {
    zext_ln113_1_fu_19114_p1 = esl_zext<64,13>(or_ln110_fu_19108_p2.read());
}

void ccl::thread_zext_ln113_2_fu_19131_p1() {
    zext_ln113_2_fu_19131_p1 = esl_zext<64,13>(add_ln110_fu_19125_p2.read());
}

void ccl::thread_zext_ln113_3_fu_19142_p1() {
    zext_ln113_3_fu_19142_p1 = esl_zext<64,13>(add_ln110_1_fu_19136_p2.read());
}

void ccl::thread_zext_ln113_4_fu_19153_p1() {
    zext_ln113_4_fu_19153_p1 = esl_zext<64,13>(add_ln110_2_fu_19147_p2.read());
}

void ccl::thread_zext_ln113_5_fu_19164_p1() {
    zext_ln113_5_fu_19164_p1 = esl_zext<64,13>(add_ln110_3_fu_19158_p2.read());
}

void ccl::thread_zext_ln113_6_fu_19175_p1() {
    zext_ln113_6_fu_19175_p1 = esl_zext<64,13>(add_ln110_4_fu_19169_p2.read());
}

void ccl::thread_zext_ln113_7_fu_19186_p1() {
    zext_ln113_7_fu_19186_p1 = esl_zext<64,13>(add_ln110_5_fu_19180_p2.read());
}

void ccl::thread_zext_ln113_8_fu_19197_p1() {
    zext_ln113_8_fu_19197_p1 = esl_zext<64,13>(add_ln110_6_fu_19191_p2.read());
}

void ccl::thread_zext_ln113_9_fu_19208_p1() {
    zext_ln113_9_fu_19208_p1 = esl_zext<64,13>(add_ln110_7_fu_19202_p2.read());
}

void ccl::thread_zext_ln113_fu_19103_p1() {
    zext_ln113_fu_19103_p1 = esl_zext<64,13>(i_3_0_i_reg_17516.read());
}

void ccl::thread_zext_ln136_fu_19510_p1() {
    zext_ln136_fu_19510_p1 = esl_zext<64,9>(select_ln136_reg_28768_pp4_iter1_reg.read());
}

void ccl::thread_zext_ln1499_1_fu_19279_p1() {
    zext_ln1499_1_fu_19279_p1 = esl_zext<18,9>(select_ln119_fu_19237_p3.read());
}

void ccl::thread_zext_ln1499_fu_19269_p1() {
    zext_ln1499_fu_19269_p1 = esl_zext<18,14>(tmp_6_fu_19261_p3.read());
}

void ccl::thread_zext_ln161_fu_23100_p1() {
    zext_ln161_fu_23100_p1 = esl_zext<64,32>(sext_ln160_fu_23096_p1.read());
}

void ccl::thread_zext_ln162_1_fu_27287_p1() {
    zext_ln162_1_fu_27287_p1 = esl_zext<18,9>(select_ln227_fu_27245_p3.read());
}

void ccl::thread_zext_ln162_fu_27277_p1() {
    zext_ln162_fu_27277_p1 = esl_zext<18,14>(tmp_10_fu_27269_p3.read());
}

void ccl::thread_zext_ln175_1_fu_23442_p1() {
    zext_ln175_1_fu_23442_p1 = esl_zext<17,16>(select_ln163_reg_30883.read());
}

void ccl::thread_zext_ln175_2_fu_23451_p1() {
    zext_ln175_2_fu_23451_p1 = esl_zext<32,17>(add_ln175_fu_23445_p2.read());
}

void ccl::thread_zext_ln182_fu_23124_p1() {
    zext_ln182_fu_23124_p1 = esl_zext<64,16>(select_ln163_fu_23116_p3.read());
}

void ccl::thread_zext_ln203_2_fu_18604_p1() {
    zext_ln203_2_fu_18604_p1 = esl_zext<64,18>(add_ln203_fu_18598_p2.read());
}

void ccl::thread_zext_ln203_3_fu_18589_p1() {
    zext_ln203_3_fu_18589_p1 = esl_zext<64,18>(add_ln203_3_fu_18583_p2.read());
}

void ccl::thread_zext_ln203_fu_18594_p1() {
    zext_ln203_fu_18594_p1 = esl_zext<18,9>(select_ln97_fu_18468_p3.read());
}

void ccl::thread_zext_ln40_fu_18321_p1() {
    zext_ln40_fu_18321_p1 = esl_zext<32,18>(ap_phi_mux_p_Val2_ph_phi_fu_17419_p4.read());
}

void ccl::thread_zext_ln46_fu_18355_p1() {
    zext_ln46_fu_18355_p1 = esl_zext<64,9>(i_0_i_reg_17427.read());
}

void ccl::thread_zext_ln49_fu_18345_p1() {
    zext_ln49_fu_18345_p1 = esl_zext<64,9>(add_ln49_fu_18339_p2.read());
}

void ccl::thread_zext_ln53_fu_18350_p1() {
    zext_ln53_fu_18350_p1 = esl_zext<64,9>(i_0_i_reg_17427.read());
}

void ccl::thread_zext_ln559_fu_19482_p1() {
    zext_ln559_fu_19482_p1 = esl_zext<64,16>(grp_fu_18274_p4.read());
}

void ccl::thread_zext_ln62_fu_18543_p1() {
    zext_ln62_fu_18543_p1 = esl_zext<10,9>(select_ln97_fu_18468_p3.read());
}

void ccl::thread_zext_ln74_1_fu_18722_p1() {
    zext_ln74_1_fu_18722_p1 = esl_zext<64,16>(above_fu_18685_p3.read());
}

void ccl::thread_zext_ln74_fu_18912_p1() {
    zext_ln74_fu_18912_p1 = esl_zext<64,16>(previous_reg_27412.read());
}

void ccl::thread_zext_ln79_1_fu_18717_p1() {
    zext_ln79_1_fu_18717_p1 = esl_zext<64,16>(previous_fu_18651_p3.read());
}

void ccl::thread_zext_ln79_fu_18908_p1() {
    zext_ln79_fu_18908_p1 = esl_zext<64,16>(above_reg_27418.read());
}

void ccl::thread_zext_ln835_1_fu_18533_p1() {
    zext_ln835_1_fu_18533_p1 = esl_zext<18,14>(tmp_39_fu_18525_p3.read());
}

void ccl::thread_zext_ln835_2_fu_18563_p1() {
    zext_ln835_2_fu_18563_p1 = esl_zext<64,18>(add_ln835_fu_18557_p2.read());
}

void ccl::thread_zext_ln835_3_fu_18568_p1() {
    zext_ln835_3_fu_18568_p1 = esl_zext<18,9>(select_ln97_fu_18468_p3.read());
}

void ccl::thread_zext_ln835_4_fu_18578_p1() {
    zext_ln835_4_fu_18578_p1 = esl_zext<64,18>(add_ln835_1_fu_18572_p2.read());
}

void ccl::thread_zext_ln835_5_fu_18972_p1() {
    zext_ln835_5_fu_18972_p1 = esl_zext<18,14>(tmp_2_fu_18964_p3.read());
}

void ccl::thread_zext_ln835_6_fu_18982_p1() {
    zext_ln835_6_fu_18982_p1 = esl_zext<18,9>(select_ln105_fu_18940_p3.read());
}

void ccl::thread_zext_ln835_7_fu_19442_p1() {
    zext_ln835_7_fu_19442_p1 = esl_zext<18,14>(tmp_8_fu_19434_p3.read());
}

void ccl::thread_zext_ln835_8_fu_19452_p1() {
    zext_ln835_8_fu_19452_p1 = esl_zext<18,9>(select_ln136_fu_19410_p3.read());
}

void ccl::thread_zext_ln835_fu_18500_p1() {
    zext_ln835_fu_18500_p1 = esl_zext<18,14>(tmp_38_fu_18492_p3.read());
}

}

