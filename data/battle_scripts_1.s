    .include "asm/macros.inc"
    .include "constants/constants.inc"
    .include "asm/macros/battle_script.inc"

    .text

kBattleScriptsEffectsTable:: @ 81D65A8
    .4byte MoveEffect_Hit
    .4byte MoveEffect_Sleep
    .4byte MoveEffect_PoisonHit
    .4byte MoveEffect_Absorb
    .4byte MoveEffect_BurnHit
    .4byte MoveEffect_FreezeHit
    .4byte MoveEffect_ParalyzeHit
    .4byte MoveEffect_Explosion
    .4byte MoveEffect_DreamEater
    .4byte MoveEffect_MirrorMove
    .4byte MoveEffect_AttackUp
    .4byte MoveEffect_DefenseUp
    .4byte MoveEffect_Hit
    .4byte MoveEffect_SpecialAttackUp
    .4byte MoveEffect_Hit
    .4byte MoveEffect_Hit
    .4byte MoveEffect_EvasionUp
    .4byte MoveEffect_Hit
    .4byte MoveEffect_AttackDown
    .4byte MoveEffect_DefenseDown
    .4byte MoveEffect_SpeedDown
    .4byte MoveEffect_Hit
    .4byte MoveEffect_Hit
    .4byte MoveEffect_AccuracyDown
    .4byte MoveEffect_EvasionDown
    .4byte MoveEffect_Haze
    .4byte MoveEffect_Bide
    .4byte MoveEffect_Rampage
    .4byte MoveEffect_Roar
    .4byte MoveEffect_MultiHit
    .4byte MoveEffect_Conversion
    .4byte MoveEffect_FlinchHit
    .4byte MoveEffect_RestoreHp
    .4byte MoveEffect_Toxic
    .4byte MoveEffect_PayDay
    .4byte MoveEffect_LightScreen
    .4byte MoveEffect_TriAttack
    .4byte MoveEffect_Rest
    .4byte MoveEffect_Ohko
    .4byte MoveEffect_RazorWind
    .4byte MoveEffect_SuperFang
    .4byte MoveEffect_DragonRage
    .4byte MoveEffect_Trap
    .4byte MoveEffect_Hit
    .4byte MoveEffect_DoubleHit
    .4byte MoveEffect_RecoilIfMiss
    .4byte MoveEffect_Mist
    .4byte MoveEffect_FocusEnergy
    .4byte MoveEffect_Recoil
    .4byte MoveEffect_Confuse
    .4byte MoveEffect_AttackUp2
    .4byte MoveEffect_DefenseUp2
    .4byte MoveEffect_SpeedUp2
    .4byte MoveEffect_SpecialAttackUp2
    .4byte MoveEffect_SpecialDefenseUp2
    .4byte MoveEffect_Hit
    .4byte MoveEffect_Hit
    .4byte MoveEffect_Transform
    .4byte MoveEffect_AttackDown2
    .4byte MoveEffect_DefenseDown2
    .4byte MoveEffect_SpeedDown2
    .4byte MoveEffect_Hit
    .4byte MoveEffect_SpecialDefenseDown2
    .4byte MoveEffect_Hit
    .4byte MoveEffect_Hit
    .4byte MoveEffect_Reflect
    .4byte MoveEffect_Poison
    .4byte MoveEffect_Paralyze
    .4byte MoveEffect_AttackDownHit
    .4byte MoveEffect_DefenseDownHit
    .4byte MoveEffect_SpeedDownHit
    .4byte MoveEffect_SpecialAttackDownHit
    .4byte MoveEffect_SpecialDefenseDownHit
    .4byte MoveEffect_AccuracyDownHit
    .4byte MoveEffect_Hit
    .4byte MoveEffect_SkyAttack
    .4byte MoveEffect_ConfuseHit
    .4byte MoveEffect_Twineedle
    .4byte MoveEffect_Hit
    .4byte MoveEffect_Substitute
    .4byte MoveEffect_Recharge
    .4byte MoveEffect_Rage
    .4byte MoveEffect_Mimic
    .4byte MoveEffect_Metronome
    .4byte MoveEffect_LeechSeed
    .4byte MoveEffect_Splash
    .4byte MoveEffect_Disable
    .4byte MoveEffect_LevelDamage
    .4byte MoveEffect_Psywave
    .4byte MoveEffect_Counter
    .4byte MoveEffect_Encore
    .4byte MoveEffect_PainSplit
    .4byte MoveEffect_Snore
    .4byte MoveEffect_Conversion2
    .4byte MoveEffect_LockOn
    .4byte MoveEffect_Sketch
    .4byte MoveEffect_Hit
    .4byte MoveEffect_SleepTalk
    .4byte MoveEffect_DestinyBond
    .4byte MoveEffect_Flail
    .4byte MoveEffect_Spite
    .4byte MoveEffect_Hit
    .4byte MoveEffect_HealBell
    .4byte MoveEffect_Hit
    .4byte MoveEffect_TripleKick
    .4byte MoveEffect_Thief
    .4byte MoveEffect_MeanLook
    .4byte MoveEffect_Nightmare
    .4byte MoveEffect_Minimize
    .4byte MoveEffect_Curse
    .4byte MoveEffect_Hit
    .4byte MoveEffect_Protect
    .4byte MoveEffect_Spikes
    .4byte MoveEffect_Foresight
    .4byte MoveEffect_PerishSong
    .4byte MoveEffect_Sandstorm
    .4byte MoveEffect_Protect
    .4byte MoveEffect_Rollout
    .4byte MoveEffect_Swagger
    .4byte MoveEffect_FuryCutter
    .4byte MoveEffect_Attract
    .4byte MoveEffect_Return
    .4byte MoveEffect_Present
    .4byte MoveEffect_Return
    .4byte MoveEffect_Safeguard
    .4byte MoveEffect_ThawHit
    .4byte MoveEffect_Magnitude
    .4byte MoveEffect_BatonPass
    .4byte MoveEffect_Hit
    .4byte MoveEffect_RapidSpin
    .4byte MoveEffect_Sonicboom
    .4byte MoveEffect_Hit
    .4byte MoveEffect_MorningSun
    .4byte MoveEffect_MorningSun
    .4byte MoveEffect_MorningSun
    .4byte MoveEffect_HiddenPower
    .4byte MoveEffect_RainDance
    .4byte MoveEffect_SunnyDay
    .4byte MoveEffect_DefenseUpHit
    .4byte MoveEffect_AttackUpHit
    .4byte MoveEffect_AllStatsUpHit
    .4byte MoveEffect_Hit
    .4byte MoveEffect_BellyDrum
    .4byte MoveEffect_PsychUp
    .4byte MoveEffect_MirrorCoat
    .4byte MoveEffect_SkullBash
    .4byte MoveEffect_Twister
    .4byte MoveEffect_Earthquake
    .4byte MoveEffect_FutureSight
    .4byte MoveEffect_Gust
    .4byte MoveEffect_FlinchHit2
    .4byte MoveEffect_Solarbeam
    .4byte MoveEffect_Thunder
    .4byte MoveEffect_Teleport
    .4byte MoveEffect_BeatUp
    .4byte MoveEffect_Fly
    .4byte MoveEffect_DefenseCurl
    .4byte MoveEffect_Softboiled
    .4byte MoveEffect_FakeOut
    .4byte MoveEffect_Uproar
    .4byte MoveEffect_Stockpile
    .4byte MoveEffect_SpitUp
    .4byte MoveEffect_Swallow
    .4byte MoveEffect_Hit
    .4byte MoveEffect_Hail
    .4byte MoveEffect_Torment
    .4byte MoveEffect_Flatter
    .4byte MoveEffect_WillOWisp
    .4byte MoveEffect_Memento
    .4byte MoveEffect_Facade
    .4byte MoveEffect_FocusPunch
    .4byte MoveEffect_Smellingsalt
    .4byte MoveEffect_FollowMe
    .4byte MoveEffect_NaturePower
    .4byte MoveEffect_Charge
    .4byte MoveEffect_Taunt
    .4byte MoveEffect_HelpingHand
    .4byte MoveEffect_Trick
    .4byte MoveEffect_RolePlay
    .4byte MoveEffect_Wish
    .4byte MoveEffect_Assist
    .4byte MoveEffect_Ingrain
    .4byte MoveEffect_Superpower
    .4byte MoveEffect_MagicCoat
    .4byte MoveEffect_Recycle
    .4byte MoveEffect_Revenge
    .4byte MoveEffect_BrickBreak
    .4byte MoveEffect_Yawn
    .4byte MoveEffect_KnockOff
    .4byte MoveEffect_Endeavor
    .4byte MoveEffect_Eruption
    .4byte MoveEffect_SkillSwap
    .4byte MoveEffect_Imprison
    .4byte MoveEffect_Refresh
    .4byte MoveEffect_Grudge
    .4byte MoveEffect_Snatch
    .4byte MoveEffect_LowKick
    .4byte MoveEffect_SecretPower
    .4byte MoveEffect_DoubleEdge
    .4byte MoveEffect_TeeterDance
    .4byte MoveEffect_BurnHit
    .4byte MoveEffect_MudSport
    .4byte MoveEffect_PoisonFang
    .4byte MoveEffect_WeatherBall
    .4byte MoveEffect_Overheat
    .4byte MoveEffect_Tickle
    .4byte MoveEffect_CosmicPower
    .4byte MoveEffect_SkyUppercut
    .4byte MoveEffect_BulkUp
    .4byte MoveEffect_PoisonHit
    .4byte MoveEffect_MudSport
    .4byte MoveEffect_CalmMind
    .4byte MoveEffect_DragonDance
    .4byte MoveEffect_Camouflage

MoveEffect_Hit:: @ 81D6900
    jumpifhalfword 1, 0x2023d4a, 57, BattleScript_1D6926
    jumpifspecialstatusflag TARGET, 0x40000, 1, BattleScript_1D6926
    orword 0x2023dd0, 0x40000
    setbyte 0x2023fd2, 2

BattleScript_1D6926:: @T 81D6926
    attackcanceler

BattleScript_1D6927:: @T 81D6927
    accuracycheck BattleScript_1D695E, 0

BattleScript_1D692E:: @T 81D692E
    attackstring
    ppreduce

BattleScript_1D6930:: @T 81D6930
    critcalc
    atk5
    atk6
    atk7

BattleScript_1D6934:: @T 1D6934
    attackanimation
    waitanimation
    missmessage
    atk5c TARGET
    waitstateatk
    graphicalhpupdate TARGET
    datahpupdate TARGET
    critmessage
    waitmessage 64
    resultmessage
    waitmessage 64
    seteffectwithchancetarget
    faintpokemon TARGET, 0, 0x0

BattleScript_EndTurn:: @T 81D694E
    setbyte 0x2023fd8, 0
    atk49 0, 0
    end

BattleScript_1D6958:: @T 81D6958
    orbyte 0x2023dcc, 1

BattleScript_1D695E:: @T 81D695E
    attackstring
    ppreduce

BattleScript_1D6960:: @T 81D6960
    pause 32

BattleScript_1D6963:: @T 81D6963
    missmessage
    resultmessage
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Sleep:: @ 81D696D
    attackcanceler
    attackstring
    ppreduce
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, BattleScript_ButItFailed
    jumpifstatus TARGET, SLP, BattleScript_1D69B0
    jumpifcannotsleep BattleScript_1D69CC
    jumpifstatus TARGET, SLP | PSN | BRN | FRZ | PAR | TOX, BattleScript_ButItFailed
    accuracycheck BattleScript_ButItFailed, 0
    jumpifhalverset TARGET, 32, BattleScript_1D8B39
    attackanimation
    waitanimation
    setbyte 0x2023e85, 1
    seteffecttarget
    jump BattleScript_EndTurn

BattleScript_1D69B0:: @T 81D69B0
    pause 32
    printstring BATTLE_TEXT_DefendingAsleep
    waitmessage 64
    jump BattleScript_EndTurn

BattleScript_1D69BE:: @T 81D69BE
    pause 32
    printstring BATTLE_TEXT_WasntAffected
    waitmessage 64
    jump BattleScript_EndTurn

BattleScript_1D69CC:: @T 81D69CC
    pause 32
    printfromtable BattleTextList_83FE576
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_PoisonHit:: @ 81D69DC
    setbyte 0x2023e85, 2
    jump MoveEffect_Hit

MoveEffect_Absorb:: @ 81D69E7
    attackcanceler
    accuracycheck BattleScript_1D695E, 0
    attackstring
    ppreduce
    critcalc
    atk5
    atk6
    atk7
    attackanimation
    waitanimation
    missmessage
    atk5c TARGET
    waitstateatk
    graphicalhpupdate TARGET
    datahpupdate TARGET
    critmessage
    waitmessage 64
    resultmessage
    waitmessage 64
    negativedamage
    orword 0x2023dd0, 0x100
    jumpifability TARGET, ABILITY_LIQUID_OOZE, BattleScript_1D6A23
    setbyte 0x2023e87, 0
    jump BattleScript_1D6A2B

BattleScript_1D6A23:: @T 81D6A23
    manipulatedamage 0
    setbyte 0x2023e87, 1

BattleScript_1D6A2B:: @T 81D6A2B
    graphicalhpupdate USER
    datahpupdate USER
    jumpifbyte 4, 0x2023dcc, 41, BattleScript_1D6A42
    printfromtable BattleTextList_83FE5DC
    waitmessage 64

BattleScript_1D6A42:: @T 81D6A42
    faintpokemon USER, 0, 0x0
    faintpokemon TARGET, 0, 0x0
    jump BattleScript_EndTurn

MoveEffect_BurnHit:: @ 81D6A55
    setbyte 0x2023e85, 3
    jump MoveEffect_Hit

MoveEffect_FreezeHit:: @ 81D6A60
    setbyte 0x2023e85, 4
    jump MoveEffect_Hit

MoveEffect_ParalyzeHit:: @ 81D6A6B
    setbyte 0x2023e85, 5
    jump MoveEffect_Hit

MoveEffect_Explosion:: @ 81D6A76
    attackcanceler
    attackstring
    ppreduce
    faintifabilitynotdamp
    setuserhptozero
    waitstateatk
    jumpifbyte 5, 0x2023dcc, 1, BattleScript_1D6A91
    callatk BattleScript_1D6AE7
    jump BattleScript_1D6A93

BattleScript_1D6A91:: @T 81D6A91
    attackanimation
    waitanimation

BattleScript_1D6A93:: @T 81D6A93
    atk25
    critcalc
    atk5
    atk6
    atk7
    accuracycheck BattleScript_1D6ACC, 0
    missmessage
    atk5c TARGET
    waitstateatk
    graphicalhpupdate TARGET
    datahpupdate TARGET
    critmessage
    waitmessage 64
    resultmessage
    waitmessage 64
    faintpokemon TARGET, 0, 0x0
    setbyte 0x2023fd8, 0
    atk49 2, 16
    jumpwhiletargetvalid BattleScript_1D6A93
    faintpokemon USER, 0, 0x0
    end

BattleScript_1D6ACC:: @T 81D6ACC
    missmessage
    resultmessage
    waitmessage 64
    setbyte 0x2023fd8, 0
    atk49 2, 16
    jumpwhiletargetvalid BattleScript_1D6A93
    faintpokemon USER, 0, 0x0
    end

BattleScript_1D6AE7:: @T 81D6AE7
    bicbyte 0x2023dcc, 1
    attackanimation
    waitanimation
    orbyte 0x2023dcc, 1
    return

MoveEffect_DreamEater:: @ 81D6AF6
    attackcanceler
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, BattleScript_1D6B0B
    jumpifstatus TARGET, SLP, BattleScript_1D6B15

BattleScript_1D6B0B:: @T 81D6B0B
    attackstring
    ppreduce
    waitmessage 64
    jump BattleScript_1D69BE

BattleScript_1D6B15:: @T 81D6B15
    accuracycheck BattleScript_1D695E, 0
    attackstring
    ppreduce
    critcalc
    atk5
    atk6
    atk7
    attackanimation
    waitanimation
    missmessage
    atk5c TARGET
    waitstateatk
    graphicalhpupdate TARGET
    datahpupdate TARGET
    critmessage
    waitmessage 64
    resultmessage
    waitmessage 64
    negativedamage
    orword 0x2023dd0, 0x100
    graphicalhpupdate USER
    datahpupdate USER
    jumpifbyte 4, 0x2023dcc, 41, BattleScript_1D6B53
    printstring BATTLE_TEXT_DreamEaten
    waitmessage 64

BattleScript_1D6B53:: @T 81D6B53
    faintpokemon TARGET, 0, 0x0
    jump BattleScript_EndTurn

MoveEffect_MirrorMove:: @ 81D6B5F
    attackcanceler
    attackstring
    pause 64
    jumptolastusedattack
    ppreduce
    orbyte 0x2023dcc, 32
    printstring BATTLE_TEXT_MirrorFail
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_AttackUp:: @ 81D6B77
    setbyte 0x2023fde, 17
    jump BattleScript_1D6B9E

MoveEffect_DefenseUp:: @ 81D6B82
    setbyte 0x2023fde, 18
    jump BattleScript_1D6B9E

MoveEffect_SpecialAttackUp:: @ 81D6B8D
    setbyte 0x2023fde, 20
    jump BattleScript_1D6B9E

