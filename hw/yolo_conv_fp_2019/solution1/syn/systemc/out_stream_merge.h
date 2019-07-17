// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _out_stream_merge_HH_
#define _out_stream_merge_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct out_stream_merge : public sc_module {
    // Port declarations 88
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<16> > out_stream_group_13_V_V_dout;
    sc_in< sc_logic > out_stream_group_13_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_13_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_5_V_V_dout;
    sc_in< sc_logic > out_stream_group_5_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_5_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_14_V_V_dout;
    sc_in< sc_logic > out_stream_group_14_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_14_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_6_V_V_dout;
    sc_in< sc_logic > out_stream_group_6_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_6_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_15_V_V_dout;
    sc_in< sc_logic > out_stream_group_15_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_15_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_7_V_V_dout;
    sc_in< sc_logic > out_stream_group_7_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_7_V_V_read;
    sc_in< sc_logic > outStream_TREADY;
    sc_in< sc_logic > ap_ce;
    sc_in< sc_lv<16> > out_stream_group_0_V_V_dout;
    sc_in< sc_logic > out_stream_group_0_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_0_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_1_V_V_dout;
    sc_in< sc_logic > out_stream_group_1_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_1_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_2_V_V_dout;
    sc_in< sc_logic > out_stream_group_2_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_2_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_3_V_V_dout;
    sc_in< sc_logic > out_stream_group_3_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_3_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_4_V_V_dout;
    sc_in< sc_logic > out_stream_group_4_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_4_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_8_V_V_dout;
    sc_in< sc_logic > out_stream_group_8_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_8_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_9_V_V_dout;
    sc_in< sc_logic > out_stream_group_9_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_9_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_10_V_V_dout;
    sc_in< sc_logic > out_stream_group_10_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_10_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_11_V_V_dout;
    sc_in< sc_logic > out_stream_group_11_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_11_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_12_V_V_dout;
    sc_in< sc_logic > out_stream_group_12_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_12_V_V_read;
    sc_out< sc_lv<32> > outStream_TDATA;
    sc_out< sc_logic > outStream_TVALID;
    sc_out< sc_lv<4> > outStream_TKEEP;
    sc_out< sc_lv<4> > outStream_TSTRB;
    sc_out< sc_lv<2> > outStream_TUSER;
    sc_out< sc_lv<1> > outStream_TLAST;
    sc_out< sc_lv<5> > outStream_TID;
    sc_out< sc_lv<6> > outStream_TDEST;
    sc_in< sc_lv<2> > input_ch_idx;
    sc_in< sc_lv<4> > curr_input_keep_V;
    sc_in< sc_lv<4> > curr_input_strb_V;
    sc_in< sc_lv<2> > curr_input_user_V;
    sc_in< sc_lv<5> > curr_input_id_V;
    sc_in< sc_lv<6> > curr_input_dest_V;
    sc_in< sc_lv<1> > last_V;
    sc_out< sc_logic > out_stream_group_0_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_1_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_2_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_3_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_4_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_5_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_6_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_7_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_8_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_9_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_10_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_11_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_12_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_13_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_14_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_15_V_V_blk_n;
    sc_out< sc_logic > outStream_TDATA_blk_n;


    // Module declarations
    out_stream_merge(sc_module_name name);
    SC_HAS_PROCESS(out_stream_merge);

    ~out_stream_merge();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage3;
    sc_signal< sc_lv<1> > phi_ln114_4_reg_690;
    sc_signal< sc_lv<1> > icmp_ln114_5_reg_1089;
    sc_signal< sc_lv<1> > phi_ln114_5_reg_749;
    sc_signal< bool > ap_predicate_op129_read_state4;
    sc_signal< bool > ap_predicate_op131_read_state4;
    sc_signal< sc_lv<1> > icmp_ln114_6_reg_1046;
    sc_signal< sc_lv<1> > phi_ln114_6_reg_700;
    sc_signal< bool > ap_predicate_op137_read_state4;
    sc_signal< bool > ap_predicate_op139_read_state4;
    sc_signal< sc_lv<1> > icmp_ln114_7_reg_1103;
    sc_signal< sc_lv<1> > phi_ln114_7_reg_759;
    sc_signal< bool > ap_predicate_op141_read_state4;
    sc_signal< bool > ap_predicate_op143_read_state4;
    sc_signal< bool > ap_block_state4_pp0_stage3_iter0;
    sc_signal< bool > ap_block_state4_io;
    sc_signal< bool > ap_block_pp0_stage3_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< bool > ap_block_pp0_stage1;
    sc_signal< sc_lv<1> > icmp_ln114_reg_1004;
    sc_signal< sc_lv<1> > phi_ln114_reg_617;
    sc_signal< sc_lv<1> > icmp_ln114_1_reg_1008;
    sc_signal< sc_lv<1> > phi_ln114_1_reg_629;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage2;
    sc_signal< bool > ap_block_pp0_stage2;
    sc_signal< sc_lv<1> > icmp_ln114_2_reg_1012;
    sc_signal< sc_lv<1> > phi_ln114_2_reg_668;
    sc_signal< sc_lv<1> > icmp_ln114_3_reg_1085;
    sc_signal< sc_lv<1> > phi_ln114_3_reg_678;
    sc_signal< sc_lv<1> > icmp_ln114_4_reg_1026;
    sc_signal< bool > ap_block_pp0_stage3;
    sc_signal< sc_lv<4> > shl_ln1_fu_849_p3;
    sc_signal< sc_lv<4> > shl_ln1_reg_998;
    sc_signal< bool > ap_block_state1_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state5_io;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln114_fu_857_p2;
    sc_signal< sc_lv<1> > icmp_ln114_1_fu_869_p2;
    sc_signal< sc_lv<1> > ap_phi_mux_phi_ln114_phi_fu_620_p4;
    sc_signal< sc_lv<1> > icmp_ln114_2_fu_881_p2;
    sc_signal< sc_lv<1> > tmp_17_nbreadreq_fu_358_p3;
    sc_signal< sc_lv<1> > tmp_16_nbreadreq_fu_366_p3;
    sc_signal< sc_lv<1> > icmp_ln114_4_fu_893_p2;
    sc_signal< sc_lv<1> > tmp_19_nbreadreq_fu_374_p3;
    sc_signal< sc_lv<1> > tmp_18_nbreadreq_fu_382_p3;
    sc_signal< sc_lv<3> > or_ln262_fu_899_p2;
    sc_signal< sc_lv<3> > or_ln262_reg_1040;
    sc_signal< sc_lv<1> > icmp_ln114_6_fu_905_p2;
    sc_signal< sc_lv<1> > tmp_21_nbreadreq_fu_390_p3;
    sc_signal< sc_lv<1> > tmp_20_nbreadreq_fu_398_p3;
    sc_signal< sc_lv<6> > tmp_dest_V_reg_1060;
    sc_signal< bool > ap_predicate_op52_read_state2;
    sc_signal< bool > ap_predicate_op54_read_state2;
    sc_signal< bool > ap_predicate_op57_read_state2;
    sc_signal< bool > ap_predicate_op59_read_state2;
    sc_signal< bool > ap_block_state2_pp0_stage1_iter0;
    sc_signal< bool > ap_block_state2_io;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<5> > tmp_id_V_reg_1065;
    sc_signal< sc_lv<2> > tmp_user_V_reg_1070;
    sc_signal< sc_lv<4> > tmp_strb_V_reg_1075;
    sc_signal< sc_lv<4> > tmp_keep_V_reg_1080;
    sc_signal< sc_lv<1> > icmp_ln114_3_fu_925_p2;
    sc_signal< sc_lv<1> > ap_phi_mux_phi_ln114_2_phi_fu_671_p4;
    sc_signal< sc_lv<1> > icmp_ln114_5_fu_936_p2;
    sc_signal< sc_lv<1> > ap_phi_mux_phi_ln114_4_phi_fu_693_p4;
    sc_signal< sc_lv<1> > tmp_1_5_nbreadreq_fu_507_p3;
    sc_signal< sc_lv<1> > tmp_1_4_nbreadreq_fu_515_p3;
    sc_signal< sc_lv<1> > icmp_ln114_7_fu_955_p2;
    sc_signal< sc_lv<1> > ap_phi_mux_phi_ln114_6_phi_fu_703_p4;
    sc_signal< sc_lv<1> > tmp_1_7_nbreadreq_fu_523_p3;
    sc_signal< sc_lv<1> > tmp_1_6_nbreadreq_fu_531_p3;
    sc_signal< sc_lv<1> > icmp_ln285_fu_961_p2;
    sc_signal< sc_lv<1> > icmp_ln285_reg_1117;
    sc_signal< bool > ap_predicate_op100_read_state3;
    sc_signal< bool > ap_predicate_op102_read_state3;
    sc_signal< bool > ap_predicate_op106_read_state3;
    sc_signal< bool > ap_predicate_op108_read_state3;
    sc_signal< bool > ap_predicate_op114_read_state3;
    sc_signal< bool > ap_predicate_op116_read_state3;
    sc_signal< bool > ap_block_state3_pp0_stage2_iter0;
    sc_signal< bool > ap_block_state3_io;
    sc_signal< bool > ap_block_pp0_stage2_11001;
    sc_signal< sc_lv<1> > tmp_last_V_fu_984_p2;
    sc_signal< sc_lv<1> > tmp_last_V_reg_1152;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0_reg;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< bool > ap_block_pp0_stage3_subdone;
    sc_signal< sc_lv<4> > ap_port_reg_curr_input_keep_V;
    sc_signal< sc_lv<4> > ap_port_reg_curr_input_strb_V;
    sc_signal< sc_lv<2> > ap_port_reg_curr_input_user_V;
    sc_signal< sc_lv<5> > ap_port_reg_curr_input_id_V;
    sc_signal< sc_lv<6> > ap_port_reg_curr_input_dest_V;
    sc_signal< sc_lv<1> > ap_port_reg_last_V;
    sc_signal< sc_lv<1> > tmp_s_nbreadreq_fu_334_p3;
    sc_signal< sc_lv<1> > ap_phi_reg_pp0_iter0_phi_ln114_reg_617;
    sc_signal< sc_lv<1> > tmp_15_nbreadreq_fu_326_p3;
    sc_signal< sc_lv<1> > tmp_1_s_nbreadreq_fu_350_p3;
    sc_signal< sc_lv<1> > ap_phi_reg_pp0_iter0_phi_ln114_1_reg_629;
    sc_signal< sc_lv<1> > tmp_1_1_nbreadreq_fu_342_p3;
    sc_signal< sc_lv<16> > ap_phi_mux_tmp_V_load_phi_fu_644_p4;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_tmp_V_load_reg_641;
    sc_signal< sc_lv<16> > ap_phi_mux_curr_output_0_1_2_0_phi_fu_656_p6;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_1_2_0_reg_652;
    sc_signal< sc_lv<1> > ap_phi_reg_pp0_iter0_phi_ln114_2_reg_668;
    sc_signal< sc_lv<1> > tmp_1_2_nbreadreq_fu_499_p3;
    sc_signal< sc_lv<1> > ap_phi_reg_pp0_iter0_phi_ln114_3_reg_678;
    sc_signal< sc_lv<1> > tmp_1_3_nbreadreq_fu_491_p3;
    sc_signal< sc_lv<1> > ap_phi_reg_pp0_iter0_phi_ln114_4_reg_690;
    sc_signal< sc_lv<1> > ap_phi_reg_pp0_iter0_phi_ln114_6_reg_700;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_1_4_0_reg_710;
    sc_signal< sc_lv<16> > ap_phi_mux_tmp_V_load_1_phi_fu_726_p4;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_tmp_V_load_1_reg_723;
    sc_signal< sc_lv<16> > ap_phi_mux_curr_output_0_1_2_1_phi_fu_737_p6;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_1_2_1_reg_734;
    sc_signal< sc_lv<1> > ap_phi_reg_pp0_iter0_phi_ln114_5_reg_749;
    sc_signal< sc_lv<1> > ap_phi_reg_pp0_iter0_phi_ln114_7_reg_759;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_1_4_1_reg_769;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_tmp_V_load_2_reg_781;
    sc_signal< sc_lv<16> > ap_phi_mux_curr_output_0_1_2_2_phi_fu_793_p6;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_1_2_2_reg_790;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_1_4_2_reg_805;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter1_curr_output_0_1_4_2_reg_805;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_tmp_V_load_3_reg_816;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter1_tmp_V_load_3_reg_816;
    sc_signal< sc_lv<16> > ap_phi_mux_curr_output_0_1_2_3_phi_fu_828_p6;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter1_curr_output_0_1_2_3_reg_825;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_1_2_3_reg_825;
    sc_signal< sc_lv<32> > tmp_data_fu_911_p3;
    sc_signal< bool > ap_block_pp0_stage1_01001;
    sc_signal< sc_lv<32> > tmp_data_1_fu_966_p3;
    sc_signal< bool > ap_block_pp0_stage2_01001;
    sc_signal< sc_lv<32> > tmp_data_2_fu_975_p3;
    sc_signal< bool > ap_block_pp0_stage3_01001;
    sc_signal< sc_lv<32> > tmp_data_3_fu_989_p3;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<1> > trunc_ln262_fu_837_p1;
    sc_signal< sc_lv<4> > or_ln114_fu_863_p2;
    sc_signal< sc_lv<4> > or_ln114_1_fu_875_p2;
    sc_signal< sc_lv<4> > or_ln114_3_fu_887_p2;
    sc_signal< sc_lv<3> > shl_ln_fu_841_p3;
    sc_signal< sc_lv<4> > or_ln114_2_fu_920_p2;
    sc_signal< sc_lv<4> > or_ln114_4_fu_931_p2;
    sc_signal< sc_lv<4> > shl_ln2_fu_942_p3;
    sc_signal< sc_lv<4> > or_ln114_5_fu_949_p2;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0_0to0;
    sc_signal< sc_logic > ap_reset_idle_pp0;
    sc_signal< sc_logic > ap_idle_pp0_1to1;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< bool > ap_block_pp0_stage2_subdone;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< bool > ap_condition_874;
    sc_signal< bool > ap_condition_295;
    sc_signal< bool > ap_condition_297;
    sc_signal< bool > ap_condition_28;
    sc_signal< bool > ap_condition_294;
    sc_signal< bool > ap_condition_601;
    sc_signal< bool > ap_condition_535;
    sc_signal< bool > ap_condition_830;
    sc_signal< bool > ap_condition_834;
    sc_signal< bool > ap_condition_905;
    sc_signal< bool > ap_condition_111;
    sc_signal< bool > ap_condition_123;
    sc_signal< bool > ap_condition_144;
    sc_signal< bool > ap_condition_916;
    sc_signal< bool > ap_condition_920;
    sc_signal< bool > ap_condition_923;
    sc_signal< bool > ap_condition_928;
    sc_signal< bool > ap_condition_566;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_pp0_stage0;
    static const sc_lv<4> ap_ST_fsm_pp0_stage1;
    static const sc_lv<4> ap_ST_fsm_pp0_stage2;
    static const sc_lv<4> ap_ST_fsm_pp0_stage3;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<4> ap_const_lv4_2;
    static const sc_lv<4> ap_const_lv4_4;
    static const sc_lv<3> ap_const_lv3_3;
    static const sc_lv<4> ap_const_lv4_3;
    static const sc_lv<4> ap_const_lv4_5;
    static const sc_lv<4> ap_const_lv4_7;
    static const sc_lv<3> ap_const_lv3_7;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp0_stage2();
    void thread_ap_CS_fsm_pp0_stage3();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1();
    void thread_ap_block_pp0_stage1_01001();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_pp0_stage2();
    void thread_ap_block_pp0_stage2_01001();
    void thread_ap_block_pp0_stage2_11001();
    void thread_ap_block_pp0_stage2_subdone();
    void thread_ap_block_pp0_stage3();
    void thread_ap_block_pp0_stage3_01001();
    void thread_ap_block_pp0_stage3_11001();
    void thread_ap_block_pp0_stage3_subdone();
    void thread_ap_block_state1_pp0_stage0_iter0();
    void thread_ap_block_state2_io();
    void thread_ap_block_state2_pp0_stage1_iter0();
    void thread_ap_block_state3_io();
    void thread_ap_block_state3_pp0_stage2_iter0();
    void thread_ap_block_state4_io();
    void thread_ap_block_state4_pp0_stage3_iter0();
    void thread_ap_block_state5_io();
    void thread_ap_block_state5_pp0_stage0_iter1();
    void thread_ap_condition_111();
    void thread_ap_condition_123();
    void thread_ap_condition_144();
    void thread_ap_condition_28();
    void thread_ap_condition_294();
    void thread_ap_condition_295();
    void thread_ap_condition_297();
    void thread_ap_condition_535();
    void thread_ap_condition_566();
    void thread_ap_condition_601();
    void thread_ap_condition_830();
    void thread_ap_condition_834();
    void thread_ap_condition_874();
    void thread_ap_condition_905();
    void thread_ap_condition_916();
    void thread_ap_condition_920();
    void thread_ap_condition_923();
    void thread_ap_condition_928();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_reg_pp0_iter0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp0_0to0();
    void thread_ap_idle_pp0_1to1();
    void thread_ap_phi_mux_curr_output_0_1_2_0_phi_fu_656_p6();
    void thread_ap_phi_mux_curr_output_0_1_2_1_phi_fu_737_p6();
    void thread_ap_phi_mux_curr_output_0_1_2_2_phi_fu_793_p6();
    void thread_ap_phi_mux_curr_output_0_1_2_3_phi_fu_828_p6();
    void thread_ap_phi_mux_phi_ln114_2_phi_fu_671_p4();
    void thread_ap_phi_mux_phi_ln114_4_phi_fu_693_p4();
    void thread_ap_phi_mux_phi_ln114_6_phi_fu_703_p4();
    void thread_ap_phi_mux_phi_ln114_phi_fu_620_p4();
    void thread_ap_phi_mux_tmp_V_load_1_phi_fu_726_p4();
    void thread_ap_phi_mux_tmp_V_load_phi_fu_644_p4();
    void thread_ap_phi_reg_pp0_iter0_curr_output_0_1_2_0_reg_652();
    void thread_ap_phi_reg_pp0_iter0_curr_output_0_1_2_1_reg_734();
    void thread_ap_phi_reg_pp0_iter0_curr_output_0_1_2_2_reg_790();
    void thread_ap_phi_reg_pp0_iter0_curr_output_0_1_2_3_reg_825();
    void thread_ap_phi_reg_pp0_iter0_curr_output_0_1_4_2_reg_805();
    void thread_ap_phi_reg_pp0_iter0_phi_ln114_1_reg_629();
    void thread_ap_phi_reg_pp0_iter0_phi_ln114_3_reg_678();
    void thread_ap_phi_reg_pp0_iter0_phi_ln114_reg_617();
    void thread_ap_phi_reg_pp0_iter0_tmp_V_load_1_reg_723();
    void thread_ap_phi_reg_pp0_iter0_tmp_V_load_3_reg_816();
    void thread_ap_phi_reg_pp0_iter0_tmp_V_load_reg_641();
    void thread_ap_predicate_op100_read_state3();
    void thread_ap_predicate_op102_read_state3();
    void thread_ap_predicate_op106_read_state3();
    void thread_ap_predicate_op108_read_state3();
    void thread_ap_predicate_op114_read_state3();
    void thread_ap_predicate_op116_read_state3();
    void thread_ap_predicate_op129_read_state4();
    void thread_ap_predicate_op131_read_state4();
    void thread_ap_predicate_op137_read_state4();
    void thread_ap_predicate_op139_read_state4();
    void thread_ap_predicate_op141_read_state4();
    void thread_ap_predicate_op143_read_state4();
    void thread_ap_predicate_op52_read_state2();
    void thread_ap_predicate_op54_read_state2();
    void thread_ap_predicate_op57_read_state2();
    void thread_ap_predicate_op59_read_state2();
    void thread_ap_ready();
    void thread_ap_reset_idle_pp0();
    void thread_icmp_ln114_1_fu_869_p2();
    void thread_icmp_ln114_2_fu_881_p2();
    void thread_icmp_ln114_3_fu_925_p2();
    void thread_icmp_ln114_4_fu_893_p2();
    void thread_icmp_ln114_5_fu_936_p2();
    void thread_icmp_ln114_6_fu_905_p2();
    void thread_icmp_ln114_7_fu_955_p2();
    void thread_icmp_ln114_fu_857_p2();
    void thread_icmp_ln285_fu_961_p2();
    void thread_or_ln114_1_fu_875_p2();
    void thread_or_ln114_2_fu_920_p2();
    void thread_or_ln114_3_fu_887_p2();
    void thread_or_ln114_4_fu_931_p2();
    void thread_or_ln114_5_fu_949_p2();
    void thread_or_ln114_fu_863_p2();
    void thread_or_ln262_fu_899_p2();
    void thread_outStream_TDATA();
    void thread_outStream_TDATA_blk_n();
    void thread_outStream_TDEST();
    void thread_outStream_TID();
    void thread_outStream_TKEEP();
    void thread_outStream_TLAST();
    void thread_outStream_TSTRB();
    void thread_outStream_TUSER();
    void thread_outStream_TVALID();
    void thread_out_stream_group_0_V_V_blk_n();
    void thread_out_stream_group_0_V_V_read();
    void thread_out_stream_group_10_V_V_blk_n();
    void thread_out_stream_group_10_V_V_read();
    void thread_out_stream_group_11_V_V_blk_n();
    void thread_out_stream_group_11_V_V_read();
    void thread_out_stream_group_12_V_V_blk_n();
    void thread_out_stream_group_12_V_V_read();
    void thread_out_stream_group_13_V_V_blk_n();
    void thread_out_stream_group_13_V_V_read();
    void thread_out_stream_group_14_V_V_blk_n();
    void thread_out_stream_group_14_V_V_read();
    void thread_out_stream_group_15_V_V_blk_n();
    void thread_out_stream_group_15_V_V_read();
    void thread_out_stream_group_1_V_V_blk_n();
    void thread_out_stream_group_1_V_V_read();
    void thread_out_stream_group_2_V_V_blk_n();
    void thread_out_stream_group_2_V_V_read();
    void thread_out_stream_group_3_V_V_blk_n();
    void thread_out_stream_group_3_V_V_read();
    void thread_out_stream_group_4_V_V_blk_n();
    void thread_out_stream_group_4_V_V_read();
    void thread_out_stream_group_5_V_V_blk_n();
    void thread_out_stream_group_5_V_V_read();
    void thread_out_stream_group_6_V_V_blk_n();
    void thread_out_stream_group_6_V_V_read();
    void thread_out_stream_group_7_V_V_blk_n();
    void thread_out_stream_group_7_V_V_read();
    void thread_out_stream_group_8_V_V_blk_n();
    void thread_out_stream_group_8_V_V_read();
    void thread_out_stream_group_9_V_V_blk_n();
    void thread_out_stream_group_9_V_V_read();
    void thread_shl_ln1_fu_849_p3();
    void thread_shl_ln2_fu_942_p3();
    void thread_shl_ln_fu_841_p3();
    void thread_tmp_15_nbreadreq_fu_326_p3();
    void thread_tmp_16_nbreadreq_fu_366_p3();
    void thread_tmp_17_nbreadreq_fu_358_p3();
    void thread_tmp_18_nbreadreq_fu_382_p3();
    void thread_tmp_19_nbreadreq_fu_374_p3();
    void thread_tmp_1_1_nbreadreq_fu_342_p3();
    void thread_tmp_1_2_nbreadreq_fu_499_p3();
    void thread_tmp_1_3_nbreadreq_fu_491_p3();
    void thread_tmp_1_4_nbreadreq_fu_515_p3();
    void thread_tmp_1_5_nbreadreq_fu_507_p3();
    void thread_tmp_1_6_nbreadreq_fu_531_p3();
    void thread_tmp_1_7_nbreadreq_fu_523_p3();
    void thread_tmp_1_s_nbreadreq_fu_350_p3();
    void thread_tmp_20_nbreadreq_fu_398_p3();
    void thread_tmp_21_nbreadreq_fu_390_p3();
    void thread_tmp_data_1_fu_966_p3();
    void thread_tmp_data_2_fu_975_p3();
    void thread_tmp_data_3_fu_989_p3();
    void thread_tmp_data_fu_911_p3();
    void thread_tmp_last_V_fu_984_p2();
    void thread_tmp_s_nbreadreq_fu_334_p3();
    void thread_trunc_ln262_fu_837_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif