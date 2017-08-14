
	.include "asm/macros.inc"
	.include "constants/constants.inc"
	.include "asm/macros/battle_ai_script.inc"

.text
kBattleAIs:: @ 81D9BF4
    .4byte kBattleAI_00
    .4byte kBattleAI_01
    .4byte kBattleAI_02
    .4byte kBattleAI_03
    .4byte kBattleAI_04
    .4byte kBattleAI_05
    .4byte kBattleAI_06
    .4byte kBattleAI_07
    .4byte kBattleAI_08
    .4byte kBattleAI_09
    .4byte kBattleAI_0A
    .4byte kBattleAI_0A
    .4byte kBattleAI_0A
    .4byte kBattleAI_0A
    .4byte kBattleAI_0A
    .4byte kBattleAI_0A
    .4byte kBattleAI_0A
    .4byte kBattleAI_0A
    .4byte kBattleAI_0A
    .4byte kBattleAI_0A
    .4byte kBattleAI_0A
    .4byte kBattleAI_0A
    .4byte kBattleAI_0A
    .4byte kBattleAI_0A
    .4byte kBattleAI_0A
    .4byte kBattleAI_0A
    .4byte kBattleAI_0A
    .4byte kBattleAI_0A
    .4byte kBattleAI_0A
    .4byte kBattleAI_1D
    .4byte kBattleAI_1E
    .4byte kBattleAI_1F

kBattleAI_00:: @ 81D9C74
	is_most_powerful_move
	if_equal 0, BattleAIScript_1D9CE0
	if_damage_bonus 0, BattleAIScript_1DA433
	get_ability TARGET
	if_equal ABILITY_VOLT_ABSORB, BattleAIScript_1D9CA6
	if_equal ABILITY_WATER_ABSORB, BattleAIScript_1D9CB3
	if_equal ABILITY_FLASH_FIRE, BattleAIScript_1D9CC0
	if_equal ABILITY_WONDER_GUARD, BattleAIScript_1D9CCD
	if_equal ABILITY_LEVITATE, BattleAIScript_1D9CD8
	jump BattleAIScript_1D9CE0

BattleAIScript_1D9CA6: @ 81D9CA6
	get_type 4
	if_arg_equal TYPE_ELECTRIC, BattleAIScript_1DA436
	jump BattleAIScript_1D9CE0

BattleAIScript_1D9CB3: @ 81D9CB3
	get_type 4
	if_arg_equal TYPE_WATER, BattleAIScript_1DA436
	jump BattleAIScript_1D9CE0

BattleAIScript_1D9CC0: @ 81D9CC0
	get_type 4
	if_arg_equal TYPE_FIRE, BattleAIScript_1DA436
	jump BattleAIScript_1D9CE0

BattleAIScript_1D9CCD: @ 81D9CCD
	if_damage_bonus 80, BattleAIScript_1D9CE0
	jump BattleAIScript_1DA433

BattleAIScript_1D9CD8: @ 81D9CD8
	get_type 4
	if_arg_equal TYPE_GROUND, BattleAIScript_1DA433

BattleAIScript_1D9CE0: @ 81D9CE0
	get_ability TARGET
	if_not_equal ABILITY_SOUNDPROOF, BattleAIScript_1D9D27
	if_move MOVE_GROWL, BattleAIScript_1DA433
	if_move MOVE_ROAR, BattleAIScript_1DA433
	if_move MOVE_SING, BattleAIScript_1DA433
	if_move MOVE_SUPERSONIC, BattleAIScript_1DA433
	if_move MOVE_SCREECH, BattleAIScript_1DA433
	if_move MOVE_SNORE, BattleAIScript_1DA433
	if_move MOVE_UPROAR, BattleAIScript_1DA433
	if_move MOVE_METAL_SOUND, BattleAIScript_1DA433
	if_move MOVE_GRASS_WHISTLE, BattleAIScript_1DA433

BattleAIScript_1D9D27: @ 81D9D27
	if_effect EFFECT_SLEEP, BattleAIScript_1D9FB6
	if_effect EFFECT_EXPLOSION, BattleAIScript_1D9FCF
	if_effect EFFECT_DREAM_EATER, BattleAIScript_1DA008
	if_effect EFFECT_ATTACK_UP, BattleAIScript_1DA020
	if_effect EFFECT_DEFENSE_UP, BattleAIScript_1DA029
	if_effect EFFECT_SPEED_UP, BattleAIScript_1DA032
	if_effect EFFECT_SPECIAL_ATTACK_UP, BattleAIScript_1DA03B
	if_effect EFFECT_SPECIAL_DEFENSE_UP, BattleAIScript_1DA044
	if_effect EFFECT_ACCURACY_UP, BattleAIScript_1DA04D
	if_effect EFFECT_EVASION_UP, BattleAIScript_1DA056
	if_effect EFFECT_ATTACK_DOWN, BattleAIScript_1DA05F
	if_effect EFFECT_DEFENSE_DOWN, BattleAIScript_1DA074
	if_effect EFFECT_SPEED_DOWN, BattleAIScript_1DA081
	if_effect EFFECT_SPECIAL_ATTACK_DOWN, BattleAIScript_1DA08E
	if_effect EFFECT_SPECIAL_DEFENSE_DOWN, BattleAIScript_1DA09B
	if_effect EFFECT_ACCURACY_DOWN, BattleAIScript_1DA0A8
	if_effect EFFECT_EVASION_DOWN, BattleAIScript_1DA0BD
	if_effect EFFECT_HAZE, BattleAIScript_1DA0D4
	if_effect EFFECT_BIDE, BattleAIScript_1DA1B2
	if_effect EFFECT_ROAR, BattleAIScript_1DA14A
	if_effect EFFECT_TOXIC, BattleAIScript_1DA15B
	if_effect EFFECT_LIGHT_SCREEN, BattleAIScript_1DA18A
	if_effect EFFECT_OHKO, BattleAIScript_1DA195
	if_effect EFFECT_RAZOR_WIND, BattleAIScript_1DA1B2
	if_effect EFFECT_SUPER_FANG, BattleAIScript_1DA1B2
	if_effect EFFECT_MIST, BattleAIScript_1DA1CC
	if_effect EFFECT_FOCUS_ENERGY, BattleAIScript_1DA1D7
	if_effect EFFECT_CONFUSE, BattleAIScript_1DA1E2
	if_effect EFFECT_ATTACK_UP_2, BattleAIScript_1DA020
	if_effect EFFECT_DEFENSE_UP_2, BattleAIScript_1DA029
	if_effect EFFECT_SPEED_UP_2, BattleAIScript_1DA032
	if_effect EFFECT_SPECIAL_ATTACK_UP_2, BattleAIScript_1DA03B
	if_effect EFFECT_SPECIAL_DEFENSE_UP_2, BattleAIScript_1DA044
	if_effect EFFECT_ACCURACY_UP_2, BattleAIScript_1DA04D
	if_effect EFFECT_EVASION_UP_2, BattleAIScript_1DA056
	if_effect EFFECT_ATTACK_DOWN_2, BattleAIScript_1DA05F
	if_effect EFFECT_DEFENSE_DOWN_2, BattleAIScript_1DA074
	if_effect EFFECT_SPEED_DOWN_2, BattleAIScript_1DA081
	if_effect EFFECT_SPECIAL_ATTACK_DOWN_2, BattleAIScript_1DA08E
	if_effect EFFECT_SPECIAL_DEFENSE_DOWN_2, BattleAIScript_1DA09B
	if_effect EFFECT_ACCURACY_DOWN_2, BattleAIScript_1DA0A8
	if_effect EFFECT_EVASION_DOWN_2, BattleAIScript_1DA0BD
	if_effect EFFECT_REFLECT, BattleAIScript_1DA1F5
	if_effect EFFECT_POISON, BattleAIScript_1DA15B
	if_effect EFFECT_PARALYZE, BattleAIScript_1DA200
	if_effect EFFECT_SUBSTITUTE, BattleAIScript_1DA219
	if_effect EFFECT_RECHARGE, BattleAIScript_1DA1B2
	if_effect EFFECT_LEECH_SEED, BattleAIScript_1DA22B
	if_effect EFFECT_DISABLE, BattleAIScript_1DA246
	if_effect EFFECT_LEVEL_DAMAGE, BattleAIScript_1DA1B2
	if_effect EFFECT_PSYWAVE, BattleAIScript_1DA1B2
	if_effect EFFECT_COUNTER, BattleAIScript_1DA1B2
	if_effect EFFECT_ENCORE, BattleAIScript_1DA24E
	if_effect EFFECT_SNORE, BattleAIScript_1DA256
	if_effect EFFECT_SLEEP_TALK, BattleAIScript_1DA256
	if_effect EFFECT_FLAIL, BattleAIScript_1DA1B2
	if_effect EFFECT_MEAN_LOOK, BattleAIScript_1DA261
	if_effect EFFECT_NIGHTMARE, BattleAIScript_1D9FF3
	if_effect EFFECT_MINIMIZE, BattleAIScript_1DA056
	if_effect EFFECT_CURSE, BattleAIScript_1DA26C
	if_effect EFFECT_SPIKES, BattleAIScript_1DA27D
	if_effect EFFECT_FORESIGHT, BattleAIScript_1DA288
	if_effect EFFECT_PERISH_SONG, BattleAIScript_1DA293
	if_effect EFFECT_SANDSTORM, BattleAIScript_1DA29E
	if_effect EFFECT_SWAGGER, BattleAIScript_1DA1E2
	if_effect EFFECT_ATTRACT, BattleAIScript_1DA2A6
	if_effect EFFECT_RETURN, BattleAIScript_1DA1B2
	if_effect EFFECT_PRESENT, BattleAIScript_1DA1B2
	if_effect EFFECT_FRUSTRATION, BattleAIScript_1DA1B2
	if_effect EFFECT_SAFEGUARD, BattleAIScript_1DA2E6
	if_effect EFFECT_MAGNITUDE, BattleAIScript_1DA1AA
	if_effect EFFECT_BATON_PASS, BattleAIScript_1DA301
	if_effect EFFECT_SONICBOOM, BattleAIScript_1DA1B2
	if_effect EFFECT_RAIN_DANCE, BattleAIScript_1DA30A
	if_effect EFFECT_SUNNY_DAY, BattleAIScript_1DA312
	if_effect EFFECT_BELLY_DRUM, BattleAIScript_1DA019
	if_effect EFFECT_PSYCH_UP, BattleAIScript_1DA0D4
	if_effect EFFECT_MIRROR_COAT, BattleAIScript_1DA1B2
	if_effect EFFECT_SKULL_BASH, BattleAIScript_1DA1B2
	if_effect EFFECT_FUTURE_SIGHT, BattleAIScript_1DA31A
	if_effect EFFECT_TELEPORT, BattleAIScript_1DA433
	if_effect EFFECT_DEFENSE_CURL, BattleAIScript_1DA029
	if_effect EFFECT_FAKE_OUT, BattleAIScript_1DA325
	if_effect EFFECT_STOCKPILE, BattleAIScript_1DA32E
	if_effect EFFECT_SPIT_UP, BattleAIScript_1DA337
	if_effect EFFECT_SWALLOW, BattleAIScript_1DA337
	if_effect EFFECT_HAIL, BattleAIScript_1DA346
	if_effect EFFECT_TORMENT, BattleAIScript_1DA34E
	if_effect EFFECT_FLATTER, BattleAIScript_1DA1E2
	if_effect EFFECT_WILL_O_WISP, BattleAIScript_1DA359
	if_effect EFFECT_MEMENTO, BattleAIScript_1DA2F1
	if_effect EFFECT_FOCUS_PUNCH, BattleAIScript_1DA1B2
	if_effect EFFECT_HELPING_HAND, BattleAIScript_1DA37E
	if_effect EFFECT_TRICK, BattleAIScript_1DA386
	if_effect EFFECT_INGRAIN, BattleAIScript_1DA38F
	if_effect EFFECT_SUPERPOWER, BattleAIScript_1DA1B2
	if_effect EFFECT_RECYCLE, BattleAIScript_1DA39A
	if_effect EFFECT_KNOCK_OFF, BattleAIScript_1DA386
	if_effect EFFECT_ENDEAVOR, BattleAIScript_1DA1B2
	if_effect EFFECT_IMPRISON, BattleAIScript_1DA3A3
	if_effect EFFECT_REFRESH, BattleAIScript_1DA3AE
	if_effect EFFECT_LOW_KICK, BattleAIScript_1DA1B2
	if_effect EFFECT_MUD_SPORT, BattleAIScript_1DA3B9
	if_effect EFFECT_TICKLE, BattleAIScript_1DA3C4
	if_effect EFFECT_COSMIC_POWER, BattleAIScript_1DA3D5
	if_effect EFFECT_BULK_UP, BattleAIScript_1DA3E6
	if_effect EFFECT_WATER_SPORT, BattleAIScript_1DA3F7
	if_effect EFFECT_CALM_MIND, BattleAIScript_1DA402
	if_effect EFFECT_DRAGON_DANCE, BattleAIScript_1DA413
	end

BattleAIScript_1D9FB6: @ 81D9FB6
	get_ability TARGET
	if_equal ABILITY_INSOMNIA, BattleAIScript_1DA433
	if_equal ABILITY_VITAL_SPIRIT, BattleAIScript_1DA433
	if_status TARGET, SLP | PSN | BRN | FRZ | PAR | TOX, BattleAIScript_1DA433
	end

BattleAIScript_1D9FCF: @ 81D9FCF
	if_damage_bonus 0, BattleAIScript_1DA433
	get_ability TARGET
	if_equal ABILITY_DAMP, BattleAIScript_1DA433
	count_alive_pokemon USER
	if_not_equal 0, BattleAIScript_1D9FF2
	count_alive_pokemon TARGET
	if_not_equal 0, BattleAIScript_1DA433
	jump BattleAIScript_1DA424

BattleAIScript_1D9FF2: @ 81D9FF2
	end

BattleAIScript_1D9FF3: @ 81D9FF3
	if_status2 TARGET, S_NIGHTMARE, BattleAIScript_1DA433
	if_not_status TARGET, SLP, BattleAIScript_1DA430
	end

BattleAIScript_1DA008: @ 81DA008
	if_not_status TARGET, SLP, BattleAIScript_1DA430
	if_damage_bonus 0, BattleAIScript_1DA433
	end

BattleAIScript_1DA019: @ 81DA019
	if_hp_less_than USER, 51, BattleAIScript_1DA433

BattleAIScript_1DA020: @ 81DA020
	if_stat_level_equal USER, ATTACK, 12, BattleAIScript_1DA433
	end

BattleAIScript_1DA029: @ 81DA029
	if_stat_level_equal USER, DEFENSE, 12, BattleAIScript_1DA433
	end

BattleAIScript_1DA032: @ 81DA032
	if_stat_level_equal USER, SPEED, 12, BattleAIScript_1DA433
	end

BattleAIScript_1DA03B: @ 81DA03B
	if_stat_level_equal USER, SP_ATTACK, 12, BattleAIScript_1DA433
	end

BattleAIScript_1DA044: @ 81DA044
	if_stat_level_equal USER, SP_DEFENSE, 12, BattleAIScript_1DA433
	end

BattleAIScript_1DA04D: @ 81DA04D
	if_stat_level_equal USER, ACCURACY, 12, BattleAIScript_1DA433
	end

BattleAIScript_1DA056: @ 81DA056
	if_stat_level_equal USER, EVASION, 12, BattleAIScript_1DA433
	end

BattleAIScript_1DA05F: @ 81DA05F
	if_stat_level_equal TARGET, ATTACK, 0, BattleAIScript_1DA433
	get_ability TARGET
	if_equal ABILITY_HYPER_CUTTER, BattleAIScript_1DA433
	jump BattleAIScript_1DA0C5

BattleAIScript_1DA074: @ 81DA074
	if_stat_level_equal TARGET, DEFENSE, 0, BattleAIScript_1DA433
	jump BattleAIScript_1DA0C5

BattleAIScript_1DA081: @ 81DA081
	if_stat_level_equal TARGET, SPEED, 0, BattleAIScript_1DA433
	jump BattleAIScript_1DA0C5

BattleAIScript_1DA08E: @ 81DA08E
	if_stat_level_equal TARGET, SP_ATTACK, 0, BattleAIScript_1DA433
	jump BattleAIScript_1DA0C5

BattleAIScript_1DA09B: @ 81DA09B
	if_stat_level_equal TARGET, SP_DEFENSE, 0, BattleAIScript_1DA433
	jump BattleAIScript_1DA0C5

BattleAIScript_1DA0A8: @ 81DA0A8
	if_stat_level_equal TARGET, ACCURACY, 0, BattleAIScript_1DA433
	get_ability TARGET
	if_equal ABILITY_KEEN_EYE, BattleAIScript_1DA433
	jump BattleAIScript_1DA0C5

BattleAIScript_1DA0BD: @ 81DA0BD
	if_stat_level_equal TARGET, EVASION, 0, BattleAIScript_1DA433