MoveEffect_EvasionUp:: @ 81D6B98
    setbyte 0x2023fde, 23

BattleScript_1D6B9E:: @T 81D6B9E
    attackcanceler

BattleScript_1D6B9F:: @T 81D6B9F
    attackstring
    ppreduce
    statbuffchange 65, BattleScript_1D6BCC
    jumpifbyte 1, 0x2023e87, 2, BattleScript_1D6BBA
    pause 32
    jump BattleScript_1D6BC4

BattleScript_1D6BBA:: @T 81D6BBA
    attackanimation
    waitanimation

BattleScript_1D6BBC:: @T 81D6BBC
    atk47
    playanimation USER, 1, 0x2023fd4

BattleScript_1D6BC4:: @T 81D6BC4
    printfromtable BattleTextList_83FE57C
    waitmessage 64

BattleScript_1D6BCC:: @T 81D6BCC
    jump BattleScript_EndTurn

BattleScript_1D6BD1:: @T 81D6BD1
    playanimation 2, 1, 0x2023fd4
    printfromtable BattleTextList_83FE57C
    waitmessage 64
    return

MoveEffect_AttackDown:: @ 81D6BE1
    setbyte 0x2023fde, 145
    jump BattleScript_1D6C13

MoveEffect_DefenseDown:: @ 81D6BEC
    setbyte 0x2023fde, 146
    jump BattleScript_1D6C13

MoveEffect_SpeedDown:: @ 81D6BF7
    setbyte 0x2023fde, 147
    jump BattleScript_1D6C13

MoveEffect_AccuracyDown:: @ 81D6C02
    setbyte 0x2023fde, 150
    jump BattleScript_1D6C13

MoveEffect_EvasionDown:: @ 81D6C0D
    setbyte 0x2023fde, 151

BattleScript_1D6C13:: @T 81D6C13
    attackcanceler
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, BattleScript_1D7DF0
    accuracycheck BattleScript_1D695E, 0
    attackstring
    ppreduce
    statbuffchange 1, BattleScript_1D6C5D
    jumpifbyte 3, 0x2023e87, 2, BattleScript_1D6C4B
    jumpifbyte 0, 0x2023e87, 3, BattleScript_1D6C5D
    pause 32
    jump BattleScript_1D6C55

BattleScript_1D6C4B:: @T 81D6C4B
    attackanimation
    waitanimation
    atk47
    playanimation TARGET, 1, 0x2023fd4

BattleScript_1D6C55:: @T 81D6C55
    printfromtable BattleTextList_83FE588
    waitmessage 64

BattleScript_1D6C5D:: @T 81D6C5D
    jump BattleScript_EndTurn

unk_1d6c62:: @T 81d6c62
    playanimation 2, 1, 0x2023fd4
    printfromtable BattleTextList_83FE588
    waitmessage 64
    return

MoveEffect_Haze:: @ 81D6C72
    attackcanceler
    attackstring
    ppreduce
    attackanimation
    waitanimation
    normalisebuffs
    printstring BATTLE_TEXT_StatElim
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Bide:: @ 81D6C83
    attackcanceler
    attackstring
    ppreduce
    attackanimation
    waitanimation
    orword 0x2023dd0, 0x8000000
    setbide
    jump BattleScript_EndTurn

MoveEffect_Rampage:: @ 81D6C97
    attackcanceler
    accuracycheck BattleScript_1D695E, 0
    attackstring
    jumpifsecondarytstatus USER, S_CONTINUE, BattleScript_1D6CAB
    ppreduce

BattleScript_1D6CAB:: @T 81D6CAB
    confuseifrepeatingattackends
    jump BattleScript_1D6930

MoveEffect_Roar:: @ 81D6CB1
    attackcanceler
    attackstring
    ppreduce
    jumpifability TARGET, ABILITY_SUCTION_CUPS, BattleScript_1D9408
    jumpifspecialstatusflag TARGET, 0x400, 0, BattleScript_1D8F27
    accuracycheck BattleScript_ButItFailed, 65535
    accuracycheck BattleScript_1D6960, 0
    forcerandomswitch BattleScript_ButItFailed

MoveEffect_MultiHit:: @ 81D6CD9
    attackcanceler
    accuracycheck BattleScript_1D695E, 0
    attackstring
    ppreduce
    setloopcounter 0
    atk8e
    setbyte 0x2023fda, 0

BattleScript_1D6CEC:: @T 81D6CEC
    jumpiffainted USER, BattleScript_1D6D82
    jumpiffainted TARGET, BattleScript_1D6D63
    jumpifhalfword 0, 0x2023d4c, 214, BattleScript_1D6D0E
    jumpifstatus USER, SLP, BattleScript_1D6D63

BattleScript_1D6D0E:: @T 81D6D0E
    atk25
    copyarray 0x2023e85, 0x2023fda, 1
    critcalc
    atk5
    atk6
    jumpifbyte 4, 0x2023dcc, 41, BattleScript_1D6D60
    atk7
    attackanimation
    waitanimation
    missmessage
    atk5c TARGET
    waitstateatk
    graphicalhpupdate TARGET
    datahpupdate TARGET
    critmessage
    waitmessage 64
    printstring BATTLE_TEXT_Terminator2
    waitmessage 1
    addbyte 0x2023fd0, 1
    setbyte 0x2023fd8, 0
    atk49 2, 16
    jumpifbyte 4, 0x2023dcc, 64, BattleScript_1D6D63
    atk27 BattleScript_1D6CEC
    jump BattleScript_1D6D63

BattleScript_1D6D60:: @T 81D6D60
    pause 32

BattleScript_1D6D63:: @T 81D6D63
    resultmessage
    waitmessage 64
    jumpifbyte 4, 0x2023dcc, 41, BattleScript_1D6D82
    copyarray 0x2022ab8, 0x2023fcc, 6
    printstring BATTLE_TEXT_HitMulti
    waitmessage 64

BattleScript_1D6D82:: @T 81D6D82
    seteffectwithchancetarget
    faintpokemon TARGET, 0, 0x0
    setbyte 0x2023fd8, 2
    atk49 1, 0
    setbyte 0x2023fd8, 4
    atk49 0, 0
    end

MoveEffect_Conversion:: @ 81D6D9D
    attackcanceler
    attackstring
    ppreduce
    changetypestoenemyattacktype BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_TypeTransform
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_FlinchHit:: @ 81D6DB2
    setbyte 0x2023e85, 8
    jump MoveEffect_Hit

MoveEffect_RestoreHp:: @ 81D6DBD
    attackcanceler
    attackstring
    ppreduce
    setdamageasrestorehalfmaxhp BattleScript_1D7DD1, 1
    attackanimation
    waitanimation
    orword 0x2023dd0, 0x100
    graphicalhpupdate USER
    datahpupdate USER
    printstring BATTLE_TEXT_RegainedHealth
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Toxic:: @ 81D6DE0
    attackcanceler
    attackstring
    ppreduce
    jumpifability TARGET, ABILITY_IMMUNITY, BattleScript_1D6E4F
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, BattleScript_ButItFailed
    jumpifstatus TARGET, PSN, BattleScript_1D6E41
    jumpifstatus TARGET, TOX, BattleScript_1D6E41
    jumpifstatus TARGET, SLP | PSN | BRN | FRZ | PAR | TOX, BattleScript_ButItFailed
    jumpiftype TARGET, TYPE_POISON, BattleScript_1D7E04
    jumpiftype TARGET, TYPE_STEEL, BattleScript_1D7E04
    accuracycheck BattleScript_ButItFailed, 0
    jumpifhalverset TARGET, 32, BattleScript_1D8B39
    attackanimation
    waitanimation
    setbyte 0x2023e85, 6
    seteffecttarget
    resultmessage
    waitmessage 64
    jump BattleScript_EndTurn

BattleScript_1D6E41:: @T 81D6E41
    pause 64
    printstring BATTLE_TEXT_AlreadyPoisoned
    waitmessage 64
    jump BattleScript_EndTurn

BattleScript_1D6E4F:: @T 81D6E4F
    copyarray 0x2023d6e, 0x2023d6c, 1
    setbyte 0x2023e87, 0
    callatk BattleScript_1D9438
    jump BattleScript_EndTurn

MoveEffect_PayDay:: @ 81D6E69
    setbyte 0x2023e85, 11
    jump MoveEffect_Hit

MoveEffect_LightScreen:: @ 81D6E74
    attackcanceler
    attackstring
    ppreduce
    setlightscreen
    jump BattleScript_1D7172

MoveEffect_TriAttack:: @ 81D6E7D
    setbyte 0x2023e85, 9
    jump MoveEffect_Hit

MoveEffect_Rest:: @ 81D6E88
    attackcanceler
    attackstring
    ppreduce
    jumpifstatus USER, SLP, BattleScript_1D6EC2
    jumpifcannotsleep BattleScript_1D6EB2
    setrest BattleScript_1D7DD1
    pause 32
    printfromtable BattleTextList_83FE562
    waitmessage 64
    atk98 1
    waitstateatk
    jump BattleScript_1D7DB7

BattleScript_1D6EB2:: @T 81D6EB2
    pause 64
    printfromtable BattleTextList_83FE576
    waitmessage 64
    jump BattleScript_EndTurn

BattleScript_1D6EC2:: @T 81D6EC2
    pause 32
    printstring BATTLE_TEXT_AttackingAsleep
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Ohko:: @ 81D6ED0
    attackcanceler
    attackstring
    ppreduce
    accuracycheck BattleScript_ButItFailed, 65535
    atk6
    jumpifbyte 4, 0x2023dcc, 41, BattleScript_1D6934
    koplussomethings BattleScript_1D6EF1
    atkab
    jump BattleScript_1D6934

BattleScript_1D6EF1:: @T 81D6EF1
    pause 64
    printfromtable BattleTextList_83FE5D4
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_RazorWind:: @ 81D6F01
    jumpifsecondarytstatus USER, S_CONTINUE, BattleScript_1D6F29
    jumpifword 4, 0x2023dd0, 0x200, BattleScript_1D6F29
    setbyte 0x2023fd3, 0
    callatk BattleScript_1D6F58
    jump BattleScript_EndTurn

BattleScript_1D6F29:: @T 81D6F29
    attackcanceler
    setbyte 0x2023e85, 12
    setbyte 0x2023fdc, 1
    clearstatus USER
    orword 0x2023dd0, 0x800
    jumpifhalfword 1, 0x2023d4a, 143, BattleScript_1D6927
    setbyte 0x2023e85, 8
    jump BattleScript_1D6927

BattleScript_1D6F58:: @T 81D6F58
    attackcanceler
    printstring BATTLE_TEXT_Terminator2
    ppreduce
    attackanimation
    waitanimation
    orword 0x2023dd0, 0x8000000
    setbyte 0x2023e85, 76
    seteffecttarget
    copyarray 0x2023e87, 0x2023fd3, 1
    printfromtable BattleTextList_83FE590
    waitmessage 64
    return

MoveEffect_SuperFang:: @ 81D6F82
    attackcanceler
    accuracycheck BattleScript_1D695E, 0
    attackstring
    ppreduce
    atk6
    bicbyte 0x2023dcc, 6
    gethalfcurrentenemyhp
    jump BattleScript_1D6934

MoveEffect_DragonRage:: @ 81D6F99
    attackcanceler
    accuracycheck BattleScript_1D695E, 0
    attackstring
    ppreduce
    atk6
    bicbyte 0x2023dcc, 6
    setbyte 0x2023d50, 40
    setbyte 0x2023d51, 0
    setbyte 0x2023d52, 0
    setbyte 0x2023d53, 0
    atk69
    jump BattleScript_1D6934

MoveEffect_Trap:: @ 81D6FC8
    jumpifhalfword 1, 0x2023d4a, 250, BattleScript_1D6FEE
    jumpifspecialstatusflag TARGET, 0x40000, 1, BattleScript_1D6FEE
    orword 0x2023dd0, 0x40000
    setbyte 0x2023fd2, 2

BattleScript_1D6FEE:: @T 81D6FEE
    setbyte 0x2023e85, 13
    jump MoveEffect_Hit

MoveEffect_DoubleHit:: @ 81D6FF9
    attackcanceler
    accuracycheck BattleScript_1D695E, 0
    attackstring
    ppreduce
    setloopcounter 2
    atk8e
    setbyte 0x2023fda, 0
    jump BattleScript_1D6CEC

MoveEffect_RecoilIfMiss:: @ 81D7011
    attackcanceler
    accuracycheck BattleScript_1D701E, 0
    jump BattleScript_1D692E

BattleScript_1D701E:: @T 81D701E
    attackstring
    ppreduce
    pause 64
    resultmessage
    waitmessage 64
    jumpifbyte 4, 0x2023dcc, 8, BattleScript_EndTurn
    printstring BATTLE_TEXT_KeptGoingCrash
    waitmessage 64
    atk5
    atk6
    atk7
    manipulatedamage 1
    bicbyte 0x2023dcc, 1
    orword 0x2023dd0, 0x100
    graphicalhpupdate USER
    datahpupdate USER
    faintpokemon USER, 0, 0x0
    orbyte 0x2023dcc, 1
    jump BattleScript_EndTurn

MoveEffect_Mist:: @ 81D7062
    attackcanceler
    attackstring
    ppreduce
    setmisteffect
    attackanimation
    waitanimation
    printfromtable BattleTextList_83FE5AC
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_FocusEnergy:: @ 81D7075
    attackcanceler
    attackstring
    ppreduce
    jumpifsecondarytstatus USER, S_FOCUS_ENERGY, BattleScript_ButItFailed
    setincreasedcriticalchance
    attackanimation
    waitanimation
    printfromtable BattleTextList_83FE5B0
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Recoil:: @ 81D7092
    setbyte 0x2023e85, 206
    jumpifhalfword 1, 0x2023d4a, 165, MoveEffect_Hit
    atk60 27
    jump MoveEffect_Hit

MoveEffect_Confuse:: @ 81D70AB
    attackcanceler
    attackstring
    ppreduce
    jumpifability TARGET, ABILITY_OWN_TEMPO, BattleScript_1D9460
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, BattleScript_ButItFailed
    jumpifsecondarytstatus TARGET, S_CONFUSED, BattleScript_1D70EA
    accuracycheck BattleScript_ButItFailed, 0
    jumpifhalverset TARGET, 32, BattleScript_1D8B39
    attackanimation
    waitanimation
    setbyte 0x2023e85, 7
    seteffecttarget
    resultmessage
    waitmessage 64
    jump BattleScript_EndTurn

BattleScript_1D70EA:: @T 81D70EA
    pause 32
    printstring BATTLE_TEXT_AlreadyConfused
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_AttackUp2:: @ 81D70F8
    setbyte 0x2023fde, 33
    jump BattleScript_1D6B9E

MoveEffect_DefenseUp2:: @ 81D7103
    setbyte 0x2023fde, 34
    jump BattleScript_1D6B9E

MoveEffect_SpeedUp2:: @ 81D710E
    setbyte 0x2023fde, 35
    jump BattleScript_1D6B9E

MoveEffect_SpecialAttackUp2:: @ 81D7119
    setbyte 0x2023fde, 36
    jump BattleScript_1D6B9E

MoveEffect_SpecialDefenseUp2:: @ 81D7124
    setbyte 0x2023fde, 37
    jump BattleScript_1D6B9E

MoveEffect_Transform:: @ 81D712F
    attackcanceler
    attackstring
    ppreduce
    transformdataexecution
    attackanimation
    waitanimation
    printfromtable BattleTextList_83FE5B4
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_AttackDown2:: @ 81D7142
    setbyte 0x2023fde, 161
    jump BattleScript_1D6C13

MoveEffect_DefenseDown2:: @ 81D714D
    setbyte 0x2023fde, 162
    jump BattleScript_1D6C13

MoveEffect_SpeedDown2:: @ 81D7158
    setbyte 0x2023fde, 163
    jump BattleScript_1D6C13

MoveEffect_SpecialDefenseDown2:: @ 81D7163
    setbyte 0x2023fde, 165
    jump BattleScript_1D6C13

MoveEffect_Reflect:: @ 81D716E

    attackcanceler
    attackstring
    ppreduce
    setreflect

BattleScript_1D7172:: @T 81D7172
    attackanimation
    waitanimation
    printfromtable BattleTextList_83FE54C
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Poison:: @ 81D7181
    attackcanceler
    attackstring
    ppreduce
    jumpifability TARGET, ABILITY_IMMUNITY, BattleScript_1D6E4F
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, BattleScript_ButItFailed
    jumpifstatus TARGET, PSN, BattleScript_1D6E41
    jumpifstatus TARGET, TOX, BattleScript_1D6E41
    jumpiftype TARGET, TYPE_POISON, BattleScript_1D7E04
    jumpiftype TARGET, TYPE_STEEL, BattleScript_1D7E04
    jumpifstatus TARGET, SLP | PSN | BRN | FRZ | PAR | TOX, BattleScript_ButItFailed
    accuracycheck BattleScript_ButItFailed, 0
    jumpifhalverset TARGET, 32, BattleScript_1D8B39
    attackanimation
    waitanimation
    setbyte 0x2023e85, 2
    seteffecttarget
    resultmessage
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Paralyze:: @ 81D71E2
    attackcanceler
    attackstring
    ppreduce
    jumpifability TARGET, ABILITY_LIMBER, BattleScript_1D7245
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, BattleScript_ButItFailed
    atk6
    jumpifbyte 4, 0x2023dcc, 41, BattleScript_ButItFailed
    jumpifstatus TARGET, PAR, BattleScript_1D7237
    jumpifstatus TARGET, SLP | PSN | BRN | FRZ | PAR | TOX, BattleScript_ButItFailed
    accuracycheck BattleScript_ButItFailed, 0
    jumpifhalverset TARGET, 32, BattleScript_1D8B39
    attackanimation
    waitanimation
    setbyte 0x2023e85, 5
    seteffecttarget
    resultmessage
    waitmessage 64
    jump BattleScript_EndTurn

