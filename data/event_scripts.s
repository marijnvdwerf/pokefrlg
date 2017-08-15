    .include "asm/macros.inc"
	.include "asm/macros/event.inc"
	.include "asm/macros/movement.inc"
	.include "constants/constants.inc"

    .text

    .global Script
Script::

kScriptCommandTable::
    .4byte s00_nop + 1
    .4byte s01_nop + 1
    .4byte s02_end + 1
    .4byte s03_return + 1
    .4byte s04_call + 1
    .4byte s05_goto + 1
    .4byte s06_if_jump + 1
    .4byte s07_if_call + 1
    .4byte s08_jumpstd + 1
    .4byte s09_callstd + 1
    .4byte s0A_jumpstd_if + 1
    .4byte s0B_callstd_if + 1
    .4byte s0C_restore_execution_after_sCF + 1
    .4byte s0D_endscript_killram + 1
    .4byte s0E_set_byte + 1
    .4byte s0F_u32_var_to_const + 1
    .4byte s10_u8_var_to_const + 1
    .4byte s11_u8_ptr_to_const + 1
    .4byte s12_u32_var_to_ptr + 1
    .4byte s13_u8_var_to_ptr + 1
    .4byte s14_u32_var_to_var + 1
    .4byte s15_u8_ptr_to_ptr + 1
    .4byte s16_u16_gvar_to_const + 1
    .4byte s17_u16_gvar_add_const + 1
    .4byte s18_u16_gvar_sub_const + 1
    .4byte s19_u16_gvar_gvar + 1
    .4byte s1A_u16_gvar_gvar + 1
    .4byte s1B_cmp_u8_var_var + 1
    .4byte s1C_cmp_u8_var_const + 1
    .4byte s1D_cmp_u8_var_ptr + 1
    .4byte s1E_cmp_u8_ptr_var + 1
    .4byte s1F_cmp_u8_ptr_const + 1
    .4byte s20_cmp_u8_ptr_ptr + 1
    .4byte s21_cmp_u16_gvar_const + 1
    .4byte s22_cmp_u16_gvar_gvar + 1
    .4byte s23_execute_ASM + 1
    .4byte s24_execute_ASM_2 + 1
    .4byte s25_extended_cmd + 1
    .4byte s26_extended_cmd_setvar + 1
    .4byte s27_set_to_waitstate + 1
    .4byte s28_pause + 1
    .4byte s29_flag_set + 1
    .4byte s2A_flag_clear + 1
    .4byte s2B_flag_check + 1
    .4byte s2C_nop + 1
    .4byte s2D_nop + 1
    .4byte s2E_clear_8000_to_8002 + 1
    .4byte s2F_music_play + 1
    .4byte s30_music_check + 1
    .4byte s31_fanfare_play + 1
    .4byte s32_fanfare_wait + 1
    .4byte s33_music_play + 1
    .4byte s34_playbattlemusic + 1
    .4byte s35_fade_to_default + 1
    .4byte s36_fade_to_music + 1
    .4byte s37_fadeout + 1
    .4byte s38_fadein + 1
    .4byte s39_warp_sfx + 1
    .4byte s3A_warp_new_music + 1
    .4byte s3B_warp_keep_music + 1
    .4byte s3C_warp_v3 + 1
    .4byte s3D_warp_v4 + 1
    .4byte s3E_set_new_map + 1
    .4byte s3F_set_new_map_DMA + 1
    .4byte s40_set_new_map_2 + 1
    .4byte s41_set_new_map_3 + 1
    .4byte s42_get_current_hero_pos + 1
    .4byte s43_get_teampkmn_amount + 1
    .4byte s44_add_item_silently + 1
    .4byte s45_remove_item + 1
    .4byte s46_check_item_amount + 1
    .4byte s47_check_item + 1
    .4byte s48_get_item_type + 1
    .4byte s49_add_item_pc + 1
    .4byte s4A_check_item_pc + 1
    .4byte s4B_nop_para_u16 + 1
    .4byte s4C_nop_para_u16 + 1
    .4byte s4D_nop_para_u16 + 1
    .4byte s4E_nop_para_u16 + 1
    .4byte s4F_execute_movement + 1
    .4byte s50_execute_movement_remote + 1
    .4byte s51_waitmove + 1
    .4byte s52_waitmove_remote + 1
    .4byte s53_hide_sprite + 1
    .4byte s54_hide_sprite_set_coords + 1
    .4byte s55_show_sprite + 1
    .4byte s56_show_sprite_set_coords + 1
    .4byte s57_move_sprites + 1
    .4byte s58_npc_f1_clear_x20 + 1
    .4byte s59_npc_f1_set_x20 + 1
    .4byte s5A_face_player + 1
    .4byte s5B_npc_set_direction + 1
    .4byte s5C_trainer_battle_configure_and_start + 1
    .4byte s5D_trainer_battle_start + 1
    .4byte s5E_jump_to_script_scheduled_after_battle + 1
    .4byte s5F_end_battle_missing_win_message + 1
    .4byte s60_check_trainer_flag + 1
    .4byte s61_set_trainer_flag + 1
    .4byte s62_unset_trainer_flag + 1
    .4byte s63_new_sprite_location_permanent + 1
    .4byte s64_set_sprite_top_left_corner + 1
    .4byte s65_set_sprite_behaviour + 1
    .4byte s66_check_text + 1
    .4byte s67_execute_box + 1
    .4byte s68_close_box + 1
    .4byte s69_lockall + 1
    .4byte s6A_lockdown + 1
    .4byte s6B_release + 1
    .4byte s6C_release_2 + 1
    .4byte s6D_lock_player_movement + 1
    .4byte s6E_yes_no + 1
    .4byte s6F_multiple_choice + 1
    .4byte s70_multiple_choice_no_cancel + 1
    .4byte s71_multiple_choice_dunno + 1
    .4byte s72_nop + 1
    .4byte s73_nop_skip_word + 1
    .4byte s74_nop + 1
    .4byte s75_open_picture_box + 1
    .4byte s76_close_picture_box + 1
    .4byte s77_nop_para_byte + 1
    .4byte s78_braille_msgbox + 1
    .4byte s79_give_pokemon + 1
    .4byte s7A_create_egg + 1
    .4byte s7B_change_pokedata_AP + 1
    .4byte s7C_check_attack_number + 1
    .4byte s7D_load_pokename + 1
    .4byte s7E_load_first_pokenames + 1
    .4byte s7F_load_pokename_team + 1
    .4byte s80_load_item_name + 1
    .4byte s81_nop_halfword + 1
    .4byte s82_load_item_name + 1
    .4byte s83_load_textvar_var + 1
    .4byte s84_load_textvar_std_expression + 1
    .4byte s85_load_textvar_pointer + 1
    .4byte s86_open_shop + 1
    .4byte s87_open_shop + 1
    .4byte s88_open_shop + 1
    .4byte s89_open_casino_game1 + 1
    .4byte s8A_nop + 1
    .4byte s8B_set_choose_state + 1
    .4byte s8C_nop + 1
    .4byte s8D_nop + 1
    .4byte s8E_nop + 1
    .4byte s8F_get_random_val + 1
    .4byte s90_add_money + 1
    .4byte s91_subtract_money + 1
    .4byte s92_check_money + 1
    .4byte s93_display_money + 1
    .4byte s94_hide_money + 1
    .4byte s95_update_money + 1
    .4byte s96_nop + 1
    .4byte s97_screen_special_effect + 1
    .4byte s98_refade_with_timer + 1
    .4byte s99_sav1_set_flash_level + 1
    .4byte s9A_flash_related + 1
    .4byte s9B_message2 + 1
    .4byte s9C_execute_HM + 1
    .4byte s9D_set_HM_animation_data + 1
    .4byte s9E_checkarray_HM_animation + 1
    .4byte s9F_changeposition_fly + 1
    .4byte sA0_checkgender + 1
    .4byte sA1_play_cry + 1
    .4byte sA2_setmaptile + 1
    .4byte sA3_set_standard_weather_data + 1
    .4byte sA4_set_weather_data + 1
    .4byte sA5_execute_weather + 1
    .4byte sA6_activate_per_step_callback_eg_ash + 1
    .4byte sA7_set_new_map_footer + 1
    .4byte sA8_npc_override_height_by_local_id_and_map + 1
    .4byte sA9_npc_override_height_off + 1
    .4byte sAA_create_new_sprite + 1
    .4byte sAB_spriteface + 1
    .4byte sAC_open_door + 1
    .4byte sAD_close_door + 1
    .4byte sAE_wait_door + 1
    .4byte sAF_door_open_immediately + 1
    .4byte sB0_door_close_immediately + 1
    .4byte sB1_nop + 1
    .4byte sB2_nop + 1
    .4byte sB3_get_coin_amount + 1
    .4byte sB4_add_coins + 1
    .4byte sB5_substract_coins + 1
    .4byte sB6_load_battle + 1
    .4byte sB7_start_wild_battle + 1
    .4byte sB8_set_virtual_address + 1
    .4byte sB9_virtual_jump + 1
    .4byte sBA_virtual_call + 1
    .4byte sBB_virtual_if_jump + 1
    .4byte sBC_virtual_if_call + 1
    .4byte sBD_virtual_message + 1
    .4byte sBE_virtual_load_text + 1
    .4byte sBF_virtual_load_textbuffer + 1
    .4byte sC0_display_coins + 1
    .4byte sC1_hide_coins + 1
    .4byte sC2_update_coins + 1
    .4byte sC3_secure_increment + 1
    .4byte sC4_sav1_warp2_set + 1
    .4byte sC5_waitpokecry + 1
    .4byte sC6_load_textvar_box_label + 1
    .4byte sC7_change_text_color + 1
    .4byte sC8_rbox_unknown + 1
    .4byte sC9_rbox_unknown + 1
    .4byte sCA_message_design_sign + 1
    .4byte sCB_message_design_person + 1
    .4byte sCC_compare_secret_game_data + 1
    .4byte sCD_set_obedient_bit + 1
    .4byte sCE_check_obedient_bit + 1
    .4byte sCF_execute_RAM_script_DMA + 1
    .4byte sD0_set_worldmap_flag + 1
    .4byte sD1_warp_v5 + 1
    .4byte sD2_change_catch_location + 1
    .4byte sD3_font_get_width_of_string + 1
    .4byte sD4_load_item_string_plur_sensitive + 1
kScriptCommandTable_end::
    .4byte s00_nop + 1

kSpecialVars::
    .4byte 0x20370B8
    .4byte 0x20370BA
    .4byte 0x20370BC
    .4byte 0x20370BE
    .4byte 0x20370C0
    .4byte 0x20370C2
    .4byte 0x20370C4
    .4byte 0x20370C6
    .4byte 0x20370C8
    .4byte 0x20370CA
    .4byte 0x20370CC
    .4byte 0x20370CE
    .4byte 0x20370D4
    .4byte 0x20370D0
    .4byte 0x203AD30
    .4byte 0x20370D2
    .4byte 0x20370D6
    .4byte 0x20370D8
    .4byte 0x20370DA
    .4byte 0x20370DC
    .4byte 0x20370DE

.include "data/specials.inc"

kStdScripts::
    .4byte StdScript_0
    .4byte StdScript_1
    .4byte StdScript_2
    .4byte StdScript_3
    .4byte StdScript_4
    .4byte StdScript_5
    .4byte StdScript_6
    .4byte StdScript_7
    .4byte StdScript_8
    .4byte StdScript_9

.include "data/script.inc"