BattleAIScript_1DA0C5: @ 81DA0C5
	get_ability TARGET
	if_equal ABILITY_CLEAR_BODY, BattleAIScript_1DA433
	if_equal ABILITY_WHITE_SMOKE, BattleAIScript_1DA433
	end

BattleAIScript_1DA0D4: @ 81DA0D4
	if_stat_level_less_than USER, ATTACK, 6, BattleAIScript_1DA149
	if_stat_level_less_than USER, DEFENSE, 6, BattleAIScript_1DA149
	if_stat_level_less_than USER, SPEED, 6, BattleAIScript_1DA149
	if_stat_level_less_than USER, SP_ATTACK, 6, BattleAIScript_1DA149
	if_stat_level_less_than USER, SP_DEFENSE, 6, BattleAIScript_1DA149
	if_stat_level_less_than USER, ACCURACY, 6, BattleAIScript_1DA149
	if_stat_level_less_than USER, EVASION, 6, BattleAIScript_1DA149
	if_stat_level_more_than TARGET, ATTACK, 6, BattleAIScript_1DA149
	if_stat_level_more_than TARGET, DEFENSE, 6, BattleAIScript_1DA149
	if_stat_level_more_than TARGET, SPEED, 6, BattleAIScript_1DA149
	if_stat_level_more_than TARGET, SP_ATTACK, 6, BattleAIScript_1DA149
	if_stat_level_more_than TARGET, SP_DEFENSE, 6, BattleAIScript_1DA149
	if_stat_level_more_than TARGET, ACCURACY, 6, BattleAIScript_1DA149
	if_stat_level_more_than TARGET, EVASION, 6, BattleAIScript_1DA149
	jump BattleAIScript_1DA433

BattleAIScript_1DA149: @ 81DA149
	end

BattleAIScript_1DA14A: @ 81DA14A
	count_alive_pokemon TARGET
	if_equal 0, BattleAIScript_1DA433
	get_ability TARGET
	if_equal ABILITY_SUCTION_CUPS, BattleAIScript_1DA433
	end

BattleAIScript_1DA15B: @ 81DA15B
	get_type 0
	if_equal TYPE_STEEL, BattleAIScript_1DA433
	if_equal TYPE_POISON, BattleAIScript_1DA433
	get_type 2
	if_equal TYPE_STEEL, BattleAIScript_1DA433
	if_equal TYPE_POISON, BattleAIScript_1DA433
	get_ability TARGET
	if_equal ABILITY_IMMUNITY, BattleAIScript_1DA433
	if_status TARGET, SLP | PSN | BRN | FRZ | PAR | TOX, BattleAIScript_1DA433
	end

BattleAIScript_1DA18A: @ 81DA18A
	if_status4 USER, 0x2, BattleAIScript_1DA430
	end

BattleAIScript_1DA195: @ 81DA195
	if_damage_bonus 0, BattleAIScript_1DA433
	get_ability TARGET
	if_equal ABILITY_STURDY, BattleAIScript_1DA433
	if_target_higher_level BattleAIScript_1DA433
	end

BattleAIScript_1DA1AA: @ 81DA1AA
	get_ability TARGET
	if_equal ABILITY_LEVITATE, BattleAIScript_1DA433

BattleAIScript_1DA1B2: @ 81DA1B2
	if_damage_bonus 0, BattleAIScript_1DA433
	get_ability TARGET
	if_not_equal ABILITY_WONDER_GUARD, BattleAIScript_1DA1CB
	if_damage_bonus 80, BattleAIScript_1DA1CB
	jump BattleAIScript_1DA433

BattleAIScript_1DA1CB: @ 81DA1CB
	end

BattleAIScript_1DA1CC: @ 81DA1CC
	if_status4 USER, 0x100, BattleAIScript_1DA430
	end

BattleAIScript_1DA1D7: @ 81DA1D7
	if_status2 USER, S_FOCUS_ENERGY, BattleAIScript_1DA433
	end

BattleAIScript_1DA1E2: @ 81DA1E2
	if_status2 TARGET, S_CONFUSED, BattleAIScript_1DA42D
	get_ability TARGET
	if_equal ABILITY_OWN_TEMPO, BattleAIScript_1DA433
	end

BattleAIScript_1DA1F5: @ 81DA1F5
	if_status4 USER, 0x1, BattleAIScript_1DA430
	end

BattleAIScript_1DA200: @ 81DA200
	if_damage_bonus 0, BattleAIScript_1DA433
	get_ability TARGET
	if_equal ABILITY_LIMBER, BattleAIScript_1DA433
	if_status TARGET, SLP | PSN | BRN | FRZ | PAR | TOX, BattleAIScript_1DA433
	end

BattleAIScript_1DA219: @ 81DA219
	if_status2 USER, S_SUBSTITUTE, BattleAIScript_1DA430
	if_hp_less_than USER, 26, BattleAIScript_1DA433
	end

BattleAIScript_1DA22B: @ 81DA22B
	if_status3 TARGET, 0x4, BattleAIScript_1DA433
	get_type 0
	if_equal TYPE_GRASS, BattleAIScript_1DA433
	get_type 2
	if_equal TYPE_GRASS, BattleAIScript_1DA433
	end

BattleAIScript_1DA246: @ 81DA246
	if_last_move_did_damage TARGET, 0, BattleAIScript_1DA430
	end

BattleAIScript_1DA24E: @ 81DA24E
	if_last_move_did_damage TARGET, 1, BattleAIScript_1DA430
	end

BattleAIScript_1DA256: @ 81DA256
	if_not_status USER, SLP, BattleAIScript_1DA430
	end

BattleAIScript_1DA261: @ 81DA261
	if_status2 TARGET, S_MEAN_LOOK, BattleAIScript_1DA433
	end

BattleAIScript_1DA26C: @ 81DA26C
	if_stat_level_equal USER, ATTACK, 12, BattleAIScript_1DA433
	if_stat_level_equal USER, DEFENSE, 12, BattleAIScript_1DA430
	end

BattleAIScript_1DA27D: @ 81DA27D
	if_status4 TARGET, 0x10, BattleAIScript_1DA433
	end

BattleAIScript_1DA288: @ 81DA288
	if_status2 TARGET, 0x20000000, BattleAIScript_1DA433
	end

BattleAIScript_1DA293: @ 81DA293
	if_status3 TARGET, 0x20, BattleAIScript_1DA433
	end

BattleAIScript_1DA29E: @ 81DA29E
	get_weather
	if_equal WEATHER_SANDSTORM, BattleAIScript_1DA430
	end

BattleAIScript_1DA2A6: @ 81DA2A6
	if_status2 TARGET, 0xf0000, BattleAIScript_1DA433
	get_ability TARGET
	if_equal ABILITY_OBLIVIOUS, BattleAIScript_1DA433
	get_gender USER
	if_equal 0, BattleAIScript_1DA2CB
	if_equal 254, BattleAIScript_1DA2D8
	jump BattleAIScript_1DA433

BattleAIScript_1DA2CB: @ 81DA2CB
	get_gender TARGET
	if_equal 254, BattleAIScript_1DA2E5
	jump BattleAIScript_1DA433

BattleAIScript_1DA2D8: @ 81DA2D8
	get_gender TARGET
	if_equal 0, BattleAIScript_1DA2E5
	jump BattleAIScript_1DA433

BattleAIScript_1DA2E5: @ 81DA2E5
	end

BattleAIScript_1DA2E6: @ 81DA2E6
	if_status4 USER, 0x20, BattleAIScript_1DA430
	end

BattleAIScript_1DA2F1: @ 81DA2F1
	if_stat_level_equal TARGET, ATTACK, 0, BattleAIScript_1DA433
	if_stat_level_equal TARGET, SP_ATTACK, 0, BattleAIScript_1DA430

BattleAIScript_1DA301: @ 81DA301
	count_alive_pokemon USER
	if_equal 0, BattleAIScript_1DA433
	end

BattleAIScript_1DA30A: @ 81DA30A
	get_weather
	if_equal WEATHER_RAIN, BattleAIScript_1DA430
	end

BattleAIScript_1DA312: @ 81DA312
	get_weather
	if_equal WEATHER_SUN, BattleAIScript_1DA430
	end

BattleAIScript_1DA31A: @ 81DA31A
	if_status4 TARGET, 0x40, BattleAIScript_1DA433
	end

BattleAIScript_1DA325: @ 81DA325
	is_first_turn USER
	if_equal 0, BattleAIScript_1DA433
	end

BattleAIScript_1DA32E: @ 81DA32E
	get_stockpile_count USER
	if_equal 3, BattleAIScript_1DA433
	end

BattleAIScript_1DA337: @ 81DA337
	if_damage_bonus 0, BattleAIScript_1DA433
	get_stockpile_count USER
	if_equal 0, BattleAIScript_1DA433
	end

BattleAIScript_1DA346: @ 81DA346
	get_weather
	if_equal WEATHER_HAIL, BattleAIScript_1DA430
	end

BattleAIScript_1DA34E: @ 81DA34E
	if_status2 TARGET, 0x80000000, BattleAIScript_1DA433
	end

BattleAIScript_1DA359: @ 81DA359
	get_ability TARGET
	if_equal ABILITY_WATER_VEIL, BattleAIScript_1DA433
	if_status TARGET, SLP | PSN | BRN | FRZ | PAR | TOX, BattleAIScript_1DA433
	if_damage_bonus 0, BattleAIScript_1DA433
	if_damage_bonus 20, BattleAIScript_1DA433
	if_damage_bonus 10, BattleAIScript_1DA433
	end

BattleAIScript_1DA37E: @ 81DA37E
	is_double_battle
	if_equal 0, BattleAIScript_1DA433
	end

BattleAIScript_1DA386: @ 81DA386
	get_ability TARGET
	if_equal ABILITY_STICKY_HOLD, BattleAIScript_1DA433
	end

BattleAIScript_1DA38F: @ 81DA38F
	if_status3 USER, 0x400, BattleAIScript_1DA433
	end

BattleAIScript_1DA39A: @ 81DA39A
	get_item USER
	if_equal ITEM_NONE, BattleAIScript_1DA433
	end

BattleAIScript_1DA3A3: @ 81DA3A3
	if_status3 USER, 0x2000, BattleAIScript_1DA433
	end

BattleAIScript_1DA3AE: @ 81DA3AE
	if_not_status USER, PSN | BRN | PAR | TOX, BattleAIScript_1DA433
	end

BattleAIScript_1DA3B9: @ 81DA3B9
	if_status3 USER, 0x10000, BattleAIScript_1DA433
	end

BattleAIScript_1DA3C4: @ 81DA3C4
	if_stat_level_equal TARGET, ATTACK, 0, BattleAIScript_1DA433
	if_stat_level_equal TARGET, DEFENSE, 0, BattleAIScript_1DA430
	end

BattleAIScript_1DA3D5: @ 81DA3D5
	if_stat_level_equal USER, DEFENSE, 12, BattleAIScript_1DA433
	if_stat_level_equal USER, SP_DEFENSE, 12, BattleAIScript_1DA430
	end

BattleAIScript_1DA3E6: @ 81DA3E6
	if_stat_level_equal USER, ATTACK, 12, BattleAIScript_1DA433
	if_stat_level_equal USER, DEFENSE, 12, BattleAIScript_1DA430
	end

BattleAIScript_1DA3F7: @ 81DA3F7
	if_status3 USER, 0x20000, BattleAIScript_1DA433
	end

BattleAIScript_1DA402: @ 81DA402
	if_stat_level_equal USER, SP_ATTACK, 12, BattleAIScript_1DA433
	if_stat_level_equal USER, SP_DEFENSE, 12, BattleAIScript_1DA430
	end

BattleAIScript_1DA413: @ 81DA413
	if_stat_level_equal USER, ATTACK, 12, BattleAIScript_1DA433
	if_stat_level_equal USER, SPEED, 12, BattleAIScript_1DA430
	end

BattleAIScript_1DA424: @ 81DA424
	score -1
	end


BattleAIScript_1DA427: @ 81DA427
	score -2
	end

BattleAIScript_1DA42A: @ 81DA42A
	score -3
	end


BattleAIScript_1DA42D: @ 81DA42D
	score -5
	end

BattleAIScript_1DA430: @ 81DA430
	score -8
	end

BattleAIScript_1DA433: @ 81DA433
	score -10
	end

BattleAIScript_1DA436: @ 81DA436
	score -12
	end

	score +1
	end

	score +2
	end

	score +3
	end

	score +5
	end