BattleScript_1D7237:: @T 81D7237
    pause 32
    printstring BATTLE_TEXT_AlreadyParalyzed
    waitmessage 64
    jump BattleScript_EndTurn

BattleScript_1D7245:: @T 81D7245
    copyarray 0x2023d6e, 0x2023d6c, 1
    setbyte 0x2023e87, 0
    callatk BattleScript_1D942C
    jump BattleScript_EndTurn

MoveEffect_AttackDownHit:: @ 81D725F
    setbyte 0x2023e85, 22
    jump MoveEffect_Hit

MoveEffect_DefenseDownHit:: @ 81D726A
    setbyte 0x2023e85, 23
    jump MoveEffect_Hit

MoveEffect_SpeedDownHit:: @ 81D7275
    setbyte 0x2023e85, 24
    jump MoveEffect_Hit

MoveEffect_SpecialAttackDownHit:: @ 81D7280
    setbyte 0x2023e85, 25
    jump MoveEffect_Hit

MoveEffect_SpecialDefenseDownHit:: @ 81D728B
    setbyte 0x2023e85, 26
    jump MoveEffect_Hit

MoveEffect_AccuracyDownHit:: @ 81D7296
    setbyte 0x2023e85, 27
    jump MoveEffect_Hit

MoveEffect_SkyAttack:: @ 81D72A1
    jumpifsecondarytstatus USER, S_CONTINUE, BattleScript_1D6F29
    jumpifword 4, 0x2023dd0, 0x200, BattleScript_1D6F29
    setbyte 0x2023fd3, 3
    callatk BattleScript_1D6F58
    jump BattleScript_EndTurn

MoveEffect_ConfuseHit:: @ 81D72C9
    setbyte 0x2023e85, 7
    jump MoveEffect_Hit

MoveEffect_Twineedle:: @ 81D72D4
    attackcanceler
    accuracycheck BattleScript_1D695E, 0
    setbyte 0x2023fda, 2
    attackstring
    ppreduce
    setloopcounter 2
    atk8e
    jump BattleScript_1D6CEC

MoveEffect_Substitute:: @ 81D72EC
    attackcanceler
    ppreduce
    attackstring
    waitstateatk
    jumpifsecondarytstatus USER, S_SUBSTITUTE, BattleScript_1D7321
    setsubstituteeffect
    jumpifbyte 1, 0x2023e87, 1, BattleScript_1D730E
    pause 32
    jump BattleScript_1D7314

BattleScript_1D730E:: @T 81D730E
    attackanimation
    waitanimation
    graphicalhpupdate USER
    datahpupdate USER

BattleScript_1D7314:: @T 81D7314
    printfromtable BattleTextList_83FE5B8
    waitmessage 64
    jump BattleScript_EndTurn

BattleScript_1D7321:: @T 81D7321
    pause 32
    printstring BATTLE_TEXT_SubAlready
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Recharge:: @ 81D732F
    attackcanceler
    accuracycheck BattleScript_1D695E, 0
    setbyte 0x2023e85, 221
    jump BattleScript_1D692E

    printstring BATTLE_TEXT_MustRecharge
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Rage:: @ 81D734D
    attackcanceler
    accuracycheck BattleScript_1D7367, 0
    setbyte 0x2023e85, 30
    seteffecttarget
    setbyte 0x2023e85, 0
    jump BattleScript_1D692E

BattleScript_1D7367:: @T 81D7367
    setbyte 0x2023e85, 30
    clearstatus USER
    jump BattleScript_1D695E

MoveEffect_Mimic:: @ 81D7374
    attackcanceler
    attackstring
    ppreduce
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, BattleScript_ButItFailed
    accuracycheck BattleScript_ButItFailed, 65535
    copyattack BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_LearnedMove2
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Metronome:: @ 81D739A
    attackcanceler
    attackstring
    pause 32
    attackanimation
    waitanimation
    setbyte 0x2023fdc, 0
    setbyte 0x2023fdd, 0
    metronomeeffect

MoveEffect_LeechSeed:: @ 81D73AE
    attackcanceler
    attackstring
    pause 32
    ppreduce
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, BattleScript_ButItFailed
    accuracycheck BattleScript_1D73C5, 0

BattleScript_1D73C5:: @T 81D73C5
    setleechseed
    attackanimation
    waitanimation
    printfromtable BattleTextList_83FE558
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Splash:: @ 81D73D5
    attackcanceler
    attackstring
    ppreduce
    attackanimation
    waitanimation
    atk60 26
    printstring BATTLE_TEXT_Nothing
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Disable:: @ 81D73E7
    attackcanceler
    attackstring
    ppreduce
    accuracycheck BattleScript_ButItFailed, 0
    disablelastusedattack BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_MoveWasDisabled
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_LevelDamage:: @ 81D7403
    attackcanceler
    accuracycheck BattleScript_1D695E, 0
    attackstring
    ppreduce
    atk6
    bicbyte 0x2023dcc, 6
    nightshadedamageeffect
    atk69
    jump BattleScript_1D6934

MoveEffect_Psywave:: @ 81D741B
    attackcanceler
    accuracycheck BattleScript_1D695E, 0
    attackstring
    ppreduce
    atk6
    bicbyte 0x2023dcc, 6
    psywavedamageeffect
    atk69
    jump BattleScript_1D6934

MoveEffect_Counter:: @ 81D7433
    attackcanceler
    counterdamagecalculator BattleScript_1D7DF0
    accuracycheck BattleScript_1D695E, 0
    attackstring
    ppreduce
    damagecalc2
    atk69
    jump BattleScript_1D6934

MoveEffect_Encore:: @ 81D7449
    attackcanceler
    accuracycheck BattleScript_1D695E, 0
    attackstring
    ppreduce
    setencore BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_EncoreGot
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_PainSplit:: @ 81D7465
    attackcanceler
    attackstring
    ppreduce
    accuracycheck BattleScript_ButItFailed, 65535
    painsplitdamagecalculator BattleScript_ButItFailed
    attackanimation
    waitanimation
    orword 0x2023dd0, 0x100
    graphicalhpupdate USER
    datahpupdate USER
    copyarray 0x2023d50, 0x2023fc4, 4
    graphicalhpupdate TARGET
    datahpupdate TARGET
    printstring BATTLE_TEXT_PainSplit
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Snore:: @ 81D749C
    attackcanceler
    jumpifstatus USER, SLP, BattleScript_1D74AE
    attackstring
    ppreduce
    jump BattleScript_ButItFailed

BattleScript_1D74AE:: @T 81D74AE
    jumpifhalfword 0, 0x2023d4c, 214, BattleScript_1D74C2
    printstring BATTLE_TEXT_FastAsleep
    waitmessage 64
    statusanimation USER

BattleScript_1D74C2:: @T 81D74C2
    attackstring
    ppreduce
    accuracycheck BattleScript_1D6960, 0
    setbyte 0x2023e85, 8
    jump BattleScript_1D6930

MoveEffect_Conversion2:: @ 81D74D6
    attackcanceler
    attackstring
    ppreduce
    settypetorandomresistance BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_TypeTransform
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_LockOn:: @ 81D74EB
    attackcanceler
    attackstring
    ppreduce
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, BattleScript_ButItFailed
    accuracycheck BattleScript_ButItFailed, 0
    setalwayshitflag
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_TookAim
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Sketch:: @ 81D750D
    attackcanceler
    attackstring
    ppreduce
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, BattleScript_ButItFailed
    copymovepermanently BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_SketchedMove
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_SleepTalk:: @ 81D752C
    attackcanceler
    jumpifstatus USER, SLP, BattleScript_1D753E
    attackstring
    ppreduce
    jump BattleScript_ButItFailed

BattleScript_1D753E:: @T 81D753E
    printstring BATTLE_TEXT_FastAsleep
    waitmessage 64
    statusanimation USER
    attackstring
    ppreduce
    orword 0x2023dd0, 0x800
    selectrandommovefromusermoves BattleScript_1D755E
    pause 64
    jump BattleScript_ButItFailed

BattleScript_1D755E:: @T 81D755E
    attackanimation
    waitanimation
    setbyte 0x2023fdc, 0
    setbyte 0x2023fdd, 0
    jumptoattack USER

MoveEffect_DestinyBond:: @ 81D756E
    attackcanceler
    attackstring
    ppreduce
    destinybondeffect
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_DestinyBondTake
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Flail:: @ 81D757F
    remaininghptopower
    jump MoveEffect_Hit

MoveEffect_Spite:: @ 81D7585
    attackcanceler
    attackstring
    ppreduce
    accuracycheck BattleScript_ButItFailed, 0
    reducepprandom BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_ReducedBy
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_HealBell:: @ 81D75A1
    attackcanceler
    attackstring
    ppreduce
    clearstatusifnotsoundproofed
    waitstateatk
    attackanimation
    waitanimation
    printfromtable BattleTextList_83FE5E4
    waitmessage 64
    jumpifhalfword 1, 0x2023d4a, 215, BattleScript_1D75DE
    jumpifbyte 5, 0x2023e87, 1, BattleScript_1D75CD
    printstring BATTLE_TEXT_BlocksOther
    waitmessage 64

BattleScript_1D75CD:: @T 81D75CD
    jumpifbyte 5, 0x2023e87, 2, BattleScript_1D75DE
    printstring BATTLE_TEXT_BlocksOther2
    waitmessage 64

BattleScript_1D75DE:: @T 81D75DE
    atk98 4
    waitstateatk
    jump BattleScript_EndTurn

MoveEffect_TripleKick:: @ 81D75E6
    attackcanceler
    attackstring
    ppreduce
    setbyte 0x2023fd6, 0
    setbyte 0x2023fd7, 0
    atk8e
    atk26 3

BattleScript_1D75F8:: @T 81D75F8
    jumpiffainted USER, BattleScript_1D76B7
    jumpiffainted TARGET, BattleScript_1D7679
    jumpifhalfword 0, 0x2023d4c, 214, BattleScript_1D761A
    jumpifstatus USER, SLP, BattleScript_1D7679

BattleScript_1D761A:: @T 81D761A
    accuracycheck BattleScript_1D7679, 0
    atk25
    addbyte 0x2023fd6, 10
    addbyte 0x2023fd0, 1
    copyarray 0x2023f50, 0x2023fd6, 2
    critcalc
    atk5
    atk6
    atk7
    jumpifbyte 4, 0x2023dcc, 41, BattleScript_1D7679
    attackanimation
    waitanimation
    missmessage
    atk5c TARGET
    waitstateatk
    graphicalhpupdate TARGET
    datahpupdate TARGET
    critmessage
    waitmessage 64
    printstring BATTLE_TEXT_Terminator2
    waitmessage 1
    setbyte 0x2023fd8, 0
    atk49 2, 16
    jumpifbyte 4, 0x2023dcc, 64, BattleScript_1D768D
    atk27 BattleScript_1D75F8
    jump BattleScript_1D768D

BattleScript_1D7679:: @T 81D7679
    pause 32
    jumpifbyte 0, 0x2023fd0, 0, BattleScript_1D768D
    bicbyte 0x2023dcc, 1

BattleScript_1D768D:: @T 81D768D
    resultmessage
    waitmessage 64
    jumpifbyte 0, 0x2023fd0, 0, BattleScript_1D76B7
    jumpifbyte 4, 0x2023dcc, 8, BattleScript_1D76B7
    copyarray 0x2022ab8, 0x2023fcc, 6
    printstring BATTLE_TEXT_HitMulti
    waitmessage 64

BattleScript_1D76B7:: @T 81D76B7
    seteffectwithchancetarget
    faintpokemon TARGET, 0, 0x0
    setbyte 0x2023fd8, 14
    atk49 0, 0
    end

MoveEffect_Thief:: @ 81D76C9
    setbyte 0x2023e85, 31
    jump MoveEffect_Hit

MoveEffect_MeanLook:: @ 81D76D4
    attackcanceler
    attackstring
    ppreduce
    accuracycheck BattleScript_ButItFailed, 65534
    jumpifsecondarytstatus TARGET, S_MEAN_LOOK, BattleScript_ButItFailed
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, BattleScript_ButItFailed
    attackanimation
    waitanimation
    setbyte 0x2023e85, 32
    seteffecttarget
    printstring BATTLE_TEXT_CantEscapeNow
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Nightmare:: @ 81D7706
    attackcanceler
    attackstring
    ppreduce
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, BattleScript_ButItFailed
    jumpifsecondarytstatus TARGET, S_NIGHTMARE, BattleScript_ButItFailed
    jumpifstatus TARGET, SLP, BattleScript_1D772C
    jump BattleScript_ButItFailed

BattleScript_1D772C:: @T 81D772C
    attackanimation
    waitanimation
    setbyte 0x2023e85, 33
    seteffecttarget
    printstring BATTLE_TEXT_NightmareStart
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Minimize:: @ 81D7740
    attackcanceler
    setminimize
    setbyte 0x2023fde, 23
    jump BattleScript_1D6B9F

MoveEffect_Curse:: @ 81D774D
    jumpiftype2 USER, TYPE_GHOST, BattleScript_1D77C5
    attackcanceler
    attackstring
    ppreduce
    jumpifstat USER, 2, 3, 0, BattleScript_1D7772
    jumpifstat USER, 1, 1, 12, BattleScript_1D7772
    jumpifstat USER, 0, 2, 12, BattleScript_ButItFailed

BattleScript_1D7772:: @T 81D7772
    copyarray 0x2023d6c, 0x2023d6b, 1
    setbyte 0x2023fdc, 1
    attackanimation
    waitanimation
    setbyte 0x2023fde, 147
    statbuffchange 65, BattleScript_1D7798
    printfromtable BattleTextList_83FE588
    waitmessage 64

BattleScript_1D7798:: @T 81D7798
    setbyte 0x2023fde, 17
    statbuffchange 65, BattleScript_1D77AC
    printfromtable BattleTextList_83FE57C
    waitmessage 64

BattleScript_1D77AC:: @T 81D77AC
    setbyte 0x2023fde, 18
    statbuffchange 65, BattleScript_1D77C0
    printfromtable BattleTextList_83FE57C
    waitmessage 64

BattleScript_1D77C0:: @T 81D77C0
    jump BattleScript_EndTurn

BattleScript_1D77C5:: @T 81D77C5
    jumpifarraynotequal 0x2023d6b, 0x2023d6c, 1, BattleScript_1D77D6
    atk76 USER, 3

BattleScript_1D77D6:: @T 81D77D6
    attackcanceler
    attackstring
    ppreduce
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, BattleScript_ButItFailed
    accuracycheck BattleScript_ButItFailed, 65535
    cursetarget BattleScript_ButItFailed
    orword 0x2023dd0, 0x100
    setbyte 0x2023fdc, 0
    attackanimation
    waitanimation
    graphicalhpupdate USER
    datahpupdate USER
    printstring BATTLE_TEXT_CurseLay
    waitmessage 64
    faintpokemon USER, 0, 0x0
    jump BattleScript_EndTurn

MoveEffect_Protect:: @ 81D7816
    attackcanceler
    attackstring
    ppreduce
    setprotect
    attackanimation
    waitanimation
    printfromtable BattleTextList_83FE546
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Spikes:: @ 81D7829
    attackcanceler
    setspikes BattleScript_1D7DF0
    attackstring
    ppreduce
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_SpikesScattered
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Foresight:: @ 81D783E
    attackcanceler
    accuracycheck BattleScript_1D695E, 0
    attackstring
    ppreduce
    setforesight
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_IdentifiedPoke
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_PerishSong:: @ 81D7856
    attackcanceler
    attackstring
    ppreduce
    setperishsong BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_PerishSong
    waitmessage 64
    setbyte 0x2023fdb, 0

BattleScript_1D786C:: @T 81D786C
    jumpifability 10, ABILITY_SOUNDPROOF, BattleScript_1D788C

BattleScript_1D7873:: @T 81D7873
    addbyte 0x2023fdb, 1
    jumpifarraynotequal 0x2023fdb, 0x2023bcc, 1, BattleScript_1D786C
    jump BattleScript_EndTurn

BattleScript_1D788C:: @T 81D788C
    printstring BATTLE_TEXT_BlocksOther2
    waitmessage 64
    jump BattleScript_1D7873

MoveEffect_Sandstorm:: @ 81D7897
    attackcanceler
    attackstring
    ppreduce
    setsandstorm
    jump BattleScript_1D7A14

