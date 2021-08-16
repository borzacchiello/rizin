// SPDX-FileCopyrightText: 2021 RizinOrg <info@rizin.re>
// SPDX-License-Identifier: LGPL-3.0-only
//
// WARNING: This file was auto-generated by cmd_descs_generate.py script. Do not
// modify it manually. Look at cmd_descs.yaml if you want to update commands.
//

#include <rz_cmd.h>
#include <rz_core.h>
#include <rz_util.h>

// Command handlers, manually defined somewhere else
RZ_IPI RzCmdStatus rz_system_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_system_to_cons_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_last_output_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_hash_bang_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_alias(void *data, const char *input);
RZ_IPI RzCmdStatus rz_env_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_tasks_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_tasks_transient_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_tasks_output_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_tasks_break_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_tasks_delete_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_tasks_delete_all_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_tasks_wait_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_macro(void *data, const char *input);
RZ_IPI RzCmdStatus rz_pointer_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_stdin(void *data, const char *input);
RZ_IPI RzCmdStatus rz_interpret_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_interpret_script_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_repeat_forward_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_interpret_output_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_interpret_editor_2_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_interpret_pipe_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_interpret_macro_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_search(void *data, const char *input);
RZ_IPI RzCmdStatus rz_remote_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_remote_send_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_io_system_run_oldhandler(void *data, const char *input);
RZ_IPI RzCmdStatus rz_remote_add_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_remote_del_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_remote_open_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_remote_mode_enable_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_remote_mode_disable_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_remote_rap_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_equal_g_handler_old(void *data, const char *input);
RZ_IPI int rz_equal_h_handler_old(void *data, const char *input);
RZ_IPI int rz_equal_H_handler_old(void *data, const char *input);
RZ_IPI RzCmdStatus rz_remote_tcp_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_remote_rap_bg_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_help_search_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI int rz_cmd_help(void *data, const char *input);
RZ_IPI RzCmdStatus rz_push_escaped_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_ox(void *data, const char *input);
RZ_IPI RzCmdStatus rz_analysis_function_blocks_list_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_analysis_function_blocks_add_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_blocks_del_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_blocks_del_all_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_blocks_edge_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_returns_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_blocks_asciiart_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_blocks_info_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_analysis_function_blocks_color_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_setbits_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_signature_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_analysis_function_signature_editor_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_signature_type_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_address_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_analysis_function_until_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_xrefs_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_analysis_function_stacksz_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_vars_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_analysis_function_vars_dis_refs_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_vars_del_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_vars_detect_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_vars_display_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_vars_stackframe_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_vars_rename_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_vars_reads_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_vars_writes_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_vars_type_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_vars_xrefs_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_analysis_function_vars_xrefs_args_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_analysis_function_vars_xrefs_vars_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_analysis_function_vars_bp_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_analysis_function_vars_bp_del_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_vars_bp_getref_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_vars_bp_setref_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_vars_regs_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_analysis_function_vars_regs_del_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_vars_regs_getref_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_vars_regs_setref_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_vars_sp_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_analysis_function_vars_sp_del_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_vars_sp_getref_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_function_vars_sp_setref_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_analysis_fcn(void *data, const char *input);
RZ_IPI RzCmdStatus rz_analysis_list_vtables_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_analysis_print_global_variable_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_analysis_global_variable_add_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_global_variable_delete_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_global_variable_rename_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_global_variable_retype_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_print_rtti_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_analysis_print_rtti_all_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_analysis_recover_rtti_all_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_analysis_rtti_demangle_class_name_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_analysis(void *data, const char *input);
RZ_IPI int rz_cmd_bsize(void *data, const char *input);
RZ_IPI int rz_cmd_cmp(void *data, const char *input);
RZ_IPI int rz_cmd_meta(void *data, const char *input);
RZ_IPI RzCmdStatus rz_cmd_debug_continue_execution_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_continue_back_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_continue_call_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_continue_unknown_call_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_continue_exception_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_continue_fork_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_continue_send_signal_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_continue_mapped_io_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_continue_ret_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_debug_continue_syscall(void *data, const char *input);
RZ_IPI RzCmdStatus rz_cmd_debug_continue_traptrace_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_debug_continue_until(void *data, const char *input);
RZ_IPI RzCmdStatus rz_cmd_debug_step_until_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_step_until_instr_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_step_until_instr_regex_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_step_until_optype_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_step_until_esil_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_step_until_flag_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_debug_step(void *data, const char *input);
RZ_IPI RzCmdStatus rz_cmd_debug_start_trace_session_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_stop_trace_session_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_save_trace_session_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_load_trace_session_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_list_trace_session_mmap_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_list_maps_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_debug_allocate_maps_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_list_maps_ascii_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_map_current_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_modules_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_debug_current_modules_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_cmd_debug_deallocate_map_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_dump_maps_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_dump_maps_all_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_dump_maps_writable_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_heap_chunks_print_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_arena_print_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_heap_bins_list_print(void *data, const char *input);
RZ_IPI RzCmdStatus rz_cmd_heap_chunk_print_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_heap_arena_bins_print_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI int rz_cmd_heap_fastbins_print(void *data, const char *input);
RZ_IPI RzCmdStatus rz_cmd_heap_chunks_graph_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_heap_info_print_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_main_arena_print_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_cmd_heap_tcache_print_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_debug_dmi(void *data, const char *input);
RZ_IPI RzCmdStatus rz_cmd_debug_dml_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_debug_memory_permission_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_dmL_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_debug_dmS_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_cmd_debug_process_heaps_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_cmd_debug_process_heap_block_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_cmd_debug_heap_block_flag_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_debug_heap_jemalloc(void *data, const char *input);
RZ_IPI int rz_cmd_debug(void *data, const char *input);
RZ_IPI RzCmdStatus rz_eval_getset_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_eval_list_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_eval_reset_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_eval_bool_invert_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_eval_color(void *data, const char *input);
RZ_IPI RzCmdStatus rz_eval_editor_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_eval_readonly_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_eval_spaces_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_eval_type_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_env_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_exit_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_flag(void *data, const char *input);
RZ_IPI int rz_cmd_egg(void *data, const char *input);
RZ_IPI RzCmdStatus rz_history_list_or_exec_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_history_clear_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_history_save_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_info_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_archs_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_classes_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_signature_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_dwarf_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_pdb_load_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_pdb_show_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_pdb_download_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_demangle_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_info_entry_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_entryexits_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_exports_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_fields_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_headers_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_info_imports_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_binary_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_libs_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_plugins_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_memory_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_main_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_relocs_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_resources_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_symbols_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_sections_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_segments_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_hashes_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_strings_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_info_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI int rz_cmd_kuery(void *data, const char *input);
RZ_IPI RzCmdStatus rz_ls_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_m(void *data, const char *input);
RZ_IPI RzCmdStatus rz_plugins_load_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_plugins_unload_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_plugins_lang_print_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_plugins_asm_print_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_plugins_core_print_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_plugins_debug_print_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_plugins_hash_print_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_plugins_bin_print_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_plugins_io_print_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_plugins_parser_print_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI int rz_cmd_open(void *data, const char *input);
RZ_IPI RzCmdStatus rz_cmd_print_gadget_add_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_print_gadget_print_as_rizin_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_print_gadget_remove_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_print_gadget_move_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_print_msg_digest_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_print_msg_digest_algo_list_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_cmd_print_timestamp_unix_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_print_timestamp_current_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_print_timestamp_dos_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_print_timestamp_hfs_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_print_timestamp_ntfs_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_print(void *data, const char *input);
RZ_IPI RzCmdStatus rz_project_save_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_project_open_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_project_open_no_bin_io_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_quit_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_force_quit_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_force_quit_without_history_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_quit_kill_save_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_quit_kill_nosave_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_quit_nokill_nosave_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_quit_nokill_save_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_resize(void *data, const char *input);
RZ_IPI RzCmdStatus rz_seek_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_padded_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_base_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_delta_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_blocksize_backward_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_blocksize_forward_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_history_list_handler(RzCore *core, int argc, const char **argv, RzCmdStateOutput *state);
RZ_IPI RzCmdStatus rz_seek_redo_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_undo_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_undo_reset_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_seek_search(void *data, const char *input);
RZ_IPI RzCmdStatus rz_seek_asz_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_basicblock_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_function_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_function_current_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_begin_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_end_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_next_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_prev_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_opcode_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_register_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_sleep_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_type_del_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_del_all_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_list_c_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_list_c_nl_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_cc_list_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_type_cc_del_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_cc_del_all_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_define_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_list_enum_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_type_enum_bitfield_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_enum_c_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_enum_c_nl_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_enum_find_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_list_function_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_type_function_del_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_function_del_all_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_function_cc_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_link_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_type_link_show_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_link_del_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_link_del_all_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_list_noreturn_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_type_noreturn_del_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_noreturn_del_all_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_open_file_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_open_editor_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_open_sdb_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_print_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_print_value_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_print_hexstring_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_list_structure_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_type_structure_c_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_structure_c_nl_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_list_typedef_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_type_typedef_c_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_list_union_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_type_union_c_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_union_c_nl_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_xrefs_list_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_xrefs_function_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_xrefs_graph_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_type_xrefs_list_all_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_uniq_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_uname_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_visual(void *data, const char *input);
RZ_IPI int rz_cmd_panels(void *data, const char *input);
RZ_IPI RzCmdStatus rz_write_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_bits_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_unset_bits_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_value_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_value1_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_value2_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_value4_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_value8_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_zero_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_1_inc_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_1_dec_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_2_inc_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_2_dec_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_4_inc_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_4_dec_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_8_inc_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_8_dec_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_base64_decode_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_base64_encode_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_wh_handler_old(void *data, const char *input);
RZ_IPI int rz_we_handler_old(void *data, const char *input);
RZ_IPI int rz_wu_handler_old(void *data, const char *input);
RZ_IPI int rz_wr_handler_old(void *data, const char *input);
RZ_IPI int rz_wA_handler_old(void *data, const char *input);
RZ_IPI int rz_wc_handler_old(void *data, const char *input);
RZ_IPI int rz_wz_handler_old(void *data, const char *input);
RZ_IPI int rz_wt_handler_old(void *data, const char *input);
RZ_IPI RzCmdStatus rz_write_from_io_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_from_io_xchg_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_from_file_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_from_socket_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_ww_handler_old(void *data, const char *input);
RZ_IPI int rz_wx_handler_old(void *data, const char *input);
RZ_IPI int rz_wa_handler_old(void *data, const char *input);
RZ_IPI int rz_wb_handler_old(void *data, const char *input);
RZ_IPI int rz_wm_handler_old(void *data, const char *input);
RZ_IPI int rz_wo_handler_old(void *data, const char *input);
RZ_IPI int rz_wd_handler_old(void *data, const char *input);
RZ_IPI int rz_ws_handler_old(void *data, const char *input);
RZ_IPI int rz_cmd_hexdump(void *data, const char *input);
RZ_IPI int rz_cmd_yank(void *data, const char *input);
RZ_IPI RzCmdStatus rz_zign_show_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_zign_find_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_zign_best_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_best_name_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_delete_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_add_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_add_fcn_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_add_all_fcns_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_generate_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_load_sdb_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_save_sdb_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_load_gzip_sdb_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_flirt_dump_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_flirt_scan_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_search_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_zign_search_fcn_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_zign_cmp_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_cmp_name_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_cmp_diff_name_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_space_select_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_zign_space_delete_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_space_add_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_space_rename_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_info_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_zign_info_range_handler(RzCore *core, int argc, const char **argv);

// Main function that initialize the entire commands tree
RZ_IPI void rzshell_cmddescs_init(RzCore *core);