kBattleAI_01:: @ 81DA445
	if_effect EFFECT_SLEEP, BattleAIScript_1DA71C
	if_effect EFFECT_ABSORB, BattleAIScript_1DA738
	if_effect EFFECT_EXPLOSION, BattleAIScript_1DA752
	if_effect EFFECT_DREAM_EATER, BattleAIScript_1DA7B0
	if_effect EFFECT_MIRROR_MOVE, BattleAIScript_1DA7C4
	if_effect EFFECT_ATTACK_UP, BattleAIScript_1DA848
	if_effect EFFECT_DEFENSE_UP, BattleAIScript_1DA883
	if_effect EFFECT_SPEED_UP, BattleAIScript_1DA8E9
	if_effect EFFECT_SPECIAL_ATTACK_UP, BattleAIScript_1DA8FF
	if_effect EFFECT_SPECIAL_DEFENSE_UP, BattleAIScript_1DA93A
	if_effect EFFECT_ACCURACY_UP, BattleAIScript_1DA9A0
	if_effect EFFECT_EVASION_UP, BattleAIScript_1DA9BA
	if_effect EFFECT_ALWAYS_HIT, BattleAIScript_1DAA54
	if_effect EFFECT_ATTACK_DOWN, BattleAIScript_1DAA84
	if_effect EFFECT_DEFENSE_DOWN, BattleAIScript_1DAAD6
	if_effect EFFECT_SPEED_DOWN, BattleAIScript_1DAB0D
	if_effect EFFECT_SPECIAL_ATTACK_DOWN, BattleAIScript_1DAB23
	if_effect EFFECT_SPECIAL_DEFENSE_DOWN, BattleAIScript_1DAB77
	if_effect EFFECT_ACCURACY_DOWN, BattleAIScript_1DAB98
	if_effect EFFECT_EVASION_DOWN, BattleAIScript_1DAC2C
	if_effect EFFECT_HAZE, BattleAIScript_1DAC4D
	if_effect EFFECT_BIDE, BattleAIScript_1DAD10
	if_effect EFFECT_ROAR, BattleAIScript_1DAD1A
	if_effect EFFECT_CONVERSION, BattleAIScript_1DAD52
	if_effect EFFECT_RESTORE_HP, BattleAIScript_1DAD83
	if_effect EFFECT_TOXIC, BattleAIScript_1DADDC
	if_effect EFFECT_LIGHT_SCREEN, BattleAIScript_1DAE1B
	if_effect EFFECT_REST, BattleAIScript_1DAE4A
	if_effect EFFECT_OHKO, BattleAIScript_1DAEAA
	if_effect EFFECT_RAZOR_WIND, BattleAIScript_1DB645
	if_effect EFFECT_SUPER_FANG, BattleAIScript_1DAEAB
	if_effect EFFECT_TRAP, BattleAIScript_1DAEB5
	if_effect EFFECT_HIGH_CRITICAL, BattleAIScript_1DAEEB
	if_effect EFFECT_CONFUSE, BattleAIScript_1DAF1A
	if_effect EFFECT_ATTACK_UP_2, BattleAIScript_1DA848
	if_effect EFFECT_DEFENSE_UP_2, BattleAIScript_1DA883
	if_effect EFFECT_SPEED_UP_2, BattleAIScript_1DA8E9
	if_effect EFFECT_SPECIAL_ATTACK_UP_2, BattleAIScript_1DA8FF
	if_effect EFFECT_SPECIAL_DEFENSE_UP_2, BattleAIScript_1DA93A
	if_effect EFFECT_ACCURACY_UP_2, BattleAIScript_1DA9A0
	if_effect EFFECT_EVASION_UP_2, BattleAIScript_1DA9BA
	if_effect EFFECT_ATTACK_DOWN_2, BattleAIScript_1DAA84
	if_effect EFFECT_DEFENSE_DOWN_2, BattleAIScript_1DAAD6
	if_effect EFFECT_SPEED_DOWN_2, BattleAIScript_1DAB0D
	if_effect EFFECT_SPECIAL_ATTACK_DOWN_2, BattleAIScript_1DAB23
	if_effect EFFECT_SPECIAL_DEFENSE_DOWN_2, BattleAIScript_1DAB77
	if_effect EFFECT_ACCURACY_DOWN_2, BattleAIScript_1DAB98
	if_effect EFFECT_EVASION_DOWN_2, BattleAIScript_1DAC2C
	if_effect EFFECT_REFLECT, BattleAIScript_1DAF3C
	if_effect EFFECT_POISON, BattleAIScript_1DAF6C
	if_effect EFFECT_PARALYZE, BattleAIScript_1DAF7D
	if_effect EFFECT_SPEED_DOWN_HIT, BattleAIScript_1DAAF7
	if_effect EFFECT_SKY_ATTACK, BattleAIScript_1DB645
	if_effect EFFECT_VITAL_THROW, BattleAIScript_1DAF9A
	if_effect EFFECT_SUBSTITUTE, BattleAIScript_1DAFBD
	if_effect EFFECT_RECHARGE, BattleAIScript_1DB053
	if_effect EFFECT_LEECH_SEED, BattleAIScript_1DADDC
	if_effect EFFECT_DISABLE, BattleAIScript_1DB07B
	if_effect EFFECT_COUNTER, BattleAIScript_1DB09A
	if_effect EFFECT_ENCORE, BattleAIScript_1DB13B
	if_effect EFFECT_PAIN_SPLIT, BattleAIScript_1DB1A3
	if_effect EFFECT_SNORE, BattleAIScript_1DB1CF
	if_effect EFFECT_LOCK_ON, BattleAIScript_1DB1D2
	if_effect EFFECT_SLEEP_TALK, BattleAIScript_1DB1DB
	if_effect EFFECT_DESTINY_BOND, BattleAIScript_1DB1DE
	if_effect EFFECT_FLAIL, BattleAIScript_1DB214
	if_effect EFFECT_HEAL_BELL, BattleAIScript_1DB259
	if_effect EFFECT_THIEF, BattleAIScript_1DB270
	if_effect EFFECT_MEAN_LOOK, BattleAIScript_1DAEB5
	if_effect EFFECT_MINIMIZE, BattleAIScript_1DA9BA
	if_effect EFFECT_CURSE, BattleAIScript_1DB293
	if_effect EFFECT_PROTECT, BattleAIScript_1DB2E2
	if_effect EFFECT_FORESIGHT, BattleAIScript_1DB3A3
	if_effect EFFECT_ENDURE, BattleAIScript_1DB3D1
	if_effect EFFECT_BATON_PASS, BattleAIScript_1DB3EF
	if_effect EFFECT_PURSUIT, BattleAIScript_1DB48B
	if_effect EFFECT_MORNING_SUN, BattleAIScript_1DAD69
	if_effect EFFECT_SYNTHESIS, BattleAIScript_1DAD69
	if_effect EFFECT_MOONLIGHT, BattleAIScript_1DAD69
	if_effect EFFECT_RAIN_DANCE, BattleAIScript_1DB4C1
	if_effect EFFECT_SUNNY_DAY, BattleAIScript_1DB500
	if_effect EFFECT_BELLY_DRUM, BattleAIScript_1DB529
	if_effect EFFECT_PSYCH_UP, BattleAIScript_1DB538
	if_effect EFFECT_MIRROR_COAT, BattleAIScript_1DB5A5
	if_effect EFFECT_SKULL_BASH, BattleAIScript_1DB645
	if_effect EFFECT_SOLARBEAM, BattleAIScript_1DB645
	if_effect EFFECT_FLY, BattleAIScript_1DB669
	if_effect EFFECT_SOFTBOILED, BattleAIScript_1DAD83
	if_effect EFFECT_FAKE_OUT, BattleAIScript_1DB6F3
	if_effect EFFECT_SPIT_UP, BattleAIScript_1DB6F6
	if_effect EFFECT_SWALLOW, BattleAIScript_1DAD83
	if_effect EFFECT_HAIL, BattleAIScript_1DB707
	if_effect EFFECT_FLATTER, BattleAIScript_1DAF12
	if_effect EFFECT_MEMENTO, BattleAIScript_1DA752
	if_effect EFFECT_FACADE, BattleAIScript_1DB730
	if_effect EFFECT_FOCUS_PUNCH, BattleAIScript_1DB73D
	if_effect EFFECT_SMELLINGSALT, BattleAIScript_1DB78C
	if_effect EFFECT_TRICK, BattleAIScript_1DB79E
	if_effect EFFECT_ROLE_PLAY, BattleAIScript_1DB7E9
	if_effect EFFECT_SUPERPOWER, BattleAIScript_1DB820
	if_effect EFFECT_MAGIC_COAT, BattleAIScript_1DB850
	if_effect EFFECT_RECYCLE, BattleAIScript_1DB883
	if_effect EFFECT_REVENGE, BattleAIScript_1DB8A2
	if_effect EFFECT_BRICK_BREAK, BattleAIScript_1DB8D0
	if_effect EFFECT_KNOCK_OFF, BattleAIScript_1DB8E2
	if_effect EFFECT_ENDEAVOR, BattleAIScript_1DB8FA
	if_effect EFFECT_ERUPTION, BattleAIScript_1DB926
	if_effect EFFECT_SKILL_SWAP, BattleAIScript_1DB7E9
	if_effect EFFECT_IMPRISON, BattleAIScript_1DB94E
	if_effect EFFECT_REFRESH, BattleAIScript_1DB95F
	if_effect EFFECT_SNATCH, BattleAIScript_1DB96E
	if_effect EFFECT_BLAZE_KICK, BattleAIScript_1DAEEB
	if_effect EFFECT_MUD_SPORT, BattleAIScript_1DB9D8
	if_effect EFFECT_OVERHEAT, BattleAIScript_1DB9FE
	if_effect EFFECT_TICKLE, BattleAIScript_1DAAD6
	if_effect EFFECT_COSMIC_POWER, BattleAIScript_1DA93A
	if_effect EFFECT_BULK_UP, BattleAIScript_1DA883
	if_effect EFFECT_POISON_TAIL, BattleAIScript_1DAEEB
	if_effect EFFECT_WATER_SPORT, BattleAIScript_1DBA26
	if_effect EFFECT_CALM_MIND, BattleAIScript_1DA93A
	if_effect EFFECT_DRAGON_DANCE, BattleAIScript_1DBA4C
	end

BattleAIScript_1DA71C: @ 81DA71C
	if_move_effect TARGET, EFFECT_DREAM_EATER, BattleAIScript_1DA72F
	if_move_effect TARGET, EFFECT_NIGHTMARE, BattleAIScript_1DA72F
	jump BattleAIScript_1DA737

BattleAIScript_1DA72F: @ 81DA72F
	if_random_less_than 128, BattleAIScript_1DA737
	score +1

BattleAIScript_1DA737: @ 81DA737
	end

BattleAIScript_1DA738: @ 81DA738
	if_damage_bonus 20, BattleAIScript_1DA749
	if_damage_bonus 10, BattleAIScript_1DA749
	jump BattleAIScript_1DA751

BattleAIScript_1DA749: @ 81DA749
	if_random_less_than 50, BattleAIScript_1DA751
	score -3

BattleAIScript_1DA751: @ 81DA751
	end

BattleAIScript_1DA752: @ 81DA752
	if_stat_level_less_than TARGET, EVASION, 7, BattleAIScript_1DA76C
	score -1
	if_stat_level_less_than TARGET, EVASION, 10, BattleAIScript_1DA76C
	if_random_less_than 128, BattleAIScript_1DA76C
	score -1

BattleAIScript_1DA76C: @ 81DA76C
	if_hp_less_than USER, 80, BattleAIScript_1DA784
	if_would_go_first USER, BattleAIScript_1DA784
	if_random_less_than 50, BattleAIScript_1DA7AF
	jump BattleAIScript_1DA42A

BattleAIScript_1DA784: @ 81DA784
	if_hp_more_than USER, 50, BattleAIScript_1DA7A7
	if_random_less_than 128, BattleAIScript_1DA793
	score +1

BattleAIScript_1DA793: @ 81DA793
	if_hp_more_than USER, 30, BattleAIScript_1DA7AF
	if_random_less_than 50, BattleAIScript_1DA7AF
	score +1
	jump BattleAIScript_1DA7AF

BattleAIScript_1DA7A7: @ 81DA7A7
	if_random_less_than 50, BattleAIScript_1DA7AF
	score -1

BattleAIScript_1DA7AF: @ 81DA7AF
	end

BattleAIScript_1DA7B0: @ 81DA7B0
	if_damage_bonus 10, BattleAIScript_1DA7C1
	if_damage_bonus 20, BattleAIScript_1DA7C1
	jump BattleAIScript_1DA7C3

BattleAIScript_1DA7C1: @ 81DA7C1
	score -1

BattleAIScript_1DA7C3: @ 81DA7C3
	end

BattleAIScript_1DA7C4: @ 81DA7C4
	if_would_go_first USER, BattleAIScript_1DA7E2
	get_move TARGET
	if_not_in_words MoveList_1DA7F8, BattleAIScript_1DA7E2
	if_random_less_than 128, BattleAIScript_1DA7F5
	score +2
	jump BattleAIScript_1DA7F5

BattleAIScript_1DA7E2: @ 81DA7E2
	get_move TARGET
	if_in_words MoveList_1DA7F8, BattleAIScript_1DA7F5
	if_random_less_than 80, BattleAIScript_1DA7F5
	score -1

BattleAIScript_1DA7F5: @ 81DA7F5
	end

	.align 2
MoveList_1DA7F8: @ 81DA7F8
	.2byte MOVE_SLEEP_POWDER
	.2byte MOVE_LOVELY_KISS
	.2byte MOVE_SPORE
	.2byte MOVE_HYPNOSIS
	.2byte MOVE_SING
	.2byte MOVE_GRASS_WHISTLE
	.2byte MOVE_SHADOW_PUNCH
	.2byte MOVE_SAND_ATTACK
	.2byte MOVE_SMOKESCREEN
	.2byte MOVE_TOXIC
	.2byte MOVE_GUILLOTINE
	.2byte MOVE_HORN_DRILL
	.2byte MOVE_FISSURE
	.2byte MOVE_SHEER_COLD
	.2byte MOVE_CROSS_CHOP
	.2byte MOVE_AEROBLAST
	.2byte MOVE_CONFUSE_RAY
	.2byte MOVE_SWEET_KISS
	.2byte MOVE_SCREECH
	.2byte MOVE_COTTON_SPORE
	.2byte MOVE_SCARY_FACE
	.2byte MOVE_FAKE_TEARS
	.2byte MOVE_METAL_SOUND
	.2byte MOVE_THUNDER_WAVE
	.2byte MOVE_GLARE
	.2byte MOVE_POISON_POWDER
	.2byte MOVE_SHADOW_BALL
	.2byte MOVE_DYNAMIC_PUNCH
	.2byte MOVE_HYPER_BEAM
	.2byte MOVE_EXTREME_SPEED
	.2byte MOVE_THIEF
	.2byte MOVE_COVET
	.2byte MOVE_ATTRACT
	.2byte MOVE_SWAGGER
	.2byte MOVE_TORMENT
	.2byte MOVE_FLATTER
	.2byte MOVE_TRICK
	.2byte MOVE_SUPERPOWER
	.2byte MOVE_SKILL_SWAP
	.2byte 65535

BattleAIScript_1DA848: @ 81DA848
	if_stat_level_less_than USER, ATTACK, 9, BattleAIScript_1DA85D
	if_random_less_than 100, BattleAIScript_1DA86C
	score -1
	jump BattleAIScript_1DA86C

BattleAIScript_1DA85D: @ 81DA85D
	if_hp_not_equal USER, 100, BattleAIScript_1DA86C
	if_random_less_than 128, BattleAIScript_1DA86C
	score +2

BattleAIScript_1DA86C: @ 81DA86C
	if_hp_more_than USER, 70, BattleAIScript_1DA882
	if_hp_less_than USER, 40, BattleAIScript_1DA880
	if_random_less_than 40, BattleAIScript_1DA882

BattleAIScript_1DA880: @ 81DA880
	score -2

BattleAIScript_1DA882: @ 81DA882
	end

BattleAIScript_1DA883: @ 81DA883
	if_stat_level_less_than USER, DEFENSE, 9, BattleAIScript_1DA898
	if_random_less_than 100, BattleAIScript_1DA8A7
	score -1
	jump BattleAIScript_1DA8A7

BattleAIScript_1DA898: @ 81DA898
	if_hp_not_equal USER, 100, BattleAIScript_1DA8A7
	if_random_less_than 128, BattleAIScript_1DA8A7
	score +2

BattleAIScript_1DA8A7: @ 81DA8A7
	if_hp_less_than USER, 70, BattleAIScript_1DA8B4
	if_random_less_than 200, BattleAIScript_1DA8DE

BattleAIScript_1DA8B4: @ 81DA8B4
	if_hp_less_than USER, 40, BattleAIScript_1DA8DC
	get_move TARGET
	get_move_power_from_result
	if_equal 0, BattleAIScript_1DA8D6
	get_move TARGET
	get_move_type_from_result
	if_not_in_bytes TypeList_1DA8DF, BattleAIScript_1DA8DC
	if_random_less_than 60, BattleAIScript_1DA8DE

BattleAIScript_1DA8D6: @ 81DA8D6
	if_random_less_than 60, BattleAIScript_1DA8DE

BattleAIScript_1DA8DC: @ 81DA8DC
	score -2

BattleAIScript_1DA8DE: @ 81DA8DE
	end

TypeList_1DA8DF: @ 81DA8DF
	.byte TYPE_NORMAL
	.byte TYPE_FIGHTING
	.byte TYPE_POISON
	.byte TYPE_GROUND
	.byte TYPE_FLYING
	.byte TYPE_ROCK
	.byte TYPE_BUG
	.byte TYPE_GHOST
	.byte TYPE_STEEL
	.byte 255

BattleAIScript_1DA8E9: @ 81DA8E9
	if_would_go_first USER, BattleAIScript_1DA8F6
	score -3
	jump BattleAIScript_1DA8FE

BattleAIScript_1DA8F6: @ 81DA8F6
	if_random_less_than 70, BattleAIScript_1DA8FE
	score +3

BattleAIScript_1DA8FE: @ 81DA8FE
	end

BattleAIScript_1DA8FF: @ 81DA8FF
	if_stat_level_less_than USER, SP_ATTACK, 9, BattleAIScript_1DA914
	if_random_less_than 100, BattleAIScript_1DA923
	score -1
	jump BattleAIScript_1DA923

BattleAIScript_1DA914: @ 81DA914
	if_hp_not_equal USER, 100, BattleAIScript_1DA923
	if_random_less_than 128, BattleAIScript_1DA923
	score +2

BattleAIScript_1DA923: @ 81DA923
	if_hp_more_than USER, 70, BattleAIScript_1DA939
	if_hp_less_than USER, 40, BattleAIScript_1DA937
	if_random_less_than 70, BattleAIScript_1DA939

BattleAIScript_1DA937: @ 81DA937
	score -2

BattleAIScript_1DA939: @ 81DA939
	end

BattleAIScript_1DA93A: @ 81DA93A
	if_stat_level_less_than USER, SP_DEFENSE, 9, BattleAIScript_1DA94F
	if_random_less_than 100, BattleAIScript_1DA95E
	score -1
	jump BattleAIScript_1DA95E

BattleAIScript_1DA94F: @ 81DA94F
	if_hp_not_equal USER, 100, BattleAIScript_1DA95E
	if_random_less_than 128, BattleAIScript_1DA95E
	score +2

BattleAIScript_1DA95E: @ 81DA95E
	if_hp_less_than USER, 70, BattleAIScript_1DA96B
	if_random_less_than 200, BattleAIScript_1DA995

BattleAIScript_1DA96B: @ 81DA96B
	if_hp_less_than USER, 40, BattleAIScript_1DA993
	get_move TARGET
	get_move_power_from_result
	if_equal 0, BattleAIScript_1DA98D
	get_move TARGET
	get_move_type_from_result
	if_in_bytes TypeList_1DA996, BattleAIScript_1DA993
	if_random_less_than 60, BattleAIScript_1DA995

BattleAIScript_1DA98D: @ 81DA98D
	if_random_less_than 60, BattleAIScript_1DA995

BattleAIScript_1DA993: @ 81DA993
	score -2

BattleAIScript_1DA995: @ 81DA995
	end

TypeList_1DA996: @ 81DA996
	.byte TYPE_NORMAL
	.byte TYPE_FIGHTING
	.byte TYPE_POISON
	.byte TYPE_GROUND
	.byte TYPE_FLYING
	.byte TYPE_ROCK
	.byte TYPE_BUG
	.byte TYPE_GHOST
	.byte TYPE_STEEL
	.byte 255

BattleAIScript_1DA9A0: @ 81DA9A0
	if_stat_level_less_than USER, ACCURACY, 9, BattleAIScript_1DA9B0
	if_random_less_than 50, BattleAIScript_1DA9B0
	score -2

BattleAIScript_1DA9B0: @ 81DA9B0
	if_hp_more_than USER, 70, BattleAIScript_1DA9B9
	score -2

BattleAIScript_1DA9B9: @ 81DA9B9
	end

BattleAIScript_1DA9BA: @ 81DA9BA
	if_hp_less_than USER, 90, BattleAIScript_1DA9C9
	if_random_less_than 100, BattleAIScript_1DA9C9
	score +3

BattleAIScript_1DA9C9: @ 81DA9C9
	if_stat_level_less_than USER, EVASION, 9, BattleAIScript_1DA9D9
	if_random_less_than 128, BattleAIScript_1DA9D9
	score -1

