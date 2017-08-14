    .include "asm/macros.inc"
	.include "asm/macros/battle_anim.inc"
	.include "constants/constants.inc"

    .text

    .incbin "baserom.gba", 0x1C68EC, 0x8

gBattleAnims_Moves:: @ 81C68F4
    .4byte Move_NONE
    .4byte Move_NONE
    .4byte Move_KARATE_CHOP
    .4byte Move_DOUBLE_SLAP
    .4byte Move_COMET_PUNCH
    .4byte Move_MEGA_PUNCH
    .4byte Move_PAY_DAY
    .4byte Move_FIRE_PUNCH
    .4byte Move_ICE_PUNCH
    .4byte Move_THUNDER_PUNCH
    .4byte Move_SCRATCH
    .4byte Move_VICE_GRIP
    .4byte Move_GUILLOTINE
    .4byte Move_RAZOR_WIND
    .4byte Move_SWORDS_DANCE
    .4byte Move_CUT
    .4byte Move_GUST
    .4byte Move_WING_ATTACK
    .4byte Move_WHIRLWIND
    .4byte Move_FLY
    .4byte Move_BIND
    .4byte Move_SLAM
    .4byte Move_VINE_WHIP
    .4byte Move_STOMP
    .4byte Move_DOUBLE_KICK
    .4byte Move_MEGA_KICK
    .4byte Move_JUMP_KICK
    .4byte Move_ROLLING_KICK
    .4byte Move_SAND_ATTACK
    .4byte Move_HEADBUTT
    .4byte Move_HORN_ATTACK
    .4byte Move_FURY_ATTACK
    .4byte Move_HORN_DRILL
    .4byte Move_TACKLE
    .4byte Move_BODY_SLAM
    .4byte Move_WRAP
    .4byte Move_TAKE_DOWN
    .4byte Move_THRASH
    .4byte Move_DOUBLE_EDGE
    .4byte Move_TAIL_WHIP
    .4byte Move_POISON_STING
    .4byte Move_TWINEEDLE
    .4byte Move_PIN_MISSILE
    .4byte Move_LEER
    .4byte Move_BITE
    .4byte Move_GROWL
    .4byte Move_ROAR
    .4byte Move_SING
    .4byte Move_SUPERSONIC
    .4byte Move_SONIC_BOOM
    .4byte Move_DISABLE
    .4byte Move_ACID
    .4byte Move_EMBER
    .4byte Move_FLAMETHROWER
    .4byte Move_MIST
    .4byte Move_WATER_GUN
    .4byte Move_HYDRO_PUMP
    .4byte Move_SURF
    .4byte Move_ICE_BEAM
    .4byte Move_BLIZZARD
    .4byte Move_PSYBEAM
    .4byte Move_BUBBLE_BEAM
    .4byte Move_AURORA_BEAM
    .4byte Move_HYPER_BEAM
    .4byte Move_PECK
    .4byte Move_DRILL_PECK
    .4byte Move_SUBMISSION
    .4byte Move_LOW_KICK
    .4byte Move_COUNTER
    .4byte Move_SEISMIC_TOSS
    .4byte Move_STRENGTH
    .4byte Move_ABSORB
    .4byte Move_MEGA_DRAIN
    .4byte Move_LEECH_SEED
    .4byte Move_GROWTH
    .4byte Move_RAZOR_LEAF
    .4byte Move_SOLAR_BEAM
    .4byte Move_POISON_POWDER
    .4byte Move_STUN_SPORE
    .4byte Move_SLEEP_POWDER
    .4byte Move_PETAL_DANCE
    .4byte Move_STRING_SHOT
    .4byte Move_DRAGON_RAGE
    .4byte Move_FIRE_SPIN
    .4byte Move_THUNDER_SHOCK
    .4byte Move_THUNDERBOLT
    .4byte Move_THUNDER_WAVE
    .4byte Move_THUNDER
    .4byte Move_ROCK_THROW
    .4byte Move_EARTHQUAKE
    .4byte Move_FISSURE
    .4byte Move_DIG
    .4byte Move_TOXIC
    .4byte Move_CONFUSION
    .4byte Move_PSYCHIC
    .4byte Move_HYPNOSIS
    .4byte Move_MEDITATE
    .4byte Move_AGILITY
    .4byte Move_QUICK_ATTACK
    .4byte Move_RAGE
    .4byte Move_TELEPORT
    .4byte Move_NIGHT_SHADE
    .4byte Move_MIMIC
    .4byte Move_SCREECH
    .4byte Move_DOUBLE_TEAM
    .4byte Move_RECOVER
    .4byte Move_HARDEN
    .4byte Move_MINIMIZE
    .4byte Move_SMOKESCREEN
    .4byte Move_CONFUSE_RAY
    .4byte Move_WITHDRAW
    .4byte Move_DEFENSE_CURL
    .4byte Move_BARRIER
    .4byte Move_LIGHT_SCREEN
    .4byte Move_HAZE
    .4byte Move_REFLECT
    .4byte Move_FOCUS_ENERGY
    .4byte Move_BIDE
    .4byte Move_METRONOME
    .4byte Move_NONE
    .4byte Move_SELF_DESTRUCT
    .4byte Move_EGG_BOMB
    .4byte Move_LICK
    .4byte Move_SMOG
    .4byte Move_SLUDGE
    .4byte Move_BONE_CLUB
    .4byte Move_FIRE_BLAST
    .4byte Move_WATERFALL
    .4byte Move_CLAMP
    .4byte Move_SWIFT
    .4byte Move_SKULL_BASH
    .4byte Move_SPIKE_CANNON
    .4byte Move_CONSTRICT
    .4byte Move_AMNESIA
    .4byte Move_KINESIS
    .4byte Move_SOFT_BOILED
    .4byte Move_HI_JUMP_KICK
    .4byte Move_GLARE
    .4byte Move_DREAM_EATER
    .4byte Move_POISON_GAS
    .4byte Move_BARRAGE
    .4byte Move_LEECH_LIFE
    .4byte Move_LOVELY_KISS
    .4byte Move_SKY_ATTACK
    .4byte Move_TRANSFORM
    .4byte Move_BUBBLE
    .4byte Move_DIZZY_PUNCH
    .4byte Move_SPORE
    .4byte Move_FLASH
    .4byte Move_PSYWAVE
    .4byte Move_SPLASH
    .4byte Move_ACID_ARMOR
    .4byte Move_CRABHAMMER
    .4byte Move_EXPLOSION
    .4byte Move_FURY_SWIPES
    .4byte Move_BONEMERANG
    .4byte Move_REST
    .4byte Move_ROCK_SLIDE
    .4byte Move_HYPER_FANG
    .4byte Move_SHARPEN
    .4byte Move_CONVERSION
    .4byte Move_TRI_ATTACK
    .4byte Move_SUPER_FANG
    .4byte Move_SLASH
    .4byte Move_SUBSTITUTE
    .4byte Move_STRUGGLE
    .4byte Move_SKETCH
    .4byte Move_TRIPLE_KICK
    .4byte Move_THIEF
    .4byte Move_SPIDER_WEB
    .4byte Move_MIND_READER
    .4byte Move_NIGHTMARE
    .4byte Move_FLAME_WHEEL
    .4byte Move_SNORE
    .4byte Move_CURSE
    .4byte Move_FLAIL
    .4byte Move_CONVERSION_2
    .4byte Move_AEROBLAST
    .4byte Move_COTTON_SPORE
    .4byte Move_REVERSAL
    .4byte Move_SPITE
    .4byte Move_POWDER_SNOW
    .4byte Move_PROTECT
    .4byte Move_MACH_PUNCH
    .4byte Move_SCARY_FACE
    .4byte Move_FAINT_ATTACK
    .4byte Move_SWEET_KISS
    .4byte Move_BELLY_DRUM
    .4byte Move_SLUDGE_BOMB
    .4byte Move_MUD_SLAP
    .4byte Move_OCTAZOOKA
    .4byte Move_SPIKES
    .4byte Move_ZAP_CANNON
    .4byte Move_FORESIGHT
    .4byte Move_DESTINY_BOND
    .4byte Move_PERISH_SONG
    .4byte Move_ICY_WIND
    .4byte Move_DETECT
    .4byte Move_BONE_RUSH
    .4byte Move_LOCK_ON
    .4byte Move_OUTRAGE
    .4byte Move_SANDSTORM
    .4byte Move_GIGA_DRAIN
    .4byte Move_ENDURE
    .4byte Move_CHARM
    .4byte Move_ROLLOUT
    .4byte Move_FALSE_SWIPE
    .4byte Move_SWAGGER
    .4byte Move_MILK_DRINK
    .4byte Move_SPARK
    .4byte Move_FURY_CUTTER
    .4byte Move_STEEL_WING
    .4byte Move_MEAN_LOOK
    .4byte Move_ATTRACT
    .4byte Move_SLEEP_TALK
    .4byte Move_HEAL_BELL
    .4byte Move_RETURN
    .4byte Move_PRESENT
    .4byte Move_FRUSTRATION
    .4byte Move_SAFEGUARD
    .4byte Move_PAIN_SPLIT
    .4byte Move_SACRED_FIRE
    .4byte Move_MAGNITUDE
    .4byte Move_DYNAMIC_PUNCH
    .4byte Move_MEGAHORN
    .4byte Move_DRAGON_BREATH
    .4byte Move_BATON_PASS
    .4byte Move_ENCORE
    .4byte Move_PURSUIT
    .4byte Move_RAPID_SPIN
    .4byte Move_SWEET_SCENT
    .4byte Move_IRON_TAIL
    .4byte Move_METAL_CLAW
    .4byte Move_VITAL_THROW
    .4byte Move_MORNING_SUN
    .4byte Move_SYNTHESIS
    .4byte Move_MOONLIGHT
    .4byte Move_HIDDEN_POWER
    .4byte Move_CROSS_CHOP
    .4byte Move_TWISTER
    .4byte Move_RAIN_DANCE
    .4byte Move_SUNNY_DAY
    .4byte Move_CRUNCH
    .4byte Move_MIRROR_COAT
    .4byte Move_PSYCH_UP
    .4byte Move_EXTREME_SPEED
    .4byte Move_ANCIENT_POWER
    .4byte Move_SHADOW_BALL
    .4byte Move_FUTURE_SIGHT
    .4byte Move_ROCK_SMASH
    .4byte Move_WHIRLPOOL
    .4byte Move_BEAT_UP
    .4byte Move_FAKE_OUT
    .4byte Move_UPROAR
    .4byte Move_STOCKPILE
    .4byte Move_SPIT_UP
    .4byte Move_SWALLOW
    .4byte Move_HEAT_WAVE
    .4byte Move_HAIL
    .4byte Move_TORMENT
    .4byte Move_FLATTER
    .4byte Move_WILL_O_WISP
    .4byte Move_MEMENTO
    .4byte Move_FACADE
    .4byte Move_FOCUS_PUNCH
    .4byte Move_SMELLING_SALT
    .4byte Move_FOLLOW_ME
    .4byte Move_ANCIENT_POWER
    .4byte Move_CHARGE
    .4byte Move_TAUNT
    .4byte Move_HELPING_HAND
    .4byte Move_TRICK
    .4byte Move_ROLE_PLAY
    .4byte Move_WISH
    .4byte Move_ASSIST
    .4byte Move_INGRAIN
    .4byte Move_SUPERPOWER
    .4byte Move_MAGIC_COAT
    .4byte Move_RECYCLE
    .4byte Move_REVENGE
    .4byte Move_BRICK_BREAK
    .4byte Move_YAWN
    .4byte Move_KNOCK_OFF
    .4byte Move_ENDEAVOR
    .4byte Move_ERUPTION
    .4byte Move_SKILL_SWAP
    .4byte Move_IMPRISON
    .4byte Move_REFRESH
    .4byte Move_GRUDGE
    .4byte Move_SNATCH
    .4byte Move_SECRET_POWER
    .4byte Move_DIVE
    .4byte Move_ARM_THRUST
    .4byte Move_CAMOUFLAGE
    .4byte Move_TAIL_GLOW
    .4byte Move_LUSTER_PURGE
    .4byte Move_MIST_BALL
    .4byte Move_FEATHER_DANCE
    .4byte Move_TEETER_DANCE
    .4byte Move_BLAZE_KICK
    .4byte Move_MUD_SPORT
    .4byte Move_ICE_BALL
    .4byte Move_NEEDLE_ARM
    .4byte Move_SLACK_OFF
    .4byte Move_HYPER_VOICE
    .4byte Move_POISON_FANG
    .4byte Move_CRUSH_CLAW
    .4byte Move_BLAST_BURN
    .4byte Move_HYDRO_CANNON
    .4byte Move_METEOR_MASH
    .4byte Move_ASTONISH
    .4byte Move_WEATHER_BALL
    .4byte Move_AROMATHERAPY
    .4byte Move_FAKE_TEARS
    .4byte Move_AIR_CUTTER
    .4byte Move_OVERHEAT
    .4byte Move_ODOR_SLEUTH
    .4byte Move_ROCK_TOMB
    .4byte Move_SILVER_WIND
    .4byte Move_METAL_SOUND
    .4byte Move_GRASS_WHISTLE
    .4byte Move_TICKLE
    .4byte Move_COSMIC_POWER
    .4byte Move_WATER_SPOUT
    .4byte Move_SIGNAL_BEAM
    .4byte Move_SHADOW_PUNCH
    .4byte Move_EXTRASENSORY
    .4byte Move_SKY_UPPERCUT
    .4byte Move_SAND_TOMB
    .4byte Move_SHEER_COLD
    .4byte Move_MUDDY_WATER
    .4byte Move_BULLET_SEED
    .4byte Move_AERIAL_ACE
    .4byte Move_ICICLE_SPEAR
    .4byte Move_IRON_DEFENSE
    .4byte Move_BLOCK
    .4byte Move_HOWL
    .4byte Move_DRAGON_CLAW
    .4byte Move_FRENZY_PLANT
    .4byte Move_BULK_UP
    .4byte Move_BOUNCE
    .4byte Move_MUD_SHOT
    .4byte Move_POISON_TAIL
    .4byte Move_COVET
    .4byte Move_VOLT_TACKLE
    .4byte Move_MAGICAL_LEAF
    .4byte Move_WATER_SPORT
    .4byte Move_CALM_MIND
    .4byte Move_LEAF_BLADE
    .4byte Move_DRAGON_DANCE
    .4byte Move_ROCK_BLAST
    .4byte Move_SHOCK_WAVE
    .4byte Move_WATER_PULSE
    .4byte Move_DOOM_DESIRE
    .4byte Move_PSYCHO_BOOST
    .4byte MoveAnim_81D53D9

unk_81C6E84:: @81C6E84
    .4byte MoveAnim_81D5A44
    .4byte MoveAnim_81D5A6F
    .4byte MoveAnim_81D5A78
    .4byte MoveAnim_81D5AA8
    .4byte MoveAnim_81D5ADD
    .4byte MoveAnim_81D5B09
    .4byte MoveAnim_81D5B23
    .4byte MoveAnim_81D5B3E
    .4byte MoveAnim_81D5B63

unk_81C6EA8:: @81C6EA8
    .4byte MoveAnim_81D5B88
    .4byte MoveAnim_81D5BBE
    .4byte MoveAnim_81D5BC7
    .4byte MoveAnim_81D5C04
    .4byte MoveAnim_81D5C0C
    .4byte MoveAnim_81D5C54
    .4byte MoveAnim_81D5C5F
    .4byte MoveAnim_81D5DF2
    .4byte MoveAnim_81D5E66
    .4byte MoveAnim_81D5F42
    .4byte MoveAnim_81D5F8F
    .4byte MoveAnim_81D5FD8
    .4byte MoveAnim_81D5FDD
    .4byte MoveAnim_81D5FE2
    .4byte MoveAnim_81D5FE7
    .4byte MoveAnim_81D5FF5
    .4byte MoveAnim_81D6026
    .4byte MoveAnim_81D604B
    .4byte MoveAnim_81D60A9
    .4byte MoveAnim_81D6108
    .4byte MoveAnim_81D61CD
    .4byte MoveAnim_81D620D
    .4byte MoveAnim_81D6250
    .4byte MoveAnim_81D628A
    .4byte MoveAnim_81D6301
    .4byte MoveAnim_81D637B
    .4byte MoveAnim_81D6394
    .4byte MoveAnim_81D63DC

unk_81C6F18:: @81C6F18
    .4byte MoveAnim_81D64B6
    .4byte MoveAnim_81D64D7
    .4byte MoveAnim_81D64E8
    .4byte MoveAnim_81D64F9
    .4byte MoveAnim_81D657B
    .4byte MoveAnim_81D6594
    .4byte MoveAnim_81D659E

Move_NONE:: @ 81C6F34
    loadsprite 10135
    monbg 1
    setalpha 12, 8
    panse_19 127, 63
    sprite 0x83E7C08, 2, 0, 0, 1, 2
    createtask sub_80989F8, 2, 1, 3, 0, 6, 1
    wait
    clearmonbg 1
    blendoff
    end

Move_DOUBLE_SLAP:: @ 81C6F65
    loadsprite 10135
    monbg 1
    setalpha 12, 8
    ifelse .L81C6F90, .L81C6FA4
.L81C6F76:
    createtask sub_80989F8, 2, 1, 3, 0, 6, 1
    panse_19 127, 63
    wait
    clearmonbg 1
    blendoff
    end
.L81C6F90:
    sprite 0x83E7C08, 2, -8, 0, 1, 2
    jump .L81C6F76
.L81C6FA4:
    sprite 0x83E7C08, 2, 8, 0, 1, 2
    jump .L81C6F76

Move_POISON_POWDER:: @ 81C6FB8
    loadsprite 10065
    loadsprite 10150
    panse_1C 162, 63, 10, 6
    sprite 0x83E29C0, 130, -30, -22, 117, 80, 5, 1
    sprite 0x83E29C0, 130, 10, -22, 117, 80, -5, 1
    sprite 0x83E29C0, 130, -25, -22, 117, 112, 5, 3
    pause 15
    sprite 0x83E29C0, 130, -5, -22, 117, 80, -5, 1
    sprite 0x83E29C0, 130, 5, -22, 117, 96, 5, 1
    sprite 0x83E29C0, 130, 0, -22, 117, 69, -5, 1
    sprite 0x83E29C0, 130, -15, -22, 117, 112, 5, 2
    pause 30
    sprite 0x83E29C0, 130, -15, -22, 117, 112, 5, 2
    sprite 0x83E29C0, 130, 15, -22, 117, 80, -5, 1
    sprite 0x83E29C0, 130, -10, -22, 117, 96, 7, 2
    sprite 0x83E29C0, 130, -5, -22, 117, 90, -8, 0
    pause 20
    sprite 0x83E29C0, 130, -10, -22, 117, 80, -5, 1
    sprite 0x83E29C0, 130, 0, -22, 117, 89, 5, 2
    sprite 0x83E29C0, 130, 20, -22, 117, 112, -8, 2
    sprite 0x83E29C0, 130, 5, -22, 117, 80, 5, 1
    wait
    end

Move_STUN_SPORE:: @ 81C70E9
    loadsprite 10068
    panse_1C 162, 63, 10, 6
    sprite 0x83E29A8, 130, -30, -22, 117, 80, 5, 1
    sprite 0x83E29A8, 130, 10, -22, 117, 80, -5, 1
    sprite 0x83E29A8, 130, -25, -22, 117, 112, 5, 3
    pause 15
    sprite 0x83E29A8, 130, -5, -22, 117, 80, -5, 1
    sprite 0x83E29A8, 130, 5, -22, 117, 96, 5, 1
    sprite 0x83E29A8, 130, 0, -22, 117, 69, -5, 1
    sprite 0x83E29A8, 130, -15, -22, 117, 112, 5, 2
    pause 30
    sprite 0x83E29A8, 130, -15, -22, 117, 112, 5, 2
    sprite 0x83E29A8, 130, 15, -22, 117, 80, -5, 1
    sprite 0x83E29A8, 130, -10, -22, 117, 96, 7, 2
    sprite 0x83E29A8, 130, -5, -22, 117, 90, -8, 0
    pause 20
    sprite 0x83E29A8, 130, -10, -22, 117, 80, -5, 1
    sprite 0x83E29A8, 130, 0, -22, 117, 89, 5, 2
    sprite 0x83E29A8, 130, 20, -22, 117, 112, -8, 2
    sprite 0x83E29A8, 130, 5, -22, 117, 80, 5, 1
    wait
    end

Move_SLEEP_POWDER:: @ 81C7217
    loadsprite 10067
    panse_1C 162, 63, 10, 6
    sprite 0x83E2990, 130, -30, -22, 117, 80, 5, 1
    sprite 0x83E2990, 130, 10, -22, 117, 80, -5, 1
    sprite 0x83E2990, 130, -25, -22, 117, 112, 5, 3
    pause 15
    sprite 0x83E2990, 130, -5, -22, 117, 80, -5, 1
    sprite 0x83E2990, 130, 5, -22, 117, 96, 5, 1
    sprite 0x83E2990, 130, 0, -22, 117, 69, -5, 1
    sprite 0x83E2990, 130, -15, -22, 117, 112, 5, 2
    pause 30
    sprite 0x83E2990, 130, -15, -22, 117, 112, 5, 2
    sprite 0x83E2990, 130, 15, -22, 117, 80, -5, 1
    sprite 0x83E2990, 130, -10, -22, 117, 96, 7, 2
    sprite 0x83E2990, 130, -5, -22, 117, 90, -8, 0
    pause 20
    sprite 0x83E2990, 130, -10, -22, 117, 80, -5, 1
    sprite 0x83E2990, 130, 0, -22, 117, 89, 5, 2
    sprite 0x83E2990, 130, 20, -22, 117, 112, -8, 2
    sprite 0x83E2990, 130, 5, -22, 117, 80, 5, 1
    wait
    end

Move_SWIFT:: @ 81C7345
    loadsprite 10174
    loadsprite 10135
    monbg 3
    setalpha 12, 8
    panse_19 199, 192
    sprite 0x83E2C7C, 131, 20, -10, 20, 0, 22, 20, 1
    pause 5
    panse_19 199, 192
    sprite 0x83E2C7C, 131, 20, -10, 20, 5, 22, -18, 1
    pause 5
    panse_19 199, 192
    sprite 0x83E2C7C, 131, 20, -10, 20, -10, 22, 15, 1
    createtask sub_8098B1C, 2, 1, 2, 0, 18, 1
    createtask sub_8098B1C, 2, 3, 2, 0, 18, 1
    pause 5
    panse_19 199, 192
    sprite 0x83E2C7C, 131, 20, -10, 20, 0, 22, -20, 1
    pause 5
    panse_19 199, 192
    sprite 0x83E2C7C, 131, 20, -10, 20, 0, 22, 12, 1
    pause 5
    wait
    clearmonbg 3
    blendoff
    end

Move_STRENGTH:: @ 81C73FE
    loadsprite 10135
    monbg 3
    setalpha 12, 8
    panse_19 145, 192
    createtask sub_8098E90, 5, 0, 2, 0, 96, 30
    wait
    pause 10
    sprite 0x83D4E84, 2, 0, 0, 4
    createtask sub_809907C, 2, 1, 18, 6, 2, 4
    pause 4
    panse_19 134, 63
    sprite 0x83E7C08, 3, 16, 12, 1, 1
    pause 4
    panse_19 134, 63
    sprite 0x83E7C08, 3, -16, -12, 1, 1
    pause 4
    panse_19 134, 63
    sprite 0x83E7C08, 3, 3, 4, 1, 1
    wait
    createtask sub_8098B1C, 2, 1, 2, 0, 8, 1
    wait
    clearmonbg 3
    blendoff
    end

Move_TACKLE:: @ 81C7492
    loadsprite 10135
    monbg 1
    setalpha 12, 8
    sprite 0x83D4E54, 2, 4, 4
    pause 6
    sprite 0x83E7C08, 2, 0, 0, 1, 2
    createtask sub_80989F8, 2, 1, 3, 0, 6, 1
    panse_19 132, 63
    wait
    clearmonbg 1
    blendoff
    end

Move_BODY_SLAM:: @ 81C74D0
    loadsprite 10135
    monbg 3
    setalpha 12, 8
    panse_19 145, 192
    sprite 0x83D4E6C, 2, 6, 1, 0
    wait
    pause 11
    sprite 0x83D4E9C, 2, 0, 26, 0, 0, 5
    pause 6
    sprite 0x83E7C08, 4, -10, 0, 1, 0
    panse_1C 134, 63, 10, 2
    pause 1
    sprite 0x83D4E9C, 2, 1, -28, 0, 0, 3
    wait
    createtask sub_8098CD0, 2, 1, 4, 0, 12, 1
    wait
    pause 10
    sprite 0x83D4E84, 2, 0, 0, 6
    pause 5
    sprite 0x83D4E84, 2, 1, 0, 6
    wait
    clearmonbg 3
    blendoff
    end

Move_SUPERSONIC:: @ 81C755D
    loadsprite 10163
    monbg 2
    monbgprio_2A 0
    setalpha 12, 8
    createtask sub_8098B1C, 2, 0, 2, 0, 8, 1
    call MoveFn_81C759B
    call MoveFn_81C759B
    call MoveFn_81C759B
    call MoveFn_81C759B
    call MoveFn_81C759B
    call MoveFn_81C759B
    wait
    clearmonbg 2
    blendoff
    end

MoveFn_81C759B:: @ 81C759B
    panse_19 177, 192
    sprite 0x83E3CA0, 130, 16, 0, 0, 0, 30, 0
    pause 2
    ret

Move_SCREECH:: @ 81C75B5
    loadsprite 10164
    createtask sub_8098B1C, 2, 0, 3, 0, 2, 1
    call MoveFn_81C75E8
    call MoveFn_81C75E8
    pause 16
    createtask sub_8099704, 5, 0, 6, 2048, 2, 1
    wait
    end

MoveFn_81C75E8:: @ 81C75E8
    panse_19 174, 192
    sprite 0x83E3CB8, 130, 16, 0, 0, 0, 30, 0
    pause 2
    ret

Move_FLAME_WHEEL:: @ 81C7602
    loadsprite 10029
    monbg 3
    monbgprio_2A 1
    sprite 0x83E5DFC, 3, 0, 0, 56, 0
    panse_19 137, 192
    pause 2
    sprite 0x83E5DFC, 3, 0, 0, 56, 4
    panse_19 137, 192
    pause 2
    sprite 0x83E5DFC, 3, 0, 0, 56, 8
    panse_19 137, 192
    pause 2
    sprite 0x83E5DFC, 3, 0, 0, 56, 12
    panse_19 137, 192
    pause 2
    sprite 0x83E5DFC, 3, 0, 0, 56, 16
    panse_19 137, 192
    pause 2
    sprite 0x83E5DFC, 3, 0, 0, 56, 20
    panse_19 137, 192
    pause 2
    sprite 0x83E5DFC, 3, 0, 0, 56, 24
    panse_19 137, 192
    wait
    sprite 0x83D4E9C, 2, 0, 24, 0, 0, 6
    pause 4
    createtask sub_80989F8, 2, 1, 5, 0, 8, 1
    createtask sub_807616C, 3, 1, 31, 12, 1, 1
    panse_19 138, 63
    call MoveFn_81D0950
    pause 7
    sprite 0x83D4E84, 2, 0, 0, 9
    wait
    clearmonbg 3
    end

unk_81C76EC:: @81C76EC
    sprite 0x83E5DFC, 3, 0, 0, 50
    pause 4
    ret

Move_PIN_MISSILE:: @ 81C76FC
    loadsprite 10161
    loadsprite 10135
    monbg 1
    monbgprio_28 1
    setalpha 12, 8
    panse_19 136, 192
    sprite 0x83E730C, 2, 20, -8, -8, -8, 20, -32
    pause 15
    sprite 0x83E730C, 2, 20, -8, 8, 8, 20, -40
    pause 4
    panse_19 159, 63
    sprite 0x83E7C08, 3, -8, -8, 1, 2
    createtask sub_8098B1C, 2, 1, 3, 0, 2, 1
    pause 9
    sprite 0x83E730C, 2, 20, -8, 0, 0, 20, -32
    pause 4
    panse_19 159, 63
    sprite 0x83E7C08, 3, 8, 8, 1, 2
    createtask sub_8098B1C, 2, 1, 3, 0, 2, 1
    pause 14
    panse_19 159, 63
    sprite 0x83E7C08, 3, 0, 0, 1, 2
    createtask sub_8098B1C, 2, 1, 3, 0, 2, 1
    wait
    clearmonbg 1
    blendoff
    end

Move_ICICLE_SPEAR:: @ 81C77C1
    loadsprite 10262
    loadsprite 10135
    monbg 1
    monbgprio_28 1
    setalpha 12, 8
    panse_19 130, 192
    sprite 0x83E7324, 2, 20, -8, -8, -8, 20, -32
    pause 15
    sprite 0x83E7324, 2, 20, -8, 8, 8, 20, -40
    pause 4
    panse_19 159, 63
    sprite 0x83E7C08, 3, -8, -8, 1, 2
    createtask sub_8098B1C, 2, 1, 3, 0, 2, 1
    pause 9
    sprite 0x83E7324, 2, 20, -8, 0, 0, 20, -32
    pause 4
    panse_19 159, 63
    sprite 0x83E7C08, 3, 8, 8, 1, 2
    createtask sub_8098B1C, 2, 1, 3, 0, 2, 1
    pause 14
    panse_19 159, 63
    sprite 0x83E7C08, 3, 0, 0, 1, 2
    createtask sub_8098B1C, 2, 1, 3, 0, 2, 1
    wait
    clearmonbg 1
    blendoff
    end

Move_TAKE_DOWN:: @ 81C7886
    loadsprite 10135
    monbg 3
    setalpha 12, 8
    panse_19 145, 192
    createtask sub_809949C, 5, 0, -24, 8, 23, 10, 40, 10
    pause 35
    sprite 0x83E7B3C, 2, 31, 3, 1, 0, 10, 0, 0
    sprite 0x83E7C08, 4, -10, 0, 1, 0
    panse_19 134, 63
    pause 1
    sprite 0x83D4E9C, 2, 1, -16, 0, 0, 4
    wait
    createtask sub_8098CD0, 2, 1, 4, 0, 12, 1
    wait
    pause 2
    sprite 0x83D4E84, 2, 0, 0, 5
    pause 3
    sprite 0x83D4E84, 2, 1, 0, 7
    wait
    clearmonbg 3
    blendoff
    end

Move_DOUBLE_EDGE:: @ 81C791A
    loadsprite 10135
    panse_19 199, 192
    sprite 0x83E7B3C, 2, 2, 4, 2, 32767, 10, 0, 0
    wait
    pause 10
    panse_19 186, 192
    panse_1D 186, 192, 8
    createtask sub_809907C, 2, 0, 18, 6, 2, 4
    wait
    sprite 0x83E7B24, 2, 1, 0, 16, 16, 32767
    sprite 0x83D4E9C, 2, 0, 20, 0, 0, 4
    pause 3
    wait
    panse_19 134, 63
    sprite 0x83E7C08, 132, -10, 0, 1, 0
    sprite 0x83D4E9C, 2, 1, -32, 0, 0, 3
    wait
    createtask sub_8099980, 2, 8, -256, 0, 0
    createtask sub_8099980, 2, 8, -256, 1, 0
    createtask sub_8098CD0, 2, 0, 4, 0, 12, 1
    createtask sub_8098CD0, 2, 1, 4, 0, 12, 1
    sprite 0x83E7B24, 2, 1, 2, 16, 0, 32767
    wait
    createtask sub_8099980, 2, 8, -256, 0, 1
    createtask sub_8099980, 2, 8, -256, 1, 1
    wait
    sprite 0x83D4E84, 2, 0, 0, 5
    pause 3
    sprite 0x83D4E84, 2, 1, 0, 7
    wait
    end

Move_POISON_STING:: @ 81C7A2D
    loadsprite 10161
    loadsprite 10135
    loadsprite 10150
    monbg 1
    monbgprio_28 1
    setalpha 12, 8
    panse_19 153, 192
    sprite 0x83E72F4, 130, 20, 0, -8, 0, 20
    wait
    sprite 0x83E7C08, 3, 0, 0, 1, 2
    createtask sub_8098B1C, 2, 1, 2, 0, 5, 1
    panse_19 159, 63
    wait
    call MoveFn_81D575B
    wait
    clearmonbg 1
    blendoff
    end

Move_TWINEEDLE:: @ 81C7A82
    loadsprite 10161
    loadsprite 10135
    monbg 1
    monbgprio_28 1
    setalpha 12, 8
    panse_1C 153, 192, 6, 2
    sprite 0x83E72F4, 130, 10, -4, 0, -4, 20
    sprite 0x83E72F4, 130, 20, 12, 10, 12, 20
    pause 20
    createtask sub_8098B1C, 2, 1, 2, 0, 5, 1
    sprite 0x83E7C20, 3, 0, -4, 1, 3
    panse_1C 159, 63, 5, 2
    pause 1
    sprite 0x83E7C20, 3, 10, 12, 1, 3
    wait
    clearmonbg 1
    blendoff
    end

Move_FIRE_BLAST:: @ 81C7AF5
    loadsprite 10029
    createtask_1F sub_80DCE10, 137, 138
    call MoveFn_81C7B89
    call MoveFn_81C7B89
    call MoveFn_81C7B89
    pause 24
    createtask sub_80BA7F8, 10, 1, 3, 0, 8, 0
    wait
    pause 19
    createtask sub_80989F8, 2, 1, 5, 0, 20, 1
    call MoveFn_81C7BCD
    pause 3
    call MoveFn_81C7BCD
    pause 3
    call MoveFn_81C7BCD
    pause 3
    call MoveFn_81C7BCD
    pause 3
    call MoveFn_81C7BCD
    pause 3
    call MoveFn_81C7BCD
    pause 3
    call MoveFn_81C7BCD
    pause 3
    call MoveFn_81C7BCD
    pause 3
    call MoveFn_81C7BCD
    wait
    createtask sub_80BA7F8, 10, 1, 2, 8, 0, 0
    wait
    end

MoveFn_81C7B89:: @ 81C7B89
    sprite 0x83E5D94, 130, 0, 0, 0
    sprite 0x83E5D94, 130, 0, 0, 51
    sprite 0x83E5D94, 130, 0, 0, 102
    sprite 0x83E5D94, 130, 0, 0, 153
    sprite 0x83E5D94, 130, 0, 0, 204
    pause 5
    ret

MoveFn_81C7BCD:: @ 81C7BCD
    sprite 0x83E5DE4, 130, 0, 0, 10, 0, -2
    sprite 0x83E5DE4, 130, 0, 0, 13, -2, 0
    sprite 0x83E5DE4, 130, 0, 0, 13, 2, 0
    sprite 0x83E5DE4, 130, 0, 0, 15, -2, 2
    sprite 0x83E5DE4, 130, 0, 0, 15, 2, 2
    ret

Move_LEECH_SEED:: @ 81C7C23
    loadsprite 10006
    panse_19 162, 192
    sprite 0x83E2B34, 130, 15, 0, 0, 24, 35, -32
    pause 8
    panse_19 162, 192
    sprite 0x83E2B34, 130, 15, 0, -16, 24, 35, -40
    pause 8
    panse_19 162, 192
    sprite 0x83E2B34, 130, 15, 0, 16, 24, 35, -37
    pause 12
    panse_1C 160, 63, 10, 8
    wait
    end

Move_EMBER:: @ 81C7C79
    loadsprite 10029
    panse_1C 144, 192, 5, 2
    sprite 0x83E5D4C, 130, 20, 0, -16, 24, 20, 1
    pause 4
    sprite 0x83E5D4C, 130, 20, 0, 0, 24, 20, 1
    pause 4
    sprite 0x83E5D4C, 130, 20, 0, 16, 24, 20, 1
    pause 16
    panse_19 137, 63
    call MoveFn_81C7CD5
    call MoveFn_81C7CD5
    call MoveFn_81C7CD5
    end

MoveFn_81C7CD5:: @ 81C7CD5
    sprite 0x83E5D64, 130, -24, 24, 24, 24, 20, 1, 1
    pause 4
    ret

Move_MEGA_PUNCH:: @ 81C7CED
    loadsprite 10135
    loadsprite 10143
    monbg 1
    pause 2
    sprite 0x83E7B24, 2, 1, 0, 0, 16, 0
    setalpha 12, 8
    panse_19 133, 63
    sprite 0x83E67C0, 3, 0, 0, 0, 50
    createtask sub_80BA7F8, 10, 4, 2, 0, 7, 32767
    pause 50
    call MoveFn_81C7D89
    sprite 0x83E7C08, 2, 0, 0, 1, 0
    createtask sub_8098B1C, 2, 1, 4, 0, 22, 1
    createtask sub_80BA7F8, 10, 4, 2, 0, 0, 32767
    sprite 0x83E7B3C, 2, 31, 3, 1, 0, 8, 0, 0
    panse_19 116, 63
    wait
    clearmonbg 1
    blendoff
    pause 2
    restorebg
    waitbgfadein
    end

MoveFn_81C7D89:: @ 81C7D89
    pause 2
    createtask sub_80BC02C, 2,
    jumpvareq 7, 1, .L81C7DC0
    createtask sub_80DEAB4, 2,
    jumpvareq 7, 0, .L81C7DB2
    jumpvareq 7, 1, .L81C7DB9
.L81C7DB1:
    ret
.L81C7DB2:
    changebg 4
    jump .L81C7DB1
.L81C7DB9:
    changebg 5
    jump .L81C7DB1
.L81C7DC0:
    changebg 6
    jump .L81C7DB1

Move_MEGA_KICK:: @ 81C7DC7
    loadsprite 10135
    loadsprite 10143
    monbg 1
    pause 2
    sprite 0x83E7B24, 2, 1, 0, 0, 16, 0
    setalpha 12, 8
    panse_19 133, 63
    sprite 0x83E67C0, 3, 0, 0, 1, 50
    createtask sub_80BA7F8, 10, 4, 2, 0, 7, 32767
    pause 50
    panse_19 134, 63
    call MoveFn_81C7D89
    sprite 0x83E7C08, 2, 0, 0, 1, 0
    createtask sub_8098B1C, 2, 1, 4, 0, 22, 1
    createtask sub_80BA7F8, 10, 4, 2, 0, 0, 32767
    sprite 0x83E7B3C, 2, 31, 3, 1, 0, 8, 0, 0
    wait
    clearmonbg 1
    blendoff
    pause 2
    restorebg
    waitbgfadein
    end

Move_COMET_PUNCH:: @ 81C7E63
    loadsprite 10135
    loadsprite 10143
    monbg 1
    setalpha 12, 8
    ifelse .L81C7E91, .L81C7EB6
.L81C7E77:
    createtask sub_80989F8, 2, 1, 3, 0, 6, 1
    panse_19 132, 63
    wait
    clearmonbg 1
    blendoff
    end
.L81C7E91:
    sprite 0x83E7C08, 2, -8, -8, 1, 2
    sprite 0x83E6710, 3, -8, 0, 8, 1, 0
    jump .L81C7E77
.L81C7EB6:
    sprite 0x83E7C08, 2, 8, -8, 1, 2
    sprite 0x83E6710, 3, 8, 0, 8, 1, 0
    jump .L81C7E77

Move_SONIC_BOOM:: @ 81C7EDB
    loadsprite 10003
    loadsprite 10135
    monbg 3
    monbgprio_28 1
    setalpha 12, 8
    call MoveFn_81C7F12
    call MoveFn_81C7F12
    call MoveFn_81C7F12
    createtask sub_80989F8, 2, 1, 3, 0, 10, 1
    call MoveFn_81C7F2A
    wait
    clearmonbg 3
    blendoff
    end

MoveFn_81C7F12:: @ 81C7F12
    panse_19 153, 192
    sprite 0x83E3C10, 130, 16, 0, 0, 0, 15
    pause 4
    ret

MoveFn_81C7F2A:: @ 81C7F2A
    sprite 0x83E7C08, 131, 0, 0, 1, 2
    pause 4
    ret

Move_THUNDER_SHOCK:: @ 81C7F3C
    loadsprite 10001
    loadsprite 10011
    createtask sub_80BA7F8, 10, 1, 0, 0, 6, 0
    wait
    pause 10
    createtask sub_80AE220, 5, 0, -44, 0
    panse_19 111, 63
    pause 9
    createtask sub_80BA7F8, 10, 4, 0, 0, 13, 0
    wait
    createtask sub_80BA7F8, 10, 4, 0, 13, 0, 0
    wait
    pause 20
    call MoveFn_81D58D4
    wait
    pause 20
    createtask sub_80BA7F8, 10, 1, 0, 6, 0, 0
    wait
    end

Move_THUNDERBOLT:: @ 81C7FAA
    loadsprite 10001
    loadsprite 10282
    loadsprite 10011
    createtask sub_80BA7F8, 10, 1, 0, 0, 6, 0
    wait
    pause 10
    createtask sub_80AE220, 5, 24, -52, 0
    panse_19 111, 63
    pause 7
    createtask sub_80AE220, 5, -24, -52, 0
    panse_19 111, 63
    pause 7
    createtask sub_80AE220, 5, 0, -60, 1
    panse_19 111, 63
    pause 9
    createtask sub_80BA7F8, 10, 4, 0, 0, 13, 0
    wait
    createtask sub_80BA7F8, 10, 4, 0, 13, 0, 0
    wait
    pause 20
    sprite 0x83E6058, 131, 44, 0, 0, 3
    sprite 0x83E6070, 132, 0, 0, 32, 44, 0, 40, 0, -32765
    sprite 0x83E6070, 132, 0, 0, 32, 44, 64, 40, 1, -32765
    sprite 0x83E6070, 132, 0, 0, 32, 44, 128, 40, 0, -32765
    sprite 0x83E6070, 132, 0, 0, 32, 44, 192, 40, 2, -32765
    sprite 0x83E6070, 132, 0, 0, 16, 44, 32, 40, 0, -32765
    sprite 0x83E6070, 132, 0, 0, 16, 44, 96, 40, 1, -32765
    sprite 0x83E6070, 132, 0, 0, 16, 44, 160, 40, 0, -32765
    sprite 0x83E6070, 132, 0, 0, 16, 44, 224, 40, 2, -32765
    panse_19 208, 63
    pause 0
    createtask sub_80BA7F8, 10, 1, 0, 2, 2, 0
    pause 6
    createtask sub_80BA7F8, 10, 1, 0, 6, 6, 0
    pause 6
    createtask sub_80BA7F8, 10, 1, 0, 2, 2, 0
    pause 6
    createtask sub_80BA7F8, 10, 1, 0, 6, 6, 0
    wait
    pause 20
    panse_1D 112, 63, 19
    call MoveFn_81D58D4
    wait
    pause 20
    createtask sub_80BA7F8, 10, 1, 0, 6, 0, 0
    wait
    end

Move_THUNDER_WAVE:: @ 81C8160
    loadsprite 10001
    loadsprite 10011
    loadsprite 10173
    createtask sub_80BA7F8, 10, 1, 0, 0, 6, 0
    wait
    pause 10
    createtask sub_80AE220, 5, 0, -48, 0
    panse_19 131, 63
    pause 20
    panse_1C 112, 63, 10, 4
    sprite 0x83E60B8, 130, -16, -16
    pause 4
    sprite 0x83E60B8, 130, -16, 0
    pause 4
    sprite 0x83E60B8, 130, -16, 16
    wait
    createtask sub_80BA7F8, 10, 1, 0, 6, 0, 0
    wait
    end

Move_BEAT_UP:: @ 81C81CF
    loadsprite 10135
    loadsprite 10143
    monbg 1
    setalpha 12, 8
    ifelse .L81C81E8, .L81C8259
.L81C81E3:
    wait
    clearmonbg 1
    blendoff
    end
.L81C81E8:
    sprite 0x83E7C08, 130, -20, -20, 1, 2
    sprite 0x83E6710, 131, -20, -12, 8, 1, 0
    createtask sub_80989F8, 2, 1, 3, 0, 6, 1
    panse_19 116, 63
    pause 8
    sprite 0x83E7C08, 130, 8, 0, 1, 2
    sprite 0x83E6710, 131, 8, 8, 8, 1, 0
    createtask sub_80989F8, 2, 1, 3, 0, 6, 1
    panse_19 116, 63
    jump .L81C81E3
.L81C8259:
    sprite 0x83E7C08, 130, 12, -20, 1, 2
    sprite 0x83E6710, 131, 12, -12, 8, 1, 0
    createtask sub_80989F8, 2, 1, 3, 0, 6, 1
    panse_19 116, 63
    pause 8
    sprite 0x83E7C08, 130, -12, 0, 1, 2
    sprite 0x83E6710, 131, -12, 8, 8, 1, 0
    createtask sub_80989F8, 2, 1, 3, 0, 6, 1
    panse_19 116, 63
    jump .L81C81E3

Move_STOMP:: @ 81C82CA
    loadsprite 10143
    loadsprite 10135
    monbg 1
    setalpha 12, 8
    panse_19 128, 63
    sprite 0x83E67D8, 3, 0, -32, 15
    pause 19
    sprite 0x83E7C08, 2, 0, -8, 1, 1
    createtask sub_80989F8, 2, 1, 0, 4, 9, 1
    panse_19 134, 63
    wait
    clearmonbg 1
    blendoff
    end

Move_TAIL_WHIP:: @ 81C8311
    panse_1C 160, 192, 24, 3
    createtask sub_809907C, 2, 0, 12, 4, 2, 3
    wait
    end

Move_CUT:: @ 81C832A
    loadsprite 10138
    monbg 1
    setalpha 12, 8
    panse_19 121, 63
    sprite 0x83E3294, 2, 40, -32, 0
    pause 5
    createtask sub_80989F8, 2, 1, 0, 3, 10, 1
    wait
    clearmonbg 1
    blendoff
    wait
    end

Move_HIDDEN_POWER:: @ 81C835C
    loadsprite 10217
    panse_19 145, 192
    createtask sub_80998B0, 5, -7, -7, 11, 0, 0
    wait
    pause 30
    createtask sub_807616C, 5, 0, 20479, 12, 5, 1
    pause 4
    createtask sub_80998B0, 5, -7, -7, 11, 0, 0
    panse_19 210, 192
    sprite 0x83E427C, 2, 26, 0
    sprite 0x83E427C, 2, 26, 42
    sprite 0x83E427C, 2, 26, 84
    sprite 0x83E427C, 2, 26, 126
    sprite 0x83E427C, 2, 26, 168
    sprite 0x83E427C, 2, 26, 210
    pause 52
    setvar 7, -1
    panse_19 200, 192
    createtask sub_80998B0, 5, -7, -7, 11, 0, 0
    sprite 0x83E4294, 130, 0
    sprite 0x83E4294, 130, 32
    sprite 0x83E4294, 130, 64
    sprite 0x83E4294, 130, 96
    sprite 0x83E4294, 130, 128
    sprite 0x83E4294, 130, 160
    sprite 0x83E4294, 130, 192
    sprite 0x83E4294, 130, 224
    end

Move_REVERSAL:: @ 81C8445
    loadsprite 10236
    loadsprite 10143
    loadsprite 10135
    panse_19 202, 192
    sprite 0x83E7B3C, 2, 31, 3, 3, 32767, 8, 0, 0
    wait
    pause 30
    createtask sub_80B9BDC, 2, 31, 3, 2, 0, 10, 32767
    pause 10
    panse_19 210, 192
    sprite 0x83FF3B8, 2, 26, 0
    sprite 0x83FF3B8, 2, 26, 42
    sprite 0x83FF3B8, 2, 26, 84
    sprite 0x83FF3B8, 2, 26, 126
    sprite 0x83FF3B8, 2, 26, 168
    sprite 0x83FF3B8, 2, 26, 210
    wait
    pause 20
    sprite 0x83D4E54, 2, 6, 4
    pause 8
    panse_19 116, 63
    sprite 0x83E7B3C, 2, 31, 3, 1, 32767, 8, 0, 0
    sprite 0x83E6710, 132, 0, 0, 10, 1, 0
    sprite 0x83E7C08, 131, 0, 0, 1, 1
    createtask sub_8099BD4, 5, 0, 1, 8, 1, 0
    end

Move_PURSUIT:: @ 81C8520
    loadsprite 10135
    monbg 1
    fadetobg 1
    waitbgfadein
    pause 0
    setalpha 12, 8
    ifelse .L81C853F, .L81C8568
.L81C8536:
    wait
    clearmonbg 1
    blendoff
    pause 0
    restorebg
    waitbgfadein
    end
.L81C853F:
    panse_19 132, 63
    sprite 0x83E7C08, 3, 0, 0, 1, 2
    createtask sub_8099BD4, 5, 0, 1, 6, 1, 0
    jump .L81C8536
.L81C8568:
    panse_19 132, 63
    sprite 0x83E7C08, 3, 0, 0, 1, 1
    createtask sub_8099BD4, 5, 0, 1, 6, 1, 0
    jump .L81C8536

Move_SPIKE_CANNON:: @ 81C8591
    loadsprite 10161
    loadsprite 10135
    monbg 1
    monbgprio_28 1
    setalpha 12, 8
    createtask sub_809949C, 5, 0, -4, 0, 4, 6, 8, 4
    wait
    panse_1C 153, 192, 5, 3
    sprite 0x83D4E84, 2, 0, 0, 5
    sprite 0x83E72F4, 2, 10, -8, -8, -8, 20
    sprite 0x83E72F4, 2, 18, 0, 0, 0, 20
    sprite 0x83E72F4, 2, 26, 8, 8, 8, 20
    wait
    sprite 0x83E7C20, 3, -8, -8, 1, 2
    sprite 0x83E7C20, 3, 0, 0, 1, 2
    sprite 0x83E7C20, 3, 8, 8, 1, 2
    createtask sub_8098B1C, 2, 1, 3, 0, 7, 1
    panse_1C 159, 63, 5, 3
    wait
    clearmonbg 1
    blendoff
    end

Move_SWORDS_DANCE:: @ 81C8644
    loadsprite 10005
    monbg 0
    setalpha 12, 8
    panse_19 184, 192
    createtask sub_809907C, 2, 0, 16, 6, 1, 4
    sprite 0x83E3BF8, 2, 0, 0
    pause 22
    createtask sub_80B9F6C, 2, 10005, 2, 2, 32754, 16, 0, 0
    wait
    clearmonbg 0
    blendoff
    pause 1
    end

Move_PSYCH_UP:: @ 81C868A
    loadsprite 10196
    monbg 2
    createtask sub_80B9CE4, 2, 1, 2, 6, 1, 11, 0
    setalpha 12, 8
    panse_1C 193, 192, 5, 10
    sprite 0x83E6DF8, 2, 0, 0, 0, 0
    createtask sub_8099704, 5, 0, 5, 2560, 8, 0
    pause 127
    pause 4
    panse_19 182, 192
    createtask sub_80998B0, 5, -5, -5, 10, 0, 1
    createtask sub_80BA7F8, 9, 2, 2, 10, 0, 1023
    pause 30
    clearmonbg 2
    blendoff
    wait
    end

Move_DIZZY_PUNCH:: @ 81C86FC
    loadsprite 10073
    loadsprite 10143
    loadsprite 10135
    monbg 1
    setalpha 12, 8
    call MoveFn_81C8817
    sprite 0x83E6710, 133, 16, 8, 20, 1, 0
    sprite 0x83E7C08, 132, 16, 0, 1, 1
    panse_19 132, 63
    sprite 0x83E67F0, 131, 16, 8, 160, -32
    sprite 0x83E67F0, 131, 16, 8, -256, -40
    sprite 0x83E67F0, 131, 16, 8, 128, -16
    sprite 0x83E67F0, 131, 16, 8, 416, -38
    sprite 0x83E67F0, 131, 16, 8, -128, -22
    sprite 0x83E67F0, 131, 16, 8, -384, -31
    pause 10
    call MoveFn_81C8817
    sprite 0x83E6710, 133, -16, -8, 20, 1, 0
    sprite 0x83E7C08, 132, -16, -16, 1, 1
    panse_19 116, 63
    sprite 0x83E67F0, 131, -16, -8, 160, -32
    sprite 0x83E67F0, 131, -16, -8, -256, -40
    sprite 0x83E67F0, 131, -16, -8, 128, -16
    sprite 0x83E67F0, 131, -16, -8, 416, -38
    sprite 0x83E67F0, 131, -16, -8, -128, -22
    sprite 0x83E67F0, 131, -16, -8, -384, -31
    wait
    clearmonbg 1
    blendoff
    end

MoveFn_81C8817:: @ 81C8817
    sprite 0x83D4E54, 2, 6, 4
    pause 6
    createtask sub_8098B1C, 2, 1, 3, 0, 7, 1
    ret

Move_FIRE_SPIN:: @ 81C8836
    loadsprite 10029
    panse_19 143, 63
    createtask sub_80989F8, 5, 1, 0, 2, 47, 1
    call MoveFn_81C885F
    call MoveFn_81C885F
    call MoveFn_81C885F
    wait
    end

MoveFn_81C885F:: @ 81C885F
    sprite 0x83E7438, 130, 0, 28, 528, 30, 13, 50, 1
    pause 2
    sprite 0x83E7438, 130, 0, 32, 480, 20, 16, -46, 1
    pause 2
    sprite 0x83E7438, 130, 0, 33, 576, 20, 8, 42, 1
    pause 2
    sprite 0x83E7438, 130, 0, 31, 400, 25, 11, -42, 1
    pause 2
    sprite 0x83E7438, 130, 0, 28, 512, 25, 16, 46, 1
    pause 2
    sprite 0x83E7438, 130, 0, 33, 464, 30, 15, -50, 1
    pause 2
    ret

Move_FURY_CUTTER:: @ 81C88EA
    loadsprite 10138
    monbg 1
    setalpha 12, 8
    panse_19 129, 63
    createtask sub_80AAB7C, 2,
    jumpvareq 7, 0, .L81C8947
    jump .L81C8959
.L81C890A:
    createtask update_fury_cutter_counter_copy, 2,
    jumpvareq 7, 1, .L81C892E
    jumpvareq 7, 2, .L81C896B
    jumpvareq 7, 3, .L81C8985
    jump .L81C899F
.L81C892E:
    pause 5
    createtask sub_80989F8, 2, 1, 0, 3, 10, 1
    wait
    clearmonbg 1
    blendoff
    wait
    end
.L81C8947:
    sprite 0x83E3294, 2, 40, -32, 0
    jump .L81C890A
.L81C8959:
    sprite 0x83E3294, 2, 40, -32, 1
    jump .L81C890A
.L81C896B:
    sprite 0x83E7B3C, 2, 31, 3, 1, 10505, 4, 0, 0
    jump .L81C892E
.L81C8985:
    sprite 0x83E7B3C, 2, 31, 3, 3, 10505, 4, 0, 0
    jump .L81C892E
.L81C899F:
    sprite 0x83E7B3C, 2, 31, 3, 3, 10505, 4, 0, 0
    jump .L81C892E

Move_SELF_DESTRUCT:: @ 81C89B9
    loadsprite 10198
    createtask sub_80BA7F8, 10, 2, 1, 0, 9, 31
    createtask sub_8098B1C, 5, 4, 6, 0, 38, 1
    createtask sub_8098B1C, 5, 5, 6, 0, 38, 1
    createtask sub_8098B1C, 5, 6, 6, 0, 38, 1
    createtask sub_8098B1C, 5, 7, 6, 0, 38, 1
    createtask sub_8098B1C, 5, 8, 6, 0, 38, 1
    call MoveFn_81C8A3F
    call MoveFn_81C8A3F
    wait
    createtask sub_80BA7F8, 10, 2, 1, 9, 0, 31
    end

MoveFn_81C8A3F:: @ 81C8A3F
    panse_19 170, 192
    sprite 0x83E3F94, 3, 0, 0, 0, 1
    pause 6
    panse_19 170, 192
    sprite 0x83E3F94, 3, 24, -24, 0, 1
    pause 6
    panse_19 170, 192
    sprite 0x83E3F94, 3, -16, 16, 0, 1
    pause 6
    panse_19 170, 192
    sprite 0x83E3F94, 3, -24, -12, 0, 1
    pause 6
    panse_19 170, 192
    sprite 0x83E3F94, 3, 16, 16, 0, 1
    pause 6
    ret

Move_SLAM:: @ 81C8AA9
    loadsprite 10056
    loadsprite 10135
    monbg 1
    setalpha 12, 8
    panse_19 132, 192
    sprite 0x83D4E9C, 2, 0, 20, 3, 0, 4
    pause 1
    sprite 0x83E3148, 2, 0, 0
    pause 3
    panse_19 134, 63
    sprite 0x83E7C08, 3, 0, 0, 1, 1
    sprite 0x83D4E9C, 2, 1, -12, 10, 0, 3
    sprite 0x83D4E84, 2, 0, 0, 5
    pause 3
    createtask sub_8098CD0, 2, 1, 0, 3, 6, 1
    wait
    pause 5
    sprite 0x83D4E84, 2, 1, 0, 6
    wait
    clearmonbg 1
    blendoff
    end

Move_VINE_WHIP:: @ 81C8B31
    loadsprite 10287
    panse_19 136, 192
    sprite 0x83D4E54, 2, 4, 6
    pause 6
    panse_19 148, 63
    sprite 0x83E3160, 130, 0, 0
    pause 6
    createtask sub_8098B1C, 2, 1, 2, 0, 6, 1
    end

Move_DRILL_PECK:: @ 81C8B68
    loadsprite 10135
    loadsprite 10162
    sprite 0x83E3550, 2, 0
    panse_19 155, 192
    wait
    pause 2
    sprite 0x83E3550, 2, 1
    pause 2
    panse_1C 159, 63, 4, 8
    createtask sub_80B2868, 5,
    createtask sub_8098B1C, 2, 1, 4, 0, 18, 1
    wait
    sprite 0x83E3550, 2, 2
    wait
    sprite 0x83D4E84, 2, 0, 0, 6
    wait
    end

Move_WATERFALL:: @ 81C8BC1
    loadsprite 10148
    loadsprite 10155
    loadsprite 10141
    monbg 3
    setalpha 12, 8
    createtask sub_80989F8, 5, 0, 0, 2, 23, 1
    pause 5
    panse_19 135, 192
    sprite 0x83E5AB0, 2, 10, 10, 25, 0
    pause 4
    panse_19 135, 192
    sprite 0x83E5AB0, 2, -15, 0, 25, 0
    pause 4
    panse_19 135, 192
    sprite 0x83E5AB0, 2, 20, 10, 25, 0
    pause 4
    panse_19 135, 192
    sprite 0x83E5AB0, 2, 0, -10, 25, 0
    pause 4
    panse_19 135, 192
    sprite 0x83E5AB0, 2, -10, 15, 25, 0
    pause 4
    panse_19 135, 192
    sprite 0x83E5AB0, 2, 25, 20, 25, 0
    pause 4
    panse_19 135, 192
    sprite 0x83E5AB0, 2, -20, 20, 25, 0
    pause 4
    panse_19 135, 192
    sprite 0x83E5AB0, 2, 12, 0, 25, 0
    wait
    pause 10
    sprite 0x83D4E54, 2, 6, 5
    pause 6
    call MoveFn_81C8CA2
    wait
    clearmonbg 3
    blendoff
    end

MoveFn_81C8CA2:: @ 81C8CA2
    panse_19 209, 63
    createtask sub_8098B1C, 5, 1, 4, 0, 17, 1
    sprite 0x83E7C38, 3, 0, 20, 1, 1
    sprite 0x83E5AC8, 4, 0, 20
    sprite 0x83E5AC8, 4, 0, 20
    pause 2
    sprite 0x83E7C38, 3, 0, 15, 1, 1
    sprite 0x83E5AC8, 4, 0, 15
    sprite 0x83E5AC8, 4, 0, 15
    pause 2
    sprite 0x83E7C38, 3, 0, 10, 1, 1
    sprite 0x83E5AC8, 4, 0, 10
    sprite 0x83E5AC8, 4, 0, 10
    pause 2
    sprite 0x83E7C38, 3, 0, 5, 1, 1
    sprite 0x83E5AC8, 4, 0, 5
    sprite 0x83E5AC8, 4, 0, 5
    pause 2
    sprite 0x83E7C38, 3, 0, 0, 1, 1
    sprite 0x83E5AC8, 4, 0, 0
    sprite 0x83E5AC8, 4, 0, 0
    pause 2
    sprite 0x83E7C38, 3, 0, -5, 1, 1
    sprite 0x83E5AC8, 4, 0, -5
    sprite 0x83E5AC8, 4, 0, -5
    pause 2
    sprite 0x83E7C38, 3, 0, -10, 1, 1
    sprite 0x83E5AC8, 4, 0, -10
    sprite 0x83E5AC8, 4, 0, -10
    pause 2
    sprite 0x83E7C38, 3, 0, -15, 1, 1
    sprite 0x83E5AC8, 4, 0, -15
    sprite 0x83E5AC8, 4, 0, -15
    pause 2
    sprite 0x83E7C38, 3, 0, -20, 1, 1
    sprite 0x83E5AC8, 4, 0, -20
    sprite 0x83E5AC8, 4, 0, -20
    ret

Move_EXPLOSION:: @ 81C8E15
    loadsprite 10198
    sprite 0x83E7B3C, 2, 1, 8, 9, 8474, 8, 0, 8
    createtask sub_8098B1C, 5, 4, 8, 0, 40, 1
    createtask sub_8098B1C, 5, 5, 8, 0, 40, 1
    createtask sub_8098B1C, 5, 6, 8, 0, 40, 1
    createtask sub_8098B1C, 5, 7, 8, 0, 40, 1
    createtask sub_8098B1C, 5, 8, 8, 0, 40, 1
    call MoveFn_81C8EB2
    call MoveFn_81C8EB2
    wait
    createtask sub_80BA7F8, 10, 1, 1, 16, 16, 32767
    pause 50
    createtask sub_80BA7F8, 10, 1, 3, 16, 0, 32767
    end

MoveFn_81C8EB2:: @ 81C8EB2
    panse_19 171, 192
    sprite 0x83E3F94, 3, 0, 0, 0, 1
    pause 6
    panse_19 171, 192
    sprite 0x83E3F94, 3, 24, -24, 0, 1
    pause 6
    panse_19 171, 192
    sprite 0x83E3F94, 3, -16, 16, 0, 1
    pause 6
    panse_19 171, 192
    sprite 0x83E3F94, 3, -24, -12, 0, 1
    pause 6
    panse_19 171, 192
    sprite 0x83E3F94, 3, 16, 16, 0, 1
    pause 6
    ret

Move_DEFENSE_CURL:: @ 81C8F1C
    loadsprite 10234
    panse_1C 213, 192, 18, 3
    createtask sub_80B8A74, 5, 0, 0
    createtask sub_80DF524, 5,
    wait
    sprite 0x83FF118, 2, 0, 6, 0, 1
    wait
    createtask sub_80B8A74, 5, 0, 1
    wait
    end

Move_PROTECT:: @ 81C8F55
    loadsprite 10280
    monbg 2
    monbgprio_28 0
    panse_1D 200, 192, 16
    sprite 0x83E3354, 2, 24, 0, 90
    wait
    clearmonbg 2
    end

Move_DETECT:: @ 81C8F72
    loadsprite 10071
    sprite 0x83E7B24, 2, 1, 2, 0, 9, 0
    wait
    createtask sub_80BA7F8, 10, 2, 1, 0, 9, 32767
    pause 18
    panse_19 202, 192
    sprite 0x83BF480, 13, 20, -20
    wait
    pause 10
    sprite 0x83E7B24, 2, 1, 2, 9, 0, 0
    createtask sub_80BA7F8, 10, 2, 2, 9, 0, 32767
    wait
    end

Move_FRUSTRATION:: @ 81C8FD0
    loadsprite 10135
    loadsprite 10087
    monbg 3
    setalpha 12, 8
    createtask sub_80766B8, 1,
    jumpvareq 7, 0, .L81C9004
    jumpvareq 7, 1, .L81C910A
    jumpvareq 7, 2, .L81C91D7
    jump .L81C9253
.L81C8FFF:
    wait
    clearmonbg 3
    blendoff
    end
.L81C9004:
    panse_19 164, 192
    createtask sub_8098B1C, 5, 0, 1, 0, 15, 1
    createtask sub_80BA7F8, 10, 2, 3, 0, 9, 31
    wait
    pause 20
    panse_19 187, 192
    sprite 0x83E3F04, 2, 0, 20, -28
    wait
    panse_19 187, 192
    sprite 0x83E3F04, 2, 0, 20, -28
    wait
    pause 10
    createtask sub_8099704, 5, 0, 16, 6144, 8, 0
    pause 5
    createtask sub_8098B1C, 5, 1, 4, 0, 30, 1
    sprite 0x83E7C08, 3, 0, 0, 1, 0
    panse_19 132, 63
    pause 5
    sprite 0x83E7C08, 3, 24, 8, 1, 0
    panse_19 132, 63
    pause 5
    sprite 0x83E7C08, 3, -24, -16, 1, 0
    panse_19 132, 63
    pause 5
    sprite 0x83E7C08, 3, 8, 4, 1, 0
    panse_19 132, 63
    pause 5
    sprite 0x83E7C08, 3, -16, 19, 1, 0
    panse_19 132, 63
    pause 5
    sprite 0x83E7C08, 3, 18, -18, 1, 0
    panse_19 132, 63
    wait
    createtask sub_80BA7F8, 10, 2, 3, 9, 0, 31
    jump .L81C8FFF
.L81C910A:
    panse_19 164, 192
    createtask sub_8098B1C, 5, 0, 1, 0, 15, 1
    createtask sub_80BA7F8, 10, 2, 3, 0, 9, 31
    wait
    pause 20
    panse_19 187, 192
    sprite 0x83E3F04, 2, 0, 20, -28
    wait
    pause 5
    createtask sub_80E0488, 5,
    pause 7
    panse_19 132, 63
    sprite 0x83E7C08, 3, 0, 8, 1, 1
    createtask sub_8098B1C, 5, 1, 4, 0, 6, 1
    pause 14
    panse_19 132, 63
    sprite 0x83E7C08, 3, 12, -6, 1, 1
    createtask sub_8098B1C, 5, 1, 4, 0, 6, 1
    pause 14
    panse_19 132, 63
    sprite 0x83E7C08, 3, -12, -6, 1, 1
    createtask sub_8098B1C, 5, 1, 4, 0, 6, 1
    wait
    createtask sub_80BA7F8, 10, 2, 3, 9, 0, 31
    jump .L81C8FFF
.L81C91D7:
    panse_19 187, 192
    sprite 0x83E3F04, 2, 0, 20, -28
    wait
    pause 5
    sprite 0x83D4E54, 2, 4, 4
    pause 6
    panse_19 132, 63
    sprite 0x83E7C08, 2, 10, 4, 1, 1
    createtask sub_8098B1C, 2, 1, 3, 0, 6, 1
    wait
    sprite 0x83D4E54, 2, 4, 4
    pause 6
    panse_19 132, 63
    sprite 0x83E7C08, 2, -10, -4, 1, 2
    createtask sub_8098B1C, 2, 1, 3, 0, 6, 1
    jump .L81C8FFF
.L81C9253:
    sprite 0x83FF2B0, 2, 20, -28
    wait
    pause 10
    sprite 0x83D4E54, 2, 10, 2
    pause 12
    panse_19 132, 63
    sprite 0x83E7C08, 2, 0, 0, 1, 2
    createtask sub_8098B1C, 2, 1, 1, 0, 6, 1
    jump .L81C8FFF

Move_SAFEGUARD:: @ 81C9297
    loadsprite 10244
    monbg 2
    setalpha 8, 8
    panse_19 218, 192
    sprite 0x83E44DC, 2,
    pause 4
    sprite 0x83E44DC, 2,
    pause 4
    sprite 0x83E44DC, 2,
    wait
    panse_19 95, 192
    createtask sub_80B9BDC, 2, 10, 0, 2, 0, 10, 32767
    wait
    clearmonbg 2
    blendoff
    end

Move_PAIN_SPLIT:: @ 81C92D9
    loadsprite 10239
    sprite 0x83FF370, 2, -8, -42, 0
    sprite 0x83FF370, 130, -8, -42, 1
    pause 10
    panse_19 187, 0
    createtask sub_80E0B00, 2, 0, 0
    createtask sub_80E0B00, 2, 1, 0
    wait
    sprite 0x83FF370, 2, -24, -42, 0
    sprite 0x83FF370, 130, -24, -42, 1
    pause 10
    panse_19 187, 0
    createtask sub_80E0B00, 2, 0, 1
    createtask sub_80E0B00, 2, 1, 1
    wait
    sprite 0x83FF370, 2, 8, -42, 0
    sprite 0x83FF370, 130, 8, -42, 1
    pause 10
    panse_19 187, 0
    createtask sub_80E0B00, 2, 0, 2
    createtask sub_80E0B00, 2, 1, 2
    end

Move_VICE_GRIP:: @ 81C9381
    loadsprite 10138
    loadsprite 10135
    monbg 3
    setalpha 12, 8
    panse_19 149, 63
    sprite 0x83E3E08, 2, 0
    sprite 0x83E3E08, 2, 1
    pause 9
    sprite 0x83E7C08, 1, 0, 0, 1, 2
    createtask sub_8098B1C, 5, 1, 2, 0, 5, 1
    wait
    clearmonbg 3
    blendoff
    end

Move_GUILLOTINE:: @ 81C93C9
    loadsprite 10138
    loadsprite 10135
    monbg 3
    setalpha 12, 8
    fadetobg_25 12, 13, 14
    waitbgfadein
    panse_19 149, 63
    sprite 0x83E3E48, 2, 0
    sprite 0x83E3E48, 2, 1
    createtask sub_80BA7F8, 10, 4, 2, 0, 16, 0
    pause 9
    createtask sub_8098B1C, 5, 1, 2, 0, 23, 1
    pause 46
    createtask sub_8098B1C, 5, 1, 4, 0, 8, 1
    sprite 0x83E7C08, 3, 0, 0, 1, 0
    sprite 0x83E7B3C, 2, 31, 3, 1, 0, 8, 0, 0
    panse_19 129, 63
    wait
    clearmonbg 3
    blendoff
    restorebg
    waitbgfadein
    end

Move_PAY_DAY:: @ 81C9455
    loadsprite 10100
    loadsprite 10135
    monbg 1
    monbgprio_28 1
    setalpha 12, 8
    panse_19 153, 192
    sprite 0x83E3D50, 2, 20, 0, 0, 0, 1152
    wait
    panse_19 167, 63
    sprite 0x83E7C08, 1, 0, 0, 1, 2
    sprite 0x83E3D68, 2,
    createtask sub_8098B1C, 2, 1, 1, 0, 6, 1
    wait
    clearmonbg 1
    blendoff
    end

Move_OUTRAGE:: @ 81C94A8
    loadsprite 10029
    panse_1C 164, 192, 8, 3
    createtask sub_80B9BDC, 2, 7, 2, 5, 3, 8, 430
    createtask sub_809907C, 2, 0, 12, 6, 5, 4
    pause 0
    sprite 0x83E772C, 130, 0, 0, 30, 1280, 0, 3
    pause 0
    sprite 0x83E772C, 130, 0, 0, 30, -1280, 0, 3
    pause 0
    sprite 0x83E772C, 130, 0, 0, 30, 0, 1280, 3
    pause 0
    sprite 0x83E772C, 130, 0, 0, 30, 0, -1280, 3
    pause 0
    createtask sub_8098B1C, 2, 1, 2, 0, 40, 1
    sprite 0x83E772C, 130, 0, 0, 30, 1280, 768, 3
    pause 0
    sprite 0x83E772C, 130, 0, 0, 30, -1280, 768, 3
    pause 0
    sprite 0x83E772C, 130, 0, 0, 30, 1280, -768, 3
    pause 0
    sprite 0x83E772C, 130, 0, 0, 30, -1280, -768, 3
    pause 0
    sprite 0x83E772C, 130, 0, 0, 30, 1280, 0, 3
    call MoveFn_81C95AF
    call MoveFn_81C95AF
    wait
    end

MoveFn_81C95AF:: @ 81C95AF
    pause 3
    sprite 0x83E772C, 130, 0, 0, 30, -1280, 0, 3
    pause 0
    sprite 0x83E772C, 130, 0, 0, 30, 0, 1280, 3
    pause 0
    sprite 0x83E772C, 130, 0, 0, 30, 0, -1280, 3
    pause 0
    sprite 0x83E772C, 130, 0, 0, 30, 1280, 768, 3
    pause 0
    sprite 0x83E772C, 130, 0, 0, 30, -1280, 768, 3
    pause 0
    sprite 0x83E772C, 130, 0, 0, 30, 1280, -768, 3
    pause 0
    sprite 0x83E772C, 130, 0, 0, 30, -1280, -768, 3
    ret

Move_SPARK:: @ 81C9643
    loadsprite 10135
    loadsprite 10011
    pause 0
    createtask sub_80B9BDC, 2, 3, -31, 1, 5, 5, 23551
    panse_19 112, 192
    sprite 0x83E5FC4, 0, 32, 24, 190, 12, 0, 1, 0
    pause 0
    sprite 0x83E5FC4, 0, 80, 24, 22, 12, 0, 1, 0
    sprite 0x83E5FC4, 0, 156, 24, 121, 13, 0, 1, 1
    pause 0
    createtask sub_80B9BDC, 2, 3, -31, 1, 0, 0, 23551
    pause 10
    createtask sub_80B9BDC, 2, 3, -31, 1, 5, 5, 23551
    panse_19 112, 192
    sprite 0x83E5FC4, 0, 100, 24, 60, 10, 0, 1, 0
    sprite 0x83E5FC4, 0, 170, 24, 42, 11, 0, 1, 1
    pause 0
    sprite 0x83E5FC4, 0, 238, 24, 165, 10, 0, 1, 1
    pause 0
    createtask sub_80B9BDC, 2, 3, -31, 1, 0, 0, 23551
    pause 20
    createtask sub_80B9BDC, 2, 3, -31, 1, 7, 7, 23551
    panse_19 112, 192
    sprite 0x83E6070, 4, 0, 0, 32, 12, 0, 20, 0, 0
    sprite 0x83E6070, 4, 0, 0, 32, 12, 64, 20, 1, 0
    sprite 0x83E6070, 4, 0, 0, 32, 12, 128, 20, 0, 0
    sprite 0x83E6070, 4, 0, 0, 32, 12, 192, 20, 2, 0
    sprite 0x83E6070, 4, 0, 0, 16, 12, 32, 20, 0, 0
    sprite 0x83E6070, 4, 0, 0, 16, 12, 96, 20, 1, 0
    sprite 0x83E6070, 4, 0, 0, 16, 12, 160, 20, 0, 0
    sprite 0x83E6070, 4, 0, 0, 16, 12, 224, 20, 2, 0
    pause 4
    wait
    createtask sub_80B9BDC, 2, 3, -31, 1, 0, 0, 23551
    sprite 0x83D4E54, 2, 4, 4
    pause 4
    panse_19 208, 63
    sprite 0x83E7C08, 130, 0, 0, 1, 2
    createtask sub_80989F8, 2, 1, 3, 0, 6, 1
    wait
    createtask sub_80B9BDC, 2, 4, -31, 2, 0, 6, 23551
    call MoveFn_81D58D4
    wait
    end

Move_ATTRACT:: @ 81C985A
    loadsprite 10216
    panse_1C 205, 192, 12, 3
    createtask sub_8099704, 5, 0, 12, 4096, 4, 0
    pause 15
    sprite 0x83E4218, 131, 20, -8
    wait
    panse_19 219, 63
    sprite 0x83E4230, 131, 160, -32
    sprite 0x83E4230, 131, -256, -40
    sprite 0x83E4230, 131, 128, -16
    sprite 0x83E4230, 131, 416, -38
    sprite 0x83E4230, 131, -128, -22
    sprite 0x83E4230, 131, -384, -31
    wait
    panse_1D 220, 0, 15
    createtask sub_80A9CE8, 5,
    sprite 0x83E4248, 40, 16, 256, 0
    sprite 0x83E4248, 40, 224, 240, 15
    sprite 0x83E4248, 40, 126, 272, 30
    sprite 0x83E4248, 40, 80, 224, 45
    sprite 0x83E4248, 40, 170, 272, 60
    sprite 0x83E4248, 40, 40, 256, 75
    sprite 0x83E4248, 40, 112, 256, 90
    sprite 0x83E4248, 40, 200, 272, 90
    pause 75
    createtask sub_80B9BDC, 2, 4, 4, 4, 0, 10, 28479
    end

Move_GROWTH:: @ 81C9953
    call MoveFn_81C9960
    wait
    call MoveFn_81C9960
    wait
    end

MoveFn_81C9960:: @ 81C9960
    createtask sub_80B9BDC, 2, 2, 0, 2, 0, 8, 32767
    panse_19 145, 192
    createtask sub_80998B0, 5, -3, -3, 16, 0, 0
    ret

Move_WHIRLWIND:: @ 81C9989
    loadsprite 10162
    sprite 0x83E6C84, 2, 0, -8, 1, 60, 0
    sprite 0x83E6C84, 2, 0, 0, 1, 60, 1
    sprite 0x83E6C84, 2, 0, 8, 1, 60, 2
    sprite 0x83E6C84, 2, 0, 16, 1, 60, 3
    sprite 0x83E6C84, 2, 0, 24, 1, 60, 4
    sprite 0x83E6C84, 2, 0, 32, 1, 60, 0
    pause 5
    panse_1C 128, 63, 10, 4
    createtask sub_8098B1C, 2, 1, 4, 0, 15, 1
    pause 29
    createtask sub_809907C, 2, 1, 12, 6, 1, 5
    pause 7
    panse_19 122, 63
    createtask sub_80995FC, 5, 1, 8
    wait
    end

Move_CONFUSE_RAY:: @ 81C9A31
    loadsprite 10013
    monbg 3
    fadetobg 2
    waitbgfadein
    createtask sub_80DD444, 2, -64, 63, 2, 0
    createtask sub_80B9E58, 2, 10013, 0, 6, 0, 14, 351
    sprite 0x83E75C4, 130, 28, 0, 288
    wait
    setalpha 8, 8
    panse_19 123, 63
    sprite 0x83E75DC, 130, 0, -16
    wait
    pause 0
    blendoff
    clearmonbg 3
    restorebg
    waitbgfadein
    end

Move_LOCK_ON:: @ 81C9A84
    loadsprite 10014
    sprite 0x83E3518, 40,
    sprite 0x83E3530, 40, 1
    sprite 0x83E3530, 40, 2
    sprite 0x83E3530, 40, 3
    sprite 0x83E3530, 40, 4
    pause 120
    setvar 7, -1
    wait
    end

Move_MEAN_LOOK:: @ 81C9ABA
    loadsprite 10187
    monbg 3
    panse_19 182, 192
    sprite 0x83E7B24, 2, 1, 1, 0, 16, 0
    panse_1C 189, 63, 15, 4
    panse_1D 185, 63, 85
    sprite 0x83FEEE4, 2,
    pause 120
    sprite 0x83E7B24, 2, 1, 2, 16, 0, 0
    pause 30
    clearmonbg 3
    wait
    end

Move_ROCK_THROW:: @ 81C9AFF
    loadsprite 10058
    sprite 0x83E7B88, 130, 6, 1, 15, 1
    sprite 0x83E73B4, 130, 0, 1, 0, 0
    panse_19 124, 63
    pause 6
    sprite 0x83E73B4, 130, 19, 1, 10, 0
    panse_19 124, 63
    pause 6
    sprite 0x83E73B4, 130, -23, 2, -10, 0
    panse_19 124, 63
    createtask sub_80989F8, 2, 1, 0, 5, 20, 1
    pause 6
    sprite 0x83E73B4, 130, -15, 1, -10, 0
    panse_19 124, 63
    pause 6
    sprite 0x83E73B4, 130, 23, 2, 10, 0
    panse_19 124, 63
    wait
    end

Move_ROCK_SLIDE:: @ 81C9B8B
    loadsprite 10058
    monbg 3
    sprite 0x83E7B88, 2, 7, 1, 11, 1
    sprite 0x83E73B4, 130, -5, 1, -5, 1
    panse_19 124, 63
    pause 2
    sprite 0x83E73B4, 130, 5, 0, 6, 1
    panse_19 124, 63
    pause 2
    sprite 0x83E73B4, 130, 19, 1, 10, 1
    panse_19 124, 63
    pause 2
    sprite 0x83E73B4, 130, -23, 2, -10, 1
    panse_19 124, 63
    createtask sub_80989F8, 2, 1, 0, 5, 50, 1
    createtask sub_80989F8, 2, 3, 0, 5, 50, 1
    pause 2
    call MoveFn_81C9C23
    call MoveFn_81C9C23
    wait
    clearmonbg 3
    end

MoveFn_81C9C23:: @ 81C9C23
    sprite 0x83E73B4, 130, -20, 0, -10, 1
    panse_19 124, 63
    pause 2
    sprite 0x83E73B4, 130, 28, 1, 10, 1
    panse_19 124, 63
    pause 2
    sprite 0x83E73B4, 130, -10, 1, -5, 1
    panse_19 124, 63
    pause 2
    sprite 0x83E73B4, 130, 10, 0, 6, 1
    panse_19 124, 63
    pause 2
    sprite 0x83E73B4, 130, 24, 1, 10, 1
    panse_19 124, 63
    pause 2
    sprite 0x83E73B4, 130, -32, 2, -10, 1
    panse_19 124, 63
    pause 2
    sprite 0x83E73B4, 130, -20, 0, -10, 1
    panse_19 124, 63
    pause 2
    sprite 0x83E73B4, 130, 30, 2, 10, 1
    panse_19 124, 63
    pause 2
    ret

Move_THIEF:: @ 81C9CCC
    loadsprite 10135
    monbg 1
    pause 1
    fadetobg 1
    waitbgfadein
    setalpha 12, 8
    sprite 0x83D4E54, 2, 6, 4
    pause 6
    panse_19 115, 63
    sprite 0x83E7C08, 2, 0, 0, 1, 2
    createtask sub_8098B1C, 2, 1, 1, 0, 8, 1
    wait
    pause 20
    clearmonbg 1
    blendoff
    restorebg
    waitbgfadein
    end

Move_BUBBLE_BEAM:: @ 81C9D13
    loadsprite 10146
    loadsprite 10155
    monbg 1
    monbgprio_28 1
    setalpha 12, 8
    pause 1
    call MoveFn_81C9D4D
    createtask sub_8099704, 5, 0, 3, 3072, 8, 1
    call MoveFn_81C9D4D
    call MoveFn_81C9D4D
    wait
    call MoveFn_81D57CC
    wait
    clearmonbg 1
    blendoff
    end

MoveFn_81C9D4D:: @ 81C9D4D
    sprite 0x83E58E0, 2, 18, 0, 35, 70, 0, 256, 50
    panse_19 117, 192
    pause 3
    sprite 0x83E58E0, 2, 18, 0, 20, 40, -10, 256, 50
    panse_19 117, 192
    pause 3
    sprite 0x83E58E0, 2, 18, 0, 10, -60, 0, 256, 50
    panse_19 117, 192
    pause 3
    sprite 0x83E58E0, 2, 18, 0, 15, -15, 10, 256, 50
    panse_19 117, 192
    pause 3
    sprite 0x83E58E0, 2, 18, 0, 30, 10, -10, 256, 50
    panse_19 117, 192
    pause 3
    sprite 0x83E58E0, 2, 18, 0, 25, -30, 10, 256, 50
    panse_19 117, 192
    pause 3
    ret

Move_ICY_WIND:: @ 81C9DF0
    loadsprite 10141
    loadsprite 10142
    monbg 3
    createtask sub_80BA7F8, 10, 11, 4, 0, 4, 0
    fadetobg 15
    waitbgfadeout
    panse_19 130, 0
    waitbgfadein
    wait
    panse_1B 125, 192, 63, 2, 0
    call MoveFn_81C9E48
    pause 5
    call MoveFn_81C9E48
    panse_19 126, 63
    pause 55
    call MoveFn_81D55E2
    wait
    clearmonbg 3
    restorebg
    waitbgfadeout
    createtask sub_80BA7F8, 10, 11, 4, 4, 0, 0
    waitbgfadein
    end

MoveFn_81C9E48:: @ 81C9E48
    sprite 0x83E6410, 168, 0, 0, 0, 0, 72, 1
    pause 5
    sprite 0x83E6410, 168, 0, 10, 0, 10, 72, 1
    pause 5
    sprite 0x83E6410, 168, 0, -10, 0, -10, 72, 1
    pause 5
    sprite 0x83E6410, 168, 0, 15, 0, 15, 72, 1
    pause 5
    sprite 0x83E6410, 168, 0, -5, 0, -5, 72, 1
    ret

Move_SMOKESCREEN:: @ 81C9EB0
    loadsprite 10016
    loadsprite 10017
    panse_19 128, 192
    sprite 0x83FEE30, 130, 20, 0, 0, 0, 35, -25
    wait
    createtask sub_80DE34C, 2,
    pause 2
    panse_19 152, 63
    sprite 0x83FEE18, 132, 0, -12, 104, 0, 75
    sprite 0x83FEE18, 132, 0, -12, 72, 1, 75
    sprite 0x83FEE18, 132, 0, -6, 56, 1, 75
    sprite 0x83FEE18, 132, 0, -6, 88, 0, 75
    sprite 0x83FEE18, 132, 0, 0, 56, 0, 75
    sprite 0x83FEE18, 132, 0, 0, 88, 1, 75
    sprite 0x83FEE18, 132, 0, 6, 72, 0, 75
    sprite 0x83FEE18, 132, 0, 6, 104, 1, 75
    sprite 0x83FEE18, 132, 0, 12, 72, 0, 75
    sprite 0x83FEE18, 132, 0, 12, 56, 1, 75
    sprite 0x83FEE18, 132, 0, 18, 80, 0, 75
    sprite 0x83FEE18, 132, 0, 18, 72, 1, 75
    wait
    end

Move_CONVERSION:: @ 81C9FA9
    loadsprite 10018
    monbg 2
    monbgprio_28 0
    setalpha 16, 0
    pause 0
    panse_19 199, 192
    sprite 0x83E36EC, 2, -24, -24
    pause 3
    sprite 0x83E36EC, 2, -8, -24
    pause 3
    sprite 0x83E36EC, 2, 8, -24
    pause 3
    sprite 0x83E36EC, 2, 24, -24
    pause 3
    panse_19 199, 192
    sprite 0x83E36EC, 2, -24, -8
    pause 3
    sprite 0x83E36EC, 2, -8, -8
    pause 3
    sprite 0x83E36EC, 2, 8, -8
    pause 3
    sprite 0x83E36EC, 2, 24, -8
    pause 3
    panse_19 199, 192
    sprite 0x83E36EC, 2, -24, 8
    pause 3
    sprite 0x83E36EC, 2, -8, 8
    pause 3
    sprite 0x83E36EC, 2, 8, 8
    pause 3
    sprite 0x83E36EC, 2, 24, 8
    pause 3
    panse_19 199, 192
    sprite 0x83E36EC, 2, -24, 24
    pause 3
    sprite 0x83E36EC, 2, -8, 24
    pause 3
    sprite 0x83E36EC, 2, 8, 24
    pause 3
    sprite 0x83E36EC, 2, 24, 24
    pause 20
    panse_19 201, 192
    createtask sub_80B9F6C, 2, 10018, 1, 1, 14335, 12, 0, 0
    pause 6
    createtask sub_80A5CD4, 5,
    wait
    pause 1
    clearmonbg 2
    blendoff
    end

Move_CONVERSION_2:: @ 81CA0BE
    loadsprite 10018
    monbg 3
    monbgprio_2A 1
    setalpha 0, 16
    pause 0
    panse_19 201, 63
    sprite 0x83E371C, 2, -24, -24, 60
    sprite 0x83E371C, 2, -8, -24, 65
    sprite 0x83E371C, 2, 8, -24, 70
    sprite 0x83E371C, 2, 24, -24, 75
    sprite 0x83E371C, 2, -24, -8, 80
    sprite 0x83E371C, 2, -8, -8, 85
    sprite 0x83E371C, 2, 8, -8, 90
    sprite 0x83E371C, 2, 24, -8, 95
    sprite 0x83E371C, 2, -24, 8, 100
    sprite 0x83E371C, 2, -8, 8, 105
    sprite 0x83E371C, 2, 8, 8, 110
    sprite 0x83E371C, 2, 24, 8, 115
    sprite 0x83E371C, 2, -24, 24, 120
    sprite 0x83E371C, 2, -8, 24, 125
    sprite 0x83E371C, 2, 8, 24, 130
    sprite 0x83E371C, 2, 24, 24, 135
    createtask sub_80A5DE0, 5,
    pause 60
    panse_19 199, 63
    pause 10
    panse_19 199, 63
    pause 10
    panse_19 199, 63
    pause 10
    panse_19 199, 63
    pause 10
    panse_19 199, 63
    pause 10
    panse_19 199, 63
    pause 10
    panse_19 199, 63
    pause 10
    panse_19 199, 63
    wait
    clearmonbg 3
    blendoff
    end

Move_ROLLING_KICK:: @ 81CA1DA
    loadsprite 10143
    loadsprite 10135
    monbg 1
    setalpha 12, 8
    createtask sub_809907C, 2, 0, 18, 6, 1, 4
    panse_19 128, 192
    pause 6
    panse_19 128, 192
    wait
    sprite 0x83D4E9C, 2, 0, 20, 0, 0, 4
    sprite 0x83E6758, 2, -24, 0, 48, 10, 160, 0
    pause 5
    panse_19 116, 63
    sprite 0x83E7C08, 2, -8, 0, 1, 2
    createtask sub_80989F8, 2, 1, 5, 0, 6, 1
    wait
    sprite 0x83D4E84, 2, 0, 1, 8
    clearmonbg 1
    blendoff
    end

Move_HEADBUTT:: @ 81CA25D
    loadsprite 10135
    sprite 0x83E3550, 2, 0
    panse_19 155, 192
    wait
    pause 2
    sprite 0x83E3550, 2, 1
    wait
    createtask sub_8098CD0, 2, 0, 2, 0, 4, 1
    createtask sub_80989F8, 2, 1, 5, 0, 6, 1
    sprite 0x83E3550, 2, 2
    sprite 0x83E7C98, 131, 0, 0, 1, 1
    panse_19 116, 63
    wait
    end

Move_HORN_ATTACK:: @ 81CA2BA
    loadsprite 10135
    loadsprite 10020
    sprite 0x83E3550, 2, 0
    panse_19 155, 192
    wait
    pause 2
    sprite 0x83E3550, 2, 1
    sprite 0x83E37BC, 132, 0, 0, 10
    wait
    createtask sub_8098CD0, 2, 0, 2, 0, 4, 1
    createtask sub_80989F8, 2, 1, 5, 0, 6, 1
    sprite 0x83E3550, 2, 2
    sprite 0x83E7C98, 131, 0, 0, 1, 1
    panse_19 159, 63
    wait
    end

Move_FURY_ATTACK:: @ 81CA327
    loadsprite 10135
    loadsprite 10020
    createtask sub_8099980, 2, 4, 256, 0, 2
    ifelse .L81CA358, .L81CA37E
.L81CA345:
    createtask sub_80989F8, 2, 1, 5, 0, 6, 1
    wait
    end
.L81CA358:
    sprite 0x83E37BC, 132, 8, 8, 10
    wait
    sprite 0x83E7C98, 131, 0, 0, 1, 1
    panse_19 159, 63
    jump .L81CA345
.L81CA37E:
    sprite 0x83E37BC, 132, -8, -8, 10
    wait
    sprite 0x83E7C98, 131, 0, 0, 1, 1
    panse_19 159, 63
    jump .L81CA345

Move_HORN_DRILL:: @ 81CA3A4
    loadsprite 10135
    loadsprite 10020
    jumpunkcond .L81CA50A
    fadetobg 7
    waitbgfadeout
    createtask sub_80BB82C, 5, -2304, 768, 1, -1
.L81CA3C1:
    waitbgfadein
    setalpha 12, 8
    sprite 0x83E3550, 2, 0
    panse_19 155, 192
    wait
    pause 2
    sprite 0x83E3550, 2, 1
    sprite 0x83E37BC, 132, 0, 0, 12
    wait
    playse 20
    createtask sub_8098CD0, 2, 0, 2, 0, 40, 1
    createtask sub_8098CD0, 2, 1, 10, 0, 40, 1
    sprite 0x83E7C98, 131, 0, 0, 1, 3
    panse_19 159, 63
    pause 4
    sprite 0x83E7C98, 131, 0, 2, 1, 3
    panse_19 159, 63
    pause 4
    sprite 0x83E7C98, 131, -4, 3, 1, 3
    panse_19 159, 63
    pause 4
    sprite 0x83E7C98, 131, -8, -5, 1, 3
    panse_19 159, 63
    pause 4
    sprite 0x83E7C98, 131, 4, -12, 1, 3
    panse_19 159, 63
    pause 4
    sprite 0x83E7C98, 131, 16, 0, 1, 3
    panse_19 159, 63
    pause 4
    sprite 0x83E7C98, 131, 5, 18, 1, 3
    panse_19 159, 63
    pause 4
    sprite 0x83E7C98, 131, -17, 12, 1, 2
    panse_19 159, 63
    pause 4
    sprite 0x83E7C98, 131, -21, -15, 1, 2
    panse_19 159, 63
    pause 4
    sprite 0x83E7C98, 131, 8, -27, 1, 2
    panse_19 159, 63
    pause 4
    sprite 0x83E7C98, 131, 32, 0, 1, 2
    panse_19 159, 63
    pause 4
    sprite 0x83E3550, 2, 2
    wait
    restorebg
    waitbgfadeout
    setvar 7, -1
    waitbgfadein
    end
.L81CA50A:
    fadetobg 8
    waitbgfadeout
    createtask sub_80BB82C, 5, 2304, 768, 0, -1
    jump .L81CA3C1

Move_THRASH:: @ 81CA521
    loadsprite 10135
    loadsprite 10143
    createtask sub_80A8638, 2,
    createtask sub_80A86A4, 2,
    sprite 0x83E6728, 131, 1, 10, 0
    createtask sub_8098CD0, 2, 1, 4, 0, 7, 1
    panse_19 132, 63
    pause 28
    sprite 0x83E6728, 131, 1, 10, 1
    createtask sub_8098CD0, 2, 1, 4, 0, 7, 1
    panse_19 116, 63
    pause 28
    sprite 0x83E6728, 131, 1, 10, 3
    createtask sub_8098CD0, 2, 1, 8, 0, 16, 1
    panse_19 134, 63
    end

Move_SING:: @ 81CA5A0
    loadsprite 10072
    monbg 3
    createtask sub_80A65E8, 2,
    wait
    panse_1B 165, 192, 63, 2, 0
    sprite 0x83E3880, 130, 7, 0, 12
    pause 5
    sprite 0x83E3880, 130, 6, 1, 12
    pause 5
    sprite 0x83E3880, 130, 1, 2, 12
    pause 5
    sprite 0x83E3880, 130, 2, 3, 12
    pause 5
    sprite 0x83E3880, 130, 3, 0, 12
    pause 4
    sprite 0x83E3880, 130, 2, 1, 12
    pause 4
    sprite 0x83E3880, 130, 5, 2, 12
    pause 4
    sprite 0x83E3880, 130, 6, 3, 12
    pause 4
    sprite 0x83E3880, 130, 2, 0, 12
    pause 4
    sprite 0x83E3880, 130, 2, 1, 12
    pause 4
    sprite 0x83E3880, 130, 1, 2, 12
    pause 4
    sprite 0x83E3880, 130, 5, 3, 12
    pause 4
    wait
    clearmonbg 3
    createtask sub_80A66A0, 2,
    wait
    end

Move_LOW_KICK:: @ 81CA674
    loadsprite 10143
    loadsprite 10135
    sprite 0x83D4E9C, 2, 0, 20, 0, 0, 4
    sprite 0x83E6758, 130, -24, 28, 40, 8, 160, 0
    pause 4
    sprite 0x83E7C08, 130, -8, 8, 1, 2
    createtask sub_8099980, 2, 6, 384, 1, 2
    panse_19 116, 63
    wait
    sprite 0x83D4E84, 2, 0, 1, 4
    end

Move_EARTHQUAKE:: @ 81CA6D1
    createtask ma_shake, 5, 5, 10, 50
    createtask ma_shake, 5, 4, 10, 50
    panse_19 227, 0
    pause 10
    sprite 0x83E7B3C, 2, 1, 3, 1, 0, 14, 32767, 14
    pause 16
    sprite 0x83E7B3C, 2, 1, 3, 1, 0, 14, 32767, 14
    end

Move_FISSURE:: @ 81CA71E
    loadsprite 10074
    createtask ma_shake, 3, 5, 10, 50
    createtask ma_shake, 3, 1, 10, 50
    panse_19 227, 63
    pause 8
    call MoveFn_81CA79F
    pause 15
    sprite 0x83E7B3C, 2, 1, 3, 1, 0, 14, 32767, 14
    pause 15
    call MoveFn_81CA7F0
    pause 15
    sprite 0x83E7B3C, 2, 1, 3, 1, 0, 14, 32767, 14
    pause 15
    call MoveFn_81CA79F
    pause 50
    fadetobg 21
    waitbgfadeout
    createtask sub_80B9800, 5, 1, 5, -1
    waitbgfadein
    pause 40
    restorebg
    waitbgfadeout
    setvar 7, -1
    waitbgfadein
    end

MoveFn_81CA79F:: @ 81CA79F
    sprite 0x83E7AAC, 130, 1, 0, 12, -48, -16, 24
    sprite 0x83E7AAC, 130, 1, 0, 16, -16, -10, 24
    sprite 0x83E7AAC, 130, 1, 1, 14, -52, -18, 24
    sprite 0x83E7AAC, 130, 1, 1, 12, -32, -16, 24
    panse_19 168, 63
    ret

MoveFn_81CA7F0:: @ 81CA7F0
    sprite 0x83E7AAC, 130, 1, 0, 12, -24, -16, 24
    sprite 0x83E7AAC, 130, 1, 0, 16, -38, -10, 24
    sprite 0x83E7AAC, 130, 1, 1, 14, -20, -18, 24
    sprite 0x83E7AAC, 130, 1, 1, 12, -36, -16, 24
    panse_19 168, 63
    ret

Move_DIG:: @ 81CA841
    ifelse .L81CA84B, .L81CA8A6
.L81CA84A:
    end
.L81CA84B:
    loadsprite 10074
    loadsprite 10281
    sprite 0x83E7AC4, 1, 0, 0, 180
    sprite 0x83E7AC4, 1, 0, 1, 180
    monbg_22 0
    pause 1
    createtask sub_80B8E94, 2, 0
    pause 6
    call MoveFn_81CA90A
    call MoveFn_81CA90A
    call MoveFn_81CA90A
    call MoveFn_81CA90A
    call MoveFn_81CA90A
    wait
    clearmonbg_23 0
    pause 1
    createtask sub_80B8E94, 2, 1
    jump .L81CA84A
.L81CA8A6:
    loadsprite 10135
    loadsprite 10281
    createtask sub_80B90EC, 2, 0
    wait
    monbg 0
    sprite 0x83E7AC4, 1, 0, 0, 48
    sprite 0x83E7AC4, 1, 0, 1, 48
    pause 1
    createtask sub_80B90EC, 2, 1
    pause 16
    sprite 0x83E7C08, 2, -8, 0, 1, 2
    createtask sub_80989F8, 2, 1, 5, 0, 6, 1
    panse_19 134, 192
    clearmonbg 0
    jump .L81CA84A

MoveFn_81CA90A:: @ 81CA90A
    sprite 0x83E7AAC, 2, 0, 0, 12, 4, -16, 18
    sprite 0x83E7AAC, 2, 0, 0, 16, 4, -10, 18
    sprite 0x83E7AAC, 2, 0, 1, 14, 4, -18, 18
    sprite 0x83E7AAC, 2, 0, 1, 12, 4, -16, 18
    panse_19 168, 192
    pause 32
    ret

Move_MEDITATE:: @ 81CA95D
    call MoveFn_81D59BB
    createtask sub_80B3418, 2,
    panse_19 155, 192
    pause 16
    panse_19 145, 192
    wait
    call MoveFn_81D59C7
    end

Move_AGILITY:: @ 81CA97A
    monbg 2
    setalpha 12, 8
    createtask sub_809907C, 2, 0, 24, 6, 4, 4
    createtask sub_80BAB98, 2, 0, 4, 7, 10
    panse_19 128, 192
    pause 12
    panse_19 128, 192
    pause 12
    panse_19 128, 192
    pause 12
    panse_19 128, 192
    pause 12
    panse_19 128, 192
    pause 12
    wait
    clearmonbg 2
    blendoff
    pause 1
    end

Move_QUICK_ATTACK:: @ 81CA9C4
    loadsprite 10135
    monbg 2
    setalpha 12, 8
    createtask sub_809907C, 2, 0, 24, 6, 1, 5
    createtask sub_80BAB98, 2, 0, 4, 7, 3
    panse_19 136, 192
    pause 4
    createtask sub_80989F8, 2, 1, 5, 0, 6, 1
    sprite 0x83E7C08, 132, 0, 0, 1, 1
    panse_19 116, 63
    wait
    clearmonbg 2
    blendoff
    wait
    end

Move_RAGE:: @ 81CAA1C
    loadsprite 10135
    loadsprite 10087
    monbg 1
    setalpha 12, 8
    createtask sub_807616C, 3, 0, 31, 10, 0, 2
    sprite 0x83E3F04, 2, 0, -20, -28
    panse_19 187, 192
    pause 20
    sprite 0x83E3F04, 2, 0, 20, -28
    panse_19 187, 192
    wait
    sprite 0x83D4E54, 2, 4, 6
    pause 4
    sprite 0x83E7C08, 2, 0, 0, 1, 2
    createtask sub_8099BD4, 2, 1, 1, 10, 1, 0
    panse_19 116, 63
    wait
    clearmonbg 1
    end

Move_TELEPORT:: @ 81CAA92
    call MoveFn_81D59BB
    createtask sub_80B3480, 2,
    panse_19 196, 192
    pause 15
    call MoveFn_81D59C7
    wait
    end

Move_DOUBLE_TEAM:: @ 81CAAAB
    monbg 2
    setalpha 12, 8
    createtask sub_80A63B4, 2,
    panse_19 128, 192
    pause 32
    panse_19 128, 192
    pause 24
    panse_19 128, 192
    pause 16
    panse_19 128, 192
    pause 8
    panse_19 128, 192
    pause 8
    panse_19 128, 192
    pause 8
    panse_19 128, 192
    pause 8
    panse_19 128, 192
    pause 8
    panse_19 128, 192
    wait
    clearmonbg 2
    blendoff
    pause 1
    end

Move_MINIMIZE:: @ 81CAAF2
    setalpha 10, 8
    createtask sub_80A8074, 2,
    panse_1C 197, 192, 34, 3
    wait
    blendoff
    end

Move_METRONOME:: @ 81CAB05
    loadsprite 10064
    loadsprite 10209
    sprite 0x83E398C, 11, 0, 100
    panse_19 179, 192
    pause 6
    sprite 0x83E3A34, 12, 0
    pause 24
    panse_1C 160, 192, 22, 3
    wait
    end

Move_SKULL_BASH:: @ 81CAB2F
    ifelse .L81CAB39, .L81CAB86
.L81CAB38:
    end
.L81CAB39:
    call MoveFn_81CAB49
    call MoveFn_81CAB49
    wait
    jump .L81CAB38

MoveFn_81CAB49:: @ 81CAB49
    sprite 0x83D4EB4, 2, 0, -24, 0, 0, 10, 0
    panse_19 145, 192
    wait
    createtask sub_8099980, 2, 16, 96, 0, 2
    wait
    sprite 0x83D4EB4, 2, 0, 24, 0, 0, 10, 1
    wait
    ret

.L81CAB86:
    loadsprite 10135
    createtask sub_80A5694, 2, 0
    panse_19 145, 192
    wait
    playse 20
    sprite 0x83E7B3C, 2, 1, 3, 1, 0, 14, 32767, 14
    createtask sub_8098CD0, 2, 0, 2, 0, 40, 1
    createtask sub_8098CD0, 2, 1, 10, 0, 40, 1
    sprite 0x83E7C98, 132, 0, 0, 1, 0
    panse_1C 134, 63, 8, 3
    wait
    createtask sub_80A5694, 2, 1
    jump .L81CAB38

Move_AMNESIA:: @ 81CABF5
    loadsprite 10093
    call MoveFn_81D59BB
    pause 8
    sprite 0x83E6FF4, 20,
    panse_19 179, 192
    pause 54
    panse_1C 179, 192, 16, 3
    wait
    call MoveFn_81D59C7
    end

Move_KINESIS:: @ 81CAC19
    loadsprite 10075
    loadsprite 10097
    panse_19 182, 192
    call MoveFn_81D59BB
    sprite 0x83E6F8C, 20,
    sprite 0x83E3BBC, 19, 32, -8, 0
    sprite 0x83E3BBC, 19, 32, 16, 1
    panse_1C 189, 192, 21, 2
    pause 60
    panse_19 169, 192
    pause 30
    panse_1C 169, 192, 20, 2
    pause 70
    panse_19 187, 192
    wait
    call MoveFn_81D59C7
    end

Move_GLARE:: @ 81CAC6A
    loadsprite 10248
    loadsprite 10218
    createtask sub_80E21CC, 5, 0
    panse_19 193, 192
    wait
    createtask sub_80BA7F8, 5, 1, 0, 0, 16, 0
    wait
    sprite 0x83E42FC, 0, -16, -8
    sprite 0x83E42FC, 0, 16, -8
    createtask sub_80A9F10, 5,
    panse_19 185, 192
    pause 2
    createtask sub_80ADAD8, 3, 20, 1, 0
    wait
    createtask sub_80BA7F8, 5, 1, 0, 16, 0, 0
    end

Move_BARRAGE:: @ 81CACD3
    loadsprite 10254
    createtask sub_80E2518, 3,
    panse_19 186, 192
    pause 24
    sprite 0x83E7B88, 2, 8, 1, 40, 1
    createtask sub_80989F8, 3, 1, 0, 4, 20, 1
    createtask sub_80989F8, 3, 3, 0, 4, 20, 1
    panse_1C 207, 63, 8, 2
    end

Move_SKY_ATTACK:: @ 81CAD1B
    ifelse .L81CAD25, .L81CAE2E
.L81CAD24:
    end
.L81CAD25:
    monbg 3
    setalpha 12, 11
    createtask sub_80BB978, 5, 7
    jumpvareq 7, 0, .L81CAD40
    jump .L81CADB7
.L81CAD40:
    createtask sub_80BA7F8, 10, 27, 1, 0, 12, 0
    wait
    pause 12
    createtask sub_80BA7F8, 10, 2, 1, 8, 0, 0
    createtask ma_shake, 5, 0, 2, 16
    panse_1C 232, 192, 4, 8
    createtask sub_80BA7F8, 10, 2, 1, 0, 15, 32767
    pause 20
    createtask sub_80BA7F8, 10, 2, 1, 15, 0, 32767
    wait
    createtask sub_80BA7F8, 10, 25, 1, 8, 0, 0
    wait
    clearmonbg 3
    blendoff
    jump .L81CAD24
.L81CADB7:
    createtask sub_80BA83C, 10, 1, 1, 0, 12, 0
    wait
    pause 12
    createtask sub_80BA7F8, 10, 2, 1, 8, 0, 0
    createtask ma_shake, 5, 0, 2, 16
    panse_19 232, 192
    pause 8
    createtask sub_80BA7F8, 10, 2, 1, 0, 15, 32767
    pause 20
    createtask sub_80BA7F8, 10, 2, 1, 15, 0, 32767
    wait
    createtask sub_80BA83C, 10, 4, 1, 8, 0, 0
    wait
    clearmonbg 3
    blendoff
    jump .L81CAD24
.L81CAE2E:
    loadsprite 10135
    loadsprite 10284
    call MoveFn_81D59CF
    monbg 0
    createtask sub_80BA7F8, 10, 2, 0, 0, 16, 32767
    pause 4
    createtask sub_80B78E0, 5, 0
    wait
    createtask sub_80DD410, 5, 231, -64
    sprite 0x83E6DC4, 130,
    pause 14
    createtask sub_8098B1C, 2, 1, 10, 0, 18, 1
    createtask sub_80DD3DC, 5, 134, 63
    pause 20
    createtask sub_80B79DC, 5, 1
    pause 2
    createtask sub_80BA7F8, 10, 2, 0, 15, 0, 32767
    wait
    clearmonbg 0
    call MoveFn_81D59FF
    jump .L81CAD24

Move_FLASH:: @ 81CAEB3
    panse_19 185, 192
    createtask sub_80BB660, 2,
    wait
    end

Move_SPLASH:: @ 81CAEC0
    createtask sub_80A8338, 2, 0, 3
    pause 8
    panse_1C 160, 192, 38, 3
    wait
    end

Move_ACID_ARMOR:: @ 81CAED5
    monbg 0
    setalpha 15, 0
    createtask sub_80E12F8, 2, 0
    panse_19 211, 192
    wait
    blendoff
    clearmonbg 0
    pause 1
    end

Move_SHARPEN:: @ 81CAEEE
    loadsprite 10185
    sprite 0x83E365C, 2,
    wait
    end

Move_SUPER_FANG:: @ 81CAEFA
    loadsprite 10192
    createtask sub_8098CD0, 2, 0, 1, 0, 20, 1
    panse_19 164, 192
    wait
    createtask sub_8098CD0, 2, 0, 3, 0, 48, 1
    createtask sub_807616C, 2, 0, 1247, 12, 4, 1
    wait
    pause 20
    sprite 0x83D4E54, 2, 4, 4
    pause 4
    sprite 0x83E37EC, 130,
    panse_19 154, 63
    pause 8
    sprite 0x83E7B3C, 2, 1, 3, 1, 2143, 14, 32767, 14
    createtask sub_80989F8, 2, 1, 0, 7, 12, 1
    wait
    blendoff
    end

Move_SLASH:: @ 81CAF7B
    loadsprite 10183
    sprite 0x83E35A4, 130, 1, -8, 0
    panse_19 129, 63
    pause 4
    sprite 0x83E35A4, 130, 1, 8, 0
    createtask sub_8098B1C, 2, 1, 4, 0, 18, 1
    panse_19 129, 63
    wait
    end

Move_STRUGGLE:: @ 81CAFB5
    loadsprite 10135
    loadsprite 10215
    monbg 1
    setalpha 12, 8
    createtask sub_8098CD0, 2, 0, 3, 0, 12, 4
    sprite 0x83E43F8, 2, 0, 0, 2
    sprite 0x83E43F8, 2, 0, 1, 2
    panse_1C 155, 192, 12, 4
    wait
    sprite 0x83E7C08, 3, 0, 0, 1, 2
    createtask sub_8098CD0, 2, 1, 3, 0, 6, 1
    panse_19 134, 63
    wait
    clearmonbg 1
    blendoff
    end

Move_SKETCH:: @ 81CB01B
    loadsprite 10002
    monbg 1
    createtask sub_80A8874, 2,
    sprite 0x83E3F4C, 130,
    wait
    clearmonbg 1
    createtask sub_80A8338, 2, 0, 2
    panse_1C 160, 192, 38, 2
    end

Move_NIGHTMARE:: @ 81CB043
    fadetobg 2
    waitbgfadein
    jumpunkcond .L81CB06F
    monbg 3
    createtask sub_80B58AC, 2,
    createtask sub_80989F8, 2, 1, 3, 0, 40, 1
    panse_19 114, 63
    wait
    clearmonbg 3
    restorebg
    waitbgfadein
    end
.L81CB06F:
    createtask sub_807616C, 2, 0, 32767, 10, 2, 1
    createtask sub_80989F8, 2, 0, 3, 0, 32, 1
    panse_19 114, 63
    wait
    restorebg
    waitbgfadein
    end

Move_FLAIL:: @ 81CB099
    loadsprite 10135
    monbg 1
    setalpha 12, 8
    createtask sub_80E0850, 2, 0
    panse_1C 155, 192, 8, 2
    wait
    sprite 0x83E7C50, 131, 1, 3
    createtask sub_8099BD4, 2, 0, 1, 30, 1, 0
    panse_19 134, 63
    wait
    clearmonbg 1
    blendoff
    end

Move_SPITE:: @ 81CB0D6
    fadetobg 2
    panse_19 182, 192
    waitbgfadein
    monbg 3
    createtask sub_80B9BDC, 2, 2, 2, 6, 0, 8, 32767
    createtask sub_80B5AAC, 2,
    panse_1C 182, 63, 20, 3
    wait
    restorebg
    waitbgfadein
    clearmonbg 1
    end

Move_MACH_PUNCH:: @ 81CB105
    loadsprite 10135
    loadsprite 10143
    monbg 2
    createtask sub_80BB920, 2,
    jumpvareq 7, 1, .L81CB186
    fadetobg 9
.L81CB11E:
    waitbgfadeout
    createtask sub_80BB82C, 5, -2304, 0, 1, -1
    waitbgfadein
    pause 0
    setalpha 9, 8
    createtask sub_8077030, 2, 28968, 10
    panse_19 136, 192
    pause 6
    sprite 0x83E7C08, 131, 0, 0, 1, 1
    sprite 0x83E6710, 132, 0, 0, 8, 1, 0
    panse_19 132, 63
    createtask sub_80989F8, 2, 1, 3, 0, 6, 1
    wait
    clearmonbg 2
    blendoff
    restorebg
    waitbgfadeout
    setvar 7, -1
    waitbgfadein
    end
.L81CB186:
    fadetobg 10
    jump .L81CB11E

Move_FORESIGHT:: @ 81CB18D
    loadsprite 10258
    monbg 3
    monbgprio_28 1
    setalpha 16, 0
    sprite 0x83FF6A4, 130, 1
    pause 17
    panse_1C 198, 63, 16, 4
    pause 48
    pause 24
    panse_19 198, 63
    pause 10
    createtask sub_807616C, 5, 1, 32767, 12, 2, 1
    panse_19 202, 63
    wait
    blendoff
    clearmonbg 3
    end

Move_DESTINY_BOND:: @ 81CB1CC
    loadsprite 10188
    fadetobg 2
    panse_19 182, 192
    waitbgfadein
    createtask sub_80B6020, 5, 0, 48
    panse_19 189, 192
    pause 48
    createtask sub_8098CD0, 2, 0, 2, 0, 24, 1
    createtask sub_80BA83C, 2, 6, 1, 0, 12, 30653
    pause 24
    createtask sub_80BA83C, 2, 6, 1, 12, 0, 30653
    panse_19 114, 63
    wait
    restorebg
    waitbgfadein
    blendoff
    clearmonbg 5
    end

Move_ENDURE:: @ 81CB227
    loadsprite 10184
    panse_19 164, 192
    call MoveFn_81CB267
    pause 8
    createtask sub_80B9BDC, 2, 2, 2, 2, 0, 11, 31
    createtask sub_8098B1C, 2, 0, 1, 0, 32, 1
    call MoveFn_81CB267
    pause 8
    call MoveFn_81CB267
    wait
    end

MoveFn_81CB267:: @ 81CB267
    sprite 0x83E3604, 2, 0, -24, 26, 2
    pause 4
    sprite 0x83E3604, 2, 0, 14, 28, 1
    pause 4
    sprite 0x83E3604, 2, 0, -5, 10, 2
    pause 4
    sprite 0x83E3604, 2, 0, 28, 26, 3
    pause 4
    sprite 0x83E3604, 2, 0, -12, 0, 1
    ret

Move_CHARM:: @ 81CB2BB
    loadsprite 10210
    createtask sub_80E0558, 5, 0, 2, 0
    sprite 0x83E41E8, 3, 0, 20
    panse_19 205, 192
    pause 15
    sprite 0x83E41E8, 3, -20, 20
    panse_19 205, 192
    pause 15
    sprite 0x83E41E8, 3, 20, 20
    panse_19 205, 192
    wait
    end

Move_ROLLOUT:: @ 81CB2FE
    loadsprite 10135
    loadsprite 10074
    loadsprite 10058
    monbg 3
    monbgprio_28 1
    setalpha 12, 8
    createtask sub_80B4BD0, 2,
    wait
    createtask sub_8099BD4, 2, 0, 1, 30, 1, 0
    sprite 0x83E7C08, 4, 0, 0, 1, 2
    panse_19 134, 63
    wait
    clearmonbg 3
    blendoff
    end

Move_FALSE_SWIPE:: @ 81CB33F
    loadsprite 10286
    loadsprite 10135
    sprite 0x83E35BC, 130,
    panse_19 115, 63
    pause 16
    sprite 0x83E35D4, 130, 0
    panse_19 128, 63
    pause 2
    sprite 0x83E35D4, 130, 16
    pause 2
    sprite 0x83E35D4, 130, 32
    panse_19 128, 63
    pause 2
    sprite 0x83E35D4, 130, 48
    pause 2
    sprite 0x83E35D4, 130, 64
    panse_19 128, 63
    pause 2
    sprite 0x83E35D4, 130, 80
    pause 2
    wait
    createtask sub_80989F8, 2, 1, 5, 0, 6, 1
    sprite 0x83E7C08, 132, 0, 0, 1, 3
    panse_19 132, 63
    end

Move_SWAGGER:: @ 81CB3C6
    loadsprite 10086
    loadsprite 10087
    createtask sub_80A84B4, 2,
    panse_19 186, 192
    wait
    sprite 0x83E3ED0, 2,
    panse_1C 186, 192, 4, 2
    wait
    pause 24
    sprite 0x83E3F04, 130, 1, -20, -28
    panse_19 187, 63
    pause 12
    sprite 0x83E3F04, 130, 1, 20, -28
    panse_19 187, 63
    wait
    end

Move_MILK_DRINK:: @ 81CB40E
    loadsprite 10099
    loadsprite 10203
    loadsprite 10031
    monbg 1
    sprite 0x83E33B4, 2,
    pause 40
    panse_19 135, 192
    pause 12
    panse_19 135, 192
    pause 20
    panse_19 135, 192
    wait
    sprite 0x83E4094, 3, 0, 0, 1, 0
    panse_19 218, 192
    wait
    clearmonbg 1
    call MoveFn_81D5712
    wait
    end

Move_MAGNITUDE:: @ 81CB450
    createtask sub_80B97D8, 2,
    wait
    jumpvareq 15, 0, .L81CB469
    jumpvareq 15, 1, .L81CB48E
.L81CB468:
    end
.L81CB469:
    createtask ma_shake, 5, 5, 0, 50
    createtask ma_shake, 5, 4, 0, 50
    panse_1C 207, 63, 8, 10
    jump .L81CB468
.L81CB48E:
    createtask ma_shake, 5, 5, 0, 50
    createtask ma_shake, 5, 4, 0, 50
    panse_1C 207, 63, 8, 10
    pause 10
    sprite 0x83E7B3C, 2, 1, 3, 1, 0, 14, 32767, 14
    pause 16
    sprite 0x83E7B3C, 2, 1, 3, 1, 0, 14, 32767, 14
    jump .L81CB468

Move_RAPID_SPIN:: @ 81CB4E1
    loadsprite 10135
    loadsprite 10229
    monbg 0
    sprite 0x83FF068, 2, 0, 0, 32, -32, 40, -2
    createtask sub_80DEF9C, 2, 0, 2, 0
    panse_1C 153, 192, 8, 4
    wait
    sprite 0x83E7C08, 130, 0, 0, 1, 2
    createtask sub_8099BD4, 2, 0, 1, 10, 1, 0
    panse_19 127, 63
    wait
    pause 8
    createtask sub_80DEF9C, 2, 0, 2, 1
    panse_1C 153, 192, 8, 4
    wait
    clearmonbg 0
    end

Move_MOONLIGHT:: @ 81CB54E
    loadsprite 10194
    loadsprite 10195
    loadsprite 10031
    setalpha 0, 16
    sprite 0x83E7B24, 2, 1, 1, 0, 16, 0
    wait
    sprite 0x83E3734, 2, 120, 56
    createtask sub_8076048, 3, 0, 16, 16, 0, 1
    panse_19 204, 0
    pause 30
    sprite 0x83E3764, 40, -12, 0
    pause 30
    sprite 0x83E3764, 40, -24, 0
    pause 30
    sprite 0x83E3764, 40, 21, 0
    pause 30
    sprite 0x83E3764, 40, 0, 0
    pause 30
    sprite 0x83E3764, 40, 10, 0
    pause 20
    createtask sub_80A5FC0, 2,
    wait
    call MoveFn_81D56C9
    wait
    end

Move_EXTREME_SPEED:: @ 81CB5DE
    loadsprite 10207
    loadsprite 10135
    createtask sub_80BB920, 2,
    jumpvareq 7, 1, .L81CB695
    fadetobg 9
.L81CB5F5:
    waitbgfadeout
    createtask sub_80BB82C, 5, -2304, 0, 1, -1
    waitbgfadein
    createtask sub_80A917C, 2,
    panse_1C 153, 192, 8, 3
    wait
    pause 1
    createtask sub_80BC12C, 2,
    monbg 1
    setalpha 12, 8
    pause 18
    createtask sub_80A9210, 2,
    pause 2
    panse_19 132, 63
    sprite 0x83E7C68, 130, 1, 0, -12, 3
    pause 10
    panse_19 132, 63
    sprite 0x83E7C68, 130, 1, 0, 12, 3
    pause 10
    panse_19 116, 63
    sprite 0x83E7C68, 130, 1, 0, 0, 3
    wait
    createtask sub_80A94AC, 2,
    pause 10
    createtask sub_80A939C, 2,
    panse_1C 128, 192, 8, 4
    wait
    restorebg
    waitbgfadeout
    setvar 7, -1
    waitbgfadein
    clearmonbg 1
    blendoff
    pause 1
    setvar 7, 4096
    pause 1
    end
.L81CB695:
    fadetobg 10
    jump .L81CB5F5

Move_UPROAR:: @ 81CB69C
    loadsprite 10225
    loadsprite 10203
    monbg 3
    createtask sub_80AA7C8, 2, 0
    sprite 0x83E4110, 3, 0, 0, 0, 0, 31, 8
    panse_19 234, 192
    sprite 0x83E4430, 2, 0, 29, -12, 0
    sprite 0x83E4430, 2, 0, -12, -29, 1
    pause 16
    createtask sub_80AA7C8, 2, 0
    sprite 0x83E4110, 3, 0, 0, 0, 0, 31, 8
    panse_19 234, 192
    sprite 0x83E4430, 2, 0, 12, -29, 1
    sprite 0x83E4430, 2, 0, -29, -12, 0
    pause 16
    createtask sub_80AA7C8, 2, 0
    sprite 0x83E4110, 3, 0, 0, 0, 0, 31, 8
    panse_19 234, 192
    sprite 0x83E4430, 2, 0, 24, -24, 1
    sprite 0x83E4430, 2, 0, -24, -24, 0
    wait
    clearmonbg 3
    end

Move_HEAT_WAVE:: @ 81CB766
    loadsprite 10261
    createtask sub_80BAA20, 5, 10261, 0, 6, 6, 31
    createtask sub_80B4810, 5, 1
    createtask sub_80ADAA4, 6, 6, 31
    panse_1B 233, 192, 63, 2, 0
    pause 4
    createtask sub_80AD800, 5,
    pause 12
    sprite 0x83E7450, 40, 10, 2304, 96, 1
    pause 10
    sprite 0x83E7450, 40, 90, 2048, 96, 1
    pause 10
    sprite 0x83E7450, 40, 50, 2560, 96, 1
    pause 10
    sprite 0x83E7450, 40, 20, 2304, 96, 1
    pause 10
    sprite 0x83E7450, 40, 70, 1984, 96, 1
    pause 10
    sprite 0x83E7450, 40, 0, 2816, 96, 1
    pause 10
    sprite 0x83E7450, 40, 60, 2560, 96, 1
    end

Move_HAIL:: @ 81CB816
    loadsprite 10263
    loadsprite 10141
    createtask sub_80BA7F8, 10, 1, 3, 0, 6, 0
    wait
    createtask sub_80B038C, 5,
    panse_1C 235, 0, 8, 10
    wait
    createtask sub_80BA7F8, 10, 1, 3, 6, 0, 0
    end

Move_TORMENT:: @ 81CB84E
    loadsprite 10087
    loadsprite 10209
    createtask sub_80DF1DC, 2,
    wait
    createtask sub_807616C, 2, 1, 31, 10, 1, 1
    sprite 0x83E3F04, 130, 1, -20, -28
    panse_19 187, 63
    pause 20
    sprite 0x83E3F04, 130, 1, 20, -28
    panse_19 187, 63
    end

Move_MEMENTO:: @ 81CB892
    setalpha 0, 16
    pause 1
    createtask sub_80B85B8, 2,
    pause 1
    createtask sub_80B7DA4, 5,
    panse_19 182, 192
    pause 48
    panse_19 193, 192
    wait
    createtask sub_80B8664, 2,
    pause 12
    setalpha 0, 16
    pause 1
    monbg_22 1
    createtask sub_80B8070, 5,
    panse_19 182, 63
    wait
    clearmonbg_23 1
    pause 1
    blendoff
    pause 1
    end

Move_FACADE:: @ 81CB8D6
    loadsprite 10243
    createtask sub_80E1D5C, 2, 0, 3
    createtask sub_80E1FC4, 2, 0, 72
    panse_1C 186, 192, 24, 3
    end

Move_SMELLING_SALT:: @ 81CB8F6
    loadsprite 10247
    loadsprite 10255
    sprite 0x83FF644, 130, 1, 0, 2
    sprite 0x83FF644, 130, 1, 1, 2
    pause 32
    createtask sub_80E28DC, 3, 1, 2
    panse_1C 127, 63, 12, 2
    wait
    pause 4
    createtask sub_8098B1C, 2, 1, 2, 0, 6, 2
    sprite 0x83FF674, 130, 1, 8, 3
    panse_1C 187, 63, 16, 3
    end

Move_FOLLOW_ME:: @ 81CB951
    loadsprite 10064
    sprite 0x83E3A4C, 2, 0
    panse_19 160, 192
    pause 18
    panse_19 219, 192
    pause 71
    panse_1C 160, 192, 22, 3
    end

Move_CHARGE:: @ 81CB970
    loadsprite 10211
    loadsprite 10212
    loadsprite 10213
    monbg 0
    setalpha 12, 8
    sprite 0x83E7B24, 2, 1, 2, 0, 4, 0
    wait
    createtask sub_80AE540, 2, 0, 60, 2, 12
    panse_19 206, 192
    pause 30
    panse_19 206, 192
    pause 30
    panse_19 206, 192
    sprite 0x83E61D4, 2, 0
    pause 25
    panse_19 206, 192
    pause 20
    panse_19 206, 192
    pause 15
    panse_19 206, 192
    pause 10
    pause 6
    panse_1C 206, 192, 6, 5
    wait
    sprite 0x83E6204, 2, 0, 16, 16
    pause 2
    sprite 0x83E6204, 2, 0, -16, -16
    panse_19 112, 192
    wait
    sprite 0x83E7B24, 2, 1, 4, 4, 0, 0
    clearmonbg 0
    blendoff
    end

Move_TAUNT:: @ 81CBA0B
    loadsprite 10214
    loadsprite 10209
    loadsprite 10087
    sprite 0x83E398C, 11, 0, 45
    panse_19 179, 192
    pause 6
    sprite 0x83E3AC4, 12, 0
    pause 4
    panse_1C 160, 192, 16, 2
    wait
    pause 8
    sprite 0x83E3F04, 130, 1, -20, -28
    panse_19 187, 63
    wait
    pause 12
    sprite 0x83E3F04, 130, 1, 20, -28
    panse_19 187, 63
    end

Move_HELPING_HAND:: @ 81CBA5F
    loadsprite 10247
    createtask sub_80E2CE4, 5,
    sprite 0x83FF68C, 40, 0
    sprite 0x83FF68C, 40, 1
    pause 19
    panse_19 215, 0
    createtask sub_8098B1C, 2, 2, 2, 0, 5, 1
    pause 14
    panse_19 215, 0
    createtask sub_8098B1C, 2, 2, 2, 0, 5, 1
    pause 20
    panse_19 215, 0
    createtask sub_8098B1C, 2, 2, 3, 0, 10, 1
    createtask sub_807616C, 2, 2, 1023, 12, 1, 1
    end

Move_ASSIST:: @ 81CBAD2
    loadsprite 10252
    sprite 0x83FF5E4, 50, 112, -16, 140, 128, 36
    pause 2
    sprite 0x83FF5E4, 50, 208, 128, -16, 48, 36
    panse_19 148, 0
    pause 2
    sprite 0x83FF5E4, 50, -16, 112, 256, -16, 36
    panse_19 148, 0
    pause 2
    sprite 0x83FF5E4, 50, 108, 128, 84, -16, 36
    panse_19 148, 0
    pause 2
    sprite 0x83FF5E4, 50, -16, 56, 256, 56, 36
    panse_19 148, 0
    end

Move_SUPERPOWER:: @ 81CBB43
    loadsprite 10212
    loadsprite 10256
    loadsprite 10257
    monbg 2
    monbgprio_28 0
    setalpha 12, 8
    sprite 0x83E6864, 130, 0
    panse_19 133, 192
    pause 20
    sprite 0x83E7B88, 2, 4, 1, 180, 1
    createtask sub_80DD410, 5, 227, 0
    pause 40
    sprite 0x83E687C, 41, 200, 96, 1, 120
    pause 8
    sprite 0x83E687C, 41, 20, 248, 4, 112
    pause 8
    sprite 0x83E687C, 41, 130, 160, 2, 104
    pause 8
    sprite 0x83E687C, 41, 160, 192, 0, 96
    pause 8
    sprite 0x83E687C, 41, 60, 288, 3, 88
    pause 74
    sprite 0x83E6894, 131, 0
    panse_19 186, 192
    pause 16
    createtask sub_8098B1C, 2, 1, 8, 0, 16, 1
    panse_19 134, 63
    wait
    clearmonbg 2
    blendoff
    pause 1
    end

Move_RECYCLE:: @ 81CBBFE
    loadsprite 10278
    monbg 0
    setalpha 0, 16
    pause 1
    sprite 0x83FF790, 2,
    panse_1C 145, 192, 24, 3
    wait
    createtask sub_807616C, 5, 0, 32767, 12, 2, 1
    panse_19 145, 192
    wait
    blendoff
    clearmonbg 0
    pause 1
    end

Move_BRICK_BREAK:: @ 81CBC32
    loadsprite 10167
    loadsprite 10135
    loadsprite 10143
    loadsprite 10208
    ifelse .L81CBC47, .L81CBD16
.L81CBC47:
    monbg 1
    setalpha 12, 8
    sprite 0x83D4E54, 2, 3, 8
    pause 4
    pause 1
    sprite 0x83E7C08, 3, -18, -18, 1, 1
    sprite 0x83E6710, 2, -18, -18, 10, 1, 0
    panse_19 115, 63
    pause 20
    sprite 0x83D4E54, 2, 3, 8
    pause 5
    sprite 0x83E7C08, 3, 18, 18, 1, 1
    sprite 0x83E6710, 2, 18, 18, 10, 1, 0
    panse_19 115, 63
    pause 20
    createtask sub_809949C, 2, 0, -24, 0, 24, 10, 24, 3
    sprite 0x83E7B24, 2, 1, 2, 0, 6, 0
    pause 37
    sprite 0x83E7C08, 3, 0, 0, 1, 1
    sprite 0x83E6710, 2, 0, 0, 10, 1, 0
    panse_19 116, 63
    wait
    sprite 0x83E7B24, 2, 1, 2, 6, 0, 0
    wait
    clearmonbg 1
    end
.L81CBD16:
    monbg 1
    setalpha 12, 8
    sprite 0x83D4E54, 2, 3, 8
    pause 4
    sprite 0x83E6808, 3, 1, 0, 0, 90, 10
    pause 1
    sprite 0x83E7C08, 3, -18, -18, 1, 1
    sprite 0x83E6710, 2, -18, -18, 10, 1, 0
    panse_19 115, 63
    pause 20
    sprite 0x83D4E54, 2, 3, 8
    pause 5
    sprite 0x83E7C08, 3, 18, 18, 1, 1
    sprite 0x83E6710, 2, 18, 18, 10, 1, 0
    panse_19 115, 63
    pause 20
    createtask sub_809949C, 2, 0, -24, 0, 24, 10, 24, 3
    sprite 0x83E7B24, 2, 1, 2, 0, 6, 0
    pause 37
    sprite 0x83E7C08, 3, 0, 0, 1, 1
    sprite 0x83E6710, 2, 0, 0, 10, 1, 0
    panse_19 116, 63
    wait
    sprite 0x83E6820, 2, 1, 0, -8, -12
    sprite 0x83E6820, 2, 1, 1, 8, -12
    sprite 0x83E6820, 2, 1, 2, -8, 12
    sprite 0x83E6820, 2, 1, 3, 8, 12
    panse_19 191, 63
    wait
    sprite 0x83E7B24, 2, 1, 2, 6, 0, 0
    wait
    clearmonbg 1
    end

Move_YAWN:: @ 81CBE37
    loadsprite 10242
    createtask sub_80E1704, 2, 0
    panse_19 230, 192
    wait
    sprite 0x83FF46C, 133, 2
    panse_19 225, 192
    pause 4
    sprite 0x83FF46C, 133, 1
    pause 4
    sprite 0x83FF46C, 133, 0
    wait
    createtask sub_80E1704, 2, 1
    panse_19 230, 63
    end

Move_ENDEAVOR:: @ 81CBE7A
    loadsprite 10243
    loadsprite 10135
    createtask sub_80E1D5C, 2, 0, 2
    panse_1C 160, 192, 24, 2
    createtask sub_807616C, 5, 0, 703, 12, 1, 2
    pause 6
    createtask sub_8099BD4, 5, 0, 1, 8, 1, 0
    sprite 0x83E7C08, 130, 12, -12, 1, 2
    panse_19 127, 63
    pause 24
    createtask sub_8099BD4, 5, 0, 1, 8, 1, 0
    sprite 0x83E7C08, 130, -12, 12, 1, 2
    panse_19 132, 63
    end

Move_ERUPTION:: @ 81CBEEF
    loadsprite 10201
    sprite 0x83E7B24, 2, 31, 2, 0, 4, 31
    wait
    createtask sub_80ACEA4, 2,
    panse_1D 171, 192, 60
    wait
    createtask sub_80ACEA4, 2,
    panse_1D 171, 192, 60
    wait
    pause 30
    sprite 0x83E5E60, 40, 200, -32, 0, 100, 0
    sprite 0x83E5E60, 40, 30, -32, 16, 90, 1
    sprite 0x83E5E60, 40, 150, -32, 32, 60, 2
    sprite 0x83E5E60, 40, 90, -32, 48, 80, 3
    sprite 0x83E5E60, 40, 110, -32, 64, 50, 0
    sprite 0x83E5E60, 40, 60, -32, 80, 70, 1
    pause 22
    createtask ma_shake, 5, 5, 8, 60
    createtask ma_shake, 5, 4, 8, 60
    panse_1C 124, 63, 16, 12
    pause 80
    sprite 0x83E7B24, 40, 31, 4, 4, 0, 31
    end

Move_SKILL_SWAP:: @ 81CBFBC
    loadsprite 10251
    call MoveFn_81D59BB
    createtask sub_80B3834, 3, 1
    createtask sub_807616C, 5, 1, 32767, 12, 3, 1
    panse_1C 210, 192, 24, 3
    pause 16
    createtask sub_80B3834, 3, 0
    createtask sub_807616C, 5, 0, 32767, 12, 3, 1
    wait
    call MoveFn_81D59C7
    end

Move_IMPRISON:: @ 81CC007
    loadsprite 10249
    loadsprite 10250
    call MoveFn_81D59BB
    monbg 3
    createtask sub_80B3584, 5,
    pause 8
    panse_1C 159, 192, 8, 5
    wait
    pause 4
    sprite 0x83E705C, 5, 0, 40
    createtask ma_shake, 5, 4, 1, 10
    panse_19 208, 192
    clearmonbg 3
    call MoveFn_81D59C7
    end

Move_GRUDGE:: @ 81CC04A
    loadsprite 10253
    monbg 0
    monbgprio_29
    fadetobg 2
    panse_19 182, 192
    waitbgfadein
    createtask sub_80B68C8, 3,
    panse_1C 144, 192, 16, 4
    pause 10
    pause 80
    panse_19 114, 63
    wait
    restorebg
    waitbgfadein
    clearmonbg 0
    end

Move_CAMOUFLAGE:: @ 81CC072
    monbg 2
    monbgprio_28 0
    setalpha 16, 0
    createtask sub_80BA934, 5, 2, 3, 0, 14
    pause 16
    createtask sub_80B78E0, 2, 4
    panse_19 183, 192
    wait
    pause 8
    createtask sub_80BA934, 5, 2, 0, 0, 0
    wait
    createtask sub_80B79DC, 2, 1
    wait
    blendoff
    clearmonbg 2
    end

Move_TAIL_GLOW:: @ 81CC0B8
    loadsprite 10212
    monbg 0
    setalpha 12, 8
    sprite 0x83E7B24, 2, 1, 2, 0, 4, 0
    wait
    sprite 0x83E7378, 66, 0
    pause 18
    panse_1C 221, 192, 16, 6
    wait
    sprite 0x83E7B24, 2, 1, 4, 4, 0, 0
    clearmonbg 0
    blendoff
    pause 1
    end

Move_LUSTER_PURGE:: @ 81CC0FB
    loadsprite 10267
    loadsprite 10135
    fadetobg 3
    waitbgfadeout
    createtask sub_80DE7B4, 5,
    waitbgfadein
    monbg 0
    setalpha 12, 8
    panse_19 194, 192
    sprite 0x83E7148, 41, 0, 0, 0, 0
    pause 20
    createtask sub_80BA83C, 5, 5, 2, 0, 16, -1
    createtask sub_80BAA20, 5, 10267, 2, 0, 16, -1
    wait
    createtask sub_80BAA20, 5, 10135, 0, 12, 12, 23552
    wait
    sprite 0x83E7C50, 131, 1, 2
    createtask sub_80DD3DC, 5, 208, 63
    pause 3
    sprite 0x83E7C50, 131, 1, 2
    createtask sub_80DD3DC, 5, 208, 63
    pause 3
    sprite 0x83E7C50, 131, 1, 2
    createtask sub_80DD3DC, 5, 208, 63
    pause 3
    sprite 0x83E7C50, 131, 1, 2
    createtask sub_80DD3DC, 5, 208, 63
    pause 3
    sprite 0x83E7C50, 131, 1, 2
    createtask sub_80DD3DC, 5, 208, 63
    pause 3
    sprite 0x83E7C50, 131, 1, 2
    createtask sub_80DD3DC, 5, 208, 63
    wait
    createtask sub_80BA83C, 5, 5, 2, 16, 0, -1
    createtask ma_shake, 5, 1, 5, 14
    wait
    clearmonbg 0
    blendoff
    call MoveFn_81D59C7
    end

Move_MIST_BALL:: @ 81CC212
    loadsprite 10155
    loadsprite 10270
    pause 0
    panse_19 122, 192
    sprite 0x83E64E8, 128, 0, 0, 0, 0, 30, 0
    wait
    panse_19 152, 63
    createtask sub_80989F8, 2, 1, 5, 0, 10, 0
    sprite 0x83E7B3C, 0, 1, 1, 1, 32279, 16, 32767, 16
    pause 0
    panse_19 239, 0
    createtask sub_80AFD80, 5,
    createtask sub_80BA7F8, 10, 4, 3, 0, 16, 32767
    pause 8
    createtask sub_80989F8, 2, 1, 4, 0, 70, 0
    pause 70
    createtask sub_80BA7F8, 10, 4, 2, 16, 0, 32767
    end

Move_FEATHER_DANCE:: @ 81CC2A1
    loadsprite 10270
    monbg 3
    monbgprio_29
    panse_19 195, 63
    pause 0
    sprite 0x83E6C00, 128, 0, -16, 64, 2, 104, 11304, 32, 1
    pause 6
    sprite 0x83E6C00, 128, 0, -16, 32, 2, 104, 11304, 32, 1
    sprite 0x83E6C00, 128, 0, -16, 0, 2, 104, 11304, 32, 1
    pause 6
    sprite 0x83E6C00, 128, 0, -16, 224, 2, 104, 11304, 32, 1
    sprite 0x83E6C00, 128, 0, -16, 128, 2, 104, 11304, 32, 1
    pause 6
    sprite 0x83E6C00, 128, 0, -16, 192, 2, 104, 11304, 32, 1
    sprite 0x83E6C00, 128, 0, -16, 160, 2, 104, 11304, 32, 1
    pause 6
    sprite 0x83E6C00, 128, 0, -16, 96, 2, 104, 11304, 32, 1
    wait
    clearmonbg 3
    end

Move_TEETER_DANCE:: @ 81CC371
    loadsprite 10072
    loadsprite 10073
    createtask sub_80E4160, 5,
    sprite 0x83E38C8, 2, 0, 16, -2
    panse_19 237, 192
    pause 24
    sprite 0x83E38C8, 2, 0, 0, -2
    panse_19 237, 192
    pause 24
    sprite 0x83E38C8, 2, 0, -16, -2
    panse_19 237, 192
    pause 24
    sprite 0x83E38C8, 2, 1, -8, -2
    panse_19 237, 192
    pause 24
    sprite 0x83E38C8, 2, 2, 8, -2
    panse_19 237, 192
    end

Move_MUD_SPORT:: @ 81CC3DC
    loadsprite 10074
    createtask sub_80A8338, 2, 0, 6
    pause 24
    sprite 0x83E7A94, 130, 0, -4, -16
    sprite 0x83E7A94, 130, 0, 4, -12
    panse_19 168, 192
    pause 32
    sprite 0x83E7A94, 130, 0, -3, -12
    sprite 0x83E7A94, 130, 0, 5, -14
    panse_19 168, 192
    pause 32
    sprite 0x83E7A94, 130, 0, -5, -18
    sprite 0x83E7A94, 130, 0, 3, -14
    panse_19 168, 192
    pause 16
    sprite 0x83E7A94, 130, 1, 220, 60
    panse_1D 118, 0, 15
    pause 2
    sprite 0x83E7A94, 130, 1, 60, 100
    panse_1D 118, 0, 25
    pause 2
    sprite 0x83E7A94, 130, 1, 140, 55
    panse_1D 118, 0, 14
    pause 2
    sprite 0x83E7A94, 130, 1, 180, 50
    panse_1D 118, 0, 10
    pause 2
    sprite 0x83E7A94, 130, 1, 20, 90
    panse_1D 118, 0, 22
    pause 2
    sprite 0x83E7A94, 130, 1, 90, 90
    panse_1D 118, 0, 22
    pause 2
    sprite 0x83E7A94, 130, 1, 160, 60
    panse_1D 118, 0, 15
    pause 2
    sprite 0x83E7A94, 130, 1, 30, 90
    panse_1D 118, 0, 22
    pause 2
    sprite 0x83E7A94, 130, 1, 120, 60
    panse_1D 118, 0, 15
    pause 2
    sprite 0x83E7A94, 130, 1, 200, 40
    panse_1D 118, 0, 10
    end

Move_NEEDLE_ARM:: @ 81CC513
    loadsprite 10266
    loadsprite 10135
    loadsprite 10143
    panse_1C 159, 63, 2, 16
    sprite 0x83E3100, 130, 1, 0, 0, -32, 16
    pause 2
    sprite 0x83E3100, 130, 1, 0, 22, -22, 16
    pause 2
    sprite 0x83E3100, 130, 1, 0, 30, 0, 16
    pause 2
    sprite 0x83E3100, 130, 1, 0, 20, 20, 16
    pause 2
    sprite 0x83E3100, 130, 1, 0, 0, 28, 16
    pause 2
    sprite 0x83E3100, 130, 1, 0, -19, 19, 16
    pause 2
    sprite 0x83E3100, 130, 1, 0, -27, 0, 16
    pause 2
    sprite 0x83E3100, 130, 1, 0, -18, -18, 16
    pause 2
    sprite 0x83E3100, 130, 1, 0, 0, -25, 16
    pause 2
    sprite 0x83E3100, 130, 1, 0, 17, -17, 16
    pause 2
    sprite 0x83E3100, 130, 1, 0, 23, 0, 16
    pause 2
    sprite 0x83E3100, 130, 1, 0, 16, 16, 16
    wait
    createtask sub_8098B1C, 2, 1, 4, 0, 18, 1
    sprite 0x83E7C08, 131, 0, 0, 1, 1
    sprite 0x83E6710, 132, 0, 0, 8, 1, 0
    panse_19 116, 63
    sprite 0x83E3100, 130, 1, 1, 0, -24, 10
    sprite 0x83E3100, 130, 1, 1, 17, -17, 10
    sprite 0x83E3100, 130, 1, 1, 24, 0, 10
    sprite 0x83E3100, 130, 1, 1, 17, 17, 10
    sprite 0x83E3100, 130, 1, 1, 0, 24, 10
    sprite 0x83E3100, 130, 1, 1, -17, 17, 10
    sprite 0x83E3100, 130, 1, 1, -24, 0, 10
    sprite 0x83E3100, 130, 1, 1, -17, -17, 10
    end

Move_SLACK_OFF:: @ 81CC6C3
    loadsprite 10031
    createtask sub_80E4540, 2, 0
    panse_19 230, 192
    wait
    call MoveFn_81D56C9
    wait
    end

Move_CRUSH_CLAW:: @ 81CC6DB
    loadsprite 10167
    loadsprite 10039
    loadsprite 10208
    monbg 1
    setalpha 12, 8
    sprite 0x83D4E54, 2, 6, 4
    pause 4
    createtask sub_8098B1C, 2, 1, 2, 0, 18, 1
    sprite 0x83E79E8, 130, -10, -10, 0
    sprite 0x83E79E8, 130, -10, 10, 0
    panse_19 129, 63
    pause 12
    sprite 0x83E79E8, 130, 10, -10, 1
    sprite 0x83E79E8, 130, 10, 10, 1
    panse_19 129, 63
    wait
    wait
    blendoff
    clearmonbg 1
    end

Move_AROMATHERAPY:: @ 81CC74B
    panse_19 195, 0
    loadsprite 10159
    loadsprite 10203
    loadsprite 10049
    sprite 0x83E7B24, 0, 1, 0, 0, 7, 13293
    pause 1
    monbg 0
    pause 1
    sprite 0x83E3024, 0, 24, 16, 0, 2, 2, 0, 0
    sprite 0x83E3024, 66, 64, 24, 0, 3, 1, 1, 0
    sprite 0x83E303C, 0, 16, 24, 0, 2, 1, 0, 0
    pause 20
    sprite 0x83E3024, 66, 48, 12, 0, 4, 3, 1, 0
    sprite 0x83E3024, 0, 100, 16, 0, 3, 2, 0, 0
    sprite 0x83E3024, 0, 74, 24, 180, 3, 2, 0, 0
    pause 10
    sprite 0x83E3024, 66, 80, 30, 0, 4, 1, 1, 0
    sprite 0x83E3024, 0, 128, 12, 0, 3, 3, 0, 0
    sprite 0x83E303C, 0, 90, 16, 0, 2, 1, 0, 0
    wait
    clearmonbg 0
    pause 1
    sprite 0x83E7B24, 0, 1, 0, 7, 0, 13293
    pause 1
    panse_19 232, 192
    createtask sub_80E2084, 2, 1
    wait
    panse_19 221, 192
    sprite 0x83E340C, 16, -15, 0, 0, 0, 32, 60, 1
    pause 8
    sprite 0x83E340C, 16, 12, -5, 0, 0, 32, 60, 1
    wait
    panse_19 95, 192
    sprite 0x83E7B24, 0, 43, 3, 10, 0, 13293
    sprite 0x83E40E0, 16, 0, 0, 0, 1
    wait
    end

Move_FAKE_TEARS:: @ 81CC8AD
    loadsprite 10155
    loadsprite 10209
    loadsprite 10072
    createtask sub_80BAA20, 5, 10155, 0, 4, 4, 32108
    wait
    createtask sub_80E0558, 5, 0, 2, 1
    panse_1C 160, 192, 12, 4
    pause 8
    sprite 0x83E7998, 2, 0, 0
    sprite 0x83E7998, 2, 0, 1
    pause 8
    sprite 0x83E7998, 2, 0, 2
    sprite 0x83E7998, 2, 0, 3
    pause 8
    sprite 0x83E7998, 2, 0, 0
    sprite 0x83E7998, 2, 0, 1
    pause 8
    sprite 0x83E7998, 2, 0, 2
    sprite 0x83E7998, 2, 0, 3
    wait
    end

Move_AIR_CUTTER:: @ 81CC93D
    loadsprite 10003
    loadsprite 10138
    loadsprite 10135
    pause 0
    monbg 3
    setalpha 12, 8
    pause 0
    createtask sub_80A76F0, 2, 32, -24, 1536, 2, 128
    wait
    panse_19 121, 63
    sprite 0x83E32AC, 2, 40, -32, 0, 2
    pause 5
    createtask sub_8098B1C, 2, 1, 2, 0, 8, 1
    createtask sub_8098B1C, 2, 3, 2, 0, 8, 1
    wait
    blendoff
    clearmonbg 3
    pause 0
    end

Move_ODOR_SLEUTH:: @ 81CC99F
    monbg 1
    createtask sub_80E3664, 5,
    pause 24
    sprite 0x83D4E54, 2, 3, 4
    panse_19 186, 192
    pause 6
    sprite 0x83D4E54, 2, 3, 4
    panse_19 186, 192
    wait
    clearmonbg 1
    pause 1
    sprite 0x83E7B3C, 2, 1, 3, 1, -1, 16, -1, 0
    panse_19 185, 192
    end

Move_GRASS_WHISTLE:: @ 81CC9E9
    loadsprite 10072
    sprite 0x83E7B24, 2, 1, 2, 0, 4, 13298
    wait
    createtask sub_80A65E8, 2,
    wait
    panse_1B 224, 192, 63, 2, 0
    sprite 0x83E3880, 130, 7, 1, 0
    pause 5
    sprite 0x83E3880, 130, 6, 1, 0
    pause 5
    sprite 0x83E3880, 130, 1, 1, 0
    pause 5
    sprite 0x83E3880, 130, 2, 1, 0
    pause 5
    sprite 0x83E3880, 130, 3, 1, 0
    pause 4
    sprite 0x83E3880, 130, 2, 1, 0
    pause 4
    sprite 0x83E3880, 130, 5, 1, 0
    pause 4
    sprite 0x83E3880, 130, 6, 1, 0
    pause 4
    sprite 0x83E3880, 130, 2, 1, 0
    pause 4
    sprite 0x83E3880, 130, 2, 1, 0
    pause 4
    sprite 0x83E3880, 130, 1, 1, 0
    pause 4
    sprite 0x83E3880, 130, 5, 1, 0
    pause 4
    wait
    createtask sub_80A66A0, 2,
    sprite 0x83E7B24, 2, 1, 4, 4, 0, 13298
    wait
    end

Move_TICKLE:: @ 81CCADC
    loadsprite 10218
    sprite 0x83E7B24, 2, 2, 0, 0, 16, 0
    wait
    sprite 0x83E42FC, 0, -16, -8
    sprite 0x83E42FC, 0, 16, -8
    panse_19 202, 192
    wait
    sprite 0x83E7B24, 2, 2, 0, 16, 0, 0
    wait
    pause 20
    createtask sub_8099704, 3, 0, 6, 1280, 3, 0
    pause 12
    createtask sub_80E0558, 3, 1, 6, 2
    panse_1C 160, 63, 8, 8
    wait
    end

Move_WATER_SPOUT:: @ 81CCB48
    loadsprite 10268
    loadsprite 10148
    monbg 3
    setalpha 12, 8
    createtask sub_80ABB28, 5,
    panse_19 155, 192
    pause 44
    panse_19 226, 192
    wait
    pause 16
    createtask sub_80AC00C, 5,
    panse_19 156, 63
    clearmonbg 3
    blendoff
    end

Move_SHADOW_PUNCH:: @ 81CCB76
    loadsprite 10135
    loadsprite 10143
    fadetobg 2
    waitbgfadein
    monbg 2
    setalpha 9, 8
    createtask sub_8077030, 2, 0, 13
    panse_19 136, 192
    pause 6
    sprite 0x83E7C08, 131, 0, 0, 1, 1
    sprite 0x83E6710, 132, 0, 0, 8, 1, 0
    panse_19 132, 63
    createtask sub_80989F8, 2, 1, 3, 0, 6, 1
    wait
    clearmonbg 2
    blendoff
    restorebg
    waitbgfadein
    end

Move_EXTRASENSORY:: @ 81CCBD1
    call MoveFn_81D59BB
    monbg 3
    setalpha 12, 8
    createtask sub_807616C, 5, 0, 891, 12, 1, 1
    createtask sub_80B3A58, 5, 0
    panse_19 163, 63
    wait
    createtask sub_807616C, 5, 0, 891, 12, 1, 1
    createtask sub_80B3A58, 5, 1
    panse_19 163, 63
    wait
    createtask sub_80B3C78, 5, 0
    createtask sub_80B3A58, 5, 2
    panse_19 185, 192
    wait
    blendoff
    clearmonbg 3
    call MoveFn_81D59C7
    end

Move_AERIAL_ACE:: @ 81CCC39
    loadsprite 10138
    monbg 1
    setalpha 12, 8
    createtask sub_809907C, 2, 0, 24, 6, 1, 5
    createtask sub_80BAB98, 2, 0, 4, 7, 3
    sprite 0x83E3294, 2, 40, -32, 0
    panse_19 153, 192
    pause 5
    createtask sub_80989F8, 2, 1, 0, 3, 10, 1
    sprite 0x83E7B3C, 2, 31, 3, 1, 0, 10, 0, 0
    panse_19 129, 63
    wait
    clearmonbg 1
    blendoff
    end

Move_IRON_DEFENSE:: @ 81CCCA3
    panse_1C 95, 192, 28, 2
    createtask sub_80B86EC, 5, 0, 0, 0
    sprite 0x83E7B3C, 2, 1, 8, 2, -1, 14, -1, 0
    wait
    end

Move_BLOCK:: @ 81CCCCD
    loadsprite 10250
    sprite 0x83FF6EC, 194,
    panse_19 186, 63
    end

Move_HOWL:: @ 81CCCDC
    loadsprite 10053
    createtask sub_80E1704, 2, 0
    pause 12
    call MoveFn_81CDB06
    createtask sub_80DD06C, 2, 0, 3
    wait
    pause 30
    end

Move_BULK_UP:: @ 81CCCFE
    loadsprite 10086
    createtask sub_80A84B4, 2,
    panse_19 186, 192
    wait
    sprite 0x83E3ED0, 2,
    panse_1C 186, 192, 4, 2
    wait
    end

Move_COVET:: @ 81CCD1C
    loadsprite 10210
    loadsprite 10224
    createtask sub_80E0558, 5, 0, 2, 0
    sprite 0x83E41E8, 3, 0, 20
    panse_19 205, 192
    pause 15
    sprite 0x83E41E8, 3, -20, 20
    panse_19 205, 192
    pause 15
    sprite 0x83E41E8, 3, 20, 20
    panse_19 205, 192
    wait
    createtask sub_8098B1C, 2, 1, 2, 0, 8, 1
    panse_1C 169, 63, 4, 3
    end

Move_VOLT_TACKLE:: @ 81CCD79
    loadsprite 10001
    loadsprite 10212
    loadsprite 10213
    monbg 0
    setalpha 12, 8
    createtask sub_80BA7F8, 10, 1, 0, 0, 8, 0
    wait
    sprite 0x83E621C, 1,
    panse_19 206, 192
    wait
    clearmonbg 0
    blendoff
    pause 8
    createtask sub_80AEA10, 5, 0
    panse_19 111, 192
    wait
    createtask sub_80AEA10, 5, 1
    panse_19 111, 63
    wait
    createtask sub_80AEA10, 5, 2
    panse_19 111, 192
    wait
    createtask sub_80AEA10, 5, 3
    panse_19 111, 63
    wait
    createtask sub_80AEA10, 5, 4
    panse_19 111, 192
    pause 8
    createtask sub_8098B1C, 2, 1, 10, 0, 18, 1
    panse_19 170, 63
    sprite 0x83E6204, 2, 1, 16, 16
    pause 2
    sprite 0x83E6204, 2, 1, -16, -16
    pause 8
    createtask sub_80AE8A0, 5,
    wait
    createtask sub_8098B1C, 2, 0, 3, 0, 9, 1
    panse_19 112, 192
    sprite 0x83E6204, 2, 0, 16, 16
    pause 2
    sprite 0x83E6204, 2, 0, -16, -16
    wait
    createtask sub_80BA7F8, 10, 1, 0, 8, 0, 0
    wait
    end

Move_WATER_SPORT:: @ 81CCE71
    loadsprite 10268
    createtask sub_80AC328, 5,
    pause 8
    panse_19 156, 192
    pause 44
    panse_19 156, 192
    pause 44
    panse_19 156, 192
    pause 44
    panse_1B 156, 192, 63, 2, 0
    end

Move_CALM_MIND:: @ 81CCE97
    loadsprite 10203
    monbg 2
    createtask sub_80BA83C, 5, 0, 0, 0, 16, 0
    wait
    createtask sub_80BB9B0, 5, 1
    wait
    sprite 0x83E40C8, 40, 0, 0, 0, 0
    panse_19 177, 192
    pause 14
    sprite 0x83E40C8, 40, 0, 0, 0, 0
    panse_19 177, 192
    pause 14
    sprite 0x83E40C8, 40, 0, 0, 0, 0
    panse_19 177, 192
    wait
    createtask sub_80BB9B0, 5, 0
    visible 0
    wait
    createtask sub_80BA83C, 5, 0, 0, 16, 0, 0
    wait
    clearmonbg 2
    end

Move_LEAF_BLADE:: @ 81CCF17
    loadsprite 10063
    loadsprite 10285
    createtask sub_80A39C0, 5,
    pause 2
    createtask sub_8098B1C, 2, 1, 2, 0, 8, 1
    panse_19 121, 63
    pause 50
    createtask sub_8098B1C, 2, 1, 2, 0, 8, 1
    panse_19 121, 63
    pause 50
    createtask sub_8098B1C, 2, 1, 2, 0, 8, 1
    panse_19 121, 63
    wait
    monbg 1
    setalpha 12, 8
    pause 12
    createtask sub_8098B1C, 2, 1, 8, 0, 18, 1
    sprite 0x83E7C80, 130, 0, 0, 1, 36
    panse_19 185, 63
    wait
    clearmonbg 1
    blendoff
    end

Move_DRAGON_DANCE:: @ 81CCF9A
    loadsprite 10249
    monbg 0
    monbgprio_28 0
    pause 1
    createtask sub_80B75E0, 5,
    panse_19 196, 192
    pause 8
    createtask sub_8076288, 5, 10249, 19456, 14, 0, 3
    sprite 0x83E7848, 2, 0
    sprite 0x83E7848, 2, 43
    sprite 0x83E7848, 2, 85
    sprite 0x83E7848, 2, 128
    sprite 0x83E7848, 2, 170
    sprite 0x83E7848, 2, 213
    pause 30
    panse_19 196, 192
    pause 30
    panse_19 196, 192
    wait
    clearmonbg 0
    pause 1
    end

Move_SHOCK_WAVE:: @ 81CD009
    loadsprite 10211
    loadsprite 10212
    loadsprite 10001
    loadsprite 10037
    monbg 0
    setalpha 12, 8
    sprite 0x83E7B24, 2, 1, 2, 0, 4, 0
    wait
    createtask sub_80AE540, 2, 0, 20, 0, 2
    panse_19 206, 192
    pause 12
    sprite 0x83E6290, 2,
    pause 30
    createtask sub_80AECE0, 5,
    pause 12
    wait
    createtask sub_80AEFA0, 5,
    panse_19 214, 63
    wait
    createtask sub_80989F8, 2, 1, 0, 6, 18, 1
    createtask sub_80BA7F8, 5, 1, 3, 16, 0, 32767
    createtask sub_80BA7F8, 5, 4, 0, 16, 16, 0
    pause 4
    createtask sub_80BA7F8, 5, 4, 0, 0, 0, 0
    wait
    clearmonbg 0
    blendoff
    end

Move_HARDEN:: @ 81CD0AB
    panse_1C 113, 192, 28, 2
    createtask sub_80B86EC, 5, 0, 0, 0
    wait
    end

Move_BELLY_DRUM:: @ 81CD0C0
    loadsprite 10072
    loadsprite 10193
    createtask sub_80A65E8, 2,
    wait
    call MoveFn_81CD18D
    sprite 0x83E3914, 2, 0, 0, 0, 0
    panse_19 178, 192
    pause 15
    call MoveFn_81CD172
    sprite 0x83E3914, 2, 1, 1, 1, 0
    panse_19 178, 192
    pause 15
    call MoveFn_81CD18D
    sprite 0x83E3914, 2, 0, 3, 3, 128
    panse_19 178, 192
    pause 7
    call MoveFn_81CD172
    sprite 0x83E3914, 2, 1, 2, 0, 128
    panse_19 178, 192
    pause 7
    call MoveFn_81CD18D
    sprite 0x83E3914, 2, 0, 1, 1, 0
    panse_19 178, 192
    pause 7
    call MoveFn_81CD172
    sprite 0x83E3914, 2, 1, 0, 3, 0
    panse_19 178, 192
    wait
    createtask sub_80A66A0, 2,
    wait
    end

MoveFn_81CD172:: @ 81CD172
    sprite 0x83E38E0, 3, 0
    createtask sub_80989F8, 2, 0, 0, 8, 2, 1
    ret

MoveFn_81CD18D:: @ 81CD18D
    sprite 0x83E38E0, 3, 1
    createtask sub_80989F8, 2, 0, 0, 8, 2, 1
    ret

Move_MIND_READER:: @ 81CD1A8
    loadsprite 10189
    loadsprite 10190
    loadsprite 10191
    monbg 4
    panse_19 189, 63
    sprite 0x83FEE5C, 5, 0, 0, 1, 0
    sprite 0x83FEE74, 5,
    pause 40
    panse_19 185, 63
    createtask sub_80B9BDC, 2, 1, 1, 2, 0, 10, 0
    call MoveFn_81CD1EF
    wait
    clearmonbg 4
    end

MoveFn_81CD1EF:: @ 81CD1EF
    sprite 0x83FEE8C, 4, 70, 0, 6
    sprite 0x83FEE8C, 4, 40, 40, 6
    sprite 0x83FEE8C, 4, 10, -60, 6
    sprite 0x83FEE8C, 4, -50, -40, 6
    sprite 0x83FEE8C, 4, -40, 40, 6
    sprite 0x83FEE8C, 4, 50, -50, 6
    pause 2
    sprite 0x83FEE8C, 4, 50, -30, 6
    sprite 0x83FEE8C, 4, 60, 10, 6
    sprite 0x83FEE8C, 4, 0, 60, 6
    sprite 0x83FEE8C, 4, 0, -40, 6
    sprite 0x83FEE8C, 4, -60, 20, 6
    sprite 0x83FEE8C, 4, -60, -30, 6
    pause 2
    sprite 0x83FEE8C, 4, -50, 50, 6
    sprite 0x83FEE8C, 4, -60, 20, 6
    sprite 0x83FEE8C, 4, -40, -40, 6
    sprite 0x83FEE8C, 4, 20, -60, 6
    sprite 0x83FEE8C, 4, 50, -50, 6
    sprite 0x83FEE8C, 4, 35, 40, 6
    pause 2
    ret

Move_ICE_PUNCH:: @ 81CD2E0
    monbg 3
    setalpha 12, 8
    loadsprite 10141
    loadsprite 10135
    loadsprite 10143
    sprite 0x83E7B24, 2, 1, 1, 0, 7, 0
    createtask sub_80BA7F8, 10, 4, 2, 0, 9, 32588
    pause 20
    panse_19 122, 63
    sprite 0x83E6360, 2, 0
    sprite 0x83E6360, 2, 64
    sprite 0x83E6360, 2, 128
    sprite 0x83E6360, 2, 192
    pause 5
    sprite 0x83E6348, 2, 32
    sprite 0x83E6348, 2, 96
    sprite 0x83E6348, 2, 160
    sprite 0x83E6348, 2, 224
    pause 17
    sprite 0x83E6710, 4, 0, -10, 8, 1, 0
    sprite 0x83E7C08, 3, 0, -10, 1, 1
    panse_19 132, 63
    pause 2
    createtask sub_80989F8, 5, 1, 0, 5, 3, 1
    wait
    pause 15
    call MoveFn_81D540A
    pause 5
    createtask sub_80BA7F8, 10, 4, 2, 9, 0, 32588
    wait
    sprite 0x83E7B24, 2, 1, 0, 7, 0, 0
    wait
    clearmonbg 3
    blendoff
    end

Move_REST:: @ 81CD3CB
    panse_19 190, 192
    loadsprite 10228
    sprite 0x83E3500, 2, 4, -10, 16, 0, 0
    pause 20
    sprite 0x83E3500, 2, 4, -10, 16, 0, 0
    pause 20
    sprite 0x83E3500, 2, 4, -10, 16, 0, 0
    wait
    end

Move_CONFUSION:: @ 81CD40B
    monbg 3
    call MoveFn_81D59BB
    setalpha 8, 8
    createtask sub_8098B1C, 2, 0, 1, 0, 10, 1
    createtask sub_80B9BDC, 2, 2, 0, 2, 0, 8, 32767
    wait
    panse_19 177, 63
    createtask sub_80989F8, 2, 1, 3, 0, 15, 1
    createtask sub_80998B0, 5, -4, -4, 15, 1, 1
    wait
    clearmonbg 3
    blendoff
    pause 1
    call MoveFn_81D59C7
    end

Move_PSYCHIC:: @ 81CD46C
    monbg 3
    call MoveFn_81D59BB
    setalpha 8, 8
    createtask sub_8098B1C, 2, 0, 1, 0, 10, 1
    createtask sub_80B9BDC, 2, 2, 0, 2, 0, 8, 767
    wait
    panse_1C 177, 63, 10, 3
    createtask sub_80989F8, 2, 1, 5, 0, 15, 1
    createtask sub_80998B0, 5, -6, -6, 15, 1, 1
    wait
    clearmonbg 3
    blendoff
    pause 1
    call MoveFn_81D59C7
    end

Move_FUTURE_SIGHT:: @ 81CD4CF
    jump .L81CD4DD

.L81CD4D4:
    wait
    pause 1
    call MoveFn_81D59C7
    end

.L81CD4DD:
    monbg 2
    panse_19 182, 192
    call MoveFn_81D59BB
    setalpha 8, 8
    panse_19 177, 192
    createtask sub_80B9BDC, 2, 2, 0, 2, 0, 8, 32767
    createtask sub_80998B0, 5, -4, -4, 15, 0, 1
    wait
    clearmonbg 2
    blendoff
    jump .L81CD4D4

unk_81CD51C:: @81CD51C
    monbg 3
    panse_19 182, 192
    call MoveFn_81D59BB
    setalpha 8, 8
    panse_19 177, 63
    panse_1D 177, 63, 8
    createtask sub_80989F8, 2, 1, 4, 0, 15, 1
    createtask sub_80998B0, 5, -5, -5, 15, 1, 1
    wait
    createtask sub_80989F8, 2, 1, 4, 0, 24, 1
    wait
    clearmonbg 3
    blendoff
    jump .L81CD4D4

Move_THUNDER:: @ 81CD570
    loadsprite 10037
    fadetobg 11
    waitbgfadeout
    createtask sub_80BB82C, 5, -256, 0, 1, -1
    waitbgfadein
    sprite 0x83E7B24, 2, 1, 2, 0, 16, 0
    pause 16
    createtask sub_80BA0E8, 2, 257, 257, 257
    panse_19 131, 63
    pause 1
    sprite 0x83E5F38, 130, 16, -36
    pause 1
    sprite 0x83E5F38, 130, 16, -20
    pause 1
    sprite 0x83E5F38, 130, 16, 12
    pause 20
    sprite 0x83E5F38, 134, -16, -32
    panse_19 131, 63
    pause 1
    sprite 0x83E5F38, 134, -16, -16
    pause 1
    sprite 0x83E5F38, 134, -16, 16
    panse_19 131, 63
    pause 5
    createtask sub_80BA0E8, 2, 257, 257, 257
    pause 1
    sprite 0x83E5F38, 130, 24, -32
    pause 1
    sprite 0x83E5F38, 130, 24, -16
    pause 1
    sprite 0x83E5F38, 130, 24, 16
    pause 30
    createtask sub_80BA0E8, 2, 257, 257, 257
    pause 5
    createtask sub_80BA0E8, 2, 257, 257, 257
    pause 1
    sprite 0x83E5F38, 130, 0, -32
    panse_19 214, 63
    pause 1
    sprite 0x83E5F38, 130, 0, -16
    pause 1
    sprite 0x83E5F38, 130, 0, 16
    pause 10
    createtask sub_80BA0E8, 2, 257, 257, 257
    pause 1
    createtask sub_80ADAD8, 2, 30, 3, 1, 0
    pause 2
    createtask sub_80BA0E8, 2, 257, 257, 257
    pause 1
    sprite 0x83E7B24, 130, 1, 2, 16, 0, 0
    wait
    restorebg
    waitbgfadeout
    setvar 7, -1
    waitbgfadein
    end

Move_THUNDER_PUNCH:: @ 81CD6CA
    loadsprite 10135
    loadsprite 10143
    loadsprite 10037
    monbg 1
    setalpha 12, 8
    sprite 0x83E7B24, 2, 1, 2, 0, 16, 0
    wait
    panse_19 132, 63
    sprite 0x83E6710, 132, 0, 0, 8, 1, 0
    sprite 0x83E7C08, 131, 0, 0, 1, 1
    pause 1
    createtask sub_80BA0E8, 2, 257, 257, 257
    pause 1
    sprite 0x83E5F38, 130, 0, -48
    pause 1
    sprite 0x83E5F38, 2, 0, -16
    pause 1
    sprite 0x83E5F38, 2, 0, 16
    pause 1
    panse_19 214, 63
    createtask sub_80BA0E8, 2, 257, 257, 257
    pause 2
    createtask sub_80989F8, 2, 1, 0, 3, 15, 1
    sprite 0x83E7C08, 3, 0, 0, 1, 2
    pause 1
    sprite 0x83E7B24, 2, 1, 2, 16, 0, 0
    pause 20
    wait
    clearmonbg 1
    blendoff
    end

Move_SACRED_FIRE:: @ 81CD793
    loadsprite 10033
    loadsprite 10035
    panse_1C 142, 192, 7, 5
    sprite 0x83E5CA0, 2, -32, 0, 50, 5, -2, 0
    pause 1
    sprite 0x83E5CA0, 66, -20, -10, 50, 5, -1, -1
    pause 1
    sprite 0x83E5CA0, 66, 0, -16, 50, 5, 0, -1
    pause 1
    sprite 0x83E5CA0, 66, 20, -10, 50, 5, 1, -1
    pause 1
    sprite 0x83E5CA0, 2, 32, 0, 50, 5, 2, 0
    pause 1
    sprite 0x83E5CA0, 2, 20, 10, 50, 5, 1, 1
    pause 1
    createtask sub_80BA0E8, 2, 257, 257, 257
    pause 1
    sprite 0x83E5CA0, 2, 0, 16, 50, 5, 0, 1
    pause 1
    sprite 0x83E5CA0, 2, -20, 10, 50, 5, -1, 1
    createtask sub_80BA0E8, 2, 257, 257, 257
    pause 1
    wait
    panse_19 143, 63
    sprite 0x83E5C70, 130, -16, 0, 70, 16, 0, 1
    pause 10
    panse_19 143, 63
    sprite 0x83E5C70, 130, 0, 0, 70, 16, 0, 1
    pause 10
    panse_19 143, 63
    sprite 0x83E5C70, 130, 16, 0, 80, 16, 0, 1
    pause 1
    createtask sub_80BA0E8, 2, 257, 257, 257
    pause 1
    wait
    createtask sub_80BA0E8, 2, 257, 257, 257
    pause 1
    panse_19 138, 63
    sprite 0x83E5C88, 130, 0, 0, 30, 30, -1, 0
    pause 1
    sprite 0x83E5C88, 130, 0, 0, 30, 30, 0, 1
    pause 1
    sprite 0x83E5C88, 130, 0, 0, 30, 30, -1, -1
    pause 1
    sprite 0x83E5C88, 130, 0, 0, 30, 30, 2, 1
    pause 1
    sprite 0x83E5C88, 130, 0, 0, 30, 30, 1, -1
    pause 1
    sprite 0x83E5C88, 130, 0, 0, 30, 30, -1, 1
    pause 1
    sprite 0x83E5C88, 130, 0, 0, 30, 30, 1, -2
    pause 1
    sprite 0x83E5C88, 130, 0, 0, 30, 30, 3, 1
    wait
    end

Move_SCRATCH:: @ 81CD97A
    loadsprite 10137
    monbg 1
    setalpha 12, 8
    panse_19 148, 63
    sprite 0x83FEE00, 2, 0, 0, 1, 0
    createtask sub_80989F8, 2, 1, 3, 0, 6, 1
    wait
    clearmonbg 1
    blendoff
    wait
    end

Move_DRAGON_BREATH:: @ 81CD9AC
    loadsprite 10029
    monbg 3
    monbgprio_28 1
    panse_1C 137, 192, 7, 7
    sprite 0x83E77A4, 130, 0, 0, 0, 0, 20
    pause 2
    sprite 0x83E77A4, 130, 0, 0, 0, 0, 20
    pause 2
    createtask sub_80BA7F8, 10, 4, 1, 0, 9, 31
    sprite 0x83E77A4, 130, 0, 0, 0, 0, 20
    pause 2
    createtask sub_8098B1C, 2, 1, 2, 0, 21, 1
    sprite 0x83E77A4, 130, 0, 0, 0, 0, 20
    pause 2
    sprite 0x83E77A4, 130, 0, 0, 0, 0, 20
    pause 2
    sprite 0x83E77A4, 130, 0, 0, 0, 0, 20
    pause 2
    sprite 0x83E77A4, 130, 0, 0, 0, 0, 20
    pause 2
    sprite 0x83E77A4, 130, 0, 0, 0, 0, 20
    pause 2
    sprite 0x83E77A4, 130, 0, 0, 0, 0, 20
    pause 2
    sprite 0x83E77A4, 130, 0, 0, 0, 0, 20
    pause 2
    sprite 0x83E77A4, 130, 0, 0, 0, 0, 20
    wait
    createtask sub_80BA7F8, 10, 4, 1, 9, 0, 31
    wait
    clearmonbg 3
    end

Move_ROAR:: @ 81CDAC0
    loadsprite 10053
    monbg 0
    monbgprio_28 0
    setalpha 8, 8
    createtask sub_80DD148, 2, 0, 2
    createtask sub_80998B0, 5, -5, -5, 10, 0, 1
    call MoveFn_81CDB06
    pause 20
    createtask sub_80995FC, 5, 1, 2
    wait
    clearmonbg 0
    blendoff
    wait
    createtask sub_80DD2F4, 5,
    wait
    end

MoveFn_81CDB06:: @ 81CDB06
    sprite 0x83FF5B4, 2, 24, -8, 0
    sprite 0x83FF5B4, 2, 24, 0, 2
    sprite 0x83FF5B4, 2, 24, 8, 1
    pause 15
    sprite 0x83FF5B4, 2, 24, -8, 0
    sprite 0x83FF5B4, 2, 24, 0, 2
    sprite 0x83FF5B4, 2, 24, 8, 1
    ret

Move_GROWL:: @ 81CDB57
    loadsprite 10053
    createtask sub_80DD148, 2, 0, 255
    call MoveFn_81CDB06
    pause 10
    createtask sub_8098B1C, 2, 1, 1, 0, 9, 1
    createtask sub_8098B1C, 2, 3, 1, 0, 9, 1
    wait
    createtask sub_80DD2F4, 5,
    wait
    end

Move_SNORE:: @ 81CDB98
    loadsprite 10197
    monbg 2
    setalpha 8, 8
    call MoveFn_81CDBB1
    pause 30
    call MoveFn_81CDBB1
    wait
    clearmonbg 2
    blendoff
    end

MoveFn_81CDBB1:: @ 81CDBB1
    panse_19 190, 192
    createtask sub_80998B0, 5, -7, -7, 7, 0, 1
    createtask sub_8098B1C, 2, 1, 4, 0, 7, 1
    sprite 0x83E7B88, 2, 6, 1, 14, 0, 0
    sprite 0x83E3F64, 2, 0, 0, -42, -38, 24, 0, 0
    sprite 0x83E3F64, 2, 0, 0, 0, -42, 24, 0, 0
    sprite 0x83E3F64, 2, 0, 0, 42, -38, 24, 0, 0
    ret

Move_LIGHT_SCREEN:: @ 81CDC28
    loadsprite 10070
    loadsprite 10166
    setalpha 0, 16
    panse_1D 200, 192, 15
    sprite 0x83E6E10, 1, 40, 0, 10166
    pause 10
    call MoveFn_81CDC4F
    wait
    pause 1
    blendoff
    end

MoveFn_81CDC4F:: @ 81CDC4F
    sprite 0x83E6ED4, 2, 23, 0, 0, 1
    pause 6
    sprite 0x83E6ED4, 2, 31, -8, 0, 1
    pause 5
    sprite 0x83E6ED4, 2, 30, 20, 0, 1
    pause 7
    sprite 0x83E6ED4, 2, 10, -15, 0, 1
    pause 6
    sprite 0x83E6ED4, 2, 20, 10, 0, 1
    pause 6
    sprite 0x83E6ED4, 2, 10, 18, 0, 1
    ret

Move_MIRROR_COAT:: @ 81CDCB4
    loadsprite 10070
    loadsprite 10168
    setalpha 0, 16
    sprite 0x83E6E40, 1, 40, 0, 10168
    pause 10
    panse_19 200, 192
    call MoveFn_81CDC4F
    wait
    pause 1
    blendoff
    end

Move_REFLECT:: @ 81CDCDA
    loadsprite 10071
    loadsprite 10167
    setalpha 0, 16
    panse_1D 200, 192, 15
    sprite 0x83E6E28, 1, 40, 0, 10167
    pause 20
    sprite 0x83E6EA4, 2, 30, 0, 0, 1
    pause 7
    sprite 0x83E6EA4, 2, 19, -12, 0, 1
    pause 7
    sprite 0x83E6EA4, 2, 10, 20, 0, 1
    wait
    pause 1
    blendoff
    end

Move_BARRIER:: @ 81CDD2D
    loadsprite 10169
    setalpha 0, 16
    panse_1D 201, 192, 15
    sprite 0x83E6E58, 3, 40, 0, 10169
    wait
    pause 1
    blendoff
    end

Move_BUBBLE:: @ 81CDD4A
    loadsprite 10146
    loadsprite 10155
    monbg 1
    setalpha 12, 8
    pause 1
    sprite 0x83E58E0, 2, 18, 0, 15, -15, 10, 128, 100
    panse_19 117, 192
    panse_1D 118, 63, 100
    pause 6
    sprite 0x83E58E0, 2, 18, 0, 35, 37, 40, 128, 100
    panse_19 117, 192
    panse_1D 118, 63, 100
    pause 6
    sprite 0x83E58E0, 2, 18, 0, 10, -37, 30, 128, 100
    panse_19 117, 192
    panse_1D 118, 63, 100
    pause 6
    sprite 0x83E58E0, 2, 18, 0, 30, 10, 15, 128, 100
    panse_19 117, 192
    panse_1D 118, 63, 100
    pause 6
    sprite 0x83E58E0, 2, 18, 0, 20, 33, 20, 128, 100
    panse_19 117, 192
    panse_1D 118, 63, 100
    pause 6
    sprite 0x83E58E0, 2, 18, 0, 25, -30, 10, 128, 100
    panse_19 117, 192
    panse_1D 118, 63, 100
    wait
    call MoveFn_81D583D
    wait
    clearmonbg 1
    blendoff
    end

Move_SMOG:: @ 81CDE20
    loadsprite 10172
    monbg 3
    monbgprio_29
    setalpha 12, 8
    panse_1C 161, 63, 17, 10
    call MoveFn_81CDE85
    call MoveFn_81CDE85
    call MoveFn_81CDE85
    call MoveFn_81CDE85
    call MoveFn_81CDE85
    call MoveFn_81CDE85
    call MoveFn_81CDE85
    pause 120
    panse_1C 141, 63, 18, 2
    createtask sub_80B9BDC, 2, 4, 2, 2, 0, 12, 26650
    pause 10
    createtask sub_8098B1C, 2, 1, 2, 0, 15, 1
    wait
    clearmonbg 3
    blendoff
    end

MoveFn_81CDE85:: @ 81CDE85
    sprite 0x83E64BC, 2, 0, -24, 48, 240, 1, 0
    pause 7
    ret

Move_FAINT_ATTACK:: @ 81CDE9B
    loadsprite 10135
    monbg 0
    fadetobg 1
    waitbgfadein
    pause 0
    panse_19 183, 192
    createtask sub_809907C, 2, 0, 18, 6, 1, 3
    createtask sub_80B78E0, 2, 1
    wait
    clearmonbg 0
    invisible 0
    pause 1
    createtask sub_80BC12C, 2,
    monbg 1
    setalpha 12, 8
    pause 1
    panse_19 116, 63
    sprite 0x83E7C08, 2, 0, 0, 1, 1
    createtask sub_8098B1C, 2, 1, 2, 0, 9, 1
    wait
    clearmonbg 1
    blendoff
    pause 1
    setvar 7, 4096
    pause 32
    createtask sub_80B7A80, 2,
    monbg 0
    createtask sub_80B79DC, 2, 1
    wait
    clearmonbg 0
    pause 1
    restorebg
    waitbgfadein
    end

Move_SAND_ATTACK:: @ 81CDF22
    loadsprite 10074
    monbg 2
    monbgprio_28 0
    setalpha 12, 8
    panse_19 152, 192
    sprite 0x83D4E9C, 2, 0, -10, 0, 0, 3
    wait
    sprite 0x83D4E84, 2, 0, 0, 2
    call MoveFn_81CDF72
    call MoveFn_81CDF72
    call MoveFn_81CDF72
    call MoveFn_81CDF72
    call MoveFn_81CDF72
    call MoveFn_81CDF72
    wait
    clearmonbg 2
    blendoff
    end

MoveFn_81CDF72:: @ 81CDF72
    sprite 0x83E7A58, 130, 15, 15, 20, 0, 0
    sprite 0x83E7A58, 130, 15, 15, 20, 10, 10
    sprite 0x83E7A58, 130, 15, 15, 20, -10, -10
    sprite 0x83E7A58, 130, 15, 15, 20, 20, 5
    sprite 0x83E7A58, 130, 15, 15, 20, -20, -5
    pause 2
    ret

Move_MUD_SLAP:: @ 81CDFCA
    loadsprite 10074
    panse_19 152, 192
    sprite 0x83D4E9C, 2, 0, -10, 0, 0, 3
    wait
    sprite 0x83D4E84, 2, 0, 0, 2
    call MoveFn_81CE010
    call MoveFn_81CE010
    call MoveFn_81CE010
    call MoveFn_81CE010
    call MoveFn_81CE010
    call MoveFn_81CE010
    wait
    end

MoveFn_81CE010:: @ 81CE010
    sprite 0x83E7A7C, 130, 15, 15, 20, 0, 0
    sprite 0x83E7A7C, 130, 15, 15, 20, 10, 5
    sprite 0x83E7A7C, 130, 15, 15, 20, -10, -5
    sprite 0x83E7A7C, 130, 15, 15, 20, 20, 10
    sprite 0x83E7A7C, 130, 15, 15, 20, -20, -10
    pause 2
    ret

Move_DRAGON_RAGE:: @ 81CE068
    loadsprite 10029
    loadsprite 10035
    panse_19 164, 192
    createtask sub_80989F8, 5, 0, 0, 2, 40, 1
    wait
    sprite 0x83D4E9C, 130, 0, 15, 0, 0, 4
    wait
    sprite 0x83E7830, 130, 30, 15, 0, 10, 10
    wait
    panse_1C 138, 63, 11, 3
    createtask sub_80989F8, 5, 1, 0, 3, 25, 1
    sprite 0x83E77D8, 194, 1, 5, 0
    pause 1
    sprite 0x83E77D8, 194, 1, -10, -15
    pause 1
    sprite 0x83E77D8, 130, 1, 0, 25
    pause 1
    sprite 0x83E77D8, 194, 1, 15, 5
    pause 1
    sprite 0x83E77D8, 194, 1, -25, 0
    pause 1
    sprite 0x83E77D8, 130, 1, 30, 30
    pause 1
    sprite 0x83E77D8, 130, 1, -27, 25
    pause 1
    sprite 0x83E77D8, 194, 1, 0, 8
    wait
    sprite 0x83D4E84, 194, 0, 0, 4
    wait
    end

Move_RAIN_DANCE:: @ 81CE145
    loadsprite 10115
    panse_19 120, 192
    createtask sub_80BA7F8, 10, 1921, 2, 0, 4, 0
    wait
    createtask sub_80AABC0, 2, 0, 3, 120
    createtask sub_80AABC0, 2, 0, 3, 120
    pause 120
    pause 30
    wait
    createtask sub_80BA7F8, 10, 1921, 2, 4, 0, 0
    wait
    end

Move_BITE:: @ 81CE190
    loadsprite 10139
    loadsprite 10135
    monbg 1
    setalpha 12, 8
    panse_19 154, 63
    sprite 0x83E7930, 2, 0, -32, 0, 0, 819, 10
    sprite 0x83E7930, 2, 0, 32, 4, 0, -819, 10
    pause 10
    sprite 0x83E7C08, 2, 0, 0, 1, 2
    createtask sub_80989F8, 5, 1, 0, 4, 7, 1
    wait
    clearmonbg 1
    blendoff
    pause 1
    end

Move_CRUNCH:: @ 81CE1EE
    loadsprite 10139
    loadsprite 10135
    monbg 1
    fadetobg 1
    waitbgfadein
    setalpha 12, 8
    panse_19 154, 63
    sprite 0x83E7930, 2, -32, -32, 1, 819, 819, 10
    sprite 0x83E7930, 2, 32, 32, 5, -819, -819, 10
    pause 10
    sprite 0x83E7C08, 2, -8, 0, 1, 1
    createtask sub_80989F8, 5, 1, 0, 7, 5, 2
    wait
    panse_19 154, 63
    sprite 0x83E7930, 2, 32, -32, 7, -819, 819, 10
    sprite 0x83E7930, 2, -32, 32, 3, 819, -819, 10
    pause 10
    sprite 0x83E7C08, 2, 8, 0, 1, 1
    createtask sub_80989F8, 5, 1, 0, 8, 4, 2
    wait
    clearmonbg 1
    blendoff
    pause 1
    restorebg
    waitbgfadein
    end

Move_CLAMP:: @ 81CE29E
    loadsprite 10145
    loadsprite 10135
    monbg 1
    setalpha 12, 8
    panse_19 149, 63
    sprite 0x83E7948, 2, -32, 0, 2, 819, 0, 10
    sprite 0x83E7948, 2, 32, 0, 6, -819, 0, 10
    pause 10
    sprite 0x83E7C08, 2, 0, 0, 1, 2
    createtask sub_80989F8, 5, 1, 3, 0, 5, 1
    wait
    clearmonbg 1
    blendoff
    wait
    end

Move_ICE_BEAM:: @ 81CE2FB
    monbg 1
    monbgprio_28 1
    setalpha 12, 8
    loadsprite 10141
    sprite 0x83E7B24, 2, 1, 1, 0, 7, 0
    wait
    createtask_1F mas_80DCF38, 176, 65472, 63, 4, 4, 0, 10
    sprite 0x83E63A4, 2, 20, 12, 0, 12, 20
    sprite 0x83E63A4, 2, 20, -12, 0, -12, 20
    pause 1
    call MoveFn_81CE3FC
    call MoveFn_81CE3FC
    call MoveFn_81CE3FC
    sprite 0x83E7B24, 2, 4, -31, 0, 7, 32384
    createtask sub_8098B1C, 2, 1, 2, 0, 25, 1
    call MoveFn_81CE3FC
    call MoveFn_81CE3FC
    call MoveFn_81CE3FC
    call MoveFn_81CE3FC
    call MoveFn_81CE3FC
    call MoveFn_81CE3FC
    call MoveFn_81CE3FC
    call MoveFn_81CE3FC
    sprite 0x83E638C, 2, 20, 0, 0, 0, 11
    pause 1
    sprite 0x83E638C, 2, 20, 0, 0, 0, 11
    wait
    pause 20
    call MoveFn_81D540A
    sprite 0x83E7B24, 2, 4, 5, 7, 0, 32384
    wait
    sprite 0x83E7B24, 2, 1, 0, 7, 0, 0
    wait
    clearmonbg 1
    blendoff
    end

MoveFn_81CE3FC:: @ 81CE3FC
    sprite 0x83E63A4, 2, 20, 12, 0, 12, 20
    sprite 0x83E63A4, 2, 20, -12, 0, -12, 20
    sprite 0x83E638C, 2, 20, 0, 0, 0, 11
    pause 1
    ret

Move_WITHDRAW:: @ 81CE432
    panse_19 155, 192
    createtask sub_80A70A0, 5,
    wait
    end

Move_AURORA_BEAM:: @ 81CE43F
    loadsprite 10140
    fadetobg 20
    waitbgfadein
    panse_19 175, 192
    setvar 7, 0
    createtask sub_80AAF60, 10, 130
    call MoveFn_81CE4C6
    createtask sub_8098B1C, 5, 1, 1, 0, 17, 1
    call MoveFn_81CE4C6
    call MoveFn_81CE4C6
    call MoveFn_81CE4C6
    setvar 7, -1
    createtask_1F mas_80DCF38, 176, 65472, 63, 3, 6, 0, 10
    createtask sub_8098B1C, 5, 1, 2, 0, 40, 1
    call MoveFn_81CE4C6
    call MoveFn_81CE4C6
    call MoveFn_81CE4C6
    call MoveFn_81CE4C6
    call MoveFn_81CE4C6
    call MoveFn_81CE4C6
    wait
    restorebg
    waitbgfadein
    end

MoveFn_81CE4C6:: @ 81CE4C6
    sprite 0x83E592C, 130, 20, 0, 0, 0, 17
    pause 1
    sprite 0x83E592C, 130, 20, 0, 0, 0, 17
    pause 1
    sprite 0x83E592C, 130, 20, 0, 0, 0, 17
    pause 1
    sprite 0x83E592C, 130, 20, 0, 0, 0, 17
    pause 1
    ret

Move_SOLAR_BEAM:: @ 81CE513
    loadsprite 10147
    ifelse .L81CE521, .L81CE61E
.L81CE51F:
    wait
    end
.L81CE521:
    monbg 2
    setalpha 12, 8
    createtask sub_80B9BDC, 2, 2, 1, 4, 0, 11, 12287
    panse_19 133, 192
    call MoveFn_81CE54B
    wait
    clearmonbg 2
    blendoff
    jump .L81CE51F

MoveFn_81CE54B:: @ 81CE54B
    sprite 0x83E2A58, 2, 40, 40, 16
    pause 2
    sprite 0x83E2A58, 2, -40, -40, 16
    pause 2
    sprite 0x83E2A58, 2, 0, 40, 16
    pause 2
    sprite 0x83E2A58, 2, 0, -40, 16
    pause 2
    sprite 0x83E2A58, 2, 40, -20, 16
    pause 2
    sprite 0x83E2A58, 2, 40, 20, 16
    pause 2
    sprite 0x83E2A58, 2, -40, -20, 16
    pause 2
    sprite 0x83E2A58, 2, -40, 20, 16
    pause 2
    sprite 0x83E2A58, 2, -20, 30, 16
    pause 2
    sprite 0x83E2A58, 2, 20, -30, 16
    pause 2
    sprite 0x83E2A58, 2, -20, -30, 16
    pause 2
    sprite 0x83E2A58, 2, 20, 30, 16
    pause 2
    sprite 0x83E2A58, 2, -40, 0, 16
    pause 2
    sprite 0x83E2A58, 2, 40, 0, 16
    pause 2
    ret

.L81CE61E:
    call MoveFn_81D5A07
    panse_1B 194, 192, 63, 2, 0
    createtask sub_80A2500, 5,
    sprite 0x83E2A70, 131, 15, 0, 20, 0
    pause 4
    sprite 0x83E2A70, 131, 15, 0, 20, 1
    pause 4
    createtask sub_80BA7F8, 10, 4, 1, 0, 10, 1017
    sprite 0x83E2A70, 131, 15, 0, 20, 2
    pause 4
    createtask sub_8098B1C, 5, 1, 2, 0, 65, 1
    sprite 0x83E2A70, 131, 15, 0, 20, 3
    pause 4
    sprite 0x83E2A70, 131, 15, 0, 20, 4
    pause 4
    sprite 0x83E2A70, 131, 15, 0, 20, 5
    pause 4
    sprite 0x83E2A70, 131, 15, 0, 20, 6
    pause 4
    call MoveFn_81CE6F0
    call MoveFn_81CE6F0
    wait
    createtask sub_80BA7F8, 10, 4, 1, 10, 0, 1017
    call MoveFn_81D5A41
    jump .L81CE51F

MoveFn_81CE6F0:: @ 81CE6F0
    sprite 0x83E2A70, 131, 15, 0, 20, 0
    pause 4
    sprite 0x83E2A70, 131, 15, 0, 20, 1
    pause 4
    sprite 0x83E2A70, 131, 15, 0, 20, 2
    pause 4
    sprite 0x83E2A70, 131, 15, 0, 20, 3
    pause 4
    sprite 0x83E2A70, 131, 15, 0, 20, 4
    pause 4
    sprite 0x83E2A70, 131, 15, 0, 20, 5
    pause 4
    sprite 0x83E2A70, 131, 15, 0, 20, 6
    pause 4
    ret

Move_BLIZZARD:: @ 81CE768
    loadsprite 10141
    monbg 3
    createtask sub_80BB920, 2,
    jumpvareq 7, 1, .L81CE8ED
    fadetobg 9
.L81CE77E:
    waitbgfadeout
    createtask sub_80BB82C, 5, -2304, 0, 1, -1
    waitbgfadein
    wait
    panse_1B 146, 192, 63, 2, 0
    call MoveFn_81CE7B8
    call MoveFn_81CE7B8
    panse_19 147, 63
    wait
    call MoveFn_81D548E
    wait
    clearmonbg 3
    pause 20
    restorebg
    waitbgfadeout
    setvar 7, -1
    waitbgfadein
    end

MoveFn_81CE7B8:: @ 81CE7B8
    sprite 0x83E6410, 40, 0, -10, 0, -10, 72, 1
    sprite 0x83E6428, 40, 0, 0, 0, 0, 80, 0, 0, 1
    pause 3
    sprite 0x83E6410, 40, 0, -15, 0, -15, 72, 1
    sprite 0x83E6428, 40, 0, -10, 0, -10, 80, 0, 0, 1
    pause 3
    sprite 0x83E6410, 40, 0, -5, 0, -5, 72, 1
    sprite 0x83E6428, 40, 0, 10, 0, 10, 80, 0, 0, 1
    pause 3
    sprite 0x83E6410, 40, 0, -10, 0, -10, 72, 1
    sprite 0x83E6428, 40, 0, -20, 0, -20, 80, 0, 0, 1
    pause 3
    sprite 0x83E6410, 40, 0, -20, 0, -20, 72, 1
    sprite 0x83E6428, 40, 0, 15, 0, 15, 80, 0, 0, 1
    pause 3
    sprite 0x83E6410, 40, 0, -15, 0, -15, 72, 1
    sprite 0x83E6428, 40, 0, -20, 0, -20, 80, 0, 0, 1
    pause 3
    sprite 0x83E6410, 40, 0, -25, 0, -25, 72, 1
    sprite 0x83E6428, 40, 0, 20, 0, 20, 80, 0, 0, 1
    pause 3
    ret

.L81CE8ED:
    fadetobg 10
    jump .L81CE77E

Move_POWDER_SNOW:: @ 81CE8F4
    loadsprite 10141
    monbg 3
    sprite 0x83E7B24, 2, 31, 1, 0, 3, 0
    wait
    panse_1B 125, 192, 63, 2, 0
    call MoveFn_81CE93E
    call MoveFn_81CE93E
    panse_19 126, 63
    wait
    waitsound
    call MoveFn_81D548E
    wait
    clearmonbg 3
    pause 20
    sprite 0x83E7B24, 2, 31, 1, 3, 0, 0
    end

MoveFn_81CE93E:: @ 81CE93E
    sprite 0x83E6440, 40, 0, 0, 0, 0, 56, 4, 4, 1
    pause 3
    sprite 0x83E6440, 40, 0, -10, 0, -10, 56, 4, 4, 1
    pause 3
    sprite 0x83E6440, 40, 0, 10, 0, 10, 56, -4, 3, 1
    pause 3
    sprite 0x83E6440, 40, 0, -20, 0, -20, 56, -4, 5, 1
    pause 3
    sprite 0x83E6440, 40, 0, 15, 0, 15, 56, 4, 4, 1
    pause 3
    sprite 0x83E6440, 40, 0, -20, 0, -20, 56, 4, 4, 1
    pause 3
    sprite 0x83E6440, 40, 0, 20, 0, 20, 56, 4, 4, 1
    pause 3
    ret

Move_HYDRO_PUMP:: @ 81CE9EE
    loadsprite 10149
    loadsprite 10148
    monbg 3
    monbgprio_28 1
    setalpha 12, 8
    createtask sub_80989F8, 5, 0, 0, 2, 40, 1
    pause 6
    panse_1B 157, 192, 63, 2, 0
    createtask sub_80AB100, 5, 100
    call MoveFn_81CEA8D
    call MoveFn_81CEA8D
    call MoveFn_81CEA8D
    createtask sub_80989F8, 5, 1, 3, 0, 37, 1
    call MoveFn_81CEACE
    call MoveFn_81CEA8D
    call MoveFn_81CEA8D
    call MoveFn_81CEACE
    call MoveFn_81CEA8D
    call MoveFn_81CEA8D
    call MoveFn_81CEACE
    call MoveFn_81CEA8D
    call MoveFn_81CEA8D
    call MoveFn_81CEACE
    call MoveFn_81CEA8D
    call MoveFn_81CEA8D
    call MoveFn_81CEACE
    pause 1
    pause 1
    call MoveFn_81CEACE
    wait
    clearmonbg 3
    blendoff
    end

MoveFn_81CEA8D:: @ 81CEA8D
    sprite 0x83E595C, 3, 10, 10, 0, 16
    sprite 0x83E595C, 3, 10, 10, 0, -16
    pause 1
    sprite 0x83E595C, 3, 10, 10, 0, 16
    sprite 0x83E595C, 3, 10, 10, 0, -16
    pause 1
    ret

MoveFn_81CEACE:: @ 81CEACE
    sprite 0x83E7C38, 4, 0, 15, 1, 1
    sprite 0x83E7C38, 4, 0, -15, 1, 1
    ret

Move_SIGNAL_BEAM:: @ 81CEAED
    loadsprite 10264
    loadsprite 10265
    loadsprite 10073
    createtask sub_80989F8, 5, 0, 0, 2, 25, 1
    pause 6
    panse_1B 175, 192, 63, 1, 0
    createtask sub_80AB100, 5, 100
    call MoveFn_81CEBB4
    call MoveFn_81CEBB4
    call MoveFn_81CEBB4
    call MoveFn_81CEBB4
    call MoveFn_81CEBB4
    call MoveFn_81CEBB4
    createtask sub_80989F8, 5, 1, 3, 0, 25, 1
    sprite 0x83E7B3C, 2, 4, 8, 5, 31, 8, 961, 8
    call MoveFn_81CEBB4
    call MoveFn_81CEBB4
    call MoveFn_81CEBB4
    call MoveFn_81CEBB4
    call MoveFn_81CEBB4
    call MoveFn_81CEBB4
    call MoveFn_81CEBB4
    call MoveFn_81CEBB4
    call MoveFn_81CEBB4
    call MoveFn_81CEBB4
    call MoveFn_81CEBB4
    call MoveFn_81CEBB4
    call MoveFn_81CEBB4
    call MoveFn_81CEBB4
    call MoveFn_81CEBB4
    call MoveFn_81CEBB4
    call MoveFn_81CEBB4
    wait
    end

MoveFn_81CEBB4:: @ 81CEBB4
    sprite 0x83E598C, 131, 10, 10, 0, 16
    sprite 0x83E59A4, 131, 10, 10, 0, -16
    pause 1
    ret

Move_ABSORB:: @ 81CEBD5
    loadsprite 10147
    loadsprite 10031
    loadsprite 10135
    monbg 3
    monbgprio_2A 1
    setalpha 12, 8
    sprite 0x83E7B24, 2, 1, 1, 0, 4, 13293
    wait
    panse_19 173, 63
    sprite 0x83E7C08, 2, 0, 0, 1, 2
    pause 2
    createtask sub_80989F8, 5, 1, 0, 5, 5, 1
    wait
    pause 3
    call MoveFn_81CEC44
    wait
    pause 15
    call MoveFn_81D56C9
    wait
    sprite 0x83E7B24, 2, 1, 1, 4, 0, 13293
    wait
    clearmonbg 3
    blendoff
    end

MoveFn_81CEC44:: @ 81CEC44
    panse_19 135, 63
    sprite 0x83E2AE8, 3, 0, 5, 8, 26
    pause 4
    panse_19 135, 63
    sprite 0x83E2AE8, 3, 10, -5, -8, 26
    pause 4
    panse_19 135, 63
    sprite 0x83E2AE8, 3, -5, 15, 16, 33
    pause 4
    panse_19 135, 63
    sprite 0x83E2AE8, 3, 0, -15, -16, 36
    pause 4
    panse_19 135, 63
    sprite 0x83E2AE8, 3, 0, 5, 8, 26
    pause 4
    panse_19 135, 63
    sprite 0x83E2AE8, 3, 10, -5, -8, 26
    pause 4
    panse_19 135, 63
    sprite 0x83E2AE8, 3, -10, 20, 20, 39
    pause 4
    panse_19 135, 63
    sprite 0x83E2AE8, 3, 5, -18, -20, 35
    pause 4
    ret

Move_MEGA_DRAIN:: @ 81CECED
    loadsprite 10147
    loadsprite 10031
    loadsprite 10135
    monbg 3
    monbgprio_2A 1
    setalpha 12, 8
    sprite 0x83E7B24, 2, 1, 1, 0, 8, 13293
    wait
    panse_19 173, 63
    sprite 0x83E7C08, 2, 0, 0, 1, 1
    pause 2
    createtask sub_80989F8, 5, 1, 0, 5, 5, 1
    wait
    pause 3
    call MoveFn_81CED5C
    wait
    pause 15
    call MoveFn_81D56C9
    wait
    sprite 0x83E7B24, 2, 1, 1, 8, 0, 13293
    wait
    clearmonbg 3
    blendoff
    end

MoveFn_81CED5C:: @ 81CED5C
    panse_19 119, 63
    sprite 0x83E2AE8, 3, 0, 5, 8, 26
    sprite 0x83E2AE8, 3, 5, -18, -20, 35
    pause 4
    panse_19 119, 63
    sprite 0x83E2AE8, 3, 10, -5, -8, 26
    sprite 0x83E2AE8, 3, -10, 20, 20, 39
    pause 4
    panse_19 119, 63
    sprite 0x83E2AE8, 3, -5, 15, 16, 33
    sprite 0x83E2AE8, 3, 10, -5, -8, 26
    pause 4
    panse_19 119, 63
    sprite 0x83E2AE8, 3, 0, -15, -16, 36
    sprite 0x83E2AE8, 3, 0, 5, 8, 26
    pause 4
    panse_19 119, 63
    sprite 0x83E2AE8, 3, 0, 5, 8, 26
    sprite 0x83E2AE8, 3, 0, -15, -16, 36
    pause 4
    panse_19 119, 63
    sprite 0x83E2AE8, 3, 10, -5, -8, 26
    sprite 0x83E2AE8, 3, -5, 15, 16, 33
    pause 4
    panse_19 119, 63
    sprite 0x83E2AE8, 3, -10, 20, 20, 39
    sprite 0x83E2AE8, 3, 10, -5, -8, 26
    pause 4
    panse_19 119, 63
    sprite 0x83E2AE8, 3, 0, 5, 8, 26
    sprite 0x83E2AE8, 3, 5, -18, -20, 35
    pause 4
    ret

Move_GIGA_DRAIN:: @ 81CEE7D
    loadsprite 10147
    loadsprite 10031
    loadsprite 10135
    monbg 3
    monbgprio_2A 1
    setalpha 12, 8
    sprite 0x83E7B24, 2, 1, 1, 0, 12, 13293
    wait
    panse_19 173, 63
    sprite 0x83E7C08, 2, 0, 0, 1, 0
    pause 2
    createtask sub_80989F8, 5, 1, 0, 5, 5, 1
    wait
    pause 3
    call MoveFn_81CEEEC
    wait
    pause 15
    call MoveFn_81D56C9
    wait
    sprite 0x83E7B24, 2, 1, 1, 12, 0, 13293
    wait
    clearmonbg 3
    blendoff
    end

MoveFn_81CEEEC:: @ 81CEEEC
    panse_19 192, 63
    sprite 0x83E2AE8, 3, 0, 5, 8, 26
    sprite 0x83E2AE8, 3, 5, -18, -40, 35
    sprite 0x83E2AE8, 3, -10, 20, 20, 39
    pause 4
    panse_19 192, 63
    sprite 0x83E2AE8, 3, 0, 5, 28, 26
    sprite 0x83E2AE8, 3, 10, -5, -8, 26
    sprite 0x83E2AE8, 3, -10, 20, 40, 39
    pause 4
    panse_19 192, 63
    sprite 0x83E2AE8, 3, 10, -5, -8, 26
    sprite 0x83E2AE8, 3, -5, 15, 16, 33
    sprite 0x83E2AE8, 3, 10, -5, -32, 26
    pause 4
    panse_19 192, 63
    sprite 0x83E2AE8, 3, 0, -15, -16, 36
    sprite 0x83E2AE8, 3, 0, 5, 8, 26
    sprite 0x83E2AE8, 3, 10, -5, -8, 26
    pause 4
    panse_19 192, 63
    sprite 0x83E2AE8, 3, -5, 15, 16, 33
    sprite 0x83E2AE8, 3, 0, -15, -16, 36
    sprite 0x83E2AE8, 3, 0, 5, 8, 26
    pause 4
    panse_19 192, 63
    sprite 0x83E2AE8, 3, 0, 5, 8, 26
    sprite 0x83E2AE8, 3, -5, 15, 16, 33
    sprite 0x83E2AE8, 3, 10, -5, -40, 26
    pause 4
    panse_19 192, 63
    sprite 0x83E2AE8, 3, -5, 15, 36, 33
    sprite 0x83E2AE8, 3, 10, -5, -8, 26
    sprite 0x83E2AE8, 3, -10, 20, 20, 39
    pause 4
    panse_19 192, 63
    sprite 0x83E2AE8, 3, 0, 5, 8, 26
    sprite 0x83E2AE8, 3, 0, 5, 8, 26
    sprite 0x83E2AE8, 3, 5, -18, -20, 35
    pause 4
    ret

Move_LEECH_LIFE:: @ 81CF085
    loadsprite 10161
    loadsprite 10147
    pause 1
    loadsprite 10031
    loadsprite 10135
    monbg 3
    monbgprio_2A 1
    setalpha 12, 8
    pause 1
    sprite 0x83E7278, 2, -20, 15, 12
    wait
    sprite 0x83E7C08, 2, 0, 0, 1, 2
    panse_19 173, 63
    pause 2
    createtask sub_80989F8, 5, 1, 0, 5, 5, 1
    wait
    sprite 0x83E7B24, 2, 1, 1, 0, 7, 0
    wait
    call MoveFn_81CEC44
    wait
    pause 15
    call MoveFn_81D56C9
    wait
    sprite 0x83E7B24, 2, 1, 1, 7, 0, 0
    wait
    clearmonbg 3
    blendoff
    end

Move_SYNTHESIS:: @ 81CF107
    loadsprite 10031
    loadsprite 10049
    createtask sub_80B9BDC, 2, 2, 2, 2, 0, 16, 19451
    panse_19 133, 192
    call MoveFn_81D569E
    wait
    call MoveFn_81D56C9
    wait
    end

Move_TOXIC:: @ 81CF131
    loadsprite 10151
    loadsprite 10150
    call MoveFn_81CF14B
    call MoveFn_81CF14B
    wait
    pause 15
    call MoveFn_81D575B
    wait
    end

MoveFn_81CF14B:: @ 81CF14B
    sprite 0x83E69AC, 130, -24, 16, 1, 1
    panse_19 141, 63
    pause 15
    sprite 0x83E69AC, 130, 8, 16, 1, 1
    panse_19 141, 63
    pause 15
    sprite 0x83E69AC, 130, -8, 16, 1, 1
    panse_19 141, 63
    pause 15
    sprite 0x83E69AC, 130, 24, 16, 1, 1
    panse_19 141, 63
    pause 15
    ret

Move_SLUDGE:: @ 81CF1A0
    loadsprite 10150
    panse_19 119, 192
    sprite 0x83E6A20, 130, 20, 0, 40, 0
    wait
    createtask sub_80989F8, 5, 1, 3, 0, 5, 1
    createtask sub_80B9BDC, 2, 4, 1, 2, 0, 12, 31774
    call MoveFn_81D575B
    wait
    end

Move_SLUDGE_BOMB:: @ 81CF1E2
    loadsprite 10150
    call MoveFn_81CF2F2
    call MoveFn_81CF2F2
    call MoveFn_81CF2F2
    call MoveFn_81CF2F2
    call MoveFn_81CF2F2
    call MoveFn_81CF2F2
    call MoveFn_81CF2F2
    call MoveFn_81CF2F2
    call MoveFn_81CF2F2
    call MoveFn_81CF2F2
    createtask sub_8098B1C, 5, 1, 3, 0, 15, 1
    createtask sub_80B9BDC, 2, 4, 1, 2, 0, 12, 31774
    sprite 0x83E6A50, 130, 42, 27, 20
    sprite 0x83E6A50, 130, -27, 44, 20
    sprite 0x83E6A50, 130, 39, -28, 20
    sprite 0x83E6A50, 130, -42, -42, 20
    panse_19 168, 63
    pause 5
    sprite 0x83E6A50, 130, 0, 40, 20
    sprite 0x83E6A50, 130, -8, -44, 20
    sprite 0x83E6A50, 130, -46, -28, 20
    sprite 0x83E6A50, 130, 46, 9, 20
    panse_19 168, 63
    pause 5
    sprite 0x83E6A50, 130, 42, 0, 20
    sprite 0x83E6A50, 130, -43, -12, 20
    sprite 0x83E6A50, 130, 16, -46, 20
    sprite 0x83E6A50, 130, -16, 44, 20
    panse_19 168, 63
    pause 0
    waitsound
    wait
    call MoveFn_81D575B
    wait
    end

MoveFn_81CF2F2:: @ 81CF2F2
    panse_19 119, 192
    sprite 0x83E6A20, 130, 20, 0, 40, 0
    pause 3
    ret

Move_ACID:: @ 81CF308
    loadsprite 10150
    monbg 3
    sprite 0x83E6A38, 130, 20, 0, 40, 1, 0, 0
    panse_19 119, 192
    pause 5
    sprite 0x83E6A38, 130, 20, 0, 40, 1, 24, 0
    panse_19 119, 192
    pause 5
    sprite 0x83E6A38, 130, 20, 0, 40, 1, -24, 0
    panse_19 119, 192
    pause 15
    createtask sub_8098B1C, 5, 1, 2, 0, 10, 1
    createtask sub_8098B1C, 5, 3, 2, 0, 10, 1
    createtask sub_80B9BDC, 2, 20, 2, 2, 0, 12, 31774
    sprite 0x83E6A84, 130, 0, -22, 0, 15, 55
    panse_19 117, 63
    pause 10
    sprite 0x83E6A84, 130, -26, -24, 0, 15, 55
    panse_19 117, 63
    pause 10
    sprite 0x83E6A84, 130, 15, -27, 0, 15, 50
    panse_19 117, 63
    pause 10
    sprite 0x83E6A84, 130, -15, -17, 0, 10, 45
    panse_19 117, 63
    pause 10
    sprite 0x83E6A84, 130, 27, -22, 0, 15, 50
    panse_19 117, 63
    wait
    clearmonbg 3
    end

Move_BONEMERANG:: @ 81CF402
    loadsprite 10000
    loadsprite 10135
    monbg 3
    monbgprio_28 1
    setalpha 12, 8
    panse_19 180, 192
    sprite 0x83E7A28, 2,
    pause 20
    panse_19 159, 63
    sprite 0x83E7C08, 2, 0, 0, 1, 1
    createtask sub_80989F8, 5, 1, 5, 0, 5, 1
    pause 17
    panse_19 115, 192
    sprite 0x83D4E54, 2, 6, -4
    wait
    clearmonbg 3
    blendoff
    end

Move_BONE_CLUB:: @ 81CF456
    loadsprite 10000
    loadsprite 10135
    monbg 3
    monbgprio_28 1
    setalpha 12, 8
    panse_19 180, 63
    sprite 0x83E7A40, 2, -42, -25, 0, 0, 15
    pause 12
    sprite 0x83E7C08, 2, 0, 0, 1, 1
    createtask sub_80989F8, 5, 1, 0, 5, 5, 1
    sprite 0x83E7B3C, 2, 7, 5, 1, 0, 10, 0, 0
    panse_19 116, 63
    wait
    clearmonbg 3
    blendoff
    end

Move_BONE_RUSH:: @ 81CF4B8
    loadsprite 10000
    loadsprite 10135
    monbg 3
    setalpha 12, 8
    panse_19 180, 63
    sprite 0x83E7A40, 2, -42, -25, 0, 0, 15
    pause 12
    sprite 0x83E7C08, 2, 0, 0, 1, 2
    createtask sub_80989F8, 5, 1, 0, 3, 5, 1
    panse_19 159, 63
    wait
    clearmonbg 3
    blendoff
    end

Move_SPIKES:: @ 81CF503
    loadsprite 10152
    monbg 3
    panse_19 136, 192
    panse_1D 159, 63, 28
    sprite 0x83FEEFC, 130, 20, 0, 0, 24, 30
    pause 10
    panse_19 136, 192
    panse_1D 159, 63, 28
    sprite 0x83FEEFC, 130, 20, 0, -24, 24, 30
    pause 10
    panse_1D 159, 63, 28
    sprite 0x83FEEFC, 130, 20, 0, 24, 24, 30
    wait
    clearmonbg 3
    end

Move_MEGAHORN:: @ 81CF55A
    loadsprite 10153
    loadsprite 10135
    monbg 3
    panse_19 164, 192
    jumpunkcond .L81CF631
    fadetobg 7
    waitbgfadeout
    createtask sub_80BB82C, 5, -2304, 768, 1, -1
.L81CF57D:
    waitbgfadein
    setalpha 12, 8
    createtask sub_80989F8, 5, 0, 2, 0, 15, 1
    wait
    pause 10
    sprite 0x83D4E9C, 2, 0, 24, 0, 0, 6
    pause 3
    sprite 0x83E7224, 3, -42, 25, 0, 0, 6
    pause 4
    panse_19 149, 63
    sprite 0x83E7C08, 2, 0, 0, 1, 0
    sprite 0x83D4E9C, 2, 1, -16, 4, 1, 4
    wait
    createtask sub_8098CD0, 2, 1, -4, 1, 12, 1
    sprite 0x83E7B3C, 2, 7, 5, 1, 32767, 10, 0, 0
    pause 10
    sprite 0x83D4E84, 2, 0, 0, 11
    pause 3
    sprite 0x83D4E84, 2, 1, 0, 7
    wait
    wait
    clearmonbg 3
    blendoff
    restorebg
    waitbgfadeout
    setvar 7, -1
    waitbgfadein
    end
.L81CF631:
    fadetobg 8
    waitbgfadeout
    createtask sub_80BB82C, 5, 2304, 768, 0, -1
    jump .L81CF57D

Move_GUST:: @ 81CF648
    loadsprite 10009
    loadsprite 10135
    monbg 3
    monbgprio_28 1
    setalpha 12, 8
    panse_19 125, 63
    sprite 0x83E6AE8, 2, 0, -16
    createtask sub_80B194C, 5, 1, 70
    wait
    createtask sub_8098B1C, 5, 1, 1, 0, 7, 1
    sprite 0x83E7C08, 2, 0, 0, 1, 2
    panse_19 126, 63
    wait
    clearmonbg 3
    blendoff
    end

Move_WING_ATTACK:: @ 81CF699
    loadsprite 10009
    loadsprite 10135
    monbg 3
    monbgprio_28 1
    setalpha 12, 8
    panse_1C 150, 192, 20, 2
    createtask sub_8098F84, 2, 0, 12, 4, 1, 4
    createtask sub_80B194C, 5, 1, 70
    sprite 0x83E6B1C, 2, -25, 0, 0, 0, 20
    sprite 0x83E6B1C, 2, 25, 0, 0, 0, 20
    pause 24
    sprite 0x83D4E9C, 2, 0, 24, 0, 0, 9
    pause 17
    sprite 0x83E7C08, 2, 16, 0, 1, 1
    sprite 0x83E7C08, 2, -16, 0, 1, 1
    panse_1C 127, 63, 5, 2
    wait
    sprite 0x83D4E84, 2, 0, 0, 11
    wait
    clearmonbg 3
    blendoff
    end

Move_PECK:: @ 81CF736
    loadsprite 10135
    panse_19 159, 63
    createtask sub_8099A78, 2, 3, -768, 1, 2
    sprite 0x83E7C98, 131, -12, 0, 1, 3
    wait
    end

Move_AEROBLAST:: @ 81CF75D
    loadsprite 10154
    loadsprite 10135
    monbg 3
    call MoveFn_81D59CF
    monbgprio_28 1
    setalpha 12, 8
    call MoveFn_81CF7B9
    createtask sub_80989F8, 5, 1, 5, 0, 50, 1
    call MoveFn_81CF7B9
    call MoveFn_81CF7B9
    call MoveFn_81CF7B9
    call MoveFn_81CF7B9
    wait
    sprite 0x83E7C08, 2, 0, 0, 1, 0
    panse_19 129, 63
    wait
    clearmonbg 3
    blendoff
    pause 0
    call MoveFn_81D59FF
    end

MoveFn_81CF7B9:: @ 81CF7B9
    panse_19 136, 192
    sprite 0x83E6B4C, 2, 14, -12, 0, -12, 15, 0, 0
    sprite 0x83E6B4C, 2, 26, 8, 12, 8, 15, 0, 0
    pause 3
    panse_19 136, 192
    sprite 0x83E6B4C, 2, 14, -12, 0, -12, 15, 1, 0
    sprite 0x83E6B4C, 2, 26, 8, 12, 8, 15, 1, 0
    pause 3
    panse_19 136, 192
    sprite 0x83E6B4C, 2, 14, -12, 0, -12, 15, 2, 0
    sprite 0x83E6B4C, 2, 26, 8, 12, 8, 15, 2, 0
    pause 3
    panse_19 136, 192
    sprite 0x83E6B4C, 2, 14, -12, 0, -12, 15, 3, 0
    sprite 0x83E6B4C, 2, 26, 8, 12, 8, 15, 3, 0
    pause 3
    ret

Move_WATER_GUN:: @ 81CF87A
    loadsprite 10155
    loadsprite 10148
    monbg 3
    monbgprio_28 1
    setalpha 12, 8
    sprite 0x83E5A80, 2, 20, 0, 0, 0, 40, -25
    panse_19 117, 192
    wait
    createtask sub_8098B1C, 5, 1, 1, 0, 8, 1
    sprite 0x83E7C38, 4, 0, 0, 1, 2
    sprite 0x83E5A98, 2, 0, -15, 0, 15, 55
    panse_19 135, 63
    pause 10
    sprite 0x83E5A98, 2, 15, -20, 0, 15, 50
    panse_19 135, 63
    pause 10
    sprite 0x83E5A98, 2, -15, -10, 0, 10, 45
    panse_19 135, 63
    wait
    clearmonbg 3
    blendoff
    end

Move_CRABHAMMER:: @ 81CF907
    loadsprite 10141
    loadsprite 10148
    monbg 3
    setalpha 12, 8
    sprite 0x83E7C38, 4, 0, 0, 1, 0
    panse_19 116, 63
    pause 1
    sprite 0x83E7B3C, 2, 31, 3, 1, 32429, 10, 0, 0
    sprite 0x83D4E9C, 2, 1, -24, 0, 0, 4
    wait
    pause 8
    wait
    sprite 0x83D4E84, 2, 1, 0, 4
    wait
    panse_1C 135, 63, 20, 3
    createtask sub_80989F8, 5, 1, 0, 4, 8, 1
    sprite 0x83E5AB0, 2, 10, 10, 20, 1
    pause 4
    sprite 0x83E5AB0, 2, 20, -20, 20, 1
    pause 4
    sprite 0x83E5AB0, 2, -15, 15, 20, 1
    pause 4
    sprite 0x83E5AB0, 2, 0, 0, 20, 1
    pause 4
    sprite 0x83E5AB0, 2, -10, -20, 20, 1
    pause 4
    sprite 0x83E5AB0, 2, 16, -8, 20, 1
    pause 4
    sprite 0x83E5AB0, 2, 5, 8, 20, 1
    pause 4
    sprite 0x83E5AB0, 2, -16, 0, 20, 1
    wait
    clearmonbg 3
    blendoff
    end

Move_SURF:: @ 81CFA01
    createtask sub_80AB38C, 2, 0
    pause 24
    panse_1B 156, 192, 63, 2, 0
    wait
    end

Move_FLAMETHROWER:: @ 81CFA15
    loadsprite 10029
    monbg 3
    monbgprio_28 1
    setalpha 12, 8
    createtask sub_80989F8, 5, 0, 0, 2, 46, 1
    pause 6
    createtask sub_80AB100, 5, 100
    panse_1B 139, 192, 63, 2, 0
    call MoveFn_81CFA8F
    call MoveFn_81CFA8F
    call MoveFn_81CFA8F
    createtask sub_80989F8, 5, 1, 3, 0, 43, 1
    call MoveFn_81CFA8F
    call MoveFn_81CFA8F
    call MoveFn_81CFA8F
    call MoveFn_81CFA8F
    call MoveFn_81CFA8F
    call MoveFn_81CFA8F
    call MoveFn_81CFA8F
    call MoveFn_81CFA8F
    wait
    clearmonbg 3
    blendoff
    end

MoveFn_81CFA8F:: @ 81CFA8F
    sprite 0x83E59D0, 3, 10, 10, 0, 16
    pause 2
    sprite 0x83E59D0, 3, 10, 10, 0, 16
    pause 2
    ret

Move_SANDSTORM:: @ 81CFAB2
    loadsprite 10261
    panse_19 212, 0
    createtask sub_80B4810, 5, 0
    pause 16
    sprite 0x83E7450, 40, 10, 2304, 96, 0
    pause 10
    sprite 0x83E7450, 40, 90, 2048, 96, 0
    pause 10
    sprite 0x83E7450, 40, 50, 2560, 96, 0
    pause 10
    sprite 0x83E7450, 40, 20, 2304, 96, 0
    pause 10
    sprite 0x83E7450, 40, 70, 1984, 96, 0
    pause 10
    sprite 0x83E7450, 40, 0, 2816, 96, 0
    pause 10
    sprite 0x83E7450, 40, 60, 2560, 96, 0
    end

Move_WHIRLPOOL:: @ 81CFB3A
    loadsprite 10149
    monbg 3
    monbgprio_28 1
    setalpha 12, 8
    pause 0
    sprite 0x83E7B24, 0, 4, 2, 0, 7, 23968
    panse_19 158, 63
    createtask sub_80989F8, 5, 1, 0, 2, 50, 1
    call MoveFn_81CFB92
    call MoveFn_81CFB92
    call MoveFn_81CFB92
    pause 12
    sprite 0x83E7B24, 0, 4, 2, 7, 0, 23968
    wait
    clearmonbg 3
    end

MoveFn_81CFB92:: @ 81CFB92
    sprite 0x83E7420, 130, 0, 28, 384, 50, 8, 50, 1
    pause 2
    sprite 0x83E7420, 130, 0, 32, 240, 40, 11, -46, 1
    pause 2
    sprite 0x83E7420, 130, 0, 33, 416, 40, 4, 42, 1
    pause 2
    sprite 0x83E7420, 130, 0, 31, 288, 45, 6, -42, 1
    pause 2
    sprite 0x83E7420, 130, 0, 28, 448, 45, 11, 46, 1
    pause 2
    sprite 0x83E7420, 130, 0, 33, 464, 50, 10, -50, 1
    pause 2
    ret

Move_FLY:: @ 81CFC1D
    loadsprite 10156
    loadsprite 10135
    ifelse .L81CFC2E, .L81CFC46
.L81CFC2C:
    wait
    end
.L81CFC2E:
    panse_19 151, 192
    sprite 0x83E6BB8, 2, 0, 0, 13, 336
    jump .L81CFC2C
.L81CFC46:
    monbg 3
    setalpha 12, 8
    panse_19 128, 192
    sprite 0x83E6BD0, 2, 20
    pause 20
    sprite 0x83E7C08, 2, 0, 0, 1, 0
    createtask sub_80989F8, 5, 1, 6, 0, 8, 1
    panse_19 129, 63
    wait
    clearmonbg 3
    blendoff
    jump .L81CFC2C

Move_BOUNCE:: @ 81CFC87
    loadsprite 10156
    loadsprite 10135
    ifelse .L81CFC97, .L81CFCAB
.L81CFC96:
    end
.L81CFC97:
    panse_19 196, 192
    sprite 0x83E6CD0, 2, 0, 0
    jump .L81CFC96
.L81CFCAB:
    monbg 3
    setalpha 12, 8
    panse_19 186, 63
    sprite 0x83E6CFC, 131,
    pause 7
    panse_19 134, 63
    sprite 0x83E7C08, 130, 0, 0, 1, 0
    createtask sub_80989F8, 5, 1, 0, 5, 11, 1
    wait
    clearmonbg 3
    blendoff
    jump .L81CFC96

Move_KARATE_CHOP:: @ 81CFCEA
    loadsprite 10143
    loadsprite 10135
    monbg 3
    monbgprio_28 1
    setalpha 12, 8
    panse_19 128, 63
    sprite 0x83E66E0, 2, -16, 0, 0, 0, 10, 1, 3, 0
    wait
    panse_19 132, 63
    sprite 0x83E7C08, 3, 0, 0, 1, 2
    createtask sub_80989F8, 5, 1, 4, 0, 6, 1
    wait
    clearmonbg 3
    blendoff
    end

Move_CROSS_CHOP:: @ 81CFD3C
    loadsprite 10143
    loadsprite 10285
    monbg 3
    setalpha 12, 8
    panse_19 133, 63
    sprite 0x83E6740, 2, 0, 0, 0
    sprite 0x83E6740, 2, 0, 0, 1
    pause 40
    panse_19 129, 63
    sprite 0x83E7B3C, 2, 31, 3, 1, 32767, 10, 0, 10
    sprite 0x83E7C80, 3, 0, 0, 1, 20
    createtask sub_80989F8, 5, 1, 7, 0, 9, 1
    wait
    clearmonbg 3
    blendoff
    end

Move_JUMP_KICK:: @ 81CFDA5
    loadsprite 10143
    loadsprite 10135
    monbg 3
    setalpha 12, 8
    sprite 0x83D4E54, 2, 4, 4
    pause 3
    sprite 0x83E66F8, 2, -16, 8, 0, 0, 10, 1, 1, 1
    panse_19 136, 63
    wait
    sprite 0x83E7C08, 1, 0, 0, 1, 1
    createtask sub_80989F8, 5, 1, 5, 0, 7, 1
    panse_19 132, 63
    wait
    clearmonbg 3
    blendoff
    end

Move_HI_JUMP_KICK:: @ 81CFE02
    loadsprite 10143
    loadsprite 10135
    monbg 3
    setalpha 12, 8
    sprite 0x83D4E9C, 2, 0, -24, 0, 0, 8
    wait
    pause 10
    sprite 0x83D4E84, 2, 0, 0, 3
    pause 2
    sprite 0x83E66F8, 2, -16, 8, 0, 0, 10, 1, 1, 1
    panse_19 136, 63
    wait
    sprite 0x83E7C08, 2, 0, 0, 1, 1
    panse_19 116, 63
    sprite 0x83D4E9C, 2, 1, -28, 0, 0, 3
    pause 3
    createtask sub_8098CD0, 2, 1, 3, 0, 11, 1
    wait
    pause 5
    sprite 0x83D4E84, 2, 1, 0, 6
    wait
    clearmonbg 3
    blendoff
    end

Move_DOUBLE_KICK:: @ 81CFE98
    loadsprite 10143
    loadsprite 10135
    monbg 3
    setalpha 12, 8
    sprite 0x83E6728, 3, 1, 20, 1
    createtask sub_80989F8, 5, 1, 4, 0, 6, 1
    panse_19 116, 63
    wait
    wait
    clearmonbg 3
    blendoff
    end

Move_TRIPLE_KICK:: @ 81CFECB
    loadsprite 10143
    loadsprite 10135
    monbg 3
    setalpha 12, 8
    panse_19 116, 63
    jumpif 0, .L81CFEF0
    jumpif 1, .L81CFF26
    jump .L81CFF5C
.L81CFEEB:
    wait
    clearmonbg 3
    blendoff
    end
.L81CFEF0:
    sprite 0x83E6710, 132, -16, -8, 20, 1, 1
    sprite 0x83E7C08, 131, -16, -16, 1, 2
    createtask sub_80989F8, 5, 1, 4, 0, 6, 1
    jump .L81CFEEB
.L81CFF26:
    sprite 0x83E6710, 132, 8, 8, 20, 1, 1
    sprite 0x83E7C08, 131, 8, 0, 1, 2
    createtask sub_80989F8, 5, 1, 4, 0, 6, 1
    jump .L81CFEEB
.L81CFF5C:
    sprite 0x83E6710, 132, 0, 0, 20, 1, 1
    sprite 0x83E7C08, 131, 0, -8, 1, 1
    createtask sub_80989F8, 5, 1, 6, 0, 8, 1
    jump .L81CFEEB

Move_DYNAMIC_PUNCH:: @ 81CFF92
    loadsprite 10143
    loadsprite 10135
    loadsprite 10198
    loadsprite 10007
    pause 1
    monbg 3
    setalpha 12, 8
    panse_19 116, 63
    sprite 0x83E6710, 131, 0, 0, 20, 1, 0
    sprite 0x83E7C08, 130, 0, 0, 1, 0
    createtask sub_80989F8, 5, 1, 5, 0, 7, 1
    pause 1
    waitsound
    panse_19 170, 63
    createtask sub_8098B1C, 5, 1, 5, 0, 28, 1
    sprite 0x83E3F94, 3, 0, 0, 1, 1
    pause 6
    panse_19 170, 63
    sprite 0x83E3F94, 3, 24, -24, 1, 1
    pause 6
    panse_19 170, 63
    sprite 0x83E3F94, 3, -16, 16, 1, 1
    pause 6
    panse_19 170, 63
    sprite 0x83E3F94, 3, -24, -12, 1, 1
    pause 6
    panse_19 170, 63
    sprite 0x83E3F94, 3, 16, 16, 1, 1
    wait
    clearmonbg 3
    blendoff
    end

Move_COUNTER:: @ 81D005A
    loadsprite 10135
    loadsprite 10143
    monbg 3
    setalpha 12, 8
    createtask sub_809907C, 2, 0, 18, 6, 1, 4
    panse_19 115, 192
    wait
    sprite 0x83D4E9C, 2, 0, 20, 0, 0, 4
    pause 4
    sprite 0x83E7C08, 2, -15, 18, 1, 0
    panse_19 116, 63
    pause 1
    createtask sub_80989F8, 2, 1, 5, 0, 25, 1
    sprite 0x83E6710, 3, -15, 18, 8, 1, 0
    pause 3
    sprite 0x83E7C08, 2, 0, -4, 1, 0
    panse_19 116, 63
    pause 1
    sprite 0x83E6710, 3, 0, -4, 8, 1, 0
    pause 3
    sprite 0x83E7C08, 2, 15, 9, 1, 0
    panse_19 116, 63
    pause 1
    sprite 0x83E6710, 3, 15, 9, 8, 1, 0
    pause 5
    sprite 0x83D4E84, 2, 0, 0, 5
    wait
    clearmonbg 3
    blendoff
    end

Move_VITAL_THROW:: @ 81D0129
    loadsprite 10135
    monbg 3
    setalpha 12, 8
    panse_19 115, 192
    createtask sub_809907C, 2, 0, 12, 4, 1, 2
    wait
    sprite 0x83D4E9C, 2, 0, 20, 0, 0, 4
    pause 2
    sprite 0x83E7C08, 3, 0, 0, 1, 1
    panse_19 116, 63
    pause 1
    sprite 0x83D4E9C, 2, 1, -24, 0, 0, 4
    wait
    pause 3
    sprite 0x83D4E84, 2, 0, 0, 7
    pause 11
    sprite 0x83D4E84, 2, 1, 0, 10
    wait
    clearmonbg 3
    blendoff
    end

Move_ROCK_SMASH:: @ 81D01A4
    loadsprite 10058
    loadsprite 10135
    loadsprite 10143
    monbg 3
    setalpha 12, 8
    pause 1
    sprite 0x83E7C08, 3, 0, 0, 1, 1
    sprite 0x83E6710, 2, 0, 0, 8, 1, 0
    panse_19 116, 63
    createtask sub_80989F8, 2, 1, 3, 0, 5, 1
    wait
    panse_19 124, 63
    sprite 0x83E73CC, 2, 0, 0, 20, 24, 14, 2
    sprite 0x83E73CC, 2, 5, 0, -20, 24, 14, 1
    sprite 0x83E73CC, 2, 0, 5, 20, -24, 14, 2
    sprite 0x83E73CC, 2, -5, 0, -20, -24, 14, 2
    sprite 0x83E73CC, 2, 0, -5, 30, 18, 8, 2
    sprite 0x83E73CC, 2, 0, 0, 30, -18, 8, 2
    sprite 0x83E73CC, 2, 0, 0, -30, 18, 8, 2
    sprite 0x83E73CC, 2, 0, 0, -30, -18, 8, 2
    createtask sub_80989F8, 2, 1, 0, 3, 7, 1
    wait
    clearmonbg 3
    blendoff
    end

Move_SUBMISSION:: @ 81D029C
    loadsprite 10135
    monbg 3
    setalpha 12, 8
    panse_19 128, 192
    panse_1D 132, 63, 10
    panse_1D 128, 192, 20
    panse_1D 132, 63, 30
    panse_1D 128, 192, 40
    panse_1D 132, 63, 50
    panse_1D 128, 192, 60
    panse_1D 132, 63, 70
    panse_1D 128, 192, 80
    panse_1D 132, 63, 90
    createtask sub_8098F84, 2, 0, -18, 6, 6, 4
    createtask sub_8098F84, 2, 1, 18, 6, 6, 4
    call MoveFn_81D030B
    call MoveFn_81D030B
    call MoveFn_81D030B
    wait
    clearmonbg 3
    blendoff
    end

MoveFn_81D030B:: @ 81D030B
    sprite 0x83E7C08, 3, 0, -12, 1, 1
    pause 8
    sprite 0x83E7C08, 3, -12, 8, 1, 1
    pause 8
    sprite 0x83E7C08, 3, 12, 0, 1, 1
    pause 8
    ret

Move_SUNNY_DAY:: @ 81D033F
    loadsprite 10157
    monbg 2
    setalpha 13, 3
    createtask sub_80BA7F8, 10, 1921, 1, 0, 6, 32767
    wait
    panse_26 195, 192, 63, 1, 0
    call MoveFn_81D038B
    call MoveFn_81D038B
    call MoveFn_81D038B
    call MoveFn_81D038B
    wait
    createtask sub_80BA7F8, 10, 1921, 1, 6, 0, 32767
    wait
    clearmonbg 2
    blendoff
    end

MoveFn_81D038B:: @ 81D038B
    sprite 0x83E5D18, 40,
    pause 6
    ret

Move_COTTON_SPORE:: @ 81D0395
    loadsprite 10158
    monbg 3
    monbgprio_28 1
    panse_1C 162, 63, 18, 10
    call MoveFn_81D03B5
    call MoveFn_81D03B5
    call MoveFn_81D03B5
    wait
    clearmonbg 3
    end

MoveFn_81D03B5:: @ 81D03B5
    sprite 0x83E2B64, 2, 0, -20, 85, 80, 0
    pause 12
    sprite 0x83E2B64, 2, 0, -10, 170, 80, 0
    pause 12
    sprite 0x83E2B64, 2, 0, -15, 0, 80, 0
    pause 12
    ret

Move_SPORE:: @ 81D03EF
    loadsprite 10158
    monbg 3
    setalpha 12, 8
    createtask sub_80A28C4, 2,
    panse_1C 162, 63, 16, 11
    call MoveFn_81D041A
    call MoveFn_81D041A
    call MoveFn_81D041A
    wait
    pause 1
    clearmonbg 3
    blendoff
    end

MoveFn_81D041A:: @ 81D041A
    sprite 0x83E2B64, 130, 0, -20, 85, 80, 1
    pause 12
    sprite 0x83E2B64, 130, 0, -10, 170, 80, 1
    pause 12
    sprite 0x83E2B64, 130, 0, -15, 0, 80, 1
    pause 12
    ret

Move_PETAL_DANCE:: @ 81D0454
    loadsprite 10159
    loadsprite 10135
    monbg 3
    setalpha 12, 8
    panse_19 195, 192
    createtask sub_809907C, 2, 0, 12, 6, 6, 3
    sprite 0x83E2B94, 2, 0, -24, 8, 140
    sprite 0x83E2BAC, 2, 16, -24, 8, 100
    sprite 0x83E2BAC, 2, -16, -24, 8, 100
    pause 15
    sprite 0x83E2B94, 2, 0, -24, 8, 140
    sprite 0x83E2BAC, 2, 32, -24, 8, 100
    sprite 0x83E2BAC, 2, -32, -24, 8, 100
    pause 15
    sprite 0x83E2B94, 2, 0, -24, 8, 140
    sprite 0x83E2BAC, 2, 24, -24, 8, 100
    sprite 0x83E2BAC, 2, -24, -24, 8, 100
    pause 30
    sprite 0x83E2BAC, 2, 16, -24, 0, 100
    sprite 0x83E2BAC, 2, -16, -24, 0, 100
    pause 30
    sprite 0x83E2BAC, 2, 20, -16, 14, 80
    sprite 0x83E2BAC, 2, -20, -14, 16, 80
    wait
    sprite 0x83D4E9C, 2, 0, 24, 0, 0, 5
    pause 3
    panse_19 134, 63
    sprite 0x83E7C08, 3, 0, 0, 1, 0
    createtask sub_80989F8, 2, 1, 6, 0, 8, 1
    wait
    pause 8
    sprite 0x83D4E84, 2, 0, 0, 7
    wait
    clearmonbg 3
    blendoff
    end

Move_RAZOR_LEAF:: @ 81D058C
    loadsprite 10063
    loadsprite 10160
    loadsprite 10135
    monbg 3
    setalpha 12, 8
    pause 1
    panse_1C 162, 192, 10, 5
    sprite 0x83E2C08, 2, -3, -2, 10
    pause 2
    sprite 0x83E2C08, 2, -1, -1, 15
    pause 2
    sprite 0x83E2C08, 2, -4, -4, 7
    pause 2
    sprite 0x83E2C08, 2, 3, -3, 11
    pause 2
    sprite 0x83E2C08, 2, -1, -6, 8
    pause 2
    sprite 0x83E2C08, 2, 2, -1, 12
    pause 2
    sprite 0x83E2C08, 2, -3, -4, 13
    pause 2
    sprite 0x83E2C08, 2, 4, -5, 7
    pause 2
    sprite 0x83E2C08, 2, 2, -6, 11
    pause 2
    sprite 0x83E2C08, 2, -3, -5, 8
    pause 60
    panse_19 153, 192
    sprite 0x83E2C50, 131, 20, -10, 20, 0, 22, 20, 1
    sprite 0x83E2C50, 131, 20, -10, 20, 0, 22, -20, 1
    pause 20
    panse_19 129, 63
    createtask sub_8098B1C, 2, 1, 2, 0, 8, 1
    createtask sub_8098B1C, 2, 3, 2, 0, 8, 1
    wait
    clearmonbg 3
    blendoff
    end

Move_ANCIENT_POWER:: @ 81D0693
    loadsprite 10058
    loadsprite 10135
    monbg 3
    setalpha 12, 8
    sprite 0x83E7B88, 2, 4, 1, 10, 1
    sprite 0x83E74C0, 2, 20, 32, -48, 50, 2
    sprite 0x83E74C0, 2, 0, 32, -38, 25, 5
    sprite 0x83E74C0, 2, 32, 32, -28, 40, 3
    sprite 0x83E74C0, 2, -20, 32, -48, 50, 2
    sprite 0x83E74C0, 2, 20, 32, -28, 60, 1
    sprite 0x83E74C0, 2, 0, 32, -28, 30, 4
    createtask sub_8098B1C, 2, 0, 1, 0, 30, 1
    panse_19 164, 192
    pause 10
    sprite 0x83E74C0, 2, 15, 32, -48, 25, 5
    sprite 0x83E74C0, 2, -10, 32, -42, 30, 4
    pause 10
    sprite 0x83E74C0, 2, 0, 32, -42, 25, 5
    sprite 0x83E74C0, 2, -25, 32, -48, 30, 4
    wait
    sprite 0x83D4E9C, 2, 0, 16, 0, 0, 4
    pause 3
    panse_19 170, 63
    sprite 0x83E7C08, 3, 0, 0, 1, 1
    createtask sub_8098B1C, 2, 1, 3, 0, 6, 1
    wait
    sprite 0x83D4E84, 2, 0, 0, 7
    wait
    clearmonbg 3
    blendoff
    end

Move_OCTAZOOKA:: @ 81D07BB
    loadsprite 10030
    loadsprite 10017
    panse_19 134, 192
    sprite 0x83E3674, 130, 20, 0, 0, 0, 20, 0
    wait
    panse_19 170, 63
    sprite 0x83E36A8, 130, 8, 8, 1, 0
    pause 2
    sprite 0x83E36A8, 130, -8, -8, 1, 0
    pause 2
    sprite 0x83E36A8, 130, 8, -8, 1, 0
    pause 2
    sprite 0x83E36A8, 130, -8, 8, 1, 0
    wait
    end

Move_MIST:: @ 81D0821
    loadsprite 10144
    monbg 2
    setalpha 12, 8
    panse_1C 161, 192, 20, 15
    call MoveFn_81D086C
    call MoveFn_81D086C
    call MoveFn_81D086C
    call MoveFn_81D086C
    call MoveFn_81D086C
    call MoveFn_81D086C
    call MoveFn_81D086C
    pause 32
    createtask sub_80B9BDC, 2, 10, 8, 2, 0, 14, 32767
    wait
    clearmonbg 2
    blendoff
    end

MoveFn_81D086C:: @ 81D086C
    sprite 0x83E64A4, 2, 0, -24, 48, 240, 0, 1
    pause 7
    ret

Move_HAZE:: @ 81D0882
    wait
    panse_19 239, 0
    createtask sub_80AFAE4, 5,
    pause 30
    createtask sub_80BA7F8, 10, 1920, 2, 0, 16, 0
    pause 90
    createtask sub_80BA7F8, 10, 1920, 1, 16, 0, 0
    end

Move_FIRE_PUNCH:: @ 81D08B5
    loadsprite 10143
    loadsprite 10029
    loadsprite 10135
    monbg 3
    setalpha 12, 8
    createtask sub_80BA7F8, 10, 4, 2, 0, 9, 31
    sprite 0x83E5BE0, 129, 0
    sprite 0x83E5BE0, 129, 64
    sprite 0x83E5BE0, 129, 128
    sprite 0x83E5BE0, 129, 196
    panse_19 137, 63
    wait
    sprite 0x83E6710, 131, 0, 0, 8, 1, 0
    sprite 0x83E7C08, 130, 0, 0, 1, 1
    createtask sub_80989F8, 2, 1, 0, 3, 15, 1
    call MoveFn_81D0950
    pause 4
    panse_19 140, 63
    wait
    createtask sub_80BA7F8, 10, 4, 0, 9, 0, 31
    wait
    clearmonbg 3
    blendoff
    end

MoveFn_81D0950:: @ 81D0950
    sprite 0x83E5BF8, 129, 0, 10, 192, 176, 40
    sprite 0x83E5BF8, 129, 0, 10, -192, 240, 40
    sprite 0x83E5BF8, 129, 0, 10, 192, -160, 40
    sprite 0x83E5BF8, 129, 0, 10, -192, -112, 40
    sprite 0x83E5BF8, 129, 0, 10, 160, 48, 40
    sprite 0x83E5BF8, 129, 0, 10, -224, -32, 40
    sprite 0x83E5BF8, 129, 0, 10, 112, -128, 40
    ret

Move_LEER:: @ 81D09C8
    loadsprite 10027
    monbg 0
    monbgprio_28 0
    setalpha 8, 8
    panse_19 185, 192
    sprite 0x83FEF30, 2, 24, -12
    createtask sub_80998B0, 5, -5, -5, 10, 0, 1
    wait
    pause 10
    createtask sub_8098B1C, 2, 1, 1, 0, 9, 1
    createtask sub_8098B1C, 2, 3, 1, 0, 9, 1
    wait
    clearmonbg 0
    blendoff
    pause 1
    wait
    end

Move_DREAM_EATER:: @ 81D0A1F
    loadsprite 10147
    loadsprite 10031
    monbg 3
    monbgprio_2A 1
    panse_19 182, 192
    call MoveFn_81D59BB
    setalpha 8, 8
    panse_19 197, 63
    createtask sub_80989F8, 2, 1, 5, 0, 15, 1
    createtask sub_80998B0, 5, -6, -6, 15, 1, 1
    wait
    setalpha 12, 8
    createtask sub_80989F8, 2, 1, 0, 2, 25, 1
    call MoveFn_81D0A89
    wait
    pause 15
    call MoveFn_81D56C9
    wait
    clearmonbg 3
    blendoff
    pause 1
    call MoveFn_81D59C7
    end

MoveFn_81D0A89:: @ 81D0A89
    panse_19 186, 63
    sprite 0x83E2AE8, 3, 0, 5, 8, 26
    sprite 0x83E2AE8, 3, 5, -18, -40, 35
    sprite 0x83E2AE8, 3, -10, 20, 20, 39
    pause 4
    panse_19 186, 63
    sprite 0x83E2AE8, 3, 0, 5, 28, 26
    sprite 0x83E2AE8, 3, 10, -5, -8, 26
    sprite 0x83E2AE8, 3, -10, 20, 40, 39
    pause 4
    panse_19 186, 63
    sprite 0x83E2AE8, 3, 10, -5, -8, 26
    sprite 0x83E2AE8, 3, -5, 15, 16, 33
    sprite 0x83E2AE8, 3, 10, -5, -32, 26
    pause 4
    panse_19 186, 63
    sprite 0x83E2AE8, 3, 0, -15, -16, 36
    sprite 0x83E2AE8, 3, 0, 5, 8, 26
    sprite 0x83E2AE8, 3, 10, -5, -8, 26
    pause 4
    panse_19 186, 63
    sprite 0x83E2AE8, 3, -5, 15, 16, 33
    sprite 0x83E2AE8, 3, 0, -15, -16, 36
    sprite 0x83E2AE8, 3, 0, 5, 8, 26
    pause 4
    panse_19 186, 63
    sprite 0x83E2AE8, 3, 0, 5, 8, 26
    sprite 0x83E2AE8, 3, -5, 15, 16, 33
    sprite 0x83E2AE8, 3, 10, -5, -40, 26
    pause 4
    panse_19 186, 63
    sprite 0x83E2AE8, 3, -5, 15, 36, 33
    sprite 0x83E2AE8, 3, 10, -5, -8, 26
    sprite 0x83E2AE8, 3, -10, 20, 20, 39
    pause 4
    panse_19 186, 63
    sprite 0x83E2AE8, 3, 0, 5, 8, 26
    sprite 0x83E2AE8, 3, 0, 5, 8, 26
    sprite 0x83E2AE8, 3, 5, -18, -20, 35
    pause 4
    ret

Move_POISON_GAS:: @ 81D0C22
    loadsprite 10172
    loadsprite 10150
    pause 0
    monbg 3
    monbgprio_29
    setalpha 12, 8
    pause 0
    panse_19 161, 192
    sprite 0x83E6514, 128, 64, 0, 0, -32, -6, 4192, 1072, 0
    pause 4
    panse_19 161, 192
    sprite 0x83E6514, 128, 64, 0, 0, -32, -6, 4192, 1072, 0
    pause 4
    panse_19 161, 192
    sprite 0x83E6514, 128, 64, 0, 0, -32, -6, 4192, 1072, 0
    pause 4
    panse_19 161, 192
    sprite 0x83E6514, 128, 64, 0, 0, -32, -6, 4192, 1072, 0
    pause 4
    panse_19 161, 192
    sprite 0x83E6514, 128, 64, 0, 0, -32, -6, 4192, 1072, 0
    pause 4
    panse_19 161, 192
    sprite 0x83E6514, 128, 64, 0, 0, -32, -6, 4192, 1072, 0
    pause 40
    panse_1C 161, 63, 28, 6
    createtask sub_80B9BDC, 2, 4, 6, 2, 0, 12, 26650
    wait
    blendoff
    clearmonbg 3
    pause 0
    end

Move_BIND:: @ 81D0D00
    createtask sub_8099704, 5, 0, 6, 3328, 4, 0
    jump .L81D0D16
.L81D0D16:
    panse_19 163, 63
    call MoveFn_81D0D26
    call MoveFn_81D0D26
    wait
    end

MoveFn_81D0D26:: @ 81D0D26
    createtask sub_80998B0, 5, 10, -5, 5, 1, 0
    pause 16
    ret

Move_WRAP:: @ 81D0D3A
    createtask sub_809907C, 2, 0, 6, 4, 2, 4
    jump .L81D0D16

Move_PSYBEAM:: @ 81D0D50
    loadsprite 10163
    panse_19 182, 192
    call MoveFn_81D59BB
    createtask_1F mas_80DCF38, 193, 65472, 63, 3, 4, 0, 15
    call MoveFn_81D0DD4
    call MoveFn_81D0DD4
    createtask sub_8099704, 5, 0, 6, 2048, 4, 1
    createtask sub_80B9BDC, 2, 4, 2, 2, 0, 12, 32351
    call MoveFn_81D0DD4
    call MoveFn_81D0DD4
    call MoveFn_81D0DD4
    call MoveFn_81D0DD4
    call MoveFn_81D0DD4
    call MoveFn_81D0DD4
    call MoveFn_81D0DD4
    call MoveFn_81D0DD4
    call MoveFn_81D0DD4
    wait
    pause 1
    call MoveFn_81D59C7
    end

MoveFn_81D0DD4:: @ 81D0DD4
    sprite 0x83E6EEC, 130, 16, 0, 0, 0, 13, 0
    pause 4
    ret

Move_HYPNOSIS:: @ 81D0DEA
    loadsprite 10163
    call MoveFn_81D59BB
    call MoveFn_81D0E1D
    call MoveFn_81D0E1D
    call MoveFn_81D0E1D
    createtask sub_80B9BDC, 2, 4, 2, 2, 0, 12, 32351
    wait
    pause 1
    call MoveFn_81D59C7
    end

MoveFn_81D0E1D:: @ 81D0E1D
    panse_19 177, 192
    sprite 0x83E6EEC, 130, 0, 8, 0, 8, 27, 0
    sprite 0x83E6EEC, 130, 16, -8, 0, -8, 27, 0
    pause 6
    ret

Move_PSYWAVE:: @ 81D0E4A
    loadsprite 10165
    panse_19 182, 192
    call MoveFn_81D59BB
    createtask sub_80AB100, 5, 100
    createtask_1F mas_80DCF38, 196, 65472, 63, 2, 9, 0, 10
    call MoveFn_81D0EAD
    call MoveFn_81D0EAD
    createtask sub_80B9BDC, 2, 4, 1, 4, 0, 12, 32351
    call MoveFn_81D0EAD
    call MoveFn_81D0EAD
    call MoveFn_81D0EAD
    call MoveFn_81D0EAD
    wait
    pause 1
    call MoveFn_81D59C7
    end

MoveFn_81D0EAD:: @ 81D0EAD
    sprite 0x83E59E8, 131, 10, 10, 0, 16
    pause 4
    sprite 0x83E59E8, 131, 10, 10, 0, 16
    pause 4
    ret

Move_ZAP_CANNON:: @ 81D0ED0
    loadsprite 10171
    loadsprite 10011
    panse_19 131, 192
    sprite 0x83E5FDC, 131, 10, 0, 0, 0, 30, 0
    sprite 0x83E6008, 132, 10, 0, 16, 30, 0, 40, 0
    sprite 0x83E6008, 132, 10, 0, 16, 30, 64, 40, 1
    sprite 0x83E6008, 132, 10, 0, 16, 30, 128, 40, 0
    sprite 0x83E6008, 132, 10, 0, 16, 30, 192, 40, 2
    sprite 0x83E6008, 132, 10, 0, 8, 30, 32, 40, 0
    sprite 0x83E6008, 132, 10, 0, 8, 30, 96, 40, 1
    sprite 0x83E6008, 132, 10, 0, 8, 30, 160, 40, 0
    sprite 0x83E6008, 132, 10, 0, 8, 30, 224, 40, 2
    wait
    createtask sub_8098B1C, 2, 1, 4, 0, 5, 1
    pause 15
    panse_1D 112, 63, 19
    call MoveFn_81D58D4
    wait
    end

Move_STEEL_WING:: @ 81D0FB5
    loadsprite 10009
    loadsprite 10135
    panse_1C 113, 192, 28, 2
    createtask sub_80B86EC, 5, 0, 0, 0
    wait
    monbg 3
    monbgprio_28 1
    setalpha 12, 8
    panse_1C 150, 192, 20, 2
    createtask sub_8098F84, 2, 0, 12, 4, 1, 4
    createtask sub_80B194C, 5, 1, 70
    sprite 0x83E6B1C, 2, -25, 0, 0, 0, 20
    sprite 0x83E6B1C, 2, 25, 0, 0, 0, 20
    pause 24
    sprite 0x83D4E9C, 2, 0, 24, 0, 0, 9
    pause 17
    sprite 0x83E7C08, 2, 16, 0, 1, 1
    sprite 0x83E7C08, 2, -16, 0, 1, 1
    panse_19 129, 63
    wait
    sprite 0x83D4E84, 2, 0, 0, 11
    wait
    clearmonbg 3
    blendoff
    end

Move_IRON_TAIL:: @ 81D1064
    loadsprite 10135
    panse_1C 113, 192, 28, 2
    createtask sub_80B86EC, 5, 1, 0, 0
    wait
    monbg 1
    setalpha 12, 8
    sprite 0x83D4E54, 2, 4, 4
    pause 6
    sprite 0x83E7C08, 130, 0, 0, 1, 2
    createtask sub_80989F8, 2, 1, 3, 0, 6, 1
    panse_19 116, 63
    wait
    createtask sub_80B8A74, 5, 0, 1
    clearmonbg 1
    blendoff
    wait
    end

Move_POISON_TAIL:: @ 81D10C2
    loadsprite 10135
    loadsprite 10150
    panse_1C 113, 192, 28, 2
    createtask sub_80B86EC, 5, 1, 1, 23768
    wait
    monbg 1
    setalpha 12, 8
    sprite 0x83D4E54, 2, 4, 4
    pause 6
    sprite 0x83E7C08, 130, 0, 0, 1, 2
    createtask sub_80989F8, 2, 1, 3, 0, 6, 1
    panse_19 116, 63
    wait
    createtask sub_80B8A74, 5, 0, 1
    clearmonbg 1
    blendoff
    call MoveFn_81D575B
    wait
    end

Move_METAL_CLAW:: @ 81D1128
    loadsprite 10039
    panse_1C 113, 192, 28, 2
    createtask sub_80B86EC, 5, 0, 0, 0
    wait
    sprite 0x83D4E54, 2, 6, 4
    pause 2
    panse_19 129, 63
    sprite 0x83E79E8, 130, -10, -10, 0
    sprite 0x83E79E8, 130, -10, 10, 0
    sprite 0x83E7B88, 2, -4, 1, 10, 3, 1
    pause 8
    sprite 0x83D4E54, 2, 6, 4
    pause 2
    panse_19 129, 63
    sprite 0x83E79E8, 130, 10, -10, 1
    sprite 0x83E79E8, 130, 10, 10, 1
    sprite 0x83E7B88, 2, -4, 1, 10, 3, 1
    wait
    end

Move_NIGHT_SHADE:: @ 81D11BB
    monbg 0
    monbgprio_28 0
    panse_19 182, 192
    fadetobg 2
    waitbgfadein
    pause 10
    panse_19 185, 192
    createtask sub_80B54E8, 5, 85
    pause 70
    createtask sub_8098B1C, 2, 1, 2, 0, 12, 1
    createtask sub_80B9BDC, 2, 4, 0, 2, 0, 13, 0
    wait
    clearmonbg 0
    pause 1
    restorebg
    waitbgfadein
    end

Move_EGG_BOMB:: @ 81D1203
    loadsprite 10198
    loadsprite 10175
    panse_19 160, 192
    sprite 0x83E3D00, 130, 10, 0, 0, 0, 25, -32
    wait
    createtask sub_8098B1C, 2, 1, 4, 0, 16, 1
    sprite 0x83E3F94, 132, 6, 5, 1, 0
    panse_19 170, 63
    pause 3
    sprite 0x83E3F94, 132, -16, -15, 1, 0
    panse_19 170, 63
    pause 3
    sprite 0x83E3F94, 132, 16, -5, 1, 0
    panse_19 170, 63
    pause 3
    sprite 0x83E3F94, 132, -12, 18, 1, 0
    panse_19 170, 63
    pause 3
    sprite 0x83E3F94, 132, 0, 5, 1, 0
    panse_19 170, 63
    pause 3
    wait
    end

Move_SHADOW_BALL:: @ 81D129D
    loadsprite 10176
    fadetobg 2
    waitbgfadein
    pause 15
    createtask_1F mas_80DCF38, 161, 65472, 63, 5, 5, 0, 5
    sprite 0x83E7608, 130, 16, 16, 8
    wait
    panse_19 152, 63
    createtask sub_8098B1C, 2, 1, 4, 0, 8, 1
    wait
    restorebg
    waitbgfadein
    end

Move_LICK:: @ 81D12E0
    loadsprite 10177
    pause 15
    panse_19 181, 63
    sprite 0x83E763C, 130, 0, 0
    createtask sub_8098B1C, 2, 1, 1, 0, 16, 1
    wait
    end

Move_FOCUS_ENERGY:: @ 81D1307
    loadsprite 10184
    panse_19 164, 192
    call MoveFn_81CB267
    pause 8
    createtask sub_80B9BDC, 2, 2, 2, 2, 0, 11, 32767
    createtask sub_8098B1C, 2, 0, 1, 0, 32, 1
    call MoveFn_81CB267
    pause 8
    call MoveFn_81CB267
    wait
    end

Move_BIDE:: @ 81D1347
    ifelse .L81D1351, .L81D137D
    end
.L81D1351:
    panse_1C 145, 192, 9, 2
    createtask sub_80B9BDC, 2, 2, 2, 2, 0, 11, 31
    createtask sub_8098B1C, 2, 0, 1, 0, 32, 1
    wait
    end
.L81D137D:
    loadsprite 10135
    monbg 3
    setalpha 12, 8
    panse_1C 145, 192, 9, 2
    createtask sub_80BA7F8, 10, 2, 2, 0, 11, 31
    createtask sub_8098B1C, 2, 0, 1, 0, 32, 1
    wait
    sprite 0x83D4E9C, 2, 0, 24, 0, 0, 4
    wait
    createtask sub_8098CD0, 2, 0, 2, 0, 12, 1
    createtask sub_8098B1C, 2, 1, 3, 0, 16, 1
    panse_19 132, 63
    sprite 0x83E7C08, 1, 18, -8, 1, 1
    pause 5
    panse_19 132, 63
    sprite 0x83E7C08, 1, -18, 8, 1, 1
    pause 5
    panse_19 132, 63
    sprite 0x83E7C08, 1, -8, -5, 1, 1
    wait
    pause 5
    sprite 0x83D4E84, 2, 0, 0, 7
    wait
    createtask sub_80BA7F8, 10, 2, 2, 11, 0, 31
    wait
    clearmonbg 3
    blendoff
    end

Move_STRING_SHOT:: @ 81D1446
    loadsprite 10179
    loadsprite 10180
    monbg 3
    pause 0
    sprite 0x83E7B24, 5, 1, 2, 0, 9, 0
    wait
    panse_1C 122, 192, 9, 6
    call MoveFn_81D1504
    call MoveFn_81D1504
    call MoveFn_81D1504
    call MoveFn_81D1504
    call MoveFn_81D1504
    call MoveFn_81D1504
    call MoveFn_81D1504
    call MoveFn_81D1504
    call MoveFn_81D1504
    call MoveFn_81D1504
    call MoveFn_81D1504
    call MoveFn_81D1504
    call MoveFn_81D1504
    call MoveFn_81D1504
    call MoveFn_81D1504
    call MoveFn_81D1504
    call MoveFn_81D1504
    call MoveFn_81D1504
    wait
    panse_19 123, 63
    sprite 0x83E72A8, 130, 0, 10
    pause 4
    sprite 0x83E72A8, 130, 0, -2
    pause 4
    sprite 0x83E72A8, 130, 0, 22
    wait
    clearmonbg 3
    pause 1
    wait
    sprite 0x83E7B24, 5, 1, 2, 9, 0, 0
    end

MoveFn_81D1504:: @ 81D1504
    sprite 0x83E7290, 130, 20, 0, 512, 20, 1
    pause 1
    ret

Move_SPIDER_WEB:: @ 81D1518
    loadsprite 10181
    loadsprite 10180
    monbg 3
    pause 0
    sprite 0x83E7B24, 5, 1, 2, 0, 9, 0
    wait
    monbgprio_28 1
    panse_1C 122, 192, 9, 6
    call MoveFn_81D15A5
    call MoveFn_81D15A5
    call MoveFn_81D15A5
    call MoveFn_81D15A5
    call MoveFn_81D15A5
    call MoveFn_81D15A5
    call MoveFn_81D15A5
    call MoveFn_81D15A5
    call MoveFn_81D15A5
    call MoveFn_81D15A5
    call MoveFn_81D15A5
    call MoveFn_81D15A5
    call MoveFn_81D15A5
    call MoveFn_81D15A5
    wait
    panse_19 123, 63
    sprite 0x83E72DC, 2,
    wait
    clearmonbg 3
    pause 1
    sprite 0x83E7B24, 5, 1, 2, 9, 0, 0
    end

MoveFn_81D15A5:: @ 81D15A5
    sprite 0x83E7290, 130, 20, 0, 512, 20, 0
    pause 1
    ret

Move_RAZOR_WIND:: @ 81D15B9
    ifelse .L81D15C4, .L81D1614
.L81D15C2:
    wait
    end
.L81D15C4:
    loadsprite 10009
    panse_19 125, 192
    sprite 0x83E3DC8, 2, 32, 0, 16, 16, 0, 7, 40
    sprite 0x83E3DC8, 2, 32, 0, 16, 16, 85, 7, 40
    sprite 0x83E3DC8, 2, 32, 0, 16, 16, 170, 7, 40
    wait
    panse_19 126, 192
    jump .L81D15C2
.L81D1614:
    loadsprite 10154
    loadsprite 10135
    monbg 1
    setalpha 12, 8
    panse_19 153, 192
    sprite 0x83E6B4C, 2, 14, 8, 0, 0, 22, 2, 1
    pause 2
    panse_19 153, 192
    sprite 0x83E6B4C, 2, 14, -8, 16, 14, 22, 1, 1
    pause 2
    panse_19 153, 192
    sprite 0x83E6B4C, 2, 14, 12, -16, -14, 22, 0, 1
    pause 17
    panse_19 129, 63
    createtask sub_8098B1C, 2, 1, 2, 0, 10, 1
    createtask sub_8098B1C, 2, 3, 2, 0, 10, 1
    wait
    clearmonbg 1
    blendoff
    jump .L81D15C2

Move_DISABLE:: @ 81D169F
    loadsprite 10071
    monbg 1
    monbgprio_28 1
    setalpha 8, 8
    panse_19 202, 192
    sprite 0x83BF480, 13, 24, -16
    wait
    createtask sub_80A7FB0, 5,
    panse_1C 163, 63, 15, 4
    wait
    pause 1
    clearmonbg 1
    blendoff
    end

Move_RECOVER:: @ 81D16CD
    loadsprite 10147
    loadsprite 10031
    monbg 2
    setalpha 12, 8
    panse_1C 133, 192, 13, 3
    createtask sub_80B9BDC, 2, 2, 0, 6, 0, 11, 12287
    call MoveFn_81D170D
    call MoveFn_81D170D
    call MoveFn_81D170D
    wait
    clearmonbg 2
    blendoff
    pause 1
    call MoveFn_81D56C9
    wait
    end

MoveFn_81D170D:: @ 81D170D
    sprite 0x83E2A58, 2, 40, -10, 13
    pause 3
    sprite 0x83E2A58, 2, -35, -10, 13
    pause 3
    sprite 0x83E2A58, 2, 15, -40, 13
    pause 3
    sprite 0x83E2A58, 2, -10, -32, 13
    pause 3
    sprite 0x83E2A58, 2, 25, -20, 13
    pause 3
    sprite 0x83E2A58, 2, -40, -20, 13
    pause 3
    sprite 0x83E2A58, 2, 5, -40, 13
    pause 3
    ret

Move_MIMIC:: @ 81D1777
    loadsprite 10147
    monbg_22 3
    setalpha 11, 5
    panse_1B 197, 63, 192, 253, 0
    createtask sub_80A2F0C, 5, 128, 24
    pause 15
    sprite 0x83E2D54, 130, -12, 24
    pause 10
    setvar 7, -1
    wait
    panse_19 145, 192
    createtask sub_80B9BDC, 2, 2, 0, 2, 0, 11, 32767
    wait
    clearmonbg_23 3
    blendoff
    end

Move_CONSTRICT:: @ 81D17C1
    loadsprite 10186
    panse_1C 148, 63, 6, 4
    sprite 0x83E2D0C, 132, 0, 16, 0, 2
    pause 7
    sprite 0x83E2D0C, 131, 0, 0, 0, 2
    sprite 0x83E2D0C, 130, 0, 8, 1, 2
    pause 7
    sprite 0x83E2D0C, 131, 0, -8, 1, 2
    pause 8
    createtask sub_8098B1C, 2, 1, 3, 0, 6, 1
    pause 20
    panse_19 163, 63
    setvar 7, -1
    wait
    end

Move_CURSE:: @ 81D1829
    ifelse .L81D1832, .L81D18AF
.L81D1832:
    loadsprite 10199
    loadsprite 10200
    monbg 2
    createtask sub_80B63B4, 5,
    wait
    pause 20
    sprite 0x83E7680, 2,
    pause 60
    call MoveFn_81D1899
    pause 41
    call MoveFn_81D1899
    pause 41
    call MoveFn_81D1899
    wait
    clearmonbg 2
    pause 1
    monbg 3
    panse_19 114, 63
    sprite 0x83E7698, 130,
    createtask sub_8098B1C, 2, 1, 2, 0, 14, 1
    wait
    sprite 0x83E7B24, 2, 1, 1, 16, 0, 0
    wait
    clearmonbg 3
    end

MoveFn_81D1899:: @ 81D1899
    createtask sub_8098B1C, 2, 0, 4, 0, 10, 0
    panse_19 163, 192
    ret

.L81D18AF:
    createtask sub_8099704, 5, 0, 10, 1536, 3, 0
    wait
    pause 10
    call MoveFn_81D18CA
    wait
    end

MoveFn_81D18CA:: @ 81D18CA
    panse_19 164, 192
    createtask sub_80BACEC, 5,
    createtask sub_80B9BDC, 5, 2, 4, 2, 0, 10, 31
    ret

Move_SOFT_BOILED:: @ 81D18E9
    loadsprite 10202
    loadsprite 10203
    loadsprite 10031
    monbg 2
    panse_19 160, 192
    createtask sub_80989F8, 2, 0, 0, 2, 6, 1
    sprite 0x83E4028, 4, 0, 16, 0
    sprite 0x83E4028, 4, 0, 16, 1
    pause 120
    pause 7
    panse_19 159, 192
    sprite 0x83E7B24, 2, 31, 3, 10, 0, 31500
    sprite 0x83E4094, 3, 31, 16, 0, 1
    pause 8
    sprite 0x83E4094, 3, 31, 16, 0, 1
    pause 60
    setvar 7, -1
    wait
    clearmonbg 2
    call MoveFn_81D5712
    end

Move_HEAL_BELL:: @ 81D196B
    loadsprite 10205
    loadsprite 10206
    loadsprite 10203
    createtask sub_80BA7F8, 10, 10, 0, 0, 10, 32767
    wait
    createtask sub_80A96B4, 5,
    sprite 0x83E41B0, 2, 0, -24, 0, 1
    pause 12
    sprite 0x83E41D0, 40, 0, -24, 48, -18, 35, 0, 0
    sprite 0x83E41D0, 40, 0, -24, -48, 20, 30, 1, 1
    sprite 0x83E41D0, 40, 0, -24, -38, -29, 30, 2, 2
    sprite 0x83E41D0, 40, 0, -24, 36, 18, 30, 3, 3
    call MoveFn_81D1B2F
    pause 33
    sprite 0x83E41D0, 40, 0, -24, 19, 26, 35, 4, 4
    sprite 0x83E41D0, 40, 0, -24, -34, -12, 30, 5, 5
    sprite 0x83E41D0, 40, 0, -24, 41, -20, 34, 6, 2
    sprite 0x83E41D0, 40, 0, -24, -15, 26, 32, 7, 0
    call MoveFn_81D1B2F
    pause 33
    sprite 0x83E41D0, 40, 0, -24, -48, 18, 31, 0, 2
    sprite 0x83E41D0, 40, 0, -24, 48, -20, 30, 2, 5
    sprite 0x83E41D0, 40, 0, -24, 38, 29, 33, 4, 3
    sprite 0x83E41D0, 40, 0, -24, -36, -18, 30, 6, 1
    call MoveFn_81D1B2F
    wait
    createtask sub_80A9760, 5,
    wait
    unloadsprite 10205
    unloadsprite 10206
    unloadsprite 10203
    loadsprite 10049
    panse_19 221, 192
    sprite 0x83E340C, 16, -15, 0, 0, 0, 32, 60, 1
    pause 8
    sprite 0x83E340C, 16, 12, -5, 0, 0, 32, 60, 1
    wait
    unloadsprite 10049
    loadsprite 10203
    panse_19 95, 192
    createtask sub_80BA83C, 10, 4, 3, 10, 0, 31500
    createtask sub_80BA7F8, 10, 10, 3, 10, 0, 32767
    sprite 0x83E40E0, 16, 0, 0, 0, 1
    end

MoveFn_81D1B2F:: @ 81D1B2F
    createtask sub_80BA83C, 10, 4, 3, 8, 0, 31500
    createtask sub_80BA7F8, 10, 10, 3, 2, 10, 32767
    sprite 0x83E4094, 40, 0, -24, 0, 1
    panse_19 188, 192
    ret

Move_FAKE_OUT:: @ 81D1B65
    panse_19 222, 0
    createtask sub_80A98B0, 5,
    wait
    panse_19 198, 63
    createtask sub_8098B1C, 2, 1, 4, 0, 5, 1
    createtask sub_80A9A20, 3,
    wait
    sprite 0x83E7B24, 2, 1, 3, 16, 0, 32767
    end

Move_SCARY_FACE:: @ 81D1BA0
    loadsprite 10218
    sprite 0x83E7B24, 2, 27, 3, 0, 16, 0
    panse_19 182, 192
    wait
    pause 10
    panse_19 185, 192
    createtask sub_80A9F10, 5,
    pause 13
    sprite 0x83E42FC, 0, -16, -8
    sprite 0x83E42FC, 0, 16, -8
    wait
    createtask sub_80ADAD8, 3, 20, 1, 0
    panse_19 123, 63
    sprite 0x83E7B24, 2, 27, 3, 16, 0, 0
    wait
    end

Move_SWEET_KISS:: @ 81D1C03
    loadsprite 10216
    loadsprite 10220
    sprite 0x83E4320, 130, 16, -48
    panse_19 188, 63
    pause 23
    panse_19 188, 63
    pause 23
    panse_19 188, 63
    wait
    sprite 0x83E4230, 131, 160, -30
    panse_19 219, 63
    sprite 0x83E4230, 131, -256, -42
    sprite 0x83E4230, 131, 128, -14
    sprite 0x83E4230, 131, 416, -38
    sprite 0x83E4230, 131, -128, -22
    sprite 0x83E4230, 131, -384, -31
    end

Move_LOVELY_KISS:: @ 81D1C6C
    loadsprite 10219
    loadsprite 10221
    sprite 0x83E4368, 130, 0, -24
    panse_19 193, 63
    wait
    panse_19 219, 63
    sprite 0x83E4338, 131, -256, -42
    sprite 0x83E4338, 131, 128, -14
    sprite 0x83E4338, 131, 416, -38
    sprite 0x83E4338, 131, -128, -22
    end

Move_FURY_SWIPES:: @ 81D1CB3
    loadsprite 10222
    sprite 0x83D4E54, 2, 5, 5
    pause 4
    panse_19 148, 63
    sprite 0x83E43B0, 130, 16, 0, 1
    createtask sub_8098B1C, 2, 1, 3, 0, 5, 1
    pause 10
    sprite 0x83D4E54, 130, 5, 5
    pause 4
    panse_19 148, 63
    sprite 0x83E43B0, 130, -16, 0, 0
    createtask sub_8098B1C, 2, 1, 4, 0, 7, 1
    end

Move_INGRAIN:: @ 81D1D17
    loadsprite 10223
    loadsprite 10147
    sprite 0x83E2DC4, 2, 16, 26, -1, 2, 150
    panse_19 148, 192
    pause 10
    sprite 0x83E2DC4, 2, -32, 20, 1, 1, 140
    panse_19 148, 192
    pause 10
    sprite 0x83E2DC4, 2, 32, 22, 1, 0, 130
    panse_19 148, 192
    pause 10
    sprite 0x83E2DC4, 2, -16, 25, -1, 3, 120
    panse_19 148, 192
    pause 40
    sprite 0x83E2E04, 3, 32, 26, -1, 3, 30
    pause 5
    panse_19 119, 192
    pause 5
    sprite 0x83E2E04, 3, -48, 20, 1, 2, 30
    panse_19 119, 192
    pause 5
    panse_19 119, 192
    pause 5
    sprite 0x83E2E04, 3, 48, 26, -2, 3, 18
    panse_19 119, 192
    pause 10
    wait
    end

Move_PRESENT:: @ 81D1DC8
    loadsprite 10224
    createtask sub_80DEAF0, 2,
    sprite 0x83E2E88, 130, 0, -5, 10, 2, -1
    panse_19 160, 192
    pause 14
    panse_19 118, 192
    pause 14
    panse_19 118, 0
    pause 20
    panse_19 118, 63
    wait
    jumpvareq 7, 0, .L81D1E0B
    jumpvareq 7, 1, .L81D1E76
    end
.L81D1E0B:
    loadsprite 10198
    panse_19 170, 63
    sprite 0x83E3F94, 131, 0, 0, 1, 1
    pause 6
    panse_19 170, 63
    sprite 0x83E3F94, 131, 24, -24, 1, 1
    pause 6
    panse_19 170, 63
    sprite 0x83E3F94, 131, -16, 16, 1, 1
    pause 6
    panse_19 170, 63
    sprite 0x83E3F94, 131, -24, -12, 1, 1
    pause 6
    panse_19 170, 63
    sprite 0x83E3F94, 131, 16, 16, 1, 1
    end
.L81D1E76:
    loadsprite 10195
    loadsprite 10031
    panse_19 221, 63
    sprite 0x83E2ED0, 132, -16, 32, -3, 1
    pause 3
    sprite 0x83E2ED0, 132, 16, 32, -3, -1
    pause 3
    sprite 0x83E2ED0, 132, 32, 32, -3, 1
    pause 3
    sprite 0x83E2ED0, 132, -32, 32, -3, 1
    pause 3
    sprite 0x83E2ED0, 132, 0, 32, -3, 1
    pause 3
    sprite 0x83E2ED0, 132, -8, 32, -3, 1
    pause 3
    sprite 0x83E2ED0, 132, -8, 32, -3, 1
    pause 3
    sprite 0x83E2ED0, 132, 24, 32, -3, 1
    pause 3
    sprite 0x83E2ED0, 132, -24, 32, -3, 1
    wait
    waitsound
    call MoveFn_81D5712
    end

Move_BATON_PASS:: @ 81D1F1F
    loadsprite 10226
    panse_19 217, 192
    createtask sub_80B9BDC, 2, 31, 1, 2, 0, 11, 31455
    sprite 0x83FF150, 2,
    end

Move_PERISH_SONG:: @ 81D1F41
    loadsprite 10206
    sprite 0x83E4484, 4, 0, 0, 0
    sprite 0x83E4484, 4, 1, 1, 16
    sprite 0x83E4484, 4, 2, 1, 32
    sprite 0x83E4484, 4, 3, 2, 48
    sprite 0x83E4484, 4, 4, 2, 64
    sprite 0x83E4484, 4, 5, 0, 80
    sprite 0x83E4484, 4, 6, 0, 96
    sprite 0x83E4484, 4, 7, 1, 112
    sprite 0x83E4484, 4, 8, 2, 128
    sprite 0x83E4484, 4, 9, 0, 144
    sprite 0x83E4484, 4, 10, 2, 160
    sprite 0x83E4484, 4, 11, 0, 176
    sprite 0x83E4484, 4, 12, 1, 192
    sprite 0x83E4484, 4, 13, 3, 208
    sprite 0x83E4484, 4, 14, 3, 224
    sprite 0x83E4484, 4, 15, 0, 240
    sprite 0x83E449C, 4, 15, 0, 0
    pause 20
    panse_1B 166, 192, 63, 2, 0
    pause 80
    sprite 0x83E7B24, 2, 1, 3, 0, 16, 0
    createtask sub_80B8A74, 5, 4, 0
    createtask sub_80B8A74, 5, 5, 0
    createtask sub_80B8A74, 5, 6, 0
    createtask sub_80B8A74, 5, 7, 0
    pause 100
    sprite 0x83E7B24, 2, 1, 3, 16, 0, 0
    createtask sub_80B8A74, 5, 4, 1
    createtask sub_80B8A74, 5, 5, 1
    createtask sub_80B8A74, 5, 6, 1
    createtask sub_80B8A74, 5, 7, 1
    wait
    end

Move_SLEEP_TALK:: @ 81D20AA
    loadsprite 10228
    createtask sub_8099704, 5, 0, 4, 4096, 2, 0
    pause 20
    sprite 0x83FEF70, 130, 0, 20, 5, -1
    panse_19 190, 192
    pause 6
    sprite 0x83FEF70, 130, 0, 20, 5, -1
    pause 6
    sprite 0x83FEF70, 130, 0, 20, 5, -1
    pause 20
    sprite 0x83FEF70, 130, 0, 20, 5, -5
    panse_19 190, 192
    pause 6
    sprite 0x83FEF70, 130, 0, 20, 5, -5
    pause 6
    sprite 0x83FEF70, 130, 0, 20, 5, -5
    pause 20
    sprite 0x83FEF70, 130, 0, 20, 5, -3
    panse_19 190, 192
    pause 6
    sprite 0x83FEF70, 130, 0, 20, 5, -3
    pause 6
    sprite 0x83FEF70, 130, 0, 20, 5, -3
    wait
    end

Move_HYPER_FANG:: @ 81D2165
    loadsprite 10192
    panse_19 154, 63
    pause 1
    pause 2
    createtask sub_80BC02C, 2,
    jumpvareq 7, 1, .L81D21C5
    createtask sub_80DEAB4, 2,
    jumpvareq 7, 0, .L81D21B7
    jump .L81D21BE
.L81D2193:
    waitbgfadeout
    sprite 0x83FEFBC, 130,
    waitbgfadein
    createtask sub_80989F8, 3, 1, 0, 10, 10, 1
    panse_19 185, 63
    pause 20
    restorebg
    waitbgfadein
    wait
    end
.L81D21B7:
    fadetobg 4
    jump .L81D2193
.L81D21BE:
    fadetobg 5
    jump .L81D2193
.L81D21C5:
    fadetobg 6
    jump .L81D2193

Move_TRI_ATTACK:: @ 81D21CC
    loadsprite 10230
    sprite 0x83FF0D8, 130, 16, 0
    panse_19 213, 192
    pause 20
    panse_19 213, 192
    pause 20
    createtask_1F mas_80DCF38, 213, 65472, 63, 5, 6, 0, 7
    wait
    sprite 0x83E7B24, 2, 1, 2, 0, 16, 0
    pause 16
    loadsprite 10033
    sprite 0x83E5C88, 130, 0, 0, 30, 30, -1, 0
    panse_19 138, 63
    sprite 0x83E5C88, 130, 0, 0, 30, 30, 0, 1
    pause 1
    sprite 0x83E5C88, 130, 0, 0, 30, 30, -1, -1
    pause 1
    sprite 0x83E5C88, 130, 0, 0, 30, 30, 2, 1
    pause 1
    sprite 0x83E5C88, 130, 0, 0, 30, 30, 1, -1
    pause 1
    sprite 0x83E5C88, 130, 0, 0, 30, 30, -1, 1
    pause 1
    sprite 0x83E5C88, 130, 0, 0, 30, 30, 1, -2
    pause 1
    sprite 0x83E5C88, 130, 0, 0, 30, 30, 3, 1
    pause 2
    createtask sub_80ADAD8, 2, 20, 3, 1, 1
    wait
    loadsprite 10037
    createtask sub_80BA0E8, 2, 257, 257, 257
    panse_19 214, 63
    sprite 0x83E5F38, 130, 0, -48
    pause 1
    sprite 0x83E5F38, 130, 0, -16
    pause 1
    sprite 0x83E5F38, 130, 0, 16
    pause 20
    createtask sub_80ADAD8, 2, 20, 3, 1, 0
    pause 2
    createtask sub_80BA0E8, 2, 257, 257, 257
    wait
    loadsprite 10141
    call MoveFn_81D540A
    sprite 0x83E7B24, 2, 1, 2, 16, 0, 0
    wait
    end

Move_WILL_O_WISP:: @ 81D2340
    loadsprite 10232
    loadsprite 10231
    monbg 3
    monbgprio_2A 1
    panse_19 144, 192
    panse_1D 144, 192, 10
    createtask sub_80DD444, 2, -64, -64, 1, 0
    sprite 0x83E5EB4, 2, 0, 0, 0
    pause 3
    sprite 0x83E5EB4, 3, 0, 0, 1
    pause 3
    sprite 0x83E5EB4, 4, 0, 0, 2
    pause 3
    sprite 0x83E5EB4, 4, 0, 0, 3
    pause 40
    createtask sub_80DD444, 2, -64, 63, 2, 0
    wait
    monbgprio_29
    panse_19 138, 63
    createtask sub_8098B1C, 2, 1, 4, 0, 13, 1
    sprite 0x83E5EE4, 2, 0
    sprite 0x83E5EE4, 2, 42
    sprite 0x83E5EE4, 2, 84
    sprite 0x83E5EE4, 2, 126
    sprite 0x83E5EE4, 2, 168
    sprite 0x83E5EE4, 2, 210
    wait
    clearmonbg 3
    end

Move_ENCORE:: @ 81D23FE
    loadsprite 10227
    loadsprite 10247
    createtask sub_80DEDD8, 2,
    createtask sub_80BAB38, 2, 248, 3, 0, 10, 0
    wait
    sprite 0x83FF00C, 130, 0, -8
    sprite 0x83FF024, 2, -2, 0, 0, 0, 9
    sprite 0x83FF024, 2, 2, 0, 1, 0, 9
    sprite 0x83FF03C, 3, -2, 0, 0, 0, 9
    sprite 0x83FF03C, 3, 2, 0, 1, 0, 9
    pause 16
    createtask sub_80DD410, 5, 216, 63
    createtask sub_8099704, 5, 1, 8, 1536, 5, 1
    wait
    createtask sub_80BAB38, 2, 248, 3, 10, 0, 1
    wait
    createtask sub_80DEE78, 2,
    end

Move_TRICK:: @ 81D24A5
    loadsprite 10224
    loadsprite 10207
    sprite 0x83E2F60, 2, -40, 80
    sprite 0x83E2F60, 2, -40, 208
    pause 16
    panse_19 198, 0
    createtask sub_80A9A20, 3,
    createtask sub_80A9AB0, 3,
    pause 30
    panse_19 128, 0
    pause 24
    panse_19 128, 0
    pause 16
    panse_19 128, 0
    pause 16
    panse_19 128, 0
    pause 16
    panse_19 128, 0
    pause 16
    panse_19 128, 0
    pause 16
    panse_19 219, 0
    createtask sub_80989F8, 3, 0, 5, 0, 7, 2
    createtask sub_80989F8, 3, 1, 5, 0, 7, 2
    wait
    end

Move_WISH:: @ 81D2523
    loadsprite 10233
    loadsprite 10049
    sprite 0x83E7B24, 2, 1, 3, 0, 10, 0
    wait
    panse_27 200, 63, 192, 253, 0
    sprite 0x83FF168, 40,
    wait
    pause 60
    panse_1C 188, 192, 16, 3
    call MoveFn_81D569E
    wait
    sprite 0x83E7B24, 2, 1, 3, 10, 0, 0
    wait
    end

Move_STOCKPILE:: @ 81D256B
    loadsprite 10235
    panse_19 133, 192
    createtask sub_80B9BDC, 2, 2, 8, 1, 0, 12, 32767
    createtask sub_80DF848, 5,
    call MoveFn_81D25A9
    call MoveFn_81D25A9
    wait
    sprite 0x83E7B24, 2, 2, 0, 12, 0, 32767
    end

MoveFn_81D25A9:: @ 81D25A9
    sprite 0x83E2ABC, 2, 55, 55, 13
    pause 1
    sprite 0x83E2ABC, 2, -55, -55, 13
    pause 1
    sprite 0x83E2ABC, 2, 0, 55, 13
    pause 1
    sprite 0x83E2ABC, 2, 0, -55, 13
    pause 1
    sprite 0x83E2ABC, 2, 55, -34, 13
    pause 1
    sprite 0x83E2ABC, 2, 55, 34, 13
    pause 1
    sprite 0x83E2ABC, 2, -55, -34, 13
    pause 1
    sprite 0x83E2ABC, 2, -55, 34, 13
    pause 1
    ret

Move_SPIT_UP:: @ 81D2622
    loadsprite 10237
    loadsprite 10135
    panse_19 145, 192
    createtask sub_80DF8A0, 5,
    createtask sub_8098B1C, 2, 0, 1, 0, 8, 2
    pause 45
    panse_19 225, 192
    pause 3
    sprite 0x83E42C8, 2, 0, 12
    sprite 0x83E42C8, 2, 32, 12
    sprite 0x83E42C8, 2, 64, 12
    sprite 0x83E42C8, 2, 96, 12
    sprite 0x83E42C8, 2, 128, 12
    sprite 0x83E42C8, 2, 160, 12
    sprite 0x83E42C8, 2, 192, 12
    sprite 0x83E42C8, 2, 224, 12
    pause 5
    jumpif 2, .L81D26EF
    jumpif 3, .L81D2718
.L81D26B2:
    pause 5
    createtask sub_8099BD4, 2, 0, 1, 8, 1, 0
    panse_19 127, 63
    sprite 0x83E7C98, 131, -12, 10, 1, 1
    pause 5
    panse_19 127, 63
    sprite 0x83E7C98, 131, 12, -10, 1, 1
    wait
    end
.L81D26EF:
    sprite 0x83E42C8, 2, 16
    sprite 0x83E42C8, 2, 80
    sprite 0x83E42C8, 2, 144
    sprite 0x83E42C8, 2, 208
    jump .L81D26B2
.L81D2718:
    sprite 0x83E42C8, 2, 16
    sprite 0x83E42C8, 2, 48
    sprite 0x83E42C8, 2, 80
    sprite 0x83E42C8, 2, 112
    sprite 0x83E42C8, 2, 144
    sprite 0x83E42C8, 2, 176
    sprite 0x83E42C8, 2, 208
    sprite 0x83E42C8, 2, 240
    jump .L81D26B2

Move_SWALLOW:: @ 81D2765
    loadsprite 10236
    loadsprite 10031
    panse_19 145, 192
    createtask sub_80DF964, 5,
    createtask sub_8098B1C, 2, 0, 1, 0, 8, 2
    pause 38
    panse_19 225, 192
    createtask sub_8098B1C, 2, 0, 2, 0, 12, 1
    call MoveFn_81D27B6
    jumpif 2, .L81D27F8
    jumpif 3, .L81D2802
.L81D27AF:
    wait
    call MoveFn_81D56C9
    end

MoveFn_81D27B6:: @ 81D27B6
    sprite 0x83FF1F8, 2, 0, -8
    pause 1
    sprite 0x83FF1F8, 2, -24, -8
    pause 1
    sprite 0x83FF1F8, 2, 16, -8
    pause 1
    sprite 0x83FF1F8, 2, -16, -8
    pause 1
    sprite 0x83FF1F8, 2, 24, -8
    pause 1
    ret

.L81D27F8:
    call MoveFn_81D27B6
    jump .L81D27AF

.L81D2802:
    call MoveFn_81D27B6
    call MoveFn_81D27B6
    jump .L81D27AF

Move_TRANSFORM:: @ 81D2811
    monbg 0
    panse_19 196, 192
    panse_1D 197, 192, 48
    createtask c3_80DF9BC, 2, 0
    wait
    clearmonbg 0
    end

Move_MORNING_SUN:: @ 81D2829
    loadsprite 10241
    loadsprite 10031
    createtask sub_80DFC50, 5,
    pause 8
    createtask sub_80BA7F8, 10, 1921, 8, 0, 12, 32767
    pause 14
    call MoveFn_81D28AF
    call MoveFn_81D28AF
    call MoveFn_81D28AF
    call MoveFn_81D28AF
    call MoveFn_81D28AF
    call MoveFn_81D28AF
    call MoveFn_81D28AF
    call MoveFn_81D28AF
    call MoveFn_81D28AF
    call MoveFn_81D28AF
    call MoveFn_81D28AF
    call MoveFn_81D28AF
    call MoveFn_81D28AF
    call MoveFn_81D28AF
    call MoveFn_81D28AF
    createtask sub_80BA7F8, 10, 1921, 3, 12, 0, 32767
    wait
    waitsound
    call MoveFn_81D56C9
    end

MoveFn_81D28AF:: @ 81D28AF
    sprite 0x83FF26C, 2, 30, 640
    pause 5
    ret

Move_SWEET_SCENT:: @ 81D28BD
    loadsprite 10238
    panse_19 229, 192
    sprite 0x83FF324, 2, 100, 0, 100
    pause 25
    setpan 0
    call MoveFn_81D2901
    sprite 0x83FF324, 2, 55, 0
    setpan 63
    createtask sub_80B9BDC, 2, 20, 1, 5, 5, 13, 22207
    call MoveFn_81D2901
    wait
    end

MoveFn_81D2901:: @ 81D2901
    sprite 0x83FF324, 2, 70, 1, 64
    pause 2
    sprite 0x83FF324, 2, 60, 0, 64
    pause 5
    sprite 0x83FF324, 2, 80, 1, 64
    pause 2
    sprite 0x83FF324, 2, 58, 0, 120
    pause 2
    sprite 0x83FF324, 2, 100, 0, 120
    pause 2
    sprite 0x83FF324, 2, 90, 0, 64
    pause 2
    sprite 0x83FF324, 2, 48, 0, 64
    pause 2
    sprite 0x83FF324, 2, 95, 1, 80
    pause 2
    sprite 0x83FF324, 2, 100, 0, 120
    pause 2
    sprite 0x83FF324, 2, 75, 1, 64
    pause 2
    sprite 0x83FF324, 2, 85, 0, 120
    pause 2
    ret

Move_HYPER_BEAM:: @ 81D29A7
    loadsprite 10147
    sprite 0x83E7B24, 2, 1, 4, 0, 16, 0
    wait
    pause 10
    panse_19 208, 192
    createtask sub_8098B1C, 2, 0, 1, 0, 4, 1
    wait
    pause 30
    createtask_1F mas_80DCF38, 240, 65472, 63, 1, 15, 0, 5
    createtask sub_80989F8, 2, 0, 0, 4, 50, 1
    createtask sub_80B9F6C, 2, 10147, 1, 12, 31, 16, 0, 0
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    createtask sub_8098B1C, 2, 1, 4, 0, 50, 1
    createtask sub_80BA7F8, 10, 4, 2, 0, 11, 26425
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    call MoveFn_81D2AD8
    createtask sub_80BA7F8, 10, 4, 2, 11, 0, 26425
    wait
    sprite 0x83E7B24, 2, 1, 4, 16, 0, 0
    end

MoveFn_81D2AD8:: @ 81D2AD8
    sprite 0x83E2B00, 130,
    sprite 0x83E2B00, 130,
    pause 1
    ret

Move_FLATTER:: @ 81D2AE9
    loadsprite 10227
    loadsprite 10240
    createtask sub_80DD410, 5, 216, 63
    createtask sub_80DEDD8, 2,
    createtask sub_80BAB38, 2, 248, 3, 0, 10, 0
    wait
    sprite 0x83FF3A0, 130, 0, -8, 80
    pause 0
    sprite 0x83D4E6C, 2, 5, 2, 1
    pause 10
    sprite 0x83D4E6C, 2, 5, 2, 1
    pause 0
    createtask sub_80DD3DC, 5, 222, -64
    call MoveFn_81D2BD2
    call MoveFn_81D2BD2
    call MoveFn_81D2BD2
    call MoveFn_81D2BD2
    call MoveFn_81D2BD2
    call MoveFn_81D2BD2
    call MoveFn_81D2BD2
    call MoveFn_81D2BD2
    call MoveFn_81D2BD2
    call MoveFn_81D2BD2
    call MoveFn_81D2BD2
    call MoveFn_81D2BD2
    call MoveFn_81D2BD2
    call MoveFn_81D2BD2
    call MoveFn_81D2BD2
    call MoveFn_81D2BD2
    call MoveFn_81D2BD2
    call MoveFn_81D2BD2
    call MoveFn_81D2BD2
    pause 5
    createtask sub_80DD3DC, 5, 222, 63
    wait
    createtask sub_80BAB38, 2, 248, 3, 10, 0, 1
    wait
    createtask sub_80DEE78, 2,
    end

MoveFn_81D2BD2:: @ 81D2BD2
    sprite 0x83FF388, 40, 0
    sprite 0x83FF388, 40, 1
    ret

Move_ROLE_PLAY:: @ 81D2BE5
    monbg 2
    createtask sub_80BA7F8, 10, 4, 2, 0, 16, 32767
    sprite 0x83E7B24, 2, 1, 2, 0, 10, 0
    wait
    panse_19 213, 192
    panse_1D 202, 192, 30
    createtask sub_80E0FB8, 2,
    wait
    clearmonbg 2
    createtask sub_80BA7F8, 10, 4, 2, 16, 0, 32767
    pause 8
    sprite 0x83E7B24, 2, 1, 2, 10, 0, 0
    end

Move_REFRESH:: @ 81D2C42
    loadsprite 10203
    loadsprite 10049
    panse_19 232, 192
    createtask sub_80E2084, 2, 0
    wait
    panse_19 221, 192
    call MoveFn_81D569E
    wait
    panse_19 95, 192
    sprite 0x83E7B24, 2, 31, 3, 10, 0, 31500
    sprite 0x83E4094, 3, 0, 0, 0, 0
    end

Move_BLAZE_KICK:: @ 81D2C85
    loadsprite 10135
    loadsprite 10143
    loadsprite 10029
    monbg 1
    setalpha 12, 8
    panse_19 137, 63
    sprite 0x83E678C, 131, 0, 0, 1, 30
    createtask sub_80BA7F8, 10, 4, 2, 0, 7, 32767
    pause 30
    panse_19 140, 63
    sprite 0x83E7C08, 130, 0, 0, 1, 0
    createtask sub_8098B1C, 2, 1, 3, 0, 14, 1
    createtask sub_80BA7F8, 10, 4, 2, 0, 0, 32767
    sprite 0x83E7B3C, 2, 31, 3, 1, 0, 8, 0, 0
    call MoveFn_81D0950
    wait
    clearmonbg 1
    blendoff
    end

Move_HYPER_VOICE:: @ 81D2D0D
    loadsprite 10203
    call MoveFn_81D2D1F
    wait
    pause 8
    call MoveFn_81D2D1F
    wait
    end

MoveFn_81D2D1F:: @ 81D2D1F
    createtask sub_80DD334, 5,
    sprite 0x83E7B24, 2, 31, 3, 8, 0, 1023
    createtask sub_80998B0, 5, -5, -5, 5, 0, 0
    sprite 0x83E40F8, 0, 45, 0, 0, 0, 0, 0, 1
    createtask sub_8098B1C, 2, 1, 1, 0, 6, 1
    createtask sub_8098B1C, 2, 3, 1, 0, 6, 1
    createtask sub_80BA47C, 2, 1, 0, 6, 1
    createtask sub_80DD2F4, 5,
    ret

Move_SAND_TOMB:: @ 81D2D96
    loadsprite 10074
    sprite 0x83E7B24, 0, 4, 2, 0, 7, 563
    createtask sub_80989F8, 5, 1, 0, 2, 43, 1
    panse_19 223, 63
    call MoveFn_81D2DE3
    call MoveFn_81D2DE3
    call MoveFn_81D2DE3
    pause 22
    sprite 0x83E7B24, 0, 4, 2, 7, 0, 563
    wait
    end

MoveFn_81D2DE3:: @ 81D2DE3
    sprite 0x83E73E4, 130, 0, 32, 528, 30, 10, 50, 1
    pause 2
    sprite 0x83E73E4, 130, 0, 36, 480, 20, 13, -46, 1
    pause 2
    sprite 0x83E73E4, 130, 0, 37, 576, 20, 5, 42, 1
    pause 2
    sprite 0x83E73E4, 130, 0, 35, 400, 25, 8, -42, 1
    pause 2
    sprite 0x83E73E4, 130, 0, 32, 512, 25, 13, 46, 1
    pause 2
    sprite 0x83E73E4, 130, 0, 37, 464, 30, 12, -50, 1
    pause 2
    ret

Move_SHEER_COLD:: @ 81D2E6E
    fadetobg 15
    waitbgfadeout
    panse_19 130, 0
    waitbgfadein
    loadsprite 10010
    monbg 3
    monbgprio_28 1
    setalpha 12, 8
    createtask sub_80783FC, 2,
    panse_1D 235, 63, 17
    wait
    clearmonbg 3
    blendoff
    restorebg
    waitbgfadein
    end

Move_ARM_THRUST:: @ 81D2E93
    loadsprite 10143
    loadsprite 10135
    monbgprio_28 1
    setalpha 12, 8
    createtask sub_8099980, 5, 8, 5, 0, 0
    pause 6
    sprite 0x83D4E54, 2, 4, 3
    pause 4
    panse_19 186, 63
    sprite 0x83E68AC, 130, 10, -8, 14, 3
    wait
    createtask sub_8099980, 5, 8, 5, 0, 1
    panse_19 127, 63
    ifelse .L81D2F00, .L81D2F14
.L81D2EEC:
    createtask sub_80989F8, 5, 1, 4, 0, 6, 1
    wait
    blendoff
    end
.L81D2F00:
    sprite 0x83E7C08, 130, 8, 0, 1, 2
    jump .L81D2EEC
.L81D2F14:
    sprite 0x83E7C08, 130, -8, 0, 1, 2
    jump .L81D2EEC

Move_MUDDY_WATER:: @ 81D2F28
    panse_1B 158, 192, 63, 2, 0
    createtask sub_80AB38C, 2, 1
    wait
    end

Move_BULLET_SEED:: @ 81D2F3A
    loadsprite 10006
    sprite 0x83E3D94, 130, 20, 0
    pause 5
    sprite 0x83E3D94, 130, 20, 0
    pause 5
    sprite 0x83E3D94, 130, 20, 0
    pause 5
    createtask sub_8098B1C, 2, 1, 2, 0, 30, 1
    sprite 0x83E3D94, 130, 20, 0
    pause 5
    sprite 0x83E3D94, 130, 20, 0
    pause 5
    sprite 0x83E3D94, 130, 20, 0
    pause 5
    sprite 0x83E3D94, 130, 20, 0
    pause 5
    sprite 0x83E3D94, 130, 20, 0
    pause 5
    sprite 0x83E3D94, 130, 20, 0
    pause 5
    sprite 0x83E3D94, 130, 20, 0
    wait
    end

Move_DRAGON_CLAW:: @ 81D2FD0
    loadsprite 10029
    loadsprite 10039
    panse_19 143, 192
    createtask sub_80BA7F8, 10, 2, 4, 0, 8, 639
    createtask sub_80989F8, 5, 0, 0, 2, 15, 1
    call MoveFn_81D31AD
    call MoveFn_81D31AD
    sprite 0x83D4E54, 2, 6, 4
    sprite 0x83E7438, 2, 0, 28, 528, 30, 13, 50, 0
    pause 2
    createtask sub_80DD3DC, 5, 129, 63
    sprite 0x83E79E8, 130, -10, -10, 0
    sprite 0x83E79E8, 130, -10, 10, 0
    sprite 0x83E7B88, 2, -4, 1, 10, 3, 1
    sprite 0x83E7438, 2, 0, 32, 480, 20, 16, -46, 0
    pause 2
    sprite 0x83E7438, 2, 0, 33, 576, 20, 8, 42, 0
    pause 2
    sprite 0x83E7438, 2, 0, 31, 400, 25, 11, -42, 0
    pause 2
    sprite 0x83D4E54, 2, 6, 4
    sprite 0x83E7438, 2, 0, 28, 512, 25, 16, 46, 0
    pause 2
    createtask sub_80DD3DC, 5, 129, 63
    sprite 0x83E79E8, 130, 10, -10, 1
    sprite 0x83E79E8, 130, 10, 10, 1
    sprite 0x83E7B88, 2, -4, 1, 10, 3, 1
    sprite 0x83E7438, 2, 0, 33, 464, 30, 15, -50, 0
    pause 2
    sprite 0x83E7438, 2, 0, 28, 528, 30, 13, 50, 0
    pause 2
    sprite 0x83E7438, 2, 0, 32, 480, 20, 16, -46, 0
    pause 2
    sprite 0x83E7438, 2, 0, 33, 576, 20, 8, 42, 0
    pause 2
    sprite 0x83E7438, 2, 0, 31, 400, 25, 11, -42, 0
    pause 2
    sprite 0x83E7438, 2, 0, 28, 512, 25, 16, 46, 0
    pause 2
    sprite 0x83E7438, 2, 0, 33, 464, 30, 15, -50, 0
    createtask sub_80BA7F8, 10, 2, 4, 8, 0, 639
    wait
    end

MoveFn_81D31AD:: @ 81D31AD
    sprite 0x83E7438, 2, 0, 28, 528, 30, 13, 50, 0
    pause 2
    sprite 0x83E7438, 2, 0, 32, 480, 20, 16, -46, 0
    pause 2
    sprite 0x83E7438, 2, 0, 33, 576, 20, 8, 42, 0
    pause 2
    sprite 0x83E7438, 2, 0, 31, 400, 25, 11, -42, 0
    pause 2
    sprite 0x83E7438, 2, 0, 28, 512, 25, 16, 46, 0
    pause 2
    sprite 0x83E7438, 2, 0, 33, 464, 30, 15, -50, 0
    pause 2
    ret

unk_81D3238:: @81D3238
    end

Move_MUD_SHOT:: @ 81D3239
    loadsprite 10259
    monbg 3
    monbgprio_28 1
    setalpha 12, 8
    createtask sub_80989F8, 5, 0, 0, 2, 46, 1
    pause 6
    createtask sub_80AB100, 5, 100
    panse_1B 158, 192, 63, 1, 0
    call MoveFn_81D32B3
    call MoveFn_81D32B3
    call MoveFn_81D32B3
    createtask sub_80989F8, 5, 1, 3, 0, 43, 1
    call MoveFn_81D32B3
    call MoveFn_81D32B3
    call MoveFn_81D32B3
    call MoveFn_81D32B3
    call MoveFn_81D32B3
    call MoveFn_81D32B3
    call MoveFn_81D32B3
    call MoveFn_81D32B3
    wait
    clearmonbg 3
    blendoff
    end

MoveFn_81D32B3:: @ 81D32B3
    sprite 0x83E5974, 3, 10, 10, 0, 16
    pause 2
    sprite 0x83E5974, 3, 10, 10, 0, 16
    pause 2
    ret

Move_METEOR_MASH:: @ 81D32D6
    loadsprite 10233
    loadsprite 10135
    loadsprite 10143
    panse_1B 201, 192, 63, 3, 0
    fadetobg 16
    waitbgfadein
    wait
    sprite 0x83FF6BC, 131, -48, -64, 72, 32, 30
    pause 10
    sprite 0x83FF6BC, 131, -112, -64, 8, 32, 30
    pause 40
    sprite 0x83E678C, 131, 0, 0, 0, 30
    sprite 0x83FF6BC, 131, -80, -64, 40, 32, 30
    pause 20
    panse_19 116, 63
    sprite 0x83E7C08, 131, 0, 0, 1, 1
    createtask sub_8098B1C, 2, 1, 5, 0, 20, 1
    wait
    pause 10
    restorebg
    waitbgfadein
    wait
    end

Move_REVENGE:: @ 81D335D
    loadsprite 10245
    monbg 1
    setalpha 12, 8
    panse_19 145, 192
    sprite 0x83E6900, 2, 10, -10
    wait
    createtask sub_80B9BDC, 2, 2, 0, 4, 2, 8, 31
    wait
    unloadsprite 10245
    loadsprite 10246
    sprite 0x83D4E54, 2, 6, 4
    pause 4
    panse_19 186, 63
    sprite 0x83E6948, 130, 10, -10
    wait
    unloadsprite 10246
    loadsprite 10135
    createtask sub_8098B1C, 2, 1, 3, 0, 10, 1
    sprite 0x83E7CB0, 131, -10, -8, 1, 1, 8
    panse_19 116, 63
    pause 8
    sprite 0x83E7CB0, 131, 10, 8, 1, 1, 8
    panse_19 134, 63
    wait
    clearmonbg 1
    blendoff
    end

Move_POISON_FANG:: @ 81D33F4
    loadsprite 10192
    loadsprite 10150
    panse_19 154, 63
    sprite 0x83FEFBC, 130,
    pause 10
    createtask sub_80989F8, 3, 1, 3, 0, 10, 1
    wait
    createtask sub_80B9BDC, 2, 4, 0, 4, 0, 12, 26650
    call MoveFn_81D575B
    wait
    end

Move_SUBSTITUTE:: @ 81D3433
    panse_19 219, 192
    createtask sub_80E3294, 2,
    end

Move_FRENZY_PLANT:: @ 81D343F
    loadsprite 10223
    loadsprite 10135
    monbg 1
    monbgprio_28 1
    setalpha 12, 8
    sprite 0x83E7B24, 0, 1, 2, 0, 5, 0
    wait
    sprite 0x83E2DDC, 2, 10, 8, 2, 0, 0, 100
    panse_19 148, 192
    pause 5
    sprite 0x83E2DDC, 2, 20, -8, -2, 0, 1, 95
    panse_19 148, 213
    pause 5
    sprite 0x83E2DDC, 2, 30, 8, -4, 0, 0, 90
    panse_19 148, 234
    pause 5
    sprite 0x83E2DDC, 2, 40, -8, 4, 0, 1, 85
    panse_19 148, 0
    pause 5
    sprite 0x83E2DDC, 2, 50, 8, 0, 0, 0, 85
    panse_19 148, 21
    pause 5
    sprite 0x83E2DDC, 2, 60, -8, -2, 0, 1, 85
    panse_19 148, 42
    pause 5
    sprite 0x83E2DDC, 2, 75, 8, 0, 0, 0, 85
    panse_19 148, 63
    pause 5
    sprite 0x83E2DDC, 2, 85, 16, 6, 0, 3, 80
    panse_19 148, 63
    pause 5
    sprite 0x83E2DDC, 2, 85, -16, -6, 0, 2, 75
    panse_19 148, 63
    pause 5
    sprite 0x83E7C08, 2, -10, -10, 1, 3
    panse_19 127, 63
    createtask sub_80989F8, 3, 1, 8, 0, 20, 1
    pause 3
    sprite 0x83E7C08, 2, 10, 8, 1, 3
    panse_19 127, 63
    pause 3
    sprite 0x83E7C08, 2, 10, -3, 1, 2
    panse_19 127, 63
    pause 3
    sprite 0x83E7C08, 2, -3, 1, 1, 2
    panse_19 127, 63
    pause 2
    sprite 0x83E7C08, 2, -10, 1, 1, 1
    panse_19 127, 63
    pause 2
    sprite 0x83E7C08, 2, 0, 10, 1, 1
    panse_19 127, 63
    wait
    sprite 0x83E7B24, 0, 1, 2, 5, 0, 0
    wait
    clearmonbg 1
    blendoff
    end

Move_METAL_SOUND:: @ 81D35E3
    loadsprite 10260
    monbg 3
    monbgprio_2A 1
    createtask sub_8098B1C, 2, 0, 2, 0, 8, 1
    call MoveFn_81D3616
    call MoveFn_81D3616
    call MoveFn_81D3616
    call MoveFn_81D3616
    wait
    clearmonbg 3
    pause 0
    wait
    end

MoveFn_81D3616:: @ 81D3616
    panse_1B 174, 192, 63, 2, 0
    sprite 0x83E3CD0, 130, 16, 0, 0, 0, 30, 0
    pause 2
    ret

Move_FOCUS_PUNCH:: @ 81D3633
    jump .L81D363A
.L81D3638:
    wait
    end
.L81D363A:
    loadsprite 10135
    loadsprite 10143
    pause 1
    createtask sub_80BC02C, 2,
    jumpvareq 7, 1, .L81D36F3
    createtask sub_80DEAB4, 2,
    jumpvareq 7, 0, .L81D36E5
    jumpvareq 7, 1, .L81D36EC
.L81D3668:
    waitbgfadein
    monbg 3
    setalpha 12, 8
    panse_19 186, 63
    sprite 0x83E697C, 130,
    pause 10
    sprite 0x83E7C08, 2, -10, -8, 1, 0
    createtask sub_80989F8, 5, 1, 8, 0, 24, 1
    pause 8
    sprite 0x83E7C08, 2, 10, 2, 1, 0
    panse_19 116, 63
    pause 8
    sprite 0x83E7C08, 2, 10, -6, 1, 0
    panse_19 116, 63
    pause 8
    sprite 0x83E7C08, 2, 0, 8, 1, 0
    panse_19 134, 63
    wait
    restorebg
    waitbgfadein
    clearmonbg 3
    blendoff
    jump .L81D3638
.L81D36E5:
    fadetobg 4
    jump .L81D3668
.L81D36EC:
    fadetobg 5
    jump .L81D3668
.L81D36F3:
    fadetobg 6
    jump .L81D3668

Move_RETURN:: @ 81D36FA
    loadsprite 10135
    monbg 3
    setalpha 12, 8
    createtask sub_80E38D8, 2,
    pause 2
    jumpvareq 7, 0, .L81D3730
    jumpvareq 7, 1, .L81D3782
    jumpvareq 7, 2, .L81D37E2
    jumpvareq 7, 3, .L81D38FD
.L81D372B:
    wait
    clearmonbg 3
    blendoff
    end
.L81D3730:
    sprite 0x83D4E6C, 2, 16, 1, 0
    createtask sub_80DD410, 5, 160, -64
    wait
    sprite 0x83D4E6C, 2, 16, 1, 0
    createtask sub_80DD410, 5, 160, -64
    pause 5
    sprite 0x83E7C08, 2, -10, -8, 1, 2
    createtask sub_80DD3DC, 5, 132, 63
    jump .L81D372B
.L81D3782:
    sprite 0x83D4E6C, 2, 6, 1, 0
    createtask sub_80DD410, 5, 160, -64
    wait
    sprite 0x83D4E6C, 2, 6, 1, 0
    createtask sub_80DD410, 5, 160, -64
    wait
    pause 11
    sprite 0x83D4E54, 2, 5, 4
    pause 6
    sprite 0x83E7C08, 3, 0, 0, 1, 2
    createtask sub_80DD3DC, 5, 134, 63
    jump .L81D372B
.L81D37E2:
    sprite 0x83D4E6C, 2, 6, 1, 0
    createtask sub_80DD410, 5, 160, -64
    wait
    sprite 0x83D4E6C, 2, 6, 1, 0
    createtask sub_80DD410, 5, 160, -64
    wait
    sprite 0x83D4E6C, 2, 6, 1, 0
    createtask sub_80DD410, 5, 160, -64
    wait
    sprite 0x83D4E6C, 2, 6, 1, 0
    createtask sub_80DD410, 5, 160, -64
    wait
    sprite 0x83E7C08, 2, -10, -8, 1, 2
    createtask sub_80DD3DC, 5, 116, 63
    createtask sub_80989F8, 5, 1, 6, 0, 8, 1
    pause 8
    sprite 0x83E7C08, 2, 10, 10, 1, 2
    createtask sub_80DD3DC, 5, 116, 63
    createtask sub_80989F8, 5, 1, 6, 0, 8, 1
    pause 8
    sprite 0x83E7C08, 2, 3, -5, 1, 2
    createtask sub_80DD3DC, 5, 116, 63
    createtask sub_80989F8, 5, 1, 6, 0, 8, 1
    pause 8
    sprite 0x83E7C08, 2, -5, 3, 1, 2
    createtask sub_80DD3DC, 5, 116, 63
    createtask sub_80989F8, 5, 1, 6, 0, 8, 1
    jump .L81D372B
.L81D38FD:
    sprite 0x83E7B24, 2, 1, 0, 0, 6, 0
    wait
    sprite 0x83D4E6C, 2, 16, 1, 0
    createtask sub_80DD410, 5, 160, -64
    pause 8
    sprite 0x83E7C08, 2, 3, -5, 1, 2
    createtask sub_80DD3DC, 5, 116, 63
    wait
    sprite 0x83D4E6C, 2, 12, 1, 0
    createtask sub_80DD410, 5, 160, -64
    pause 5
    sprite 0x83E7C08, 2, -10, -8, 1, 2
    createtask sub_80DD3DC, 5, 116, 63
    createtask sub_80989F8, 5, 1, 6, 0, 8, 1
    wait
    pause 4
    sprite 0x83D4E6C, 2, 8, 1, 0
    createtask sub_80DD410, 5, 160, -64
    pause 5
    sprite 0x83E7C08, 2, -10, -8, 1, 2
    createtask sub_80DD3DC, 5, 116, 63
    createtask sub_80989F8, 5, 1, 6, 0, 8, 1
    wait
    pause 2
    createtask sub_80BAB98, 2, 0, 4, 5, 1
    sprite 0x83D4E6C, 2, 4, 1, 0
    createtask sub_80DD410, 5, 160, -64
    sprite 0x83E7C08, 2, -10, -8, 1, 2
    createtask sub_80DD3DC, 5, 116, 63
    createtask sub_80989F8, 5, 1, 6, 0, 8, 1
    createtask sub_80BAB98, 2, 0, 4, 5, 1
    wait
    sprite 0x83D4E6C, 2, 4, 2, 0
    createtask sub_80DD410, 5, 160, -64
    pause 5
    sprite 0x83E7C08, 2, -10, -8, 1, 2
    createtask sub_80DD3DC, 5, 116, 63
    createtask sub_80989F8, 5, 1, 6, 0, 8, 1
    createtask sub_80BAB98, 2, 0, 4, 5, 1
    wait
    call MoveFn_81D3B35
    call MoveFn_81D3B35
    call MoveFn_81D3B35
    call MoveFn_81D3B35
    sprite 0x83E7C08, 2, -10, -8, 1, 0
    createtask sub_80DD3DC, 5, 134, 63
    createtask sub_80989F8, 5, 1, 8, 0, 24, 1
    pause 6
    sprite 0x83E7C08, 2, 10, 10, 1, 0
    createtask sub_80DD3DC, 5, 134, 63
    pause 6
    sprite 0x83E7C08, 2, 3, -5, 1, 0
    createtask sub_80DD3DC, 5, 134, 63
    pause 6
    sprite 0x83E7C08, 2, -5, 3, 1, 0
    createtask sub_80DD3DC, 5, 134, 63
    wait
    sprite 0x83E7B24, 2, 1, 0, 6, 0, 0
    jump .L81D372B

MoveFn_81D3B35:: @ 81D3B35
    sprite 0x83D4E6C, 2, 4, 3, 0
    createtask sub_80DD410, 5, 160, -64
    sprite 0x83E7C08, 2, 0, 0, 1, 2
    createtask sub_80DD3DC, 5, 116, 63
    createtask sub_80989F8, 5, 1, 6, 0, 8, 1
    createtask sub_80BAB98, 2, 0, 4, 5, 1
    wait
    ret

Move_COSMIC_POWER:: @ 81D3B89
    loadsprite 10049
    createtask sub_80DD410, 5, 236, 0
    panse_19 236, 0
    createtask sub_80BB7DC, 2, 0, 0, 15, 0
    wait
    fadetobg 16
    waitbgfadeout
    createtask sub_80BB82C, 2, 0, 128, 0, -1
    waitbgfadein
    pause 70
    createtask sub_80DD3DC, 5, 221, -64
    sprite 0x83E33F4, 2, -15, 0, 0, 0, 32, 60
    pause 8
    sprite 0x83E33F4, 2, 12, -5, 0, 0, 32, 60
    pause 40
    createtask sub_80BB7DC, 2, 0, 15, 0, 0
    wait
    restorebg
    waitbgfadeout
    setvar 7, -1
    waitbgfadein
    wait
    end

Move_BLAST_BURN:: @ 81D3C0E
    loadsprite 10035
    loadsprite 10135
    monbg 3
    setalpha 12, 8
    panse_19 142, 192
    sprite 0x83E5CA0, 2, -32, 0, 24, 0, 0, 0
    sprite 0x83E5CA0, 2, -20, -10, 24, 0, 0, 0
    sprite 0x83E5CA0, 66, 0, -16, 24, 0, 0, 0
    sprite 0x83E5CA0, 66, 20, -10, 24, 0, 0, 0
    sprite 0x83E5CA0, 66, 32, 0, 24, 0, 0, 0
    sprite 0x83E5CA0, 66, 20, 10, 24, 0, 0, 0
    sprite 0x83E5CA0, 2, 0, 16, 24, 0, 0, 0
    sprite 0x83E5CA0, 2, -20, 10, 24, 0, 0, 0
    pause 25
    panse_19 138, 192
    sprite 0x83E5CA0, 2, -64, 0, 24, 0, 0, 0
    sprite 0x83E5CA0, 6, -40, -20, 24, 0, 0, 0
    sprite 0x83E5CA0, 70, 0, -32, 24, 0, 0, 0
    sprite 0x83E5CA0, 70, 40, -20, 24, 0, 0, 0
    createtask sub_80989F8, 5, 1, 6, 0, 8, 1
    sprite 0x83E5CA0, 66, 64, 0, 24, 0, 0, 0
    sprite 0x83E5CA0, 66, 40, 20, 24, 0, 0, 0
    sprite 0x83E5CA0, 2, 0, 32, 24, 0, 0, 0
    sprite 0x83E5CA0, 2, -40, 20, 24, 0, 0, 0
    createtask sub_80BA0E8, 2, 257, 257, 257
    pause 25
    panse_19 138, 192
    sprite 0x83E5CA0, 2, -96, 0, 24, 0, 0, 0
    sprite 0x83E5CA0, 6, -60, -30, 24, 0, 0, 0
    sprite 0x83E5CA0, 70, 0, -48, 24, 0, 0, 0
    sprite 0x83E5CA0, 70, 60, -30, 24, 0, 0, 0
    sprite 0x83E7C08, 130, -4, 3, 1, 0
    createtask sub_80989F8, 5, 1, 12, 0, 20, 1
    createtask sub_80BA47C, 2, 2, 0, 10, 1
    sprite 0x83E5CA0, 66, 96, 0, 24, 0, 0, 0
    sprite 0x83E5CA0, 66, 60, 30, 24, 0, 0, 0
    sprite 0x83E5CA0, 2, 0, 48, 24, 0, 0, 0
    sprite 0x83E5CA0, 2, -60, 30, 24, 0, 0, 0
    createtask sub_80BA0E8, 2, 257, 257, 257
    wait
    clearmonbg 3
    blendoff
    end

Move_ROCK_TOMB:: @ 81D3E50
    loadsprite 10250
    loadsprite 10058
    createtask sub_80BA47C, 2, 2, 0, 10, 1
    wait
    sprite 0x83E7508, 130, 20, 12, 64, 114, 0
    pause 8
    createtask sub_80BA47C, 2, 0, 2, 3, 1
    panse_19 207, 63
    pause 8
    sprite 0x83E7508, 130, -20, 12, 64, 98, 0
    pause 8
    createtask sub_80BA47C, 2, 0, 2, 3, 1
    panse_19 207, 63
    pause 8
    sprite 0x83E7508, 194, 3, 6, 64, 82, 0
    pause 8
    createtask sub_80BA47C, 2, 0, 2, 3, 1
    panse_19 207, 63
    pause 8
    sprite 0x83E7508, 130, -3, 13, 64, 66, 0
    pause 8
    createtask sub_80BA47C, 2, 0, 2, 3, 1
    panse_19 207, 63
    pause 24
    panse_19 208, 63
    sprite 0x83E705C, 133, 1, 50
    createtask sub_80989F8, 5, 1, 3, 0, 20, 1
    createtask sub_80BA47C, 2, 2, 0, 10, 1
    wait
    end

Move_SILVER_WIND:: @ 81D3F37
    loadsprite 10271
    panse_1B 125, 192, 63, 2, 0
    panse_19 221, 0
    pause 0
    monbg 3
    monbgprio_29
    pause 0
    createtask sub_80BA83C, 10, 1, 0, 0, 4, 0
    createtask sub_80BB94C, 2,
    jumpvareq 7, 1, .L81D4138
    fadetobg 22
    waitbgfadeout
    createtask sub_80BB82C, 5, 1536, 0, 0, -1
.L81D3F7E:
    pause 0
    createtask sub_80BA7F8, 10, 1, 0, 4, 4, 0
    waitbgfadein
    sprite 0x83E30A8, 194, -32, 16, 0, 6, 2, 3, 1
    sprite 0x83E30A8, 194, -8, 18, 64, 3, 2, 2, 1
    sprite 0x83E30A8, 120, -24, 18, 90, 5, 1, 2, 1
    sprite 0x83E30A8, 120, -40, 14, 128, 4, 1, 2, 1
    pause 0
    sprite 0x83E30C0, 194, -32, 16, 0, 6, 2, 3, 1
    sprite 0x83E30C0, 194, -8, 18, 64, 3, 2, 2, 1
    sprite 0x83E30C0, 120, -24, 18, 90, 5, 1, 2, 1
    sprite 0x83E30C0, 120, -40, 14, 128, 4, 1, 2, 1
    pause 0
    sprite 0x83E30D8, 194, -32, 16, 0, 6, 2, 3, 1
    sprite 0x83E30D8, 194, -8, 18, 64, 3, 2, 2, 1
    sprite 0x83E30D8, 120, -24, 18, 90, 5, 1, 2, 1
    sprite 0x83E30D8, 120, -40, 14, 128, 4, 1, 2, 1
    pause 6
    sprite 0x83E30A8, 194, -4, 16, 0, 6, 1, 2, 1
    sprite 0x83E30A8, 194, -16, 12, 192, 5, 2, 3, 1
    pause 0
    sprite 0x83E30C0, 194, -4, 16, 0, 6, 1, 2, 1
    sprite 0x83E30C0, 194, -16, 12, 192, 5, 2, 3, 1
    pause 0
    sprite 0x83E30D8, 194, -4, 16, 0, 6, 1, 2, 1
    sprite 0x83E30D8, 194, -16, 12, 192, 5, 2, 3, 1
    wait
    panse_19 126, 63
    clearmonbg 3
    pause 0
    restorebg
    waitbgfadeout
    createtask sub_80BA83C, 10, 1, 0, 4, 0, 0
    setvar 7, -1
    waitbgfadein
    end
.L81D4138:
    fadetobg 23
    waitbgfadeout
    createtask sub_80BB82C, 5, -1536, 0, 0, -1
    jump .L81D3F7E

Move_SNATCH:: @ 81D414F
    panse_19 145, 192
    createtask sub_809949C, 5, 0, -12, 4, 10, 10, 12, 6
    end

Move_DIVE:: @ 81D4169
    loadsprite 10272
    loadsprite 10273
    ifelse .L81D4178, .L81D41CD
.L81D4178:
    loadsprite 10156
    panse_19 155, 192
    sprite 0x83E6D40, 2, 0, 0, 13, 336
    wait
    panse_19 226, 192
    sprite 0x83E6D7C, 3, 0
    call MoveFn_81D41B6
    call MoveFn_81D41B6
    call MoveFn_81D41B6
    call MoveFn_81D41B6
    call MoveFn_81D41B6
    end

MoveFn_81D41B6:: @ 81D41B6
    sprite 0x83E6D94, 5, 0, 0
    sprite 0x83E6D94, 5, 1, 0
    ret

.L81D41CD:
    loadsprite 10148
    loadsprite 10155
    monbg 3
    setalpha 12, 8
    panse_19 171, 63
    sprite 0x83E6D7C, 131, 1
    call MoveFn_81D420C
    call MoveFn_81D420C
    call MoveFn_81D420C
    call MoveFn_81D420C
    call MoveFn_81D420C
    pause 12
    call MoveFn_81C8CA2
    wait
    visible 0
    clearmonbg 3
    blendoff
    end

MoveFn_81D420C:: @ 81D420C
    sprite 0x83E6D94, 133, 0, 1
    sprite 0x83E6D94, 133, 1, 1
    ret

Move_ROCK_BLAST:: @ 81D4223
    loadsprite 10058
    loadsprite 10135
    sprite 0x83D4E54, 2, 4, 6
    pause 3
    panse_19 186, 192
    sprite 0x83E7548, 130, 16, 0, 0, 0, 25, 257
    wait
    sprite 0x83E7C08, 131, 0, 0, 1, 1
    panse_19 124, 63
    sprite 0x83E73CC, 130, 0, 0, 20, 24, 14, 2
    createtask sub_80989F8, 2, 1, 3, 0, 5, 1
    sprite 0x83E73CC, 130, 5, 0, -20, 24, 14, 1
    sprite 0x83E73CC, 130, 0, 5, 20, -24, 14, 2
    sprite 0x83E73CC, 130, -5, 0, -20, -24, 14, 2
    wait
    end

Move_OVERHEAT:: @ 81D42C0
    loadsprite 10029
    loadsprite 10135
    monbg 3
    setalpha 12, 18
    sprite 0x83E7B24, 2, 1, 1, 0, 5, 28
    wait
    createtask sub_80BBE10, 5,
    wait
    createtask sub_80BBE6C, 5, 0, 1
    pause 1
    createtask sub_80BBFA4, 5, 0
    pause 1
    panse_19 164, 192
    createtask sub_80BBE6C, 5, 1, 0
    pause 1
    sprite 0x83E7B24, 2, 2, 1, 0, 13, 28
    createtask sub_80989F8, 5, 0, 2, 0, 15, 1
    wait
    panse_19 138, 192
    sprite 0x83E7860, 2, 1, 0, 30, 25, -20
    sprite 0x83E7860, 2, 1, 32, 30, 25, -20
    sprite 0x83E7860, 2, 1, 64, 30, 25, -20
    sprite 0x83E7860, 2, 1, 96, 30, 25, -20
    sprite 0x83E7860, 2, 1, 128, 30, 25, -20
    sprite 0x83E7860, 66, 1, 160, 30, 25, -20
    sprite 0x83E7860, 66, 1, 192, 30, 25, -20
    sprite 0x83E7860, 66, 1, 224, 30, 25, -20
    pause 5
    sprite 0x83E7860, 2, 1, 0, 30, 25, 0
    sprite 0x83E7860, 2, 1, 32, 30, 25, 0
    sprite 0x83E7860, 2, 1, 64, 30, 25, 0
    sprite 0x83E7860, 2, 1, 96, 30, 25, 0
    sprite 0x83E7860, 2, 1, 128, 30, 25, 0
    sprite 0x83E7860, 66, 1, 160, 30, 25, 0
    sprite 0x83E7860, 66, 1, 192, 30, 25, 0
    sprite 0x83E7860, 66, 1, 224, 30, 25, 0
    pause 5
    sprite 0x83E7860, 2, 1, 0, 30, 25, 10
    sprite 0x83E7860, 2, 1, 32, 30, 25, 10
    sprite 0x83E7860, 2, 1, 64, 30, 25, 10
    sprite 0x83E7860, 2, 1, 96, 30, 25, 10
    sprite 0x83E7860, 2, 1, 128, 30, 25, 10
    sprite 0x83E7860, 66, 1, 160, 30, 25, 10
    sprite 0x83E7860, 66, 1, 192, 30, 25, 10
    sprite 0x83E7860, 66, 1, 224, 30, 25, 10
    pause 5
    wait
    sprite 0x83E7C08, 131, -5, 3, 1, 0
    panse_19 140, 63
    createtask sub_80989F8, 2, 1, 10, 0, 25, 1
    pause 6
    sprite 0x83E7C08, 131, 8, -5, 1, 0
    panse_19 140, 63
    pause 8
    sprite 0x83E7C08, 131, 10, 10, 1, 0
    panse_19 140, 63
    pause 8
    sprite 0x83E7C08, 131, 0, 0, 1, 0
    panse_19 140, 63
    createtask sub_80BBFA4, 5, 1
    pause 1
    sprite 0x83E7B24, 2, 2, -1, 0, 13, 19026
    createtask sub_80989F8, 5, 0, 3, 0, 15, 1
    wait
    createtask sub_80BBF08, 5, 0, 1
    pause 1
    sprite 0x83E7B24, 2, 1, 1, 5, 0, 28
    wait
    clearmonbg 3
    blendoff
    wait
    pause 15
    createtask sub_80BBF08, 5, 1, 0
    pause 1
    sprite 0x83E7B24, 2, 2, 0, 13, 0, 19026
    wait
    createtask sub_80BBE3C, 5,
    wait
    end

Move_HYDRO_CANNON:: @ 81D45B2
    loadsprite 10149
    loadsprite 10148
    monbg 3
    setalpha 12, 8
    panse_19 156, 192
    sprite 0x83E5A38, 130,
    pause 10
    createtask sub_80BA0E8, 2, 257, 257, 257
    pause 30
    panse_1B 157, 192, 63, 2, 0
    call MoveFn_81D467C
    createtask sub_80989F8, 5, 1, 10, 0, 40, 1
    sprite 0x83E7C38, 130, 0, 0, 1, 0
    call MoveFn_81D467C
    sprite 0x83E7C38, 130, 0, 0, 1, 0
    call MoveFn_81D467C
    sprite 0x83E7C38, 130, 0, 0, 1, 0
    call MoveFn_81D467C
    sprite 0x83E7C38, 130, 0, 0, 1, 0
    call MoveFn_81D467C
    sprite 0x83E7C38, 130, 0, 0, 1, 0
    call MoveFn_81D467C
    sprite 0x83E7C38, 130, 0, 0, 1, 0
    wait
    createtask sub_80BA0E8, 2, 257, 257, 257
    wait
    clearmonbg 3
    blendoff
    end

MoveFn_81D467C:: @ 81D467C
    sprite 0x83E5A50, 130, 10, -10, 0, 0, 15, 257
    pause 1
    sprite 0x83E5A50, 130, 10, -10, 0, 0, 15, 257
    pause 1
    sprite 0x83E5A50, 130, 10, -10, 0, 0, 15, 257
    pause 1
    sprite 0x83E5A50, 130, 10, -10, 0, 0, 15, 257
    pause 1
    sprite 0x83E5A50, 130, 10, -10, 0, 0, 15, 257
    ret

Move_ASTONISH:: @ 81D46E4
    loadsprite 10273
    panse_19 215, 192
    sprite 0x83D4E54, 2, 4, 6
    pause 25
    sprite 0x83E6D94, 133, 0, 1
    panse_19 198, 63
    sprite 0x83E6D94, 133, 1, 1
    createtask sub_8098B1C, 2, 1, 4, 0, 5, 1
    createtask sub_80A9A20, 3,
    wait
    end

Move_SEISMIC_TOSS:: @ 81D472C
    loadsprite 10135
    loadsprite 10058
    setvar 7, 0
    monbg 3
    setalpha 12, 8
    wait
    createtask sub_80B5148, 3,
    pause 1
    fadetobg 17
    waitbgfadeout
    createtask sub_80B5188, 3,
    panse_19 231, 0
    waitbgfadein
    wait
    createtask sub_80B51EC, 3,
    jumpvareq 7, 0, .L81D477F
    jumpvareq 7, 1, .L81D4790
    jumpvareq 7, 2, .L81D47A8
.L81D4774:
    restorebg
    waitbgfadeout
    setvar 7, 4095
    waitbgfadein
    clearmonbg 3
    blendoff
    end
.L81D477F:
    call MoveFn_81D47C7
    pause 16
    call MoveFn_81D4828
    jump .L81D4774
.L81D4790:
    call MoveFn_81D47C7
    pause 14
    call MoveFn_81D4828
    pause 14
    call MoveFn_81D47C7
    jump .L81D4774
.L81D47A8:
    call MoveFn_81D4828
    pause 10
    call MoveFn_81D47C7
    pause 10
    call MoveFn_81D4828
    pause 10
    call MoveFn_81D47C7
    jump .L81D4774

MoveFn_81D47C7:: @ 81D47C7
    sprite 0x83E7C08, 131, -10, -8, 1, 1
    panse_19 207, 63
    createtask sub_80989F8, 2, 1, 0, 3, 5, 1
    sprite 0x83E7560, 130, -12, 27, 2, 3
    sprite 0x83E7560, 130, 8, 28, 3, 4
    sprite 0x83E7560, 130, -4, 30, 2, 3
    sprite 0x83E7560, 130, 12, 25, 4, 4
    ret

MoveFn_81D4828:: @ 81D4828
    sprite 0x83E7C08, 131, 10, -8, 1, 1
    panse_19 124, 63
    createtask sub_80989F8, 2, 1, 0, 3, 5, 1
    sprite 0x83E7560, 130, -12, 32, 3, 4
    sprite 0x83E7560, 130, 8, 31, 2, 2
    sprite 0x83E7560, 130, -4, 28, 2, 3
    sprite 0x83E7560, 130, 12, 30, 4, 3
    ret

Move_MAGIC_COAT:: @ 81D4889
    loadsprite 10170
    setalpha 0, 16
    panse_1D 201, 192, 15
    sprite 0x83E6E70, 3, 40, 0, 10170
    wait
    pause 1
    blendoff
    end

Move_WATER_PULSE:: @ 81D48A6
    loadsprite 10155
    loadsprite 10288
    monbg 1
    monbgprio_28 1
    panse_19 119, 192
    sprite 0x83E7B24, 2, 1, 0, 0, 7, 29472
    pause 10
    sprite 0x83E5B70, 66, 100, 100, 8, 1, 20, 40, 0
    sprite 0x83E5B70, 66, 20, 100, 16, 2, 10, 35, 1
    sprite 0x83E5B70, 66, 200, 80, 8, 1, 40, 20, 0
    sprite 0x83E5B70, 66, 80, 60, 10, 3, 20, 50, 0
    sprite 0x83E5B70, 66, 140, 100, 16, 1, 20, 30, 1
    panse_19 119, 63
    wait
    panse_19 192, 192
    sprite 0x83E3CE8, 130, 0, 0, 40, 15
    pause 5
    panse_19 192, 192
    sprite 0x83E3CE8, 130, 0, 0, 40, 15
    pause 5
    panse_19 192, 192
    sprite 0x83E3CE8, 130, 0, 0, 40, 15
    pause 13
    createtask sub_80989F8, 2, 1, 0, 8, 18, 1
    wait
    sprite 0x83E7B24, 2, 1, 1, 7, 0, 29472
    wait
    clearmonbg 3
    end

Move_PSYCHO_BOOST:: @ 81D499B
    loadsprite 10212
    monbg 2
    fadetobg 3
    waitbgfadeout
    createtask sub_80DE7B4, 5,
    waitbgfadein
    pause 6
    createtask sub_80B9BDC, 2, 1, 2, 8, 0, 10, 0
    pause 0
    monbgprio_28 0
    setalpha 8, 8
    pause 10
    createtask sub_80989F8, 2, 0, 3, 0, 240, 0
    panse_1C 193, 192, 14, 10
    sprite 0x83E71D0, 2,
    pause 110
    panse_1C 193, 192, 7, 10
    wait
    createtask sub_8098B1C, 2, 1, -8, 1, 24, 1
    panse_19 185, 63
    wait
    clearmonbg 2
    blendoff
    call MoveFn_81D59C7
    end

Move_KNOCK_OFF:: @ 81D4A0F
    loadsprite 10277
    loadsprite 10135
    sprite 0x83D4E54, 2, 4, 6
    pause 4
    panse_19 115, 63
    sprite 0x83FF764, 130, -16, -16
    pause 8
    sprite 0x83E7B3C, 2, 31, 5, 1, 32767, 10, 0, 0
    sprite 0x83E7C08, 131, 0, 0, 1, 2
    panse_19 132, 63
    sprite 0x83D4E9C, 2, 1, -12, 10, 0, 3
    sprite 0x83D4E84, 2, 0, 0, 5
    pause 3
    createtask sub_8098CD0, 2, 1, 0, 3, 6, 1
    pause 5
    sprite 0x83D4E84, 2, 1, 0, 6
    pause 10
    wait
    end

Move_DOOM_DESIRE:: @ 81D4A9F
    createtask sub_80B8B38, 2,
    pause 1
    monbg 2
    createtask sub_80B8A74, 5, 1, 0
    sprite 0x83E7B24, 2, 1, 1, 0, 4, 0
    wait
    setalpha 8, 8
    panse_19 182, 192
    createtask sub_80998B0, 5, -4, -4, 15, 0, 1
    wait
    pause 20
    createtask sub_80B8A74, 5, 1, 1
    sprite 0x83E7B24, 2, 1, 1, 4, 0, 0
    wait
    clearmonbg 2
    blendoff
    end

unk_81D4B03:: @81D4B03
    loadsprite 10198
    sprite 0x83E7B24, 2, 1, 3, 0, 16, 32767
    wait
    pause 10
    createtask sub_80E017C, 5,
    pause 5
    panse_19 189, 192
    pause 10
    panse_19 189, 0
    pause 10
    panse_19 189, 63
    pause 23
    createtask sub_8098CD0, 2, 1, 10, 0, 20, 1
    panse_19 170, 63
    sprite 0x83E3F94, 3, 0, 0, 1, 1
    pause 6
    panse_19 170, 63
    sprite 0x83E3F94, 3, 24, -24, 1, 1
    pause 6
    panse_19 170, 63
    sprite 0x83E3F94, 3, -16, 16, 1, 1
    pause 6
    panse_19 170, 63
    sprite 0x83E3F94, 3, -24, -12, 1, 1
    pause 6
    panse_19 170, 63
    sprite 0x83E3F94, 3, 16, 16, 1, 1
    wait
    sprite 0x83E7B24, 2, 1, 3, 16, 0, 32767
    wait
    end

Move_SKY_UPPERCUT:: @ 81D4BC1
    loadsprite 10135
    monbg 3
    monbgprio_28 1
    fadetobg 17
    waitbgfadeout
    panse_19 231, 192
    createtask sub_80B1530, 5, 55
    waitbgfadein
    setalpha 12, 8
    pause 38
    sprite 0x83D4E9C, 2, 0, 28, 0, 0, 5
    pause 4
    createtask sub_8098B1C, 2, 1, 4, 0, 6, 1
    panse_19 116, 63
    sprite 0x83E7C08, 131, -28, 28, 1, 1
    pause 1
    panse_19 116, 63
    sprite 0x83E7C08, 131, -15, 8, 1, 1
    panse_19 116, 63
    pause 1
    panse_19 116, 63
    sprite 0x83E7C08, 131, -5, -12, 1, 1
    pause 1
    panse_19 116, 63
    sprite 0x83E7C08, 131, 0, -32, 1, 1
    pause 1
    panse_19 116, 63
    sprite 0x83E7C08, 131, 5, -52, 1, 1
    sprite 0x83D4E9C, 2, 1, -26, 16, 1, 4
    pause 4
    createtask sub_8098CD0, 2, 1, 0, 3, 6, 1
    pause 30
    sprite 0x83D4E84, 2, 0, 0, 6
    pause 4
    sprite 0x83D4E84, 2, 1, 0, 6
    clearmonbg 3
    blendoff
    restorebg
    waitbgfadeout
    setvar 7, -1
    waitbgfadein
    end

Move_SECRET_POWER:: @ 81D4CBA
    createtask sub_80BBDF0, 5,
    jumpvareq 0, 0, Move_NEEDLE_ARM
    jumpvareq 0, 1, Move_MAGICAL_LEAF
    jumpvareq 0, 2, Move_MUD_SHOT
    jumpvareq 0, 3, Move_WATERFALL
    jumpvareq 0, 4, Move_SURF
    jumpvareq 0, 5, Move_BUBBLE_BEAM
    jumpvareq 0, 6, Move_ROCK_THROW
    jumpvareq 0, 7, Move_BITE
    jumpvareq 0, 8, Move_STRENGTH
    jump Move_SLAM

Move_TWISTER:: @ 81D4D0E
    loadsprite 10063
    loadsprite 10135
    loadsprite 10058
    monbg 3
    monbgprio_28 1
    panse_19 228, 63
    sprite 0x83E2C20, 130, 120, 70, 5, 70, 30
    pause 1
    sprite 0x83E2C20, 130, 115, 55, 6, 60, 25
    pause 1
    sprite 0x83E2C20, 130, 115, 60, 7, 60, 30
    sprite 0x83E2C20, 130, 115, 55, 10, 60, 30
    pause 3
    sprite 0x83E7578, 130, 100, 50, 4, 50, 26
    pause 1
    sprite 0x83E2C20, 130, 105, 25, 8, 60, 20
    pause 1
    sprite 0x83E2C20, 130, 115, 40, 10, 48, 30
    pause 3
    sprite 0x83E7578, 130, 120, 30, 6, 45, 25
    sprite 0x83E2C20, 130, 115, 35, 10, 60, 30
    pause 3
    sprite 0x83E7578, 130, 105, 20, 8, 40, 0
    pause 3
    sprite 0x83E2C20, 130, 20, 255, 15, 32, 0
    sprite 0x83E2C20, 130, 110, 10, 8, 32, 20
    wait
    sprite 0x83E7C08, 131, -32, -16, 1, 3
    panse_19 132, 63
    createtask sub_8098CD0, 2, 1, 3, 0, 12, 1
    createtask sub_8098CD0, 2, 3, 3, 0, 12, 1
    pause 4
    sprite 0x83E7C50, 131, 1, 3
    panse_19 132, 63
    pause 4
    sprite 0x83E7C50, 131, 1, 3
    panse_19 132, 63
    pause 4
    sprite 0x83E7C08, 131, 32, 20, 1, 3
    panse_19 132, 63
    wait
    clearmonbg 3
    blendoff
    end

Move_MAGICAL_LEAF:: @ 81D4E6D
    loadsprite 10063
    loadsprite 10160
    loadsprite 10135
    monbg 3
    setalpha 12, 8
    pause 1
    panse_1C 162, 192, 10, 5
    createtask sub_80A41C4, 5,
    sprite 0x83E2C08, 2, -3, -2, 10
    pause 2
    sprite 0x83E2C08, 2, -1, -1, 15
    pause 2
    sprite 0x83E2C08, 2, -4, -4, 7
    pause 2
    sprite 0x83E2C08, 2, 3, -3, 11
    pause 2
    sprite 0x83E2C08, 2, -1, -6, 8
    pause 2
    sprite 0x83E2C08, 2, 2, -1, 12
    pause 2
    sprite 0x83E2C08, 2, -3, -4, 13
    pause 2
    sprite 0x83E2C08, 2, 4, -5, 7
    pause 2
    sprite 0x83E2C08, 2, 2, -6, 11
    pause 2
    sprite 0x83E2C08, 2, -3, -5, 8
    pause 60
    panse_19 153, 192
    sprite 0x83E2C50, 131, 20, -10, 20, 0, 32, 20, 0
    sprite 0x83E2C50, 131, 20, -10, 20, 0, 32, -20, 0
    pause 30
    panse_19 129, 63
    sprite 0x83E7C08, 132, -10, -4, 1, 2
    sprite 0x83E7C08, 132, 10, 4, 1, 2
    createtask sub_8098B1C, 2, 1, 2, 0, 8, 1
    pause 20
    setvar 7, -1
    wait
    clearmonbg 3
    blendoff
    end

Move_ICE_BALL:: @ 81D4F8E
    loadsprite 10043
    loadsprite 10141
    createtask sub_80B0870, 5, 0
    jumpvareq 0, 4, .L81D5005
.L81D4FA5:
    panse_19 130, 192
    sprite 0x83E665C, 130, 15, 0, -12, -16, 30, -40
    pause 28
    panse_19 191, 63
    createtask sub_80B0870, 5, 0
    jumpvareq 0, 0, .L81D5016
    jumpvareq 0, 1, .L81D5045
    jumpvareq 0, 2, .L81D507E
    jumpvareq 0, 3, .L81D50C1
    jumpvareq 0, 4, .L81D5109
.L81D4FF3:
    createtask sub_80B0870, 5, 0
    jumpvareq 0, 4, .L81D500C
.L81D5004:
    end
.L81D5005:
    fadetobg 15
    jump .L81D4FA5
.L81D500C:
    waitbgfadein
    pause 45
    restorebg
    waitbgfadein
    jump .L81D5004
.L81D5016:
    createtask sub_8099BD4, 2, 0, 1, 8, 1, 0
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    jump .L81D4FF3
.L81D5045:
    createtask sub_8099BD4, 2, 0, 1, 10, 1, 0
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    jump .L81D4FF3
.L81D507E:
    createtask sub_8099BD4, 2, 0, 1, 14, 1, 0
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    jump .L81D4FF3
.L81D50C1:
    createtask sub_8099BD4, 2, 0, 1, 18, 1, 0
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    jump .L81D4FF3
.L81D5109:
    createtask sub_8099BD4, 2, 0, 1, 30, 1, 0
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    call MoveFn_81D5151
    jump .L81D4FF3

MoveFn_81D5151:: @ 81D5151
    sprite 0x83E6674, 132, -12, -16
    ret

Move_WEATHER_BALL:: @ 81D515D
    loadsprite 10283
    sprite 0x83D4E6C, 2, 8, 1, 0
    pause 8
    panse_19 186, 192
    sprite 0x83BF434, 2,
    wait
    pause 15
    panse_19 202, 0
    sprite 0x83E7B3C, 2, 31, 5, 1, 32767, 10, 0, 0
    wait
    createtask sub_80E44EC, 2,
    pause 1
    jumpvareq 7, 0, .L81D51C8
    jumpvareq 7, 1, .L81D5205
    jumpvareq 7, 2, .L81D5269
    jumpvareq 7, 3, .L81D52CD
    jumpvareq 7, 4, .L81D536D
.L81D51C8:
    loadsprite 10135
    sprite 0x83BF44C, 130, -30, -100, 25, 1, 0, 0
    wait
    panse_19 134, 63
    sprite 0x83E7C08, 132, -10, 0, 1, 2
    createtask sub_80989F8, 2, 1, 0, 3, 8, 1
    wait
    end
.L81D5205:
    loadsprite 10029
    sprite 0x83E5E14, 130, -30, -100, 25, 1, 40, 10
    panse_19 137, 63
    pause 10
    sprite 0x83E5E14, 130, -30, -100, 25, 1, -40, 20
    panse_19 137, 63
    pause 10
    sprite 0x83E5E14, 130, -30, -100, 25, 1, 0, 0
    panse_19 137, 63
    wait
    panse_19 138, 63
    createtask sub_80989F8, 2, 1, 0, 3, 8, 1
    wait
    end
.L81D5269:
    loadsprite 10155
    sprite 0x83E5BA0, 130, -30, -100, 25, 1, 50, 10
    panse_19 135, 63
    pause 8
    sprite 0x83E5BA0, 130, -30, -100, 25, 1, -20, 20
    panse_19 135, 63
    pause 13
    sprite 0x83E5BA0, 130, -30, -100, 25, 1, 0, 0
    panse_19 135, 63
    wait
    createtask sub_80989F8, 2, 1, 0, 3, 8, 1
    panse_19 192, 63
    wait
    end
.L81D52CD:
    loadsprite 10058
    sprite 0x83E7590, 130, -30, -100, 25, 1, 30, 0
    panse_19 124, 63
    pause 5
    sprite 0x83E7590, 130, -30, -100, 25, 1, -40, 20
    panse_19 124, 63
    pause 14
    sprite 0x83E7590, 130, -30, -100, 25, 1, 0, 0
    panse_19 124, 63
    wait
    panse_19 207, 63
    sprite 0x83E7560, 130, -12, 27, 2, 3
    sprite 0x83E7560, 130, 8, 28, 3, 4
    sprite 0x83E7560, 130, -4, 30, 2, 3
    sprite 0x83E7560, 130, 12, 25, 4, 4
    createtask sub_8098B1C, 2, 1, 2, 0, 8, 1
    wait
    end
.L81D536D:
    loadsprite 10263
    loadsprite 10141
    sprite 0x83E65BC, 130, -30, -100, 25, 25, -40, 20
    panse_19 235, 63
    pause 10
    sprite 0x83E65BC, 130, -30, -100, 25, 25, 40, 0
    panse_19 235, 63
    pause 10
    sprite 0x83E65BC, 130, -30, -100, 25, 25, 0, 0
    panse_19 235, 63
    wait
    createtask sub_8098B1C, 2, 1, 2, 0, 8, 1
    panse_19 130, 63
    call MoveFn_81D540A
    wait
    end

MoveAnim_81D53D9:: @ 81D53D9
    loadsprite 10135
    monbg 1
    setalpha 12, 8
    panse_19 127, 63
    sprite 0x83E7C08, 2, 0, 0, 1, 2
    createtask sub_80989F8, 2, 1, 3, 0, 6, 1
    wait
    clearmonbg 1
    blendoff
    end

MoveFn_81D540A:: @ 81D540A
    sprite 0x83E63E0, 130, -10, -10, 0
    panse_19 130, 63
    pause 4
    sprite 0x83E63F8, 130, 10, 20, 0
    panse_19 130, 63
    pause 4
    sprite 0x83E63E0, 130, -5, 10, 0
    panse_19 130, 63
    pause 4
    sprite 0x83E63F8, 130, 17, -12, 0
    panse_19 130, 63
    pause 4
    sprite 0x83E63F8, 130, -15, 15, 0
    panse_19 130, 63
    pause 4
    sprite 0x83E63F8, 130, 0, 0, 0
    panse_19 130, 63
    pause 4
    sprite 0x83E63E0, 130, 20, 2, 0
    panse_19 130, 63
    ret

MoveFn_81D548E:: @ 81D548E
    sprite 0x83E63E0, 130, -10, -10, 1
    panse_19 130, 63
    pause 4
    sprite 0x83E63F8, 130, 10, 20, 1
    panse_19 130, 63
    pause 4
    sprite 0x83E63E0, 130, -29, 0, 1
    panse_19 130, 63
    pause 4
    sprite 0x83E63F8, 130, 29, -20, 1
    panse_19 130, 63
    pause 4
    sprite 0x83E63E0, 130, -5, 10, 1
    panse_19 130, 63
    pause 4
    sprite 0x83E63F8, 130, 17, -12, 1
    panse_19 130, 63
    pause 4
    sprite 0x83E63E0, 130, -20, 0, 1
    panse_19 130, 63
    pause 4
    sprite 0x83E63F8, 130, -15, 15, 1
    panse_19 130, 63
    pause 4
    sprite 0x83E63F8, 130, 26, -5, 1
    panse_19 130, 63
    pause 4
    sprite 0x83E63F8, 130, 0, 0, 1
    panse_19 130, 63
    pause 4
    sprite 0x83E63E0, 130, 20, 2, 1
    panse_19 130, 63
    ret

unk_81D555E:: @81D555E
    panse_1C 130, 63, 6, 4
    sprite 0x83E647C, 130, 0, 24, 0
    pause 4
    sprite 0x83E647C, 130, 8, 24, 0
    sprite 0x83E647C, 130, -8, 24, 0
    pause 4
    sprite 0x83E647C, 130, 16, 24, 0
    sprite 0x83E647C, 130, -16, 24, 0
    pause 4
    sprite 0x83E647C, 130, 24, 24, 0
    sprite 0x83E647C, 130, -24, 24, 0
    pause 4
    sprite 0x83E647C, 130, 32, 24, 0
    sprite 0x83E647C, 130, -32, 24, 0
    ret

MoveFn_81D55E2:: @ 81D55E2
    panse_1C 130, 63, 6, 4
    sprite 0x83E647C, 130, 0, 24, 1
    pause 4
    sprite 0x83E647C, 130, 8, 24, 1
    sprite 0x83E647C, 130, -8, 24, 1
    pause 4
    sprite 0x83E647C, 130, 16, 24, 1
    sprite 0x83E647C, 130, -16, 24, 1
    pause 4
    sprite 0x83E647C, 130, 24, 24, 1
    sprite 0x83E647C, 130, -24, 24, 1
    pause 4
    sprite 0x83E647C, 130, 32, 24, 1
    sprite 0x83E647C, 130, -32, 24, 1
    pause 4
    sprite 0x83E647C, 130, 40, 24, 1
    sprite 0x83E647C, 130, -40, 24, 1
    pause 4
    sprite 0x83E647C, 130, 48, 24, 1
    sprite 0x83E647C, 130, -48, 24, 1
    ret

MoveFn_81D569E:: @ 81D569E
    sprite 0x83E33F4, 2, -15, 0, 0, 0, 32, 60
    pause 8
    sprite 0x83E33F4, 2, 12, -5, 0, 0, 32, 60
    pause 8
    ret

MoveFn_81D56C9:: @ 81D56C9
    panse_19 172, 192
    sprite 0x83E37A4, 2, 0, -5, 0, 0
    pause 7
    sprite 0x83E37A4, 2, -15, 10, 0, 0
    pause 7
    sprite 0x83E37A4, 2, -15, -15, 0, 0
    pause 7
    sprite 0x83E37A4, 2, 10, -5, 0, 0
    pause 7
    ret

MoveFn_81D5712:: @ 81D5712
    panse_19 172, 63
    sprite 0x83E37A4, 130, 0, -5, 1, 0
    pause 7
    sprite 0x83E37A4, 130, -15, 10, 1, 0
    pause 7
    sprite 0x83E37A4, 130, -15, -15, 1, 0
    pause 7
    sprite 0x83E37A4, 130, 10, -5, 1, 0
    pause 7
    ret

MoveFn_81D575B:: @ 81D575B
    sprite 0x83E6AB8, 130, 10, 10, 0
    panse_19 141, 63
    pause 6
    sprite 0x83E6AB8, 130, 20, -20, 0
    panse_19 141, 63
    pause 6
    sprite 0x83E6AB8, 130, -20, 15, 0
    panse_19 141, 63
    pause 6
    sprite 0x83E6AB8, 130, 0, 0, 0
    panse_19 141, 63
    pause 6
    sprite 0x83E6AB8, 130, -20, -20, 0
    panse_19 141, 63
    pause 6
    sprite 0x83E6AB8, 130, 16, -8, 0
    panse_19 141, 63
    ret

MoveFn_81D57CC:: @ 81D57CC
    sprite 0x83E6AD0, 2, 10, 10, 0
    panse_19 119, 63
    pause 6
    sprite 0x83E6AD0, 2, 20, -20, 0
    panse_19 119, 63
    pause 6
    sprite 0x83E6AD0, 2, -20, 15, 0
    panse_19 119, 63
    pause 6
    sprite 0x83E6AD0, 2, 0, 0, 0
    panse_19 119, 63
    pause 6
    sprite 0x83E6AD0, 2, -20, -20, 0
    panse_19 119, 63
    pause 6
    sprite 0x83E6AD0, 2, 16, -8, 0
    panse_19 119, 63
    ret

MoveFn_81D583D:: @ 81D583D
    sprite 0x83E6AD0, 2, 10, 10, 1
    panse_19 119, 63
    pause 6
    sprite 0x83E6AD0, 2, -28, -10, 1
    panse_19 119, 63
    pause 6
    sprite 0x83E6AD0, 2, 20, -20, 1
    panse_19 119, 63
    pause 6
    sprite 0x83E6AD0, 2, -20, 15, 1
    panse_19 119, 63
    pause 6
    sprite 0x83E6AD0, 2, 0, 0, 1
    panse_19 119, 63
    pause 6
    sprite 0x83E6AD0, 2, 27, 8, 1
    panse_19 119, 63
    pause 6
    sprite 0x83E6AD0, 2, -20, -20, 1
    panse_19 119, 63
    pause 6
    sprite 0x83E6AD0, 2, 16, -8, 1
    panse_19 119, 63
    ret

MoveFn_81D58D4:: @ 81D58D4
    panse_19 112, 63
    sprite 0x83E6088, 130, 5, 0, 5, 0
    pause 2
    sprite 0x83E6088, 130, -5, 10, 5, 1
    pause 2
    sprite 0x83E6088, 130, 15, 20, 5, 2
    pause 2
    sprite 0x83E6088, 130, -15, -10, 5, 0
    pause 2
    sprite 0x83E6088, 130, 25, 0, 5, 1
    pause 2
    sprite 0x83E6088, 130, -8, 8, 5, 2
    pause 2
    sprite 0x83E6088, 130, 2, -8, 5, 0
    pause 2
    sprite 0x83E6088, 130, -20, 15, 5, 1
    ret

MoveFn_81D595F:: @ 81D595F
    panse_1C 169, 63, 13, 6
    sprite 0x83E7B0C, 130, 0, -15, 0, 3, 90
    sprite 0x83E7B0C, 130, 0, -15, 51, 3, 90
    sprite 0x83E7B0C, 130, 0, -15, 102, 3, 90
    sprite 0x83E7B0C, 130, 0, -15, 153, 3, 90
    sprite 0x83E7B0C, 130, 0, -15, 204, 3, 90
    ret

MoveFn_81D59BB:: @ 81D59BB
    fadetobg 3
    waitbgfadeout
    createtask c3_80DE6F0, 5,
    waitbgfadein
    ret

MoveFn_81D59C7:: @ 81D59C7
    restorebg
    waitbgfadeout
    setvar 7, -1
    waitbgfadein
    ret

MoveFn_81D59CF:: @ 81D59CF
    jumpunkcond .L81D59E8
    fadetobg 18
    waitbgfadeout
    createtask sub_80BB82C, 5, -2304, 768, 1, -1
.L81D59E6:
    waitbgfadein
    ret
.L81D59E8:
    fadetobg 19
    waitbgfadeout
    createtask sub_80BB82C, 5, 2304, 768, 0, -1
    jump .L81D59E6

MoveFn_81D59FF:: @ 81D59FF
    restorebg
    waitbgfadeout
    setvar 7, -1
    waitbgfadein
    ret

MoveFn_81D5A07:: @ 81D5A07
    createtask sub_80BC02C, 2,
    jumpvareq 7, 1, .L81D5A2C
    createtask sub_80DEAB4, 2,
    jumpvareq 7, 0, .L81D5A3A
    jump .L81D5A33
.L81D5A2A:
    waitbgfadein
    ret
.L81D5A2C:
    fadetobg 26
    jump .L81D5A2A
.L81D5A33:
    fadetobg 25
    jump .L81D5A2A
.L81D5A3A:
    fadetobg 24
    jump .L81D5A2A

MoveFn_81D5A41:: @ 81D5A41
    restorebg
    waitbgfadein
    ret

MoveAnim_81D5A44:: @ 81D5A44
    panse_1C 141, 63, 13, 6
    createtask sub_8098B1C, 2, 0, 1, 0, 18, 2
    createtask sub_80B9BDC, 2, 2, 2, 2, 0, 12, 31774
    end

MoveAnim_81D5A6F:: @ 81D5A6F
    loadsprite 10073
    call MoveFn_81D595F
    end

MoveAnim_81D5A78:: @ 81D5A78
    loadsprite 10029
    panse_19 137, 63
    call MoveFn_81D5A90
    call MoveFn_81D5A90
    call MoveFn_81D5A90
    wait
    end

MoveFn_81D5A90:: @ 81D5A90
    sprite 0x83E5D7C, 130, -24, 24, 24, 24, 20, 1, 1
    pause 4
    ret

MoveAnim_81D5AA8:: @ 81D5AA8
    loadsprite 10210
    panse_19 205, 192
    sprite 0x83E41E8, 3, 0, 20
    pause 15
    panse_19 205, 192
    sprite 0x83E41E8, 3, -20, 20
    pause 15
    panse_19 205, 192
    sprite 0x83E41E8, 3, 20, 20
    end

MoveAnim_81D5ADD:: @ 81D5ADD
    loadsprite 10228
    panse_19 190, 192
    sprite 0x83E3500, 2, 4, -10, 16, 0, 0
    pause 30
    sprite 0x83E3500, 2, 4, -10, 16, 0, 0
    end

MoveAnim_81D5B09:: @ 81D5B09
    loadsprite 10011
    createtask sub_8098B1C, 2, 0, 1, 0, 10, 1
    call MoveFn_81D58D4
    end

MoveAnim_81D5B23:: @ 81D5B23
    panse_19 130, 0
    loadsprite 10010
    monbg 3
    monbgprio_28 1
    panse_1D 235, 63, 17
    createtask sub_80783FC, 2,
    wait
    clearmonbg 3
    end

MoveAnim_81D5B3E:: @ 81D5B3E
    loadsprite 10200
    monbg 3
    panse_19 114, 63
    sprite 0x83E7698, 130,
    createtask sub_8098B1C, 2, 1, 2, 0, 14, 1
    wait
    clearmonbg 3
    end

MoveAnim_81D5B63:: @ 81D5B63
    loadsprite 10221
    monbg 3
    panse_19 114, 63
    sprite 0x83E76B0, 130,
    createtask sub_8098B1C, 2, 1, 2, 0, 14, 1
    wait
    clearmonbg 3
    end

MoveAnim_81D5B88:: @ 81D5B88
    createtask c3_80DFBE4, 2,
    jumpvareq 7, 1, .L81D5BB4
    jump .L81D5B9C
.L81D5B9C:
    monbg 0
    panse_19 196, 192
    panse_1D 197, 192, 48
    createtask c3_80DF9BC, 2, 1
    wait
    clearmonbg 0
    end
.L81D5BB4:
    createtask sub_80DFC24, 2, 1
    end

MoveAnim_81D5BBE:: @ 81D5BBE
    createtask sub_8078694, 5,
    wait
    end

MoveAnim_81D5BC7:: @ 81D5BC7
    monbg 0
    createtask sub_80F15C8, 5,
    createtask sub_80BA7F8, 10, 2, 0, 0, 16, 32767
    wait
    pause 1
    clearmonbg 0
    pause 2
    blendoff
    createtask sub_80BA7F8, 10, 2, 0, 0, 0, 32767
    createtask sub_80F1420, 2, 1
    end

MoveAnim_81D5C04:: @ 81D5C04
    createtask sub_80E3294, 2,
    end

MoveAnim_81D5C0C:: @ 81D5C0C
    createtask sub_80F1C8C, 2, 0
    createtask sub_80F1AE0, 2,
    pause 0
    panse_1D 136, 192, 22
    sprite 0x840C1EC, 131, -18, 12, 0, 32
    pause 50
    panse_1C 160, 63, 19, 2
    createtask sub_8099704, 5, 1, 8, 1536, 2, 1
    wait
    createtask sub_80F1B14, 2,
    end

MoveAnim_81D5C54:: @ 81D5C54
    loadsprite 10224
    sprite 0x83E2EA0, 130,
    end

MoveAnim_81D5C5F:: @ 81D5C5F
    createtask sub_80F1D14, 5,
    jumpvareq 0, 1, .L81D5CD3
    jumpvareq 0, 2, .L81D5CF8
    jumpvareq 0, 3, .L81D5D4C
    jumpvareq 0, 4, .L81D5DA9
    jump .L81D5C8B
.L81D5C8B:
    loadsprite 10186
    panse_1C 148, 63, 6, 2
    sprite 0x83E2D0C, 132, 0, 16, 0, 1
    pause 7
    sprite 0x83E2D0C, 130, 0, 8, 1, 1
    pause 3
    createtask sub_8098B1C, 2, 1, 2, 0, 8, 1
    pause 20
    setvar 7, -1
    panse_19 163, 63
    wait
    end
.L81D5CD3:
    loadsprite 10029
    panse_19 143, 63
    createtask sub_80989F8, 5, 1, 0, 2, 30, 1
    call MoveFn_81C885F
    call MoveFn_81C885F
    wait
    stopsound
    end
.L81D5CF8:
    loadsprite 10149
    monbg 3
    monbgprio_28 1
    setalpha 12, 8
    pause 0
    sprite 0x83E7B24, 0, 4, 2, 0, 7, 23968
    panse_19 158, 63
    createtask sub_80989F8, 5, 1, 0, 2, 30, 1
    call MoveFn_81CFB92
    call MoveFn_81CFB92
    pause 12
    sprite 0x83E7B24, 0, 4, 2, 7, 0, 23968
    wait
    stopsound
    clearmonbg 3
    end
.L81D5D4C:
    loadsprite 10145
    loadsprite 10135
    monbg 1
    setalpha 12, 8
    panse_19 149, 63
    sprite 0x83E7948, 2, -32, 0, 2, 819, 0, 10
    sprite 0x83E7948, 2, 32, 0, 6, -819, 0, 10
    pause 10
    sprite 0x83E7C08, 2, 0, 0, 1, 2
    createtask sub_80989F8, 5, 1, 3, 0, 5, 1
    wait
    clearmonbg 1
    blendoff
    wait
    end
.L81D5DA9:
    loadsprite 10074
    sprite 0x83E7B24, 0, 4, 2, 0, 7, 563
    createtask sub_80989F8, 5, 1, 0, 2, 30, 1
    panse_19 223, 63
    call MoveFn_81D2DE3
    call MoveFn_81D2DE3
    pause 22
    sprite 0x83E7B24, 0, 4, 2, 7, 0, 563
    wait
    stopsound
    end

MoveAnim_81D5DF2:: @ 81D5DF2
    loadsprite 10203
    loadsprite 10049
    pause 0
    panse_19 145, 192
    createtask sub_8099A78, 2, 16, 128, 0, 2
    wait
    panse_19 145, 192
    createtask sub_8099A78, 2, 16, 128, 0, 2
    wait
    panse_19 145, 192
    createtask sub_8099A78, 2, 16, 128, 0, 2
    wait
    panse_19 221, 192
    call MoveFn_81D569E
    wait
    panse_19 95, 192
    sprite 0x83E7B24, 2, 2, 3, 7, 0, 26609
    sprite 0x83E4094, 3, 0, 0, 0, 0
    wait
    end

MoveAnim_81D5E66:: @ 81D5E66
    loadsprite 10242
    monbg 0
    setalpha 12, 4
    pause 0
    panse_19 15, 63
    sprite 0x83FF514, 128, 0, 32, 28, 30
    pause 4
    panse_19 15, 63
    sprite 0x83FF514, 127, 2, 12, 20, 30
    pause 12
    panse_19 15, 63
    sprite 0x83FF514, 126, 2, -28, 4, 30
    pause 12
    panse_19 15, 63
    sprite 0x83FF514, 124, 2, 14, -20, 30
    pause 4
    panse_19 15, 63
    createtask sub_80B78E0, 2, 2
    sprite 0x83FF514, 123, 3, 4, 4, 30
    pause 14
    panse_19 15, 63
    sprite 0x83FF514, 122, 3, -14, 18, 46
    pause 0
    sprite 0x83FF514, 121, 3, 14, -14, 46
    pause 0
    sprite 0x83FF514, 120, 3, -12, -10, 46
    pause 0
    sprite 0x83FF514, 119, 3, 14, 14, 46
    pause 0
    sprite 0x83FF514, 118, 3, 0, 0, 46
    wait
    clearmonbg 0
    invisible 0
    pause 0
    blendoff
    end

MoveAnim_81D5F42:: @ 81D5F42
    sprite 0x83E7B24, 0, 2, 7, 0, 9, 31
    panse_19 164, 192
    createtask sub_80E1C48, 5, 30, 128, 0, 1, 2, 0, 1
    wait
    sprite 0x83E7B24, 0, 2, 4, 9, 0, 31
    wait
    pause 6
    sprite 0x83D4E84, 0, 0, 0, 15
    end

MoveAnim_81D5F8F:: @ 81D5F8F
    loadsprite 10115
    panse_19 120, 192
    createtask sub_80BA7F8, 10, 1921, 2, 0, 4, 0
    wait
    createtask sub_80AABC0, 2, 0, 3, 60
    createtask sub_80AABC0, 2, 0, 3, 60
    pause 50
    wait
    createtask sub_80BA7F8, 10, 1921, 2, 4, 0, 0
    wait
    end

MoveAnim_81D5FD8:: @ 81D5FD8
    jump Move_SUNNY_DAY

MoveAnim_81D5FDD:: @ 81D5FDD
    jump Move_SANDSTORM

MoveAnim_81D5FE2:: @ 81D5FE2
    jump Move_HAIL

MoveAnim_81D5FE7:: @ 81D5FE7
    createtask sub_80F1D7C, 5,
    pause 0
    jump Move_ABSORB

MoveAnim_81D5FF5:: @ 81D5FF5
    loadsprite 10135
    monbg 1
    setalpha 12, 8
    panse_19 127, 63
    sprite 0x83E7C08, 2, 0, 0, 1, 2
    createtask sub_80989F8, 2, 1, 3, 0, 6, 1
    wait
    clearmonbg 1
    blendoff
    end

MoveAnim_81D6026:: @ 81D6026
    loadsprite 10224
    createtask sub_80BC0FC, 2,
    createtask mac_move_anim_task_del__b_anim_defender_to_b_defender_partner, 2,
    pause 1
    sprite 0x83E2EE8, 2, 0, -5, 10, 2, -1
    end

MoveAnim_81D604B:: @ 81D604B
    loadsprite 10224
    createtask sub_80BC060, 2,
    call MoveFn_81D6476
    pause 1
    createtask sub_8099704, 2, 0, 5, 5120, 4, 1
    wait
    createtask sub_80BC090, 2,
    jumpvareq 7, 0, .L81D6089
    jump .L81D6099
.L81D6082:
    wait
    call MoveFn_81D6496
    end
.L81D6089:
    panse_19 128, 192
    createtask sub_80E392C, 2,
    jump .L81D6082
.L81D6099:
    panse_19 128, 192
    createtask sub_80E3FC0, 2,
    jump .L81D6082

MoveAnim_81D60A9:: @ 81D60A9
    createtask sub_80BC0DC, 2,
    monbg 3
    panse_19 182, 192
    call MoveFn_81D59BB
    setalpha 8, 8
    panse_19 177, 63
    panse_1D 177, 63, 8
    createtask sub_80989F8, 2, 1, 4, 0, 15, 1
    createtask sub_80998B0, 5, -5, -5, 15, 1, 1
    wait
    createtask sub_80989F8, 2, 1, 4, 0, 24, 1
    wait
    clearmonbg 3
    blendoff
    wait
    pause 1
    call MoveFn_81D59C7
    end

MoveAnim_81D6108:: @ 81D6108
    createtask sub_80BC0DC, 2,
    loadsprite 10198
    sprite 0x83E7B24, 2, 1, 3, 0, 16, 32767
    wait
    pause 10
    createtask sub_80E017C, 5,
    pause 9
    panse_19 189, 192
    pause 9
    panse_19 189, 0
    pause 9
    panse_19 189, 63
    pause 25
    createtask sub_8098CD0, 2, 1, 10, 0, 20, 1
    panse_19 170, 63
    sprite 0x83E3F94, 3, 0, 0, 1, 1
    pause 6
    panse_19 170, 63
    sprite 0x83E3F94, 3, 24, -24, 1, 1
    pause 6
    panse_19 170, 63
    sprite 0x83E3F94, 3, -16, 16, 1, 1
    pause 6
    panse_19 170, 63
    sprite 0x83E3F94, 3, -24, -12, 1, 1
    pause 6
    panse_19 170, 63
    sprite 0x83E3F94, 3, 16, 16, 1, 1
    wait
    sprite 0x83E7B24, 2, 1, 3, 16, 0, 32767
    wait
    end

MoveAnim_81D61CD:: @ 81D61CD
    loadsprite 10184
    panse_19 164, 192
    call MoveFn_81CB267
    pause 8
    createtask sub_80B9BDC, 2, 2, 2, 2, 0, 11, 31
    createtask sub_8098B1C, 2, 0, 1, 0, 32, 1
    call MoveFn_81CB267
    pause 8
    call MoveFn_81CB267
    wait
    end

MoveAnim_81D620D:: @ 81D620D
    loadsprite 10147
    loadsprite 10031
    monbg 3
    setalpha 12, 8
    sprite 0x83E7B24, 2, 1, 1, 0, 4, 13293
    wait
    pause 3
    call MoveFn_81CEC44
    wait
    pause 15
    call MoveFn_81D56C9
    wait
    sprite 0x83E7B24, 2, 1, 1, 4, 0, 13293
    wait
    clearmonbg 3
    blendoff
    end

MoveAnim_81D6250:: @ 81D6250
    loadsprite 10031
    loadsprite 10049
    sprite 0x83E7B24, 2, 1, 3, 0, 10, 0
    wait
    panse_19 133, 192
    call MoveFn_81D569E
    wait
    call MoveFn_81D56C9
    wait
    sprite 0x83E7B24, 2, 1, 3, 10, 0, 0
    end

MoveAnim_81D628A:: @ 81D628A
    createtask sub_80F1C8C, 2, 1
    wait
    loadsprite 10273
    sprite 0x83E7B24, 0, 4, 2, 0, 10, 26336
    createtask sub_8098B1C, 2, 1, 2, 0, 10, 1
    pause 20
    sprite 0x83E6D94, 133, 0, 1
    panse_19 198, 63
    sprite 0x83E6D94, 133, 1, 1
    createtask sub_8098B1C, 2, 1, 4, 0, 5, 1
    createtask sub_80A9A20, 3,
    wait
    sprite 0x83E7B24, 0, 4, 2, 10, 0, 26336
    wait
    end

MoveAnim_81D6301:: @ 81D6301
    createtask sub_80F1C8C, 2, 1
    wait
    fadetobg 2
    waitbgfadeout
    monbg_22 0
    createtask sub_80B6BBC, 2,
    waitbgfadein
    panse_1C 182, 63, 20, 3
    wait
    clearmonbg_23 0
    pause 1
    loadsprite 10273
    sprite 0x83E7B24, 0, 4, -1, 0, 6, 27349
    sprite 0x83E6D94, 133, 0, 1
    sprite 0x83E6D94, 133, 1, 1
    createtask sub_8098B1C, 2, 1, 4, 0, 5, 1
    createtask sub_80A9A20, 3,
    wait
    sprite 0x83E7B24, 0, 4, -1, 6, 0, 27349
    wait
    restorebg
    waitbgfadein
    end

MoveAnim_81D637B:: @ 81D637B
    monbg 0
    panse_19 196, 192
    panse_1D 197, 192, 48
    createtask c3_80DF9BC, 2, 255
    waitsound
    wait
    clearmonbg 0
    end

MoveAnim_81D6394:: @ 81D6394
    createtask sub_80F1C8C, 2, 0
    wait
    loadsprite 10058
    loadsprite 10135
    pause 0
    panse_1D 136, 192, 22
    sprite 0x840C210, 131, -17, 14, 8, 0
    pause 50
    monbg 3
    setalpha 12, 8
    pause 0
    panse_19 127, 63
    sprite 0x83E7C08, 130, -4, -20, 1, 2
    wait
    clearmonbg 3
    blendoff
    wait
    end

MoveAnim_81D63DC:: @ 81D63DC
    createtask sub_80F1CE4, 2,
    wait
    jumpvareq 7, 0, .L81D63FD
    jumpvareq 7, 1, .L81D6425
    jumpvareq 7, 2, .L81D644E
    end
.L81D63FD:
    panse_19 145, 63
    createtask sub_8099A78, 2, 16, 96, 0, 2
    wait
    panse_19 145, 63
    createtask sub_8099A78, 2, 16, -96, 0, 2
    end
.L81D6425:
    loadsprite 10087
    sprite 0x83E3F04, 130, 1, 20, -20
    panse_19 187, 63
    wait
    pause 12
    sprite 0x83E3F04, 130, 1, -20, -20
    panse_19 187, 63
    end
.L81D644E:
    panse_19 145, 63
    createtask sub_8099A78, 2, 8, 136, 0, 2
    wait
    panse_19 145, 63
    createtask sub_8099A78, 2, 8, 136, 0, 2
    end

MoveFn_81D6476:: @ 81D6476
    createtask sub_80F16CC, 2,
    jumpvareq 7, 1, .L81D6487
.L81D6485:
    wait
    ret
.L81D6487:
    createtask sub_80F1420, 2, 1
    wait
    jump .L81D6485

MoveFn_81D6496:: @ 81D6496
    createtask sub_80F16CC, 2,
    jumpvareq 7, 1, .L81D64A7
.L81D64A5:
    wait
    ret
.L81D64A7:
    createtask sub_80F1420, 2, 0
    wait
    jump .L81D64A5

MoveAnim_81D64B6:: @ 81D64B6
    panse_19 84, 0
    createtask sub_80EF0B4, 2,
    pause 0
    createtask sub_80EF1A0, 5, 0, 0
    wait
    createtask sub_80EF180, 2,
    end

MoveAnim_81D64D7:: @ 81D64D7
    createtask sub_80EF344, 2,
    pause 10
    createtask sub_80EF298, 2,
    end

MoveAnim_81D64E8:: @ 81D64E8
    createtask sub_80EF344, 2,
    pause 10
    createtask sub_80EF298, 2,
    end

MoveAnim_81D64F9:: @ 81D64F9
    createtask sub_80EF490, 2,
    pause 0
    panse_19 54, 0
    createtask sub_80EF5AC, 2,
    createtask sub_80EF4E0, 2,
    jumpvareq 7, -1, .L81D652D
    jumpvareq 7, -2, .L81D6555
.L81D6524:
    wait
    createtask sub_80EF4B8, 2,
    end
.L81D652D:
    loadsprite 10135
    pause 25
    monbg 3
    setalpha 12, 8
    pause 0
    panse_19 127, 63
    sprite 0x83E7C08, 130, -4, -20, 1, 2
    wait
    clearmonbg 3
    blendoff
    jump .L81D6524
.L81D6555:
    pause 16
    createtask sub_809949C, 2, 1, 48, 6, 16, 48, -48, 16
    panse_19 145, 63
    panse_1D 145, 63, 48
    wait
    jump .L81D6524

MoveAnim_81D657B:: @ 81D657B
    createtask sub_80EF490, 2,
    pause 0
    createtask sub_80EF6D4, 2,
    wait
    createtask sub_80EF4B8, 2,
    end

MoveAnim_81D6594:: @ 81D6594
    createtask sub_80F1420, 2, 1
    end

MoveAnim_81D659E:: @ 81D659E
    createtask sub_80F1420, 2, 0
    end
