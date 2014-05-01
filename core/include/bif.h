// Copyright (c) 2013-2014 Cloudozer LLP. All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
// 
// * Redistributions of source code must retain the above copyright notice, this
// list of conditions and the following disclaimer.
// 
// * Redistributions in binary form must reproduce the above copyright notice,
// this list of conditions and the following disclaimer in the documentation
// and/or other materials provided with the distribution.
// 
// * Redistributions in any form must be accompanied by information on how to
// obtain complete source code for the LING software and any accompanying
// software that uses the LING software. The source code must either be included
// in the distribution or be available for no more than the cost of distribution
// plus a nominal fee, and must be freely redistributable under reasonable
// conditions.  For an executable file, complete source code means the source
// code for all modules it contains. It does not include source code for modules
// or files that typically accompany the major components of the operating
// system on which the executable file runs.
// 
// THIS SOFTWARE IS PROVIDED BY CLOUDOZER LLP ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, OR NON-INFRINGEMENT, ARE
// DISCLAIMED. IN NO EVENT SHALL CLOUDOZER LLP BE LIABLE FOR ANY DIRECT,
// INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#pragma once

#include "proc.h"
#include "term.h"

typedef term_t (*bif_func_t)();
typedef term_t (*bif_func0_t)(proc_t *proc);
typedef term_t (*bif_func1_t)(term_t Arg, proc_t *proc);
typedef term_t (*bif_func2_t)(term_t Arg1, term_t Arg2, proc_t *proc);

typedef term_t (*gc_bif_func1_t)(term_t Arg, proc_t *proc, term_t *regs, int live);
typedef term_t (*gc_bif_func2_t)(term_t Arg1, term_t Arg2, proc_t *proc, term_t *regs, int live);
typedef term_t (*gc_bif_func3_t)(term_t Arg1, term_t Arg2, term_t Arg3, proc_t *proc, term_t *regs, int live);

typedef term_t (*cbif_func_t)(proc_t *proc, term_t *regs);