BattleAIScript_1DA9D9: @ 81DA9D9
	if_not_status TARGET, TOX, BattleAIScript_1DA9F8
	if_hp_more_than USER, 50, BattleAIScript_1DA9F0
	if_random_less_than 80, BattleAIScript_1DA9F8

BattleAIScript_1DA9F0: @ 81DA9F0
	if_random_less_than 50, BattleAIScript_1DA9F8
	score +3

BattleAIScript_1DA9F8: @ 81DA9F8
	if_not_status3 TARGET, 0x4, BattleAIScript_1DAA0A
	if_random_less_than 70, BattleAIScript_1DAA0A
	score +3

BattleAIScript_1DAA0A: @ 81DAA0A
	if_not_status3 USER, 0x400, BattleAIScript_1DAA1C
	if_random_less_than 128, BattleAIScript_1DAA1C
	score +2

BattleAIScript_1DAA1C: @ 81DAA1C
	if_not_status2 TARGET, 0x10000000, BattleAIScript_1DAA2E
	if_random_less_than 70, BattleAIScript_1DAA2E
	score +3

BattleAIScript_1DAA2E: @ 81DAA2E
	if_hp_more_than USER, 70, BattleAIScript_1DAA53
	if_stat_level_equal USER, EVASION, 6, BattleAIScript_1DAA53
	if_hp_less_than USER, 40, BattleAIScript_1DAA51
	if_hp_less_than TARGET, 40, BattleAIScript_1DAA51
	if_random_less_than 70, BattleAIScript_1DAA53

BattleAIScript_1DAA51: @ 81DAA51
	score -2

BattleAIScript_1DAA53: @ 81DAA53
	end

BattleAIScript_1DAA54: @ 81DAA54
	if_stat_level_more_than TARGET, EVASION, 10, BattleAIScript_1DAA79
	if_stat_level_less_than USER, ACCURACY, 2, BattleAIScript_1DAA79
	if_stat_level_more_than TARGET, EVASION, 8, BattleAIScript_1DAA7B
	if_stat_level_less_than USER, ACCURACY, 4, BattleAIScript_1DAA7B
	jump BattleAIScript_1DAA83

BattleAIScript_1DAA79: @ 81DAA79
	score +1

BattleAIScript_1DAA7B: @ 81DAA7B
	if_random_less_than 100, BattleAIScript_1DAA83
	score +1

BattleAIScript_1DAA83: @ 81DAA83
	end

BattleAIScript_1DAA84: @ 81DAA84
	if_stat_level_equal TARGET, ATTACK, 6, BattleAIScript_1DAAA7
	score -1
	if_hp_more_than USER, 90, BattleAIScript_1DAA97
	score -1

BattleAIScript_1DAA97: @ 81DAA97
	if_stat_level_more_than TARGET, ATTACK, 3, BattleAIScript_1DAAA7
	if_random_less_than 50, BattleAIScript_1DAAA7
	score -2

BattleAIScript_1DAAA7: @ 81DAAA7
	if_hp_more_than TARGET, 70, BattleAIScript_1DAAB0
	score -2

BattleAIScript_1DAAB0: @ 81DAAB0
	get_type 0
	if_in_bytes TypeList_1DAACF, BattleAIScript_1DAACE
	get_type 2
	if_in_bytes TypeList_1DAACF, BattleAIScript_1DAACE
	if_random_less_than 50, BattleAIScript_1DAACE
	score -2

BattleAIScript_1DAACE: @ 81DAACE
	end

TypeList_1DAACF: @ 81DAACF
	.byte TYPE_NORMAL
	.byte TYPE_FIGHTING
	.byte TYPE_GROUND
	.byte TYPE_ROCK
	.byte TYPE_BUG
	.byte TYPE_STEEL
	.byte 255

BattleAIScript_1DAAD6: @ 81DAAD6
	if_hp_less_than USER, 70, BattleAIScript_1DAAE5
	if_stat_level_more_than TARGET, DEFENSE, 3, BattleAIScript_1DAAED

BattleAIScript_1DAAE5: @ 81DAAE5
	if_random_less_than 50, BattleAIScript_1DAAED
	score -2

BattleAIScript_1DAAED: @ 81DAAED
	if_hp_more_than TARGET, 70, BattleAIScript_1DAAF6
	score -2

BattleAIScript_1DAAF6: @ 81DAAF6
	end

BattleAIScript_1DAAF7: @ 81DAAF7
	if_move MOVE_ICY_WIND, BattleAIScript_1DAB0D
	if_move MOVE_ROCK_TOMB, BattleAIScript_1DAB0D
	if_move MOVE_MUD_SHOT, BattleAIScript_1DAB0D
	end

BattleAIScript_1DAB0D: @ 81DAB0D
	if_would_go_first USER, BattleAIScript_1DAB1A
	score -3
	jump BattleAIScript_1DAB22

BattleAIScript_1DAB1A: @ 81DAB1A
	if_random_less_than 70, BattleAIScript_1DAB22
	score +2

BattleAIScript_1DAB22: @ 81DAB22
	end

BattleAIScript_1DAB23: @ 81DAB23
	if_stat_level_equal TARGET, ATTACK, 6, BattleAIScript_1DAB46
	score -1
	if_hp_more_than USER, 90, BattleAIScript_1DAB36
	score -1

BattleAIScript_1DAB36: @ 81DAB36
	if_stat_level_more_than TARGET, SP_ATTACK, 3, BattleAIScript_1DAB46
	if_random_less_than 50, BattleAIScript_1DAB46
	score -2

BattleAIScript_1DAB46: @ 81DAB46
	if_hp_more_than TARGET, 70, BattleAIScript_1DAB4F
	score -2

BattleAIScript_1DAB4F: @ 81DAB4F
	get_type 0
	if_in_bytes TypeList_1DAB6E, BattleAIScript_1DAB6D
	get_type 2
	if_in_bytes TypeList_1DAB6E, BattleAIScript_1DAB6D
	if_random_less_than 50, BattleAIScript_1DAB6D
	score -2

BattleAIScript_1DAB6D: @ 81DAB6D
	end

TypeList_1DAB6E: @ 81DAB6E
	.byte TYPE_FIRE
	.byte TYPE_WATER
	.byte TYPE_GRASS
	.byte TYPE_ELECTRIC
	.byte TYPE_PSYCHIC
	.byte TYPE_ICE
	.byte TYPE_DRAGON
	.byte TYPE_DARK
	.byte 255

BattleAIScript_1DAB77: @ 81DAB77
	if_hp_less_than USER, 70, BattleAIScript_1DAB86
	if_stat_level_more_than TARGET, SP_DEFENSE, 3, BattleAIScript_1DAB8E

BattleAIScript_1DAB86: @ 81DAB86
	if_random_less_than 50, BattleAIScript_1DAB8E
	score -2

BattleAIScript_1DAB8E: @ 81DAB8E
	if_hp_more_than TARGET, 70, BattleAIScript_1DAB97
	score -2

BattleAIScript_1DAB97: @ 81DAB97
	end

BattleAIScript_1DAB98: @ 81DAB98
	if_hp_less_than USER, 70, BattleAIScript_1DABA6
	if_hp_more_than TARGET, 70, BattleAIScript_1DABAE

BattleAIScript_1DABA6: @ 81DABA6
	if_random_less_than 100, BattleAIScript_1DABAE
	score -1

BattleAIScript_1DABAE: @ 81DABAE
	if_stat_level_more_than USER, ACCURACY, 4, BattleAIScript_1DABBE
	if_random_less_than 80, BattleAIScript_1DABBE
	score -2

BattleAIScript_1DABBE: @ 81DABBE
	if_not_status TARGET, TOX, BattleAIScript_1DABD0
	if_random_less_than 70, BattleAIScript_1DABD0
	score +2

BattleAIScript_1DABD0: @ 81DABD0
	if_not_status3 TARGET, 0x4, BattleAIScript_1DABE2
	if_random_less_than 70, BattleAIScript_1DABE2
	score +2

BattleAIScript_1DABE2: @ 81DABE2
	if_not_status3 USER, 0x400, BattleAIScript_1DABF4
	if_random_less_than 128, BattleAIScript_1DABF4
	score +1

BattleAIScript_1DABF4: @ 81DABF4
	if_not_status2 TARGET, 0x10000000, BattleAIScript_1DAC06
	if_random_less_than 70, BattleAIScript_1DAC06
	score +2

BattleAIScript_1DAC06: @ 81DAC06
	if_hp_more_than USER, 70, BattleAIScript_1DAC2B
	if_stat_level_equal TARGET, ACCURACY, 6, BattleAIScript_1DAC2B
	if_hp_less_than USER, 40, BattleAIScript_1DAC29
	if_hp_less_than TARGET, 40, BattleAIScript_1DAC29
	if_random_less_than 70, BattleAIScript_1DAC2B

BattleAIScript_1DAC29: @ 81DAC29
	score -2

BattleAIScript_1DAC2B: @ 81DAC2B
	end

BattleAIScript_1DAC2C: @ 81DAC2C
	if_hp_less_than USER, 70, BattleAIScript_1DAC3B
	if_stat_level_more_than TARGET, EVASION, 3, BattleAIScript_1DAC43

BattleAIScript_1DAC3B: @ 81DAC3B
	if_random_less_than 50, BattleAIScript_1DAC43
	score -2

BattleAIScript_1DAC43: @ 81DAC43
	if_hp_more_than TARGET, 70, BattleAIScript_1DAC4C
	score -2

BattleAIScript_1DAC4C: @ 81DAC4C
	end

BattleAIScript_1DAC4D: @ 81DAC4D
	if_stat_level_more_than USER, ATTACK, 8, BattleAIScript_1DACA2
	if_stat_level_more_than USER, DEFENSE, 8, BattleAIScript_1DACA2
	if_stat_level_more_than USER, SP_ATTACK, 8, BattleAIScript_1DACA2
	if_stat_level_more_than USER, SP_DEFENSE, 8, BattleAIScript_1DACA2
	if_stat_level_more_than USER, EVASION, 8, BattleAIScript_1DACA2
	if_stat_level_less_than TARGET, ATTACK, 4, BattleAIScript_1DACA2
	if_stat_level_less_than TARGET, DEFENSE, 4, BattleAIScript_1DACA2
	if_stat_level_less_than TARGET, SP_ATTACK, 4, BattleAIScript_1DACA2
	if_stat_level_less_than TARGET, SP_DEFENSE, 4, BattleAIScript_1DACA2
	if_stat_level_less_than TARGET, ACCURACY, 4, BattleAIScript_1DACA2
	jump BattleAIScript_1DACAA

BattleAIScript_1DACA2: @ 81DACA2
	if_random_less_than 50, BattleAIScript_1DACAA
	score -3

BattleAIScript_1DACAA: @ 81DACAA
	if_stat_level_more_than TARGET, ATTACK, 8, BattleAIScript_1DAD07
	if_stat_level_more_than TARGET, DEFENSE, 8, BattleAIScript_1DAD07
	if_stat_level_more_than TARGET, SP_ATTACK, 8, BattleAIScript_1DAD07
	if_stat_level_more_than TARGET, SP_DEFENSE, 8, BattleAIScript_1DAD07
	if_stat_level_more_than TARGET, EVASION, 8, BattleAIScript_1DAD07
	if_stat_level_less_than USER, ATTACK, 4, BattleAIScript_1DAD07
	if_stat_level_less_than USER, DEFENSE, 4, BattleAIScript_1DAD07
	if_stat_level_less_than USER, SP_ATTACK, 4, BattleAIScript_1DAD07
	if_stat_level_less_than USER, SP_DEFENSE, 4, BattleAIScript_1DAD07
	if_stat_level_less_than USER, ACCURACY, 4, BattleAIScript_1DAD07
	if_random_less_than 50, BattleAIScript_1DAD0F
	score -1
	jump BattleAIScript_1DAD0F

BattleAIScript_1DAD07: @ 81DAD07
	if_random_less_than 50, BattleAIScript_1DAD0F
	score +3

BattleAIScript_1DAD0F: @ 81DAD0F
	end

BattleAIScript_1DAD10: @ 81DAD10
	if_hp_more_than USER, 90, BattleAIScript_1DAD19
	score -2

BattleAIScript_1DAD19: @ 81DAD19
	end

BattleAIScript_1DAD1A: @ 81DAD1A
	if_stat_level_more_than TARGET, ATTACK, 8, BattleAIScript_1DAD49
	if_stat_level_more_than TARGET, DEFENSE, 8, BattleAIScript_1DAD49
	if_stat_level_more_than TARGET, SP_ATTACK, 8, BattleAIScript_1DAD49
	if_stat_level_more_than TARGET, SP_DEFENSE, 8, BattleAIScript_1DAD49
	if_stat_level_more_than TARGET, EVASION, 8, BattleAIScript_1DAD49
	score -3
	jump BattleAIScript_1DAD51

BattleAIScript_1DAD49: @ 81DAD49
	if_random_less_than 128, BattleAIScript_1DAD51
	score +2

BattleAIScript_1DAD51: @ 81DAD51
	end

BattleAIScript_1DAD52: @ 81DAD52
	if_hp_more_than USER, 90, BattleAIScript_1DAD5B
	score -2

BattleAIScript_1DAD5B: @ 81DAD5B
	get_turn_count
	if_equal 0, BattleAIScript_1DAD68
	if_random_less_than 200, BattleAIScript_1DA427

BattleAIScript_1DAD68: @ 81DAD68
	end

BattleAIScript_1DAD69: @ 81DAD69
	get_weather
	if_equal WEATHER_HAIL, BattleAIScript_1DAD81
	if_equal WEATHER_RAIN, BattleAIScript_1DAD81
	if_equal WEATHER_SANDSTORM, BattleAIScript_1DAD81
	jump BattleAIScript_1DAD83

BattleAIScript_1DAD81: @ 81DAD81
	score -2

BattleAIScript_1DAD83: @ 81DAD83
	if_hp_equal USER, 100, BattleAIScript_1DADAB
	if_would_go_first USER, BattleAIScript_1DADB2
	score -8
	jump BattleAIScript_1DADDB

	if_hp_less_than USER, 50, BattleAIScript_1DADC6
	if_hp_more_than USER, 80, BattleAIScript_1DADAB
	if_random_less_than 70, BattleAIScript_1DADC6

BattleAIScript_1DADAB: @ 81DADAB
	score -3
	jump BattleAIScript_1DADDB

BattleAIScript_1DADB2: @ 81DADB2
	if_hp_less_than USER, 70, BattleAIScript_1DADC6
	if_random_less_than 30, BattleAIScript_1DADC6
	score -3
	jump BattleAIScript_1DADDB

BattleAIScript_1DADC6: @ 81DADC6
	if_not_move_effect TARGET, EFFECT_SNATCH, BattleAIScript_1DADD3
	if_random_less_than 100, BattleAIScript_1DADDB

BattleAIScript_1DADD3: @ 81DADD3
	if_random_less_than 20, BattleAIScript_1DADDB
	score +2

BattleAIScript_1DADDB: @ 81DADDB
	end

BattleAIScript_1DADDC: @ 81DADDC
	if_user_cant_damage BattleAIScript_1DADFF
	if_hp_more_than USER, 50, BattleAIScript_1DADF0
	if_random_less_than 50, BattleAIScript_1DADF0
	score -3

BattleAIScript_1DADF0: @ 81DADF0
	if_hp_more_than TARGET, 50, BattleAIScript_1DADFF
	if_random_less_than 50, BattleAIScript_1DADFF
	score -3

BattleAIScript_1DADFF: @ 81DADFF
	if_move_effect USER, EFFECT_SPECIAL_DEFENSE_UP, BattleAIScript_1DAE12
	if_move_effect USER, EFFECT_PROTECT, BattleAIScript_1DAE12
	jump BattleAIScript_1DAE1A

BattleAIScript_1DAE12: @ 81DAE12
	if_random_less_than 60, BattleAIScript_1DAE1A
	score +2

BattleAIScript_1DAE1A: @ 81DAE1A
	end

BattleAIScript_1DAE1B: @ 81DAE1B
	if_hp_less_than USER, 50, BattleAIScript_1DAE3E
	get_type 0
	if_in_bytes TypeList_1DAE41, BattleAIScript_1DAE40
	get_type 2
	if_in_bytes TypeList_1DAE41, BattleAIScript_1DAE40
	if_random_less_than 50, BattleAIScript_1DAE40

BattleAIScript_1DAE3E: @ 81DAE3E
	score -2

BattleAIScript_1DAE40: @ 81DAE40
	end

TypeList_1DAE41: @ 81DAE41
	.byte TYPE_FIRE
	.byte TYPE_WATER
	.byte TYPE_GRASS
	.byte TYPE_ELECTRIC
	.byte TYPE_PSYCHIC
	.byte TYPE_ICE
	.byte TYPE_DRAGON
	.byte TYPE_DARK
	.byte 255

BattleAIScript_1DAE4A: @ 81DAE4A
	if_would_go_first USER, BattleAIScript_1DAE79
	if_hp_not_equal USER, 100, BattleAIScript_1DAE5E
	score -8
	jump BattleAIScript_1DAEA9