MoveEffect_Rollout:: @ 81D78A0
    attackcanceler
    attackstring
    jumpifsecondarytstatus USER, S_CONTINUE, BattleScript_1D78AD
    ppreduce

BattleScript_1D78AD:: @T 81D78AD
    accuracycheck BattleScript_1D78B4, 0

BattleScript_1D78B4:: @T 81D78B4
    damagecalc2
    rolloutdamagecalculation
    jump BattleScript_1D6930

MoveEffect_Swagger:: @ 81D78BB
    attackcanceler
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, BattleScript_1D6958
    accuracycheck BattleScript_1D695E, 0
    attackstring
    ppreduce
    jumpifconfusedandattackmaxed 1, BattleScript_ButItFailed
    attackanimation
    waitanimation
    setbyte 0x2023fde, 33
    statbuffchange 1, BattleScript_1D78FE
    jumpifbyte 0, 0x2023e87, 2, BattleScript_1D78FE
    atk47
    playanimation TARGET, 1, 0x2023fd4
    printfromtable BattleTextList_83FE57C
    waitmessage 64

BattleScript_1D78FE:: @T 81D78FE
    jumpifability TARGET, ABILITY_OWN_TEMPO, BattleScript_1D9460
    jumpifhalverset TARGET, 32, BattleScript_1D8B39
    setbyte 0x2023e85, 7
    seteffecttarget
    jump BattleScript_EndTurn

MoveEffect_FuryCutter:: @ 81D7919
    attackcanceler
    attackstring
    ppreduce
    accuracycheck BattleScript_1D7923, 0

BattleScript_1D7923:: @T 81D7923
    furycutterdamagecalculation
    critcalc
    atk5
    atk6
    jumpifbyte 4, 0x2023dcc, 41, BattleScript_1D7923
    atk7
    jump BattleScript_1D6934

MoveEffect_Attract:: @ 81D7938
    attackcanceler
    attackstring
    ppreduce
    accuracycheck BattleScript_ButItFailed, 0
    tryinfatuatetarget BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_FellLove
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Return:: @ 81D7954
    attackcanceler
    accuracycheck BattleScript_1D695E, 0
    happinesstodamagecalculation
    jump BattleScript_1D692E

MoveEffect_Present:: @ 81D7962
    attackcanceler
    accuracycheck BattleScript_1D695E, 0
    attackstring
    ppreduce
    atk6
    presentdamagecalculation

MoveEffect_Safeguard:: @ 81D796E
    attackcanceler
    attackstring
    ppreduce
    setsafeguard
    jump BattleScript_1D7172

MoveEffect_ThawHit:: @ 81D7977
    setbyte 0x2023e85, 3
    jump MoveEffect_Hit

MoveEffect_Magnitude:: @ 81D7982
    attackcanceler
    attackstring
    ppreduce
    selectnexttarget
    magnitudedamagecalculation
    pause 32
    printstring BATTLE_TEXT_MagnitudeCount
    waitmessage 64
    jump BattleScript_1D7B17

MoveEffect_BatonPass:: @ 81D7995
    attackcanceler
    attackstring
    ppreduce
    jumpifcannotswitch 129, BattleScript_ButItFailed
    attackanimation
    waitanimation
    openpartyscreen USER, BattleScript_ButItFailed
    atke2 USER
    waitstateatk
    atk51 USER, 2
    atk58 USER
    switch1 USER
    switch2 USER
    atk73 USER
    printstring 3
    switch3 USER, 1
    waitstateatk
    atk52 USER
    jump BattleScript_EndTurn

MoveEffect_RapidSpin:: @ 81D79C2
    setbyte 0x2023e85, 227
    jump MoveEffect_Hit

MoveEffect_Sonicboom:: @ 81D79CD
    attackcanceler
    accuracycheck BattleScript_1D695E, 0
    attackstring
    ppreduce
    atk6
    bicbyte 0x2023dcc, 6
    setbyte 0x2023d50, 20
    setbyte 0x2023d51, 0
    setbyte 0x2023d52, 0
    setbyte 0x2023d53, 0
    atk69
    jump BattleScript_1D6934

MoveEffect_MorningSun:: @ 81D79FC
    attackcanceler
    attackstring
    ppreduce
    recoverbasedonsunlight BattleScript_1D7DD1
    jump BattleScript_1D7DB7

MoveEffect_HiddenPower:: @ 81D7A09
    attackcanceler
    hiddenpowerdamagecalculation
    jump BattleScript_1D6927

MoveEffect_RainDance:: @ 81D7A10

    attackcanceler
    attackstring
    ppreduce
    setrain

BattleScript_1D7A14:: @T 81D7A14
    attackanimation
    waitanimation
    printfromtable BattleTextList_83FE528
    waitmessage 64
    callatk BattleScript_1D92DC
    jump BattleScript_EndTurn

MoveEffect_SunnyDay:: @ 81D7A28
    attackcanceler
    attackstring
    ppreduce
    setsunny
    jump BattleScript_1D7A14

MoveEffect_DefenseUpHit:: @ 81D7A31
    setbyte 0x2023e85, 80
    jump MoveEffect_Hit

MoveEffect_AttackUpHit:: @ 81D7A3C
    setbyte 0x2023e85, 79
    jump MoveEffect_Hit

MoveEffect_AllStatsUpHit:: @ 81D7A47
    setbyte 0x2023e85, 98
    jump MoveEffect_Hit

MoveEffect_BellyDrum:: @ 81D7A52
    attackcanceler
    attackstring
    ppreduce
    maxattackhalvehp BattleScript_ButItFailed
    orword 0x2023dd0, 0x100
    attackanimation
    waitanimation
    graphicalhpupdate USER
    datahpupdate USER
    printstring BATTLE_TEXT_CutHPMaxATK
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_PsychUp:: @ 81D7A74
    attackcanceler
    attackstring
    ppreduce
    copyfoestats BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_CopyStatChanges
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_MirrorCoat:: @ 81D7A89
    attackcanceler
    mirrorcoatdamagecalculator BattleScript_1D7DF0
    accuracycheck BattleScript_1D695E, 0
    attackstring
    ppreduce
    damagecalc2
    atk69
    jump BattleScript_1D6934

MoveEffect_SkullBash:: @ 81D7A9F
    jumpifsecondarytstatus USER, S_CONTINUE, BattleScript_1D6F29
    jumpifword 4, 0x2023dd0, 0x200, BattleScript_1D6F29
    setbyte 0x2023fd3, 2
    callatk BattleScript_1D6F58
    setbyte 0x2023fde, 18
    statbuffchange 65, BattleScript_1D7AE9
    jumpifbyte 0, 0x2023e87, 2, BattleScript_1D7AE9
    atk47
    playanimation USER, 1, 0x2023fd4
    printfromtable BattleTextList_83FE57C
    waitmessage 64

BattleScript_1D7AE9:: @T 81D7AE9
    jump BattleScript_EndTurn

MoveEffect_Twister:: @ 81D7AEE
    jumpifspecialstatusflag TARGET, 0x40, 1, BattleScript_1D7B08
    orword 0x2023dd0, 0x10000
    setbyte 0x2023fd2, 2

BattleScript_1D7B08:: @T 81D7B08
    setbyte 0x2023e85, 8
    jump MoveEffect_Hit

MoveEffect_Earthquake:: @ 81D7B13

    attackcanceler
    attackstring
    ppreduce
    selectnexttarget

BattleScript_1D7B17:: @T 81D7B17
    atk25
    jumpifspecialstatusflag TARGET, 0x80, 1, BattleScript_1D7B37
    orword 0x2023dd0, 0x20000
    setbyte 0x2023fd2, 2
    jump BattleScript_1D7B46

BattleScript_1D7B37:: @T 81D7B37
    bicword 0x2023dd0, 0x20000
    setbyte 0x2023fd2, 1

BattleScript_1D7B46:: @T 81D7B46
    accuracycheck BattleScript_1D7B7F, 0
    critcalc
    atk5
    atk6
    atk7
    attackanimation
    waitanimation
    missmessage
    atk5c TARGET
    waitstateatk
    graphicalhpupdate TARGET
    datahpupdate TARGET
    critmessage
    waitmessage 64
    resultmessage
    waitmessage 64
    printstring BATTLE_TEXT_Terminator2
    waitmessage 1
    faintpokemon TARGET, 0, 0x0
    setbyte 0x2023fd8, 0
    atk49 2, 16
    jumpwhiletargetvalid BattleScript_1D7B17
    end

BattleScript_1D7B7F:: @T 81D7B7F
    pause 32
    atk6
    missmessage
    resultmessage
    waitmessage 64
    setbyte 0x2023fd8, 0
    atk49 2, 16
    jumpwhiletargetvalid BattleScript_1D7B17
    end

MoveEffect_FutureSight:: @ 81D7B97
    attackcanceler
    attackstring
    ppreduce
    setfutureattack BattleScript_ButItFailed
    attackanimation
    waitanimation
    printfromtable BattleTextList_83FE5EE
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Gust:: @ 81D7BAE
    jumpifspecialstatusflag TARGET, 0x40, 1, MoveEffect_Hit
    orword 0x2023dd0, 0x10000
    setbyte 0x2023fd2, 2
    jump MoveEffect_Hit

MoveEffect_FlinchHit2:: @ 81D7BCD
    jumpifspecialstatusflag TARGET, 0x100, 1, BattleScript_1D7B08
    setbyte 0x2023fd2, 2
    jump BattleScript_1D7B08

MoveEffect_Solarbeam:: @ 81D7BE3
    jumpifabilitypresent ABILITY_CLOUD_NINE, BattleScript_1D7BFB
    jumpifabilitypresent ABILITY_AIR_LOCK, BattleScript_1D7BFB
    jumpifhalfword 4, 0x2023f1c, 96, BattleScript_1D7C23

BattleScript_1D7BFB:: @T 81D7BFB
    jumpifsecondarytstatus USER, S_CONTINUE, BattleScript_1D6F29
    jumpifword 4, 0x2023dd0, 0x200, BattleScript_1D6F29
    setbyte 0x2023fd3, 1
    callatk BattleScript_1D6F58
    jump BattleScript_EndTurn

BattleScript_1D7C23:: @T 81D7C23
    orword 0x2023dd0, 0x8000000
    setbyte 0x2023e85, 76
    seteffecttarget
    ppreduce
    jump BattleScript_1D6F29

MoveEffect_Thunder:: @ 81D7C39
    setbyte 0x2023e85, 5
    orword 0x2023dd0, 0x10000
    jump MoveEffect_Hit

MoveEffect_Teleport:: @ 81D7C4D
    attackcanceler
    attackstring
    ppreduce
    jumpifword 4, 0x2022b4c, 0x8, BattleScript_ButItFailed
    atk76 USER, 2
    jumpifbyte 0, 0x2023e82, 1, BattleScript_ButItFailed
    jumpifbyte 0, 0x2023e82, 2, BattleScript_1D8255
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_FledBattle
    waitmessage 64
    setbyte 0x2023e8a, 5
    jump BattleScript_EndTurn

MoveEffect_BeatUp:: @ 81D7C8A
    attackcanceler
    accuracycheck BattleScript_1D695E, 0
    attackstring
    pause 32
    ppreduce
    setbyte 0x2023e82, 0

BattleScript_1D7C9D:: @T 81D7C9D
    atk25
    beatupcalculation BattleScript_1D7CE0, BattleScript_ButItFailed
    printstring BATTLE_TEXT_PokeAttack
    critcalc
    jumpifbyte 1, 0x2023d71, 2, BattleScript_1D7CB8
    manipulatedamage 2

BattleScript_1D7CB8:: @T 81D7CB8
    atk7
    attackanimation
    waitanimation
    missmessage
    atk5c TARGET
    waitstateatk
    graphicalhpupdate TARGET
    datahpupdate TARGET
    critmessage
    waitmessage 64
    resultmessage
    waitmessage 64
    faintpokemon TARGET, 0, 0x0
    setbyte 0x2023fd8, 0
    atk49 2, 16
    jump BattleScript_1D7C9D

BattleScript_1D7CE0:: @T 81D7CE0
    end

MoveEffect_Fly:: @ 81D7CE1
    jumpifsecondarytstatus USER, S_CONTINUE, BattleScript_1D7D4F
    jumpifword 4, 0x2023dd0, 0x200, BattleScript_1D7D4F
    jumpifhalfword 0, 0x2023d4a, 19, BattleScript_1D7D3E
    jumpifhalfword 0, 0x2023d4a, 291, BattleScript_1D7D33
    jumpifhalfword 0, 0x2023d4a, 340, BattleScript_1D7D28
    setbyte 0x2023fd3, 5
    jump BattleScript_1D7D44

BattleScript_1D7D28:: @T 81D7D28
    setbyte 0x2023fd3, 7
    jump BattleScript_1D7D44

BattleScript_1D7D33:: @T 81D7D33
    setbyte 0x2023fd3, 6
    jump BattleScript_1D7D44

BattleScript_1D7D3E:: @T 81D7D3E
    setbyte 0x2023fd3, 4

BattleScript_1D7D44:: @T 81D7D44
    callatk BattleScript_1D6F58
    hidepreattack
    jump BattleScript_EndTurn

BattleScript_1D7D4F:: @T 81D7D4F
    attackcanceler
    setbyte 0x2023e85, 12
    setbyte 0x2023fdc, 1
    clearstatus USER
    orword 0x2023dd0, 0x800
    jumpifhalfword 1, 0x2023d4a, 340, BattleScript_1D7D79
    setbyte 0x2023e85, 5

BattleScript_1D7D79:: @T 81D7D79
    accuracycheck BattleScript_1D7D86, 0
    unhidepostattack
    jump BattleScript_1D692E

BattleScript_1D7D86:: @T 81D7D86
    unhidepostattack
    jump BattleScript_1D695E

MoveEffect_DefenseCurl:: @ 81D7D8C
    attackcanceler
    attackstring
    ppreduce
    setcurled
    setbyte 0x2023fde, 18
    statbuffchange 65, BattleScript_1D7DA9
    jumpifbyte 0, 0x2023e87, 2, BattleScript_1D6BC4
    attackanimation
    waitanimation

BattleScript_1D7DA9:: @T 81D7DA9
    jump BattleScript_1D6BBC

MoveEffect_Softboiled:: @ 81D7DAE


    attackcanceler
    attackstring
    ppreduce
    setdamageasrestorehalfmaxhp BattleScript_1D7DD1, 0

BattleScript_1D7DB7:: @T 81D7DB7
    attackanimation
    waitanimation
    orword 0x2023dd0, 0x100
    graphicalhpupdate TARGET
    datahpupdate TARGET
    printstring BATTLE_TEXT_RegainedHealth
    waitmessage 64
    jump BattleScript_EndTurn

BattleScript_1D7DD1:: @T 81D7DD1
    pause 32
    printstring BATTLE_TEXT_HPFull
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_FakeOut:: @ 81D7DDF


    attackcanceler
    jumpifnotfirstturn BattleScript_1D7DF0
    setbyte 0x2023e85, 136
    jump MoveEffect_Hit

BattleScript_1D7DF0:: @T 81D7DF0
    attackstring

BattleScript_1D7DF1:: @T 81D7DF1
    ppreduce

BattleScript_ButItFailed:: @T 81D7DF2
    pause 32
    orbyte 0x2023dcc, 32
    resultmessage
    waitmessage 64
    jump BattleScript_EndTurn


BattleScript_1D7E04:: @T 81D7E04
    pause 32
    orbyte 0x2023dcc, 8
    resultmessage
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Uproar:: @ 81D7E16
    attackcanceler
    accuracycheck BattleScript_1D695E, 0
    setbyte 0x2023e85, 74
    attackstring
    jumpifsecondarytstatus USER, S_CONTINUE, BattleScript_1D7E30
    ppreduce

BattleScript_1D7E30:: @T 81D7E30
    nop3
    jump BattleScript_1D6930

MoveEffect_Stockpile:: @ 81D7E36
    attackcanceler
    attackstring
    ppreduce
    stockpile
    attackanimation
    waitanimation
    printfromtable BattleTextList_83FE56A
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_SpitUp:: @ 81D7E49
    attackcanceler
    jumpifbyte 0, 0x2023e88, 1, BattleScript_1D7E78
    attackstring
    ppreduce
    accuracycheck BattleScript_1D695E, 0
    stockpiletobasedamage BattleScript_1D7E6A
    atk6
    atk69
    jump BattleScript_1D6934

BattleScript_1D7E6A:: @T 81D7E6A
    pause 32
    printstring BATTLE_TEXT_SpitUpFail
    waitmessage 64
    jump BattleScript_EndTurn

BattleScript_1D7E78:: @T 81D7E78
    attackstring
    ppreduce
    pause 64
    stockpiletobasedamage BattleScript_1D7E6A
    resultmessage
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Swallow:: @ 81D7E8B
    attackcanceler
    attackstring
    ppreduce
    stockpiletohprecovery BattleScript_1D7E98
    jump BattleScript_1D7DB7

BattleScript_1D7E98:: @T 81D7E98
    pause 32
    printfromtable BattleTextList_83FE572
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Hail:: @ 81D7EA8
    attackcanceler
    attackstring
    ppreduce
    sethail
    jump BattleScript_1D7A14

