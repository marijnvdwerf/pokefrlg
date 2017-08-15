    .include "asm/macros.inc"
    .include "constants/constants.inc"
    .include "asm/macros/battle_script.inc"

    .text

unk_81D99B0:: @81D99B0
    .4byte BattleScript_81D9A14
    .4byte BattleScript_81D9A14
    .4byte BattleScript_81D9A14
    .4byte BattleScript_81D9A14
    .4byte BattleScript_81D9A14
    .4byte BattleScript_81D9A3C
    .4byte BattleScript_81D9A14
    .4byte BattleScript_81D9A14
    .4byte BattleScript_81D9A14
    .4byte BattleScript_81D9A14
    .4byte BattleScript_81D9A14
    .4byte BattleScript_81D9A14
    .4byte BattleScript_81D9A14

unk_81D99E4:: @81D99E4
    .4byte BattleScript_81D9ADB
    .4byte BattleScript_81D9AE5
    .4byte BattleScript_81D9AE5
    .4byte BattleScript_81D9B14
    .4byte BattleScript_81D9B38
    .4byte BattleScript_81D9B5A

unk_81D99FC:: @81D99FC
    .4byte BattleScript_81D9B7C
    .4byte BattleScript_81D9B86

unk_81D9A04:: @81D9A04
    .4byte BattleScript_81D9BB5
    .4byte BattleScript_81D9BC5
    .4byte BattleScript_81D9BD3
    .4byte BattleScript_81D9BE1

BattleScript_81D9A14:: @ 81D9A14
	jumpifword 4, 0x2022b4c, 0x200, BattleScript_1D9A34
	jumpifword 4, 0x2022b4c, 0x10000, BattleScript_1D9A38
	printstring BATTLE_TEXT_Used1
	pokemoncatchfunction

BattleScript_1D9A34: @ 81D9A34
	printstring BATTLE_TEXT_TutorialUsed
	pokemoncatchfunction

BattleScript_1D9A38: @ 81D9A38
	printstring 371
	pokemoncatchfunction

BattleScript_81D9A3C:: @ 81D9A3C
	printstring BATTLE_TEXT_Used1
	atk98 1
	pokemoncatchfunction
	jumpifhalfword 0, 0x2023d68, 5, BattleScript_1D9A50
	atk60 11

BattleScript_1D9A50: @ 81D9A50
	printstring BATTLE_TEXT_BallCaught1
	capturesomethingf1 BattleScript_1D9A63
	printstring BATTLE_TEXT_AddedToDex
	waitstateatk
	setbyte 0x2023e82, 0
	capturesomethingf2

BattleScript_1D9A63: @ 81D9A63
	printstring BATTLE_TEXT_GiveNickname
	waitstateatk
	setbyte 0x2023e82, 0
	capturesomethingf3 BattleScript_1D9A80
	catchpoke
	printfromtable BattleTextList_83FE654
	waitmessage 64
	jump BattleScript_1D9A81

BattleScript_1D9A80: @ 81D9A80
	catchpoke

BattleScript_1D9A81: @ 81D9A81
	setbyte 0x2023e8a, 7
	activesidesomething
	printstring BATTLE_TEXT_BallCaught2
	setbyte 0x2023e8a, 7
	atk57
	activesidesomething
	printfromtable BattleTextList_83FE5F2
	waitmessage 64
	jumpifword 5, 0x2022b4c, 0x80, BattleScript_1D9AC0
	jumpifbyte 1, 0x2039994, 0, BattleScript_1D9AC0
	printstring BATTLE_TEXT_SafariOver
	waitmessage 64
	setbyte 0x2023e8a, 8

BattleScript_1D9AC0: @ 81D9AC0
	atkf6
	waitmessage 64
	printstring BATTLE_TEXT_BlockBall
	waitmessage 64
	printstring BATTLE_TEXT_DontBeAThief
	waitmessage 64
	atkf6
	waitmessage 64
	printstring BATTLE_TEXT_DodgeBall
	waitmessage 64
	atkf6

BattleScript_81D9ADB:: @ 81D9ADB
	setbyte 0x2023fd8, 15
	atk49 1, 0
	end

BattleScript_81D9AE5:: @ 81D9AE5
	printstring BATTLE_TEXT_Terminator2
	pause 48
	atk54 1
	printstring BATTLE_TEXT_Used2
	waitmessage 64
	atk75
	orword 0x2023dd0, 0x100
	graphicalhpupdate USER
	datahpupdate USER
	printstring BATTLE_TEXT_RestoredHealth
	waitmessage 64
	atk98 1
	setbyte 0x2023fd8, 15
	atk49 1, 0
	atkf6

BattleScript_81D9B14:: @ 81D9B14
	printstring BATTLE_TEXT_Terminator2
	pause 48
	atk54 1
	printstring BATTLE_TEXT_Used2
	waitmessage 64
	atk75
	printfromtable BattleTextList_83FE628
	waitmessage 64
	atk98 1
	setbyte 0x2023fd8, 15
	atk49 1, 0
	atkf6

BattleScript_81D9B38:: @ 81D9B38
	printstring BATTLE_TEXT_Terminator2
	pause 48
	atk54 1
	printstring BATTLE_TEXT_Used2
	waitmessage 64
	atk75
	printfromtable BattleTextList_83FE57C
	waitmessage 64
	setbyte 0x2023fd8, 15
	atk49 1, 0
	atkf6

BattleScript_81D9B5A:: @ 81D9B5A
	printstring BATTLE_TEXT_Terminator2
	pause 48
	atk54 1
	printstring BATTLE_TEXT_Used2
	waitmessage 64
	atk75
	printfromtable BattleTextList_83FE5AC
	waitmessage 64
	setbyte 0x2023fd8, 15
	atk49 1, 0
	atkf6

BattleScript_81D9B7C:: @ 81D9B7C
	atk54 17
	setbyte 0x2023e8a, 4
	activesidesomething

BattleScript_81D9B86:: @ 81D9B86
	atk76 USER, 11
	jumpifbyte 0, 0x2023e87, 1, BattleScript_1D9B9F
	printstring 372
	waitmessage 64
	jump BattleScript_1D9BB4

BattleScript_1D9B9F: @ 81D9B9F
	printstring 373
	waitmessage 64
	atk55 0x1760152
	datahpupdate 16
	atk76 USER, 18
	atk40 0x3a0d9800

BattleScript_1D9BB4: @ 81D9BB4
	atkf6

BattleScript_81D9BB5:: @ 81D9BB5
	printfromtable BattleTextList_83FE622
	waitmessage 64
	playanimation 12, 27, 0x0
	end2

BattleScript_81D9BC5:: @ 81D9BC5
	printstring BATTLE_TEXT_CreptCloser
	waitmessage 64
	playanimation USER, 26, 0x0
	end2

BattleScript_81D9BD3:: @ 81D9BD3
	printstring BATTLE_TEXT_CantGetCloser
	waitmessage 64
	playanimation USER, 4, 0x0
	end2

BattleScript_81D9BE1:: @ 81D9BE1
	printstring 2
	waitmessage 64
	atk4b
	waitstateatk
	atk53 0
	waitstateatk
	printstring BATTLE_TEXT_WallyBall
	waitmessage 64
	end2