BattleAIScript_1DAE5E: @ 81DAE5E
	if_hp_less_than USER, 40, BattleAIScript_1DAE94
	if_hp_more_than USER, 50, BattleAIScript_1DAE72
	if_random_less_than 70, BattleAIScript_1DAE94

BattleAIScript_1DAE72: @ 81DAE72
	score -3
	jump BattleAIScript_1DAEA9

BattleAIScript_1DAE79: @ 81DAE79
	if_hp_less_than USER, 60, BattleAIScript_1DAE94
	if_hp_more_than USER, 70, BattleAIScript_1DAE8D
	if_random_less_than 50, BattleAIScript_1DAE94

BattleAIScript_1DAE8D: @ 81DAE8D
	score -3
	jump BattleAIScript_1DAEA9

BattleAIScript_1DAE94: @ 81DAE94
	if_not_move_effect TARGET, EFFECT_SNATCH, BattleAIScript_1DAEA1
	if_random_less_than 50, BattleAIScript_1DAEA9

BattleAIScript_1DAEA1: @ 81DAEA1
	if_random_less_than 10, BattleAIScript_1DAEA9
	score +3

BattleAIScript_1DAEA9: @ 81DAEA9
	end

BattleAIScript_1DAEAA: @ 81DAEAA
	end

BattleAIScript_1DAEAB: @ 81DAEAB
	if_hp_more_than TARGET, 50, BattleAIScript_1DAEB4
	score -1

BattleAIScript_1DAEB4: @ 81DAEB4
	end

BattleAIScript_1DAEB5: @ 81DAEB5
	if_status TARGET, TOX, BattleAIScript_1DAEE2
	if_status2 TARGET, 0x10000000, BattleAIScript_1DAEE2
	if_status3 TARGET, 0x20, BattleAIScript_1DAEE2
	if_status2 TARGET, 0xf0000, BattleAIScript_1DAEE2
	jump BattleAIScript_1DAEEA

BattleAIScript_1DAEE2: @ 81DAEE2
	if_random_less_than 128, BattleAIScript_1DAEEA
	score +1

BattleAIScript_1DAEEA: @ 81DAEEA
	end

BattleAIScript_1DAEEB: @ 81DAEEB
	if_damage_bonus 10, BattleAIScript_1DAF11
	if_damage_bonus 20, BattleAIScript_1DAF11
	if_damage_bonus 80, BattleAIScript_1DAF09
	if_damage_bonus 160, BattleAIScript_1DAF09
	if_random_less_than 128, BattleAIScript_1DAF11

BattleAIScript_1DAF09: @ 81DAF09
	if_random_less_than 128, BattleAIScript_1DAF11
	score +1

BattleAIScript_1DAF11: @ 81DAF11
	end

BattleAIScript_1DAF12: @ 81DAF12
	if_random_less_than 128, BattleAIScript_1DAF1A
	score +1

BattleAIScript_1DAF1A: @ 81DAF1A
	if_hp_more_than TARGET, 70, BattleAIScript_1DAF3B
	if_random_less_than 128, BattleAIScript_1DAF29
	score -1

BattleAIScript_1DAF29: @ 81DAF29
	if_hp_more_than TARGET, 50, BattleAIScript_1DAF3B
	score -1
	if_hp_more_than TARGET, 30, BattleAIScript_1DAF3B
	score -1

BattleAIScript_1DAF3B: @ 81DAF3B
	end

BattleAIScript_1DAF3C: @ 81DAF3C
	if_hp_less_than USER, 50, BattleAIScript_1DAF5F
	get_type 0
	if_in_bytes TypeList_1DAF62, BattleAIScript_1DAF61
	get_type 2
	if_in_bytes TypeList_1DAF62, BattleAIScript_1DAF61
	if_random_less_than 50, BattleAIScript_1DAF61

BattleAIScript_1DAF5F: @ 81DAF5F
	score -2

BattleAIScript_1DAF61: @ 81DAF61
	end

TypeList_1DAF62: @ 81DAF62
	.byte TYPE_NORMAL
	.byte TYPE_FIGHTING
	.byte TYPE_FLYING
	.byte TYPE_POISON
	.byte TYPE_GROUND
	.byte TYPE_ROCK
	.byte TYPE_BUG
	.byte TYPE_GHOST
	.byte TYPE_STEEL
	.byte 255

BattleAIScript_1DAF6C: @ 81DAF6C
	if_hp_less_than USER, 50, BattleAIScript_1DAF7A
	if_hp_more_than TARGET, 50, BattleAIScript_1DAF7C

BattleAIScript_1DAF7A: @ 81DAF7A
	score -1

BattleAIScript_1DAF7C: @ 81DAF7C
	end

BattleAIScript_1DAF7D: @ 81DAF7D
	if_would_go_first USER, BattleAIScript_1DAF91
	if_hp_more_than USER, 70, BattleAIScript_1DAF99
	score -1
	jump BattleAIScript_1DAF99

BattleAIScript_1DAF91: @ 81DAF91
	if_random_less_than 20, BattleAIScript_1DAF99
	score +3

BattleAIScript_1DAF99: @ 81DAF99
	end

BattleAIScript_1DAF9A: @ 81DAF9A
	if_would_go_first USER, BattleAIScript_1DAFBC
	if_hp_more_than USER, 60, BattleAIScript_1DAFBC
	if_hp_less_than USER, 40, BattleAIScript_1DAFB4
	if_random_less_than 180, BattleAIScript_1DAFBC

BattleAIScript_1DAFB4: @ 81DAFB4
	if_random_less_than 50, BattleAIScript_1DAFBC
	score -1

BattleAIScript_1DAFBC: @ 81DAFBC
	end

BattleAIScript_1DAFBD: @ 81DAFBD
	if_hp_more_than USER, 90, BattleAIScript_1DAFEA
	if_hp_more_than USER, 70, BattleAIScript_1DAFE2
	if_hp_more_than USER, 50, BattleAIScript_1DAFDA
	if_random_less_than 100, BattleAIScript_1DAFDA
	score -1

BattleAIScript_1DAFDA: @ 81DAFDA
	if_random_less_than 100, BattleAIScript_1DAFE2
	score -1

BattleAIScript_1DAFE2: @ 81DAFE2
	if_random_less_than 100, BattleAIScript_1DAFEA
	score -1

BattleAIScript_1DAFEA: @ 81DAFEA
	if_would_go_first USER, BattleAIScript_1DB052
	get_move TARGET
	get_move_effect_from_result
	if_equal EFFECT_SLEEP, BattleAIScript_1DB022
	if_equal EFFECT_TOXIC, BattleAIScript_1DB022
	if_equal EFFECT_POISON, BattleAIScript_1DB022
	if_equal EFFECT_PARALYZE, BattleAIScript_1DB022
	if_equal EFFECT_WILL_O_WISP, BattleAIScript_1DB022
	if_equal EFFECT_CONFUSE, BattleAIScript_1DB031
	if_equal EFFECT_LEECH_SEED, BattleAIScript_1DB040
	jump BattleAIScript_1DB052

BattleAIScript_1DB022: @ 81DB022
	if_not_status TARGET, SLP | PSN | BRN | FRZ | PAR | TOX, BattleAIScript_1DB04A
	jump BattleAIScript_1DB052

BattleAIScript_1DB031: @ 81DB031
	if_not_status2 TARGET, S_CONFUSED, BattleAIScript_1DB04A
	jump BattleAIScript_1DB052

BattleAIScript_1DB040: @ 81DB040
	if_status3 TARGET, 0x4, BattleAIScript_1DB052

BattleAIScript_1DB04A: @ 81DB04A
	if_random_less_than 100, BattleAIScript_1DB052
	score +1

BattleAIScript_1DB052: @ 81DB052
	end

BattleAIScript_1DB053: @ 81DB053
	if_damage_bonus 10, BattleAIScript_1DB078
	if_damage_bonus 20, BattleAIScript_1DB078
	if_would_go_first USER, BattleAIScript_1DB071
	if_hp_more_than USER, 40, BattleAIScript_1DB078
	jump BattleAIScript_1DB07A

BattleAIScript_1DB071: @ 81DB071
	if_hp_less_than USER, 60, BattleAIScript_1DB07A

BattleAIScript_1DB078: @ 81DB078
	score -1

BattleAIScript_1DB07A: @ 81DB07A
	end

BattleAIScript_1DB07B: @ 81DB07B
	if_would_go_first USER, BattleAIScript_1DB099
	get_move TARGET
	get_move_power_from_result
	if_equal 0, BattleAIScript_1DB091
	score +1
	jump BattleAIScript_1DB099

BattleAIScript_1DB091: @ 81DB091
	if_random_less_than 100, BattleAIScript_1DB099
	score -1

BattleAIScript_1DB099: @ 81DB099
	end

BattleAIScript_1DB09A: @ 81DB09A
	if_status TARGET, SLP, BattleAIScript_1DB12E
	if_status2 TARGET, 0xf0000, BattleAIScript_1DB12E
	if_status2 TARGET, S_CONFUSED, BattleAIScript_1DB12E
	if_hp_more_than USER, 30, BattleAIScript_1DB0C7
	if_random_less_than 10, BattleAIScript_1DB0C7
	score -1

BattleAIScript_1DB0C7: @ 81DB0C7
	if_hp_more_than USER, 50, BattleAIScript_1DB0D6
	if_random_less_than 100, BattleAIScript_1DB0D6
	score -1

BattleAIScript_1DB0D6: @ 81DB0D6
	get_move TARGET
	get_move_power_from_result
	if_equal 0, BattleAIScript_1DB105
	if_not_taunted BattleAIScript_1DB0EC
	if_random_less_than 100, BattleAIScript_1DB0EC
	score +1

BattleAIScript_1DB0EC: @ 81DB0EC
	get_move TARGET
	get_move_type_from_result
	if_not_in_bytes TypeList_1DB131, BattleAIScript_1DB12E
	if_random_less_than 100, BattleAIScript_1DB130
	score +1
	jump BattleAIScript_1DB130

BattleAIScript_1DB105: @ 81DB105
	if_not_taunted BattleAIScript_1DB112
	if_random_less_than 100, BattleAIScript_1DB112
	score +1

BattleAIScript_1DB112: @ 81DB112
	get_type 0
	if_in_bytes TypeList_1DB131, BattleAIScript_1DB130
	get_type 2
	if_in_bytes TypeList_1DB131, BattleAIScript_1DB130
	if_random_less_than 50, BattleAIScript_1DB130

BattleAIScript_1DB12E: @ 81DB12E
	score -1

BattleAIScript_1DB130: @ 81DB130
	end

TypeList_1DB131: @ 81DB131
	.byte TYPE_NORMAL
	.byte TYPE_FIGHTING
	.byte TYPE_FLYING
	.byte TYPE_POISON
	.byte TYPE_GROUND
	.byte TYPE_ROCK
	.byte TYPE_BUG
	.byte TYPE_GHOST
	.byte TYPE_STEEL
	.byte 255

BattleAIScript_1DB13B: @ 81DB13B
	if_last_move_did_damage TARGET, 0, BattleAIScript_1DB154
	if_would_go_first USER, BattleAIScript_1DB161
	get_move TARGET
	get_move_effect_from_result
	if_not_in_bytes MoveEffectList_1DB164, BattleAIScript_1DB161

BattleAIScript_1DB154: @ 81DB154
	if_random_less_than 30, BattleAIScript_1DB163
	score +3
	jump BattleAIScript_1DB163

BattleAIScript_1DB161: @ 81DB161
	score -2

BattleAIScript_1DB163: @ 81DB163
	end

MoveEffectList_1DB164: @ 81DB164
	.byte EFFECT_DREAM_EATER
	.byte EFFECT_ATTACK_UP
	.byte EFFECT_DEFENSE_UP
	.byte EFFECT_SPEED_UP
	.byte EFFECT_SPECIAL_ATTACK_UP
	.byte EFFECT_HAZE
	.byte EFFECT_ROAR
	.byte EFFECT_CONVERSION
	.byte EFFECT_TOXIC
	.byte EFFECT_LIGHT_SCREEN
	.byte EFFECT_REST
	.byte EFFECT_SUPER_FANG
	.byte EFFECT_SPECIAL_DEFENSE_UP_2
	.byte EFFECT_CONFUSE
	.byte EFFECT_POISON
	.byte EFFECT_PARALYZE
	.byte EFFECT_LEECH_SEED
	.byte EFFECT_SPLASH
	.byte EFFECT_ATTACK_UP_2
	.byte EFFECT_ENCORE
	.byte EFFECT_CONVERSION_2
	.byte EFFECT_LOCK_ON
	.byte EFFECT_HEAL_BELL
	.byte EFFECT_MEAN_LOOK
	.byte EFFECT_NIGHTMARE
	.byte EFFECT_PROTECT
	.byte EFFECT_SKILL_SWAP
	.byte EFFECT_FORESIGHT
	.byte EFFECT_PERISH_SONG
	.byte EFFECT_SANDSTORM
	.byte EFFECT_ENDURE
	.byte EFFECT_SWAGGER
	.byte EFFECT_ATTRACT
	.byte EFFECT_SAFEGUARD
	.byte EFFECT_RAIN_DANCE
	.byte EFFECT_SUNNY_DAY
	.byte EFFECT_BELLY_DRUM
	.byte EFFECT_PSYCH_UP
	.byte EFFECT_FUTURE_SIGHT
	.byte EFFECT_FAKE_OUT
	.byte EFFECT_STOCKPILE
	.byte EFFECT_SPIT_UP
	.byte EFFECT_SWALLOW
	.byte EFFECT_HAIL
	.byte EFFECT_TORMENT
	.byte EFFECT_WILL_O_WISP
	.byte EFFECT_FOLLOW_ME
	.byte EFFECT_CHARGE
	.byte EFFECT_TRICK
	.byte EFFECT_ROLE_PLAY
	.byte EFFECT_INGRAIN
	.byte EFFECT_RECYCLE
	.byte EFFECT_KNOCK_OFF
	.byte EFFECT_SKILL_SWAP
	.byte EFFECT_IMPRISON
	.byte EFFECT_REFRESH
	.byte EFFECT_GRUDGE
	.byte EFFECT_TEETER_DANCE
	.byte EFFECT_MUD_SPORT
	.byte EFFECT_WATER_SPORT
	.byte EFFECT_DRAGON_DANCE
	.byte EFFECT_CAMOUFLAGE
	.byte 255

BattleAIScript_1DB1A3: @ 81DB1A3
	if_hp_less_than TARGET, 80, BattleAIScript_1DB1CC
	if_would_go_first USER, BattleAIScript_1DB1BE
	if_hp_more_than USER, 40, BattleAIScript_1DB1CC
	score +1
	jump BattleAIScript_1DB1CE

BattleAIScript_1DB1BE: @ 81DB1BE
	if_hp_more_than USER, 60, BattleAIScript_1DB1CC
	score +1
	jump BattleAIScript_1DB1CE

BattleAIScript_1DB1CC: @ 81DB1CC
	score -1

BattleAIScript_1DB1CE: @ 81DB1CE
	end

BattleAIScript_1DB1CF: @ 81DB1CF
	score +2
	end

BattleAIScript_1DB1D2: @ 81DB1D2
	if_random_less_than 128, BattleAIScript_1DB1DA
	score +2

BattleAIScript_1DB1DA: @ 81DB1DA
	end

BattleAIScript_1DB1DB: @ 81DB1DB
	score +2
	end

BattleAIScript_1DB1DE: @ 81DB1DE
	score -1
	if_would_go_first USER, BattleAIScript_1DB213
	if_hp_more_than USER, 70, BattleAIScript_1DB213
	if_random_less_than 128, BattleAIScript_1DB1F5
	score +1

BattleAIScript_1DB1F5: @ 81DB1F5
	if_hp_more_than USER, 50, BattleAIScript_1DB213
	if_random_less_than 128, BattleAIScript_1DB204
	score +1

BattleAIScript_1DB204: @ 81DB204
	if_hp_more_than USER, 30, BattleAIScript_1DB213
	if_random_less_than 100, BattleAIScript_1DB213
	score +2

BattleAIScript_1DB213: @ 81DB213
	end

BattleAIScript_1DB214: @ 81DB214
	if_would_go_first USER, BattleAIScript_1DB234
	if_hp_more_than USER, 33, BattleAIScript_1DB256
	if_hp_more_than USER, 20, BattleAIScript_1DB258
	if_hp_less_than USER, 8, BattleAIScript_1DB247
	jump BattleAIScript_1DB249

BattleAIScript_1DB234: @ 81DB234
	if_hp_more_than USER, 60, BattleAIScript_1DB256
	if_hp_more_than USER, 40, BattleAIScript_1DB258
	jump BattleAIScript_1DB249

BattleAIScript_1DB247: @ 81DB247
	score +1

BattleAIScript_1DB249: @ 81DB249
	if_random_less_than 100, BattleAIScript_1DB258
	score +1
	jump BattleAIScript_1DB258

BattleAIScript_1DB256: @ 81DB256
	score -1

BattleAIScript_1DB258: @ 81DB258
	end