MoveEffect_Torment:: @ 81D7EB1
    attackcanceler
    attackstring
    ppreduce
    accuracycheck BattleScript_ButItFailed, 0
    settorment BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_TormentSubject
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Flatter:: @ 81D7ECD
    attackcanceler
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, BattleScript_1D6958
    accuracycheck BattleScript_1D695E, 0
    attackstring
    ppreduce
    jumpifconfusedandattackmaxed 4, BattleScript_ButItFailed
    attackanimation
    waitanimation
    setbyte 0x2023fde, 20
    statbuffchange 1, BattleScript_1D7F10
    jumpifbyte 0, 0x2023e87, 2, BattleScript_1D7F10
    atk47
    playanimation TARGET, 1, 0x2023fd4
    printfromtable BattleTextList_83FE57C
    waitmessage 64

BattleScript_1D7F10:: @T 81D7F10
    jumpifability TARGET, ABILITY_OWN_TEMPO, BattleScript_1D9460
    jumpifhalverset TARGET, 32, BattleScript_1D8B39
    setbyte 0x2023e85, 7
    seteffecttarget
    jump BattleScript_EndTurn

MoveEffect_WillOWisp:: @ 81D7F2B
    attackcanceler
    attackstring
    ppreduce
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, BattleScript_ButItFailed
    jumpifstatus TARGET, BRN, BattleScript_1D7F91
    jumpiftype TARGET, TYPE_FIRE, BattleScript_1D7E04
    jumpifability TARGET, ABILITY_WATER_VEIL, BattleScript_1D7F77
    jumpifstatus TARGET, SLP | PSN | BRN | FRZ | PAR | TOX, BattleScript_ButItFailed
    accuracycheck BattleScript_ButItFailed, 0
    jumpifhalverset TARGET, 32, BattleScript_1D8B39
    attackanimation
    waitanimation
    setbyte 0x2023e85, 3
    seteffecttarget
    jump BattleScript_EndTurn

BattleScript_1D7F77:: @T 81D7F77
    copyarray 0x2023d6e, 0x2023d6c, 1
    setbyte 0x2023e87, 0
    callatk BattleScript_1D9420
    jump BattleScript_EndTurn

BattleScript_1D7F91:: @T 81D7F91
    pause 32
    printstring BATTLE_TEXT_AlreadyBurned
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Memento:: @ 81D7F9F
    attackcanceler
    jumpifbyte 0, 0x2023e88, 1, BattleScript_1D8026
    attackstring
    ppreduce
    jumpifattackandspecialattackcannotfall BattleScript_ButItFailed
    setuserhptozero
    attackanimation
    waitanimation
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, BattleScript_1D801B
    setbyte 0x2023fdf, 0
    playstatchangeanimation TARGET, 18, 7
    playstatchangeanimation TARGET, 2, 3
    setbyte 0x2023fde, 161
    statbuffchange 1, BattleScript_1D7FEC
    jumpifbyte 2, 0x2023e87, 1, BattleScript_1D7FEC
    printfromtable BattleTextList_83FE588
    waitmessage 64

BattleScript_1D7FEC:: @T 81D7FEC
    playstatchangeanimation TARGET, 16, 3
    setbyte 0x2023fde, 164
    statbuffchange 1, BattleScript_1D800F
    jumpifbyte 2, 0x2023e87, 1, BattleScript_1D800F
    printfromtable BattleTextList_83FE588
    waitmessage 64

BattleScript_1D800F:: @T 81D800F
    faintpokemon USER, 0, 0x0
    jump BattleScript_EndTurn

BattleScript_1D801B:: @T 81D801B
    printstring BATTLE_TEXT_NoEffect
    waitmessage 64
    jump BattleScript_1D800F

BattleScript_1D8026:: @T 81D8026
    attackstring
    ppreduce
    jumpifattackandspecialattackcannotfall BattleScript_1D802D

BattleScript_1D802D:: @T 81D802D
    setuserhptozero
    pause 64
    missmessage
    resultmessage
    waitmessage 64
    faintpokemon USER, 0, 0x0
    jump BattleScript_EndTurn

MoveEffect_Facade:: @ 81D8042
    jumpifstatus USER, PSN | BRN | PAR | TOX, BattleScript_1D8051
    jump MoveEffect_Hit

BattleScript_1D8051:: @T 81D8051
    setbyte 0x2023fd2, 2
    jump MoveEffect_Hit

MoveEffect_FocusPunch:: @ 81D805C
    attackcanceler
    jumpifnodamage BattleScript_1D6927
    ppreduce
    printstring BATTLE_TEXT_LostFocus
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Smellingsalt:: @ 81D806E
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, MoveEffect_Hit
    setbyte 0x2023e85, 164
    jumpifstatus TARGET, PAR, BattleScript_1D808D
    jump MoveEffect_Hit

BattleScript_1D808D:: @T 81D808D
    setbyte 0x2023fd2, 2
    jump MoveEffect_Hit

MoveEffect_FollowMe:: @ 81D8098
    attackcanceler
    attackstring
    ppreduce
    setforcedtarget
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_CenterAttention
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_NaturePower:: @ 81D80A9
    attackcanceler
    attackstring
    pause 32
    callterrainattack
    printstring BATTLE_TEXT_NaturePower
    waitmessage 64
    return

MoveEffect_Charge:: @ 81D80B6
    attackcanceler
    attackstring
    ppreduce
    setcharge
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_ChargingPower
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Taunt:: @ 81D80C7
    attackcanceler
    attackstring
    ppreduce
    accuracycheck BattleScript_ButItFailed, 0
    settaunt BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_TauntFell
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_HelpingHand:: @ 81D80E3
    attackcanceler
    attackstring
    ppreduce
    sethelpinghand BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_ReadyToHelp
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Trick:: @ 81D80F8
    attackcanceler
    attackstring
    ppreduce
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, BattleScript_ButItFailed
    accuracycheck BattleScript_ButItFailed, 0
    itemswap BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_SwitchedItems
    waitmessage 64
    printfromtable BattleTextList_83FE64A
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_RolePlay:: @ 81D8126
    attackcanceler
    attackstring
    ppreduce
    accuracycheck BattleScript_ButItFailed, 65535
    copyability BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_CopiedObject
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Wish:: @ 81D8142
    attackcanceler
    attackstring
    ppreduce
    atkd4 0, BattleScript_ButItFailed
    attackanimation
    waitanimation
    jump BattleScript_EndTurn

MoveEffect_Assist:: @ 81D8152
    attackcanceler
    attackstring
    assistattackselect BattleScript_1D7DF1
    attackanimation
    waitanimation
    setbyte 0x2023fdc, 0
    setbyte 0x2023fdd, 0
    jumptoattack USER

MoveEffect_Ingrain:: @ 81D8169
    attackcanceler
    attackstring
    ppreduce
    setroots BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_PlantedRoots
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Superpower:: @ 81D817E
    setbyte 0x2023e85, 229
    jump MoveEffect_Hit

MoveEffect_MagicCoat:: @ 81D8189
    attackcanceler
    setmagiccoat BattleScript_1D7DF0
    attackstring
    ppreduce
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_ShroudedItself
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Recycle:: @ 81D819E
    attackcanceler
    attackstring
    ppreduce
    recycleitem BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_FoundOne
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Revenge:: @ 81D81B3
    doubledamagedealtifdamaged
    jump MoveEffect_Hit

MoveEffect_BrickBreak:: @ 81D81B9
    attackcanceler
    accuracycheck BattleScript_1D695E, 0
    attackstring
    ppreduce
    removereflectlightscreen
    critcalc
    atk5
    atk6
    atk7
    jumpifbyte 0, 0x2023fdc, 0, BattleScript_1D81D9
    bicbyte 0x2023dcc, 9

BattleScript_1D81D9:: @T 81D81D9
    attackanimation
    waitanimation
    jumpifbyte 3, 0x2023fdc, 2, BattleScript_1D81EC
    printstring BATTLE_TEXT_BrokeWall
    waitmessage 64

BattleScript_1D81EC:: @T 81D81EC
    damagecalc2
    missmessage
    atk5c TARGET
    waitstateatk
    graphicalhpupdate TARGET
    datahpupdate TARGET
    critmessage
    waitmessage 64
    resultmessage
    waitmessage 64
    seteffectwithchancetarget
    faintpokemon TARGET, 0, 0x0
    jump BattleScript_EndTurn

MoveEffect_Yawn:: @ 81D820A

    attackcanceler
    attackstring
    ppreduce
    jumpifability TARGET, ABILITY_VITAL_SPIRIT, BattleScript_1D824B
    jumpifability TARGET, ABILITY_INSOMNIA, BattleScript_1D824B
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, BattleScript_ButItFailed
    jumpifhalverset TARGET, 32, BattleScript_1D8B39
    accuracycheck BattleScript_ButItFailed, 65535
    jumpifcannotsleep BattleScript_ButItFailed
    setyawn BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_DrowsyMade
    waitmessage 64
    jump BattleScript_EndTurn

BattleScript_1D824B:: @T 81D824B
    copyarray 0x2023fdb, 0x2023fd9, 1

BattleScript_1D8255:: @T 81D8255
    pause 32
    printstring BATTLE_TEXT_MadeIneffective2
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_KnockOff:: @ 81D8263
    setbyte 0x2023e85, 54
    jump MoveEffect_Hit

MoveEffect_Endeavor:: @ 81D826E
    attackcanceler
    attackstring
    ppreduce
    setdamagetohealthdifference BattleScript_ButItFailed
    copyarray 0x2023d54, 0x2023d50, 4
    accuracycheck BattleScript_1D6960, 0
    atk6
    jumpifbyte 4, 0x2023dcc, 41, BattleScript_1D6934
    bicbyte 0x2023dcc, 6
    copyarray 0x2023d50, 0x2023d54, 4
    atk69
    jump BattleScript_1D6934

MoveEffect_Eruption:: @ 81D82A9
    scaledamagebyhealthratio
    jump MoveEffect_Hit

MoveEffect_SkillSwap:: @ 81D82AF
    attackcanceler
    attackstring
    ppreduce
    accuracycheck BattleScript_ButItFailed, 65535
    abilityswap BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_AbilitySwap
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Imprison:: @ 81D82CB
    attackcanceler
    attackstring
    ppreduce
    imprisoneffect BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_SealedMove
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Refresh:: @ 81D82E0
    attackcanceler
    attackstring
    ppreduce
    cureifburnedparalysedorpoisoned BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_StatusNormal
    waitmessage 64
    atk98 1
    jump BattleScript_EndTurn

MoveEffect_Grudge:: @ 81D82F7
    attackcanceler
    attackstring
    ppreduce
    setgrudge BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_GrudgeBear
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_Snatch:: @ 81D830C
    attackcanceler
    setstealstatchange BattleScript_1D7DF0
    attackstring
    ppreduce
    attackanimation
    waitanimation
    pause 32
    printstring BATTLE_TEXT_AwaitMove
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_LowKick:: @ 81D8324
    attackcanceler
    attackstring
    ppreduce
    weightdamagecalculation
    accuracycheck BattleScript_1D6960, 0
    jump BattleScript_1D6930

MoveEffect_SecretPower:: @ 81D8334
    naturepowereffect
    jump MoveEffect_Hit

MoveEffect_DoubleEdge:: @ 81D833A
    setbyte 0x2023e85, 230
    jump MoveEffect_Hit

MoveEffect_TeeterDance:: @ 81D8345
    attackcanceler
    attackstring
    ppreduce
    setbyte 0x2023d6c, 0

BattleScript_1D834E:: @T 81D834E
    atk25
    setbyte 0x2023e85, 7
    jumpifarrayequal 0x2023d6b, 0x2023d6c, 1, BattleScript_1D8394
    jumpifability TARGET, ABILITY_OWN_TEMPO, BattleScript_1D83B2
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, BattleScript_1D83CE
    jumpifsecondarytstatus TARGET, S_CONFUSED, BattleScript_1D83DC
    accuracycheck BattleScript_1D83EA, 0
    jumpifhalverset TARGET, 32, BattleScript_1D83C0
    attackanimation
    waitanimation
    seteffecttarget
    resultmessage
    waitmessage 64

BattleScript_1D8394:: @T 81D8394
    setbyte 0x2023fd8, 0
    atk49 2, 16
    addbyte 0x2023d6c, 1
    jumpifarraynotequal 0x2023d6c, 0x2023bcc, 1, BattleScript_1D834E
    end

BattleScript_1D83B2:: @T 81D83B2
    pause 32
    printstring BATTLE_TEXT_PreventedConfusion
    waitmessage 64
    jump BattleScript_1D8394

BattleScript_1D83C0:: @T 81D83C0
    pause 32
    printstring BATTLE_TEXT_SafeguardActive
    waitmessage 64
    jump BattleScript_1D8394

BattleScript_1D83CE:: @T 81D83CE
    pause 32
    printstring BATTLE_TEXT_Failed
    waitmessage 64
    jump BattleScript_1D8394

BattleScript_1D83DC:: @T 81D83DC
    pause 32
    printstring BATTLE_TEXT_AlreadyConfused
    waitmessage 64
    jump BattleScript_1D8394

BattleScript_1D83EA:: @T 81D83EA
    resultmessage
    waitmessage 64
    jump BattleScript_1D8394

MoveEffect_MudSport:: @ 81D83F3
    attackcanceler
    attackstring
    ppreduce
    settypebasedhalvers BattleScript_ButItFailed
    attackanimation
    waitanimation
    printfromtable BattleTextList_83FE5E0
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_PoisonFang:: @ 81D840A
    setbyte 0x2023e85, 6
    jump MoveEffect_Hit

MoveEffect_WeatherBall:: @ 81D8415
    seteffectbyweather
    jump MoveEffect_Hit

MoveEffect_Overheat:: @ 81D841B
    setbyte 0x2023e85, 251
    jump MoveEffect_Hit

MoveEffect_Tickle:: @ 81D8426
    attackcanceler
    attackstring
    ppreduce
    jumpifstat TARGET, 2, 1, 0, BattleScript_1D843B
    jumpifstat TARGET, 0, 2, 0, BattleScript_1D8499

BattleScript_1D843B:: @T 81D843B
    accuracycheck BattleScript_ButItFailed, 0
    attackanimation
    waitanimation
    setbyte 0x2023fdf, 0
    playstatchangeanimation TARGET, 6, 5
    playstatchangeanimation TARGET, 2, 1
    setbyte 0x2023fde, 145
    statbuffchange 1, BattleScript_1D8471
    jumpifbyte 0, 0x2023e87, 2, BattleScript_1D8471
    printfromtable BattleTextList_83FE588
    waitmessage 64

BattleScript_1D8471:: @T 81D8471
    playstatchangeanimation TARGET, 4, 1
    setbyte 0x2023fde, 146
    statbuffchange 1, BattleScript_1D8494
    jumpifbyte 0, 0x2023e87, 2, BattleScript_1D8494
    printfromtable BattleTextList_83FE588
    waitmessage 64

BattleScript_1D8494:: @T 81D8494
    jump BattleScript_EndTurn

BattleScript_1D8499:: @T 81D8499
    pause 32
    orbyte 0x2023dcc, 32
    printstring BATTLE_TEXT_StatNoLower
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_CosmicPower:: @ 81D84AD
    attackcanceler
    attackstring
    ppreduce
    jumpifstat USER, 3, 2, 12, BattleScript_1D84C2
    jumpifstat USER, 0, 5, 12, BattleScript_1D85E7

BattleScript_1D84C2:: @T 81D84C2
    attackanimation
    waitanimation
    setbyte 0x2023fdf, 0
    playstatchangeanimation USER, 36, 0
    setbyte 0x2023fde, 18
    statbuffchange 65, BattleScript_1D84ED
    jumpifbyte 0, 0x2023e87, 2, BattleScript_1D84ED
    printfromtable BattleTextList_83FE57C
    waitmessage 64

BattleScript_1D84ED:: @T 81D84ED
    setbyte 0x2023fde, 21
    statbuffchange 65, BattleScript_1D850C
    jumpifbyte 0, 0x2023e87, 2, BattleScript_1D850C
    printfromtable BattleTextList_83FE57C
    waitmessage 64

BattleScript_1D850C:: @T 81D850C
    jump BattleScript_EndTurn

MoveEffect_SkyUppercut:: @ 81D8511
    orword 0x2023dd0, 0x10000
    jump MoveEffect_Hit

MoveEffect_BulkUp:: @ 81D851F
    attackcanceler
    attackstring
    ppreduce
    jumpifstat USER, 3, 1, 12, BattleScript_1D8534
    jumpifstat USER, 0, 2, 12, BattleScript_1D85E7

BattleScript_1D8534:: @T 81D8534
    attackanimation
    waitanimation
    setbyte 0x2023fdf, 0
    playstatchangeanimation USER, 6, 0
    setbyte 0x2023fde, 17
    statbuffchange 65, BattleScript_1D855F
    jumpifbyte 0, 0x2023e87, 2, BattleScript_1D855F
    printfromtable BattleTextList_83FE57C
    waitmessage 64

BattleScript_1D855F:: @T 81D855F
    setbyte 0x2023fde, 18
    statbuffchange 65, BattleScript_1D857E
    jumpifbyte 0, 0x2023e87, 2, BattleScript_1D857E
    printfromtable BattleTextList_83FE57C
    waitmessage 64