// crypto:exor/2 [0]
term_t cbif_exor2(proc_t *proc, term_t *regs);
// crypto:rand_bytes/1 [1]
term_t cbif_rand_bytes1(proc_t *proc, term_t *regs);
// crypto:aes_cbc_crypt/4 [2]
term_t cbif_aes_cbc_crypt4(proc_t *proc, term_t *regs);
// crypto:sha512_mac_n/3 [3]
term_t cbif_sha512_mac_n3(proc_t *proc, term_t *regs);
// crypto:sha384_mac_n/3 [4]
term_t cbif_sha384_mac_n3(proc_t *proc, term_t *regs);
// crypto:sha256_mac_n/3 [5]
term_t cbif_sha256_mac_n3(proc_t *proc, term_t *regs);
// crypto:sha224_mac_n/3 [6]
term_t cbif_sha224_mac_n3(proc_t *proc, term_t *regs);
// crypto:sha_mac_n/3 [7]
term_t cbif_sha_mac_n3(proc_t *proc, term_t *regs);
// crypto:md5_mac_n/3 [8]
term_t cbif_md5_mac_n3(proc_t *proc, term_t *regs);
// crypto:sha_final/1 [9]
term_t cbif_sha_final1(proc_t *proc, term_t *regs);
// crypto:sha_update/2 [10]
term_t cbif_sha_update2(proc_t *proc, term_t *regs);
// crypto:sha_init/0 [11]
term_t cbif_sha_init0(proc_t *proc, term_t *regs);
// crypto:sha/1 [12]
term_t cbif_sha1(proc_t *proc, term_t *regs);
// crypto:md5_final/1 [13]
term_t cbif_md5_final1(proc_t *proc, term_t *regs);
// crypto:md5_update/2 [14]
term_t cbif_md5_update2(proc_t *proc, term_t *regs);
// crypto:md5_init/0 [15]
term_t cbif_md5_init0(proc_t *proc, term_t *regs);
// crypto:md5/1 [16]
term_t cbif_md5_1(proc_t *proc, term_t *regs);
// lists:keyfind/3 [17]
term_t cbif_keyfind3(proc_t *proc, term_t *regs);
// lists:keysearch/3 [18]
term_t cbif_keysearch3(proc_t *proc, term_t *regs);
// lists:keymember/3 [19]
term_t cbif_keymember3(proc_t *proc, term_t *regs);
// lists:reverse/2 [20]
term_t cbif_reverse2(proc_t *proc, term_t *regs);
// lists:member/2 [21]
term_t cbif_member2(proc_t *proc, term_t *regs);
// io:printable_range/0 [22]
term_t cbif_printable_range0(proc_t *proc, term_t *regs);
// net_kernel:dflag_unicode_io/1 [23]
term_t cbif_dflag_unicode_io1(proc_t *proc, term_t *regs);
// unicode:characters_to_binary/3 [24]
term_t cbif_characters_to_binary3(proc_t *proc, term_t *regs);
// unicode:characters_to_list/2 [25]
term_t cbif_characters_to_list2(proc_t *proc, term_t *regs);
// unicode:bin_is_7bit/1 [26]
term_t cbif_bin_is_7bit1(proc_t *proc, term_t *regs);
// binary:ip_checksum/1 [27]
term_t cbif_ip_checksum1(proc_t *proc, term_t *regs);
// binary:lookup_embedded/1 [28]
term_t cbif_lookup_embedded1(proc_t *proc, term_t *regs);
// binary:embedded_part/3 [29]
term_t cbif_embedded_part3(proc_t *proc, term_t *regs);
// binary:embedded_part/4 [30]
term_t cbif_embedded_part4(proc_t *proc, term_t *regs);
// binary:embedded_size/2 [31]
term_t cbif_embedded_size2(proc_t *proc, term_t *regs);
// binary:list_embedded/1 [32]
term_t cbif_list_embedded1(proc_t *proc, term_t *regs);
// binary:embedded_buckets/0 [33]
term_t cbif_embedded_buckets0(proc_t *proc, term_t *regs);
// binary:decode_unsigned/2 [34]
term_t cbif_decode_unsigned2(proc_t *proc, term_t *regs);
// binary:decode_unsigned/1 [35]
term_t cbif_decode_unsigned1(proc_t *proc, term_t *regs);
// binary:referenced_byte_size/1 [36]
term_t cbif_referenced_byte_size1(proc_t *proc, term_t *regs);
// binary:copy/2 [37]
term_t cbif_copy2(proc_t *proc, term_t *regs);
// binary:copy/1 [38]
term_t cbif_copy1(proc_t *proc, term_t *regs);
// binary:list_to_bin/1 [39]
term_t cbif_list_to_bin1(proc_t *proc, term_t *regs);
// binary:bin_to_list/3 [40]
term_t cbif_bin_to_list3(proc_t *proc, term_t *regs);
// binary:bin_to_list/2 [41]
term_t cbif_bin_to_list2(proc_t *proc, term_t *regs);
// binary:bin_to_list/1 [42]
term_t cbif_bin_to_list1(proc_t *proc, term_t *regs);
// binary:part/3 [43]
term_t cbif_part3(proc_t *proc, term_t *regs);
// binary:part/2 [44]
term_t cbif_part2(proc_t *proc, term_t *regs);
// binary:at/2 [45]
term_t cbif_at2(proc_t *proc, term_t *regs);
// binary:last/1 [46]
term_t cbif_last1(proc_t *proc, term_t *regs);
// binary:first/1 [47]
term_t cbif_first1(proc_t *proc, term_t *regs);
// binary:longest_common_suffix/1 [48]
term_t cbif_longest_common_suffix1(proc_t *proc, term_t *regs);
// binary:longest_common_prefix/1 [49]
term_t cbif_longest_common_prefix1(proc_t *proc, term_t *regs);
// binary:matches/3 [50]
term_t cbif_matches3(proc_t *proc, term_t *regs);
// binary:matches/2 [51]
term_t cbif_matches2(proc_t *proc, term_t *regs);
// binary:match/3 [52]
term_t cbif_match3(proc_t *proc, term_t *regs);
// binary:match/2 [53]
term_t cbif_match2(proc_t *proc, term_t *regs);
// binary:compile_pattern/1 [54]
term_t cbif_compile_pattern1(proc_t *proc, term_t *regs);
// math:erfc/1 [55]
term_t cbif_erfc1(proc_t *proc, term_t *regs);
// math:erf/1 [56]
term_t cbif_erf1(proc_t *proc, term_t *regs);
// math:sqrt/1 [57]
term_t cbif_sqrt1(proc_t *proc, term_t *regs);
// math:pow/2 [58]
term_t cbif_pow2(proc_t *proc, term_t *regs);
// math:log10/1 [59]
term_t cbif_log10_1(proc_t *proc, term_t *regs);
// math:log/1 [60]
term_t cbif_log1(proc_t *proc, term_t *regs);
// math:exp/1 [61]
term_t cbif_exp1(proc_t *proc, term_t *regs);
// math:atanh/1 [62]
term_t cbif_atanh1(proc_t *proc, term_t *regs);
// math:acosh/1 [63]
term_t cbif_acosh1(proc_t *proc, term_t *regs);
// math:asinh/1 [64]
term_t cbif_asinh1(proc_t *proc, term_t *regs);
// math:tanh/1 [65]
term_t cbif_tanh1(proc_t *proc, term_t *regs);
// math:cosh/1 [66]
term_t cbif_cosh1(proc_t *proc, term_t *regs);
// math:sinh/1 [67]
term_t cbif_sinh1(proc_t *proc, term_t *regs);
// math:atan2/2 [68]
term_t cbif_atan2_2(proc_t *proc, term_t *regs);
// math:atan/1 [69]
term_t cbif_atan1(proc_t *proc, term_t *regs);
// math:acos/1 [70]
term_t cbif_acos1(proc_t *proc, term_t *regs);
// math:asin/1 [71]
term_t cbif_asin1(proc_t *proc, term_t *regs);
// math:tan/1 [72]
term_t cbif_tan1(proc_t *proc, term_t *regs);
// math:cos/1 [73]
term_t cbif_cos1(proc_t *proc, term_t *regs);
// math:sin/1 [74]
term_t cbif_sin1(proc_t *proc, term_t *regs);
// erlang:node/1 [75]
term_t bif_node1(term_t Thing, proc_t *proc);
// erlang:make_ref/0 [76]
term_t cbif_make_ref0(proc_t *proc, term_t *regs);
// erlang:append_element/2 [77]
term_t cbif_append_element2(proc_t *proc, term_t *regs);
// erlang:make_tuple/3 [78]
term_t cbif_make_tuple3(proc_t *proc, term_t *regs);
// erlang:make_tuple/2 [79]
term_t cbif_make_tuple2(proc_t *proc, term_t *regs);
// erlang:setelement/3 [80]
term_t cbif_setelement3(proc_t *proc, term_t *regs);
// erlang:element/2 [81]
term_t bif_element2(term_t N, term_t Tuple, proc_t *proc);
// erlang:tl/1 [82]
term_t bif_tl1(term_t List, proc_t *proc);
// erlang:hd/1 [83]
term_t bif_hd1(term_t List, proc_t *proc);
// erlang:'--'/2 [84]
term_t cbif_minusminus2(proc_t *proc, term_t *regs);
// erlang:'++'/2 [85]
term_t cbif_plusplus2(proc_t *proc, term_t *regs);
// erlang:binary_part/3 [86]
term_t gc_bif_binary_part3(term_t Bin, term_t Pos, term_t Len, proc_t *proc, term_t *regs, int live);
// erlang:binary_part/2 [87]
term_t gc_bif_binary_part2(term_t Bin, term_t PosLen, proc_t *proc, term_t *regs, int live);
// erlang:split_binary/2 [88]
term_t cbif_split_binary2(proc_t *proc, term_t *regs);
// erlang:iolist_size/1 [89]
term_t cbif_iolist_size1(proc_t *proc, term_t *regs);
// erlang:iolist_to_binary/1 [90]
term_t cbif_iolist_to_binary1(proc_t *proc, term_t *regs);
// erlang:list_to_tuple/1 [91]
term_t cbif_list_to_tuple1(proc_t *proc, term_t *regs);
// erlang:tuple_to_list/1 [92]
term_t cbif_tuple_to_list1(proc_t *proc, term_t *regs);
// erlang:'external_size$'/2 [93]
term_t cbif_external_size0_2(proc_t *proc, term_t *regs);
// erlang:'term_to_binary$'/3 [94]
term_t cbif_term_to_binary0_3(proc_t *proc, term_t *regs);
// erlang:'binary_to_term$'/2 [95]
term_t cbif_binary_to_term0_2(proc_t *proc, term_t *regs);
// string:to_integer/1 [96]
term_t cbif_to_integer1(proc_t *proc, term_t *regs);
// erlang:list_to_bitstring/1 [97]
term_t cbif_list_to_bitstring1(proc_t *proc, term_t *regs);
// erlang:list_to_binary/1 [98]
term_t cbif_list_to_binary1(proc_t *proc, term_t *regs);
// erlang:bitstring_to_list/1 [99]
term_t cbif_bitstring_to_list1(proc_t *proc, term_t *regs);
// erlang:binary_to_list/3 [100]
term_t cbif_binary_to_list3(proc_t *proc, term_t *regs);
// erlang:binary_to_list/1 [101]
term_t cbif_binary_to_list1(proc_t *proc, term_t *regs);
// erlang:float_to_list/1 [102]
term_t cbif_float_to_list1(proc_t *proc, term_t *regs);
// erlang:list_to_float/1 [103]
term_t cbif_list_to_float1(proc_t *proc, term_t *regs);
// erlang:integer_to_list/1 [104]
term_t cbif_integer_to_list1(proc_t *proc, term_t *regs);
// erlang:atom_to_list/1 [105]
term_t cbif_atom_to_list1(proc_t *proc, term_t *regs);
// erlang:list_to_existing_atom/1 [106]
term_t cbif_list_to_existing_atom1(proc_t *proc, term_t *regs);
// erlang:list_to_atom/1 [107]
term_t cbif_list_to_atom1(proc_t *proc, term_t *regs);
// erlang:ref_to_list/1 [108]
term_t cbif_ref_to_list1(proc_t *proc, term_t *regs);
// erlang:port_to_list/1 [109]
term_t cbif_port_to_list1(proc_t *proc, term_t *regs);
// erlang:fun_to_list/1 [110]
term_t cbif_fun_to_list1(proc_t *proc, term_t *regs);
// erlang:list_to_pid/1 [111]
term_t cbif_list_to_pid1(proc_t *proc, term_t *regs);
// erlang:pid_to_list/1 [112]
term_t cbif_pid_to_list1(proc_t *proc, term_t *regs);
// erlang:abs/1 [113]
term_t gc_bif_abs1(term_t Value, proc_t *proc, term_t *regs, int live);
// erlang:round/1 [114]
term_t gc_bif_round1(term_t Value, proc_t *proc, term_t *regs, int live);
// erlang:trunc/1 [115]
term_t gc_bif_trunc1(term_t Value, proc_t *proc, term_t *regs, int live);
// erlang:float/1 [116]
term_t gc_bif_float1(term_t Value, proc_t *proc, term_t *regs, int live);
// erlang:bit_size/1 [117]
term_t gc_bif_bit_size1(term_t Bin, proc_t *proc, term_t *regs, int live);
// erlang:byte_size/1 [118]
term_t gc_bif_byte_size1(term_t Bin, proc_t *proc, term_t *regs, int live);
// erlang:tuple_size/1 [119]
term_t bif_tuple_size1(term_t Tuple, proc_t *proc);
// erlang:size/1 [120]
term_t bif_size1(term_t TupleBin, proc_t *proc);
// erlang:length/1 [121]
term_t gc_bif_length1(term_t List, proc_t *proc, term_t *regs, int live);
// erlang:'/='/2 [122]
term_t bif_ne2(term_t A, term_t B, proc_t *proc);
// erlang:'=/='/2 [123]
term_t bif_ne_exact2(term_t A, term_t B, proc_t *proc);
// erlang:'=='/2 [124]
term_t bif_eq2(term_t A, term_t B, proc_t *proc);
// erlang:'=:='/2 [125]
term_t bif_eq_exact2(term_t A, term_t B, proc_t *proc);
// erlang:'>='/2 [126]
term_t bif_more_eq2(term_t A, term_t B, proc_t *proc);
// erlang:'=<'/2 [127]
term_t bif_less_eq2(term_t A, term_t B, proc_t *proc);
// erlang:'>'/2 [128]
term_t bif_more2(term_t A, term_t B, proc_t *proc);
// erlang:'<'/2 [129]
term_t bif_less2(term_t A, term_t B, proc_t *proc);
// erlang:'not'/1 [130]
term_t bif_not1(term_t A, proc_t *proc);
// erlang:'or'/2 [131]
term_t bif_or2(term_t A, term_t B, proc_t *proc);
// erlang:'and'/2 [132]
term_t bif_and2(term_t A, term_t B, proc_t *proc);
// erlang:is_reference/1 [133]
term_t bif_is_reference1(term_t Pid, proc_t *proc);
// erlang:is_port/1 [134]
term_t bif_is_port1(term_t Port, proc_t *proc);
// erlang:is_pid/1 [135]
term_t bif_is_pid1(term_t Pid, proc_t *proc);
// erlang:is_function/2 [136]
term_t bif_is_function2(term_t Fun, term_t Arity, proc_t *proc);
// erlang:is_function/1 [137]
term_t bif_is_function1(term_t Fun, proc_t *proc);
// erlang:is_tuple/1 [138]
term_t bif_is_tuple1(term_t Tuple, proc_t *proc);
// erlang:is_boolean/1 [139]
term_t bif_is_boolean1(term_t Fun, proc_t *proc);
// erlang:is_atom/1 [140]
term_t bif_is_atom1(term_t Atom, proc_t *proc);
// erlang:is_number/1 [141]
term_t bif_is_number1(term_t N, proc_t *proc);
// erlang:is_float/1 [142]
term_t bif_is_float1(term_t N, proc_t *proc);
// erlang:is_integer/1 [143]
term_t bif_is_integer1(term_t N, proc_t *proc);
// erlang:is_list/1 [144]
term_t bif_is_list1(term_t List, proc_t *proc);
// erlang:is_bitstring/1 [145]
term_t bif_is_bitstring1(term_t Bits, proc_t *proc);
// erlang:is_binary/1 [146]
term_t bif_is_binary1(term_t Binary, proc_t *proc);
// erlang:crc32_combine/3 [147]
term_t cbif_crc32_combine3(proc_t *proc, term_t *regs);
// erlang:crc32/2 [148]
term_t cbif_crc32_2(proc_t *proc, term_t *regs);
// erlang:md5_final/1 [149]
term_t cbif_md5_final1(proc_t *proc, term_t *regs);
// erlang:md5_update/2 [150]
term_t cbif_md5_update2(proc_t *proc, term_t *regs);
// erlang:md5_init/0 [151]
term_t cbif_md5_init0(proc_t *proc, term_t *regs);
// erlang:md5/1 [152]
term_t cbif_md5_1(proc_t *proc, term_t *regs);
// erlang:phash2/2 [153]
term_t cbif_phash2_2(proc_t *proc, term_t *regs);
// erlang:phash2/1 [154]
term_t cbif_phash2_1(proc_t *proc, term_t *regs);
// erlang:phash/2 [155]
term_t cbif_phash2(proc_t *proc, term_t *regs);
// erlang:hash/2 [156]
term_t cbif_hash2(proc_t *proc, term_t *regs);
// lwip:stats/0 [157]
term_t cbif_stats0(proc_t *proc, term_t *regs);
// ling:experimental/2 [158]
term_t cbif_experimental2(proc_t *proc, term_t *regs);
// ling:profile_display/0 [159]
term_t cbif_profile_display0(proc_t *proc, term_t *regs);
// ling:profile/1 [160]
term_t cbif_profile1(proc_t *proc, term_t *regs);
// ling:trace/2 [161]
term_t cbif_trace2(proc_t *proc, term_t *regs);
// ling:trace/1 [162]
term_t cbif_trace1(proc_t *proc, term_t *regs);
// ling:b3/0 [163]
term_t cbif_b3_0(proc_t *proc, term_t *regs);
// ling:b2/0 [164]
term_t cbif_b2_0(proc_t *proc, term_t *regs);
// ling:b1/0 [165]
term_t cbif_b1_0(proc_t *proc, term_t *regs);
// lwip:setup/4 [166]
term_t cbif_setup4(proc_t *proc, term_t *regs);
// erlang:'decode_packet$'/4 [167]
term_t cbif_decode_packet4(proc_t *proc, term_t *regs);
// erlang:port_get_data/1 [168]
term_t cbif_port_get_data1(proc_t *proc, term_t *regs);
// erlang:port_set_data/2 [169]
term_t cbif_port_set_data2(proc_t *proc, term_t *regs);
// erlang:port_control/3 [170]
term_t cbif_port_control3(proc_t *proc, term_t *regs);
// erlang:port_is_busy/1 [171]
term_t cbif_port_is_busy1(proc_t *proc, term_t *regs);
// erlang:port_open/2 [172]
term_t cbif_port_open2(proc_t *proc, term_t *regs);
// erlang:port_info/2 [173]
term_t cbif_port_info2(proc_t *proc, term_t *regs);
// erlang:release_counter/1 [174]
term_t cbif_release_counter1(proc_t *proc, term_t *regs);
// erlang:update_counter/2 [175]
term_t cbif_update_counter2(proc_t *proc, term_t *regs);
// erlang:read_counter/1 [176]
term_t cbif_read_counter1(proc_t *proc, term_t *regs);
// erlang:new_counter/1 [177]
term_t cbif_new_counter1(proc_t *proc, term_t *regs);
// erlang:disk_info/1 [178]
term_t cbif_disk_info1(proc_t *proc, term_t *regs);
// auth:secret2/0 [179]
term_t cbif_secret2_0(proc_t *proc, term_t *regs);
// auth:secret1/0 [180]
term_t cbif_secret1_0(proc_t *proc, term_t *regs);
// auth:set_secrets/2 [181]
term_t cbif_set_secrets2(proc_t *proc, term_t *regs);
// erlang:node_group/0 [182]
term_t cbif_node_group0(proc_t *proc, term_t *regs);
// erlang:parent_node/0 [183]
term_t cbif_parent_node0(proc_t *proc, term_t *regs);
// erlang:read_timer/1 [184]
term_t cbif_read_timer1(proc_t *proc, term_t *regs);
// erlang:cancel_timer/1 [185]
term_t cbif_cancel_timer1(proc_t *proc, term_t *regs);
// erlang:send_after/3 [186]
term_t cbif_send_after3(proc_t *proc, term_t *regs);
// erlang:start_timer/3 [187]
term_t cbif_start_timer3(proc_t *proc, term_t *regs);
// file:native_name_encoding/0 [188]
term_t cbif_native_name_encoding0(proc_t *proc, term_t *regs);
// erlang:universaltime/0 [189]
term_t cbif_universaltime0(proc_t *proc, term_t *regs);
// erlang:localtime/0 [190]
term_t cbif_localtime0(proc_t *proc, term_t *regs);
// erlang:time/0 [191]
term_t cbif_time0(proc_t *proc, term_t *regs);
// erlang:date/0 [192]
term_t cbif_date0(proc_t *proc, term_t *regs);
// erlang:now/0 [193]
term_t cbif_now0(proc_t *proc, term_t *regs);
// erlang:'halt$'/2 [194]
term_t cbif_halt2(proc_t *proc, term_t *regs);
// erlang:fun_info/2 [195]
term_t cbif_fun_info2(proc_t *proc, term_t *regs);
// erlang:fun_info/1 [196]
term_t cbif_fun_info1(proc_t *proc, term_t *regs);
// erlang:function_exported/3 [197]
term_t cbif_function_exported3(proc_t *proc, term_t *regs);
// erlang:get_module_info/2 [198]
term_t cbif_get_module_info2(proc_t *proc, term_t *regs);
// erlang:check_process_code/2 [200]
term_t cbif_check_process_code2(proc_t *proc, term_t *regs);
// erlang:check_old_code/1 [201]
term_t cbif_check_old_code1(proc_t *proc, term_t *regs);
// erlang:delete_module/1 [202]
term_t cbif_delete_module1(proc_t *proc, term_t *regs);
// erlang:'load_module$'/2 [203]
term_t cbif_load_module2(proc_t *proc, term_t *regs);
// erlang:module_loaded/1 [204]
term_t cbif_module_loaded1(proc_t *proc, term_t *regs);
// erlang:pre_loaded/0 [205]
term_t cbif_pre_loaded0(proc_t *proc, term_t *regs);
// erlang:loaded/0 [206]
term_t cbif_loaded0(proc_t *proc, term_t *regs);
// erlang:process_display/2 [207]
term_t cbif_process_display2(proc_t *proc, term_t *regs);
// erlang:display/1 [208]
term_t cbif_display1(proc_t *proc, term_t *regs);
// erlang:whereis/1 [209]
term_t cbif_whereis1(proc_t *proc, term_t *regs);
// erlang:unregister/1 [210]
term_t cbif_unregister1(proc_t *proc, term_t *regs);
// erlang:register/2 [211]
term_t cbif_register2(proc_t *proc, term_t *regs);
// erlang:registered/0 [212]
term_t cbif_registered0(proc_t *proc, term_t *regs);
// erlang:ports/0 [213]
term_t cbif_ports0(proc_t *proc, term_t *regs);
// erlang:processes/0 [214]
term_t cbif_processes0(proc_t *proc, term_t *regs);
// erlang:memory/1 [215]
term_t cbif_memory1(proc_t *proc, term_t *regs);
// erlang:statistics/1 [216]
term_t cbif_statistics1(proc_t *proc, term_t *regs);
// erlang:system_flag/2 [217]
term_t cbif_system_flag2(proc_t *proc, term_t *regs);
// erlang:'get_dictionary$'/0 [218]
term_t cbif_get_dictionary0(proc_t *proc, term_t *regs);
// erlang:'set_dictionary$'/1 [219]
term_t cbif_set_dictionary1(proc_t *proc, term_t *regs);
// erlang:unlink/1 [220]
term_t cbif_unlink1(proc_t *proc, term_t *regs);
// erlang:link/1 [221]
term_t cbif_link1(proc_t *proc, term_t *regs);
// erlang:demonitor/1 [222]
term_t cbif_demonitor1(proc_t *proc, term_t *regs);
// erlang:monitor/2 [223]
term_t cbif_monitor2(proc_t *proc, term_t *regs);
// erlang:spawn_monitor/1 [224]
term_t cbif_spawn_monitor1(proc_t *proc, term_t *regs);
// erlang:spawn_link/1 [225]
term_t cbif_spawn_link1(proc_t *proc, term_t *regs);
// erlang:spawn/1 [226]
term_t cbif_spawn1(proc_t *proc, term_t *regs);
// erlang:spawn_monitor/3 [227]
term_t cbif_spawn_monitor3(proc_t *proc, term_t *regs);
// erlang:spawn_link/3 [228]
term_t cbif_spawn_link3(proc_t *proc, term_t *regs);
// erlang:spawn/3 [229]
term_t cbif_spawn3(proc_t *proc, term_t *regs);
// erlang:get_stacktrace/0 [230]
term_t cbif_get_stacktrace0(proc_t *proc, term_t *regs);
// erlang:garbage_collect/1 [237]
term_t cbif_garbage_collect1(proc_t *proc, term_t *regs);
// erlang:garbage_collect/0 [238]
term_t cbif_garbage_collect0(proc_t *proc, term_t *regs);
// erlang:is_process_alive/1 [239]
term_t cbif_is_process_alive1(proc_t *proc, term_t *regs);
// erlang:group_leader/2 [240]
term_t cbif_group_leader2(proc_t *proc, term_t *regs);
// erlang:group_leader/0 [241]
term_t cbif_group_leader0(proc_t *proc, term_t *regs);
// erlang:process_info/2 [242]
term_t cbif_process_info2(proc_t *proc, term_t *regs);
// erlang:process_flag/3 [243]
term_t cbif_process_flag3(proc_t *proc, term_t *regs);
// erlang:process_flag/2 [244]
term_t cbif_process_flag2(proc_t *proc, term_t *regs);
// ets:give_away/3 [245]
term_t cbif_ets_give_away3(proc_t *proc, term_t *regs);
// ets:update_element/3 [246]
term_t cbif_ets_update_element3(proc_t *proc, term_t *regs);
// ets:update_counter/3 [247]
term_t cbif_ets_update_counter3(proc_t *proc, term_t *regs);
// ets:setopts/2 [248]
term_t cbif_ets_setopts2(proc_t *proc, term_t *regs);
// ets:select_delete/2 [249]
term_t cbif_ets_select_delete2(proc_t *proc, term_t *regs);
// ets:select_reverse/3 [250]
term_t cbif_ets_select_reverse3(proc_t *proc, term_t *regs);
// ets:select_reverse/2 [251]
term_t cbif_ets_select_reverse2(proc_t *proc, term_t *regs);
// ets:select_reverse/1 [252]
term_t cbif_ets_select_reverse1(proc_t *proc, term_t *regs);
// ets:select_count/2 [253]
term_t cbif_ets_select_count2(proc_t *proc, term_t *regs);
// ets:select/3 [254]
term_t cbif_ets_select3(proc_t *proc, term_t *regs);
// ets:select/2 [255]
term_t cbif_ets_select2(proc_t *proc, term_t *regs);
// ets:select/1 [256]
term_t cbif_ets_select1(proc_t *proc, term_t *regs);
// ets:match_spec_run_r/3 [257]
term_t cbif_ets_match_spec_run_r3(proc_t *proc, term_t *regs);
// ets:match_spec_compile/1 [258]
term_t cbif_ets_match_spec_compile1(proc_t *proc, term_t *regs);
// ets:match_object/3 [259]
term_t cbif_ets_match_object3(proc_t *proc, term_t *regs);
// ets:match_object/2 [260]
term_t cbif_ets_match_object2(proc_t *proc, term_t *regs);
// ets:match_object/1 [261]
term_t cbif_ets_match_object1(proc_t *proc, term_t *regs);
// ets:match/3 [262]
term_t cbif_ets_match3(proc_t *proc, term_t *regs);
// ets:match/2 [263]
term_t cbif_ets_match2(proc_t *proc, term_t *regs);
// ets:match/1 [264]
term_t cbif_ets_match1(proc_t *proc, term_t *regs);
// ets:slot/2 [265]
term_t cbif_ets_slot2(proc_t *proc, term_t *regs);
// ets:rename/2 [266]
term_t cbif_ets_rename2(proc_t *proc, term_t *regs);
// ets:prev/2 [267]
term_t cbif_ets_prev2(proc_t *proc, term_t *regs);
// ets:next/2 [268]
term_t cbif_ets_next2(proc_t *proc, term_t *regs);
// ets:member/2 [269]
term_t cbif_ets_member2(proc_t *proc, term_t *regs);
// ets:last/1 [270]
term_t cbif_ets_last1(proc_t *proc, term_t *regs);
// ets:is_compiled_ms/1 [271]
term_t cbif_ets_is_compiled_ms1(proc_t *proc, term_t *regs);
// ets:insert_new/2 [272]
term_t cbif_ets_insert_new2(proc_t *proc, term_t *regs);
// ets:insert/2 [273]
term_t cbif_ets_insert2(proc_t *proc, term_t *regs);
// ets:lookup_element/3 [274]
term_t cbif_ets_lookup_element3(proc_t *proc, term_t *regs);
// ets:lookup/2 [275]
term_t cbif_ets_lookup2(proc_t *proc, term_t *regs);
// ets:safe_fixtable/2 [276]
term_t cbif_ets_safe_fixtable2(proc_t *proc, term_t *regs);
// ets:info/2 [277]
term_t cbif_ets_info2(proc_t *proc, term_t *regs);
// ets:info/1 [278]
term_t cbif_ets_info1(proc_t *proc, term_t *regs);
// ets:first/1 [279]
term_t cbif_ets_first1(proc_t *proc, term_t *regs);
// ets:delete_all_objects/1 [280]
term_t cbif_ets_delete_all_objects1(proc_t *proc, term_t *regs);
// ets:delete_object/2 [281]
term_t cbif_ets_delete_object2(proc_t *proc, term_t *regs);
// ets:delete/2 [282]
term_t cbif_ets_delete2(proc_t *proc, term_t *regs);
// ets:delete/1 [283]
term_t cbif_ets_delete1(proc_t *proc, term_t *regs);
// ets:new/2 [284]
term_t cbif_ets_new2(proc_t *proc, term_t *regs);
// ets:all/0 [285]
term_t cbif_ets_all0(proc_t *proc, term_t *regs);
// re:run/3 [286]
term_t cbif_re_run3(proc_t *proc, term_t *regs);
// re:run/2 [287]
term_t cbif_re_run2(proc_t *proc, term_t *regs);
// re:compile/2 [288]
term_t cbif_re_compile2(proc_t *proc, term_t *regs);
// re:compile/1 [289]
term_t cbif_re_compile1(proc_t *proc, term_t *regs);

//EOF