BattleAIScript_1DB259: @ 81DB259
	if_status TARGET, SLP | PSN | BRN | FRZ | PAR | TOX, BattleAIScript_1DB26F
	if_status_in_party TARGET, S_CONFUSED | 0xf8, BattleAIScript_1DB26F
	score -5

BattleAIScript_1DB26F: @ 81DB26F
	end

BattleAIScript_1DB270: @ 81DB270
	get_hold_effect TARGET
	if_not_in_bytes HoldEffectList_1DB28B, BattleAIScript_1DB288
	if_random_less_than 50, BattleAIScript_1DB28A
	score +1
	jump BattleAIScript_1DB28A

BattleAIScript_1DB288: @ 81DB288
	score -2

BattleAIScript_1DB28A: @ 81DB28A
	end

HoldEffectList_1DB28B: @ 81DB28B
	.byte HOLD_EFFECT_CURE_SLP
	.byte HOLD_EFFECT_CURE_STATUS
	.byte HOLD_EFFECT_RESTORE_HP
	.byte HOLD_EFFECT_EVASION_UP
	.byte HOLD_EFFECT_LEFTOVERS
	.byte HOLD_EFFECT_LIGHT_BALL
	.byte HOLD_EFFECT_THICK_CLUB
	.byte 255

BattleAIScript_1DB293: @ 81DB293
	get_type 1
	if_equal TYPE_GHOST, BattleAIScript_1DB2D8
	get_type 3
	if_equal TYPE_GHOST, BattleAIScript_1DB2D8
	if_stat_level_more_than USER, DEFENSE, 9, BattleAIScript_1DB2E1
	if_random_less_than 128, BattleAIScript_1DB2B3
	score +1

BattleAIScript_1DB2B3: @ 81DB2B3
	if_stat_level_more_than USER, DEFENSE, 7, BattleAIScript_1DB2E1
	if_random_less_than 128, BattleAIScript_1DB2C3
	score +1

BattleAIScript_1DB2C3: @ 81DB2C3
	if_stat_level_more_than USER, DEFENSE, 6, BattleAIScript_1DB2E1
	if_random_less_than 128, BattleAIScript_1DB2E1
	score +1
	jump BattleAIScript_1DB2E1

BattleAIScript_1DB2D8: @ 81DB2D8
	if_hp_more_than USER, 80, BattleAIScript_1DB2E1
	score -1

BattleAIScript_1DB2E1: @ 81DB2E1
	end

BattleAIScript_1DB2E2: @ 81DB2E2
	get_protect_count USER
	if_more_than 1, BattleAIScript_1DB3A0
	if_status USER, TOX, BattleAIScript_1DB397
	if_status2 USER, 0x10000000, BattleAIScript_1DB397
	if_status3 USER, 0x20, BattleAIScript_1DB397
	if_status2 USER, 0xf0000, BattleAIScript_1DB397
	if_status3 USER, 0x4, BattleAIScript_1DB397
	if_status3 USER, 0x1800, BattleAIScript_1DB397
	if_move_effect TARGET, EFFECT_RESTORE_HP, BattleAIScript_1DB397
	if_move_effect TARGET, EFFECT_DEFENSE_CURL, BattleAIScript_1DB397
	if_status TARGET, TOX, BattleAIScript_1DB37E
	if_status2 TARGET, 0x10000000, BattleAIScript_1DB37E
	if_status3 TARGET, 0x20, BattleAIScript_1DB37E
	if_status2 TARGET, 0xf0000, BattleAIScript_1DB37E
	if_status3 TARGET, 0x4, BattleAIScript_1DB37E
	if_status3 TARGET, 0x1800, BattleAIScript_1DB37E
	get_move TARGET
	get_move_effect_from_result
	if_not_equal EFFECT_LOCK_ON, BattleAIScript_1DB37E
	jump BattleAIScript_1DB380

BattleAIScript_1DB37E: @ 81DB37E
	score +2

BattleAIScript_1DB380: @ 81DB380
	get_protect_count USER
	if_equal 0, BattleAIScript_1DB3A2
	score -1
	if_random_less_than 128, BattleAIScript_1DB3A2
	score -1
	jump BattleAIScript_1DB3A2

BattleAIScript_1DB397: @ 81DB397
	get_move TARGET
	get_move_effect_from_result
	if_not_equal EFFECT_LOCK_ON, BattleAIScript_1DB3A2

BattleAIScript_1DB3A0: @ 81DB3A0
	score -2

BattleAIScript_1DB3A2: @ 81DB3A2
	end

BattleAIScript_1DB3A3: @ 81DB3A3
	get_type 1
	if_equal TYPE_GHOST, BattleAIScript_1DB3C2
	get_type 3
	if_equal TYPE_GHOST, BattleAIScript_1DB3C2
	if_stat_level_more_than USER, EVASION, 8, BattleAIScript_1DB3C8
	score -2
	jump BattleAIScript_1DB3D0

BattleAIScript_1DB3C2: @ 81DB3C2
	if_random_less_than 80, BattleAIScript_1DB3D0

BattleAIScript_1DB3C8: @ 81DB3C8
	if_random_less_than 80, BattleAIScript_1DB3D0
	score +2

BattleAIScript_1DB3D0: @ 81DB3D0
	end

BattleAIScript_1DB3D1: @ 81DB3D1
	if_hp_less_than USER, 4, BattleAIScript_1DB3DF
	if_hp_less_than USER, 35, BattleAIScript_1DB3E6

BattleAIScript_1DB3DF: @ 81DB3DF
	score -1
	jump BattleAIScript_1DB3EE

BattleAIScript_1DB3E6: @ 81DB3E6
	if_random_less_than 70, BattleAIScript_1DB3EE
	score +1

BattleAIScript_1DB3EE: @ 81DB3EE
	end

BattleAIScript_1DB3EF: @ 81DB3EF
	if_stat_level_more_than USER, ATTACK, 8, BattleAIScript_1DB41C
	if_stat_level_more_than USER, DEFENSE, 8, BattleAIScript_1DB41C
	if_stat_level_more_than USER, SP_ATTACK, 8, BattleAIScript_1DB41C
	if_stat_level_more_than USER, SP_DEFENSE, 8, BattleAIScript_1DB41C
	if_stat_level_more_than USER, EVASION, 8, BattleAIScript_1DB41C
	jump BattleAIScript_1DB442

BattleAIScript_1DB41C: @ 81DB41C
	if_would_go_first USER, BattleAIScript_1DB42E
	if_hp_more_than USER, 60, BattleAIScript_1DB48A
	jump BattleAIScript_1DB435

BattleAIScript_1DB42E: @ 81DB42E
	if_hp_more_than USER, 70, BattleAIScript_1DB48A

BattleAIScript_1DB435: @ 81DB435
	if_random_less_than 80, BattleAIScript_1DB48A
	score +2
	jump BattleAIScript_1DB48A

BattleAIScript_1DB442: @ 81DB442
	if_stat_level_more_than USER, ATTACK, 7, BattleAIScript_1DB46F
	if_stat_level_more_than USER, DEFENSE, 7, BattleAIScript_1DB46F
	if_stat_level_more_than USER, SP_ATTACK, 7, BattleAIScript_1DB46F
	if_stat_level_more_than USER, SP_DEFENSE, 7, BattleAIScript_1DB46F
	if_stat_level_more_than USER, EVASION, 7, BattleAIScript_1DB46F
	jump BattleAIScript_1DB488

BattleAIScript_1DB46F: @ 81DB46F
	if_would_go_first USER, BattleAIScript_1DB481
	if_hp_more_than USER, 60, BattleAIScript_1DB488
	jump BattleAIScript_1DB48A

BattleAIScript_1DB481: @ 81DB481
	if_hp_less_than USER, 70, BattleAIScript_1DB48A

BattleAIScript_1DB488: @ 81DB488
	score -2

BattleAIScript_1DB48A: @ 81DB48A
	end

BattleAIScript_1DB48B: @ 81DB48B
	is_first_turn USER
	if_not_equal 0, BattleAIScript_1DB4C0
	get_type 0
	if_equal TYPE_GHOST, BattleAIScript_1DB4B8
	get_type 0
	if_equal TYPE_PSYCHIC, BattleAIScript_1DB4B8
	get_type 2
	if_equal TYPE_GHOST, BattleAIScript_1DB4B8
	get_type 2
	if_equal TYPE_PSYCHIC, BattleAIScript_1DB4B8
	jump BattleAIScript_1DB4C0

BattleAIScript_1DB4B8: @ 81DB4B8
	if_random_less_than 128, BattleAIScript_1DB4C0
	score +1

BattleAIScript_1DB4C0: @ 81DB4C0
	end

BattleAIScript_1DB4C1: @ 81DB4C1
	if_would_go_first TARGET, BattleAIScript_1DB4CF
	get_ability USER
	if_equal ABILITY_SWIFT_SWIM, BattleAIScript_1DB4F6

BattleAIScript_1DB4CF: @ 81DB4CF
	if_hp_less_than USER, 40, BattleAIScript_1DB4FD
	get_weather
	if_equal WEATHER_HAIL, BattleAIScript_1DB4F6
	if_equal WEATHER_SUN, BattleAIScript_1DB4F6
	if_equal WEATHER_SANDSTORM, BattleAIScript_1DB4F6
	get_ability USER
	if_equal ABILITY_RAIN_DISH, BattleAIScript_1DB4F6
	jump BattleAIScript_1DB4FF

BattleAIScript_1DB4F6: @ 81DB4F6
	score +1
	jump BattleAIScript_1DB4FF

BattleAIScript_1DB4FD: @ 81DB4FD
	score -1

BattleAIScript_1DB4FF: @ 81DB4FF
	end

BattleAIScript_1DB500: @ 81DB500
	if_hp_less_than USER, 40, BattleAIScript_1DB526
	get_weather
	if_equal WEATHER_HAIL, BattleAIScript_1DB51F
	if_equal WEATHER_RAIN, BattleAIScript_1DB51F
	if_equal WEATHER_SANDSTORM, BattleAIScript_1DB51F
	jump BattleAIScript_1DB528

BattleAIScript_1DB51F: @ 81DB51F
	score +1
	jump BattleAIScript_1DB528

BattleAIScript_1DB526: @ 81DB526
	score -1

BattleAIScript_1DB528: @ 81DB528
	end

BattleAIScript_1DB529: @ 81DB529
	if_hp_less_than USER, 90, BattleAIScript_1DB535
	jump BattleAIScript_1DB537

BattleAIScript_1DB535: @ 81DB535
	score -2

BattleAIScript_1DB537: @ 81DB537
	end

BattleAIScript_1DB538: @ 81DB538
	if_stat_level_more_than TARGET, ATTACK, 8, BattleAIScript_1DB565
	if_stat_level_more_than TARGET, DEFENSE, 8, BattleAIScript_1DB565
	if_stat_level_more_than TARGET, SP_ATTACK, 8, BattleAIScript_1DB565
	if_stat_level_more_than TARGET, SP_DEFENSE, 8, BattleAIScript_1DB565
	if_stat_level_more_than TARGET, EVASION, 8, BattleAIScript_1DB565
	jump BattleAIScript_1DB5A2

BattleAIScript_1DB565: @ 81DB565
	if_stat_level_less_than USER, ATTACK, 7, BattleAIScript_1DB59A
	if_stat_level_less_than USER, DEFENSE, 7, BattleAIScript_1DB59A
	if_stat_level_less_than USER, SP_ATTACK, 7, BattleAIScript_1DB59A
	if_stat_level_less_than USER, SP_DEFENSE, 7, BattleAIScript_1DB59A
	if_stat_level_less_than USER, EVASION, 7, BattleAIScript_1DB598
	if_random_less_than 50, BattleAIScript_1DB5A4
	jump BattleAIScript_1DB5A2

BattleAIScript_1DB598: @ 81DB598
	score +1

BattleAIScript_1DB59A: @ 81DB59A
	if_random_less_than 128, BattleAIScript_1DB5A4
	score +1

BattleAIScript_1DB5A2: @ 81DB5A2
	score -2

BattleAIScript_1DB5A4: @ 81DB5A4
	end

BattleAIScript_1DB5A5: @ 81DB5A5
	if_status TARGET, SLP, BattleAIScript_1DB639
	if_status2 TARGET, 0xf0000, BattleAIScript_1DB639
	if_status2 TARGET, S_CONFUSED, BattleAIScript_1DB639
	if_hp_more_than USER, 30, BattleAIScript_1DB5D2
	if_random_less_than 10, BattleAIScript_1DB5D2
	score -1

BattleAIScript_1DB5D2: @ 81DB5D2
	if_hp_more_than USER, 50, BattleAIScript_1DB5E1
	if_random_less_than 100, BattleAIScript_1DB5E1
	score -1

BattleAIScript_1DB5E1: @ 81DB5E1
	get_move TARGET
	get_move_power_from_result
	if_equal 0, BattleAIScript_1DB610
	if_not_taunted BattleAIScript_1DB5F7
	if_random_less_than 100, BattleAIScript_1DB5F7
	score +1

BattleAIScript_1DB5F7: @ 81DB5F7
	get_move TARGET
	get_move_type_from_result
	if_not_in_bytes TypeList_1DB63C, BattleAIScript_1DB639
	if_random_less_than 100, BattleAIScript_1DB63B
	score +1
	jump BattleAIScript_1DB63B

BattleAIScript_1DB610: @ 81DB610
	if_not_taunted BattleAIScript_1DB61D
	if_random_less_than 100, BattleAIScript_1DB61D
	score +1

BattleAIScript_1DB61D: @ 81DB61D
	get_type 0
	if_in_bytes TypeList_1DB63C, BattleAIScript_1DB63B
	get_type 2
	if_in_bytes TypeList_1DB63C, BattleAIScript_1DB63B
	if_random_less_than 50, BattleAIScript_1DB63B

BattleAIScript_1DB639: @ 81DB639
	score -1

BattleAIScript_1DB63B: @ 81DB63B
	end

TypeList_1DB63C: @ 81DB63C
	.byte TYPE_FIRE
	.byte TYPE_WATER
	.byte TYPE_GRASS
	.byte TYPE_ELECTRIC
	.byte TYPE_PSYCHIC
	.byte TYPE_ICE
	.byte TYPE_DRAGON
	.byte TYPE_DARK
	.byte 255

BattleAIScript_1DB645: @ 81DB645
	if_damage_bonus 10, BattleAIScript_1DB666
	if_damage_bonus 20, BattleAIScript_1DB666
	if_move_effect TARGET, EFFECT_PROTECT, BattleAIScript_1DB666
	if_hp_more_than USER, 38, BattleAIScript_1DB668
	score -1
	jump BattleAIScript_1DB668

BattleAIScript_1DB666: @ 81DB666
	score -2

BattleAIScript_1DB668: @ 81DB668
	end

BattleAIScript_1DB669: @ 81DB669
	if_not_move_effect TARGET, EFFECT_PROTECT, BattleAIScript_1DB677
	score -1
	jump BattleAIScript_1DB6EE

BattleAIScript_1DB677: @ 81DB677
	if_status TARGET, TOX, BattleAIScript_1DB6E6
	if_status2 TARGET, 0x10000000, BattleAIScript_1DB6E6
	if_status3 TARGET, 0x4, BattleAIScript_1DB6E6
	get_weather
	if_equal WEATHER_HAIL, BattleAIScript_1DB6A7
	if_equal WEATHER_SANDSTORM, BattleAIScript_1DB6C2
	jump BattleAIScript_1DB6D2

BattleAIScript_1DB6A7: @ 81DB6A7
	get_type 1
	if_in_bytes TypeList_1DB6EF, BattleAIScript_1DB6E6
	get_type 3
	if_in_bytes TypeList_1DB6EF, BattleAIScript_1DB6E6
	jump BattleAIScript_1DB6D2

BattleAIScript_1DB6C2: @ 81DB6C2
	get_type 1
	if_equal TYPE_ICE, BattleAIScript_1DB6E6
	get_type 3
	if_equal TYPE_ICE, BattleAIScript_1DB6E6

BattleAIScript_1DB6D2: @ 81DB6D2
	if_would_go_first USER, BattleAIScript_1DB6EE
	get_move TARGET
	get_move_effect_from_result
	if_not_equal EFFECT_LOCK_ON, BattleAIScript_1DB6E6
	jump BattleAIScript_1DB6EE

BattleAIScript_1DB6E6: @ 81DB6E6
	if_random_less_than 80, BattleAIScript_1DB6EE
	score +1

BattleAIScript_1DB6EE: @ 81DB6EE
	end

TypeList_1DB6EF: @ 81DB6EF
	.byte TYPE_GROUND
	.byte TYPE_ROCK
	.byte TYPE_STEEL
	.byte 255

BattleAIScript_1DB6F3: @ 81DB6F3
	score +2
	end

BattleAIScript_1DB6F6: @ 81DB6F6
	get_stockpile_count USER
	if_less_than 2, BattleAIScript_1DB706
	if_random_less_than 80, BattleAIScript_1DB706
	score +2

BattleAIScript_1DB706: @ 81DB706
	end