BattleScript_1D857E:: @T 81D857E
    jump BattleScript_EndTurn

MoveEffect_CalmMind:: @ 81D8583

    attackcanceler
    attackstring
    ppreduce
    jumpifstat USER, 3, 4, 12, BattleScript_1D8598
    jumpifstat USER, 0, 5, 12, BattleScript_1D85E7

BattleScript_1D8598:: @T 81D8598
    attackanimation
    waitanimation
    setbyte 0x2023fdf, 0
    playstatchangeanimation USER, 48, 0
    setbyte 0x2023fde, 20
    statbuffchange 65, BattleScript_1D85C3
    jumpifbyte 0, 0x2023e87, 2, BattleScript_1D85C3
    printfromtable BattleTextList_83FE57C
    waitmessage 64

BattleScript_1D85C3:: @T 81D85C3
    setbyte 0x2023fde, 21
    statbuffchange 65, BattleScript_1D85E2
    jumpifbyte 0, 0x2023e87, 2, BattleScript_1D85E2
    printfromtable BattleTextList_83FE57C
    waitmessage 64

BattleScript_1D85E2:: @T 81D85E2
    jump BattleScript_EndTurn

BattleScript_1D85E7:: @T 81D85E7
    pause 32
    orbyte 0x2023dcc, 32
    printstring BATTLE_TEXT_StatNoHigher
    waitmessage 64
    jump BattleScript_EndTurn

MoveEffect_DragonDance:: @ 81D85FB
    attackcanceler
    attackstring
    ppreduce
    jumpifstat USER, 3, 1, 12, BattleScript_1D8610
    jumpifstat USER, 0, 3, 12, BattleScript_1D85E7

BattleScript_1D8610:: @T 81D8610
    attackanimation
    waitanimation
    setbyte 0x2023fdf, 0
    playstatchangeanimation USER, 10, 0
    setbyte 0x2023fde, 17
    statbuffchange 65, BattleScript_1D863B
    jumpifbyte 0, 0x2023e87, 2, BattleScript_1D863B
    printfromtable BattleTextList_83FE57C
    waitmessage 64

BattleScript_1D863B:: @T 81D863B
    setbyte 0x2023fde, 19
    statbuffchange 65, BattleScript_1D865A
    jumpifbyte 0, 0x2023e87, 2, BattleScript_1D865A
    printfromtable BattleTextList_83FE57C
    waitmessage 64

BattleScript_1D865A:: @T 81D865A
    jump BattleScript_EndTurn

MoveEffect_Camouflage:: @ 81D865F
    attackcanceler
    attackstring
    ppreduce
    settypetoterrain BattleScript_ButItFailed
    attackanimation
    waitanimation
    printstring BATTLE_TEXT_TypeTransform
    waitmessage 64
    jump BattleScript_EndTurn


unk_81D8674:: @81D8674
    atk56 1
    pause 64
    atk1a 1
    atk1b 1
    printstring BATTLE_TEXT_AttackingFainted
    printstring BATTLE_TEXT_Terminator2
    return

unk_81D8684:: @81D8684
    atk56 0
    pause 64
    atk1a 0
    atk1b 0
    printstring BATTLE_TEXT_DefendingFainted
    printstring BATTLE_TEXT_Terminator2
    return

unk_81D8694:: @81D8694
    setbyte 0x2023fe0, 0
    atk23 0
    end2

unk_81D869D:: @81D869D
    atk24 BattleScript_1D87B8
    jumpifbyte 1, 0x2023e8a, 0, BattleScript_1D87B7
    jumpifword 4, 0x2022b4c, 0x8, BattleScript_1D86E6
    jumpifword 5, 0x2023dd0, 0x400000, BattleScript_1D86E6
    printstring BATTLE_TEXT_UseNext
    setbyte 0x2023e82, 0
    atk67
    jumpifbyte 0, 0x2023e83, 0, BattleScript_1D86E6
    atk72 BattleScript_1D87B7
    printstring BATTLE_TEXT_CantEscape

BattleScript_1D86E6:: @T 81D86E6
    openpartyscreen 3, BattleScript_1D87B7
    atk51 3, 2
    jumpifword 5, 0x2022b4c, 0x8, BattleScript_1D8792
    jumpifword 4, 0x2022b4c, 0x2, BattleScript_1D8792
    jumpifword 4, 0x2022b4c, 0x100, BattleScript_1D8792
    jumpifword 4, 0x2022b4c, 0x1, BattleScript_1D8792
    jumpifword 4, 0x2023dd0, 0x400000, BattleScript_1D8792
    jumpifbyte 0, 0x2023fe1, 1, BattleScript_1D8792
    jumpifcannotswitch 11, BattleScript_1D8792
    printstring BATTLE_TEXT_WillSwitch
    setbyte 0x2023e82, 0
    atk67
    jumpifbyte 0, 0x2023e83, 1, BattleScript_1D8792
    atk6e
    openpartyscreen 129, BattleScript_1D8792
    atk51 USER, 2
    jumpifbyte 0, 0x2023e82, 6, BattleScript_1D8792
    atk6b
    atk76 USER, 5
    atk74 1
    printstring 2
    atke2 USER
    waitstateatk
    atk4b
    waitstateatk
    atk61 1
    switch1 USER
    switch2 USER
    atk73 USER
    printstring 3
    atk62 1
    switch3 USER, 0
    waitstateatk
    atk52 USER
    atk6d

BattleScript_1D8792:: @T 81D8792
    atk61 3
    switch1 3
    switch2 3
    atk73 3
    printstring 3
    atk62 3
    switch3 3, 0
    waitstateatk
    atk76 USER, 7
    atk52 3
    jumpifword 4, 0x2022b4c, 0x1, BattleScript_1D87B7
    atk68

BattleScript_1D87B7:: @T 81D87B7
    end2

BattleScript_1D87B8:: @T 81D87B8
    openpartyscreen 5, BattleScript_1D87BE

BattleScript_1D87BE:: @T 81D87BE
    atk51 3, 0
    openpartyscreen 6, BattleScript_1D87EE
    atk51 3, 0

BattleScript_1D87CA:: @T 81D87CA
    atk51 3, 2
    atk61 3
    switch1 3
    switch2 3
    atk73 3
    printstring 3
    atk62 3
    switch3 3, 0
    waitstateatk
    atk52 5
    jumpifarraynotequal 0x2023d6d, 0x2023bcc, 1, BattleScript_1D87CA

BattleScript_1D87EE:: @T 81D87EE
    end2

unk_81D87EF:: @81D87EF
    printstring BATTLE_TEXT_PlayerDefeatedTrainer2
    atk53 1
    waitstateatk
    printstring BATTLE_TEXT_UnknownString
    atk5d BattleScript_1D87FD

BattleScript_1D87FD: @ 81D87FD
    printstring BATTLE_TEXT_WinningPrize
    waitmessage 64

unk_81D8803:: @81D8803
    givemoney
    pickupitemcalculation
    end2

unk_81D8806:: @81D8806
    jumpifword 4, 0x2022b4c, 0x80000, BattleScript_1D8896
    jumpifword 4, 0x2022b4c, 0x800, BattleScript_1D886E
    jumpifhalfword 0, 0x20386ae, 1024, BattleScript_1D886E
    jumpifbyte 1, 0x2023e87, 0, BattleScript_1D8876

BattleScript_1D8839:: @T 81D8839
    jumpifword 4, 0x2022b4c, 0x8, BattleScript_1D885D
    printstring BATTLE_TEXT_OutOfUsablePoke
    waitmessage 64
    atk5d BattleScript_1D886F
    printstring BATTLE_TEXT_WhitedOut
    waitmessage 64
    jump BattleScript_1D886E


BattleScript_1D885D:: @T 81D885D
    printstring 365
    waitmessage 64
    atk5d BattleScript_1D886F
    printstring 366
    waitmessage 64
BattleScript_1D886E:: @T 81D886E
    end2

BattleScript_1D886F:: @T 81D886E
    printstring 377
    waitmessage 64
    end2


BattleScript_1D8876:: @T 81D8876
    jumpiffainted USER, BattleScript_1D8884
    printstring 382
    waitmessage 64
    atk4b
    waitstateatk


BattleScript_1D8884:: @T 81D8884
    atk53 1
    waitstateatk
    printstring 383
    jumpifbyte 0, 0x2023e87, 2, BattleScript_1D8839
    end2


BattleScript_1D8896:: @T 81D8896
    atk76 USER, 8
    jumpifbyte 0, 0x2023e87, 0, BattleScript_1D88B4
    printfromtable BattleTextList_83FE65C
    waitmessage 64
    atk76 USER, 9
    waitstateatk
    atk76 USER, 10
    waitstateatk

BattleScript_1D88B4:: @T 81D88B4
    atk53 1
    waitstateatk
    printstring 383
    jumpifword 5, 0x2022b4c, 0x1, BattleScript_1D88CB
    printstring 376

BattleScript_1D88CB:: @T 81D88CB
    end2

unk_81D88CC:: @81D88CC
    printstring 5
    waitmessage 64
    atk57
    waitmessage 64
    end2

unk_81D88D7:: @81D88D7
    printstring BATTLE_TEXT_PlayerDefeatedTrainer2
    atk53 1
    waitstateatk
    jumpifword 5, 0x2022b4c, 0x80000, BattleScript_1D88FF
    printstring BATTLE_TEXT_UnknownString
    jumpifword 5, 0x2022b4c, 0x1, BattleScript_1D88FF
    printstring 375

BattleScript_1D88FF:: @T 81D88FF
    pickupitemcalculation
    end2

unk_81D8901:: @81D8901
    playanimation USER, 8, 0x0
    printstring BATTLE_TEXT_FledUsingItem
    waitmessage 64
    end2

unk_81D890F:: @81D890F
    printstring BATTLE_TEXT_FledUsingOther
    waitmessage 64
    end2

unk_81D8916:: @81D8916
    printstring BATTLE_TEXT_GotAwaySafely
    waitmessage 64
    end2

unk_81D891D:: @81D891D
    printstring BATTLE_TEXT_FledWild
    waitmessage 64
    end2

unk_81D8924:: @81D8924
    jumpifword 4, 0x2022b4c, 0x10, BattleScript_1D8936
    printstring BATTLE_TEXT_NoRunning
    end2

BattleScript_1D8936:: @T 81D8936
    printstring BATTLE_TEXT_BirchDontLeaveMe
    end2

unk_81D893A:: @81D893A
    printfromtable BattleTextList_83FE51E
    waitmessage 64
    end2

unk_81D8943:: @81D8943
    printfromtable2 BattleTextList_83FE51E
    atk44

unk_81D8949:: @81D8949
    printstring2 BATTLE_TEXT_BoxFull
    atk44

unk_81D894D:: @81D894D
    atk74 1
    printstring 2
    setbyte 0x2023fd2, 2
    jumpifword 4, 0x2022b4c, 0x1, BattleScript_1D896D
    atk26 1
    jump BattleScript_1D896F

BattleScript_1D896D:: @T 81D896D
    atk26 2

BattleScript_1D896F:: @T 81D896F
    atkba BattleScript_1D897C
    atk5f
    atkab
    callatk BattleScript_1D89AF
    atk5f

BattleScript_1D897C:: @T 81D897C
    atk27 BattleScript_1D896F
    atke2 USER
    waitstateatk
    atk4b
    waitstateatk
    atk61 1
    atk51 USER, 1
    switch1 USER
    switch2 USER
    atk73 USER
    printstring 3
    atk62 1
    switch3 USER, 0
    waitstateatk
    atk52 USER
    setbyte 0x2023fd8, 4
    atk49 1, 0
    setbyte 0x2023fd8, 15
    atk49 1, 0
    end2

BattleScript_1D89AF:: @T 81D89AF
    pause 32
    attackstring
    ppreduce
    critcalc
    atk5
    atk6
    atk7
    attackanimation
    waitanimation
    missmessage
    atk5c TARGET
    waitstateatk
    graphicalhpupdate TARGET
    datahpupdate TARGET
    critmessage
    waitmessage 64
    resultmessage
    waitmessage 64
    faintpokemon TARGET, 0, 0x0
    setbyte 0x2023fd8, 3
    atk49 2, 6
    atk76 TARGET, 4
    jumpifbyte 0, 0x2023e82, 0, BattleScript_1D89F0
    setbyte 0x2023fe0, 0
    atk23 0

BattleScript_1D89F0:: @T 81D89F0
    return

unk_81D89F1:: @81D89F1
    pause 32
    return

unk_81D89F5:: @81D89F5
    atk55 0xe100101
    attackcanceler
    setbyte 0x2023fe2, 0
    atk6c
    checkiflearnmoveinbattle BattleScript_1D8A51, BattleScript_1D8A63, 1
    jump BattleScript_1D8A1B

BattleScript_1D8A11:: @T 81D8A11
    checkiflearnmoveinbattle BattleScript_1D8A51, BattleScript_1D8A63, 0

BattleScript_1D8A1B:: @T 81D8A1B
    atk71
    printstring BATTLE_TEXT_TryingToLearnMove
    printstring BATTLE_TEXT_CantLearnMore
    printstring BATTLE_TEXT_DeleteMove
    waitstateatk
    setbyte 0x2023fe3, 0
    atk5a BattleScript_1D8A48
    printstring BATTLE_TEXT_StopLearning
    waitstateatk
    setbyte 0x2023fe3, 0
    atk5b BattleScript_1D8A1B
    printstring BATTLE_TEXT_DidNotLearn
    jump BattleScript_1D8A11

BattleScript_1D8A48:: @T 81D8A48
    printstring BATTLE_TEXT_MoveForget123
    printstring BATTLE_TEXT_DeletedMove
    printstring BATTLE_TEXT_MoveForgetAnd

BattleScript_1D8A51:: @T 81D8A51
    atk71
    atk55 0xf100101
    attackcanceler
    waitmessage 64
    atk76 USER, 6
    jump BattleScript_1D8A11

BattleScript_1D8A63:: @T 81D8A63
    return

unk_81D8A64:: @81D8A64
    printfromtable BattleTextList_83FE540
    waitmessage 64
    jumpifbyte 0, 0x2023e87, 2, BattleScript_1D8A7E
    playanimation USER, 10, 0x0

BattleScript_1D8A7E:: @T 81D8A7E
    end2

unk_81D8A7F:: @81D8A7F
    printfromtable BattleTextList_83FE534
    waitmessage 64
    atk46 1, 0x2023fd4, 0x0
    setbyte 0x2023e82, 0

BattleScript_1D8A97:: @T 81D8A97
    atk32 0x2023d6b, 0x2023bde, 0x2023e82, 1
    weatherdamage
    jumpifword 0, 0x2023d50, 0x0, BattleScript_1D8AD8
    printfromtable BattleTextList_83FE538
    waitmessage 64
    orword 0x2023dd0, 0x1100120
    missmessage
    atk5c USER
    graphicalhpupdate USER
    datahpupdate USER
    faintpokemon USER, 0, 0x0
    atk24 BattleScript_1D8AD8

BattleScript_1D8AD8:: @T 81D8AD8
    jumpifbyte 1, 0x2023e8a, 0, BattleScript_1D8AF7
    addbyte 0x2023e82, 1
    jumpifarraynotequal 0x2023e82, 0x2023bcc, 1, BattleScript_1D8A97

BattleScript_1D8AF7:: @T 81D8AF7
    bicword 0x2023dd0, 0x1100120
    end2

unk_81D8B01:: @81D8B01
    printfromtable BattleTextList_83FE53C
    waitmessage 64
    end2

unk_81D8B0A:: @81D8B0A
    printstring BATTLE_TEXT_SunStrong
    waitmessage 64
    playanimation USER, 11, 0x0
    end2

unk_81D8B18:: @81D8B18
    printstring BATTLE_TEXT_SunFaded
    waitmessage 64
    end2

unk_81D8B1F:: @81D8B1F
    printfromtable BattleTextList_83FE5FA
    waitmessage 64
    atk46 1, 0x2023fd4, 0x0
    end3

unk_81D8B32:: @81D8B32
    printstring BATTLE_TEXT_WoreOff
    waitmessage 64
    end2

BattleScript_1D8B39:: @ 81D8B39
    pause 32
    printstring BATTLE_TEXT_SafeguardActive
    waitmessage 64
    end2

unk_81D8B43:: @81D8B43
    pause 32
    printstring BATTLE_TEXT_SafeguardFaded
    waitmessage 64
    end2

unk_81D8B4D:: @81D8B4D
    playanimation USER, 14, 0x2023fd4
    orword 0x2023dd0, 0x100100
    graphicalhpupdate USER
    datahpupdate USER
    copyarray 0x2023d50, 0x2023d54, 4
    jumpifability USER, ABILITY_LIQUID_OOZE, BattleScript_1D8B7F
    manipulatedamage 0
    setbyte 0x2023e87, 3
    jump BattleScript_1D8B85

BattleScript_1D8B7F:: @T 81D8B7F
    setbyte 0x2023e87, 4

BattleScript_1D8B85:: @T 81D8B85
    orword 0x2023dd0, 0x100100
    graphicalhpupdate TARGET
    datahpupdate TARGET
    printfromtable BattleTextList_83FE558
    waitmessage 64
    faintpokemon USER, 0, 0x0
    faintpokemon TARGET, 0, 0x0
    end2