BattleAIScript_1DB707: @ 81DB707
	if_hp_less_than USER, 40, BattleAIScript_1DB72D
	get_weather
	if_equal WEATHER_SUN, BattleAIScript_1DB726
	if_equal WEATHER_RAIN, BattleAIScript_1DB726
	if_equal WEATHER_SANDSTORM, BattleAIScript_1DB726
	jump BattleAIScript_1DB72F

BattleAIScript_1DB726: @ 81DB726
	score +1
	jump BattleAIScript_1DB72F

BattleAIScript_1DB72D: @ 81DB72D
	score -1

BattleAIScript_1DB72F: @ 81DB72F
	end

BattleAIScript_1DB730: @ 81DB730
	if_not_status TARGET, PSN | BRN | PAR | TOX, BattleAIScript_1DB73C
	score +1

BattleAIScript_1DB73C: @ 81DB73C
	end

BattleAIScript_1DB73D: @ 81DB73D
	if_damage_bonus 10, BattleAIScript_1DB77C
	if_damage_bonus 20, BattleAIScript_1DB77C
	if_status TARGET, SLP, BattleAIScript_1DB789
	if_status2 TARGET, 0xf0000, BattleAIScript_1DB783
	if_status2 TARGET, S_CONFUSED, BattleAIScript_1DB783
	is_first_turn USER
	if_not_equal 0, BattleAIScript_1DB78B
	if_random_less_than 100, BattleAIScript_1DB78B
	score +1
	jump BattleAIScript_1DB78B

BattleAIScript_1DB77C: @ 81DB77C
	score -1
	jump BattleAIScript_1DB78B

BattleAIScript_1DB783: @ 81DB783
	if_random_less_than 100, BattleAIScript_1DB78B

BattleAIScript_1DB789: @ 81DB789
	score +1

BattleAIScript_1DB78B: @ 81DB78B
	end

BattleAIScript_1DB78C: @ 81DB78C
	if_status TARGET, PAR, BattleAIScript_1DB79B
	jump BattleAIScript_1DB79D

BattleAIScript_1DB79B: @ 81DB79B
	score +1

BattleAIScript_1DB79D: @ 81DB79D
	end

BattleAIScript_1DB79E: @ 81DB79E
	get_hold_effect USER
	if_in_bytes HoldEffectList_1DB7E7, BattleAIScript_1DB7B9
	if_in_bytes HoldEffectList_1DB7DF, BattleAIScript_1DB7CB

BattleAIScript_1DB7B2: @ 81DB7B2
	score -3
	jump BattleAIScript_1DB7DE

BattleAIScript_1DB7B9: @ 81DB7B9
	get_hold_effect TARGET
	if_in_bytes HoldEffectList_1DB7E7, BattleAIScript_1DB7B2
	score +5
	jump BattleAIScript_1DB7DE

BattleAIScript_1DB7CB: @ 81DB7CB
	get_hold_effect TARGET
	if_in_bytes HoldEffectList_1DB7DF, BattleAIScript_1DB7B2
	if_random_less_than 50, BattleAIScript_1DB7DE
	score +2

BattleAIScript_1DB7DE: @ 81DB7DE
	end

HoldEffectList_1DB7DF: @ 81DB7DF
	.byte HOLD_EFFECT_CONFUSE_SPICY
	.byte HOLD_EFFECT_CONFUSE_DRY
	.byte HOLD_EFFECT_CONFUSE_SWEET
	.byte HOLD_EFFECT_CONFUSE_BITTER
	.byte HOLD_EFFECT_CONFUSE_SOUR
	.byte HOLD_EFFECT_MACHO_BRACE
	.byte HOLD_EFFECT_CHOICE_BAND
	.byte 255

HoldEffectList_1DB7E7: @ 81DB7E7
	.byte HOLD_EFFECT_CHOICE_BAND
	.byte 255

BattleAIScript_1DB7E9: @ 81DB7E9
	get_ability USER
	if_in_bytes AbilityList_1DB80F, BattleAIScript_1DB7FF
	get_ability TARGET
	if_in_bytes AbilityList_1DB80F, BattleAIScript_1DB806

BattleAIScript_1DB7FF: @ 81DB7FF
	score -1
	jump BattleAIScript_1DB80E

BattleAIScript_1DB806: @ 81DB806
	if_random_less_than 50, BattleAIScript_1DB80E
	score +2

BattleAIScript_1DB80E: @ 81DB80E
	end

AbilityList_1DB80F: @ 81DB80F
	.byte ABILITY_SPEED_BOOST
	.byte ABILITY_BATTLE_ARMOR
	.byte ABILITY_SAND_VEIL
	.byte ABILITY_STATIC
	.byte ABILITY_FLASH_FIRE
	.byte ABILITY_WONDER_GUARD
	.byte ABILITY_EFFECT_SPORE
	.byte ABILITY_SWIFT_SWIM
	.byte ABILITY_HUGE_POWER
	.byte ABILITY_RAIN_DISH
	.byte ABILITY_CUTE_CHARM
	.byte ABILITY_SHED_SKIN
	.byte ABILITY_MARVEL_SCALE
	.byte ABILITY_PURE_POWER
	.byte ABILITY_CHLOROPHYLL
	.byte ABILITY_SHIELD_DUST
	.byte 255

BattleAIScript_1DB820: @ 81DB820
	if_damage_bonus 10, BattleAIScript_1DB84D
	if_damage_bonus 20, BattleAIScript_1DB84D
	if_stat_level_less_than USER, ATTACK, 6, BattleAIScript_1DB84D
	if_would_go_first USER, BattleAIScript_1DB846
	if_hp_more_than USER, 40, BattleAIScript_1DB84D
	jump BattleAIScript_1DB84F

BattleAIScript_1DB846: @ 81DB846
	if_hp_less_than USER, 60, BattleAIScript_1DB84F

BattleAIScript_1DB84D: @ 81DB84D
	score -1

BattleAIScript_1DB84F: @ 81DB84F
	end

BattleAIScript_1DB850: @ 81DB850
	if_hp_more_than TARGET, 30, BattleAIScript_1DB85F
	if_random_less_than 100, BattleAIScript_1DB85F
	score -1

BattleAIScript_1DB85F: @ 81DB85F
	is_first_turn USER
	if_equal 0, BattleAIScript_1DB87A
	if_random_less_than 150, BattleAIScript_1DB882
	score +1
	jump BattleAIScript_1DB882

	if_random_less_than 50, BattleAIScript_1DB882

BattleAIScript_1DB87A: @ 81DB87A
	if_random_less_than 30, BattleAIScript_1DB882
	score -1

BattleAIScript_1DB882: @ 81DB882
	end

BattleAIScript_1DB883: @ 81DB883
	get_item USER
	if_not_in_bytes ItemList_1DB89E, BattleAIScript_1DB89B
	if_random_less_than 50, BattleAIScript_1DB89D
	score +1
	jump BattleAIScript_1DB89D

BattleAIScript_1DB89B: @ 81DB89B
	score -2

BattleAIScript_1DB89D: @ 81DB89D
	end

ItemList_1DB89E: @ 81DB89E
	.byte ITEM_CHESTO_BERRY
	.byte ITEM_LUM_BERRY
	.byte ITEM_STARF_BERRY
	.byte 255

BattleAIScript_1DB8A2: @ 81DB8A2
	if_status TARGET, SLP, BattleAIScript_1DB8CD
	if_status2 TARGET, 0xf0000, BattleAIScript_1DB8CD
	if_status2 TARGET, S_CONFUSED, BattleAIScript_1DB8CD
	if_random_less_than 180, BattleAIScript_1DB8CD
	score +2
	jump BattleAIScript_1DB8CF

BattleAIScript_1DB8CD: @ 81DB8CD
	score -2

BattleAIScript_1DB8CF: @ 81DB8CF
	end

BattleAIScript_1DB8D0: @ 81DB8D0
	if_status4 TARGET, 0x1, BattleAIScript_1DB8DF
	jump BattleAIScript_1DB8E1

BattleAIScript_1DB8DF: @ 81DB8DF
	score +1

BattleAIScript_1DB8E1: @ 81DB8E1
	end

BattleAIScript_1DB8E2: @ 81DB8E2
	if_hp_less_than TARGET, 30, BattleAIScript_1DB8F9
	is_first_turn USER
	if_more_than 0, BattleAIScript_1DB8F9
	if_random_less_than 180, BattleAIScript_1DB8F9
	score +1

BattleAIScript_1DB8F9: @ 81DB8F9
	end

BattleAIScript_1DB8FA: @ 81DB8FA
	if_hp_less_than TARGET, 70, BattleAIScript_1DB923
	if_would_go_first USER, BattleAIScript_1DB915
	if_hp_more_than USER, 40, BattleAIScript_1DB923
	score +1
	jump BattleAIScript_1DB925

BattleAIScript_1DB915: @ 81DB915
	if_hp_more_than USER, 50, BattleAIScript_1DB923
	score +1
	jump BattleAIScript_1DB925

BattleAIScript_1DB923: @ 81DB923
	score -1

BattleAIScript_1DB925: @ 81DB925
	end

BattleAIScript_1DB926: @ 81DB926
	if_damage_bonus 10, BattleAIScript_1DB94B
	if_damage_bonus 20, BattleAIScript_1DB94B
	if_would_go_first USER, BattleAIScript_1DB944
	if_hp_more_than TARGET, 50, BattleAIScript_1DB94D
	jump BattleAIScript_1DB94B

BattleAIScript_1DB944: @ 81DB944
	if_hp_more_than TARGET, 70, BattleAIScript_1DB94D

BattleAIScript_1DB94B: @ 81DB94B
	score -1

BattleAIScript_1DB94D: @ 81DB94D
	end

BattleAIScript_1DB94E: @ 81DB94E
	is_first_turn USER
	if_more_than 0, BattleAIScript_1DB95E
	if_random_less_than 100, BattleAIScript_1DB95E
	score +2

BattleAIScript_1DB95E: @ 81DB95E
	end

BattleAIScript_1DB95F: @ 81DB95F
	if_hp_less_than TARGET, 50, BattleAIScript_1DB96B
	jump BattleAIScript_1DB96D

BattleAIScript_1DB96B: @ 81DB96B
	score -1

BattleAIScript_1DB96D: @ 81DB96D
	end

BattleAIScript_1DB96E: @ 81DB96E
	is_first_turn USER
	if_equal 1, BattleAIScript_1DB9B5
	if_random_less_than 30, BattleAIScript_1DB9D7
	if_would_go_first USER, BattleAIScript_1DB99B
	if_hp_not_equal USER, 100, BattleAIScript_1DB9CF
	if_hp_less_than TARGET, 70, BattleAIScript_1DB9CF
	if_random_less_than 60, BattleAIScript_1DB9D7
	jump BattleAIScript_1DB9CF

BattleAIScript_1DB99B: @ 81DB99B
	if_hp_more_than TARGET, 25, BattleAIScript_1DB9CF
	if_move_effect TARGET, EFFECT_RESTORE_HP, BattleAIScript_1DB9B5
	if_move_effect TARGET, EFFECT_DEFENSE_CURL, BattleAIScript_1DB9B5
	jump BattleAIScript_1DB9C2

BattleAIScript_1DB9B5: @ 81DB9B5
	if_random_less_than 150, BattleAIScript_1DB9D7
	score +2
	jump BattleAIScript_1DB9D7

BattleAIScript_1DB9C2: @ 81DB9C2
	if_random_less_than 230, BattleAIScript_1DB9CF
	score +1
	jump BattleAIScript_1DB9D7

BattleAIScript_1DB9CF: @ 81DB9CF
	if_random_less_than 30, BattleAIScript_1DB9D7
	score -2

BattleAIScript_1DB9D7: @ 81DB9D7
	end

BattleAIScript_1DB9D8: @ 81DB9D8
	if_hp_less_than USER, 50, BattleAIScript_1DB9FB
	get_type 0
	if_equal TYPE_ELECTRIC, BattleAIScript_1DB9F4
	get_type 2
	if_equal TYPE_ELECTRIC, BattleAIScript_1DB9F4
	jump BattleAIScript_1DB9FB

BattleAIScript_1DB9F4: @ 81DB9F4
	score +1
	jump BattleAIScript_1DB9FD

BattleAIScript_1DB9FB: @ 81DB9FB
	score -1

BattleAIScript_1DB9FD: @ 81DB9FD
	end

BattleAIScript_1DB9FE: @ 81DB9FE
	if_damage_bonus 10, BattleAIScript_1DBA23
	if_damage_bonus 20, BattleAIScript_1DBA23
	if_would_go_first USER, BattleAIScript_1DBA1C
	if_hp_more_than USER, 60, BattleAIScript_1DBA25
	jump BattleAIScript_1DBA23

BattleAIScript_1DBA1C: @ 81DBA1C
	if_hp_more_than USER, 80, BattleAIScript_1DBA25

BattleAIScript_1DBA23: @ 81DBA23
	score -1

BattleAIScript_1DBA25: @ 81DBA25
	end

BattleAIScript_1DBA26: @ 81DBA26
	if_hp_less_than USER, 50, BattleAIScript_1DBA49
	get_type 0
	if_equal TYPE_FIRE, BattleAIScript_1DBA42
	get_type 2
	if_equal TYPE_FIRE, BattleAIScript_1DBA42
	jump BattleAIScript_1DBA49

BattleAIScript_1DBA42: @ 81DBA42
	score +1
	jump BattleAIScript_1DBA4B

BattleAIScript_1DBA49: @ 81DBA49
	score -1

BattleAIScript_1DBA4B: @ 81DBA4B
	end

BattleAIScript_1DBA4C: @ 81DBA4C
	if_would_go_first USER, BattleAIScript_1DBA66
	if_hp_more_than USER, 50, BattleAIScript_1DBA6E
	if_random_less_than 70, BattleAIScript_1DBA6E
	score -1
	jump BattleAIScript_1DBA6E

BattleAIScript_1DBA66: @ 81DBA66
	if_random_less_than 128, BattleAIScript_1DBA6E
	score +1

BattleAIScript_1DBA6E: @ 81DBA6E
	end

kBattleAI_02:: @ 81DBA6F
	if_can_faint BattleAIScript_1DBA7C
	is_most_powerful_move
	if_equal 1, BattleAIScript_1DA424
	end

BattleAIScript_1DBA7C: @ 81DBA7C
	if_effect EFFECT_EXPLOSION, BattleAIScript_1DBA8C
	if_not_effect EFFECT_QUICK_ATTACK, BattleAIScript_1DBA8A
	score +2

BattleAIScript_1DBA8A: @ 81DBA8A
	score +4

BattleAIScript_1DBA8C: @ 81DBA8C
	end

kBattleAI_03:: @ 81DBA8D
	get_turn_count
	if_not_equal 0, BattleAIScript_1DBAA6
	get_effect
	if_not_in_bytes MoveEffectList_1DBAA7, BattleAIScript_1DBAA6
	if_random_less_than 80, BattleAIScript_1DBAA6
	score +2

BattleAIScript_1DBAA6: @ 81DBAA6
	end

MoveEffectList_1DBAA7: @ 81DBAA7
	.byte EFFECT_ATTACK_UP
	.byte EFFECT_DEFENSE_UP
	.byte EFFECT_SPEED_UP
	.byte EFFECT_SPECIAL_ATTACK_UP
	.byte EFFECT_SPECIAL_DEFENSE_UP
	.byte EFFECT_ACCURACY_UP
	.byte EFFECT_EVASION_UP
	.byte EFFECT_ATTACK_DOWN
	.byte EFFECT_DEFENSE_DOWN
	.byte EFFECT_SPEED_DOWN
	.byte EFFECT_SPECIAL_ATTACK_DOWN
	.byte EFFECT_SPECIAL_DEFENSE_DOWN
	.byte EFFECT_ACCURACY_DOWN
	.byte EFFECT_EVASION_DOWN
	.byte EFFECT_CONVERSION
	.byte EFFECT_LIGHT_SCREEN
	.byte EFFECT_SPECIAL_DEFENSE_UP_2
	.byte EFFECT_FOCUS_ENERGY
	.byte EFFECT_CONFUSE
	.byte EFFECT_ATTACK_UP_2
	.byte EFFECT_DEFENSE_UP_2
	.byte EFFECT_SPEED_UP_2
	.byte EFFECT_SPECIAL_ATTACK_UP_2
	.byte EFFECT_SPECIAL_DEFENSE_UP_2
	.byte EFFECT_ACCURACY_UP_2
	.byte EFFECT_EVASION_UP_2
	.byte EFFECT_ATTACK_DOWN_2
	.byte EFFECT_DEFENSE_DOWN_2
	.byte EFFECT_SPEED_DOWN_2
	.byte EFFECT_SPECIAL_ATTACK_DOWN_2
	.byte EFFECT_SPECIAL_DEFENSE_DOWN_2
	.byte EFFECT_ACCURACY_DOWN_2
	.byte EFFECT_EVASION_DOWN_2
	.byte EFFECT_REFLECT
	.byte EFFECT_POISON
	.byte EFFECT_PARALYZE
	.byte EFFECT_SUBSTITUTE
	.byte EFFECT_LEECH_SEED
	.byte EFFECT_MINIMIZE
	.byte EFFECT_CURSE
	.byte EFFECT_SWAGGER
	.byte EFFECT_CAMOUFLAGE
	.byte EFFECT_YAWN
	.byte EFFECT_DEFENSE_CURL
	.byte EFFECT_TORMENT
	.byte EFFECT_FLATTER
	.byte EFFECT_WILL_O_WISP
	.byte EFFECT_INGRAIN
	.byte EFFECT_IMPRISON
	.byte EFFECT_TEETER_DANCE
	.byte EFFECT_TICKLE
	.byte EFFECT_COSMIC_POWER
	.byte EFFECT_BULK_UP
	.byte EFFECT_CALM_MIND
	.byte EFFECT_CAMOUFLAGE
	.byte 255

kBattleAI_05:: @ 81DBADF
	is_most_powerful_move
	if_not_equal 0, BattleAIScript_1DBAEE
	if_random_less_than 100, BattleAIScript_1DBAEE
	score +2

BattleAIScript_1DBAEE: @ 81DBAEE
	end

kBattleAI_04:: @ 81DBAEF
	get_effect
	if_not_in_bytes MoveEffectList_1DBB02, BattleAIScript_1DBB01
	if_random_less_than 128, BattleAIScript_1DBB01
	score +2

BattleAIScript_1DBB01: @ 81DBB01
	end


MoveEffectList_1DBB02: @ 81DBB02
	.byte EFFECT_SLEEP
	.byte EFFECT_EXPLOSION
	.byte EFFECT_MIRROR_MOVE
	.byte EFFECT_OHKO
	.byte EFFECT_HIGH_CRITICAL
	.byte EFFECT_CONFUSE
	.byte EFFECT_METRONOME
	.byte EFFECT_PSYWAVE
	.byte EFFECT_COUNTER
	.byte EFFECT_DESTINY_BOND
	.byte EFFECT_SWAGGER
	.byte EFFECT_ATTRACT
	.byte EFFECT_PRESENT
	.byte EFFECT_ALL_STATS_UP_HIT
	.byte EFFECT_BELLY_DRUM
	.byte EFFECT_MIRROR_COAT
	.byte EFFECT_FOCUS_PUNCH
	.byte EFFECT_REVENGE
	.byte EFFECT_TEETER_DANCE
	.byte 255

kBattleAI_06:: @ 81DBB16
	count_alive_pokemon USER
	if_equal 0, BattleAIScript_1DBB3A
	is_most_powerful_move
	if_not_equal 0, BattleAIScript_1DBB3A
	if_move_effect USER, EFFECT_BATON_PASS, BattleAIScript_1DBB32
	if_random_less_than 80, BattleAIScript_1DBB01

BattleAIScript_1DBB32: @ 81DBB32
	if_random_less_than 20, BattleAIScript_1DBB01
	score +3

BattleAIScript_1DBB3A: @ 81DBB3A
	end

kBattleAI_07:: @ 81DBB3B
	end

kBattleAI_08:: @ 81DBB3C
	if_hp_more_than USER, 70, BattleAIScript_1DBB59
	if_hp_more_than USER, 30, BattleAIScript_1DBB68
	get_effect
	if_in_bytes MoveEffectList_1DBBFC, BattleAIScript_1DBB77
	jump BattleAIScript_1DBB7F

BattleAIScript_1DBB59: @ 81DBB59
	get_effect
	if_in_bytes MoveEffectList_1DBBC3, BattleAIScript_1DBB77
	jump BattleAIScript_1DBB7F

BattleAIScript_1DBB68: @ 81DBB68
	get_effect
	if_in_bytes MoveEffectList_1DBBD1, BattleAIScript_1DBB77
	jump BattleAIScript_1DBB7F

BattleAIScript_1DBB77: @ 81DBB77
	if_random_less_than 50, BattleAIScript_1DBB7F
	score -2

BattleAIScript_1DBB7F: @ 81DBB7F
	if_hp_more_than TARGET, 70, BattleAIScript_1DBB9C
	if_hp_more_than TARGET, 30, BattleAIScript_1DBBAB
	get_effect
	if_in_bytes MoveEffectList_1DBC55, BattleAIScript_1DBBBA
	jump BattleAIScript_1DBBC2

BattleAIScript_1DBB9C: @ 81DBB9C
	get_effect
	if_in_bytes MoveEffectList_1DBC2C, BattleAIScript_1DBBBA
	jump BattleAIScript_1DBBC2

BattleAIScript_1DBBAB: @ 81DBBAB
	get_effect
	if_in_bytes MoveEffectList_1DBC2D, BattleAIScript_1DBBBA
	jump BattleAIScript_1DBBC2

BattleAIScript_1DBBBA: @ 81DBBBA
	if_random_less_than 50, BattleAIScript_1DBBC2
	score -2

BattleAIScript_1DBBC2: @ 81DBBC2
	end

MoveEffectList_1DBBC3: @ 81DBBC3
	.byte EFFECT_EXPLOSION
	.byte EFFECT_RESTORE_HP
	.byte EFFECT_REST
	.byte EFFECT_DESTINY_BOND
	.byte EFFECT_FLAIL
	.byte EFFECT_ENDURE
	.byte EFFECT_MORNING_SUN
	.byte EFFECT_SYNTHESIS
	.byte EFFECT_MOONLIGHT
	.byte EFFECT_SOFTBOILED
	.byte EFFECT_MEMENTO
	.byte EFFECT_GRUDGE
	.byte EFFECT_OVERHEAT
	.byte 255

MoveEffectList_1DBBD1: @ 81DBBD1
	.byte EFFECT_EXPLOSION
	.byte EFFECT_ATTACK_UP
	.byte EFFECT_DEFENSE_UP
	.byte EFFECT_SPEED_UP
	.byte EFFECT_SPECIAL_ATTACK_UP
	.byte EFFECT_SPECIAL_DEFENSE_UP
	.byte EFFECT_ACCURACY_UP
	.byte EFFECT_EVASION_UP
	.byte EFFECT_ATTACK_DOWN
	.byte EFFECT_DEFENSE_DOWN
	.byte EFFECT_SPEED_DOWN
	.byte EFFECT_SPECIAL_ATTACK_DOWN
	.byte EFFECT_SPECIAL_DEFENSE_DOWN
	.byte EFFECT_ACCURACY_DOWN
	.byte EFFECT_EVASION_DOWN
	.byte EFFECT_BIDE
	.byte EFFECT_CONVERSION
	.byte EFFECT_LIGHT_SCREEN
	.byte EFFECT_MIST
	.byte EFFECT_FOCUS_ENERGY
	.byte EFFECT_ATTACK_UP_2
	.byte EFFECT_DEFENSE_UP_2
	.byte EFFECT_SPEED_UP_2
	.byte EFFECT_SPECIAL_ATTACK_UP_2
	.byte EFFECT_SPECIAL_DEFENSE_UP_2
	.byte EFFECT_ACCURACY_UP_2
	.byte EFFECT_EVASION_UP_2
	.byte EFFECT_ATTACK_DOWN_2
	.byte EFFECT_DEFENSE_DOWN_2
	.byte EFFECT_SPEED_DOWN_2
	.byte EFFECT_SPECIAL_ATTACK_DOWN_2
	.byte EFFECT_SPECIAL_DEFENSE_DOWN_2
	.byte EFFECT_ACCURACY_DOWN_2
	.byte EFFECT_EVASION_DOWN_2
	.byte EFFECT_CONVERSION_2
	.byte EFFECT_SAFEGUARD
	.byte EFFECT_BELLY_DRUM
	.byte EFFECT_TICKLE
	.byte EFFECT_COSMIC_POWER
	.byte EFFECT_BULK_UP
	.byte EFFECT_CALM_MIND
	.byte EFFECT_DRAGON_DANCE
	.byte 255

MoveEffectList_1DBBFC: @ 81DBBFC
	.byte EFFECT_ATTACK_UP
	.byte EFFECT_DEFENSE_UP
	.byte EFFECT_SPEED_UP
	.byte EFFECT_SPECIAL_ATTACK_UP
	.byte EFFECT_SPECIAL_DEFENSE_UP
	.byte EFFECT_ACCURACY_UP
	.byte EFFECT_EVASION_UP
	.byte EFFECT_ATTACK_DOWN
	.byte EFFECT_DEFENSE_DOWN
	.byte EFFECT_SPEED_DOWN
	.byte EFFECT_SPECIAL_ATTACK_DOWN
	.byte EFFECT_SPECIAL_DEFENSE_DOWN
	.byte EFFECT_ACCURACY_DOWN
	.byte EFFECT_EVASION_DOWN
	.byte EFFECT_BIDE
	.byte EFFECT_CONVERSION
	.byte EFFECT_LIGHT_SCREEN
	.byte EFFECT_MIST
	.byte EFFECT_FOCUS_ENERGY
	.byte EFFECT_ATTACK_UP_2
	.byte EFFECT_DEFENSE_UP_2
	.byte EFFECT_SPEED_UP_2
	.byte EFFECT_SPECIAL_ATTACK_UP_2
	.byte EFFECT_SPECIAL_DEFENSE_UP_2
	.byte EFFECT_ACCURACY_UP_2
	.byte EFFECT_EVASION_UP_2
	.byte EFFECT_ATTACK_DOWN_2
	.byte EFFECT_DEFENSE_DOWN_2
	.byte EFFECT_SPEED_DOWN_2
	.byte EFFECT_SPECIAL_ATTACK_DOWN_2
	.byte EFFECT_SPECIAL_DEFENSE_DOWN_2
	.byte EFFECT_ACCURACY_DOWN_2
	.byte EFFECT_EVASION_DOWN_2
	.byte EFFECT_RAGE
	.byte EFFECT_CONVERSION_2
	.byte EFFECT_LOCK_ON
	.byte EFFECT_SAFEGUARD
	.byte EFFECT_BELLY_DRUM
	.byte EFFECT_PSYCH_UP
	.byte EFFECT_MIRROR_COAT
	.byte EFFECT_SOLARBEAM
	.byte EFFECT_ERUPTION
	.byte EFFECT_TICKLE
	.byte EFFECT_COSMIC_POWER
	.byte EFFECT_BULK_UP
	.byte EFFECT_CALM_MIND
	.byte EFFECT_DRAGON_DANCE
	.byte 255

MoveEffectList_1DBC2C: @ 81DBC2C
	.byte 255

MoveEffectList_1DBC2D: @ 81DBC2D
	.byte EFFECT_ATTACK_UP
	.byte EFFECT_DEFENSE_UP
	.byte EFFECT_SPEED_UP
	.byte EFFECT_SPECIAL_ATTACK_UP
	.byte EFFECT_SPECIAL_DEFENSE_UP
	.byte EFFECT_ACCURACY_UP
	.byte EFFECT_EVASION_UP
	.byte EFFECT_ATTACK_DOWN
	.byte EFFECT_DEFENSE_DOWN
	.byte EFFECT_SPEED_DOWN
	.byte EFFECT_SPECIAL_ATTACK_DOWN
	.byte EFFECT_SPECIAL_DEFENSE_DOWN
	.byte EFFECT_ACCURACY_DOWN
	.byte EFFECT_EVASION_DOWN
	.byte EFFECT_MIST
	.byte EFFECT_FOCUS_ENERGY
	.byte EFFECT_ATTACK_UP_2
	.byte EFFECT_DEFENSE_UP_2
	.byte EFFECT_SPEED_UP_2
	.byte EFFECT_SPECIAL_ATTACK_UP_2
	.byte EFFECT_SPECIAL_DEFENSE_UP_2
	.byte EFFECT_ACCURACY_UP_2
	.byte EFFECT_EVASION_UP_2
	.byte EFFECT_ATTACK_DOWN_2
	.byte EFFECT_DEFENSE_DOWN_2
	.byte EFFECT_SPEED_DOWN_2
	.byte EFFECT_SPECIAL_ATTACK_DOWN_2
	.byte EFFECT_SPECIAL_DEFENSE_DOWN_2
	.byte EFFECT_ACCURACY_DOWN_2
	.byte EFFECT_EVASION_DOWN_2
	.byte EFFECT_POISON
	.byte EFFECT_PAIN_SPLIT
	.byte EFFECT_PERISH_SONG
	.byte EFFECT_SAFEGUARD
	.byte EFFECT_TICKLE
	.byte EFFECT_COSMIC_POWER
	.byte EFFECT_BULK_UP
	.byte EFFECT_CALM_MIND
	.byte EFFECT_DRAGON_DANCE
	.byte 255

MoveEffectList_1DBC55: @ 81DBC55
	.byte EFFECT_SLEEP
	.byte EFFECT_EXPLOSION
	.byte EFFECT_ATTACK_UP
	.byte EFFECT_DEFENSE_UP
	.byte EFFECT_SPEED_UP
	.byte EFFECT_SPECIAL_ATTACK_UP
	.byte EFFECT_SPECIAL_DEFENSE_UP
	.byte EFFECT_ACCURACY_UP
	.byte EFFECT_EVASION_UP
	.byte EFFECT_ATTACK_DOWN
	.byte EFFECT_DEFENSE_DOWN
	.byte EFFECT_SPEED_DOWN
	.byte EFFECT_SPECIAL_ATTACK_DOWN
	.byte EFFECT_SPECIAL_DEFENSE_DOWN
	.byte EFFECT_ACCURACY_DOWN
	.byte EFFECT_EVASION_DOWN
	.byte EFFECT_BIDE
	.byte EFFECT_CONVERSION
	.byte EFFECT_TOXIC
	.byte EFFECT_LIGHT_SCREEN
	.byte EFFECT_OHKO
	.byte EFFECT_SUPER_FANG
	.byte EFFECT_SUPER_FANG
	.byte EFFECT_MIST
	.byte EFFECT_FOCUS_ENERGY
	.byte EFFECT_CONFUSE
	.byte EFFECT_ATTACK_UP_2
	.byte EFFECT_DEFENSE_UP_2
	.byte EFFECT_SPEED_UP_2
	.byte EFFECT_SPECIAL_ATTACK_UP_2
	.byte EFFECT_SPECIAL_DEFENSE_UP_2
	.byte EFFECT_ACCURACY_UP_2
	.byte EFFECT_EVASION_UP_2
	.byte EFFECT_ATTACK_DOWN_2
	.byte EFFECT_DEFENSE_DOWN_2
	.byte EFFECT_SPEED_DOWN_2
	.byte EFFECT_SPECIAL_ATTACK_DOWN_2
	.byte EFFECT_SPECIAL_DEFENSE_DOWN_2
	.byte EFFECT_ACCURACY_DOWN_2
	.byte EFFECT_EVASION_DOWN_2
	.byte EFFECT_POISON
	.byte EFFECT_PARALYZE
	.byte EFFECT_PAIN_SPLIT
	.byte EFFECT_CONVERSION_2
	.byte EFFECT_LOCK_ON
	.byte EFFECT_SPITE
	.byte EFFECT_PERISH_SONG
	.byte EFFECT_SWAGGER
	.byte EFFECT_FURY_CUTTER
	.byte EFFECT_ATTRACT
	.byte EFFECT_SAFEGUARD
	.byte EFFECT_PSYCH_UP
	.byte EFFECT_MIRROR_COAT
	.byte EFFECT_WILL_O_WISP
	.byte EFFECT_TICKLE
	.byte EFFECT_COSMIC_POWER
	.byte EFFECT_BULK_UP
	.byte EFFECT_CALM_MIND
	.byte EFFECT_DRAGON_DANCE
	.byte 255

kBattleAI_09:: @ 81DBC91
	if_not_effect EFFECT_SUNNY_DAY, BattleAIScript_1DBCA7
	if_equal 0, BattleAIScript_1DBCA7
	is_first_turn USER
	if_equal 0, BattleAIScript_1DBCA7
	score +5

BattleAIScript_1DBCA7: @ 81DBCA7
	end

kBattleAI_1D:: @ 81DBCA8
	if_status2 USER, 0xe000, BattleAIScript_1DBCD5
	if_status2 USER, S_MEAN_LOOK, BattleAIScript_1DBCD5
	get_ability TARGET
	if_equal ABILITY_SHADOW_TAG, BattleAIScript_1DBCD5
	get_ability USER
	if_equal ABILITY_LEVITATE, BattleAIScript_1DBCD4
	get_ability TARGET
	if_equal ABILITY_ARENA_TRAP, BattleAIScript_1DBCD5

BattleAIScript_1DBCD4: @ 81DBCD4
	flee

BattleAIScript_1DBCD5: @ 81DBCD5
	end

kBattleAI_1E:: @ 81DBCD6
	if_random_100 BattleAIScript_1DBCDC
	watch

BattleAIScript_1DBCDC: @ 81DBCDC
	flee

kBattleAI_1F:: @ 81DBCDD
	if_hp_equal TARGET, 20, BattleAIScript_1DBCEC
	if_hp_less_than TARGET, 20, BattleAIScript_1DBCEC
	end

BattleAIScript_1DBCEC: @ 81DBCEC
	flee

kBattleAI_0A:: @ 81DBCED
	end