unk_81D8BA9:: @81D8BA9
    printstring BATTLE_TEXT_StoringEnergy
    waitmessage 64
    jump BattleScript_EndTurn

unk_81D8BB4:: @81D8BB4
    attackcanceler
    setbyte 0x2023e85, 12
    clearstatus USER
    printstring BATTLE_TEXT_UnleashedEnergy
    waitmessage 64
    accuracycheck BattleScript_1D6963, 0
    atk6
    bicbyte 0x2023dcc, 6
    copyarray 0x2023d50, 0x2023fc8, 4
    atk69
    setbyte 0x2023fdc, 1
    attackanimation
    waitanimation
    missmessage
    atk5c TARGET
    waitstateatk
    graphicalhpupdate TARGET
    datahpupdate TARGET
    resultmessage
    waitmessage 64
    faintpokemon TARGET, 0, 0x0
    jump BattleScript_EndTurn

unk_81D8BFC:: @81D8BFC
    attackcanceler
    setbyte 0x2023e85, 12
    clearstatus USER
    printstring BATTLE_TEXT_UnleashedEnergy
    waitmessage 64
    jump BattleScript_ButItFailed

unk_81D8C10:: @81D8C10
    attackanimation
    waitanimation
    atke2 TARGET
    atk58 TARGET
    waitstateatk
    jumpifword 4, 0x2022b4c, 0x8, BattleScript_1D8C2C
    setbyte 0x2023e8a, 5
    atkf6

BattleScript_1D8C2C:: @T 81D8C2C
    switch1 TARGET
    switch2 TARGET
    switch3 TARGET, 0
    waitstateatk
    printstring BATTLE_TEXT_DraggedOut
    atk52 TARGET
    jump BattleScript_EndTurn

unk_81D8C3E:: @81D8C3E
    pause 32
    printstring BATTLE_TEXT_MistProtect
    waitmessage 64
    return

unk_81D8C48:: @81D8C48
    printstring BATTLE_TEXT_RageBuilding
    waitmessage 64
    return

unk_81D8C4F:: @81D8C4F
    printstring BATTLE_TEXT_MoveIsDisabled
    waitmessage 64
    jump BattleScript_EndTurn

unk_81D8C5A:: @81D8C5A
    printstring2 BATTLE_TEXT_MoveIsDisabled
    atk44

unk_81D8C5E:: @81D8C5E
    printstring BATTLE_TEXT_DisabledNoMore
    waitmessage 64
    end2

unk_81D8C65:: @81D8C65
    printstring BATTLE_TEXT_EncoreEnded
    waitmessage 64
    end2

unk_81D8C6C:: @81D8C6C
    printstring BATTLE_TEXT_DestinyBondTaken
    waitmessage 64
    orword 0x2023dd0, 0x100100
    graphicalhpupdate USER
    datahpupdate USER
    faintpokemon USER, 0, 0x0
    return

unk_81D8C87:: @81D8C87
    orword 0x2023dd0, 0x100100
    graphicalhpupdate USER
    datahpupdate USER
    callatk BattleScript_1D8D2C
    faintpokemon USER, 0, 0x0
    faintpokemon USER, 1, BattleScript_1D8CA8
    return

BattleScript_1D8CA8:: @T 81D8CA8
    setbyte 0x2023fe0, 0
    atk23 1
    setbyte 0x2023fd8, 0
    atk49 0, 0
    jump unk_81D869D

unk_81D8CBE:: @81D8CBE
    orword 0x2023dd0, 0x100100
    graphicalhpupdate TARGET
    datahpupdate TARGET
    callatk BattleScript_1D8D2C
    faintpokemon TARGET, 0, 0x0
    faintpokemon TARGET, 1, BattleScript_1D8CDF
    return

BattleScript_1D8CDF:: @T 81D8CDF
    setbyte 0x2023fe0, 0
    atk23 0
    setbyte 0x2023fd8, 0
    atk49 0, 0
    jump unk_81D869D

unk_81D8CF5:: @81D8CF5

    orword 0x2023dd0, 0x100100
    graphicalhpupdate 3
    datahpupdate 3
    callatk BattleScript_1D8D2C
    faintpokemon 3, 0, 0x0
    faintpokemon 3, 1, BattleScript_1D8D16
    return

BattleScript_1D8D16:: @T 81D8D16
    setbyte 0x2023fe0, 0
    atk23 3
    setbyte 0x2023fd8, 0
    atk49 0, 0
    jump unk_81D869D

BattleScript_1D8D2C:: @T 81D8D2C
    printstring BATTLE_TEXT_SpikesHurt
    waitmessage 64
    return

unk_81D8D33:: @81D8D33
    printstring BATTLE_TEXT_PerishSongFell
    waitmessage 64
    orword 0x2023dd0, 0x100100
    graphicalhpupdate USER
    datahpupdate USER
    faintpokemon USER, 0, 0x0
    end2

unk_81D8D4E:: @81D8D4E
    printstring BATTLE_TEXT_PerishSongFell
    waitmessage 64
    end2

unk_81D8D55:: @81D8D55
    jumpifstat USER, 3, 1, 12, BattleScript_1D8D82
    jumpifstat USER, 3, 2, 12, BattleScript_1D8D82
    jumpifstat USER, 3, 3, 12, BattleScript_1D8D82
    jumpifstat USER, 3, 4, 12, BattleScript_1D8D82
    jumpifstat USER, 0, 5, 12, BattleScript_1D8DF0

BattleScript_1D8D82:: @T 81D8D82
    setbyte 0x2023fdf, 0
    playstatchangeanimation USER, 62, 0
    setbyte 0x2023fde, 17
    statbuffchange 65, BattleScript_1D8DA0
    printfromtable BattleTextList_83FE57C
    waitmessage 64

BattleScript_1D8DA0:: @T 81D8DA0
    setbyte 0x2023fde, 18
    statbuffchange 65, BattleScript_1D8DB4
    printfromtable BattleTextList_83FE57C
    waitmessage 64

BattleScript_1D8DB4:: @T 81D8DB4
    setbyte 0x2023fde, 19
    statbuffchange 65, BattleScript_1D8DC8
    printfromtable BattleTextList_83FE57C
    waitmessage 64

BattleScript_1D8DC8:: @T 81D8DC8
    setbyte 0x2023fde, 20
    statbuffchange 65, BattleScript_1D8DDC
    printfromtable BattleTextList_83FE57C
    waitmessage 64

BattleScript_1D8DDC:: @T 81D8DDC
    setbyte 0x2023fde, 21
    statbuffchange 65, BattleScript_1D8DF0
    printfromtable BattleTextList_83FE57C
    waitmessage 64

BattleScript_1D8DF0:: @T 81D8DF0
    return

unk_81D8DF1:: @81D8DF1
    breakfree
    return

unk_81D8DF3:: @81D8DF3
    printstring BATTLE_TEXT_GotFreeFrom
    waitmessage 64
    copyarray 0x2023d6c, 0x2023fdb, 1
    return

unk_81D8E04:: @81D8E04
    printstring BATTLE_TEXT_LeechShed
    waitmessage 64
    return

unk_81D8E0B:: @81D8E0B
    printstring BATTLE_TEXT_SpikesBlownAway
    waitmessage 64
    return

unk_81D8E12:: @81D8E12
    printstring BATTLE_TEXT_TookAttack
    waitmessage 64
    jumpifbyte 1, 0x2023e87, 0, BattleScript_1D8E2F
    accuracycheck BattleScript_1D8E86, 248
    jump BattleScript_1D8E36

BattleScript_1D8E2F:: @T 81D8E2F
    accuracycheck BattleScript_1D8E86, 353

BattleScript_1D8E36:: @T 81D8E36
    atk8
    jumpifbyte 1, 0x2023e87, 0, BattleScript_1D8E4E
    playanimation USER, 18, 0x0
    jump BattleScript_1D8E55

BattleScript_1D8E4E:: @T 81D8E4E
    playanimation USER, 19, 0x0

BattleScript_1D8E55:: @T 81D8E55
    missmessage
    atk5c TARGET
    waitstateatk
    graphicalhpupdate TARGET
    datahpupdate TARGET
    resultmessage
    waitmessage 64
    faintpokemon TARGET, 0, 0x0
    atk24 BattleScript_1D8E6D

BattleScript_1D8E6D:: @T 81D8E6D
    setbyte 0x2023fd8, 0
    atk49 1, 0
    setbyte 0x2023fd8, 11
    atk49 2, 14
    setbyte 0x2023dcc, 0
    end2

BattleScript_1D8E86:: @T 81D8E86
    pause 32
    setbyte 0x2023dcc, 0
    orbyte 0x2023dcc, 32
    resultmessage
    waitmessage 64
    setbyte 0x2023dcc, 0
    end2

unk_81D8EA0:: @81D8EA0
    printstring2 BATTLE_TEXT_NoMovesLeft
    atk44

unk_81D8EA4:: @81D8EA4
    printstring2 BATTLE_TEXT_NoPP1
    atk44

unk_81D8EA8:: @81D8EA8
    attackstring
    pause 32
    printstring BATTLE_TEXT_NoPP2
    waitmessage 64
    jump BattleScript_EndTurn

unk_81D8EB7:: @81D8EB7
    printstring2 BATTLE_TEXT_TormentNoUse
    atk44
    printstring BATTLE_TEXT_TormentNoUse
    waitmessage 64
    jump BattleScript_EndTurn

unk_81D8EC6:: @81D8EC6
    printstring2 BATTLE_TEXT_TauntNoUse
    atk44

unk_81D8ECA:: @81D8ECA
    printstring BATTLE_TEXT_TauntNoUse
    waitmessage 64
    jump BattleScript_EndTurn

unk_81D8ED5:: @81D8ED5
    atkd4 1, BattleScript_1D8EFC
    playanimation TARGET, 22, 0x0
    printstring BATTLE_TEXT_WishTrue
    waitmessage 64
    orword 0x2023dd0, 0x100
    graphicalhpupdate TARGET
    datahpupdate TARGET
    printstring BATTLE_TEXT_RegainedHealth
    waitmessage 64
    end2

BattleScript_1D8EFC:: @T 81D8EFC
    printstring BATTLE_TEXT_WishTrue
    waitmessage 64
    pause 32
    printstring BATTLE_TEXT_HPFull
    waitmessage 64
    end2

BattleScript_IngrainTurnHeal:: @81D8F0C
    playanimation USER, 21, 0x0
    printstring BATTLE_TEXT_AbsorbNutrients
    waitmessage 64
    orword 0x2023dd0, 0x100
    graphicalhpupdate USER
    datahpupdate USER
    end2

BattleScript_1D8F27:: @ 81D8F27
    pause 32
    printstring BATTLE_TEXT_AnchoredItself
    waitmessage 64
    jump BattleScript_EndTurn

unk_81D8F35:: @81D8F35
    setbyte 0x2023fdf, 0
    playstatchangeanimation USER, 6, 13
    playstatchangeanimation USER, 2, 9
    setbyte 0x2023fde, 145
    statbuffchange 193, BattleScript_1D8F62
    jumpifbyte 0, 0x2023e87, 2, BattleScript_1D8F62
    printfromtable BattleTextList_83FE588
    waitmessage 64

BattleScript_1D8F62:: @T 81D8F62
    playstatchangeanimation USER, 4, 9
    setbyte 0x2023fde, 146
    statbuffchange 193, BattleScript_1D8F85
    jumpifbyte 0, 0x2023e87, 2, BattleScript_1D8F85
    printfromtable BattleTextList_83FE588
    waitmessage 64

BattleScript_1D8F85:: @T 81D8F85
    return

unk_81D8F86:: @81D8F86
    playanimation TARGET, 5, 0x0
    printstring BATTLE_TEXT_KnockedOffItem
    waitmessage 64
    return

unk_81D8F94:: @81D8F94
    printstring BATTLE_TEXT_SealedNoUse
    waitmessage 64
    jump BattleScript_EndTurn

unk_81D8F9F:: @81D8F9F
    printstring2 BATTLE_TEXT_SealedNoUse
    atk44

unk_81D8FA3:: @81D8FA3
    printstring BATTLE_TEXT_GrudgeLosePP
    waitmessage 64
    return

unk_81D8FAA:: @81D8FAA
    attackstring
    ppreduce
    pause 32
    printstring BATTLE_TEXT_MagicCoatBounce
    waitmessage 64
    orword 0x2023dd0, 0x800c00
    atk76 USER, 1
    return

unk_81D8FC2:: @81D8FC2
    attackstring
    ppreduce
    snatchmove
    playanimation TARGET, 17, 0x0
    printstring BATTLE_TEXT_SnatchedMove
    waitmessage 64
    orword 0x2023dd0, 0x800c00
    atk5f
    return

unk_81D8FDD:: @81D8FDD
    printstring BATTLE_TEXT_EnduredHit
    waitmessage 64
    return

unk_81D8FE4:: @81D8FE4
    printstring BATTLE_TEXT_GrandSlam
    waitmessage 64
    return

unk_81D8FEB:: @81D8FEB
    setbyte 0x2023fdf, 0
    playstatchangeanimation USER, 16, 11
    setbyte 0x2023fde, 164
    statbuffchange 193, BattleScript_1D9014
    jumpifbyte 0, 0x2023e87, 2, BattleScript_1D9014
    printfromtable BattleTextList_83FE588
    waitmessage 64

BattleScript_1D9014:: @T 81D9014
    return

unk_81D9015:: @81D9015
    printstring BATTLE_TEXT_Terminator2
    waitmessage 1
    playanimation USER, 20, 0x0
    printstring BATTLE_TEXT_TightenFocus
    waitmessage 64
    end2

unk_81D9029:: @81D9029
    printstring BATTLE_TEXT_FastAsleep
    waitmessage 64
    statusanimation USER
    jump BattleScript_EndTurn

unk_81D9036:: @81D9036
    bicword 0x2023dd0, 0x10
    printfromtable BattleTextList_83FE56E
    waitmessage 64
    atk98 1
    return

unk_81D904A:: @81D904A
    printstring BATTLE_TEXT_UproarWoke
    waitmessage 64
    atk98 1
    end2

unk_81D9053:: @81D9053
    printstring BATTLE_TEXT_PoisonHurt
    waitmessage 64

BattleScript_1D9059:: @81D9059
    statusanimation USER

BattleScript_1D905B:: @81D905B
    orword 0x2023dd0, 0x100100
    graphicalhpupdate USER
    datahpupdate USER
    faintpokemon USER, 0, 0x0
    atk24 BattleScript_1D9074

BattleScript_1D9074:: @T 81D9074
    end2

unk_81D9075:: @81D9075
    printstring BATTLE_TEXT_BurnHurt
    waitmessage 64
    jump BattleScript_1D9059

unk_81D9080:: @81D9080
    printstring BATTLE_TEXT_FrozenSolid
    waitmessage 64
    statusanimation USER
    jump BattleScript_EndTurn

unk_81D908D:: @81D908D
    printfromtable BattleTextList_83FE5D0
    waitmessage 64
    atk98 1
    return

unk_81D9098:: @81D9098
    printstring BATTLE_TEXT_DefendingDefrosted
    waitmessage 64
    atk98 0
    return

unk_81D90A1:: @81D90A1
    printstring BATTLE_TEXT_Paralyzed3
    waitmessage 64
    statusanimation USER
    atk76 USER, 0
    jump BattleScript_EndTurn

unk_81D90B1:: @81D90B1
    printstring BATTLE_TEXT_Flinched
    waitmessage 64
    jump BattleScript_EndTurn

unk_81D90BC:: @81D90BC
    printfromtable BattleTextList_83FE566
    waitmessage 64
    end2

unk_81D90C5:: @81D90C5
    atk66 1, 1, S_CONFUSED
    printstring BATTLE_TEXT_FatigueConfuse
    waitmessage 64
    end2

unk_81D90D3:: @81D90D3
    printstring BATTLE_TEXT_Confused
    waitmessage 64
    atk65 1, 0x7
    jumpifbyte 0, 0x2023e87, 0, BattleScript_1D9115

BattleScript_1D90EA:: @T 81D90EA
    atk76 USER, 0
    atk8
    printstring BATTLE_TEXT_HurtItself
    waitmessage 64
    missmessage
    atk5c USER
    waitstateatk
    orword 0x2023dd0, 0x100100
    graphicalhpupdate USER
    datahpupdate USER
    resultmessage
    waitmessage 64
    faintpokemon USER, 0, 0x0
    jump BattleScript_EndTurn

BattleScript_1D9115:: @T 81D9115
    return

unk_81D9116:: @81D9116
    printstring BATTLE_TEXT_ConfusionSnapOut
    waitmessage 64
    return

unk_81D911D:: @81D911D
    printstring BATTLE_TEXT_PickedUpYen
    waitmessage 64
    return

unk_81D9124:: @81D9124
    playanimation USER, 6, 0x2023fd4
    printstring BATTLE_TEXT_HurtBy
    waitmessage 64
    jump BattleScript_1D905B

unk_81D9136:: @81D9136
    printstring BATTLE_TEXT_FreedFrom
    waitmessage 64
    end2

unk_81D913D:: @81D913D
    printstring BATTLE_TEXT_InLoveWith
    waitmessage 64
    atk65 1, 0xf0000
    return

unk_81D914A:: @81D914A
    printstring BATTLE_TEXT_ImmobilizedBy
    waitmessage 64
    jump BattleScript_EndTurn

unk_81D9155:: @81D9155
    printstring BATTLE_TEXT_NightmareLock
    waitmessage 64
    atk65 1, 0x8000000
    jump BattleScript_1D905B

unk_81D9166:: @81D9166
    printstring BATTLE_TEXT_CurseAfflict
    waitmessage 64
    atk65 1, 0x10000000
    jump BattleScript_1D905B

unk_81D9177:: @81D9177
    printstring BATTLE_TEXT_ParalysisHealed
    waitmessage 64
    atk98 0
    return

unk_81D9180:: @81D9180
    printstring 378
    waitmessage 64
    playanimation USER, 23, 0x0
    jump BattleScript_EndTurn

unk_81D9192:: @81D9192
    printstring 379
    playanimation USER, 24, 0x0
    jump BattleScript_EndTurn

unk_81D91A1:: @81D91A1
    pause 32
    printstring 380
    waitstateatk
    playanimation 12, 25, 0x0
    pause 32
    printstring 381
    waitmessage 64
    end2

MoveScript_81D91B9:: @ 81D91B9
	statusanimation 2
	printfromtable BattleTextList_83FE5C4
	waitmessage 64

BattleScript_1D91C3:: @ 81D91C3
	atk98 2
	waitstateatk
	return

unk_81D91C7:: @81D91C7
    statusanimation 2
    printstring BATTLE_TEXT_FellAsleep
    waitmessage 64
    atk98 2
    waitstateatk
    atk6f 2
    end2

MoveScript_81D91D5:: @ 81D91D5
	statusanimation 2
	printfromtable BattleTextList_83FE5BC
	waitmessage 64
	jump BattleScript_1D91C3

MoveScript_81D91E4:: @ 81D91E4
	statusanimation 2
	printfromtable BattleTextList_83FE5C8
	waitmessage 64
	jump BattleScript_1D91C3

MoveScript_81D91F3:: @ 81D91F3
	statusanimation 2
	printfromtable BattleTextList_83FE5CC
	waitmessage 64
	jump BattleScript_1D91C3

MoveScript_81D9202:: @ 81D9202
	statusanimation 2
	printfromtable BattleTextList_83FE5C0
	waitmessage 64
	jump BattleScript_1D91C3

MoveScript_81D9211:: @ 81D9211
	printstring BATTLE_TEXT_UproarCaused
	waitmessage 64
	return

MoveScript_81D9218:: @ 81D9218
	statusanimation 2
	printstring BATTLE_TEXT_BadlyPoisoned
	waitmessage 64
	jump BattleScript_1D91C3

MoveScript_81D9225:: @ 81D9225
	printstring BATTLE_TEXT_CoinScatter
	waitmessage 64
	return

MoveScript_81D922C:: @ 81D922C
	printfromtable BattleTextList_83FE5A0
	waitmessage 64
	return

MoveScript_81D9235:: @ 81D9235
	atk66 2, 1, S_CONFUSED
	printstring BATTLE_TEXT_BecameConfused
	waitmessage 64
	return

MoveScript_81D9243:: @ 81D9243
	jumpifhalfword 0, 0x2023d4a, 165, BattleScript_1D9256
	jumpifability USER, ABILITY_ROCK_HEAD, BattleScript_1D9270

BattleScript_1D9256: @ 81D9256
	orword 0x2023dd0, 0x100100
	graphicalhpupdate USER
	datahpupdate USER
	printstring BATTLE_TEXT_HitRecoil
	waitmessage 64
	faintpokemon USER, 0, 0x0

BattleScript_1D9270: @ 81D9270
	return

unk_81D9271:: @81D9271
    playanimation TARGET, 16, 0x0
    printstring BATTLE_TEXT_StoleSomething
    waitmessage 64
    return

unk_81D927F:: @81D927F
    pause 32
    printstring BATTLE_TEXT_RainMade
    waitstateatk
    playanimation 7, 10, 0x0
    callatk BattleScript_1D92DC
    end3

unk_81D9293:: @81D9293
    playanimation USER, 1, 0x2023fd4
    printstring BATTLE_TEXT_SpeedRisen
    waitmessage 64
    end3

unk_81D92A1:: @81D92A1
    pause 32
    printstring BATTLE_TEXT_Traced
    waitmessage 64
    end3

unk_81D92AB:: @81D92AB
    printstring BATTLE_TEXT_RestoredHPByItem
    waitmessage 64
    orword 0x2023dd0, 0x100
    graphicalhpupdate USER
    datahpupdate USER
    end3

unk_81D92BF:: @81D92BF
    pause 32
    printstring BATTLE_TEXT_WhipSandstorm
    waitstateatk
    playanimation 7, 12, 0x0
    callatk BattleScript_1D92DC
    end3

unk_81D92D3:: @81D92D3

    printstring BATTLE_TEXT_CuredProblem
    waitmessage 64
    atk98 1
    end3

BattleScript_1D92DC:: @T 81D92DC
    setbyte 0x2023fdb, 0

BattleScript_1D92E2:: @T 81D92E2
    castformswitch
    addbyte 0x2023fdb, 1
    jumpifarraynotequal 0x2023fdb, 0x2023bcc, 1, BattleScript_1D92E2
    return

unk_81D92F8:: @81D92F8
    callatk BattleScript_1D92FE
    end3

BattleScript_1D92FE:: @T 81D92FE
    actualcastformswitch
    waitstateatk
    printstring BATTLE_TEXT_Transformed2
    waitmessage 64
    return

unk_81D9307:: @81D9307
    callatk BattleScript_1D930D
    end3

BattleScript_1D930D:: @T 81D930D
    pause 32

unk_81D9310:: @81D9310
    setbyte 0x2023d6c, 0
    setbyte 0x2023fde, 145

BattleScript_1D931C:: @T 81D931C
    atke1 BattleScript_1D936A
    jumpifsecondarytstatus TARGET, S_SUBSTITUTE, BattleScript_1D935F
    jumpifability TARGET, ABILITY_CLEAR_BODY, BattleScript_1D936B
    jumpifability TARGET, ABILITY_HYPER_CUTTER, BattleScript_1D936B
    jumpifability TARGET, ABILITY_WHITE_SMOKE, BattleScript_1D936B
    statbuffchange 33, BattleScript_1D935F
    jumpifbyte 2, 0x2023e87, 1, BattleScript_1D935F
    atk47
    playanimation TARGET, 1, 0x2023fd4
    printstring BATTLE_TEXT_CutsAttack
    waitmessage 64

BattleScript_1D935F:: @T 81D935F
    addbyte 0x2023d6c, 1
    jump BattleScript_1D931C

BattleScript_1D936A:: @T 81D936A
    return

BattleScript_1D936B:: @T 81D936B
    pause 32
    printstring BATTLE_TEXT_PreventedOther
    waitmessage 64
    jump BattleScript_1D935F

unk_81D9379:: @81D9379
    pause 32
    printstring BATTLE_TEXT_SunIntensified
    waitstateatk
    playanimation 7, 11, 0x0
    callatk BattleScript_1D92DC
    end3

unk_81D938D:: @81D938D
    attackstring
    pause 32
    printstring BATTLE_TEXT_TookAttack2
    waitmessage 64
    orword 0x2023dd0, 0x400
    return

unk_81D93A1:: @81D93A1
    pause 32
    printstring BATTLE_TEXT_ProtectedBy
    pause 64
    jump BattleScript_EndTurn

unk_81D93AF:: @81D93AF
    pause 32
    printstring BATTLE_TEXT_PreventedBy
    pause 64
    jump BattleScript_EndTurn

unk_81D93BD:: @81D93BD
    ppreduce

unk_81D93BE:: @81D93BE
    attackstring
    pause 32
    orword 0x2023dd0, 0x100
    graphicalhpupdate TARGET
    datahpupdate TARGET
    printstring BATTLE_TEXT_HPRestoredUsing
    waitmessage 64
    orbyte 0x2023dcc, 8
    jump BattleScript_EndTurn

unk_81D93E0:: @81D93E0
    ppreduce

unk_81D93E1:: @81D93E1
    attackstring
    pause 32
    printstring BATTLE_TEXT_MadeUseless
    waitmessage 64
    orbyte 0x2023dcc, 8
    jump BattleScript_EndTurn

unk_81D93F6:: @81D93F6
    ppreduce

unk_81D93F7:: @81D93F7
    attackstring
    pause 32
    printfromtable BattleTextList_83FE650
    waitmessage 64
    jump BattleScript_EndTurn

BattleScript_1D9408:: @ 81D9408
    pause 32
    printstring BATTLE_TEXT_AnchorsItself
    waitmessage 64
    jump BattleScript_EndTurn

unk_81D9416:: @81D9416
    pause 32
    printstring BATTLE_TEXT_PreventedStatLoss
    waitmessage 64
    return

BattleScript_1D9420:: @81D9420
    pause 32
    printfromtable BattleTextList_83FE638
    waitmessage 64
    return

BattleScript_1D942C:: @81D942C
    pause 32
    printfromtable BattleTextList_83FE63E
    waitmessage 64
    return

BattleScript_1D9438:: @81D9438
    pause 32
    printfromtable BattleTextList_83FE644
    waitmessage 64
    return

unk_81D9444:: @81D9444
    pause 32
    printstring BATTLE_TEXT_PreventedRomance
    waitmessage 64
    jump BattleScript_EndTurn

unk_81D9452:: @81D9452
    pause 32
    printstring BATTLE_TEXT_PreventedFlinching
    waitmessage 64
    jump BattleScript_EndTurn

BattleScript_1D9460:: @T 81d9460
    pause 32
    printstring BATTLE_TEXT_PreventedConfusion
    waitmessage 64
    jump BattleScript_EndTurn

BattleScript_SoundproofProtected:: @81D946E
    attackstring
    ppreduce
    pause 32
    printstring BATTLE_TEXT_BlocksOther
    waitmessage 64
    jump BattleScript_EndTurn

BattleScript_AbilityNoSpecificStatLoss:: @81D947E
    pause 32
    printstring BATTLE_TEXT_PreventedLoss
    waitmessage 64
    setbyte 0x2023e87, 3
    return

BattleScript_NoItemSteal:: @81D948E
    pause 32
    printstring BATTLE_TEXT_MadeIneffective
    waitmessage 64
    jump BattleScript_EndTurn

BattleScript_ColorChangeActivates:: @81D949C
    printstring BATTLE_TEXT_MadeType
    waitmessage 64
    return

BattleScript_RoughSkinActivates:: @81D94A3
    orword 0x2023dd0, 0x100100
    graphicalhpupdate USER
    datahpupdate USER
    printstring BATTLE_TEXT_HurtOther
    waitmessage 64
    faintpokemon USER, 0, 0x0
    return

unk_81D94BE:: @81D94BE
    atk65 1, 0xf0000
    printstring BATTLE_TEXT_InfatuatedPoke
    waitmessage 64
    return

unk_81D94CB:: @81D94CB
    waitstateatk
    seteffectuser
    return

unk_81D94CE:: @81D94CE
    waitstateatk
    seteffecttarget
    return

unk_81D94D1:: @81D94D1
    printstring BATTLE_TEXT_CuredOfProblem
    waitmessage 64
    atk98 10
    return

unk_81D94DA:: @81D94DA
    printstring BATTLE_TEXT_IgnoredOrdersSLP
    waitmessage 64
    setbyte 0x2023fd8, 0
    atk49 2, 16
    end

unk_81D94EA:: @81D94EA
    printstring BATTLE_TEXT_IgnoredOrders
    waitmessage 64
    jumptoattack TARGET

unk_81D94F2:: @81D94F2
    printfromtable BattleTextList_83FE61A
    waitmessage 64
    setbyte 0x2023fd8, 0
    atk49 2, 16
    end

unk_81D9504:: @81D9504
    printstring BATTLE_TEXT_BeganNap
    waitmessage 64
    setbyte 0x2023e85, 65
    seteffecttarget
    setbyte 0x2023fd8, 0
    atk49 2, 16
    end

unk_81D951B:: @81D951B
    printstring BATTLE_TEXT_WontObey
    waitmessage 64
    jump BattleScript_1D90EA

unk_81D9526:: @81D9526
    playanimation TARGET, 2, 0x0
    printstring BATTLE_TEXT_SubFaded
    return

unk_81D9531:: @81D9531
    callatk unk_81D9537
    end2

unk_81D9537:: @81D9537

unk_81D9537:: @T 81D9537
    playanimation 10, 7, 0x0
    printstring BATTLE_TEXT_CuredParalysis
    waitmessage 64
    atk98 10
    removeitem 10
    return

unk_81D9549:: @81D9549
    callatk unk_81D954F
    end2

unk_81D954F:: @81D954F

unk_81D954F:: @T 81D954F
    playanimation 10, 7, 0x0
    printstring BATTLE_TEXT_CuredPoison
    waitmessage 64
    atk98 10
    removeitem 10
    return

unk_81D9561:: @81D9561
    callatk unk_81D9567
    end2

unk_81D9567:: @81D9567

unk_81D9567:: @T 81D9567
    playanimation 10, 7, 0x0
    printstring BATTLE_TEXT_CuredBurn
    waitmessage 64
    atk98 10
    removeitem 10
    return

unk_81D9579:: @81D9579
    callatk unk_81D957F
    end2

unk_81D957F:: @81D957F

unk_81D957F:: @T 81D957F
    playanimation 10, 7, 0x0
    printstring BATTLE_TEXT_CuredFreeze
    waitmessage 64
    atk98 10
    removeitem 10
    return

unk_81D9591:: @81D9591
    callatk unk_81D9597
    end2

unk_81D9597:: @81D9597

unk_81D9597:: @T 81D9597
    playanimation 10, 7, 0x0
    printstring BATTLE_TEXT_CuredSleep
    waitmessage 64
    atk98 10
    removeitem 10
    return

unk_81D95A9:: @81D95A9
    callatk unk_81D95AF
    end2

unk_81D95AF:: @81D95AF

unk_81D95AF:: @T 81D95AF
    playanimation 10, 7, 0x0
    printstring BATTLE_TEXT_CuredConfusion
    waitmessage 64
    removeitem 10
    return

unk_81D95BF:: @81D95BF
    callatk unk_81D95C5
    end2

unk_81D95C5:: @81D95C5

unk_81D95C5:: @T 81D95C5
    playanimation 10, 7, 0x0
    printfromtable BattleTextList_83FE634
    waitmessage 64
    atk98 10
    removeitem 10
    return

unk_81D95D9:: @81D95D9
    callatk unk_81D95DF
    end2

unk_81D95DF:: @81D95DF

unk_81D95DF:: @T 81D95DF
    playanimation 10, 7, 0x0
    printstring BATTLE_TEXT_RestoredStatus
    waitmessage 64
    removeitem 10
    return

unk_81D95EF:: @81D95EF
    playanimation USER, 7, 0x0
    printstring BATTLE_TEXT_RestoredHealth
    waitmessage 64
    orword 0x2023dd0, 0x100
    graphicalhpupdate USER
    datahpupdate USER
    removeitem USER
    end2

unk_81D960C:: @81D960C
    playanimation USER, 7, 0x0
    printstring BATTLE_TEXT_RestoredPP
    waitmessage 64
    removeitem USER
    end2

unk_81D961C:: @81D961C
    callatk unk_81D9622
    end2

unk_81D9622:: @T 81D9622
    playanimation USER, 7, 0x0
    printstring BATTLE_TEXT_RestoredHPLittle
    waitmessage 64
    orword 0x2023dd0, 0x100
    graphicalhpupdate USER
    datahpupdate USER
    return

unk_81D963D:: @81D963D
    printstring2 BATTLE_TEXT_ChoiceBand
    atk44

unk_81D9641:: @81D9641
    playanimation TARGET, 9, 0x0
    printstring BATTLE_TEXT_FocusSash
    waitmessage 64
    return

unk_81D964F:: @81D964F
    playanimation USER, 7, 0x0
    printstring BATTLE_TEXT_RestoredHealth
    waitmessage 64
    orword 0x2023dd0, 0x100
    graphicalhpupdate USER
    datahpupdate USER
    printstring BATTLE_TEXT_UnknownString2
    waitmessage 64
    setbyte 0x2023e85, 71
    seteffecttarget
    removeitem USER
    end2

unk_81D9679:: @81D9679
    playanimation USER, 7, 0x0
    statbuffchange 65, BattleScript_1D9686

BattleScript_1D9686:: @T 81D9686
    setbyte 0x2023e87, 4
    callatk BattleScript_1D6BD1
    removeitem USER
    end2

unk_81D9694:: @81D9694
    playanimation USER, 7, 0x0
    printstring BATTLE_TEXT_HustleUse
    waitmessage 64
    removeitem USER
    end2

unk_81D96A4:: @81D96A4
    printstring2 BATTLE_TEXT_CantUseItems
    atk44

unk_81D96A8:: @81D96A8
    printstring BATTLE_TEXT_Terminator2
    return
