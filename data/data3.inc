kVRAMConfig_8451EBC:: @ 8451EBC
    .4byte 0x50
    .4byte 0x1049
    .4byte 0x206A
    .4byte 0x3073

kWindowTemplate_8451ECC:: @ 8451ECC
    window_template 0x00, 0x00, 0x00, 0x1E, 0x02, 0x0F, 0x03C4
    window_template 0x00, 0x00, 0x12, 0x1E, 0x02, 0x0F, 0x0388
    window_template_terminator

kBasicItem_8451EE4:: @ 8451EE4
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

kWindowTemplate_8451F54:: @ 8451F54
    window_template 0x01, 0x01, 0x02, 0x14, 0x10, 0x00, 0x0008

kWindowTemplate_8451F5C:: @ 8451F5C
    window_template 0x01, 0x15, 0x0B, 0x08, 0x06, 0x01, 0x0148

kWindowTemplate_8451F64:: @ 8451F64
    window_template 0x01, 0x15, 0x02, 0x09, 0x09, 0x00, 0x0178

kListMenuItem_8451F6C:: @ 8451F6C
    .4byte kText_8415EFB, -3
    .4byte kText_8415E95, 9
    .4byte kText_8415DE0, -3
    .4byte kText_8415DF7, 0
    .4byte kText_8415E09, 1
    .4byte kText_8415E18, 2
    .4byte kText_8415E2D, 3
    .4byte kText_8415E39, 4
    .4byte kText_8415E46, 5
    .4byte kText_8415E57, 6
    .4byte kText_8415E6D, 7
    .4byte kText_8415E7B, 8
    .4byte kText_8415E88, -3
    .4byte kText_8415EA4, 10
    .4byte kText_8415ED5, 11
    .4byte kText_8415EDF, 12
    .4byte kText_8415EED, 13
    .4byte kText_8415EB0, -3
    .4byte kText_8415EC7, -2

kListMenuTemplate_8452004:: @ 8452004
    .4byte kListMenuItem_8451F6C
    .4byte sub_8102EC0
    .4byte sub_8102F48
    .2byte 19, 9

    .incbin "baserom.gba", 0x452014, 0x8 @ unknown

kListMenuItem_845201C:: @ 845201C
    .4byte kText_8415EFB, -3
    .4byte kText_8415F0E, 9
    .4byte kText_8415F24, 14
    .4byte kText_8415DE0, -3
    .4byte kText_8415DF7, 0
    .4byte kText_8415E09, 1
    .4byte kText_8415E18, 2
    .4byte kText_8415E2D, 3
    .4byte kText_8415E39, 4
    .4byte kText_8415E46, 5
    .4byte kText_8415E57, 6
    .4byte kText_8415E6D, 7
    .4byte kText_8415E7B, 8
    .4byte kText_8415E88, -3
    .4byte kText_8415EA4, 10
    .4byte kText_8415ED5, 11
    .4byte kText_8415EDF, 12
    .4byte kText_8415EED, 13
    .4byte kText_8415EB0, -3
    .4byte kText_8415EC7, -2

kListMenuTemplate_84520BC:: @ 84520BC
    .4byte kListMenuItem_845201C
    .4byte sub_8102EC0
    .4byte sub_8102F48
    .2byte 20, 9

    .incbin "baserom.gba", 0x4520CC, 0x8 @ unknown

UNK_84520D4:: @ 84520D4
    .incbin "baserom.gba", 0x4520D4, 0x10 @ null

UNK_84520E4:: @ 84520E4
    .incbin "baserom.gba", 0x4520E4, 0x10 @ null

kPointerSet_84520F4:: @ 84520F4
    .4byte kLzGfx_84414BC, kPalette_84434A0
    .4byte kLzGfx_844112C, kPalette_8443480
    .4byte kLzGfx_8442838, kPalette_8443580
    .4byte kLzGfx_8442004, kPalette_8443520
    .4byte kLzGfx_84408E0, kPalette_8443420
    .4byte kLzGfx_8441A40, kPalette_84434E0
    .4byte kLzGfx_84424E4, kPalette_8443560
    .4byte kLzGfx_8440BD8, kPalette_8443440
    .4byte kLzGfx_8441D54, kPalette_8443500
    .4byte kLzGfx_844223C, kPalette_8443540
    .4byte kUnkGfx_8E9C16C, kUnkPal_8E9C14C
    .4byte kLzGfx_8442BC0, kPalette_84435A0
    .4byte kLzGfx_8442EF8, kPalette_84435C0
    .4byte kLzGfx_844318C, kPalette_84435E0
    .4byte kLzGfx_844223C, kPalette_8443540

kWindowTemplate_845216C:: @ 845216C
    window_template 0x01, 0x02, 0x02, 0x17, 0x10, 0x00, 0x0008

kListMenuTemplate_8452174:: @ 8452174
    .4byte kListMenuItem_8451F6C
    .4byte sub_8107AEC
    .4byte sub_8103A40
    .2byte 0, 9

    .incbin "baserom.gba", 0x452184, 0x8 @ unknown

kBasicItem_845218C:: @ 845218C
    .byte 0x00, 0x00, 0x05, 0x10, 0x00
    .byte 0x00, 0x00, 0x00, 0x05, 0x00
    .byte 0x02, 0x10, 0x01, 0x00, 0x00
    .byte 0x00, 0x07, 0x00, 0x08, 0x10
    .byte 0x00, 0x00, 0x00, 0x00, 0x0F
    .byte 0x00, 0x08, 0x10, 0x02, 0x00
    .byte 0x00, 0x00, 0xFF, 0xFF, 0xFF
    .byte 0xFF, 0xFF, 0x00, 0x00, 0x00

UNK_84521B4:: @ 84521B4
    .incbin "baserom.gba", 0x4521B4, 0x10 @ null

UNK_84521C4:: @ 84521C4
    .incbin "baserom.gba", 0x4521C4, 0x8 @ null

UNK_84521CC:: @ 84521CC
    .incbin "baserom.gba", 0x4521CC, 0x8 @ null

kWindowTemplate_84521D4:: @ 84521D4
    window_template 0x01, 0x13, 0x03, 0x08, 0x08, 0x09, 0x01A8

kWindowTemplate_84521DC:: @ 84521DC
    window_template 0x01, 0x02, 0x03, 0x0D, 0x08, 0x00, 0x01E8

kWindowTemplate_84521E4:: @ 84521E4
    window_template 0x01, 0x00, 0x0B, 0x1E, 0x07, 0x00, 0x0250

kWindowTemplate_84521EC:: @ 84521EC
    window_template 0x02, 0x01, 0x02, 0x04, 0x04, 0x0A, 0x01A8

kWindowTemplate_84521F4:: @ 84521F4
    window_template 0x02, 0x05, 0x02, 0x08, 0x03, 0x00, 0x01B8

kWindowTemplate_84521FC:: @ 84521FC
    window_template 0x02, 0x02, 0x07, 0x0A, 0x02, 0x00, 0x01D0

kWindowTemplate_8452204:: @ 8452204
    window_template 0x02, 0x12, 0x02, 0x0A, 0x02, 0x00, 0x01E4

kWindowTemplate_845220C:: @ 845220C
    window_template 0x02, 0x05, 0x05, 0x08, 0x02, 0x0B, 0x01F8

kWindowTemplate_8452214:: @ 8452214
    window_template 0x02, 0x11, 0x04, 0x0C, 0x09, 0x00, 0x0208

kWindowTemplate_845221C:: @ 845221C
    window_template 0x02, 0x0D, 0x04, 0x04, 0x03, 0x00, 0x0274

kWindowTemplate_8452224:: @ 8452224
    window_template 0x02, 0x0D, 0x07, 0x04, 0x03, 0x00, 0x0280

kWindowTemplate_845222C:: @ 845222C
    window_template 0x02, 0x0D, 0x0A, 0x04, 0x03, 0x00, 0x028C

kWindowTemplate_8452234:: @ 8452234
    window_template 0x02, 0x0D, 0x0D, 0x04, 0x04, 0x00, 0x0298

kWindowTemplate_845223C:: @ 845223C
    window_template 0x02, 0x11, 0x0D, 0x04, 0x04, 0x00, 0x02A8

kWindowTemplate_8452244:: @ 8452244
    window_template 0x02, 0x15, 0x0D, 0x04, 0x04, 0x00, 0x02B8

kWindowTemplate_845224C:: @ 845224C
    window_template 0x02, 0x19, 0x0D, 0x04, 0x04, 0x00, 0x02C8

kUnk12_8452254:: @ 8452254
    .4byte kWindowTemplate_845221C, kLzGfx_8443910
    .4byte kWindowTemplate_8452224, kLzGfx_8443988
    .4byte kWindowTemplate_845222C, kLzGfx_84439FC
    .4byte kWindowTemplate_8452234, kLzGfx_8443A78
    .4byte kWindowTemplate_845223C, kLzGfx_8443AF8
    .4byte kWindowTemplate_8452244, kLzGfx_8443BB0
    .4byte kWindowTemplate_845224C, kLzGfx_8443C54

UNK_845228C:: @ 845228C
    .incbin "baserom.gba", 0x45228C, 0x80 @ null

kUnknown_845230C:: @ 845230C
    .incbin "baserom.gba", 0x45230C, 0x4 @ null

kUnknown_8452310:: @ 8452310
    .incbin "baserom.gba", 0x452310, 0x8 @ null

kUnknown_8452318:: @ 8452318
    .incbin "baserom.gba", 0x452318, 0xC @ null

kUnknown_8452324:: @ 8452324
    .incbin "baserom.gba", 0x452324, 0x10 @ null

kPointer_8452334:: @ 8452334
    .4byte kUnknown_845230C @ 845230C
    .4byte kUnknown_8452310 @ 8452310
    .4byte kUnknown_8452318 @ 8452318
    .4byte kUnknown_8452324 @ 8452324

kPointer_8452344:: @ 8452344
    .4byte kText_8415DF7 @ 8415DF7
    .4byte kText_8415E09 @ 8415E09
    .4byte kText_8415E18 @ 8415E18
    .4byte kText_8415E2D @ 8415E2D
    .4byte kText_8415E39 @ 8415E39
    .4byte kText_8415E46 @ 8415E46
    .4byte kText_8415E57 @ 8415E57
    .4byte kText_8415E6D @ 8415E6D
    .4byte kText_8415E7B @ 8415E7B

kPalette_8452368:: @ 8452368
    .incbin "baserom.gba", 0x452368, 0x20

kBasicItem_8452388:: @ 8452388
    .byte 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E
    .byte 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E
    .byte 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E
    .byte 0x05, 0x0B, 0x11, 0x17, 0x1D, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E
    .byte 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E
    .byte 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E
    .byte 0x02, 0x05, 0x08, 0x0B, 0x0E, 0x11, 0x14, 0x17, 0x1A, 0x1D
    .byte 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E
    .byte 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E
    .byte 0x02, 0x03, 0x05, 0x07, 0x09, 0x0B, 0x0D, 0x0F, 0x11, 0x13
    .byte 0x15, 0x17, 0x19, 0x1B, 0x1D, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E
    .byte 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E
    .byte 0x02, 0x04, 0x05, 0x07, 0x08, 0x0A, 0x0B, 0x0D, 0x0E, 0x10
    .byte 0x11, 0x13, 0x14, 0x16, 0x17, 0x19, 0x1A, 0x1C, 0x1D, 0x1E
    .byte 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E
    .byte 0x01, 0x02, 0x03, 0x04, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C
    .byte 0x0D, 0x0F, 0x10, 0x11, 0x13, 0x14, 0x15, 0x17, 0x18, 0x19
    .byte 0x1B, 0x1C, 0x1D, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E
    .byte 0x01, 0x02, 0x03, 0x04, 0x05, 0x07, 0x08, 0x09, 0x0A, 0x0B
    .byte 0x0C, 0x0D, 0x0E, 0x0F, 0x10, 0x11, 0x12, 0x14, 0x15, 0x16
    .byte 0x17, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1E, 0x1E, 0x1E
    .byte 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0B
    .byte 0x0C, 0x0D, 0x0E, 0x0F, 0x10, 0x11, 0x12, 0x13, 0x15, 0x16
    .byte 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1E, 0x1E
    .byte 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A
    .byte 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10, 0x11, 0x12, 0x13, 0x14
    .byte 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E
    .byte 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09
    .byte 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10, 0x11, 0x12, 0x13
    .byte 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D

UNK_84524B4:: @ 84524B4
    .incbin "baserom.gba", 0x4524B4, 0x10 @ null

UNK_84524C4:: @ 84524C4
    .incbin "baserom.gba", 0x4524C4, 0xC @ null

kSpecies_84524D0:: @ 84524D0
    .2byte SPECIES_RATTATA
    .2byte SPECIES_RATICATE
    .2byte SPECIES_SENTRET
    .2byte SPECIES_FURRET

kSpecies_84524D8:: @ 84524D8
    .2byte SPECIES_ZIGZAGOON
    .2byte SPECIES_LINOONE
    .2byte SPECIES_POOCHYENA
    .2byte SPECIES_MIGHTYENA

kSpecies_84524E0:: @ 84524E0
    .2byte SPECIES_NIDORAN_F
    .2byte SPECIES_NIDORINA
    .2byte SPECIES_NIDOQUEEN

kSpecies_84524E6:: @ 84524E6
    .2byte SPECIES_NIDORAN_M
    .2byte SPECIES_NIDORINO
    .2byte SPECIES_NIDOKING

kSpecies_84524EC:: @ 84524EC
    .2byte SPECIES_DODUO
    .2byte SPECIES_DODRIO
    .2byte SPECIES_TAILLOW
    .2byte SPECIES_SWELLOW

kSpecies_84524F4:: @ 84524F4
    .2byte SPECIES_TANGELA
    .2byte SPECIES_ROSELIA
    .2byte SPECIES_SUNKERN
    .2byte SPECIES_SUNFLORA

kSpecies_84524FC:: @ 84524FC
    .2byte SPECIES_HOPPIP
    .2byte SPECIES_SKIPLOOM
    .2byte SPECIES_JUMPLUFF

kSpecies_8452502:: @ 8452502
    .2byte SPECIES_ODDISH
    .2byte SPECIES_GLOOM
    .2byte SPECIES_VILEPLUME
    .2byte SPECIES_BELLOSSOM

kSpecies_845250A:: @ 845250A
    .2byte SPECIES_EKANS
    .2byte SPECIES_ARBOK

kSpecies_845250E:: @ 845250E
    .2byte SPECIES_IGGLYBUFF
    .2byte SPECIES_JIGGLYPUFF
    .2byte SPECIES_WIGGLYTUFF

kSpecies_8452514:: @ 8452514
    .2byte SPECIES_MAREEP
    .2byte SPECIES_FLAAFFY
    .2byte SPECIES_AMPHAROS

kSpecies_845251A:: @ 845251A
    .2byte SPECIES_FARFETCHD
    .2byte SPECIES_LICKITUNG

kSpecies_845251E:: @ 845251E
    .2byte SPECIES_SCYTHER
    .2byte SPECIES_SCIZOR

kSpecies_8452522:: @ 8452522
    .2byte SPECIES_DROWZEE
    .2byte SPECIES_HYPNO
    .2byte SPECIES_GULPIN
    .2byte SPECIES_SWALOT

kSpecies_845252A:: @ 845252A
    .2byte SPECIES_KANGASKHAN
    .2byte SPECIES_GIRAFARIG

kSpecies_845252E:: @ 845252E
    .2byte SPECIES_TAUROS
    .2byte SPECIES_MILTANK

kSpecies_8452532:: @ 8452532
    .2byte SPECIES_VULPIX
    .2byte SPECIES_NINETALES
    .2byte SPECIES_PONYTA
    .2byte SPECIES_RAPIDASH

kSpecies_845253A:: @ 845253A
    .2byte SPECIES_ELEKID
    .2byte SPECIES_ELECTABUZZ
    .2byte SPECIES_ELECTRIKE
    .2byte SPECIES_MANECTRIC

kSpecies_8452542:: @ 8452542
    .2byte SPECIES_ZANGOOSE
    .2byte SPECIES_SEVIPER

kSpecies_8452546:: @ 8452546
    .2byte SPECIES_PLUSLE
    .2byte SPECIES_MINUN

kSpecies_845254A:: @ 845254A
    .2byte SPECIES_GROWLITHE
    .2byte SPECIES_ARCANINE

kSpecies_845254E:: @ 845254E
    .2byte SPECIES_CASTFORM
    .2byte SPECIES_CHIMECHO

kSpecies_8452552:: @ 8452552
    .2byte SPECIES_BULBASAUR
    .2byte SPECIES_IVYSAUR
    .2byte SPECIES_VENUSAUR

kSpecies_8452558:: @ 8452558
    .2byte SPECIES_CHIKORITA
    .2byte SPECIES_BAYLEEF
    .2byte SPECIES_MEGANIUM

kSpecies_845255E:: @ 845255E
    .2byte SPECIES_CYNDAQUIL
    .2byte SPECIES_QUILAVA
    .2byte SPECIES_TYPHLOSION

kSpecies_8452564:: @ 8452564
    .2byte SPECIES_TORCHIC
    .2byte SPECIES_COMBUSKEN
    .2byte SPECIES_BLAZIKEN

kSpecies_845256A:: @ 845256A
    .2byte SPECIES_RAIKOU
    .2byte SPECIES_ENTEI
    .2byte SPECIES_SUICUNE

kSpecies_8452570:: @ 8452570
    .2byte SPECIES_CATERPIE
    .2byte SPECIES_METAPOD
    .2byte SPECIES_BUTTERFREE

kSpecies_8452576:: @ 8452576
    .2byte SPECIES_WEEDLE
    .2byte SPECIES_KAKUNA
    .2byte SPECIES_BEEDRILL

kSpecies_845257C:: @ 845257C
    .2byte SPECIES_WURMPLE
    .2byte SPECIES_SILCOON
    .2byte SPECIES_BEAUTIFLY

kSpecies_8452582:: @ 8452582
    .2byte SPECIES_CASCOON
    .2byte SPECIES_DUSTOX

kSpecies_8452586:: @ 8452586
    .2byte SPECIES_PIDGEY
    .2byte SPECIES_PIDGEOTTO
    .2byte SPECIES_PIDGEOT

kSpecies_845258C:: @ 845258C
    .2byte SPECIES_HOOTHOOT
    .2byte SPECIES_NOCTOWL
    .2byte SPECIES_NATU
    .2byte SPECIES_XATU

kSpecies_8452594:: @ 8452594
    .2byte SPECIES_PICHU
    .2byte SPECIES_PIKACHU
    .2byte SPECIES_RAICHU

kSpecies_845259A:: @ 845259A
    .2byte SPECIES_BELLSPROUT
    .2byte SPECIES_WEEPINBELL
    .2byte SPECIES_VICTREEBEL

kSpecies_84525A0:: @ 84525A0
    .2byte SPECIES_PARAS
    .2byte SPECIES_PARASECT
    .2byte SPECIES_SHROOMISH
    .2byte SPECIES_BRELOOM

kSpecies_84525A8:: @ 84525A8
    .2byte SPECIES_SEEDOT
    .2byte SPECIES_NUZLEAF
    .2byte SPECIES_SHIFTRY

kSpecies_84525AE:: @ 84525AE
    .2byte SPECIES_VENONAT
    .2byte SPECIES_VENOMOTH
    .2byte SPECIES_YANMA

kSpecies_84525B4:: @ 84525B4
    .2byte SPECIES_LEDYBA
    .2byte SPECIES_LEDIAN
    .2byte SPECIES_SPINARAK
    .2byte SPECIES_ARIADOS

kSpecies_84525BC:: @ 84525BC
    .2byte SPECIES_NINCADA
    .2byte SPECIES_NINJASK
    .2byte SPECIES_SHEDINJA

kSpecies_84525C2:: @ 84525C2
    .2byte SPECIES_VOLBEAT
    .2byte SPECIES_ILLUMISE

kSpecies_84525C6:: @ 84525C6
    .2byte SPECIES_PINECO
    .2byte SPECIES_FORRETRESS

kSpecies_84525CA:: @ 84525CA
    .2byte SPECIES_SLAKOTH
    .2byte SPECIES_VIGOROTH
    .2byte SPECIES_SLAKING

kSpecies_84525D0:: @ 84525D0
    .2byte SPECIES_SKITTY
    .2byte SPECIES_DELCATTY

kSpecies_84525D4:: @ 84525D4
    .2byte SPECIES_MURKROW
    .2byte SPECIES_SNEASEL

kSpecies_84525D8:: @ 84525D8
    .2byte SPECIES_EXEGGCUTE
    .2byte SPECIES_EXEGGUTOR
    .2byte SPECIES_SUDOWOODO

kSpecies_84525DE:: @ 84525DE
    .2byte SPECIES_AIPOM
    .2byte SPECIES_STANTLER
    .2byte SPECIES_KECLEON

kSpecies_84525E4:: @ 84525E4
    .2byte SPECIES_PINSIR
    .2byte SPECIES_HERACROSS

kSpecies_84525E8:: @ 84525E8
    .2byte SPECIES_SWABLU
    .2byte SPECIES_ALTARIA
    .2byte SPECIES_TROPIUS

kSpecies_84525EE:: @ 84525EE
    .2byte SPECIES_DUSKULL
    .2byte SPECIES_DUSCLOPS

kSpecies_84525F2:: @ 84525F2
    .2byte SPECIES_TOGEPI
    .2byte SPECIES_TOGETIC

kSpecies_84525F6:: @ 84525F6
    .2byte SPECIES_TREECKO
    .2byte SPECIES_GROVYLE
    .2byte SPECIES_SCEPTILE

kSpecies_84525FC:: @ 84525FC
    .2byte SPECIES_CELEBI

kSpecies_84525FE:: @ 84525FE
    .2byte SPECIES_GOLDEEN
    .2byte SPECIES_SEAKING

kSpecies_8452602:: @ 8452602
    .2byte SPECIES_MAGIKARP
    .2byte SPECIES_GYARADOS
    .2byte SPECIES_KRABBY
    .2byte SPECIES_KINGLER

kSpecies_845260A:: @ 845260A
    .2byte SPECIES_CORPHISH
    .2byte SPECIES_CRAWDAUNT
    .2byte SPECIES_BARBOACH
    .2byte SPECIES_WHISCASH

kSpecies_8452612:: @ 8452612
    .2byte SPECIES_LOTAD
    .2byte SPECIES_LOMBRE
    .2byte SPECIES_LUDICOLO

kSpecies_8452618:: @ 8452618
    .2byte SPECIES_SURSKIT
    .2byte SPECIES_MASQUERAIN

kSpecies_845261C:: @ 845261C
    .2byte SPECIES_PSYDUCK
    .2byte SPECIES_GOLDUCK
    .2byte SPECIES_WOOPER
    .2byte SPECIES_QUAGSIRE

kSpecies_8452624:: @ 8452624
    .2byte SPECIES_POLIWAG
    .2byte SPECIES_POLIWHIRL
    .2byte SPECIES_POLIWRATH
    .2byte SPECIES_POLITOED

kSpecies_845262C:: @ 845262C
    .2byte SPECIES_AZURILL
    .2byte SPECIES_MARILL
    .2byte SPECIES_AZUMARILL

kSpecies_8452632:: @ 8452632
    .2byte SPECIES_SLOWPOKE
    .2byte SPECIES_SLOWBRO
    .2byte SPECIES_SLOWKING

kSpecies_8452638:: @ 8452638
    .2byte SPECIES_FEEBAS
    .2byte SPECIES_MILOTIC

kSpecies_845263C:: @ 845263C
    .2byte SPECIES_ANORITH
    .2byte SPECIES_ARMALDO

kSpecies_8452640:: @ 8452640
    .2byte SPECIES_DRATINI
    .2byte SPECIES_DRAGONAIR
    .2byte SPECIES_DRAGONITE

kSpecies_8452646:: @ 8452646
    .2byte SPECIES_SQUIRTLE
    .2byte SPECIES_WARTORTLE
    .2byte SPECIES_BLASTOISE

kSpecies_845264C:: @ 845264C
    .2byte SPECIES_TOTODILE
    .2byte SPECIES_CROCONAW
    .2byte SPECIES_FERALIGATR

kSpecies_8452652:: @ 8452652
    .2byte SPECIES_MUDKIP
    .2byte SPECIES_MARSHTOMP
    .2byte SPECIES_SWAMPERT

kSpecies_8452658:: @ 8452658
    .2byte SPECIES_LATIAS
    .2byte SPECIES_LATIOS

kSpecies_845265C:: @ 845265C
    .2byte SPECIES_TENTACOOL
    .2byte SPECIES_TENTACRUEL

kSpecies_8452660:: @ 8452660
    .2byte SPECIES_WINGULL
    .2byte SPECIES_PELIPPER

kSpecies_8452664:: @ 8452664
    .2byte SPECIES_STARYU
    .2byte SPECIES_STARMIE

kSpecies_8452668:: @ 8452668
    .2byte SPECIES_CHINCHOU
    .2byte SPECIES_LANTURN
    .2byte SPECIES_REMORAID
    .2byte SPECIES_OCTILLERY

kSpecies_8452670:: @ 8452670
    .2byte SPECIES_SHELLDER
    .2byte SPECIES_CLOYSTER

kSpecies_8452674:: @ 8452674
    .2byte SPECIES_CLAMPERL
    .2byte SPECIES_HUNTAIL
    .2byte SPECIES_GOREBYSS

kSpecies_845267A:: @ 845267A
    .2byte SPECIES_QWILFISH
    .2byte SPECIES_CORSOLA
    .2byte SPECIES_MANTINE
    .2byte SPECIES_LUVDISC

kSpecies_8452682:: @ 8452682
    .2byte SPECIES_SEEL
    .2byte SPECIES_DEWGONG

kSpecies_8452686:: @ 8452686
    .2byte SPECIES_SPHEAL
    .2byte SPECIES_SEALEO
    .2byte SPECIES_WALREIN

kSpecies_845268C:: @ 845268C
    .2byte SPECIES_CARVANHA
    .2byte SPECIES_SHARPEDO
    .2byte SPECIES_WAILMER
    .2byte SPECIES_WAILORD

kSpecies_8452694:: @ 8452694
    .2byte SPECIES_HORSEA
    .2byte SPECIES_SEADRA
    .2byte SPECIES_KINGDRA

kSpecies_845269A:: @ 845269A
    .2byte SPECIES_RELICANTH

kSpecies_845269C:: @ 845269C
    .2byte SPECIES_LAPRAS

kSpecies_845269E:: @ 845269E
    .2byte SPECIES_OMANYTE
    .2byte SPECIES_OMASTAR
    .2byte SPECIES_KABUTO
    .2byte SPECIES_KABUTOPS

kSpecies_84526A6:: @ 84526A6
    .2byte SPECIES_LILEEP
    .2byte SPECIES_CRADILY

kSpecies_84526AA:: @ 84526AA
    .2byte SPECIES_KYOGRE

kSpecies_84526AC:: @ 84526AC
    .2byte SPECIES_ZUBAT
    .2byte SPECIES_GOLBAT
    .2byte SPECIES_CROBAT

kSpecies_84526B2:: @ 84526B2
    .2byte SPECIES_DIGLETT
    .2byte SPECIES_DUGTRIO
    .2byte SPECIES_ONIX
    .2byte SPECIES_STEELIX

kSpecies_84526BA:: @ 84526BA
    .2byte SPECIES_SWINUB
    .2byte SPECIES_PILOSWINE
    .2byte SPECIES_SNORUNT
    .2byte SPECIES_GLALIE

kSpecies_84526C2:: @ 84526C2
    .2byte SPECIES_WHISMUR
    .2byte SPECIES_LOUDRED
    .2byte SPECIES_EXPLOUD

kSpecies_84526C8:: @ 84526C8
    .2byte SPECIES_MISDREAVUS
    .2byte SPECIES_DUNSPARCE
    .2byte SPECIES_NOSEPASS

kSpecies_84526CE:: @ 84526CE
    .2byte SPECIES_SABLEYE
    .2byte SPECIES_MAWILE

kSpecies_84526D2:: @ 84526D2
    .2byte SPECIES_GASTLY
    .2byte SPECIES_HAUNTER
    .2byte SPECIES_GENGAR

kSpecies_84526D8:: @ 84526D8
    .2byte SPECIES_WYNAUT
    .2byte SPECIES_WOBBUFFET

kSpecies_84526DC:: @ 84526DC
    .2byte SPECIES_LUNATONE
    .2byte SPECIES_SOLROCK

kSpecies_84526E0:: @ 84526E0
    .2byte SPECIES_REGIROCK
    .2byte SPECIES_REGICE
    .2byte SPECIES_REGISTEEL

kSpecies_84526E6:: @ 84526E6
    .2byte SPECIES_GEODUDE
    .2byte SPECIES_GRAVELER
    .2byte SPECIES_GOLEM

kSpecies_84526EC:: @ 84526EC
    .2byte SPECIES_MANKEY
    .2byte SPECIES_PRIMEAPE
    .2byte SPECIES_SPOINK
    .2byte SPECIES_GRUMPIG

kSpecies_84526F4:: @ 84526F4
    .2byte SPECIES_MACHOP
    .2byte SPECIES_MACHOKE
    .2byte SPECIES_MACHAMP

kSpecies_84526FA:: @ 84526FA
    .2byte SPECIES_CLEFFA
    .2byte SPECIES_CLEFAIRY
    .2byte SPECIES_CLEFABLE

kSpecies_8452700:: @ 8452700
    .2byte SPECIES_CUBONE
    .2byte SPECIES_MAROWAK

kSpecies_8452704:: @ 8452704
    .2byte SPECIES_SLUGMA
    .2byte SPECIES_MAGCARGO
    .2byte SPECIES_NUMEL
    .2byte SPECIES_CAMERUPT

kSpecies_845270C:: @ 845270C
    .2byte SPECIES_MAKUHITA
    .2byte SPECIES_HARIYAMA
    .2byte SPECIES_MEDITITE
    .2byte SPECIES_MEDICHAM

kSpecies_8452714:: @ 8452714
    .2byte SPECIES_SHUCKLE
    .2byte SPECIES_TEDDIURSA
    .2byte SPECIES_URSARING
    .2byte SPECIES_DELIBIRD

kSpecies_845271C:: @ 845271C
    .2byte SPECIES_GLIGAR
    .2byte SPECIES_SPINDA

kSpecies_8452720:: @ 8452720
    .2byte SPECIES_MAGBY
    .2byte SPECIES_MAGMAR
    .2byte SPECIES_TORKOAL

kSpecies_8452726:: @ 8452726
    .2byte SPECIES_ARON
    .2byte SPECIES_LAIRON
    .2byte SPECIES_AGGRON

kSpecies_845272C:: @ 845272C
    .2byte SPECIES_LARVITAR
    .2byte SPECIES_PUPITAR
    .2byte SPECIES_TYRANITAR

kSpecies_8452732:: @ 8452732
    .2byte SPECIES_SNORLAX

kSpecies_8452734:: @ 8452734
    .2byte SPECIES_ABSOL

kSpecies_8452736:: @ 8452736
    .2byte SPECIES_AERODACTYL

kSpecies_8452738:: @ 8452738
    .2byte SPECIES_CHARMANDER
    .2byte SPECIES_CHARMELEON
    .2byte SPECIES_CHARIZARD

kSpecies_845273E:: @ 845273E
    .2byte SPECIES_JIRACHI

kSpecies_8452740:: @ 8452740
    .2byte SPECIES_SPEAROW
    .2byte SPECIES_FEAROW

kSpecies_8452744:: @ 8452744
    .2byte SPECIES_SANDSHREW
    .2byte SPECIES_SANDSLASH
    .2byte SPECIES_RHYHORN
    .2byte SPECIES_RHYDON

kSpecies_845274C:: @ 845274C
    .2byte SPECIES_MAGNEMITE
    .2byte SPECIES_MAGNETON

kSpecies_8452750:: @ 8452750
    .2byte SPECIES_HOUNDOUR
    .2byte SPECIES_HOUNDOOM
    .2byte SPECIES_PHANPY
    .2byte SPECIES_DONPHAN

kSpecies_8452758:: @ 8452758
    .2byte SPECIES_CACNEA
    .2byte SPECIES_CACTURNE

kSpecies_845275C:: @ 845275C
    .2byte SPECIES_TRAPINCH
    .2byte SPECIES_VIBRAVA
    .2byte SPECIES_FLYGON

kSpecies_8452762:: @ 8452762
    .2byte SPECIES_SKARMORY

kSpecies_8452764:: @ 8452764
    .2byte SPECIES_BALTOY
    .2byte SPECIES_CLAYDOL

kSpecies_8452768:: @ 8452768
    .2byte SPECIES_BAGON
    .2byte SPECIES_SHELGON
    .2byte SPECIES_SALAMENCE

kSpecies_845276E:: @ 845276E
    .2byte SPECIES_BELDUM
    .2byte SPECIES_METANG
    .2byte SPECIES_METAGROSS

kSpecies_8452774:: @ 8452774
    .2byte SPECIES_GROUDON

kSpecies_8452776:: @ 8452776
    .2byte SPECIES_MEOWTH
    .2byte SPECIES_PERSIAN
    .2byte SPECIES_SNUBBULL
    .2byte SPECIES_GRANBULL

kSpecies_845277E:: @ 845277E
    .2byte SPECIES_GRIMER
    .2byte SPECIES_MUK
    .2byte SPECIES_KOFFING
    .2byte SPECIES_WEEZING

kSpecies_8452786:: @ 8452786
    .2byte SPECIES_SHUPPET
    .2byte SPECIES_BANETTE

kSpecies_845278A:: @ 845278A
    .2byte SPECIES_ABRA
    .2byte SPECIES_KADABRA
    .2byte SPECIES_ALAKAZAM

kSpecies_8452790:: @ 8452790
    .2byte SPECIES_RALTS
    .2byte SPECIES_KIRLIA
    .2byte SPECIES_GARDEVOIR

kSpecies_8452796:: @ 8452796
    .2byte SPECIES_SMOOCHUM
    .2byte SPECIES_JYNX
    .2byte SPECIES_MR_MIME
    .2byte SPECIES_SMEARGLE

kSpecies_845279E:: @ 845279E
    .2byte SPECIES_TYROGUE
    .2byte SPECIES_HITMONLEE
    .2byte SPECIES_HITMONCHAN
    .2byte SPECIES_HITMONTOP

kSpecies_84527A6:: @ 84527A6
    .2byte SPECIES_CHANSEY
    .2byte SPECIES_BLISSEY

kSpecies_84527AA:: @ 84527AA
    .2byte SPECIES_VOLTORB
    .2byte SPECIES_ELECTRODE
    .2byte SPECIES_PORYGON
    .2byte SPECIES_PORYGON2

kSpecies_84527B2:: @ 84527B2
    .2byte SPECIES_DITTO

kSpecies_84527B4:: @ 84527B4
    .2byte SPECIES_EEVEE
    .2byte SPECIES_VAPOREON
    .2byte SPECIES_JOLTEON
    .2byte SPECIES_FLAREON

kSpecies_84527BC:: @ 84527BC
    .2byte SPECIES_ESPEON
    .2byte SPECIES_UMBREON

kSpecies_84527C0:: @ 84527C0
    .2byte SPECIES_UNOWN

kSpecies_84527C2:: @ 84527C2
    .2byte SPECIES_ARTICUNO
    .2byte SPECIES_ZAPDOS
    .2byte SPECIES_MOLTRES

kSpecies_84527C8:: @ 84527C8
    .2byte SPECIES_LUGIA

kSpecies_84527CA:: @ 84527CA
    .2byte SPECIES_HO_OH

kSpecies_84527CC:: @ 84527CC
    .2byte SPECIES_RAYQUAZA

kSpecies_84527CE:: @ 84527CE
    .2byte SPECIES_DEOXYS

kSpecies_84527D0:: @ 84527D0
    .2byte SPECIES_MEWTWO

kSpecies_84527D2:: @ 84527D2
    .2byte SPECIES_MEW

kUnk3b_84527D4:: @ 84527D4
    .4byte kSpecies_84524D0, 4
    .4byte kSpecies_84524D8, 4
    .4byte kSpecies_84524E0, 3
    .4byte kSpecies_84524E6, 3
    .4byte kSpecies_84524EC, 4
    .4byte kSpecies_84524F4, 4
    .4byte kSpecies_84524FC, 3
    .4byte kSpecies_8452502, 4
    .4byte kSpecies_845250A, 2
    .4byte kSpecies_845250E, 3
    .4byte kSpecies_8452514, 3
    .4byte kSpecies_845251A, 2
    .4byte kSpecies_845251E, 2
    .4byte kSpecies_8452522, 4
    .4byte kSpecies_845252A, 2
    .4byte kSpecies_845252E, 2
    .4byte kSpecies_8452532, 4
    .4byte kSpecies_845253A, 4
    .4byte kSpecies_8452542, 2
    .4byte kSpecies_8452546, 2
    .4byte kSpecies_845254A, 2
    .4byte kSpecies_845254E, 2
    .4byte kSpecies_8452552, 3
    .4byte kSpecies_8452558, 3
    .4byte kSpecies_845255E, 3
    .4byte kSpecies_8452564, 3
    .4byte kSpecies_845256A, 3

kUnk3b_84528AC:: @ 84528AC
    .4byte kSpecies_8452570, 3
    .4byte kSpecies_8452576, 3
    .4byte kSpecies_845257C, 3
    .4byte kSpecies_8452582, 2
    .4byte kSpecies_8452586, 3
    .4byte kSpecies_845258C, 4
    .4byte kSpecies_8452594, 3
    .4byte kSpecies_845259A, 3
    .4byte kSpecies_84525A0, 4
    .4byte kSpecies_84525A8, 3
    .4byte kSpecies_84525AE, 3
    .4byte kSpecies_84525B4, 4
    .4byte kSpecies_84525BC, 3
    .4byte kSpecies_84525C2, 2
    .4byte kSpecies_84525C6, 2
    .4byte kSpecies_84525CA, 3
    .4byte kSpecies_84525D0, 2
    .4byte kSpecies_84525D4, 2
    .4byte kSpecies_84525D8, 3
    .4byte kSpecies_84525DE, 3
    .4byte kSpecies_84525E4, 2
    .4byte kSpecies_84525E8, 3
    .4byte kSpecies_84525EE, 2
    .4byte kSpecies_84525F2, 2
    .4byte kSpecies_84525F6, 3
    .4byte kSpecies_84525FC, 1

kUnk3b_845297C:: @ 845297C
    .4byte kSpecies_84525FE, 2
    .4byte kSpecies_8452602, 4
    .4byte kSpecies_845260A, 4
    .4byte kSpecies_8452612, 3
    .4byte kSpecies_8452618, 2
    .4byte kSpecies_845261C, 4
    .4byte kSpecies_8452624, 4
    .4byte kSpecies_845262C, 3
    .4byte kSpecies_8452632, 3
    .4byte kSpecies_8452638, 2
    .4byte kSpecies_845263C, 2
    .4byte kSpecies_8452640, 3
    .4byte kSpecies_8452646, 3
    .4byte kSpecies_845264C, 3
    .4byte kSpecies_8452652, 3
    .4byte kSpecies_8452658, 2

kUnk3b_84529FC:: @ 84529FC
    .4byte kSpecies_845265C, 2
    .4byte kSpecies_8452660, 2
    .4byte kSpecies_8452664, 2
    .4byte kSpecies_8452668, 4
    .4byte kSpecies_8452670, 2
    .4byte kSpecies_8452674, 3
    .4byte kSpecies_845267A, 4
    .4byte kSpecies_8452682, 2
    .4byte kSpecies_8452686, 3
    .4byte kSpecies_845268C, 4
    .4byte kSpecies_8452694, 3
    .4byte kSpecies_845269A, 1
    .4byte kSpecies_845269C, 1
    .4byte kSpecies_845269E, 4
    .4byte kSpecies_84526A6, 2
    .4byte kSpecies_84526AA, 1

kUnk3b_8452A7C:: @ 8452A7C
    .4byte kSpecies_84526AC, 3
    .4byte kSpecies_84526B2, 4
    .4byte kSpecies_84526BA, 4
    .4byte kSpecies_84526C2, 3
    .4byte kSpecies_84526C8, 3
    .4byte kSpecies_84526CE, 2
    .4byte kSpecies_84526D2, 3
    .4byte kSpecies_84526D8, 2
    .4byte kSpecies_84526DC, 2
    .4byte kSpecies_84526E0, 3

kUnk3b_8452ACC:: @ 8452ACC
    .4byte kSpecies_84526E6, 3
    .4byte kSpecies_84526EC, 4
    .4byte kSpecies_84526F4, 3
    .4byte kSpecies_84526FA, 3
    .4byte kSpecies_8452700, 2
    .4byte kSpecies_8452704, 4
    .4byte kSpecies_845270C, 4
    .4byte kSpecies_8452714, 4
    .4byte kSpecies_845271C, 2
    .4byte kSpecies_8452720, 3
    .4byte kSpecies_8452726, 3
    .4byte kSpecies_845272C, 3
    .4byte kSpecies_8452732, 1
    .4byte kSpecies_8452734, 1
    .4byte kSpecies_8452736, 1
    .4byte kSpecies_8452738, 3
    .4byte kSpecies_845273E, 1

kUnk3b_8452B54:: @ 8452B54
    .4byte kSpecies_8452740, 2
    .4byte kSpecies_8452744, 4
    .4byte kSpecies_845274C, 2
    .4byte kSpecies_8452750, 4
    .4byte kSpecies_8452758, 2
    .4byte kSpecies_845275C, 3
    .4byte kSpecies_8452762, 1
    .4byte kSpecies_8452764, 2
    .4byte kSpecies_8452768, 3
    .4byte kSpecies_845276E, 3
    .4byte kSpecies_8452774, 1

kUnk3b_8452BAC:: @ 8452BAC
    .4byte kSpecies_8452776, 4
    .4byte kSpecies_845277E, 4
    .4byte kSpecies_8452786, 2
    .4byte kSpecies_845278A, 3
    .4byte kSpecies_8452790, 3
    .4byte kSpecies_8452796, 4
    .4byte kSpecies_845279E, 4
    .4byte kSpecies_84527A6, 2
    .4byte kSpecies_84527AA, 4
    .4byte kSpecies_84527B2, 1
    .4byte kSpecies_84527B4, 4
    .4byte kSpecies_84527BC, 2

kUnk3b_8452C0C:: @ 8452C0C
    .4byte kSpecies_84527C0, 1
    .4byte kSpecies_84527C2, 3
    .4byte kSpecies_84527C8, 1
    .4byte kSpecies_84527CA, 1
    .4byte kSpecies_84527CC, 1
    .4byte kSpecies_84527CE, 1
    .4byte kSpecies_84527D0, 1
    .4byte kSpecies_84527D2, 1

kUnk3_8452C4C:: @ 8452C4C
    .4byte kUnk3b_84527D4, 27
    .4byte kUnk3b_84528AC, 26
    .4byte kUnk3b_845297C, 16
    .4byte kUnk3b_84529FC, 16
    .4byte kUnk3b_8452A7C, 10
    .4byte kUnk3b_8452ACC, 17
    .4byte kUnk3b_8452B54, 11
    .4byte kUnk3b_8452BAC, 12
    .4byte kUnk3b_8452C0C, 8

kUnk10_8452C94:: @ 8452C94
    .byte 0x0C, 0x0C
    .2byte 0x0000
    .byte 0x20, 0x0C
    .2byte 0x0020
    .byte 0x20, 0x0C
    .2byte 0x0064
    .byte 0x20, 0x0C
    .2byte 0x0060
    .byte 0x20, 0x0C
    .2byte 0x0080
    .byte 0x20, 0x0C
    .2byte 0x0048
    .byte 0x20, 0x0C
    .2byte 0x0044
    .byte 0x20, 0x0C
    .2byte 0x006C
    .byte 0x20, 0x0C
    .2byte 0x0068
    .byte 0x20, 0x0C
    .2byte 0x0088
    .byte 0x20, 0x0C
    .2byte 0x00A4
    .byte 0x20, 0x0C
    .2byte 0x0024
    .byte 0x20, 0x0C
    .2byte 0x0028
    .byte 0x20, 0x0C
    .2byte 0x002C
    .byte 0x20, 0x0C
    .2byte 0x0040
    .byte 0x20, 0x0C
    .2byte 0x0084
    .byte 0x20, 0x0C
    .2byte 0x004C
    .byte 0x20, 0x0C
    .2byte 0x00A0
    .byte 0x20, 0x0C
    .2byte 0x008C
    .byte 0x28, 0x0C
    .2byte 0x00A8
    .byte 0x28, 0x0C
    .2byte 0x00C0
    .byte 0x28, 0x0C
    .2byte 0x00C8
    .byte 0x28, 0x0C
    .2byte 0x00E0
    .byte 0x28, 0x0C
    .2byte 0x00E8

kVRAMConfig_8452CF4:: @ 8452CF4
    .4byte 0x1F0
    .4byte 0x11ED

kPointer_8452CFC:: @ 8452CFC
    .4byte kText_84162CD @ 84162CD
    .4byte kText_84162DE @ 84162DE
    .4byte kText_84162D3 @ 84162D3

kTilemap_8452D08:: @ 8452D08
    .incbin "baserom.gba", 0x452D08, 0x1B0

kPointerSet_8452EB8:: @ 8452EB8
    .4byte kText_84161A0, brm_use
    .4byte kText_84161A4, sub_8109CC0
    .4byte kText_84161A9, sub_810A000
    .4byte kText_84161B2, sub_810A0A8
    .4byte kText_84161C1, brm_cancel
    .4byte kText_84161A0, brm_run_item_battle_function
    .4byte kText_84161E9, brm_use
    .4byte kText_84161F4, brm_use
    .4byte kText_84161F4, brm_run_item_battle_function
    .4byte kText_84161BC, brm_use
    .4byte kText_84161F9, sub_810A000
    .4byte kText_84161CD, NULL

UNK_8452F18:: @ 8452F18
    .incbin "baserom.gba", 0x452F18, 0xC @ null

UNK_8452F24:: @ 8452F24
    .incbin "baserom.gba", 0x452F24, 0x4 @ null

UNK_8452F28:: @ 8452F28
    .incbin "baserom.gba", 0x452F28, 0x6 @ null

UNK_8452F2E:: @ 8452F2E
    .incbin "baserom.gba", 0x452F2E, 0x2 @ null

UNK_8452F30:: @ 8452F30
    .incbin "baserom.gba", 0x452F30, 0x2 @ null

UNK_8452F32:: @ 8452F32
    .incbin "baserom.gba", 0x452F32, 0x2 @ null

kPointer_8452F34:: @ 8452F34
    .4byte task_bag_acit_0_or_5 @ 8109BB9
    .4byte task_bag_acit_1 @ 810A371
    .4byte task_bag_acit_2 @ 810A569
    .4byte task_bag_acit_3 @ 810AB41
    .4byte task_bag_acit_4 @ 810A469
    .4byte task_bag_acit_0_or_5 @ 8109BB9
    .4byte NULL @ 0

kPointer_8452F50:: @ 8452F50
    .4byte sub_8109EA8 @ 8109EA9
    .4byte sub_8109DB0 @ 8109DB1

kPointer_8452F58:: @ 8452F58
    .4byte sub_810A940 @ 810A941
    .4byte sub_810A720 @ 810A721

UNK_8452F60:: @ 8452F60
    .incbin "baserom.gba", 0x452F60, 0x6 @ null

UNK_8452F66:: @ 8452F66
    .incbin "baserom.gba", 0x452F66, 0x6 @ null

UNK_8452F6C:: @ 8452F6C
    .incbin "baserom.gba", 0x452F6C, 0x10 @ null

kGfx_8452F7C:: @ 8452F7C
    .incbin "baserom.gba", 0x452F7C, 0xC0

UNK_845303C:: @ 845303C
    .incbin "baserom.gba", 0x45303C, 0x56 @ null

UNK_8453092:: @ 8453092
    .incbin "baserom.gba", 0x453092, 0x2 @ null

UNK_8453094:: @ 8453094
    .incbin "baserom.gba", 0x453094, 0x4 @ null

kPalette_8453098:: @ 8453098
    .incbin "baserom.gba", 0x453098, 0x20

kRBoxBar_84530B8:: @ 84530B8
    .byte 0x00, 0x01, 0x02
    .byte 0x00, 0x02, 0x03
    .byte 0x00, 0x03, 0x02
    .byte 0x00, 0x08, 0x09

kWindowTemplate_84530C4:: @ 84530C4
    window_template 0x00, 0x0B, 0x01, 0x12, 0x0C, 0x0F, 0x008A
    window_template 0x00, 0x05, 0x0E, 0x19, 0x06, 0x0F, 0x0162
    window_template 0x00, 0x01, 0x01, 0x09, 0x02, 0x0F, 0x01F8
    window_template_terminator

kWindowTemplate_84530E4:: @ 84530E4
    window_template 0x00, 0x0B, 0x01, 0x12, 0x0C, 0x0F, 0x008A
    window_template 0x00, 0x05, 0x0E, 0x19, 0x06, 0x0F, 0x0162
    window_template 0x00, 0x01, 0x01, 0x08, 0x02, 0x0C, 0x01F8
    window_template_terminator

kWindowTemplate_8453104:: @ 8453104
    window_template 0x00, 0x18, 0x0F, 0x05, 0x04, 0x0F, 0x0242
    window_template 0x00, 0x11, 0x09, 0x0C, 0x04, 0x0F, 0x0242
    window_template 0x00, 0x01, 0x01, 0x08, 0x03, 0x0C, 0x0272

kWindowTemplate_845311C:: @ 845311C
    window_template 0x00, 0x17, 0x0F, 0x06, 0x04, 0x0F, 0x028A

kWindowTemplate_8453124:: @ 8453124
    window_template 0x00, 0x15, 0x09, 0x06, 0x04, 0x0F, 0x028A

    .incbin "baserom.gba", 0x45312C, 0x4C @ unknown

UNK_8453178:: @ 8453178
    .incbin "baserom.gba", 0x453178, 0xC @ null

UNK_8453184:: @ 8453184
    .incbin "baserom.gba", 0x453184, 0x8 @ null

kVSSeekerTrainers:: @ 845318C
    .2byte 89, 101, 65535, 498, 499, 0
    .2byte 3, 21
    .2byte 90, 90, 0, 0, 0, 0
    .2byte 3, 21
    .2byte 105, 729, 65535, 730, 65535, 731
    .2byte 3, 21
    .2byte 106, 106, 0, 0, 0, 0
    .2byte 3, 21
    .2byte 107, 107, 0, 0, 0, 0
    .2byte 3, 21
    .2byte 116, 507, 65535, 508, 0, 0
    .2byte 3, 21
    .2byte 117, 117, 0, 0, 0, 0
    .2byte 3, 21
    .2byte 118, 118, 0, 0, 0, 0
    .2byte 3, 21
    .2byte 119, 119, 0, 0, 0, 0
    .2byte 3, 22
    .2byte 92, 503, 65535, 504, 65535, 505
    .2byte 3, 43
    .2byte 110, 110, 0, 0, 0, 0
    .2byte 3, 43
    .2byte 122, 501, 65535, 502, 0, 0
    .2byte 3, 43
    .2byte 123, 123, 0, 0, 0, 0
    .2byte 3, 43
    .2byte 143, 143, 0, 0, 0, 0
    .2byte 3, 43
    .2byte 144, 144, 0, 0, 0, 0
    .2byte 3, 43
    .2byte 93, 93, 0, 0, 0, 0
    .2byte 3, 44
    .2byte 94, 94, 0, 0, 0, 0
    .2byte 3, 44
    .2byte 95, 500, 65535, 506, 509, 0
    .2byte 3, 44
    .2byte 153, 621, 65535, 622, 623, 0
    .2byte 3, 44
    .2byte 125, 125, 0, 0, 0, 0
    .2byte 3, 44
    .2byte 182, 65535, 510, 0, 0, 0
    .2byte 3, 44
    .2byte 183, 183, 0, 0, 0, 0
    .2byte 3, 44
    .2byte 184, 184, 0, 0, 0, 0
    .2byte 3, 44
    .2byte 471, 471, 0, 0, 0, 0
    .2byte 3, 44
    .2byte 111, 111, 0, 0, 0, 0
    .2byte 3, 24
    .2byte 112, 112, 0, 0, 0, 0
    .2byte 3, 24
    .2byte 145, 624, 65535, 625, 65535, 626
    .2byte 3, 24
    .2byte 146, 627, 65535, 628, 65535, 629
    .2byte 3, 24
    .2byte 151, 151, 0, 0, 0, 0
    .2byte 3, 24
    .2byte 152, 630, 65535, 631, 632, 0
    .2byte 3, 24
    .2byte 97, 97, 0, 0, 0, 0
    .2byte 3, 29
    .2byte 98, 98, 0, 0, 0, 0
    .2byte 3, 29
    .2byte 99, 65535, 633, 65535, 634, 0
    .2byte 3, 29
    .2byte 100, 100, 0, 0, 0, 0
    .2byte 3, 29
    .2byte 221, 221, 0, 0, 0, 0
    .2byte 3, 29
    .2byte 222, 65535, 65535, 635, 0, 0
    .2byte 3, 29
    .2byte 258, 258, 0, 0, 0, 0
    .2byte 3, 29
    .2byte 259, 259, 0, 0, 0, 0
    .2byte 3, 29
    .2byte 260, 260, 0, 0, 0, 0
    .2byte 3, 29
    .2byte 261, 65535, 65535, 636, 0, 0
    .2byte 3, 29
    .2byte 114, 114, 0, 0, 0, 0
    .2byte 3, 27
    .2byte 115, 115, 0, 0, 0, 0
    .2byte 3, 27
    .2byte 148, 65535, 637, 638, 65535, 639
    .2byte 3, 27
    .2byte 149, 149, 0, 0, 0, 0
    .2byte 3, 27
    .2byte 154, 65535, 640, 641, 65535, 642
    .2byte 3, 27
    .2byte 155, 155, 0, 0, 0, 0
    .2byte 3, 27
    .2byte 185, 185, 0, 0, 0, 0
    .2byte 3, 27
    .2byte 186, 186, 0, 0, 0, 0
    .2byte 3, 27
    .2byte 465, 65535, 65535, 643, 0, 0
    .2byte 3, 27
    .2byte 156, 156, 0, 0, 0, 0
    .2byte 3, 28
    .2byte 157, 157, 0, 0, 0, 0
    .2byte 3, 28
    .2byte 162, 65535, 65535, 594, 65535, 644
    .2byte 3, 28
    .2byte 163, 65535, 65535, 645, 65535, 646
    .2byte 3, 28
    .2byte 187, 187, 0, 0, 0, 0
    .2byte 3, 28
    .2byte 188, 65535, 65535, 647, 0, 0
    .2byte 3, 28
    .2byte 128, 128, 0, 0, 0, 0
    .2byte 3, 26
    .2byte 129, 129, 0, 0, 0, 0
    .2byte 3, 26
    .2byte 130, 65535, 648, 65535, 649, 0
    .2byte 3, 26
    .2byte 131, 131, 0, 0, 0, 0
    .2byte 3, 26
    .2byte 171, 171, 0, 0, 0, 0
    .2byte 3, 26
    .2byte 172, 65535, 65535, 650, 0, 0
    .2byte 3, 26
    .2byte 173, 173, 0, 0, 0, 0
    .2byte 3, 26
    .2byte 262, 262, 0, 0, 0, 0
    .2byte 3, 26
    .2byte 264, 65535, 65535, 651, 0, 0
    .2byte 3, 26
    .2byte 484, 65535, 65535, 533, 0, 0
    .2byte 3, 26
    .2byte 535, 535, 0, 0, 0, 0
    .2byte 3, 26
    .2byte 536, 65535, 65535, 652, 0, 0
    .2byte 3, 26
    .2byte 225, 225, 0, 0, 0, 0
    .2byte 3, 30
    .2byte 226, 226, 0, 0, 0, 0
    .2byte 3, 30
    .2byte 227, 227, 0, 0, 0, 0
    .2byte 3, 30
    .2byte 228, 65535, 65535, 653, 0, 0
    .2byte 3, 30
    .2byte 233, 233, 0, 0, 0, 0
    .2byte 3, 30
    .2byte 285, 65535, 65535, 654, 0, 0
    .2byte 3, 30
    .2byte 477, 477, 0, 0, 0, 0
    .2byte 3, 30
    .2byte 486, 65535, 65535, 706, 65535, 707
    .2byte 3, 30
    .2byte 195, 195, 0, 0, 0, 0
    .2byte 3, 31
    .2byte 268, 268, 0, 0, 0, 0
    .2byte 3, 31
    .2byte 269, 65535, 65535, 65535, 655, 0
    .2byte 3, 31
    .2byte 300, 300, 0, 0, 0, 0
    .2byte 3, 31
    .2byte 301, 301, 0, 0, 0, 0
    .2byte 3, 31
    .2byte 302, 65535, 65535, 656, 657, 0
    .2byte 3, 31
    .2byte 466, 466, 0, 0, 0, 0
    .2byte 3, 31
    .2byte 467, 65535, 65535, 658, 659, 660
    .2byte 3, 31
    .2byte 468, 468, 0, 0, 0, 0
    .2byte 3, 31
    .2byte 469, 469, 0, 0, 0, 0
    .2byte 3, 31
    .2byte 196, 196, 0, 0, 0, 0
    .2byte 3, 32
    .2byte 207, 65535, 65535, 65535, 661, 0
    .2byte 3, 32
    .2byte 208, 208, 0, 0, 0, 0
    .2byte 3, 32
    .2byte 209, 209, 0, 0, 0, 0
    .2byte 3, 32
    .2byte 303, 303, 0, 0, 0, 0
    .2byte 3, 32
    .2byte 304, 65535, 65535, 662, 663, 0
    .2byte 3, 32
    .2byte 313, 313, 0, 0, 0, 0
    .2byte 3, 32
    .2byte 314, 314, 0, 0, 0, 0
    .2byte 3, 32
    .2byte 315, 315, 0, 0, 0, 0
    .2byte 3, 32
    .2byte 316, 65535, 65535, 664, 665, 0
    .2byte 3, 32
    .2byte 487, 487, 0, 0, 0, 0
    .2byte 3, 32
    .2byte 197, 197, 0, 0, 0, 0
    .2byte 3, 33
    .2byte 198, 198, 0, 0, 0, 0
    .2byte 3, 33
    .2byte 273, 65535, 65535, 65535, 666, 0
    .2byte 3, 33
    .2byte 274, 274, 0, 0, 0, 0
    .2byte 3, 33
    .2byte 305, 305, 0, 0, 0, 0
    .2byte 3, 33
    .2byte 306, 65535, 65535, 667, 668, 0
    .2byte 3, 33
    .2byte 478, 478, 0, 0, 0, 0
    .2byte 3, 33
    .2byte 479, 479, 0, 0, 0, 0
    .2byte 3, 33
    .2byte 480, 65535, 65535, 669, 670, 671
    .2byte 3, 33
    .2byte 481, 481, 0, 0, 0, 0
    .2byte 3, 33
    .2byte 488, 65535, 65535, 672, 673, 674
    .2byte 3, 33
    .2byte 199, 199, 0, 0, 0, 0
    .2byte 3, 34
    .2byte 201, 201, 0, 0, 0, 0
    .2byte 3, 34
    .2byte 202, 65535, 65535, 65535, 675, 0
    .2byte 3, 34
    .2byte 249, 249, 0, 0, 0, 0
    .2byte 3, 34
    .2byte 250, 250, 0, 0, 0, 0
    .2byte 3, 34
    .2byte 251, 65535, 65535, 65535, 676, 0
    .2byte 3, 34
    .2byte 489, 489, 0, 0, 0, 0
    .2byte 3, 34
    .2byte 203, 203, 0, 0, 0, 0
    .2byte 3, 35
    .2byte 204, 204, 0, 0, 0, 0
    .2byte 3, 35
    .2byte 205, 65535, 65535, 65535, 677, 0
    .2byte 3, 35
    .2byte 206, 206, 0, 0, 0, 0
    .2byte 3, 35
    .2byte 252, 252, 0, 0, 0, 0
    .2byte 3, 35
    .2byte 253, 65535, 65535, 65535, 678, 0
    .2byte 3, 35
    .2byte 254, 254, 0, 0, 0, 0
    .2byte 3, 35
    .2byte 255, 255, 0, 0, 0, 0
    .2byte 3, 35
    .2byte 256, 65535, 65535, 65535, 679, 0
    .2byte 3, 35
    .2byte 470, 470, 0, 0, 0, 0
    .2byte 3, 35
    .2byte 307, 307, 0, 0, 0, 0
    .2byte 3, 36
    .2byte 308, 308, 0, 0, 0, 0
    .2byte 3, 36
    .2byte 309, 65535, 65535, 680, 681, 0
    .2byte 3, 36
    .2byte 235, 235, 0, 0, 0, 0
    .2byte 3, 37
    .2byte 236, 236, 0, 0, 0, 0
    .2byte 3, 37
    .2byte 237, 65535, 65535, 65535, 732, 0
    .2byte 3, 37
    .2byte 238, 238, 0, 0, 0, 0
    .2byte 3, 37
    .2byte 239, 239, 0, 0, 0, 0
    .2byte 3, 37
    .2byte 240, 65535, 65535, 65535, 733, 0
    .2byte 3, 37
    .2byte 241, 241, 0, 0, 0, 0
    .2byte 3, 37
    .2byte 276, 276, 0, 0, 0, 0
    .2byte 3, 37
    .2byte 277, 65535, 65535, 65535, 682, 0
    .2byte 3, 37
    .2byte 278, 278, 0, 0, 0, 0
    .2byte 3, 37
    .2byte 490, 490, 0, 0, 0, 0
    .2byte 3, 37
    .2byte 242, 242, 0, 0, 0, 0
    .2byte 3, 38
    .2byte 243, 243, 0, 0, 0, 0
    .2byte 3, 38
    .2byte 244, 65535, 65535, 65535, 65535, 683
    .2byte 3, 38
    .2byte 270, 270, 0, 0, 0, 0
    .2byte 3, 38
    .2byte 271, 271, 0, 0, 0, 0
    .2byte 3, 38
    .2byte 272, 65535, 65535, 65535, 734, 0
    .2byte 3, 38
    .2byte 279, 279, 0, 0, 0, 0
    .2byte 3, 38
    .2byte 310, 310, 0, 0, 0, 0
    .2byte 3, 38
    .2byte 472, 65535, 65535, 65535, 684, 685
    .2byte 3, 38
    .2byte 473, 473, 0, 0, 0, 0
    .2byte 3, 38
    .2byte 229, 229, 0, 0, 0, 0
    .2byte 3, 39
    .2byte 230, 230, 0, 0, 0, 0
    .2byte 3, 39
    .2byte 231, 65535, 65535, 65535, 686, 0
    .2byte 3, 39
    .2byte 232, 232, 0, 0, 0, 0
    .2byte 3, 39
    .2byte 245, 245, 0, 0, 0, 0
    .2byte 3, 39
    .2byte 246, 65535, 65535, 65535, 687, 0
    .2byte 3, 39
    .2byte 247, 247, 0, 0, 0, 0
    .2byte 3, 39
    .2byte 248, 248, 0, 0, 0, 0
    .2byte 3, 39
    .2byte 491, 65535, 65535, 65535, 688, 689
    .2byte 3, 39
    .2byte 547, 547, 0, 0, 0, 0
    .2byte 3, 45
    .2byte 548, 548, 0, 0, 0, 0
    .2byte 3, 45
    .2byte 549, 65535, 65535, 65535, 690, 0
    .2byte 3, 45
    .2byte 550, 550, 0, 0, 0, 0
    .2byte 3, 45
    .2byte 551, 551, 0, 0, 0, 0
    .2byte 3, 45
    .2byte 518, 65535, 65535, 65535, 691, 692
    .2byte 3, 45
    .2byte 552, 65535, 65535, 65535, 693, 694
    .2byte 3, 45
    .2byte 553, 65535, 65535, 65535, 695, 696
    .2byte 3, 45
    .2byte 554, 65535, 65535, 65535, 697, 698
    .2byte 3, 45
    .2byte 555, 555, 0, 0, 0, 0
    .2byte 3, 45
    .2byte 556, 556, 0, 0, 0, 0
    .2byte 3, 45
    .2byte 557, 65535, 65535, 65535, 699, 700
    .2byte 3, 45
    .2byte 546, 546, 0, 0, 0, 0
    .2byte 3, 46
    .2byte 523, 523, 0, 0, 0, 0
    .2byte 3, 48
    .2byte 558, 558, 0, 0, 0, 0
    .2byte 3, 48
    .2byte 519, 65535, 65535, 65535, 701, 0
    .2byte 3, 48
    .2byte 559, 559, 0, 0, 0, 0
    .2byte 3, 48
    .2byte 561, 561, 0, 0, 0, 0
    .2byte 3, 48
    .2byte 560, 65535, 65535, 65535, 702, 0
    .2byte 3, 48
    .2byte 526, 526, 0, 0, 0, 0
    .2byte 3, 54
    .2byte 562, 562, 0, 0, 0, 0
    .2byte 3, 54
    .2byte 563, 65535, 65535, 65535, 65535, 703
    .2byte 3, 54
    .2byte 525, 525, 0, 0, 0, 0
    .2byte 3, 54
    .2byte 564, 564, 0, 0, 0, 0
    .2byte 3, 54
    .2byte 565, 65535, 65535, 65535, 65535, 704
    .2byte 3, 54
    .2byte 566, 566, 0, 0, 0, 0
    .2byte 3, 54
    .2byte 520, 65535, 65535, 65535, 65535, 705
    .2byte 3, 55
    .2byte 570, 65535, 65535, 65535, 65535, 708
    .2byte 3, 57
    .2byte 571, 65535, 65535, 65535, 65535, 709
    .2byte 3, 57
    .2byte 572, 65535, 65535, 65535, 65535, 710
    .2byte 3, 57
    .2byte 573, 573, 0, 0, 0, 0
    .2byte 3, 58
    .2byte 574, 574, 0, 0, 0, 0
    .2byte 3, 58
    .2byte 575, 65535, 65535, 65535, 65535, 711
    .2byte 3, 58
    .2byte 576, 576, 0, 0, 0, 0
    .2byte 3, 58
    .2byte 517, 65535, 65535, 65535, 65535, 712
    .2byte 3, 59
    .2byte 577, 577, 0, 0, 0, 0
    .2byte 3, 60
    .2byte 291, 291, 0, 0, 0, 0
    .2byte 3, 60
    .2byte 578, 65535, 65535, 65535, 65535, 713
    .2byte 3, 60
    .2byte 579, 579, 0, 0, 0, 0
    .2byte 3, 60
    .2byte 580, 580, 0, 0, 0, 0
    .2byte 3, 60
    .2byte 581, 65535, 65535, 65535, 65535, 714
    .2byte 3, 60
    .2byte 524, 524, 0, 0, 0, 0
    .2byte 3, 61
    .2byte 582, 582, 0, 0, 0, 0
    .2byte 3, 61
    .2byte 583, 65535, 65535, 65535, 65535, 715
    .2byte 3, 61
    .2byte 584, 584, 0, 0, 0, 0
    .2byte 3, 61
    .2byte 585, 65535, 65535, 65535, 65535, 716
    .2byte 3, 61
    .2byte 586, 65535, 65535, 65535, 65535, 717
    .2byte 3, 62
    .2byte 587, 65535, 65535, 65535, 65535, 718
    .2byte 3, 62
    .2byte 588, 588, 0, 0, 0, 0
    .2byte 3, 63
    .2byte 589, 589, 0, 0, 0, 0
    .2byte 3, 63
    .2byte 590, 65535, 65535, 65535, 65535, 719
    .2byte 3, 63
    .2byte 521, 65535, 65535, 65535, 65535, 720
    .2byte 3, 63
    .2byte 522, 65535, 65535, 65535, 65535, 721
    .2byte 3, 63
    .2byte 591, 65535, 65535, 65535, 65535, 722
    .2byte 3, 64
    .2byte 593, 65535, 65535, 65535, 65535, 723
    .2byte 3, 64
    .2byte 596, 65535, 65535, 65535, 65535, 724
    .2byte 3, 64
    .2byte 598, 65535, 65535, 65535, 65535, 725
    .2byte 3, 64
    .2byte 599, 65535, 65535, 65535, 65535, 726
    .2byte 3, 64
    .2byte 600, 65535, 65535, 65535, 65535, 727
    .2byte 3, 64
    .2byte 601, 65535, 65535, 65535, 65535, 728
    .2byte 3, 64
    .2byte 602, 602, 0, 0, 0, 0
    .2byte 3, 65
    .2byte 603, 603, 0, 0, 0, 0
    .2byte 3, 65
    .2byte 604, 604, 0, 0, 0, 0
    .2byte 3, 65
    .2byte 605, 605, 0, 0, 0, 0
    .2byte 3, 65

UNK_8453F5C:: @ 8453F5C
    .incbin "baserom.gba", 0x453F5C, 0x4 @ null

UNK_8453F60:: @ 8453F60
    .incbin "baserom.gba", 0x453F60, 0x2 @ null

UNK_8453F62:: @ 8453F62
    .incbin "baserom.gba", 0x453F62, 0x2 @ null

UNK_8453F64:: @ 8453F64
    .incbin "baserom.gba", 0x453F64, 0x3 @ null

UNK_8453F67:: @ 8453F67
    .incbin "baserom.gba", 0x453F67, 0x5 @ null

kVRAMConfig_8453F6C:: @ 8453F6C
    .4byte 0x1F0
    .4byte 0x11ED

kPointerSet_8453F74:: @ 8453F74
    .4byte kUnknown_84178B5, sub_810E3A4
    .4byte kText_84161B2, sub_810E79C
    .4byte kText_84161C1, sub_810E8A0

UNK_8453F8C:: @ 8453F8C
    .incbin "baserom.gba", 0x453F8C, 0xC @ null

kWindowTemplate_8453F98:: @ 8453F98
    window_template 0x00, 0x07, 0x01, 0x13, 0x0C, 0x0F, 0x02BF
    window_template 0x00, 0x05, 0x0E, 0x19, 0x06, 0x0D, 0x0229
    window_template 0x00, 0x01, 0x01, 0x05, 0x04, 0x0F, 0x0215
    window_template 0x00, 0x18, 0x0F, 0x05, 0x04, 0x0F, 0x0201
    window_template 0x00, 0x16, 0x0D, 0x07, 0x06, 0x0F, 0x01D7
    window_template 0x00, 0x02, 0x0F, 0x1A, 0x04, 0x0B, 0x016F
    window_template_terminator

kWindowTemplate_8453FD0:: @ 8453FD0
    window_template 0x00, 0x06, 0x0F, 0x0E, 0x04, 0x0C, 0x0137
    window_template 0x00, 0x06, 0x0F, 0x10, 0x04, 0x0C, 0x0137
    window_template 0x00, 0x06, 0x0F, 0x17, 0x04, 0x0C, 0x009B

kWindowTemplate_8453FE8:: @ 8453FE8
    window_template 0x00, 0x01, 0x01, 0x0A, 0x02, 0x0F, 0x0008
    window_template 0x00, 0x13, 0x01, 0x0A, 0x12, 0x0F, 0x001C
    window_template 0x00, 0x01, 0x01, 0x0F, 0x08, 0x0F, 0x001C

UNK_8454000:: @ 8454000
    .incbin "baserom.gba", 0x454000, 0x3 @ null

UNK_8454003:: @ 8454003
    .incbin "baserom.gba", 0x454003, 0x1 @ null

kDecorationGfx_8454004:: @ 8454004
    .incbin "baserom.gba", 0x454004, 0x2 @ null

kDecorationGfx_8454006:: @ 8454006
    .incbin "baserom.gba", 0x454006, 0x2 @ null

kDecorationGfx_8454008:: @ 8454008
    .incbin "baserom.gba", 0x454008, 0xC @ null

kDecorationGfx_8454014:: @ 8454014
    .incbin "baserom.gba", 0x454014, 0xC @ null

kDecorationGfx_8454020:: @ 8454020
    .incbin "baserom.gba", 0x454020, 0xC @ null

kDecorationGfx_845402C:: @ 845402C
    .incbin "baserom.gba", 0x45402C, 0x12 @ null

kDecorationGfx_845403E:: @ 845403E
    .incbin "baserom.gba", 0x45403E, 0x12 @ null

kDecorationGfx_8454050:: @ 8454050
    .incbin "baserom.gba", 0x454050, 0x12 @ null

kDecorationGfx_8454062:: @ 8454062
    .incbin "baserom.gba", 0x454062, 0x12 @ null

kDecorationGfx_8454074:: @ 8454074
    .incbin "baserom.gba", 0x454074, 0x2 @ null

kDecorationGfx_8454076:: @ 8454076
    .incbin "baserom.gba", 0x454076, 0x2 @ null

kDecorationGfx_8454078:: @ 8454078
    .incbin "baserom.gba", 0x454078, 0x2 @ null

kDecorationGfx_845407A:: @ 845407A
    .incbin "baserom.gba", 0x45407A, 0x2 @ null

kDecorationGfx_845407C:: @ 845407C
    .incbin "baserom.gba", 0x45407C, 0x2 @ null

kDecorationGfx_845407E:: @ 845407E
    .incbin "baserom.gba", 0x45407E, 0x2 @ null

kDecorationGfx_8454080:: @ 8454080
    .incbin "baserom.gba", 0x454080, 0x2 @ null

kDecorationGfx_8454082:: @ 8454082
    .incbin "baserom.gba", 0x454082, 0x2 @ null

kDecorationGfx_8454084:: @ 8454084
    .incbin "baserom.gba", 0x454084, 0x2 @ null

kDecorationGfx_8454086:: @ 8454086
    .incbin "baserom.gba", 0x454086, 0x4 @ null

kDecorationGfx_845408A:: @ 845408A
    .incbin "baserom.gba", 0x45408A, 0x4 @ null

kDecorationGfx_845408E:: @ 845408E
    .incbin "baserom.gba", 0x45408E, 0x4 @ null

kDecorationGfx_8454092:: @ 8454092
    .incbin "baserom.gba", 0x454092, 0x8 @ null

kDecorationGfx_845409A:: @ 845409A
    .incbin "baserom.gba", 0x45409A, 0x8 @ null

kDecorationGfx_84540A2:: @ 84540A2
    .incbin "baserom.gba", 0x4540A2, 0x8 @ null

kDecorationGfx_84540AA:: @ 84540AA
    .incbin "baserom.gba", 0x4540AA, 0x4 @ null

kDecorationGfx_84540AE:: @ 84540AE
    .incbin "baserom.gba", 0x4540AE, 0x4 @ null

kDecorationGfx_84540B2:: @ 84540B2
    .incbin "baserom.gba", 0x4540B2, 0x4 @ null

kDecorationGfx_84540B6:: @ 84540B6
    .incbin "baserom.gba", 0x4540B6, 0x2 @ null

kDecorationGfx_84540B8:: @ 84540B8
    .incbin "baserom.gba", 0x4540B8, 0x2 @ null

kDecorationGfx_84540BA:: @ 84540BA
    .incbin "baserom.gba", 0x4540BA, 0x2 @ null

kDecorationGfx_84540BC:: @ 84540BC
    .incbin "baserom.gba", 0x4540BC, 0x12 @ null

kDecorationGfx_84540CE:: @ 84540CE
    .incbin "baserom.gba", 0x4540CE, 0x12 @ null

kDecorationGfx_84540E0:: @ 84540E0
    .incbin "baserom.gba", 0x4540E0, 0x4 @ null

kDecorationGfx_84540E4:: @ 84540E4
    .incbin "baserom.gba", 0x4540E4, 0x10 @ null

kDecorationGfx_84540F4:: @ 84540F4
    .incbin "baserom.gba", 0x4540F4, 0x2 @ null

kDecorationGfx_84540F6:: @ 84540F6
    .incbin "baserom.gba", 0x4540F6, 0x2 @ null

kDecorationGfx_84540F8:: @ 84540F8
    .incbin "baserom.gba", 0x4540F8, 0x8 @ null

kDecorationGfx_8454100:: @ 8454100
    .incbin "baserom.gba", 0x454100, 0x10 @ null

kDecorationGfx_8454110:: @ 8454110
    .incbin "baserom.gba", 0x454110, 0x2 @ null

kDecorationGfx_8454112:: @ 8454112
    .incbin "baserom.gba", 0x454112, 0x4 @ null

kDecorationGfx_8454116:: @ 8454116
    .incbin "baserom.gba", 0x454116, 0x4 @ null

kDecorationGfx_845411A:: @ 845411A
    .incbin "baserom.gba", 0x45411A, 0x4 @ null

kDecorationGfx_845411E:: @ 845411E
    .incbin "baserom.gba", 0x45411E, 0x4 @ null

kDecorationGfx_8454122:: @ 8454122
    .incbin "baserom.gba", 0x454122, 0x4 @ null

kDecorationGfx_8454126:: @ 8454126
    .incbin "baserom.gba", 0x454126, 0x2 @ null

kDecorationGfx_8454128:: @ 8454128
    .incbin "baserom.gba", 0x454128, 0x2 @ null

kDecorationGfx_845412A:: @ 845412A
    .incbin "baserom.gba", 0x45412A, 0x2 @ null

kDecorationGfx_845412C:: @ 845412C
    .incbin "baserom.gba", 0x45412C, 0x2 @ null

kDecorationGfx_845412E:: @ 845412E
    .incbin "baserom.gba", 0x45412E, 0x2 @ null

kDecorationGfx_8454130:: @ 8454130
    .incbin "baserom.gba", 0x454130, 0x2 @ null

kDecorationGfx_8454132:: @ 8454132
    .incbin "baserom.gba", 0x454132, 0x2 @ null

kDecorationGfx_8454134:: @ 8454134
    .incbin "baserom.gba", 0x454134, 0x2 @ null

kDecorationGfx_8454136:: @ 8454136
    .incbin "baserom.gba", 0x454136, 0x2 @ null

kDecorationGfx_8454138:: @ 8454138
    .incbin "baserom.gba", 0x454138, 0x2 @ null

kDecorationGfx_845413A:: @ 845413A
    .incbin "baserom.gba", 0x45413A, 0x2 @ null

kDecorationGfx_845413C:: @ 845413C
    .incbin "baserom.gba", 0x45413C, 0x2 @ null

kDecorationGfx_845413E:: @ 845413E
    .incbin "baserom.gba", 0x45413E, 0x2 @ null

kDecorationGfx_8454140:: @ 8454140
    .incbin "baserom.gba", 0x454140, 0x2 @ null

kDecorationGfx_8454142:: @ 8454142
    .incbin "baserom.gba", 0x454142, 0x12 @ null

kDecorationGfx_8454154:: @ 8454154
    .incbin "baserom.gba", 0x454154, 0x12 @ null

kDecorationGfx_8454166:: @ 8454166
    .incbin "baserom.gba", 0x454166, 0x12 @ null

kDecorationGfx_8454178:: @ 8454178
    .incbin "baserom.gba", 0x454178, 0x12 @ null

kDecorationGfx_845418A:: @ 845418A
    .incbin "baserom.gba", 0x45418A, 0x12 @ null

kDecorationGfx_845419C:: @ 845419C
    .incbin "baserom.gba", 0x45419C, 0x12 @ null

kDecorationGfx_84541AE:: @ 84541AE
    .incbin "baserom.gba", 0x4541AE, 0x12 @ null

kDecorationGfx_84541C0:: @ 84541C0
    .incbin "baserom.gba", 0x4541C0, 0x2 @ null

kDecorationGfx_84541C2:: @ 84541C2
    .incbin "baserom.gba", 0x4541C2, 0x2 @ null

kDecorationGfx_84541C4:: @ 84541C4
    .incbin "baserom.gba", 0x4541C4, 0x2 @ null

kDecorationGfx_84541C6:: @ 84541C6
    .incbin "baserom.gba", 0x4541C6, 0x2 @ null

kDecorationGfx_84541C8:: @ 84541C8
    .incbin "baserom.gba", 0x4541C8, 0x2 @ null

kDecorationGfx_84541CA:: @ 84541CA
    .incbin "baserom.gba", 0x4541CA, 0x4 @ null

kDecorationGfx_84541CE:: @ 84541CE
    .incbin "baserom.gba", 0x4541CE, 0x4 @ null

kDecorationGfx_84541D2:: @ 84541D2
    .incbin "baserom.gba", 0x4541D2, 0x4 @ null

kDecorationGfx_84541D6:: @ 84541D6
    .incbin "baserom.gba", 0x4541D6, 0x4 @ null

kDecorationGfx_84541DA:: @ 84541DA
    .incbin "baserom.gba", 0x4541DA, 0x4 @ null

kDecorationGfx_84541DE:: @ 84541DE
    .incbin "baserom.gba", 0x4541DE, 0x2 @ null

kDecorationGfx_84541E0:: @ 84541E0
    .incbin "baserom.gba", 0x4541E0, 0x2 @ null

kDecorationGfx_84541E2:: @ 84541E2
    .incbin "baserom.gba", 0x4541E2, 0x2 @ null

kDecorationGfx_84541E4:: @ 84541E4
    .incbin "baserom.gba", 0x4541E4, 0x2 @ null

kDecorationGfx_84541E6:: @ 84541E6
    .incbin "baserom.gba", 0x4541E6, 0x2 @ null

kDecorationGfx_84541E8:: @ 84541E8
    .incbin "baserom.gba", 0x4541E8, 0x2 @ null

kDecorationGfx_84541EA:: @ 84541EA
    .incbin "baserom.gba", 0x4541EA, 0x2 @ null

kDecorationGfx_84541EC:: @ 84541EC
    .incbin "baserom.gba", 0x4541EC, 0x2 @ null

kDecorationGfx_84541EE:: @ 84541EE
    .incbin "baserom.gba", 0x4541EE, 0x2 @ null

kDecorationGfx_84541F0:: @ 84541F0
    .incbin "baserom.gba", 0x4541F0, 0x2 @ null

kDecorationGfx_84541F2:: @ 84541F2
    .incbin "baserom.gba", 0x4541F2, 0x2 @ null

kDecorationGfx_84541F4:: @ 84541F4
    .incbin "baserom.gba", 0x4541F4, 0x2 @ null

kDecorationGfx_84541F6:: @ 84541F6
    .incbin "baserom.gba", 0x4541F6, 0x2 @ null

kDecorationGfx_84541F8:: @ 84541F8
    .incbin "baserom.gba", 0x4541F8, 0x2 @ null

kDecorationGfx_84541FA:: @ 84541FA
    .incbin "baserom.gba", 0x4541FA, 0x2 @ null

kDecorationGfx_84541FC:: @ 84541FC
    .incbin "baserom.gba", 0x4541FC, 0x2 @ null

kDecorationGfx_84541FE:: @ 84541FE
    .incbin "baserom.gba", 0x4541FE, 0x2 @ null

kDecorationGfx_8454200:: @ 8454200
    .incbin "baserom.gba", 0x454200, 0x2 @ null

kDecorationGfx_8454202:: @ 8454202
    .incbin "baserom.gba", 0x454202, 0x2 @ null

kDecorationGfx_8454204:: @ 8454204
    .incbin "baserom.gba", 0x454204, 0x2 @ null

kDecorationGfx_8454206:: @ 8454206
    .incbin "baserom.gba", 0x454206, 0x2 @ null

kDecorationGfx_8454208:: @ 8454208
    .incbin "baserom.gba", 0x454208, 0x2 @ null

kDecorationGfx_845420A:: @ 845420A
    .incbin "baserom.gba", 0x45420A, 0x2 @ null

kDecorationGfx_845420C:: @ 845420C
    .incbin "baserom.gba", 0x45420C, 0x2 @ null

kDecorationGfx_845420E:: @ 845420E
    .incbin "baserom.gba", 0x45420E, 0x2 @ null

kDecorationGfx_8454210:: @ 8454210
    .incbin "baserom.gba", 0x454210, 0x2 @ null

kDecorationGfx_8454212:: @ 8454212
    .incbin "baserom.gba", 0x454212, 0x2 @ null

kDecorationGfx_8454214:: @ 8454214
    .incbin "baserom.gba", 0x454214, 0x2 @ null

kDecorationGfx_8454216:: @ 8454216
    .incbin "baserom.gba", 0x454216, 0x2 @ null

kDecorationGfx_8454218:: @ 8454218
    .incbin "baserom.gba", 0x454218, 0x2 @ null

kDecorationGfx_845421A:: @ 845421A
    .incbin "baserom.gba", 0x45421A, 0x2 @ null

kDecorationGfx_845421C:: @ 845421C
    .incbin "baserom.gba", 0x45421C, 0x2 @ null

kDecorationGfx_845421E:: @ 845421E
    .incbin "baserom.gba", 0x45421E, 0x2 @ null

kDecorationGfx_8454220:: @ 8454220
    .incbin "baserom.gba", 0x454220, 0x2 @ null

kDecorationGfx_8454222:: @ 8454222
    .incbin "baserom.gba", 0x454222, 0x2 @ null

kDecorationGfx_8454224:: @ 8454224
    .incbin "baserom.gba", 0x454224, 0x2 @ null

kDecorationGfx_8454226:: @ 8454226
    .incbin "baserom.gba", 0x454226, 0x2 @ null

kDecorationGfx_8454228:: @ 8454228
    .incbin "baserom.gba", 0x454228, 0x2 @ null

kDecorationGfx_845422A:: @ 845422A
    .incbin "baserom.gba", 0x45422A, 0x2 @ null

kDecorationGfx_845422C:: @ 845422C
    .incbin "baserom.gba", 0x45422C, 0x2 @ null

kDecorationGfx_845422E:: @ 845422E
    .incbin "baserom.gba", 0x45422E, 0x2 @ null

kDecorationGfx_8454230:: @ 8454230
    .incbin "baserom.gba", 0x454230, 0x2 @ null

kDecorationGfx_8454232:: @ 8454232
    .incbin "baserom.gba", 0x454232, 0x2 @ null

kDecorationGfx_8454234:: @ 8454234
    .incbin "baserom.gba", 0x454234, 0x2 @ null

kDecorationGfx_8454236:: @ 8454236
    .incbin "baserom.gba", 0x454236, 0x2 @ null

kText_8454238:: @ 8454238
    .string "A small desk built\n"
    .string "for one.$"

kText_8454254:: @ 8454254
    .string "A small desk built in\n"
    .string "the shape of a POKé\n"
    .string "BALL.$"

kText_8454284:: @ 8454284
    .string "A large desk made\n"
    .string "of steel. Put some\n"
    .string "decorations on it.$"

kText_84542BC:: @ 84542BC
    .string "A large desk made\n"
    .string "of wood. Put some\n"
    .string "decorations on it.$"

kText_84542F3:: @ 84542F3
    .string "A large desk made\n"
    .string "of leaves. Put some\n"
    .string "decorations on it.$"

kText_845432C:: @ 845432C
    .string "A huge desk made\n"
    .string "of glass. Holds lots\n"
    .string "of decorations.$"

kText_8454362:: @ 8454362
    .string "A huge desk made\n"
    .string "of brick. Holds lots\n"
    .string "of decorations.$"

kText_8454398:: @ 8454398
    .string "A huge desk made\n"
    .string "of logs. Put lots of\n"
    .string "decorations on it.$"

kText_84543D1:: @ 84543D1
    .string "A huge desk made\n"
    .string "of rocks. Holds\n"
    .string "many decorations.$"

kText_8454404:: @ 8454404
    .string "A small chair made\n"
    .string "for one.$"

kText_8454420:: @ 8454420
    .string "A small chair built\n"
    .string "in the shape of a\n"
    .string "POKé BALL.$"

kText_8454451:: @ 8454451
    .string "A small chair made\n"
    .string "of steel.$"

kText_845446E:: @ 845446E
    .string "A small chair made\n"
    .string "of glass.$"

kText_845448B:: @ 845448B
    .string "A small chair made\n"
    .string "of leaves.$"

kText_84544A9:: @ 84544A9
    .string "A small chair made\n"
    .string "of wood.$"

kText_84544C5:: @ 84544C5
    .string "A small chair made\n"
    .string "of brick.$"

kText_84544E2:: @ 84544E2
    .string "A small chair made\n"
    .string "of logs.$"

kText_84544FE:: @ 84544FE
    .string "A small chair made\n"
    .string "of rock.$"

kText_845451A:: @ 845451A
    .string "A vivid red potted\n"
    .string "plant.$"

kText_8454534:: @ 8454534
    .string "A flowering tropical\n"
    .string "plant in a pot.$"

kText_8454559:: @ 8454559
    .string "A pot of cute\n"
    .string "flowers.$"

kText_8454570:: @ 8454570
    .string "A large pot with\n"
    .string "many colorful\n"
    .string "flowers.$"

kText_8454598:: @ 8454598
    .string "A large, umbrella-\n"
    .string "shaped plant in a\n"
    .string "big pot.$"

kText_84545C6:: @ 84545C6
    .string "A large, impressive\n"
    .string "plant in a big pot.$"

kText_84545EE:: @ 84545EE
    .string "A red-colored brick.\n"
    .string "Decorations can be\n"
    .string "placed on top.$"

kText_8454625:: @ 8454625
    .string "A yellow-colored\n"
    .string "brick. Put some\n"
    .string "decorations on top.$"

kText_845465A:: @ 845465A
    .string "A blue-colored\n"
    .string "brick. Put some\n"
    .string "decorations on top.$"

kText_845468D:: @ 845468D
    .string "A red balloon filled\n"
    .string "with water. Bursts\n"
    .string "if stepped on.$"

kText_84546C4:: @ 84546C4
    .string "A blue balloon filled\n"
    .string "with water. Bursts\n"
    .string "if stepped on.$"

kText_84546FC:: @ 84546FC
    .string "A yellow balloon\n"
    .string "filled with water.\n"
    .string "Pops if stepped on.$"

kText_8454734:: @ 8454734
    .string "A large red tent.\n"
    .string "You can hide inside\n"
    .string "it.$"

kText_845475E:: @ 845475E
    .string "A large blue tent.\n"
    .string "You can hide inside\n"
    .string "it.$"

kText_8454789:: @ 8454789
    .string "Place over a hole to\n"
    .string "cross to the other\n"
    .string "side.$"

kText_84547B7:: @ 84547B7
    .string "Use to slide down\n"
    .string "from the platform.$"

kText_84547DC:: @ 84547DC
    .string "A small fence that\n"
    .string "blocks passage.$"

kText_84547FF:: @ 84547FF
    .string "A small fence that\n"
    .string "blocks passage.$"

kText_8454822:: @ 8454822
    .string "An old large tire.\n"
    .string "Decorations can be\n"
    .string "placed on top.$"

kText_8454857:: @ 8454857
    .string "A large pedestal\n"
    .string "with steps.$"

kText_8454874:: @ 8454874
    .string "A large ball of mud.\n"
    .string "Crumbles if stepped\n"
    .string "on.$"

kText_84548A1:: @ 84548A1
    .string "A weird door that\n"
    .string "people can walk\n"
    .string "right through.$"

kText_84548D2:: @ 84548D2
    .string "An ornament made\n"
    .string "of sand. Crumbles if\n"
    .string "touched.$"

kText_8454901:: @ 8454901
    .string "Awarded for 50\n"
    .string "straight wins at\n"
    .string "the BATTLE TOWER.$"

kText_8454933:: @ 8454933
    .string "Awarded for 100\n"
    .string "straight wins at\n"
    .string "the BATTLE TOWER.$"

kText_8454966:: @ 8454966
    .string "A glass replica of\n"
    .string "a famous sculpture\n"
    .string "at the ART MUSEUM.$"

kText_845499F:: @ 845499F
    .string "A small, gray-\n"
    .string "colored toy TV.$"

kText_84549BE:: @ 84549BE
    .string "A toy TV modeled\n"
    .string "in the image of a\n"
    .string "SEEDOT.$"

kText_84549E9:: @ 84549E9
    .string "A toy TV modeled\n"
    .string "in the image of a\n"
    .string "SKITTY.$"

kText_8454A14:: @ 8454A14
    .string "An odd mat that\n"
    .string "glitters if stepped\n"
    .string "on.$"

kText_8454A3C:: @ 8454A3C
    .string "A trick mat that\n"
    .string "jumps when it is\n"
    .string "stepped on.$"

kText_8454A6A:: @ 8454A6A
    .string "A trick mat that\n"
    .string "spins around when\n"
    .string "stepped on.$"

kText_8454A99:: @ 8454A99
    .string "A mat that plays\n"
    .string "a low C note when\n"
    .string "stepped on.$"

kText_8454AC8:: @ 8454AC8
    .string "A mat that plays\n"
    .string "a D note when\n"
    .string "stepped on.$"

kText_8454AF3:: @ 8454AF3
    .string "A mat that plays\n"
    .string "an E note when\n"
    .string "stepped on.$"

kText_8454B1F:: @ 8454B1F
    .string "A mat that plays\n"
    .string "an F note when\n"
    .string "stepped on.$"

kText_8454B4B:: @ 8454B4B
    .string "A mat that plays\n"
    .string "a G note when\n"
    .string "stepped on.$"

kText_8454B76:: @ 8454B76
    .string "A mat that plays\n"
    .string "an A note when\n"
    .string "stepped on.$"

kText_8454BA2:: @ 8454BA2
    .string "A mat that plays\n"
    .string "a B note when\n"
    .string "stepped on.$"

kText_8454BCD:: @ 8454BCD
    .string "A mat that plays\n"
    .string "a high C note when\n"
    .string "stepped on.$"

kText_8454BFD:: @ 8454BFD
    .string "A mat designed with\n"
    .string "a SURF image.\n"
    .string "Put items on top.$"

kText_8454C31:: @ 8454C31
    .string "A mat designed with\n"
    .string "a THUNDER image.\n"
    .string "Put items on top.$"

kText_8454C68:: @ 8454C68
    .string "A mat designed with\n"
    .string "a FIRE BLAST image.\n"
    .string "Put items on top.$"

kText_8454CA2:: @ 8454CA2
    .string "A mat with a POWDER\n"
    .string "SNOW image design.\n"
    .string "Put items on top.$"

kText_8454CDB:: @ 8454CDB
    .string "A mat designed with\n"
    .string "an ATTRACT image.\n"
    .string "Put items on top.$"

kText_8454D13:: @ 8454D13
    .string "A mat designed with\n"
    .string "a FISSURE image.\n"
    .string "Put items on top.$"

kText_8454D4A:: @ 8454D4A
    .string "A mat designed with\n"
    .string "a SPIKES image.\n"
    .string "Put items on top.$"

kText_8454D80:: @ 8454D80
    .string "A small poster\n"
    .string "printed with POKé\n"
    .string "BALLS.$"

kText_8454DA8:: @ 8454DA8
    .string "A small poster with\n"
    .string "a TREECKO print.$"

kText_8454DCD:: @ 8454DCD
    .string "A small poster with\n"
    .string "a TORCHIC print.$"

kText_8454DF2:: @ 8454DF2
    .string "A small poster with\n"
    .string "a MUDKIP print.$"

kText_8454E16:: @ 8454E16
    .string "A small poster with\n"
    .string "an AZURILL print.$"

kText_8454E3C:: @ 8454E3C
    .string "A large poster with\n"
    .string "a PIKACHU and\n"
    .string "PICHU print.$"

kText_8454E6B:: @ 8454E6B
    .string "A large poster with\n"
    .string "a SEVIPER print.$"

kText_8454E90:: @ 8454E90
    .string "A large poster with\n"
    .string "a RELICANTH print.$"

kText_8454EB7:: @ 8454EB7
    .string "A large poster with\n"
    .string "a WINGULL print.$"

kText_8454EDC:: @ 8454EDC
    .string "A large poster with\n"
    .string "a SMOOCHUM print.$"

kText_8454F02:: @ 8454F02
    .string "A PICHU doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_8454F2D:: @ 8454F2D
    .string "A PIKACHU doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_8454F5A:: @ 8454F5A
    .string "A MARILL doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_8454F86:: @ 8454F86
    .string "A TOGEPI doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_8454FB2:: @ 8454FB2
    .string "A CYNDAQUIL doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_8454FE1:: @ 8454FE1
    .string "A CHIKORITA doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_8455010:: @ 8455010
    .string "A TOTODILE doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_845503E:: @ 845503E
    .string "A JIGGLYPUFF doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_845506E:: @ 845506E
    .string "A MEOWTH doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_845509A:: @ 845509A
    .string "A CLEFAIRY doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_84550C8:: @ 84550C8
    .string "A DITTO doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_84550F3:: @ 84550F3
    .string "A SMOOCHUM doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_8455121:: @ 8455121
    .string "A TREECKO doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_845514E:: @ 845514E
    .string "A TORCHIC doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_845517B:: @ 845517B
    .string "A MUDKIP doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_84551A7:: @ 84551A7
    .string "A DUSKULL doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_84551D4:: @ 84551D4
    .string "A WYNAUT doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_8455200:: @ 8455200
    .string "A BALTOY doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_845522C:: @ 845522C
    .string "A KECLEON doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_8455259:: @ 8455259
    .string "An AZURILL doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_8455287:: @ 8455287
    .string "A SKITTY doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_84552B3:: @ 84552B3
    .string "A SWABLU doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_84552DF:: @ 84552DF
    .string "A GULPIN doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_845530B:: @ 845530B
    .string "A LOTAD doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_8455336:: @ 8455336
    .string "A SEEDOT doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_8455362:: @ 8455362
    .string "A PIKACHU cushion.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_8455392:: @ 8455392
    .string "A MARILL cushion.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_84553C1:: @ 84553C1
    .string "A SMOOCHUM\n"
    .string "cushion. Place it on\n"
    .string "a mat or a desk.$"

kText_84553F2:: @ 84553F2
    .string "A ZIGZAGOON\n"
    .string "cushion. Place it on\n"
    .string "a mat or a desk.$"

kText_8455424:: @ 8455424
    .string "A SPINDA cushion.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_8455453:: @ 8455453
    .string "A SABLEYE cushion.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_8455483:: @ 8455483
    .string "A BALL cushion.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_84554B0:: @ 84554B0
    .string "A grass-mark\n"
    .string "cushion. Place it on\n"
    .string "a mat or a desk.$"

kText_84554E3:: @ 84554E3
    .string "A fire-mark\n"
    .string "cushion. Place it on\n"
    .string "a mat or a desk.$"

kText_8455515:: @ 8455515
    .string "A water-mark\n"
    .string "cushion. Place it on\n"
    .string "a mat or a desk.$"

kText_8455548:: @ 8455548
    .string "A large doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_8455573:: @ 8455573
    .string "A large doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_845559E:: @ 845559E
    .string "A large doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_84555C9:: @ 84555C9
    .string "A large doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_84555F4:: @ 84555F4
    .string "A large doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_845561F:: @ 845561F
    .string "A large doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_845564A:: @ 845564A
    .string "A large doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_8455675:: @ 8455675
    .string "A large doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_84556A0:: @ 84556A0
    .string "A large doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

kText_84556CB:: @ 84556CB
    .string "A large doll.\n"
    .string "Place it on a mat\n"
    .string "or a desk.$"

    .align 2
kDecorations:: @ 84556F8
    .byte 0
    .string "SMALL DESK$", 16
    .byte 0
    .byte 0
    .byte 0
    .2byte 0
    .space 2
    .4byte kText_8454238
    .4byte kDecorationGfx_8454004

    .byte 1
    .string "SMALL DESK$", 16
    .byte 0
    .byte 0
    .byte 0
    .2byte 3000
    .space 2
    .4byte kText_8454238
    .4byte kDecorationGfx_8454004

    .byte 2
    .string "POKéMON DESK$", 16
    .byte 0
    .byte 0
    .byte 0
    .2byte 3000
    .space 2
    .4byte kText_8454254
    .4byte kDecorationGfx_8454006

    .byte 3
    .string "HEAVY DESK$", 16
    .byte 0
    .byte 9
    .byte 0
    .2byte 6000
    .space 2
    .4byte kText_8454284
    .4byte kDecorationGfx_8454008

    .byte 4
    .string "RAGGED DESK$", 16
    .byte 0
    .byte 9
    .byte 0
    .2byte 6000
    .space 2
    .4byte kText_84542BC
    .4byte kDecorationGfx_8454014

    .byte 5
    .string "COMFORT DESK$", 16
    .byte 0
    .byte 9
    .byte 0
    .2byte 6000
    .space 2
    .4byte kText_84542F3
    .4byte kDecorationGfx_8454020

    .byte 6
    .string "PRETTY DESK$", 16
    .byte 0
    .byte 8
    .byte 0
    .2byte 9000
    .space 2
    .4byte kText_845432C
    .4byte kDecorationGfx_845402C

    .byte 7
    .string "BRICK DESK$", 16
    .byte 0
    .byte 8
    .byte 0
    .2byte 9000
    .space 2
    .4byte kText_8454362
    .4byte kDecorationGfx_845403E

    .byte 8
    .string "CAMP DESK$", 16
    .byte 0
    .byte 8
    .byte 0
    .2byte 9000
    .space 2
    .4byte kText_8454398
    .4byte kDecorationGfx_8454050

    .byte 9
    .string "HARD DESK$", 16
    .byte 0
    .byte 8
    .byte 0
    .2byte 9000
    .space 2
    .4byte kText_84543D1
    .4byte kDecorationGfx_8454062

    .byte 10
    .string "SMALL CHAIR$", 16
    .byte 1
    .byte 0
    .byte 1
    .2byte 2000
    .space 2
    .4byte kText_8454404
    .4byte kDecorationGfx_8454074

    .byte 11
    .string "POKéMON CHAIR$", 16
    .byte 1
    .byte 0
    .byte 1
    .2byte 2000
    .space 2
    .4byte kText_8454420
    .4byte kDecorationGfx_8454076

    .byte 12
    .string "HEAVY CHAIR$", 16
    .byte 1
    .byte 0
    .byte 1
    .2byte 2000
    .space 2
    .4byte kText_8454451
    .4byte kDecorationGfx_8454078

    .byte 13
    .string "PRETTY CHAIR$", 16
    .byte 1
    .byte 0
    .byte 1
    .2byte 2000
    .space 2
    .4byte kText_845446E
    .4byte kDecorationGfx_845407A

    .byte 14
    .string "COMFORT CHAIR$", 16
    .byte 1
    .byte 0
    .byte 1
    .2byte 2000
    .space 2
    .4byte kText_845448B
    .4byte kDecorationGfx_845407C

    .byte 15
    .string "RAGGED CHAIR$", 16
    .byte 1
    .byte 0
    .byte 1
    .2byte 2000
    .space 2
    .4byte kText_84544A9
    .4byte kDecorationGfx_845407E

    .byte 16
    .string "BRICK CHAIR$", 16
    .byte 1
    .byte 0
    .byte 1
    .2byte 2000
    .space 2
    .4byte kText_84544C5
    .4byte kDecorationGfx_8454080

    .byte 17
    .string "CAMP CHAIR$", 16
    .byte 1
    .byte 0
    .byte 1
    .2byte 2000
    .space 2
    .4byte kText_84544E2
    .4byte kDecorationGfx_8454082

    .byte 18
    .string "HARD CHAIR$", 16
    .byte 1
    .byte 0
    .byte 1
    .2byte 2000
    .space 2
    .4byte kText_84544FE
    .4byte kDecorationGfx_8454084

    .byte 19
    .string "RED PLANT$", 16
    .byte 2
    .byte 5
    .byte 2
    .2byte 3000
    .space 2
    .4byte kText_845451A
    .4byte kDecorationGfx_8454086

    .byte 20
    .string "TROPICAL PLANT$", 16
    .byte 2
    .byte 5
    .byte 2
    .2byte 3000
    .space 2
    .4byte kText_8454534
    .4byte kDecorationGfx_845408A

    .byte 21
    .string "PRETTY FLOWERS$", 16
    .byte 2
    .byte 5
    .byte 2
    .2byte 3000
    .space 2
    .4byte kText_8454559
    .4byte kDecorationGfx_845408E

    .byte 22
    .string "COLORFUL PLANT$", 16
    .byte 2
    .byte 4
    .byte 2
    .2byte 5000
    .space 2
    .4byte kText_8454570
    .4byte kDecorationGfx_8454092

    .byte 23
    .string "BIG PLANT$", 16
    .byte 2
    .byte 4
    .byte 2
    .2byte 5000
    .space 2
    .4byte kText_8454598
    .4byte kDecorationGfx_845409A

    .byte 24
    .string "GORGEOUS PLANT$", 16
    .byte 2
    .byte 4
    .byte 2
    .2byte 5000
    .space 2
    .4byte kText_84545C6
    .4byte kDecorationGfx_84540A2

    .byte 25
    .string "RED BRICK$", 16
    .byte 0
    .byte 5
    .byte 3
    .2byte 500
    .space 2
    .4byte kText_84545EE
    .4byte kDecorationGfx_84540AA

    .byte 26
    .string "YELLOW BRICK$", 16
    .byte 0
    .byte 5
    .byte 3
    .2byte 500
    .space 2
    .4byte kText_8454625
    .4byte kDecorationGfx_84540AE

    .byte 27
    .string "BLUE BRICK$", 16
    .byte 0
    .byte 5
    .byte 3
    .2byte 500
    .space 2
    .4byte kText_845465A
    .4byte kDecorationGfx_84540B2

    .byte 28
    .string "RED BALLOON$", 16
    .byte 1
    .byte 0
    .byte 3
    .2byte 500
    .space 2
    .4byte kText_845468D
    .4byte kDecorationGfx_84540B6

    .byte 29
    .string "BLUE BALLOON$", 16
    .byte 1
    .byte 0
    .byte 3
    .2byte 500
    .space 2
    .4byte kText_84546C4
    .4byte kDecorationGfx_84540B8

    .byte 30
    .string "YELLOW BALLOON$", 16
    .byte 1
    .byte 0
    .byte 3
    .2byte 500
    .space 2
    .4byte kText_84546FC
    .4byte kDecorationGfx_84540BA

    .byte 31
    .string "RED TENT$", 16
    .byte 1
    .byte 8
    .byte 3
    .2byte 10000
    .space 2
    .4byte kText_8454734
    .4byte kDecorationGfx_84540BC

    .byte 32
    .string "BLUE TENT$", 16
    .byte 1
    .byte 8
    .byte 3
    .2byte 10000
    .space 2
    .4byte kText_845475E
    .4byte kDecorationGfx_84540CE

    .byte 33
    .string "SOLID BOARD$", 16
    .byte 1
    .byte 5
    .byte 3
    .2byte 3000
    .space 2
    .4byte kText_8454789
    .4byte kDecorationGfx_84540E0

    .byte 34
    .string "SLIDE$", 16
    .byte 1
    .byte 7
    .byte 3
    .2byte 8000
    .space 2
    .4byte kText_84547B7
    .4byte kDecorationGfx_84540E4

    .byte 35
    .string "FENCE LENGTH$", 16
    .byte 0
    .byte 0
    .byte 3
    .2byte 500
    .space 2
    .4byte kText_84547DC
    .4byte kDecorationGfx_84540F4

    .byte 36
    .string "FENCE WIDTH$", 16
    .byte 0
    .byte 0
    .byte 3
    .2byte 500
    .space 2
    .4byte kText_84547FF
    .4byte kDecorationGfx_84540F6

    .byte 37
    .string "TIRE$", 16
    .byte 0
    .byte 4
    .byte 3
    .2byte 800
    .space 2
    .4byte kText_8454822
    .4byte kDecorationGfx_84540F8

    .byte 38
    .string "STAND$", 16
    .byte 1
    .byte 3
    .byte 3
    .2byte 7000
    .space 2
    .4byte kText_8454857
    .4byte kDecorationGfx_8454100

    .byte 39
    .string "MUD BALL$", 16
    .byte 1
    .byte 0
    .byte 3
    .2byte 200
    .space 2
    .4byte kText_8454874
    .4byte kDecorationGfx_8454110

    .byte 40
    .string "BREAKABLE DOOR$", 16
    .byte 1
    .byte 5
    .byte 3
    .2byte 3000
    .space 2
    .4byte kText_84548A1
    .4byte kDecorationGfx_8454112

    .byte 41
    .string "SAND ORNAMENT$", 16
    .byte 2
    .byte 5
    .byte 3
    .2byte 3000
    .space 2
    .4byte kText_84548D2
    .4byte kDecorationGfx_8454116

    .byte 42
    .string "SILVER SHIELD$", 16
    .byte 2
    .byte 5
    .byte 3
    .2byte 0
    .space 2
    .4byte kText_8454901
    .4byte kDecorationGfx_845411A

    .byte 43
    .string "GOLD SHIELD$", 16
    .byte 2
    .byte 5
    .byte 3
    .2byte 0
    .space 2
    .4byte kText_8454933
    .4byte kDecorationGfx_845411E

    .byte 44
    .string "GLASS ORNAMENT$", 16
    .byte 2
    .byte 5
    .byte 3
    .2byte 0
    .space 2
    .4byte kText_8454966
    .4byte kDecorationGfx_8454122

    .byte 45
    .string "TV$", 16
    .byte 0
    .byte 0
    .byte 3
    .2byte 3000
    .space 2
    .4byte kText_845499F
    .4byte kDecorationGfx_8454126

    .byte 46
    .string "ROUND TV$", 16
    .byte 0
    .byte 0
    .byte 3
    .2byte 4000
    .space 2
    .4byte kText_84549BE
    .4byte kDecorationGfx_8454128

    .byte 47
    .string "CUTE TV$", 16
    .byte 0
    .byte 0
    .byte 3
    .2byte 4000
    .space 2
    .4byte kText_84549E9
    .4byte kDecorationGfx_845412A

    .byte 48
    .string "GLITTER MAT$", 16
    .byte 1
    .byte 0
    .byte 4
    .2byte 2000
    .space 2
    .4byte kText_8454A14
    .4byte kDecorationGfx_845412C

    .byte 49
    .string "JUMP MAT$", 16
    .byte 1
    .byte 0
    .byte 4
    .2byte 2000
    .space 2
    .4byte kText_8454A3C
    .4byte kDecorationGfx_845412E

    .byte 50
    .string "SPIN MAT$", 16
    .byte 1
    .byte 0
    .byte 4
    .2byte 2000
    .space 2
    .4byte kText_8454A6A
    .4byte kDecorationGfx_8454130

    .byte 51
    .string "C Low NOTE MAT$", 16
    .byte 1
    .byte 0
    .byte 4
    .2byte 500
    .space 2
    .4byte kText_8454A99
    .4byte kDecorationGfx_8454132

    .byte 52
    .string "D NOTE MAT$", 16
    .byte 1
    .byte 0
    .byte 4
    .2byte 500
    .space 2
    .4byte kText_8454AC8
    .4byte kDecorationGfx_8454134

    .byte 53
    .string "E NOTE MAT$", 16
    .byte 1
    .byte 0
    .byte 4
    .2byte 500
    .space 2
    .4byte kText_8454AF3
    .4byte kDecorationGfx_8454136

    .byte 54
    .string "F NOTE MAT$", 16
    .byte 1
    .byte 0
    .byte 4
    .2byte 500
    .space 2
    .4byte kText_8454B1F
    .4byte kDecorationGfx_8454138

    .byte 55
    .string "G NOTE MAT$", 16
    .byte 1
    .byte 0
    .byte 4
    .2byte 500
    .space 2
    .4byte kText_8454B4B
    .4byte kDecorationGfx_845413A

    .byte 56
    .string "A NOTE MAT$", 16
    .byte 1
    .byte 0
    .byte 4
    .2byte 500
    .space 2
    .4byte kText_8454B76
    .4byte kDecorationGfx_845413C

    .byte 57
    .string "B NOTE MAT$", 16
    .byte 1
    .byte 0
    .byte 4
    .2byte 500
    .space 2
    .4byte kText_8454BA2
    .4byte kDecorationGfx_845413E

    .byte 58
    .string "C High NOTE MAT$", 16
    .byte 1
    .byte 0
    .byte 4
    .2byte 500
    .space 2
    .4byte kText_8454BCD
    .4byte kDecorationGfx_8454140

    .byte 59
    .string "SURF MAT$", 16
    .byte 1
    .byte 8
    .byte 4
    .2byte 4000
    .space 2
    .4byte kText_8454BFD
    .4byte kDecorationGfx_8454142

    .byte 60
    .string "THUNDER MAT$", 16
    .byte 1
    .byte 8
    .byte 4
    .2byte 4000
    .space 2
    .4byte kText_8454C31
    .4byte kDecorationGfx_8454154

    .byte 61
    .string "FIRE BLAST MAT$", 16
    .byte 1
    .byte 8
    .byte 4
    .2byte 4000
    .space 2
    .4byte kText_8454C68
    .4byte kDecorationGfx_8454166

    .byte 62
    .string "POWDER SNOW MAT$", 16
    .byte 1
    .byte 8
    .byte 4
    .2byte 4000
    .space 2
    .4byte kText_8454CA2
    .4byte kDecorationGfx_8454178

    .byte 63
    .string "ATTRACT MAT$", 16
    .byte 1
    .byte 8
    .byte 4
    .2byte 4000
    .space 2
    .4byte kText_8454CDB
    .4byte kDecorationGfx_845418A

    .byte 64
    .string "FISSURE MAT$", 16
    .byte 1
    .byte 8
    .byte 4
    .2byte 4000
    .space 2
    .4byte kText_8454D13
    .4byte kDecorationGfx_845419C

    .byte 65
    .string "SPIKES MAT$", 16
    .byte 1
    .byte 8
    .byte 4
    .2byte 4000
    .space 2
    .4byte kText_8454D4A
    .4byte kDecorationGfx_84541AE

    .byte 66
    .string "BALL POSTER$", 16
    .byte 3
    .byte 0
    .byte 5
    .2byte 1000
    .space 2
    .4byte kText_8454D80
    .4byte kDecorationGfx_84541C0

    .byte 67
    .string "GREEN POSTER$", 16
    .byte 3
    .byte 0
    .byte 5
    .2byte 1000
    .space 2
    .4byte kText_8454DA8
    .4byte kDecorationGfx_84541C2

    .byte 68
    .string "RED POSTER$", 16
    .byte 3
    .byte 0
    .byte 5
    .2byte 1000
    .space 2
    .4byte kText_8454DCD
    .4byte kDecorationGfx_84541C4

    .byte 69
    .string "BLUE POSTER$", 16
    .byte 3
    .byte 0
    .byte 5
    .2byte 1000
    .space 2
    .4byte kText_8454DF2
    .4byte kDecorationGfx_84541C6

    .byte 70
    .string "CUTE POSTER$", 16
    .byte 3
    .byte 0
    .byte 5
    .2byte 1000
    .space 2
    .4byte kText_8454E16
    .4byte kDecorationGfx_84541C8

    .byte 71
    .string "PIKA POSTER$", 16
    .byte 3
    .byte 1
    .byte 5
    .2byte 1500
    .space 2
    .4byte kText_8454E3C
    .4byte kDecorationGfx_84541CA

    .byte 72
    .string "LONG POSTER$", 16
    .byte 3
    .byte 1
    .byte 5
    .2byte 1500
    .space 2
    .4byte kText_8454E6B
    .4byte kDecorationGfx_84541CE

    .byte 73
    .string "SEA POSTER$", 16
    .byte 3
    .byte 1
    .byte 5
    .2byte 1500
    .space 2
    .4byte kText_8454E90
    .4byte kDecorationGfx_84541D2

    .byte 74
    .string "SKY POSTER$", 16
    .byte 3
    .byte 1
    .byte 5
    .2byte 1500
    .space 2
    .4byte kText_8454EB7
    .4byte kDecorationGfx_84541D6

    .byte 75
    .string "KISS POSTER$", 16
    .byte 3
    .byte 1
    .byte 5
    .2byte 1500
    .space 2
    .4byte kText_8454EDC
    .4byte kDecorationGfx_84541DA

    .byte 76
    .string "PICHU DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_8454F02
    .4byte kDecorationGfx_84541DE

    .byte 77
    .string "PIKACHU DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_8454F2D
    .4byte kDecorationGfx_84541E0

    .byte 78
    .string "MARILL DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_8454F5A
    .4byte kDecorationGfx_84541E2

    .byte 79
    .string "TOGEPI DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_8454F86
    .4byte kDecorationGfx_84541E4

    .byte 80
    .string "CYNDAQUIL DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_8454FB2
    .4byte kDecorationGfx_84541E6

    .byte 81
    .string "CHIKORITA DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_8454FE1
    .4byte kDecorationGfx_84541E8

    .byte 82
    .string "TOTODILE DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_8455010
    .4byte kDecorationGfx_84541EA

    .byte 83
    .string "JIGGLYPUFF DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_845503E
    .4byte kDecorationGfx_84541EC

    .byte 84
    .string "MEOWTH DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_845506E
    .4byte kDecorationGfx_84541EE

    .byte 85
    .string "CLEFAIRY DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_845509A
    .4byte kDecorationGfx_84541F0

    .byte 86
    .string "DITTO DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_84550C8
    .4byte kDecorationGfx_84541F2

    .byte 87
    .string "SMOOCHUM DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_84550F3
    .4byte kDecorationGfx_84541F4

    .byte 88
    .string "TREECKO DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_8455121
    .4byte kDecorationGfx_84541F6

    .byte 89
    .string "TORCHIC DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_845514E
    .4byte kDecorationGfx_84541F8

    .byte 90
    .string "MUDKIP DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_845517B
    .4byte kDecorationGfx_84541FA

    .byte 91
    .string "DUSKULL DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_84551A7
    .4byte kDecorationGfx_84541FC

    .byte 92
    .string "WYNAUT DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_84551D4
    .4byte kDecorationGfx_84541FE

    .byte 93
    .string "BALTOY DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_8455200
    .4byte kDecorationGfx_8454200

    .byte 94
    .string "KECLEON DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_845522C
    .4byte kDecorationGfx_8454202

    .byte 95
    .string "AZURILL DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_8455259
    .4byte kDecorationGfx_8454204

    .byte 96
    .string "SKITTY DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_8455287
    .4byte kDecorationGfx_8454206

    .byte 97
    .string "SWABLU DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_84552B3
    .4byte kDecorationGfx_8454208

    .byte 98
    .string "GULPIN DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_84552DF
    .4byte kDecorationGfx_845420A

    .byte 99
    .string "LOTAD DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_845530B
    .4byte kDecorationGfx_845420C

    .byte 100
    .string "SEEDOT DOLL$", 16
    .byte 4
    .byte 0
    .byte 6
    .2byte 3000
    .space 2
    .4byte kText_8455336
    .4byte kDecorationGfx_845420E

    .byte 101
    .string "PIKA CUSHION$", 16
    .byte 4
    .byte 0
    .byte 7
    .2byte 2000
    .space 2
    .4byte kText_8455362
    .4byte kDecorationGfx_8454210

    .byte 102
    .string "ROUND CUSHION$", 16
    .byte 4
    .byte 0
    .byte 7
    .2byte 2000
    .space 2
    .4byte kText_8455392
    .4byte kDecorationGfx_8454212

    .byte 103
    .string "KISS CUSHION$", 16
    .byte 4
    .byte 0
    .byte 7
    .2byte 2000
    .space 2
    .4byte kText_84553C1
    .4byte kDecorationGfx_8454214

    .byte 104
    .string "ZIGZAG CUSHION$", 16
    .byte 4
    .byte 0
    .byte 7
    .2byte 2000
    .space 2
    .4byte kText_84553F2
    .4byte kDecorationGfx_8454216

    .byte 105
    .string "SPIN CUSHION$", 16
    .byte 4
    .byte 0
    .byte 7
    .2byte 2000
    .space 2
    .4byte kText_8455424
    .4byte kDecorationGfx_8454218

    .byte 106
    .string "DIAMOND CUSHION$", 16
    .byte 4
    .byte 0
    .byte 7
    .2byte 2000
    .space 2
    .4byte kText_8455453
    .4byte kDecorationGfx_845421A

    .byte 107
    .string "BALL CUSHION$", 16
    .byte 4
    .byte 0
    .byte 7
    .2byte 2000
    .space 2
    .4byte kText_8455483
    .4byte kDecorationGfx_845421C

    .byte 108
    .string "GRASS CUSHION$", 16
    .byte 4
    .byte 0
    .byte 7
    .2byte 2000
    .space 2
    .4byte kText_84554B0
    .4byte kDecorationGfx_845421E

    .byte 109
    .string "FIRE CUSHION$", 16
    .byte 4
    .byte 0
    .byte 7
    .2byte 2000
    .space 2
    .4byte kText_84554E3
    .4byte kDecorationGfx_8454220

    .byte 110
    .string "WATER CUSHION$", 16
    .byte 4
    .byte 0
    .byte 7
    .2byte 2000
    .space 2
    .4byte kText_8455515
    .4byte kDecorationGfx_8454222

    .byte 111
    .string "SNORLAX DOLL$", 16
    .byte 4
    .byte 5
    .byte 6
    .2byte 10000
    .space 2
    .4byte kText_8455548
    .4byte kDecorationGfx_8454224

    .byte 112
    .string "RHYDON DOLL$", 16
    .byte 4
    .byte 5
    .byte 6
    .2byte 10000
    .space 2
    .4byte kText_8455573
    .4byte kDecorationGfx_8454226

    .byte 113
    .string "LAPRAS DOLL$", 16
    .byte 4
    .byte 5
    .byte 6
    .2byte 10000
    .space 2
    .4byte kText_845559E
    .4byte kDecorationGfx_8454228

    .byte 114
    .string "VENUSAUR DOLL$", 16
    .byte 4
    .byte 5
    .byte 6
    .2byte 10000
    .space 2
    .4byte kText_84555C9
    .4byte kDecorationGfx_845422A

    .byte 115
    .string "CHARIZARD DOLL$", 16
    .byte 4
    .byte 5
    .byte 6
    .2byte 10000
    .space 2
    .4byte kText_84555F4
    .4byte kDecorationGfx_845422C

    .byte 116
    .string "BLASTOISE DOLL$", 16
    .byte 4
    .byte 5
    .byte 6
    .2byte 10000
    .space 2
    .4byte kText_845561F
    .4byte kDecorationGfx_845422E

    .byte 117
    .string "WAILMER DOLL$", 16
    .byte 4
    .byte 5
    .byte 6
    .2byte 10000
    .space 2
    .4byte kText_845564A
    .4byte kDecorationGfx_8454230

    .byte 118
    .string "REGIROCK DOLL$", 16
    .byte 4
    .byte 5
    .byte 6
    .2byte 10000
    .space 2
    .4byte kText_8455675
    .4byte kDecorationGfx_8454232

    .byte 119
    .string "REGICE DOLL$", 16
    .byte 4
    .byte 5
    .byte 6
    .2byte 10000
    .space 2
    .4byte kText_84556A0
    .4byte kDecorationGfx_8454234

    .byte 120
    .string "REGISTEEL DOLL$", 16
    .byte 4
    .byte 5
    .byte 6
    .2byte 10000
    .space 2
    .4byte kText_84556CB
    .4byte kDecorationGfx_8454236


kRBoxBar_8456618:: @ 8456618
    .byte 0x0F, 0x01, 0x02

    .align 2
kWindowTemplate_845661C:: @ 845661C
    window_template 0x00, 0x00, 0x00, 0x1E, 0x02, 0x0F, 0x00E9
    window_template 0x00, 0x00, 0x12, 0x1E, 0x02, 0x0F, 0x00AD
    window_template 0x00, 0x00, 0x0E, 0x1E, 0x06, 0x0F, 0x014C

UNK_8456634:: @ 8456634
    .incbin "baserom.gba", 0x456634, 0x4 @ null

kGfx_8456638:: @ 8456638
    .incbin "baserom.gba", 0x456638, 0x60

UNK_8456698:: @ 8456698
    .incbin "baserom.gba", 0x456698, 0x4 @ null

UNK_845669C:: @ 845669C
    .incbin "baserom.gba", 0x45669C, 0x8 @ null

UNK_84566A4:: @ 84566A4
    .incbin "baserom.gba", 0x4566A4, 0x4 @ null

kGfx_84566A8:: @ 84566A8
    .incbin "baserom.gba", 0x4566A8, 0x280

kWindowTemplate_8456928:: @ 8456928
    window_template 0x00, 0x00, 0x0F, 0x1E, 0x05, 0x0F, 0x008F

UNK_8456930:: @ 8456930
    .incbin "baserom.gba", 0x456930, 0x4 @ null

UNK_8456934:: @ 8456934
    .incbin "baserom.gba", 0x456934, 0x4 @ null

UNK_8456938:: @ 8456938
    .incbin "baserom.gba", 0x456938, 0x8 @ null

UNK_8456940:: @ 8456940
    .incbin "baserom.gba", 0x456940, 0x8 @ null

kPointer_8456948:: @ 8456948
    .4byte NULL @ 0
    .4byte NULL @ 0
    .4byte NULL @ 0
    .4byte sub_8113F14 @ 8113F15
    .4byte prev_quest_write_x04_item_usage @ 8113F81
    .4byte sub_8114174 @ 8114175
    .4byte sub_81141D0 @ 81141D1
    .4byte sub_811422C @ 811422D
    .4byte sub_8114288 @ 8114289
    .4byte sub_8114310 @ 8114311
    .4byte sub_8114380 @ 8114381
    .4byte sub_81143F0 @ 81143F1
    .4byte sub_811445C @ 811445D
    .4byte sub_81144EC @ 81144ED
    .4byte sub_8114578 @ 8114579
    .4byte sub_8114604 @ 8114605
    .4byte prev_quest_write_union_room @ 8114711
    .4byte prev_quest_write_chat_with_trainers @ 8114745
    .4byte prev_quest_write_meet_and_trade @ 8114779
    .4byte prev_quest_write_meet_and_battle @ 8114809
    .4byte sub_811488C @ 811488D
    .4byte sub_8114918 @ 8114919
    .4byte sub_8114990 @ 8114991
    .4byte sub_8114A1C @ 8114A1D
    .4byte sub_8114AA0 @ 8114AA1
    .4byte sub_8114B0C @ 8114B0D
    .4byte sub_8114B78 @ 8114B79
    .4byte sub_8114BE4 @ 8114BE5
    .4byte sub_8114C68 @ 8114C69
    .4byte sub_8114CC0 @ 8114CC1
    .4byte prev_quest_write_x1E_gym_victory @ 8114D4D
    .4byte prev_quest_write_x1F_pokeball @ 8114DE9
    .4byte prev_quest_write_x20_elite_four_victory @ 8114FF1
    .4byte prev_quest_write_x21_battle_with_champ @ 8115079
    .4byte prev_quest_write_x22_trainerbattle_victory @ 81151C1
    .4byte prev_quest_write_x23_gym_prepare @ 8115281
    .4byte prev_quest_write_x24_hm_usage @ 8115411
    .4byte prev_quest_write_x25 @ 81154DD
    .4byte sub_81155A4 @ 81155A5
    .4byte NULL @ 0
    .4byte sub_81156D8 @ 81156D9
    .4byte NULL @ 0
    .4byte prev_quest_write_town_arrival @ 81157DD

kPointer_84569F4:: @ 84569F4
    .4byte NULL @ 0
    .4byte NULL @ 0
    .4byte NULL @ 0
    .4byte prev_quest_read_x03_pokemon_switch @ 8113F3D
    .4byte prev_quest_read_x04_item_usage @ 8113FBD
    .4byte prev_quest_read_x05_pokemon_hold @ 8114189
    .4byte prev_quest_read_x06_pokemon_hold_2 @ 81141E5
    .4byte sub_8114240 @ 8114241
    .4byte sub_811429C @ 811429D
    .4byte sub_8114324 @ 8114325
    .4byte sub_8114394 @ 8114395
    .4byte prev_quest_read_x0B_restore_at_pokecenter @ 811443D
    .4byte sub_811448C @ 811448D
    .4byte sub_8114518 @ 8114519
    .4byte sub_81145A4 @ 81145A5
    .4byte sub_811464C @ 811464D
    .4byte prev_quest_read_x10_union_room @ 8114725
    .4byte prev_quest_read_x11_chat_with_trainers @ 8114759
    .4byte prev_quest_read_meet_and_trade @ 81147A9
    .4byte prev_quest_read_meet_and_battle @ 8114835
    .4byte sub_81148BC @ 81148BD
    .4byte sub_8114944 @ 8114945
    .4byte sub_81149D0 @ 81149D1
    .4byte sub_8114A4C @ 8114A4D
    .4byte sub_8114AC8 @ 8114AC9
    .4byte sub_8114B34 @ 8114B35
    .4byte sub_8114BA0 @ 8114BA1
    .4byte sub_8114C0C @ 8114C0D
    .4byte sub_8114C8C @ 8114C8D
    .4byte sub_8114CE4 @ 8114CE5
    .4byte prev_quest_read_gym_victory @ 8114D69
    .4byte prev_quest_read_pokeball @ 8114E69
    .4byte prev_quest_read_x20_elite_four_victory @ 811500D
    .4byte prev_quest_read_x21_battle_with_champ @ 81150CD
    .4byte prev_quest_read_x22_trainerbattle_victory @ 81151DD
    .4byte prev_quest_read_x23_gym_prepare @ 81152BD
    .4byte prev_quest_read_x24_hm_usage @ 8115461
    .4byte sub_8115518 @ 8115519
    .4byte sub_81155E0 @ 81155E1
    .4byte NULL @ 0
    .4byte sub_8115700 @ 8115701
    .4byte NULL @ 0
    .4byte prev_quest_read_town_arrival @ 8115801

kBasicItem_8456AA0:: @ 8456AA0
    .byte 0x08, 0x08, 0x08, 0x08, 0x0A, 0x08, 0x08, 0x08, 0x08, 0x0A, 0x0A, 0x04, 0x10, 0x0C, 0x0C, 0x1A, 0x04, 0x04, 0x10, 0x0C, 0x0A, 0x0A, 0x0A, 0x08, 0x08, 0x08, 0x08, 0x06, 0x06, 0x06, 0x0C, 0x0C, 0x0C, 0x0A, 0x0C, 0x06, 0x08, 0x0E, 0x0E, 0x02, 0x08, 0x04, 0x06

    .align 2
kPointer_8456ACC:: @ 8456ACC
    .4byte kText_841A74E @ 841A74E
    .4byte kText_841A756 @ 841A756
    .4byte kText_841A762 @ 841A762

kPointer_8456AD8:: @ 8456AD8
    .4byte kText_841AF98 @ 841AF98
    .4byte kText_841A762 @ 841A762
    .4byte kText_841AF9F @ 841AF9F

kPointer_8456AE4:: @ 8456AE4
    .4byte kText_841A502 @ 841A502
    .4byte kText_841A506 @ 841A506
    .4byte kText_841AFD1 @ 841AFD1

kPointer_8456AF0:: @ 8456AF0
    .4byte kText_841B09F @ 841B09F
    .4byte kText_841B0A4 @ 841B0A4
    .4byte kText_841B0B5 @ 841B0B5
    .4byte kText_841B0B9 @ 841B0B9
    .4byte kText_841B0B9 @ 841B0B9
    .4byte kText_841B0CD @ 841B0CD
    .4byte kText_841B0CD @ 841B0CD
    .4byte kText_841B0DD @ 841B0DD
    .4byte kText_841B0B5 @ 841B0B5
    .4byte kText_841B0F6 @ 841B0F6
    .4byte kText_841B0F6 @ 841B0F6
    .4byte kText_841B0B5 @ 841B0B5
    .4byte kText_841B0FF @ 841B0FF
    .4byte kText_841B109 @ 841B109
    .4byte kText_841B116 @ 841B116
    .4byte kText_841B11F @ 841B11F
    .4byte kText_841B11F @ 841B11F
    .4byte kText_841B130 @ 841B130
    .4byte kText_841B0B5 @ 841B0B5
    .4byte kText_841B141 @ 841B141
    .4byte kText_841B14B @ 841B14B
    .4byte kText_841B14B @ 841B14B
    .4byte kText_841B15A @ 841B15A
    .4byte kText_841B15A @ 841B15A
    .4byte kText_841B166 @ 841B166
    .4byte kText_841B172 @ 841B172
    .4byte kText_841B180 @ 841B180
    .4byte kText_841B190 @ 841B190
    .4byte kText_841B11F @ 841B11F
    .4byte kText_841B11F @ 841B11F
    .4byte kText_841B1A3 @ 841B1A3
    .4byte kText_841B1B7 @ 841B1B7
    .4byte kText_841B1C7 @ 841B1C7
    .4byte kText_841B0B5 @ 841B0B5
    .4byte kText_841B1DA @ 841B1DA
    .4byte kText_841B1E5 @ 841B1E5
    .4byte kText_841B1F4 @ 841B1F4
    .4byte kText_841B0B5 @ 841B0B5
    .4byte kText_841B200 @ 841B200
    .4byte kText_841B20E @ 841B20E
    .4byte kText_841B0B5 @ 841B0B5
    .4byte kText_841B21C @ 841B21C
    .4byte kText_841B226 @ 841B226
    .4byte kText_841B226 @ 841B226
    .4byte kText_841B236 @ 841B236
    .4byte kText_841B0B5 @ 841B0B5
    .4byte kText_841B246 @ 841B246
    .4byte kText_841B25B @ 841B25B
    .4byte kText_841B25B @ 841B25B
    .4byte kText_841B268 @ 841B268
    .4byte kText_841B277 @ 841B277

kPointer_8456BBC:: @ 8456BBC
    .4byte kText_841A53A @ 841A53A
    .4byte kText_841AD9E @ 841AD9E
    .4byte kText_841ADC8 @ 841ADC8
    .4byte kText_841ADFF @ 841ADFF
    .4byte kText_841AE1E @ 841AE1E
    .4byte kText_841AE48 @ 841AE48
    .4byte kText_841AEA7 @ 841AEA7
    .4byte kText_841AEDC @ 841AEDC
    .4byte kText_841AFD6 @ 841AFD6
    .4byte kText_841B005 @ 841B005

kLocationActivityMap:: @ 8456BE4
    .byte 0x03, 0x04, 0x05, 0x08, 0x08, 0x07, 0x07, 0x01, 0x05, 0x07, 0x07, 0x05, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x05, 0x08, 0x07, 0x07, 0x07, 0x07, 0x08, 0x08, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x02, 0x05, 0x00, 0x08, 0x06, 0x05, 0x00, 0x00, 0x05, 0x09, 0x07, 0x07, 0x09, 0x05, 0x00, 0x07, 0x07, 0x08, 0x07

kBasicItem_8456C17:: @ 8456C17
    .byte 0x5A, 0x5B, 0x5D, 0x5E, 0x5F, 0x62, 0x60, 0x59

    .align 2
kPointer_8456C20:: @ 8456C20
    .4byte kText_841AC51 @ 841AC51
    .4byte kText_841ABAB @ 841ABAB
    .4byte kText_841ABCD @ 841ABCD
    .4byte kText_841AC2A @ 841AC2A
    .4byte kText_841ABF9 @ 841ABF9
    .4byte kText_841AC93 @ 841AC93
    .4byte kText_841ACBC @ 841ACBC
    .4byte kText_841AD69 @ 841AD69
    .4byte kText_841AD1D @ 841AD1D
    .4byte kText_841A90C @ 841A90C
    .4byte kText_841A8E0 @ 841A8E0
    .4byte kText_841AD3C @ 841AD3C

kBasicItem_8456C50:: @ 8456C50
    .2byte 0x0891, 0x0892, 0x0893, 0x0894, 0x0895, 0x0896, 0x0897, 0x0898, 0x0899, 0x089A, 0x089B, 0x089C, 0x089D, 0x089E, 0x089F, 0x08A0, 0x08A1

    .align 2
kPointer_8456C74:: @ 8456C74
    .4byte kText_84571AC @ 84571AC
    .4byte kText_8459394 @ 8459394
    .4byte kText_84593A4 @ 84593A4
    .4byte kText_84593B4 @ 84593B4
    .4byte kText_84593C4 @ 84593C4
    .4byte kText_84593D4 @ 84593D4
    .4byte kText_84593E4 @ 84593E4
    .4byte kText_84593F4 @ 84593F4
    .4byte kText_84593DC @ 84593DC
    .4byte kText_8459400 @ 8459400
    .4byte kText_8459410 @ 8459410
    .4byte kText_845941C @ 845941C
    .4byte kText_845942C @ 845942C
    .4byte kText_8459434 @ 8459434
    .4byte kText_8459440 @ 8459440
    .4byte kText_84571AC @ 84571AC
    .4byte kText_84571AC @ 84571AC
    .4byte kText_84571AC @ 84571AC
    .4byte kText_84571AC @ 84571AC
    .4byte kText_84571AC @ 84571AC
    .4byte kText_84571AC @ 84571AC
    .4byte kText_84593E4 @ 84593E4
    .4byte kText_84593F4 @ 84593F4

kWindowTemplate_8456CD0:: @ 8456CD0
    window_template 0x00, 0x00, 0x00, 0x1E, 0x02, 0x0F, 0x0008

kBasicItem_8456CD8:: @ 8456CD8
    .4byte 0x00000201, 0x00000202, 0x00000403, 0x00000204, 0x00002509, 0x0000250A, 0x0000350B, 0x0000350D, 0x0000350E

kWindowTemplate_8456CFC:: @ 8456CFC
    window_template 0x00, 0x01, 0x03, 0x0D, 0x0A, 0x0F, 0x0044

kWindowTemplate_8456D04:: @ 8456D04
    window_template 0x00, 0x10, 0x03, 0x07, 0x04, 0x0F, 0x00C6

kListMenuItem_8456D0C:: @ 8456D0C
    .4byte kText_84571AC, 0
    .4byte kText_84571AC, 1
    .4byte kText_84571AC, 2
    .4byte kText_84571AC, 3
    .4byte kText_84571AC, 4

kListMenuTemplate_8456D34:: @ 8456D34
    .4byte kListMenuItem_8456D0C
    .4byte NULL
    .4byte sub_81164C8
    .2byte 5, 5

    .incbin "baserom.gba", 0x456D44, 0x8 @ unknown

kWindowTemplate_8456D4C:: @ 8456D4C
    window_template 0x00, 0x01, 0x03, 0x11, 0x0A, 0x0F, 0x0044

kWindowTemplate_8456D54:: @ 8456D54
    window_template 0x00, 0x14, 0x03, 0x07, 0x04, 0x0F, 0x00EE

kListMenuItem_8456D5C:: @ 8456D5C
    .4byte kText_84571AC, 0
    .4byte kText_84571AC, 1
    .4byte kText_84571AC, 2
    .4byte kText_84571AC, 3
    .4byte kText_84571AC, 4
    .4byte kText_84571AC, 5
    .4byte kText_84571AC, 6
    .4byte kText_84571AC, 7
    .4byte kText_84571AC, 8
    .4byte kText_84571AC, 9
    .4byte kText_84571AC, 10
    .4byte kText_84571AC, 11
    .4byte kText_84571AC, 12
    .4byte kText_84571AC, 13
    .4byte kText_84571AC, 14
    .4byte kText_84571AC, 15

kListMenuTemplate_8456DDC:: @ 8456DDC
    .4byte kListMenuItem_8456D5C
    .4byte sub_8107AEC
    .4byte sub_8116F94
    .2byte 16, 5

    .incbin "baserom.gba", 0x456DEC, 0x8 @ unknown

kWindowTemplate_8456DF4:: @ 8456DF4
    window_template 0x00, 0x14, 0x06, 0x08, 0x07, 0x0F, 0x0001

kListMenuItem_8456DFC:: @ 8456DFC
    .4byte kText_8459354, 520
    .4byte kText_8459344, 577
    .4byte kText_845934C, 581
    .4byte kText_8459360, 64

kListMenuTemplate_8456E1C:: @ 8456E1C
    .4byte kListMenuItem_8456DFC
    .4byte sub_8107AEC
    .4byte NULL
    .2byte 4, 4

    .incbin "baserom.gba", 0x456E2C, 0x8 @ unknown

kWindowTemplate_8456E34:: @ 8456E34
    window_template 0x00, 0x12, 0x08, 0x0B, 0x05, 0x0F, 0x0001

kListMenuItem_8456E3C:: @ 8456E3C
    .4byte kText_841B6F4, 1
    .4byte kText_8459370, 2
    .4byte kText_8459360, 3

kListMenuTemplate_8456E54:: @ 8456E54
    .4byte kListMenuItem_8456E3C
    .4byte sub_8107AEC
    .4byte NULL
    .2byte 3, 3

    .incbin "baserom.gba", 0x456E64, 0x8 @ unknown

kWindowTemplate_8456E6C:: @ 8456E6C
    window_template 0x00, 0x14, 0x02, 0x09, 0x0B, 0x0F, 0x0001

kListMenuItem_8456E74:: @ 8456E74
    .4byte kTypeNames, 0
    .4byte kTypeNames+0x46, 10
    .4byte kTypeNames+0x4D, 11
    .4byte kTypeNames+0x5B, 13
    .4byte kTypeNames+0x54, 12
    .4byte kTypeNames+0x69, 15
    .4byte kTypeNames+0x1C, 4
    .4byte kTypeNames+0x23, 5
    .4byte kTypeNames+0xE, 2
    .4byte kTypeNames+0x62, 14
    .4byte kTypeNames+0x7, 1
    .4byte kTypeNames+0x15, 3
    .4byte kTypeNames+0x2A, 6
    .4byte kTypeNames+0x31, 7
    .4byte kTypeNames+0x70, 16
    .4byte kTypeNames+0x38, 8
    .4byte kTypeNames+0x77, 17
    .4byte kText_8459360, 18

kListMenuTemplate_8456F04:: @ 8456F04
    .4byte kListMenuItem_8456E74
    .4byte sub_8107AEC
    .4byte NULL
    .2byte 18, 6

    .incbin "baserom.gba", 0x456F14, 0x8 @ unknown

kWindowTemplate_8456F1C:: @ 8456F1C
    window_template 0x00, 0x01, 0x01, 0x1C, 0x02, 0x0D, 0x0001

UNK_8456F24:: @ 8456F24
    .incbin "baserom.gba", 0x456F24, 0x8 @ null

kListMenuItem_8456F2C:: @ 8456F2C
    .4byte kText_84571AC, -3
    .4byte kText_84571AC, 0
    .4byte kText_84571AC, 1
    .4byte kText_84571AC, 2
    .4byte kText_84571AC, 3
    .4byte kText_84571AC, 4
    .4byte kText_84571AC, 5
    .4byte kText_84571AC, 6
    .4byte kText_84571AC, 7
    .4byte kText_8459368, 8

kListMenuTemplate_8456F7C:: @ 8456F7C
    .4byte kListMenuItem_8456F2C
    .4byte sub_8107AEC
    .4byte sub_811ACA4
    .2byte 10, 5

    .incbin "baserom.gba", 0x456F8C, 0x10 @ unknown

kListMenuItem_8456F9C:: @ 8456F9C
    .4byte kText_84571AC, 0
    .4byte kText_84571AC, 1
    .4byte kText_84571AC, 2
    .4byte kText_84571AC, 3
    .4byte kText_84571AC, 4
    .4byte kText_84571AC, 5
    .4byte kText_84571AC, 6
    .4byte kText_84571AC, 7
    .4byte kText_84571AC, 8
    .4byte kText_84571AC, 9
    .4byte kText_84571AC, 10
    .4byte kText_84571AC, 11
    .4byte kText_84571AC, 12
    .4byte kText_84571AC, 13
    .4byte kText_84571AC, 14
    .4byte kText_84571AC, 15

kListMenuTemplate_845701C:: @ 845701C
    .4byte kListMenuItem_8456F9C
    .4byte sub_8107AEC
    .4byte nullsub_112
    .2byte 16, 4

    .incbin "baserom.gba", 0x45702C, 0x8 @ unknown

UNK_8457034:: @ 8457034
    .incbin "baserom.gba", 0x457034, 0x18 @ null

kText_845704C:: @ 845704C
    .string "あ$"

    .align 2
kText_8457050:: @ 8457050
    .string "い$"

    .align 2
kText_8457054:: @ 8457054
    .string "う$"

    .align 2
kText_8457058:: @ 8457058
    .string "え$"

    .align 2
kText_845705C:: @ 845705C
    .string "け$"

    .align 2
kText_8457060:: @ 8457060
    .string "こ$"

    .align 2
kText_8457064:: @ 8457064
    .string "さ$"

    .align 2
kText_8457068:: @ 8457068
    .string "な$"

    .align 2
kText_845706C:: @ 845706C
    .string "に$"

    .align 2
kText_8457070:: @ 8457070
    .string "ぞだでどぶアイ{PKMN}$"

    .align 2
kText_845707C:: @ 845707C
    .string "し$"

    .align 2
kText_8457080:: @ 8457080
    .string "あいうえけこさなにす$"

    .align 2
kText_845708C:: @ 845708C
    .string "あいうえこ$"

    .align 2
kPointer_8457094:: @ 8457094
    .4byte kText_845704C @ 845704C
    .4byte kText_8457050 @ 8457050
    .4byte kText_8457054 @ 8457054
    .4byte kText_8457058 @ 8457058
    .4byte kText_845705C @ 845705C
    .4byte kText_8457060 @ 8457060
    .4byte kText_8457064 @ 8457064
    .4byte kText_8457068 @ 8457068
    .4byte kText_845706C @ 845706C
    .4byte kText_8457070 @ 8457070
    .4byte kText_845707C @ 845707C
    .4byte kText_8457080 @ 8457080
    .4byte kText_845708C @ 845708C

UNK_84570C8:: @ 84570C8
    .incbin "baserom.gba", 0x4570C8, 0x10 @ null

UNK_84570D8:: @ 84570D8
    .incbin "baserom.gba", 0x4570D8, 0x14 @ null

UNK_84570EC:: @ 84570EC
    .incbin "baserom.gba", 0x4570EC, 0x20 @ null

UNK_845710C:: @ 845710C
    .incbin "baserom.gba", 0x45710C, 0xA @ null

UNK_8457116:: @ 8457116
    .incbin "baserom.gba", 0x457116, 0x5 @ null

UNK_845711B:: @ 845711B
    .incbin "baserom.gba", 0x45711B, 0x5 @ null

UNK_8457120:: @ 8457120
    .incbin "baserom.gba", 0x457120, 0x18 @ null

kAsciiString_8457138:: @ 8457138
    debug_path
    .asciz "rfu_union_tool.c"

    .align 2
kAsciiString_8457174:: @ 8457174
    .asciz "0"

    .align 2
kAsciiString_8457178:: @ 8457178
    .asciz "UnionObjWork != NULL"

UNK_845718D:: @ 845718D
    .incbin "baserom.gba", 0x45718D, 0x2 @ null

UNK_845718F:: @ 845718F
    .incbin "baserom.gba", 0x45718F, 0x5 @ null

kVRAMConfig_8457194:: @ 8457194
    .4byte 0x1FC

kWindowTemplate_8457198:: @ 8457198
    window_template 0x00, 0x02, 0x0F, 0x1A, 0x04, 0x0E, 0x0014
    window_template_terminator

UNK_84571A8:: @ 84571A8
    .incbin "baserom.gba", 0x4571A8, 0x4 @ null

kText_84571AC:: @ 84571AC
    .string "$"

    .align 2
UNK_84571B0:: @ 84571B0
    .incbin "baserom.gba", 0x4571B0, 0x4 @ null

UNK_84571B4:: @ 84571B4
    .incbin "baserom.gba", 0x4571B4, 0x4 @ null

kText_84571B8:: @ 84571B8
    .string "Please start over from the beginning.$"

    .align 2
kText_84571E0:: @ 84571E0
    .string "The WIRELESS COMMUNICATION\n"
    .string "SYSTEM search has been canceled.$"

kText_845721C:: @ 845721C
    .string "ともだちからの　れんらくを\n"
    .string "まっています$"

    .align 2
kText_8457234:: @ 8457234
    .string "{STR_VAR_1}! Awaiting\n"
    .string "communication from another player.$"

kText_8457264:: @ 8457264
    .string "{STR_VAR_1}! Awaiting link!\n"
    .string "Press START when everyone’s ready.$"

    .align 2
kText_845729C:: @ 845729C
    .string "シングルバトルを　かいさいする$"

kText_84572AC:: @ 84572AC
    .string "ダブルバトルを　かいさいする$"

    .align 2
kText_84572BC:: @ 84572BC
    .string "マルチバトルを　かいさいする$"

    .align 2
kText_84572CC:: @ 84572CC
    .string "ポケモンこうかんを　かいさいする$"

    .align 2
kText_84572E0:: @ 84572E0
    .string "チャットを　かいさいする$"

    .align 2
kText_84572F0:: @ 84572F0
    .string "ふしぎなカードをくばる$"

kText_84572FC:: @ 84572FC
    .string "ふしぎなニュースをくばる$"

kText_8457309:: @ 8457309
    .string "　　　ふしぎなできごとを　かいさいする$"

    .align 2
kText_8457320:: @ 8457320
    .string "なわとびを　かいさいする$"

    .align 2
kText_8457330:: @ 8457330
    .string "きのみマッシャーを　かいさいする$"

    .align 2
kText_8457344:: @ 8457344
    .string "きのみどりを　かいさいする$"

    .align 2
kText_8457354:: @ 8457354
    .string "ぐるぐるこうかんを　かいさいする$"

    .align 2
kText_8457368:: @ 8457368
    .string "ぐるぐるショップを　かいさいする$"

    .align 2
kPointer_845737C:: @ 845737C
    .4byte kText_845729C @ 845729C
    .4byte kText_84572AC @ 84572AC
    .4byte kText_84572BC @ 84572BC
    .4byte kText_84572CC @ 84572CC
    .4byte kText_84572E0 @ 84572E0
    .4byte kText_84572F0 @ 84572F0
    .4byte kText_84572FC @ 84572FC
    .4byte kText_84572F0 @ 84572F0
    .4byte kText_8457320 @ 8457320
    .4byte kText_8457330 @ 8457330
    .4byte kText_8457344 @ 8457344
    .4byte kText_8457344 @ 8457344
    .4byte kText_8457354 @ 8457354
    .4byte kText_8457368 @ 8457368

kText_84573B4:: @ 84573B4
    .string "1 player\n"
    .string "needed.$"

kText_84573C5:: @ 84573C5
    .string "2 players\n"
    .string "needed.$"

kText_84573D7:: @ 84573D7
    .string "3 players\n"
    .string "needed.$"

kText_84573E9:: @ 84573E9
    .string "あと4にん\n"
    .string "ひつよう$"

kText_84573F4:: @ 84573F4
    .string "2-PLAYER\n"
    .string "MODE$"

kText_8457402:: @ 8457402
    .string "3-PLAYER\n"
    .string "MODE$"

kText_8457410:: @ 8457410
    .string "4-PLAYER\n"
    .string "MODE$"

kText_845741E:: @ 845741E
    .string "5-PLAYER\n"
    .string "MODE$"

kPointer_845742C:: @ 845742C
    .4byte kText_84573B4 @ 84573B4
    .4byte kText_84573F4 @ 84573F4
    .4byte NULL @ 0
    .4byte NULL @ 0
    .4byte NULL @ 0
    .4byte kText_84573D7 @ 84573D7
    .4byte kText_84573C5 @ 84573C5
    .4byte kText_84573B4 @ 84573B4
    .4byte kText_8457410 @ 8457410
    .4byte NULL @ 0
    .4byte kText_84573B4 @ 84573B4
    .4byte kText_84573F4 @ 84573F4
    .4byte kText_8457402 @ 8457402
    .4byte kText_8457410 @ 8457410
    .4byte kText_845741E @ 845741E
    .4byte kText_84573C5 @ 84573C5
    .4byte kText_84573B4 @ 84573B4
    .4byte kText_8457402 @ 8457402
    .4byte kText_8457410 @ 8457410
    .4byte kText_845741E @ 845741E

kText_845747C:: @ 845747C
    .string "{BUTTON B_BUTTON}CANCEL$"

kText_8457485:: @ 8457485
    .string "　　　ため\n"
    .string "さんかしゃ　ぼしゅうちゅう　です！$"

    .align 2
kText_84574A0:: @ 84574A0
    .string "{STR_VAR_2} contacted you for\n"
    .string "{STR_VAR_1}. Accept?$"

    .align 2
kText_84574C4:: @ 84574C4
    .string "{STR_VAR_2} contacted you.\n"
    .string "Will you share {STR_VAR_1}?$"

    .align 2
kText_84574EC:: @ 84574EC
    .string "{STR_VAR_2} contacted you.\n"
    .string "Add to the members?$"

    .align 2
kText_8457514:: @ 8457514
    .string "{STR_VAR_1}!\n"
    .string "Are these members OK?$"

    .align 2
kText_8457530:: @ 8457530
    .string "Cancel {STR_VAR_1} MODE\n"
    .string "with these members?$"

    .align 2
kText_8457554:: @ 8457554
    .string "An “OK” was sent\n"
    .string "to {STR_VAR_1}.$"

kText_845756C:: @ 845756C
    .string "The other TRAINER doesn’t appear\n"
    .string "to be available now…\p"
    .string "$"

    .align 2
kText_84575A4:: @ 84575A4
    .string "You can’t transmit with a TRAINER\n"
    .string "who is too far away.\p"
    .string "$"

kText_84575DC:: @ 84575DC
    .string "The other TRAINER(S) is/are not\n"
    .string "ready yet.\p"
    .string "$"

kPointer_8457608:: @ 8457608
    .4byte kText_84575A4 @ 84575A4
    .4byte kText_84575DC @ 84575DC

kText_8457610:: @ 8457610
    .string "The {STR_VAR_1} MODE with\n"
    .string "these members will be canceled.{PAUSE 90}$"

kText_8457644:: @ 8457644
    .string "There is a member who can no\n"
    .string "longer remain available.\p"
    .string "$"

    .align 2
kPointer_845767C:: @ 845767C
    .4byte kText_845756C @ 845756C
    .4byte kText_8457644 @ 8457644

kText_8457684:: @ 8457684
    .string "The other TRAINER appears\n"
    .string "unavailable…\p"
    .string "$"

kText_84576AC:: @ 84576AC
    .string "{STR_VAR_1} sent back an “OK”!$"

    .align 2
kText_84576C4:: @ 84576C4
    .string "{STR_VAR_1} OK’d your registration as\n"
    .string "a member.$"

    .align 2
kText_84576EC:: @ 84576EC
    .string "{STR_VAR_1} replied, “No…”\p"
    .string "$"

    .align 2
kText_8457700:: @ 8457700
    .string "{STR_VAR_1}!\n"
    .string "Awaiting other members!$"

kText_845771C:: @ 845771C
    .string "Quit being a member?$"

    .align 2
kText_8457734:: @ 8457734
    .string "You stopped being a member.\p"
    .string "$"

    .align 2
kPointer_8457754:: @ 8457754
    .4byte NULL @ 0
    .4byte kText_8457644 @ 8457644
    .4byte kText_8457684 @ 8457684
    .4byte NULL @ 0
    .4byte NULL @ 0
    .4byte NULL @ 0
    .4byte kText_84576EC @ 84576EC
    .4byte NULL @ 0
    .4byte NULL @ 0
    .4byte kText_8457734 @ 8457734

kText_845777C:: @ 845777C
    .string "The WIRELESS COMMUNICATION\n"
    .string "SYSTEM link has been established.$"

    .align 2
kText_84577BC:: @ 84577BC
    .string "The WIRELESS COMMUNICATION\n"
    .string "SYSTEM link has been dropped…$"

    .align 2
kText_84577F8:: @ 84577F8
    .string "The link with your friend has been\n"
    .string "dropped…$"

kText_8457824:: @ 8457824
    .string "{STR_VAR_1} replied, “No…”$"

    .align 2
kPointer_8457838:: @ 8457838
    .4byte NULL @ 0
    .4byte kText_84577F8 @ 84577F8
    .4byte kText_84577F8 @ 84577F8
    .4byte NULL @ 0
    .4byte NULL @ 0
    .4byte NULL @ 0
    .4byte kText_8457824 @ 8457824

    .incbin "baserom.gba", 0x457854, 0xC @ unknown

kText_8457860:: @ 8457860
    .string "Do you want the {STR_VAR_2}\n"
    .string "MODE?$"

    .align 2
kText_845787C:: @ 845787C
    .string "Do you want the {STR_VAR_2}\n"
    .string "MODE?$"

    .align 2
kPointer_8457898:: @ 8457898
    .4byte kText_8457860 @ 8457860
    .4byte kText_845787C @ 845787C

    .incbin "baserom.gba", 0x4578A0, 0x1C @ unknown

kText_84578BC:: @ 84578BC
    .string "Awaiting {STR_VAR_1}’s response about\n"
    .string "the trade…$"

kText_84578E4:: @ 84578E4
    .string "Communicating{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n"
    .string "{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.$"

    .align 2
kText_8457950:: @ 8457950
    .string "Communicating with {STR_VAR_1}{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n"
    .string "{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.$"

    .align 2
kText_84579BC:: @ 84579BC
    .string "Please wait a while{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n"
    .string "{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.$"

    .align 2
kPointer_8457A34:: @ 8457A34
    .4byte kText_84578E4 @ 84578E4
    .4byte kText_8457950 @ 8457950

kPointer_8457A3C:: @ 8457A3C
    .4byte kText_84579BC @ 84579BC

kText_8457A40:: @ 8457A40
    .string "Hiya! Is there something that you\n"
    .string "wanted to do?$"

kText_8457A70:: @ 8457A70
    .string "Hello!\n"
    .string "Would you like to do something?$"

    .align 2
kText_8457A98:: @ 8457A98
    .string "{STR_VAR_1}: Hiya, we meet again!\n"
    .string "What are you up for this time?$"

kText_8457AD0:: @ 8457AD0
    .string "{STR_VAR_1}: Oh! {PLAYER}, hello!\n"
    .string "Would you like to do something?$"

    .align 2
kPointer_8457B04:: @ 8457B04
    .4byte kText_8457A40 @ 8457A40
    .4byte kText_8457A70 @ 8457A70
    .4byte kText_8457A98 @ 8457A98
    .4byte kText_8457AD0 @ 8457AD0

kText_8457B14:: @ 8457B14
    .string "Want to do something?$"

    .align 2
kText_8457B2C:: @ 8457B2C
    .string "Would you like to do something?$"

kText_8457B4C:: @ 8457B4C
    .string "{STR_VAR_1}: What would you like to\n"
    .string "do now?$"

    .incbin "baserom.gba", 0x457B6F, 0x11 @ unknown

kPointer_8457B80:: @ 8457B80
    .4byte kText_8457B14 @ 8457B14
    .4byte kText_8457B2C @ 8457B2C
    .4byte kText_8457B4C @ 8457B4C
    .4byte kText_8457B4C @ 8457B4C

kText_8457B90:: @ 8457B90
    .string "Somebody has contacted you.{PAUSE 60}$"

    .align 2
kText_8457BB0:: @ 8457BB0
    .string "{STR_VAR_1} has contacted you.{PAUSE 60}$"

    .align 2
kPointer_8457BCC:: @ 8457BCC
    .4byte kText_8457B90 @ 8457B90
    .4byte kText_8457BB0 @ 8457BB0

kText_8457BD4:: @ 8457BD4
    .string "Awaiting a response from\n"
    .string "the other TRAINER…$"

kText_8457C00:: @ 8457C00
    .string "Awaiting a response from\n"
    .string "{STR_VAR_1}…$"

    .align 2
kPointer_8457C20:: @ 8457C20
    .4byte kText_8457BD4 @ 8457BD4
    .4byte kText_8457C00 @ 8457C00

    .incbin "baserom.gba", 0x457C28, 0x20 @ unknown

kText_8457C48:: @ 8457C48
    .string "The other TRAINER showed\n"
    .string "you their TRAINER CARD.\p"
    .string "Would you like to show your\n"
    .string "TRAINER CARD?$"

    .align 2
kText_8457CA4:: @ 8457CA4
    .string "The other TRAINER challenges you\n"
    .string "to battle.\p"
    .string "Will you accept the battle\n"
    .string "challenge?$"

    .align 2
kText_8457CF8:: @ 8457CF8
    .string "The other TRAINER invites you\n"
    .string "to chat.\p"
    .string "Will you accept the chat\n"
    .string "invitation?$"

kText_8457D44:: @ 8457D44
    .string "There is an offer to trade your\n"
    .string "registered Lv. {0xF7}  {0xF7}À\p"
    .string "in exchange for a\n"
    .string "Lv. {0xF7}Á {0xF7}Â.\p"
    .string "Will you accept this trade\n"
    .string "offer?$"

kText_8457DB8:: @ 8457DB8
    .string "There is an offer to trade your\n"
    .string "registered EGG.\l"
    .string "Will you accept this trade offer?$"

    .align 2
kText_8457E0C:: @ 8457E0C
    .string "The chat has been dropped.\p"
    .string "$"

kText_8457E28:: @ 8457E28
    .string "You declined the offer.\p"
    .string "$"

    .align 2
kText_8457E44:: @ 8457E44
    .string "You declined the offer.\p"
    .string "$"

    .align 2
kText_8457E60:: @ 8457E60
    .string "The chat was ended.\p"
    .string "$"

    .align 2
kPointer_8457E78:: @ 8457E78
    .4byte kText_8457C48 @ 8457C48
    .4byte kText_8457CA4 @ 8457CA4
    .4byte kText_8457CF8 @ 8457CF8
    .4byte kText_8457D44 @ 8457D44

kText_8457E88:: @ 8457E88
    .string "Oh, hey! We’re in a chat right now.\n"
    .string "Want to join us?$"

    .align 2
kText_8457EC0:: @ 8457EC0
    .string "{STR_VAR_1}: Hey, {PLAYER}!\n"
    .string "We’re having a chat right now.\l"
    .string "Want to join us?$"

    .align 2
kText_8457F00:: @ 8457F00
    .string "Oh, hi! We’re having a chat now.\n"
    .string "Would you like to join us?$"

kText_8457F3C:: @ 8457F3C
    .string "{STR_VAR_1}: Oh, hi, {PLAYER}!\n"
    .string "We’re having a chat now.\l"
    .string "Would you like to join us?$"

kPointer_8457F80:: @ 8457F80
    .4byte kText_8457E88 @ 8457E88
    .4byte kText_8457F00 @ 8457F00
    .4byte kText_8457EC0 @ 8457EC0
    .4byte kText_8457F3C @ 8457F3C

kText_8457F90:: @ 8457F90
    .string "……\n"
    .string "The TRAINER appears to be busy…\p"
    .string "$"

kText_8457FB4:: @ 8457FB4
    .string "A battle, huh?\n"
    .string "All right, just give me some time.$"

    .align 2
kText_8457FE8:: @ 8457FE8
    .string "You want to chat, huh?\n"
    .string "Sure, just wait a little.$"

    .align 2
kText_845801C:: @ 845801C
    .string "Sure thing! As my “Greetings,”\n"
    .string "here’s my TRAINER CARD.$"

    .align 2
kText_8458054:: @ 8458054
    .string "A battle? Of course, but I need\n"
    .string "time to get ready.$"

    .align 2
kText_8458088:: @ 8458088
    .string "Did you want to chat?\n"
    .string "Okay, but please wait a moment.$"

    .align 2
kText_84580C0:: @ 84580C0
    .string "As my introduction, I’ll show you\n"
    .string "my TRAINER CARD.$"

    .align 2
kPointer_84580F4:: @ 84580F4
    .4byte kText_8457FB4 @ 8457FB4
    .4byte kText_8457FE8 @ 8457FE8
    .4byte NULL @ 0
    .4byte kText_845801C @ 845801C
    .4byte kText_8458054 @ 8458054
    .4byte kText_8458088 @ 8458088
    .4byte NULL @ 0
    .4byte kText_84580C0 @ 84580C0

    .incbin "baserom.gba", 0x458114, 0x18 @ unknown

kText_845812C:: @ 845812C
    .string "Thanks for waiting!\n"
    .string "Let’s get our battle started!{PAUSE 60}$"

    .align 2
kText_8458164:: @ 8458164
    .string "All right!\n"
    .string "Let’s chat!{PAUSE 60}$"

    .align 2
kText_8458180:: @ 8458180
    .string "Sorry I made you wait!\n"
    .string "Let’s get started!{PAUSE 60}$"

    .align 2
kText_84581B0:: @ 84581B0
    .string "Sorry I made you wait!\n"
    .string "Let’s chat.{PAUSE 60}$"

    .align 2
kText_84581D8:: @ 84581D8
    .string "The trade will be started.{PAUSE 60}$"

    .align 2
kText_84581F8:: @ 84581F8
    .string "The battle will be started.{PAUSE 60}$"

    .align 2
kText_8458218:: @ 8458218
    .string "Entering the chat…{PAUSE 60}$"

    .align 2
kPointer_8458230:: @ 8458230
    .4byte kText_84581F8 @ 84581F8
    .4byte kText_8458218 @ 8458218
    .4byte kText_84581D8 @ 84581D8
    .4byte kText_84581F8 @ 84581F8
    .4byte kText_8458218 @ 8458218
    .4byte kText_84581D8 @ 84581D8
    .4byte kText_845812C @ 845812C
    .4byte kText_8458164 @ 8458164
    .4byte kText_84581D8 @ 84581D8
    .4byte kText_8458180 @ 8458180
    .4byte kText_84581B0 @ 84581B0
    .4byte kText_84581D8 @ 84581D8

kText_8458260:: @ 8458260
    .string "Sorry! My POKéMON don’t seem to\n"
    .string "be feeling too well right now.\l"
    .string "Let me battle you another time.\p"
    .string "$"

kText_84582C0:: @ 84582C0
    .string "I’m terribly sorry, but my POKéMON\n"
    .string "aren’t feeling well…\p"
    .string "Let’s battle another time.\p"
    .string "$"

kPointer_8458314:: @ 8458314
    .4byte kText_8458260 @ 8458260
    .4byte kText_84582C0 @ 84582C0

kText_845831C:: @ 845831C
    .string "Huh? My TRAINER CARD…\n"
    .string "Where’d it go now?\l"
    .string "Sorry! I’ll show you another time!\p"
    .string "$"

    .align 2
kText_845836C:: @ 845836C
    .string "Oh? Now where did I put my\n"
    .string "TRAINER CARD?…\l"
    .string "Sorry! I’ll show you later!\p"
    .string "$"

    .align 2
kPointer_84583B4:: @ 84583B4
    .4byte kText_845831C @ 845831C
    .4byte kText_845836C @ 845836C

kText_84583BC:: @ 84583BC
    .string "If you want to do something with\n"
    .string "me, just give me a shout!\p"
    .string "$"

kText_84583F8:: @ 84583F8
    .string "If you want to do something with\n"
    .string "me, don’t be shy.\p"
    .string "$"

kPointer_845842C:: @ 845842C
    .4byte kText_84583BC @ 84583BC
    .4byte kText_84583F8 @ 84583F8

kText_8458434:: @ 8458434
    .string "Whoops! Sorry, but I have to do\n"
    .string "something else.\l"
    .string "Another time, okay?\p"
    .string "$"

    .align 2
kText_845847C:: @ 845847C
    .string "If you want to battle, you need\n"
    .string "two POKéMON that are below\l"
    .string "Lv. 30.\p"
    .string "$"

kText_84584C0:: @ 84584C0
    .string "For a battle, you need two\n"
    .string "POKéMON that are below Lv. 30.\p"
    .string "$"

    .align 2
kText_84584FC:: @ 84584FC
    .string "Oh, all right.\n"
    .string "Come see me anytime, okay?\p"
    .string "$"

    .align 2
kText_8458528:: @ 8458528
    .string "Oh…\n"
    .string "Please come by anytime.\p"
    .string "$"

    .align 2
kPointer_8458548:: @ 8458548
    .4byte kText_84584FC @ 84584FC
    .4byte kText_8458528 @ 8458528

kText_8458550:: @ 8458550
    .string "Oh, sorry!\n"
    .string "I just can’t right this instant.\l"
    .string "Let’s chat another time.\p"
    .string "$"

    .align 2
kText_8458598:: @ 8458598
    .string "Oh, I’m sorry.\n"
    .string "I have too much to do right now.\l"
    .string "Let’s chat some other time.\p"
    .string "$"

    .align 2
kPointer_84585E8:: @ 84585E8
    .4byte kText_8458550 @ 8458550
    .4byte kText_8458598 @ 8458598

kText_84585F0:: @ 84585F0
    .string "Whoa!\n"
    .string "I can tell you’re pretty tough!\p"
    .string "$"

    .align 2
kText_8458618:: @ 8458618
    .string "You used that move?\n"
    .string "That’s good strategy!\p"
    .string "$"

    .align 2
kText_8458644:: @ 8458644
    .string "Way to go!\n"
    .string "That was an eye-opener!\p"
    .string "$"

kText_8458668:: @ 8458668
    .string "Oh! How could you use that\n"
    .string "POKéMON in that situation?\p"
    .string "$"

    .align 2
kText_84586A0:: @ 84586A0
    .string "That POKéMON…\n"
    .string "It’s been raised really well!\p"
    .string "$"

    .align 2
kText_84586D0:: @ 84586D0
    .string "That’s it!\n"
    .string "This is the right move now!\p"
    .string "$"

kText_84586F8:: @ 84586F8
    .string "That’s awesome!\n"
    .string "You can battle that way?\p"
    .string "$"

    .align 2
kText_8458724:: @ 8458724
    .string "You have exquisite timing for\n"
    .string "switching POKéMON!\p"
    .string "$"

    .align 2
kPointer_8458758:: @ 8458758
    .4byte kText_84585F0 @ 84585F0
    .4byte kText_8458618 @ 8458618
    .4byte kText_8458644 @ 8458644
    .4byte kText_8458668 @ 8458668
    .4byte kText_84586A0 @ 84586A0
    .4byte kText_84586D0 @ 84586D0
    .4byte kText_84586F8 @ 84586F8
    .4byte kText_8458724 @ 8458724

kText_8458778:: @ 8458778
    .string "Oh, I see!\n"
    .string "This is educational!\p"
    .string "$"

    .align 2
kText_845879C:: @ 845879C
    .string "Don’t say anything funny anymore!\n"
    .string "I’m sore from laughing!\p"
    .string "$"

    .align 2
kText_84587D8:: @ 84587D8
    .string "Oh?\n"
    .string "Something like that happened.\p"
    .string "$"

    .align 2
kText_84587FC:: @ 84587FC
    .string "Hmhm… What?\n"
    .string "So is this what you’re saying?\p"
    .string "$"

kText_8458828:: @ 8458828
    .string "Is that right?\n"
    .string "I didn’t know that.\p"
    .string "$"

kText_845884C:: @ 845884C
    .string "Ahaha!\n"
    .string "What is that about?\p"
    .string "$"

kText_8458868:: @ 8458868
    .string "Yes, that’s exactly it!\n"
    .string "That’s what I meant.\p"
    .string "$"

    .align 2
kText_8458898:: @ 8458898
    .string "In other words…\n"
    .string "Yes! That’s right!\p"
    .string "$"

kPointer_84588BC:: @ 84588BC
    .4byte kText_8458778 @ 8458778
    .4byte kText_845879C @ 845879C
    .4byte kText_84587D8 @ 84587D8
    .4byte kText_84587FC @ 84587FC
    .4byte kText_8458828 @ 8458828
    .4byte kText_845884C @ 845884C
    .4byte kText_8458868 @ 8458868
    .4byte kText_8458898 @ 8458898

kText_84588DC:: @ 84588DC
    .string "I’m just showing my TRAINER CARD\n"
    .string "as my way of greeting.\p"
    .string "$"

    .align 2
kText_8458918:: @ 8458918
    .string "I hope I get to know you better!\p"
    .string "$"

    .align 2
kText_845893C:: @ 845893C
    .string "We’re showing each other our\n"
    .string "TRAINER CARDS to get acquainted.\p"
    .string "$"

    .align 2
kText_845897C:: @ 845897C
    .string "Glad to meet you.\n"
    .string "Please don’t be a stranger!\p"
    .string "$"

    .align 2
kPointer_84589AC:: @ 84589AC
    .4byte kText_84588DC @ 84588DC
    .4byte kText_8458918 @ 8458918
    .4byte kText_845893C @ 845893C
    .4byte kText_845897C @ 845897C

kText_84589BC:: @ 84589BC
    .string "Yeahah!\n"
    .string "I really wanted this POKéMON!\p"
    .string "$"

    .align 2
kText_84589E4:: @ 84589E4
    .string "Finally, a trade got me that\n"
    .string "POKéMON I’d wanted a long time.\p"
    .string "$"

    .align 2
kText_8458A24:: @ 8458A24
    .string "I’m trading POKéMON right now.\p"
    .string "$"

kText_8458A44:: @ 8458A44
    .string "I finally got that POKéMON I\n"
    .string "wanted in a trade!\p"
    .string "$"

    .align 2
kPointer_8458A78:: @ 8458A78
    .4byte kText_84589BC @ 84589BC
    .4byte kText_84589E4 @ 84589E4
    .4byte NULL @ 0
    .4byte NULL @ 0
    .4byte kText_8458A24 @ 8458A24
    .4byte kText_8458A44 @ 8458A44
    .4byte NULL @ 0
    .4byte NULL @ 0

kText_8458A98:: @ 8458A98
    .string "{STR_VAR_1} checked the\n"
    .string "TRADING BOARD.\p"
    .string "$"

    .align 2
kText_8458AB8:: @ 8458AB8
    .string "Welcome to the TRADING BOARD.\p"
    .string "You may register your POKéMON\n"
    .string "and offer it up for a trade.\p"
    .string "Would you like to register one of\n"
    .string "your POKéMON?$"

    .align 2
kText_8458B44:: @ 8458B44
    .string "This TRADING BOARD is used for\n"
    .string "offering a POKéMON for a trade.\p"
    .string "All you need to do is register a\n"
    .string "POKéMON for a trade.\p"
    .string "Another TRAINER may offer a party\n"
    .string "POKéMON in return for the trade.\p"
    .string "We hope you will register POKéMON\n"
    .string "and trade them with many, many\l"
    .string "other TRAINERS.\p"
    .string "Would you like to register one of\n"
    .string "your POKéMON?$"

    .align 2
kText_8458C80:: @ 8458C80
    .string "こうかんけいじばん　の　とうろくが\n"
    .string "かんりょう　しました\p"
    .string "ごりよう　ありがとう\n"
    .string "ございました！\p"
    .string "$"

    .align 2
kText_8458CB4:: @ 8458CB4
    .string "けいじばんに　だれも　ポケモンを\n"
    .string "とうろく　していません\p"
    .string "\n"
    .string "$"

    .align 2
kText_8458CD4:: @ 8458CD4
    .string "Please choose the type of POKéMON\n"
    .string "that you would like in the trade.\n"
    .string "$"

    .align 2
kText_8458D1C:: @ 8458D1C
    .string "Which of your party POKéMON will\n"
    .string "you offer in trade?\p"
    .string "$"

    .align 2
kText_8458D54:: @ 8458D54
    .string "Registration has been canceled.\p"
    .string "$"

    .align 2
kText_8458D78:: @ 8458D78
    .string "Registration has been completed.\p"
    .string "$"

    .align 2
kText_8458D9C:: @ 8458D9C
    .string "The trade has been canceled.\p"
    .string "$"

    .align 2
kText_8458DBC:: @ 8458DBC
    .string "Cancel the registration of your\n"
    .string "Lv. {STR_VAR_2} {STR_VAR_1}?$"

    .align 2
kText_8458DE8:: @ 8458DE8
    .string "Cancel the registration of your\n"
    .string "EGG?$"

    .align 2
kText_8458E10:: @ 8458E10
    .string "The registration has been canceled.\p"
    .string "$"

kText_8458E35:: @ 8458E35
    .string "　　　こうかんを　きぼうしているひとを\n"
    .string "ひょうじします$"

kText_8458E51:: @ 8458E51
    .string "　　　こうかん　したい　トレーナーを\n"
    .string "えらんで　ください$"

    .align 2
kText_8458E70:: @ 8458E70
    .string "Would you like to ask {STR_VAR_1} to\n"
    .string "make a trade?$"

kText_8458E9A:: @ 8458E9A
    .string "　　‥‥\n"
    .string "あいての　へんじを　まっています$"

kText_8458EB0:: @ 8458EB0
    .string "あなたが　こうかんにだす\n"
    .string "ポケモンが　とうろくされていません\p"
    .string "$"

kText_8458ED0:: @ 8458ED0
    .string "You don’t have a {STR_VAR_2}-type\n"
    .string "POKéMON that {STR_VAR_1} wants.\p"
    .string "$"

    .align 2
kText_8458F04:: @ 8458F04
    .string "You don’t have an EGG that\n"
    .string "{STR_VAR_1} wants.\p"
    .string "$"

    .align 2
kText_8458F2C:: @ 8458F2C
    .string "{STR_VAR_1} can’t make a trade for\n"
    .string "your POKéMON right now.\p"
    .string "$"

    .align 2
kText_8458F60:: @ 8458F60
    .string "You can’t make a trade for\n"
    .string "{STR_VAR_1}’s POKéMON right now.\p"
    .string "$"

kPointer_8458F94:: @ 8458F94
    .4byte kText_8458F2C @ 8458F2C
    .4byte kText_8458F60 @ 8458F60

kText_8458F9C:: @ 8458F9C
    .string "Your trade offer was rejected.\p"
    .string "$"

kText_8458FBC:: @ 8458FBC
    .string "EGG TRADE$"

    .align 2
kText_8458FC8:: @ 8458FC8
    .string "{BUTTON DPAD_VERTICAL}CHOOSE  {BUTTON A_BUTTON}JOIN  {BUTTON B_BUTTON}CANCEL$"

    .align 2
kText_8458FE4:: @ 8458FE4
    .string "Please choose a TRAINER.$"

    .align 2
kText_8459000:: @ 8459000
    .string "Please choose a TRAINER for\n"
    .string "a SINGLE BATTLE.$"

    .align 2
kText_8459030:: @ 8459030
    .string "Please choose a TRAINER for\n"
    .string "a DOUBLE BATTLE.$"

    .align 2
kText_8459060:: @ 8459060
    .string "Please choose the LEADER\n"
    .string "for a MULTI BATTLE.$"

    .align 2
kText_8459090:: @ 8459090
    .string "Please choose the TRAINER to\n"
    .string "trade with.$"

    .align 2
kText_84590BC:: @ 84590BC
    .string "Please choose the TRAINER who is\n"
    .string "sharing WONDER CARDS.$"

    .align 2
kText_84590F4:: @ 84590F4
    .string "Please choose the TRAINER who is\n"
    .string "sharing WONDER NEWS.$"

    .align 2
kText_845912C:: @ 845912C
    .string "Jump with mini POKéMON!\n"
    .string "Please choose the LEADER.$"

    .align 2
kText_8459160:: @ 8459160
    .string "BERRY CRUSH!\n"
    .string "Please choose the LEADER.$"

    .align 2
kText_8459188:: @ 8459188
    .string "DODRIO BERRY-PICKING!\n"
    .string "Please choose the LEADER.$"

kPointer_84591B8:: @ 84591B8
    .4byte kText_8459000 @ 8459000
    .4byte kText_8459030 @ 8459030
    .4byte kText_8459060 @ 8459060
    .4byte kText_8459090 @ 8459090
    .4byte kText_845912C @ 845912C
    .4byte kText_8459160 @ 8459160
    .4byte kText_8459188 @ 8459188
    .4byte kText_84590BC @ 84590BC
    .4byte kText_84590F4 @ 84590F4

kText_84591DC:: @ 84591DC
    .string "Searching for a WIRELESS\n"
    .string "COMMUNICATION SYSTEM. Wait...$"

kText_8459213:: @ 8459213
    .string "　ダブルバトルでは　2ひき　いじょうの\n"
    .string "ポケモンが　ひつようです\p"
    .string "$"

    .align 2
kText_8459238:: @ 8459238
    .string "Awaiting {STR_VAR_1}’s response…$"

kText_8459250:: @ 8459250
    .string "{STR_VAR_1} has been asked to register\n"
    .string "you as a member. Please wait.$"

kText_845928C:: @ 845928C
    .string "Awaiting a response from the\n"
    .string "WIRELESS COMMUNICATION SYSTEM.$"

kText_84592C8:: @ 84592C8
    .string "ほかの　さんかしゃが　そろうまで\n"
    .string "しょうしょう　おまちください$"

kText_84592E8:: @ 84592E8
    .string "No CARDS appear to be shared \n"
    .string "right now.$"

    .align 2
kText_8459314:: @ 8459314
    .string "No NEWS appears to be shared\n"
    .string "right now.$"

kPointer_845933C:: @ 845933C
    .4byte kText_84592E8 @ 84592E8
    .4byte kText_8459314 @ 8459314

kText_8459344:: @ 8459344
    .string "BATTLE$"

    .align 2
kText_845934C:: @ 845934C
    .string "CHAT$"

    .align 2
kText_8459354:: @ 8459354
    .string "GREETINGS$"

    .align 2
kText_8459360:: @ 8459360
    .string "EXIT$"

    .align 2
kText_8459368:: @ 8459368
    .string "EXIT$"

    .align 2
kText_8459370:: @ 8459370
    .string "INFO$"

    .align 2
kText_8459378:: @ 8459378
    .string "NAME{CLEAR_TO 60}WANTED{CLEAR_TO 110}OFFER{CLEAR_TO 198}LV.$"

kText_8459394:: @ 8459394
    .string "SINGLE BATTLE$"

    .align 2
kText_84593A4:: @ 84593A4
    .string "DOUBLE BATTLE$"

    .align 2
kText_84593B4:: @ 84593B4
    .string "MULTI BATTLE$"

    .align 2
kText_84593C4:: @ 84593C4
    .string "POKéMON TRADES$"

    .align 2
kText_84593D4:: @ 84593D4
    .string "CHAT$"

    .align 2
kText_84593DC:: @ 84593DC
    .string "CARDS$"

    .align 2
kText_84593E4:: @ 84593E4
    .string "WONDER CARDS$"

    .align 2
kText_84593F4:: @ 84593F4
    .string "WONDER NEWS$"

kText_8459400:: @ 8459400
    .string "POKéMON JUMP$"

    .align 2
kText_8459410:: @ 8459410
    .string "BERRY CRUSH$"

kText_845941C:: @ 845941C
    .string "BERRY-PICKING$"

    .align 2
kText_845942C:: @ 845942C
    .string "SEARCH$"

    .align 2
kText_8459434:: @ 8459434
    .string "{0x39}ñ{0x39}ñ{0x0A}ÂÉ+$"

    .align 2
kText_8459440:: @ 8459440
    .string "¿¡{0x63}{0x71}{0x64}{DOWN_ARROW}-{0x95}$"

    .align 2
kText_845944C:: @ 845944C
    .string "It’s a NORMAL CARD.$"

kText_8459460:: @ 8459460
    .string "It’s a BRONZE CARD!$"

kText_8459474:: @ 8459474
    .string "It’s a COPPER CARD!$"

kText_8459488:: @ 8459488
    .string "It’s a SILVER CARD!$"

kText_845949C:: @ 845949C
    .string "It’s a GOLD CARD!$"

    .align 2
kPointer_84594B0:: @ 84594B0
    .4byte kText_845944C @ 845944C
    .4byte kText_8459460 @ 8459460
    .4byte kText_8459474 @ 8459474
    .4byte kText_8459488 @ 8459488
    .4byte kText_845949C @ 845949C

kText_84594C4:: @ 84594C4
    .string "This is {0xF7}  {0xF7}À’s\n"
    .string "TRAINER CARD…\l"
    .string "{0xF7}Á\p"
    .string "POKéDEX: {0xF7}Â\n"
    .string "TIME:    {0xF7}Ç:{0xF7}È\p"
    .string "$"

    .align 2
kText_8459504:: @ 8459504
    .string "BATTLES: {0xF7}  WINS  {0xF7}Á LOSSES\n"
    .string "TRADES:  {0xF7}Â TIMES\p"
    .string "“{0xF7}Ç {0xF7}È\n"
    .string "{0xF7}É {0xF7}Ê”\p"
    .string "$"

    .align 2
kText_8459544:: @ 8459544
    .string "{0xF7}À: Glad to have met you!{PAUSE 60}$"

    .align 2
kText_8459564:: @ 8459564
    .string "{0xF7}À: Glad to meet you!{PAUSE 60}$"

    .align 2
kPointer_8459580:: @ 8459580
    .4byte kText_8459544 @ 8459544
    .4byte kText_8459564 @ 8459564

kText_8459588:: @ 8459588
    .string "Finished checking {0xF7}À’s\n"
    .string "TRAINER CARD.{PAUSE 60}$"

kText_84595B0:: @ 84595B0
    .string "Canceled reading the Card.$"

    .align 2
kUnknown_84595CC:: @ 84595CC
    .incbin "baserom.gba", 0x4595CC, 0x20 @ null

kMEvent_84595EC:: @ 84595EC
    .4byte 0x12, 0x20, kUnknown_84595CC
    .4byte 0x1, 0x0, NULL
    .4byte 0x14, 0x1B, kText_84595B0
    .4byte 0x1, 0x0, NULL
    .4byte 0x2, 0x14, NULL
    .4byte 0x0, 0x9, NULL

UNK_8459634:: @ 8459634
    .incbin "baserom.gba", 0x459634, 0x8 @ null

kPalette_845963C:: @ 845963C
    .incbin "baserom.gba", 0x45963C, 0x20

kPalette_845965C:: @ 845965C
    .incbin "baserom.gba", 0x45965C, 0x20

kLzGfx_845967C:: @ 845967C
    .incbin "baserom.gba", 0x45967C, 0xBE

    .align 2
kLzTilemap_845973C:: @ 845973C
    .incbin "baserom.gba", 0x45973C, 0x12C

kPalette_8459868:: @ 8459868
    .incbin "baserom.gba", 0x459868, 0x20

kLzGfx_8459888:: @ 8459888
    .incbin "baserom.gba", 0x459888, 0x19

    .align 2
kPalette_84598A4:: @ 84598A4
    .incbin "baserom.gba", 0x4598A4, 0x20

kUGfx_84598C4:: @ 84598C4
    .incbin "baserom.gba", 0x4598C4, 0x7B

    .align 2
kPalette_8459940:: @ 8459940
    .incbin "baserom.gba", 0x459940, 0x20

kUGfx_8459960:: @ 8459960
    .incbin "baserom.gba", 0x459960, 0x1E

    .align 2
kVRAMConfig_8459980:: @ 8459980
    .4byte 0x41F0
    .4byte 0x31CF

kWindowTemplate_8459988:: @ 8459988
    window_template 0x00, 0x01, 0x0F, 0x1C, 0x04, 0x0F, 0x000A
    window_template_terminator

kPointer_8459998:: @ 8459998
    .4byte kText_841B2ED @ 841B2ED
    .4byte kText_841B2F1 @ 841B2F1
    .4byte kText_841B2FF @ 841B2FF

    .incbin "baserom.gba", 0x4599A4, 0x6 @ unknown

UNK_84599AA:: @ 84599AA
    .incbin "baserom.gba", 0x4599AA, 0x8 @ null

kBasicItem_84599B2:: @ 84599B2
    .byte 0xF8, 0xF8, 0x06
    .byte 0xF3, 0x08, 0xF8

kObjTiles_84599B8:: @ 84599B8
    obj_tiles kUGfx_84598C4, 0x80, 2

kObjPal_84599C0:: @ 84599C0
    obj_pal kPalette_84598A4, 2

kObjTiles_84599C8:: @ 84599C8
    obj_tiles kUGfx_8459960, 0x60, 5

kObjPal_84599D0:: @ 84599D0
    obj_pal kPalette_8459940, 5

kOAM_84599D8:: @ 84599D8
    .2byte 0x0300
    .2byte 0xC000
    .2byte 0x0400
    .2byte 0x0000

kAffineAnimCmd_84599E0:: @ 84599E0
    obj_rot_scal_anim_frame 256, 256, 0, 0
    obj_rot_scal_anim_end

kAffineAnimCmd_84599F0:: @ 84599F0
    obj_rot_scal_anim_frame 341, 341, 0, 0
    obj_rot_scal_anim_end

kAffineAnimCmd_8459A00:: @ 8459A00
    obj_rot_scal_anim_frame 426, 426, 0, 0
    obj_rot_scal_anim_end

kAffineAnimCmd_8459A10:: @ 8459A10
    obj_rot_scal_anim_frame 512, 512, 0, 0
    obj_rot_scal_anim_end

kAffineAnimCmds_8459A20:: @ 8459A20
    .4byte kAffineAnimCmd_84599E0 @ 84599E0
    .4byte kAffineAnimCmd_84599F0 @ 84599F0
    .4byte kAffineAnimCmd_8459A00 @ 8459A00
    .4byte kAffineAnimCmd_8459A10 @ 8459A10

kSpriteTemplate_8459A30:: @ 8459A30
    spr_template 0, 0, kOAM_84599D8, kDummySpriteAnimTable, NULL, kAffineAnimCmds_8459A20, objc_nullsub

kAffineAnimCmd_8459A48:: @ 8459A48
    obj_rot_scal_anim_frame 256, 256, 0, 0
    obj_rot_scal_anim_frame -28, -28, 0, 8
    obj_rot_scal_anim_end

kAffineAnimCmd_8459A60:: @ 8459A60
    obj_rot_scal_anim_frame 341, 341, 0, 0
    obj_rot_scal_anim_frame -37, -37, 0, 8
    obj_rot_scal_anim_end

kAffineAnimCmd_8459A78:: @ 8459A78
    obj_rot_scal_anim_frame 426, 426, 0, 0
    obj_rot_scal_anim_frame -47, -47, 0, 8
    obj_rot_scal_anim_end

kAffineAnimCmd_8459A90:: @ 8459A90
    obj_rot_scal_anim_frame 512, 512, 0, 0
    obj_rot_scal_anim_frame -56, -56, 0, 8
    obj_rot_scal_anim_end

kAffineAnimCmds_8459AA8:: @ 8459AA8
    .4byte kAffineAnimCmd_8459A48 @ 8459A48
    .4byte kAffineAnimCmd_8459A60 @ 8459A60
    .4byte kAffineAnimCmd_8459A78 @ 8459A78
    .4byte kAffineAnimCmd_8459A90 @ 8459A90

kOAM_8459AB8:: @ 8459AB8
    .2byte 0x8400
    .2byte 0x0000
    .2byte 0x0400
    .2byte 0x0000

kAnimCmd_8459AC0:: @ 8459AC0
    obj_image_anim_frame 0, 3
    obj_image_anim_end

kAnimCmds_8459AC8:: @ 8459AC8
    .4byte kAnimCmd_8459AC0 @ 8459AC0

kSpriteTemplate_8459ACC:: @ 8459ACC
    spr_template 0, 0, kOAM_8459AB8, kAnimCmds_8459AC8, NULL, kDummySpriteAffineAnimTable, sub_811E7B4

kOAM_8459AE4:: @ 8459AE4
    .2byte 0x0000
    .2byte 0x4000
    .2byte 0x0400
    .2byte 0x0000

kSpriteTemplate_8459AEC:: @ 8459AEC
    spr_template 2, 2, kOAM_8459AE4, kDummySpriteAnimTable, NULL, kDummySpriteAffineAnimTable, sub_811E300

kOAM_8459B04:: @ 8459B04
    .2byte 0x0000
    .2byte 0x0000
    .2byte 0x0000
    .2byte 0x0000

kAnimCmd_8459B0C:: @ 8459B0C
    obj_image_anim_frame 0, 16
    obj_image_anim_frame 1, 8
    obj_image_anim_frame 2, 4
    obj_image_anim_end

kAnimCmd_8459B1C:: @ 8459B1C
    obj_image_anim_frame 1, 4
    obj_image_anim_frame 0, 4
    obj_image_anim_end

kAnimCmds_8459B28:: @ 8459B28
    .4byte kAnimCmd_8459B0C @ 8459B0C
    .4byte kAnimCmd_8459B1C @ 8459B1C

kSpriteTemplate_8459B30:: @ 8459B30
    spr_template 5, 5, kOAM_8459B04, kAnimCmds_8459B28, NULL, kDummySpriteAffineAnimTable, sub_811E520

kPointer_8459B48:: @ 8459B48
    .4byte kText_841B2A9 @ 841B2A9
    .4byte kText_841B2B7 @ 841B2B7
    .4byte kText_841B2BE @ 841B2BE
    .4byte kText_841B2CC @ 841B2CC
    .4byte kText_841B2D4 @ 841B2D4
    .4byte kText_841B2C6 @ 841B2C6

kMoveTutorMoves:: @ 8459B60
    .2byte MOVE_MEGA_PUNCH
    .2byte MOVE_SWORDS_DANCE
    .2byte MOVE_MEGA_KICK
    .2byte MOVE_BODY_SLAM
    .2byte MOVE_DOUBLE_EDGE
    .2byte MOVE_COUNTER
    .2byte MOVE_SEISMIC_TOSS
    .2byte MOVE_MIMIC
    .2byte MOVE_METRONOME
    .2byte MOVE_SOFT_BOILED
    .2byte MOVE_DREAM_EATER
    .2byte MOVE_THUNDER_WAVE
    .2byte MOVE_EXPLOSION
    .2byte MOVE_ROCK_SLIDE
    .2byte MOVE_SUBSTITUTE

kMoveTutorLearnsets:: @ 8459B7E
    .2byte 0b0000000000000000
    .2byte 0b0100000010011010
    .2byte 0b0100000010011010
    .2byte 0b0100000010011010
    .2byte 0b0110000011111111
    .2byte 0b0110000011111111
    .2byte 0b0110000011111111
    .2byte 0b0100000011111101
    .2byte 0b0100000011111101
    .2byte 0b0100000011111101
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0100010010010000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0100000010010010
    .2byte 0b0100000010010000
    .2byte 0b0100000010010000
    .2byte 0b0100000010010000
    .2byte 0b0100100010111000
    .2byte 0b0100100010111000
    .2byte 0b0100000010010000
    .2byte 0b0100000010010000
    .2byte 0b0110000010011000
    .2byte 0b0110000010011000
    .2byte 0b0100100011111101
    .2byte 0b0100100011111101
    .2byte 0b0110000011111010
    .2byte 0b0110000011111010
    .2byte 0b0100000010111000
    .2byte 0b0100000010111000
    .2byte 0b0110000011111101
    .2byte 0b0100000010111000
    .2byte 0b0100000010111000
    .2byte 0b0110000011111101
    .2byte 0b0100111111111101
    .2byte 0b0100111111111101
    .2byte 0b0100000010011000
    .2byte 0b0100000010011000
    .2byte 0b0100110011111101
    .2byte 0b0100110011111101
    .2byte 0b0100000010010000
    .2byte 0b0100000010010000
    .2byte 0b0100000010010010
    .2byte 0b0100000010010010
    .2byte 0b0100000010011010
    .2byte 0b0100000010111010
    .2byte 0b0100000010111010
    .2byte 0b0100000010010000
    .2byte 0b0100000010010000
    .2byte 0b0110000010011000
    .2byte 0b0110000010011000
    .2byte 0b0100010010011000
    .2byte 0b0100010010011000
    .2byte 0b0100000011111101
    .2byte 0b0100000011111101
    .2byte 0b0110000111111101
    .2byte 0b0110000111111101
    .2byte 0b0100000010011000
    .2byte 0b0100000010011000
    .2byte 0b0100000010011000
    .2byte 0b0100000111111101
    .2byte 0b0100000111111101
    .2byte 0b0100110111111101
    .2byte 0b0100110111111101
    .2byte 0b0100110111111101
    .2byte 0b0110000111111101
    .2byte 0b0110000111111101
    .2byte 0b0110000111111101
    .2byte 0b0100000010010010
    .2byte 0b0100000010010010
    .2byte 0b0100000010011010
    .2byte 0b0100000010010010
    .2byte 0b0100000010010010
    .2byte 0b0111000111111001
    .2byte 0b0111000111111001
    .2byte 0b0111000111111101
    .2byte 0b0100000010011000
    .2byte 0b0100000010011000
    .2byte 0b0100110010011000
    .2byte 0b0100110011111101
    .2byte 0b0100100010010000
    .2byte 0b0100100010010000
    .2byte 0b0100000010011010
    .2byte 0b0100000010011000
    .2byte 0b0100000010011000
    .2byte 0b0100000010011000
    .2byte 0b0100000010011000
    .2byte 0b0101000010001000
    .2byte 0b0101000010001000
    .2byte 0b0101000010010000
    .2byte 0b0101000010010000
    .2byte 0b0101010010000000
    .2byte 0b0101010010000000
    .2byte 0b0101010111111101
    .2byte 0b0111000010011000
    .2byte 0b0100110111111101
    .2byte 0b0100110111111101
    .2byte 0b0100000010011010
    .2byte 0b0100000010011010
    .2byte 0b0101100010000000
    .2byte 0b0101100010000000
    .2byte 0b0101010010010000
    .2byte 0b0101010010010000
    .2byte 0b0110000011111111
    .2byte 0b0110000011111111
    .2byte 0b0110000111111101
    .2byte 0b0110000111111101
    .2byte 0b0110010011111111
    .2byte 0b0101000010000000
    .2byte 0b0101000010000000
    .2byte 0b0110000010111010
    .2byte 0b0110000011111111
    .2byte 0b0100111111111101
    .2byte 0b0100000010011010
    .2byte 0b0110000011111101
    .2byte 0b0100000010010000
    .2byte 0b0100000010010000
    .2byte 0b0100000010010000
    .2byte 0b0100000010010000
    .2byte 0b0100100010010000
    .2byte 0b0100110010010000
    .2byte 0b0100110111111101
    .2byte 0b0100000010110010
    .2byte 0b0100010111111101
    .2byte 0b0100100011111101
    .2byte 0b0100000011111101
    .2byte 0b0110000011011010
    .2byte 0b0100000010011000
    .2byte 0b0000000000000000
    .2byte 0b0100100010011000
    .2byte 0b0100010010011000
    .2byte 0b0000000000000000
    .2byte 0b0100000010011000
    .2byte 0b0100000010011000
    .2byte 0b0100100010011000
    .2byte 0b0100000010011000
    .2byte 0b0100110010010000
    .2byte 0b0110000010011000
    .2byte 0b0110000011011000
    .2byte 0b0110000010011000
    .2byte 0b0110000011011110
    .2byte 0b0110000010010000
    .2byte 0b0110000111111101
    .2byte 0b0100000010010000
    .2byte 0b0100100010010000
    .2byte 0b0100000010010000
    .2byte 0b0100100010011000
    .2byte 0b0100100010011000
    .2byte 0b0100100010011000
    .2byte 0b0100110111111101
    .2byte 0b0111111111111111
    .2byte 0b0100000010111010
    .2byte 0b0100000010111010
    .2byte 0b0100000010111010
    .2byte 0b0100000010011000
    .2byte 0b0100000010011000
    .2byte 0b0110000011111101
    .2byte 0b0110000011111111
    .2byte 0b0110000011111111
    .2byte 0b0110000011111111
    .2byte 0b0100000010011000
    .2byte 0b0100000010011000
    .2byte 0b0100010010010000
    .2byte 0b0100010010010000
    .2byte 0b0100000010010011
    .2byte 0b0100000010010011
    .2byte 0b0100000010011000
    .2byte 0b0100000010011000
    .2byte 0b0100000010010000
    .2byte 0b0100100010010000
    .2byte 0b0100100010010000
    .2byte 0b0100100011111101
    .2byte 0b0100111111111101
    .2byte 0b0100110011111101
    .2byte 0b0100111111111101
    .2byte 0b0100111111111101
    .2byte 0b0100110010010000
    .2byte 0b0100110010010000
    .2byte 0b0100100010011000
    .2byte 0b0100100011111101
    .2byte 0b0100100011111101
    .2byte 0b0100000010010010
    .2byte 0b0100000011011101
    .2byte 0b0100000011011101
    .2byte 0b0111000011111101
    .2byte 0b0100000111111101
    .2byte 0b0100000010010010
    .2byte 0b0100000010010010
    .2byte 0b0100000010010010
    .2byte 0b0100110111111101
    .2byte 0b0100000010010010
    .2byte 0b0100000010010010
    .2byte 0b0100010010010000
    .2byte 0b0100000010011000
    .2byte 0b0100000011111101
    .2byte 0b0100010010011000
    .2byte 0b0100010010011000
    .2byte 0b0100110010010000
    .2byte 0b0100110011111101
    .2byte 0b0100110010010000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0100110010011000
    .2byte 0b0111000010111000
    .2byte 0b0111000010111000
    .2byte 0b0110110010111000
    .2byte 0b0110010010110010
    .2byte 0b0111000010011000
    .2byte 0b0100100111111101
    .2byte 0b0110100111111101
    .2byte 0b0100100010010010
    .2byte 0b0100000010110010
    .2byte 0b0110000010011000
    .2byte 0b0110000011111010
    .2byte 0b0100010010110010
    .2byte 0b0100000111111111
    .2byte 0b0110000111111111
    .2byte 0b0110000010011000
    .2byte 0b0110000010011000
    .2byte 0b0110000010011000
    .2byte 0b0110000010011000
    .2byte 0b0111000010011000
    .2byte 0b0100100010010000
    .2byte 0b0100100011010000
    .2byte 0b0100000011111101
    .2byte 0b0100000010011000
    .2byte 0b0110000010110000
    .2byte 0b0100010010111000
    .2byte 0b0100010010111000
    .2byte 0b0100000010011000
    .2byte 0b0100000010111000
    .2byte 0b0110000010111000
    .2byte 0b0100110010010000
    .2byte 0b0100110010011000
    .2byte 0b0000000000000000
    .2byte 0b0110000011111100
    .2byte 0b0110000011111100
    .2byte 0b0100010111111101
    .2byte 0b0100100011111101
    .2byte 0b0100000011111101
    .2byte 0b0110100111111101
    .2byte 0b0100111111111101
    .2byte 0b0100100010011000
    .2byte 0b0100000010011000
    .2byte 0b0100000010011000
    .2byte 0b0110000010011000
    .2byte 0b0110000010011000
    .2byte 0b0110100011111101
    .2byte 0b0100110010011000
    .2byte 0b0100110010010000
    .2byte 0b0100010110010010
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0100000011111111
    .2byte 0b0100000011111111
    .2byte 0b0100000011111111
    .2byte 0b0110000011111111
    .2byte 0b0110000011111111
    .2byte 0b0110000011111111
    .2byte 0b0100000010011000
    .2byte 0b0110000011111101
    .2byte 0b0110000011111101
    .2byte 0b0100000010111000
    .2byte 0b0100000010111000
    .2byte 0b0100100010011000
    .2byte 0b0100100010011000
    .2byte 0b0000000000000000
    .2byte 0b0000000000000000
    .2byte 0b0100000010010000
    .2byte 0b0000000000000000
    .2byte 0b0100000010010000
    .2byte 0b0100000010011010
    .2byte 0b0100000010011010
    .2byte 0b0100000111111111
    .2byte 0b0101000010011010
    .2byte 0b0101000010011110
    .2byte 0b0101000010011110
    .2byte 0b0100000010010000
    .2byte 0b0100000010010010
    .2byte 0b0100010010010000
    .2byte 0b0100000010110000
    .2byte 0b0100000010110000
    .2byte 0b0100000010011010
    .2byte 0b0100000011111111
    .2byte 0b0110010111111101
    .2byte 0b0100000010010000
    .2byte 0b0100000010010000
    .2byte 0b0100000010010000
    .2byte 0b0100000010010000
    .2byte 0b0100000010011000
    .2byte 0b0100000010011000
    .2byte 0b0100110010011000
    .2byte 0b0100110010011000
    .2byte 0b0110100111111101
    .2byte 0b0111010010010000
    .2byte 0b0111010010010000
    .2byte 0b0111100010011000
    .2byte 0b0111000010011000
    .2byte 0b0100010111111101
    .2byte 0b0100000010010000
    .2byte 0b0110000010010000
    .2byte 0b0100000010010000
    .2byte 0b0100000010111010
    .2byte 0b0100000010111010
    .2byte 0b0100000010010000
    .2byte 0b0100000010011000
    .2byte 0b0100000010010000
    .2byte 0b0100000010010000
    .2byte 0b0110000010011000
    .2byte 0b0110000010011000
    .2byte 0b0110000010011000
    .2byte 0b0110000111111101
    .2byte 0b0110000111111101
    .2byte 0b0100100010011000
    .2byte 0b0100100010011000
    .2byte 0b0110000010011000
    .2byte 0b0111000010011000
    .2byte 0b0110000010011000
    .2byte 0b0110000010011000
    .2byte 0b0110000010011000
    .2byte 0b0100000011111011
    .2byte 0b0100000011111111
    .2byte 0b0100000010011000
    .2byte 0b0101000010011000
    .2byte 0b0111010010011000
    .2byte 0b0111010010011000
    .2byte 0b0100000010011000
    .2byte 0b0100010010011000
    .2byte 0b0100010011111101
    .2byte 0b0100100111111101
    .2byte 0b0100100111111101
    .2byte 0b0110000011111111
    .2byte 0b0100010111111101
    .2byte 0b0110010111111101
    .2byte 0b0100010010011000
    .2byte 0b0100010010011000
    .2byte 0b0000000000000000
    .2byte 0b0100010010011000
    .2byte 0b0110010111111101
    .2byte 0b0100000010011010
    .2byte 0b0110000011111101
    .2byte 0b0110000011111101
    .2byte 0b0110000011111101
    .2byte 0b0101010010111000
    .2byte 0b0101010010111000
    .2byte 0b0100000010011010
    .2byte 0b0100000011111101
    .2byte 0b0110000011111101
    .2byte 0b0110000011111101
    .2byte 0b0100000010011000
    .2byte 0b0100000010011000
    .2byte 0b0100000010011000
    .2byte 0b0110110010111010
    .2byte 0b0100110010011000
    .2byte 0b0100110110011000
    .2byte 0b0100000010011000
    .2byte 0b0110100011111111
    .2byte 0b0110000010011000
    .2byte 0b0110000010011000
    .2byte 0b0110000010011000
    .2byte 0b0110100011111101
    .2byte 0b0100100010011000
    .2byte 0b0100100111111101
    .2byte 0b0100100111111101
    .2byte 0b0110000010011000
    .2byte 0b0110000010011000
    .2byte 0b0110000010011010
    .2byte 0b0110000011011010
    .2byte 0b0100110010011000
    .2byte 0b0100110010011000
    .2byte 0b0100110010011000
    .2byte 0b0110000010011000
    .2byte 0b0110000010011000
    .2byte 0b0110000010011000
    .2byte 0b0000000000000000
    .2byte 0b0111000010011000
    .2byte 0b0111000010011000
    .2byte 0b0111100011111101
    .2byte 0b0111100011111101
    .2byte 0b0111100011111101
    .2byte 0b0110100010011000
    .2byte 0b0110100011111111
    .2byte 0b0110100010011000
    .2byte 0b0100110010011000
    .2byte 0b0100110010011000
    .2byte 0b0100110110011000
    .2byte 0b0110110011111101
    .2byte 0b0100010010010000

    .align 2
kVRAMConfig_8459EB8:: @ 8459EB8
    .4byte 0x11F0
    .4byte 0x21E1
    .4byte 0x3C2

kPointer_8459EC4:: @ 8459EC4
    .4byte sub_812133C @ 812133D

    .incbin "baserom.gba", 0x459EC8, 0x1C @ unknown

kPointer_8459EE4:: @ 8459EE4
    .4byte sub_81213A0 @ 81213A1

    .incbin "baserom.gba", 0x459EE8, 0x1C @ unknown

UNK_8459F04:: @ 8459F04
    .incbin "baserom.gba", 0x459F04, 0xC0 @ null

kTilemap_8459FC4:: @ 8459FC4
    .incbin "baserom.gba", 0x459FC4, 0x1C

kTilemap_8459FE0:: @ 8459FE0
    .incbin "baserom.gba", 0x459FE0, 0x1C

kRBoxBar_8459FFC:: @ 8459FFC
    .byte 0x00, 0x03, 0x02
    .byte 0x00, 0x01, 0x06
    .byte 0x00, 0x0B, 0x0C
    .byte 0x01, 0x02, 0x03
    .byte 0x01, 0x08, 0x09

kRBoxBar_845A00B:: @ 845A00B
    .byte 0x00, 0x01, 0x02

    .align 2
kWindowTemplate_845A010:: @ 845A010
    window_template 0x00, 0x01, 0x03, 0x0A, 0x07, 0x03, 0x0063
    window_template 0x00, 0x0C, 0x01, 0x12, 0x03, 0x04, 0x00A9
    window_template 0x00, 0x0C, 0x04, 0x12, 0x03, 0x05, 0x00DF
    window_template 0x00, 0x0C, 0x07, 0x12, 0x03, 0x06, 0x0115
    window_template 0x00, 0x0C, 0x0A, 0x12, 0x03, 0x07, 0x014B
    window_template 0x00, 0x0C, 0x0D, 0x12, 0x03, 0x08, 0x0181
    window_template 0x02, 0x01, 0x0F, 0x1C, 0x04, 0x0E, 0x01DF
    window_template_terminator

kWindowTemplate_845A050:: @ 845A050
    window_template 0x00, 0x01, 0x01, 0x0A, 0x07, 0x03, 0x0063
    window_template 0x00, 0x01, 0x08, 0x0A, 0x07, 0x04, 0x00A9
    window_template 0x00, 0x0C, 0x01, 0x12, 0x03, 0x05, 0x00EF
    window_template 0x00, 0x0C, 0x05, 0x12, 0x03, 0x06, 0x0125
    window_template 0x00, 0x0C, 0x09, 0x12, 0x03, 0x07, 0x015B
    window_template 0x00, 0x0C, 0x0D, 0x12, 0x03, 0x08, 0x0191
    window_template 0x02, 0x01, 0x0F, 0x1C, 0x04, 0x0E, 0x01DF
    window_template_terminator

kWindowTemplate_845A090:: @ 845A090
    window_template 0x00, 0x01, 0x01, 0x0A, 0x07, 0x03, 0x0063
    window_template 0x00, 0x01, 0x08, 0x0A, 0x07, 0x04, 0x00A9
    window_template 0x00, 0x0C, 0x02, 0x12, 0x03, 0x05, 0x00EF
    window_template 0x00, 0x0C, 0x05, 0x12, 0x03, 0x06, 0x0125
    window_template 0x00, 0x0C, 0x09, 0x12, 0x03, 0x07, 0x015B
    window_template 0x00, 0x0C, 0x0C, 0x12, 0x03, 0x08, 0x0191
    window_template 0x02, 0x01, 0x0F, 0x1C, 0x04, 0x0E, 0x01DF
    window_template_terminator

kWindowTemplate_845A0D0:: @ 845A0D0
    window_template 0x00, 0x01, 0x02, 0x0A, 0x07, 0x03, 0x0063
    window_template 0x00, 0x0C, 0x03, 0x12, 0x03, 0x05, 0x00A9
    window_template 0x00, 0x0C, 0x06, 0x12, 0x03, 0x06, 0x00DF
    window_template 0x02, 0x01, 0x0B, 0x0A, 0x07, 0x04, 0x0115
    window_template 0x02, 0x0C, 0x0C, 0x12, 0x03, 0x07, 0x016B
    window_template 0x02, 0x0C, 0x0F, 0x12, 0x03, 0x08, 0x01A1
    window_template_terminator

kWindowTemplate_845A108:: @ 845A108
    window_template 0x00, 0x18, 0x11, 0x06, 0x02, 0x03, 0x01C7

kWindowTemplate_845A110:: @ 845A110
    window_template 0x00, 0x18, 0x12, 0x06, 0x02, 0x03, 0x01C7

kWindowTemplate_845A118:: @ 845A118
    window_template 0x00, 0x18, 0x10, 0x06, 0x02, 0x03, 0x01D3

kWindowTemplate_845A120:: @ 845A120
    window_template 0x02, 0x01, 0x11, 0x15, 0x02, 0x0F, 0x024F
    window_template 0x02, 0x01, 0x11, 0x10, 0x02, 0x0F, 0x0279
    window_template 0x02, 0x01, 0x11, 0x13, 0x02, 0x0F, 0x0299
    window_template 0x02, 0x01, 0x11, 0x10, 0x02, 0x0F, 0x0299
    window_template 0x02, 0x01, 0x11, 0x0F, 0x02, 0x0F, 0x0299
    window_template 0x02, 0x16, 0x0D, 0x07, 0x06, 0x0E, 0x0373
    window_template 0x02, 0x13, 0x0D, 0x0A, 0x06, 0x0E, 0x0373
    window_template 0x02, 0x12, 0x0B, 0x0B, 0x08, 0x0E, 0x02BF
    window_template 0x02, 0x15, 0x09, 0x06, 0x04, 0x0E, 0x02BF
    window_template 0x02, 0x13, 0x01, 0x0A, 0x0B, 0x0E, 0x02BF
    window_template 0x02, 0x02, 0x0F, 0x1A, 0x04, 0x0E, 0x01DF
    window_template 0x02, 0x00, 0x0D, 0x12, 0x03, 0x0C, 0x0373

kBasicItem_845A180:: @ 845A180
    .byte 0x18, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19
    .byte 0x19, 0x19, 0x1A, 0x20, 0x21, 0x21, 0x21
    .byte 0x21, 0x21, 0x21, 0x21, 0x21, 0x22, 0x20
    .byte 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21
    .byte 0x21, 0x22, 0x20, 0x21, 0x21, 0x21, 0x21
    .byte 0x21, 0x21, 0x21, 0x21, 0x22, 0x28, 0x3B
    .byte 0x3C, 0x3A, 0x3A, 0x3A, 0x3A, 0x3A, 0x3A
    .byte 0x3D, 0x0F, 0x10, 0x10, 0x10, 0x10, 0x10
    .byte 0x10, 0x10, 0x10, 0x11, 0x2E, 0x2F, 0x2F
    .byte 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x30

kBasicItem_845A1C6:: @ 845A1C6
    .byte 0x18, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19
    .byte 0x19, 0x19, 0x1A, 0x20, 0x21, 0x21, 0x21
    .byte 0x21, 0x21, 0x21, 0x21, 0x21, 0x22, 0x20
    .byte 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21
    .byte 0x21, 0x22, 0x20, 0x21, 0x21, 0x21, 0x21
    .byte 0x21, 0x21, 0x21, 0x21, 0x22, 0x28, 0x29
    .byte 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29
    .byte 0x2A, 0x0F, 0x10, 0x10, 0x10, 0x10, 0x10
    .byte 0x10, 0x10, 0x10, 0x11, 0x2E, 0x2F, 0x2F
    .byte 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x30

kBasicItem_845A20C:: @ 845A20C
    .byte 0x2B, 0x2C, 0x2C
    .byte 0x2C, 0x2C, 0x2C
    .byte 0x2C, 0x2C, 0x2C
    .byte 0x2C, 0x2C, 0x2C
    .byte 0x2C, 0x2C, 0x2C
    .byte 0x2C, 0x2C, 0x2D
    .byte 0x31, 0x21, 0x21
    .byte 0x21, 0x21, 0x21
    .byte 0x21, 0x21, 0x21
    .byte 0x34, 0x35, 0x33
    .byte 0x33, 0x33, 0x33
    .byte 0x33, 0x33, 0x36
    .byte 0x37, 0x38, 0x38
    .byte 0x38, 0x38, 0x38
    .byte 0x38, 0x38, 0x38
    .byte 0x38, 0x38, 0x38
    .byte 0x38, 0x38, 0x38
    .byte 0x38, 0x38, 0x39

kBasicItem_845A242:: @ 845A242
    .byte 0x2B, 0x2C, 0x2C
    .byte 0x2C, 0x2C, 0x2C
    .byte 0x2C, 0x2C, 0x2C
    .byte 0x2C, 0x2C, 0x2C
    .byte 0x2C, 0x2C, 0x2C
    .byte 0x2C, 0x2C, 0x2D
    .byte 0x31, 0x21, 0x21
    .byte 0x21, 0x21, 0x21
    .byte 0x21, 0x21, 0x21
    .byte 0x21, 0x21, 0x21
    .byte 0x21, 0x21, 0x21
    .byte 0x21, 0x21, 0x32
    .byte 0x37, 0x38, 0x38
    .byte 0x38, 0x38, 0x38
    .byte 0x38, 0x38, 0x38
    .byte 0x38, 0x38, 0x38
    .byte 0x38, 0x38, 0x38
    .byte 0x38, 0x38, 0x39

kBasicItem_845A278:: @ 845A278
    .byte 0x15, 0x16, 0x16
    .byte 0x16, 0x16, 0x16
    .byte 0x16, 0x16, 0x16
    .byte 0x16, 0x16, 0x16
    .byte 0x16, 0x16, 0x16
    .byte 0x16, 0x16, 0x17
    .byte 0x1E, 0x00, 0x00
    .byte 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x1F
    .byte 0x25, 0x26, 0x26
    .byte 0x26, 0x26, 0x26
    .byte 0x26, 0x26, 0x26
    .byte 0x26, 0x26, 0x26
    .byte 0x26, 0x26, 0x26
    .byte 0x26, 0x26, 0x27

UNK_845A2AE:: @ 845A2AE
    .incbin "baserom.gba", 0x45A2AE, 0x2 @ null

UNK_845A2B0:: @ 845A2B0
    .incbin "baserom.gba", 0x45A2B0, 0x2 @ null

UNK_845A2B2:: @ 845A2B2
    .incbin "baserom.gba", 0x45A2B2, 0x3 @ null

UNK_845A2B5:: @ 845A2B5
    .incbin "baserom.gba", 0x45A2B5, 0x3 @ null

UNK_845A2B8:: @ 845A2B8
    .incbin "baserom.gba", 0x45A2B8, 0x2 @ null

UNK_845A2BA:: @ 845A2BA
    .incbin "baserom.gba", 0x45A2BA, 0x2 @ null

UNK_845A2BC:: @ 845A2BC
    .incbin "baserom.gba", 0x45A2BC, 0x2 @ null

UNK_845A2BE:: @ 845A2BE
    .incbin "baserom.gba", 0x45A2BE, 0x2 @ null

UNK_845A2C0:: @ 845A2C0
    .incbin "baserom.gba", 0x45A2C0, 0x2 @ null

UNK_845A2C2:: @ 845A2C2
    .incbin "baserom.gba", 0x45A2C2, 0x3 @ null

UNK_845A2C5:: @ 845A2C5
    .incbin "baserom.gba", 0x45A2C5, 0x3 @ null

UNK_845A2C8:: @ 845A2C8
    .incbin "baserom.gba", 0x45A2C8, 0x3 @ null

UNK_845A2CB:: @ 845A2CB
    .incbin "baserom.gba", 0x45A2CB, 0x3 @ null

UNK_845A2CE:: @ 845A2CE
    .incbin "baserom.gba", 0x45A2CE, 0x3 @ null

UNK_845A2D1:: @ 845A2D1
    .incbin "baserom.gba", 0x45A2D1, 0x3 @ null

UNK_845A2D4:: @ 845A2D4
    .incbin "baserom.gba", 0x45A2D4, 0x3 @ null

UNK_845A2D7:: @ 845A2D7
    .incbin "baserom.gba", 0x45A2D7, 0x3 @ null

UNK_845A2DA:: @ 845A2DA
    .incbin "baserom.gba", 0x45A2DA, 0x3 @ null

UNK_845A2DD:: @ 845A2DD
    .incbin "baserom.gba", 0x45A2DD, 0x3 @ null

UNK_845A2E0:: @ 845A2E0
    .incbin "baserom.gba", 0x45A2E0, 0x3 @ null

UNK_845A2E3:: @ 845A2E3
    .incbin "baserom.gba", 0x45A2E3, 0x5 @ null

kPointer_845A2E8:: @ 845A2E8
    .4byte kText_84171DF @ 84171DF
    .4byte kText_8417396 @ 8417396
    .4byte kText_84173B0 @ 84173B0
    .4byte kText_84171F1 @ 84171F1
    .4byte kText_8417200 @ 8417200
    .4byte kText_8417215 @ 8417215
    .4byte kText_841722B @ 841722B
    .4byte kText_8417258 @ 8417258
    .4byte kText_8417270 @ 8417270
    .4byte kText_8417281 @ 8417281
    .4byte kText_8417361 @ 8417361
    .4byte kText_84173E4 @ 84173E4
    .4byte kText_84173F9 @ 84173F9
    .4byte kText_8417299 @ 8417299
    .4byte kText_84172EB @ 84172EB
    .4byte kText_8417301 @ 8417301
    .4byte kText_8417313 @ 8417313
    .4byte kText_8417322 @ 8417322
    .4byte kText_84173CC @ 84173CC
    .4byte kText_8417337 @ 8417337
    .4byte kText_841734D @ 841734D
    .4byte kText_84161CD @ 84161CD
    .4byte kText_8417242 @ 8417242
    .4byte kText_84172AE @ 84172AE
    .4byte kText_84172C2 @ 84172C2
    .4byte kText_84172D5 @ 84172D5
    .4byte kText_841737F @ 841737F
    .4byte kText_8417411 @ 8417411
    .4byte kText_8417419 @ 8417419
    .4byte kText_841741E @ 841741E
    .4byte kText_8417424 @ 8417424
    .4byte kText_841742B @ 841742B
    .4byte kText_8417431 @ 8417431
    .4byte kText_8417436 @ 8417436
    .4byte kText_841743F @ 841743F
    .4byte kText_8417445 @ 8417445
    .4byte kText_841744F @ 841744F

kPointer_845A37C:: @ 845A37C
    .4byte kText_8417583 @ 8417583
    .4byte kText_8417533 @ 8417533
    .4byte kText_8417548 @ 8417548
    .4byte kText_841756E @ 841756E
    .4byte kText_841755D @ 841755D
    .4byte kText_8417596 @ 8417596
    .4byte kText_84175AE @ 84175AE
    .4byte kText_84175FB @ 84175FB
    .4byte kText_84175CC @ 84175CC
    .4byte kText_84175F1 @ 84175F1
    .4byte kText_84175F1 @ 84175F1
    .4byte kText_84175DE @ 84175DE

kUGfx_845A3AC:: @ 845A3AC
    .incbin "baserom.gba", 0x45A3AC, 0x40

kPalette_845A3EC:: @ 845A3EC
    .incbin "baserom.gba", 0x45A3EC, 0x20

kOAM_845A40C:: @ 845A40C
    .2byte 0x0000
    .2byte 0x0000
    .2byte 0x0400
    .2byte 0x0000

kAnimCmd_845A414:: @ 845A414
    obj_image_anim_frame 0, 1
    obj_image_anim_end

kAnimCmd_845A41C:: @ 845A41C
    obj_image_anim_frame 1, 1
    obj_image_anim_end

kAnimCmds_845A424:: @ 845A424
    .4byte kAnimCmd_845A414 @ 845A414
    .4byte kAnimCmd_845A41C @ 845A41C

kObjTiles_845A42C:: @ 845A42C
    obj_tiles kUGfx_845A3AC, 0x40, 55120

kObjPal_845A434:: @ 845A434
    obj_pal kPalette_845A3EC, 55120

kSpriteTemplate_845A43C:: @ 845A43C
    spr_template 55120, 55120, kOAM_845A40C, kAnimCmds_845A424, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kOAM_845A454:: @ 845A454
    .2byte 0x0000
    .2byte 0x8000
    .2byte 0x0400
    .2byte 0x0000

kAnimCmd_845A45C:: @ 845A45C
    obj_image_anim_frame 0, 0
    obj_image_anim_end

kAnimCmd_845A464:: @ 845A464
    obj_image_anim_frame 16, 0
    obj_image_anim_end

kAnimCmds_845A46C:: @ 845A46C
    .4byte kAnimCmd_845A45C @ 845A45C
    .4byte kAnimCmd_845A464 @ 845A464

kObjTiles_845A474:: @ 845A474
    obj_tiles kUnkGfx_8E82BE8, 0x400, 1200

kObjPal_845A47C:: @ 845A47C
    obj_pal kUnkPal_8E82E7C, 1200

kSpriteTemplate_845A484:: @ 845A484
    spr_template 1200, 1200, kOAM_845A454, kAnimCmds_845A46C, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kOAM_845A49C:: @ 845A49C
    .2byte 0x0000
    .2byte 0x4000
    .2byte 0x0800
    .2byte 0x0000

kAnimCmd_845A4A4:: @ 845A4A4
    obj_image_anim_frame 0, 0
    obj_image_anim_end

kAnimCmd_845A4AC:: @ 845A4AC
    obj_image_anim_frame 4, 0
    obj_image_anim_end

kAnimCmd_845A4B4:: @ 845A4B4
    obj_image_anim_frame 8, 0
    obj_image_anim_end

kAnimCmd_845A4BC:: @ 845A4BC
    obj_image_anim_frame 12, 0
    obj_image_anim_end

kAnimCmd_845A4C4:: @ 845A4C4
    obj_image_anim_frame 16, 0
    obj_image_anim_end

kAnimCmd_845A4CC:: @ 845A4CC
    obj_image_anim_frame 20, 0
    obj_image_anim_end

kAnimCmds_845A4D4:: @ 845A4D4
    .4byte kAnimCmd_845A4A4 @ 845A4A4
    .4byte kAnimCmd_845A4AC @ 845A4AC
    .4byte kAnimCmd_845A4B4 @ 845A4B4
    .4byte kAnimCmd_845A4BC @ 845A4BC
    .4byte kAnimCmd_845A4C4 @ 845A4C4
    .4byte kAnimCmd_845A4CC @ 845A4CC

kObjTiles_845A4EC:: @ 845A4EC
    obj_tiles kUnkGfx_8E82D68, 0x300, 1201

kSpriteTemplate_845A4F4:: @ 845A4F4
    spr_template 1201, 1200, kOAM_845A49C, kAnimCmds_845A4D4, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kOAM_845A50C:: @ 845A50C
    .2byte 0x4000
    .2byte 0x4000
    .2byte 0x0400
    .2byte 0x0000

kAnimCmd_845A514:: @ 845A514
    obj_image_anim_frame 0, 0
    obj_image_anim_end

kAnimCmd_845A51C:: @ 845A51C
    obj_image_anim_frame 4, 0
    obj_image_anim_end

kAnimCmd_845A524:: @ 845A524
    obj_image_anim_frame 8, 0
    obj_image_anim_end

kAnimCmd_845A52C:: @ 845A52C
    obj_image_anim_frame 12, 0
    obj_image_anim_end

kAnimCmd_845A534:: @ 845A534
    obj_image_anim_frame 16, 0
    obj_image_anim_end

kAnimCmd_845A53C:: @ 845A53C
    obj_image_anim_frame 20, 0
    obj_image_anim_end

kAnimCmd_845A544:: @ 845A544
    obj_image_anim_frame 24, 0
    obj_image_anim_end

kAnimCmd_845A54C:: @ 845A54C
    obj_image_anim_frame 28, 0
    obj_image_anim_end

kAnimCmds_845A554:: @ 845A554
    .4byte kAnimCmd_845A514 @ 845A514
    .4byte kAnimCmd_845A51C @ 845A51C
    .4byte kAnimCmd_845A524 @ 845A524
    .4byte kAnimCmd_845A52C @ 845A52C
    .4byte kAnimCmd_845A534 @ 845A534
    .4byte kAnimCmd_845A53C @ 845A53C
    .4byte kAnimCmd_845A544 @ 845A544
    .4byte kAnimCmd_845A54C @ 845A54C

kObjTiles_845A574:: @ 845A574
    obj_tiles kUnkGfx_8E82EA0, 0x400, 1202

kObjPal_845A57C:: @ 845A57C
    obj_pal kUnkPal_8E830A4, 1202

kSpriteTemplate_845A584:: @ 845A584
    spr_template 1202, 1202, kOAM_845A50C, kAnimCmds_845A554, NULL, kDummySpriteAffineAnimTable, objc_nullsub

UNK_845A59C:: @ 845A59C
    .incbin "baserom.gba", 0x45A59C, 0x7C @ null

kPointerSet_845A618:: @ 845A618
    .4byte kText_8416994, brm_summary
    .4byte kText_841698D, brm_switch
    .4byte kText_84161C1, brm_cancel_1
    .4byte kText_84161D4, brm_item
    .4byte kText_84161B2, brm_give
    .4byte kText_84161DE, brm_take_1
    .4byte kText_84161D9, brm_mail
    .4byte kText_84169B2, brm_take_mail
    .4byte kText_84169B7, brm_read
    .4byte kText_84161C1, brm_cancel_2
    .4byte kText_841697E, brm_shift_sendout
    .4byte kText_8416984, brm_shift_sendout
    .4byte kText_84169A3, brm_enter
    .4byte kText_84169A9, brm_no_entry
    .4byte kText_84161E3, brm_store
    .4byte kText_841B6F4, brm_register
    .4byte kText_84169BC, brm_trade_1
    .4byte kText_84169BC, nullsub_59
    .4byte kMoveNames+0x784, brm_hm
    .4byte kMoveNames+0xC3, brm_hm
    .4byte kMoveNames+0xF7, brm_hm
    .4byte kMoveNames+0x38E, brm_hm
    .4byte kMoveNames+0x2E5, brm_hm
    .4byte kMoveNames+0xCA5, brm_hm
    .4byte kMoveNames+0x673, brm_hm
    .4byte kMoveNames+0x514, brm_hm
    .4byte kMoveNames+0x49F, brm_hm
    .4byte kMoveNames+0xA90, brm_hm
    .4byte kMoveNames+0x6DB, brm_hm
    .4byte kMoveNames+0xBAE, brm_hm

kUnknown_845A708:: @ 845A708
    .incbin "baserom.gba", 0x45A708, 0x3 @ null

kUnknown_845A70B:: @ 845A70B
    .incbin "baserom.gba", 0x45A70B, 0x3 @ null

kUnknown_845A70E:: @ 845A70E
    .incbin "baserom.gba", 0x45A70E, 0x3 @ null

kUnknown_845A711:: @ 845A711
    .incbin "baserom.gba", 0x45A711, 0x2 @ null

kUnknown_845A713:: @ 845A713
    .incbin "baserom.gba", 0x45A713, 0x3 @ null

kUnknown_845A716:: @ 845A716
    .incbin "baserom.gba", 0x45A716, 0x3 @ null

kUnknown_845A719:: @ 845A719
    .incbin "baserom.gba", 0x45A719, 0x3 @ null

kUnknown_845A71C:: @ 845A71C
    .incbin "baserom.gba", 0x45A71C, 0x3 @ null

kUnknown_845A71F:: @ 845A71F
    .incbin "baserom.gba", 0x45A71F, 0x3 @ null

kUnknown_845A722:: @ 845A722
    .incbin "baserom.gba", 0x45A722, 0x3 @ null

kUnknown_845A725:: @ 845A725
    .incbin "baserom.gba", 0x45A725, 0x3 @ null

kUnknown_845A728:: @ 845A728
    .incbin "baserom.gba", 0x45A728, 0x4 @ null

kPointer_845A72C:: @ 845A72C
    .4byte NULL @ 0
    .4byte kUnknown_845A708 @ 845A708
    .4byte kUnknown_845A70B @ 845A70B
    .4byte kUnknown_845A70E @ 845A70E
    .4byte kUnknown_845A713 @ 845A713
    .4byte kUnknown_845A716 @ 845A716
    .4byte kUnknown_845A719 @ 845A719
    .4byte kUnknown_845A711 @ 845A711
    .4byte kUnknown_845A71C @ 845A71C
    .4byte kUnknown_845A71F @ 845A71F
    .4byte kUnknown_845A722 @ 845A722
    .4byte kUnknown_845A725 @ 845A725
    .4byte kUnknown_845A728 @ 845A728

UNK_845A760:: @ 845A760
    .incbin "baserom.gba", 0x45A760, 0xE @ null

UNK_845A76E:: @ 845A76E
    .incbin "baserom.gba", 0x45A76E, 0x1A @ null

kBasicItem_845A788:: @ 845A788
    .4byte hm_prepare_flash
    .4byte 0x0000000D
    .4byte hm_prepare_cut
    .4byte 0x00000007
    .4byte hm_prepare_fly
    .4byte 0x0000000D
    .4byte hm_prepare_strength
    .4byte 0x0000000D
    .4byte hm_prepare_surf
    .4byte 0x00000008
    .4byte hm_prepare_rocksmash
    .4byte 0x0000000D
    .4byte hm_prepare_waterfall
    .4byte 0x0000000D
    .4byte hm_prepare_teleport
    .4byte 0x0000000D
    .4byte hm_prepare_dig
    .4byte 0x0000000D
    .4byte hm_prepare_softboiled_milkdrink
    .4byte 0x00000010
    .4byte hm_prepare_softboiled_milkdrink
    .4byte 0x00000010
    .4byte hm_prepare_sweet_scent
    .4byte 0x0000000D

kPointer_845A7E8:: @ 845A7E8
    .4byte kText_841718C @ 841718C
    .4byte kText_84171CC @ 84171CC
    .4byte kText_84170BC @ 84170BC
    .4byte kText_84170BC @ 84170BC
    .4byte kText_84170FC @ 84170FC
    .4byte kText_84170E0 @ 84170E0
    .4byte kText_8417130 @ 8417130
    .4byte kText_8417164 @ 8417164
    .4byte kText_8417164 @ 8417164

kTMContainedMoves:: @ 845A80C
    .2byte MOVE_FOCUS_PUNCH
    .2byte MOVE_DRAGON_CLAW
    .2byte MOVE_WATER_PULSE
    .2byte MOVE_CALM_MIND
    .2byte MOVE_ROAR
    .2byte MOVE_TOXIC
    .2byte MOVE_HAIL
    .2byte MOVE_BULK_UP
    .2byte MOVE_BULLET_SEED
    .2byte MOVE_HIDDEN_POWER
    .2byte MOVE_SUNNY_DAY
    .2byte MOVE_TAUNT
    .2byte MOVE_ICE_BEAM
    .2byte MOVE_BLIZZARD
    .2byte MOVE_HYPER_BEAM
    .2byte MOVE_LIGHT_SCREEN
    .2byte MOVE_PROTECT
    .2byte MOVE_RAIN_DANCE
    .2byte MOVE_GIGA_DRAIN
    .2byte MOVE_SAFEGUARD
    .2byte MOVE_FRUSTRATION
    .2byte MOVE_SOLAR_BEAM
    .2byte MOVE_IRON_TAIL
    .2byte MOVE_THUNDERBOLT
    .2byte MOVE_THUNDER
    .2byte MOVE_EARTHQUAKE
    .2byte MOVE_RETURN
    .2byte MOVE_DIG
    .2byte MOVE_PSYCHIC
    .2byte MOVE_SHADOW_BALL
    .2byte MOVE_BRICK_BREAK
    .2byte MOVE_DOUBLE_TEAM
    .2byte MOVE_REFLECT
    .2byte MOVE_SHOCK_WAVE
    .2byte MOVE_FLAMETHROWER
    .2byte MOVE_SLUDGE_BOMB
    .2byte MOVE_SANDSTORM
    .2byte MOVE_FIRE_BLAST
    .2byte MOVE_ROCK_TOMB
    .2byte MOVE_AERIAL_ACE
    .2byte MOVE_TORMENT
    .2byte MOVE_FACADE
    .2byte MOVE_SECRET_POWER
    .2byte MOVE_REST
    .2byte MOVE_ATTRACT
    .2byte MOVE_THIEF
    .2byte MOVE_STEEL_WING
    .2byte MOVE_SKILL_SWAP
    .2byte MOVE_SNATCH
    .2byte MOVE_OVERHEAT
    .2byte MOVE_CUT
    .2byte MOVE_FLY
    .2byte MOVE_SURF
    .2byte MOVE_STRENGTH
    .2byte MOVE_FLASH
    .2byte MOVE_ROCK_SMASH
    .2byte MOVE_WATERFALL
    .2byte MOVE_DIVE

kPointer_845A880:: @ 845A880
    .4byte sub_8128640 @ 8128641
    .4byte sub_81286C4 @ 81286C5
    .4byte sub_81287B4 @ 81287B5
    .4byte sub_81288D4 @ 81288D5
    .4byte sub_8128DA4 @ 8128DA5
    .4byte sub_8128E78 @ 8128E79
    .4byte sub_8128AA0 @ 8128AA1
    .4byte sub_8128C04 @ 8128C05
    .4byte sub_8128CA8 @ 8128CA9
    .4byte sub_8128FB8 @ 8128FB9

UNK_845A8A8:: @ 845A8A8
    .incbin "baserom.gba", 0x45A8A8, 0x4 @ null

kBasicItem_845A8AC:: @ 845A8AC
    .byte 0x00, 0x16, 0x17, 0x68, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x00, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x15, 0x01, 0x02, 0x00, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x00, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10, 0x11, 0x12, 0x13, 0x14, 0x2A, 0x2B, 0x2C, 0x2D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x35, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x53, 0x54, 0x55, 0x56, 0x00, 0x00, 0x00, 0x6F, 0x5B, 0x5C, 0x5D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x85, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7, 0xB8, 0xB9, 0xBA, 0xD5, 0xD6, 0xD7, 0xD8, 0xD9, 0xDA, 0xDB, 0xDC, 0xDD, 0xDE, 0xDF, 0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7, 0xE8, 0xE9, 0xEA, 0xEB, 0xEC, 0xED, 0xEE, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF, 0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0xEF, 0xF0, 0xF4, 0xF5, 0xF6, 0xF1, 0xF2, 0xF3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

kPointer_845A9AC:: @ 845A9AC
    .4byte kText_847AAC1 @ 847AAC1
    .4byte kText_847AAC7 @ 847AAC7
    .4byte kText_847AACD @ 847AACD
    .4byte kText_847AAD3 @ 847AAD3
    .4byte kText_847AAD9 @ 847AAD9
    .4byte kText_847AADF @ 847AADF
    .4byte kText_847AAE5 @ 847AAE5
    .4byte kText_847AAEB @ 847AAEB
    .4byte kText_847AAF1 @ 847AAF1
    .4byte kText_847AAF7 @ 847AAF7
    .4byte kText_847AAFD @ 847AAFD
    .4byte kText_847AB03 @ 847AB03
    .4byte kText_847AB09 @ 847AB09
    .4byte kText_847AB0F @ 847AB0F
    .4byte kText_847AB15 @ 847AB15
    .4byte kText_847AB1B @ 847AB1B
    .4byte kText_847AB21 @ 847AB21
    .4byte kText_847AB27 @ 847AB27
    .4byte kText_847AB2D @ 847AB2D
    .4byte kText_847AB33 @ 847AB33

kPointer_845A9FC:: @ 845A9FC
    .4byte kUnknown_847AB41 @ 847AB41
    .4byte kUnknown_847AB4C @ 847AB4C
    .4byte kUnknown_847AB57 @ 847AB57
    .4byte kUnknown_847AB62 @ 847AB62
    .4byte kUnknown_847AB6B @ 847AB6B
    .4byte kUnknown_847AB76 @ 847AB76
    .4byte kUnknown_847AB81 @ 847AB81
    .4byte kUnknown_847AB8C @ 847AB8C
    .4byte kUnknown_847AB97 @ 847AB97
    .4byte kUnknown_847ABA2 @ 847ABA2

kPalette_845AA24:: @ 845AA24
    .incbin "baserom.gba", 0x45AA24, 0x20

kPalette_845AA44:: @ 845AA44
    .incbin "baserom.gba", 0x45AA44, 0x20

kPalette_845AA64:: @ 845AA64
    .incbin "baserom.gba", 0x45AA64, 0x20

kVRAMConfig_845AA84:: @ 845AA84
    .4byte 0x70
    .4byte 0x11FD
    .4byte 0x217A
    .4byte 0x70F7

kWindowTemplate_845AA94:: @ 845AA94
    window_template 0x03, 0x08, 0x01, 0x15, 0x13, 0x0F, 0x0001
    window_template 0x01, 0x09, 0x12, 0x0F, 0x02, 0x0C, 0x007A
    window_template 0x01, 0x00, 0x02, 0x06, 0x0F, 0x07, 0x0020
    window_template 0x00, 0x01, 0x02, 0x07, 0x09, 0x0E, 0x0013
    window_template_terminator

kBasicItem_845AABC:: @ 845AABC
    .4byte 0x00000000
    .4byte sub_8129CA0
    .4byte 0x00000003
    .4byte sub_8129D40
    .4byte 0x00000004
    .4byte sub_8129D78
    .4byte 0x00000005
    .4byte sub_8129DB0
    .4byte 0x00000001
    .4byte sub_8129E1C
    .4byte 0x00000006
    .4byte sub_8129E28
    .4byte 0x00000007
    .4byte sub_8129E74
    .4byte 0x00000008
    .4byte sub_8129EB8
    .4byte 0x00000009
    .4byte sub_8129F24
    .4byte 0x0000000A
    .4byte sub_8129FCC
    .4byte 0x0000000B
    .4byte sub_812A074
    .4byte 0x0000000C
    .4byte sub_812A0B0
    .4byte 0x00000002
    .4byte sub_812A18C
    .4byte 0x0000000D
    .4byte sub_812A1B8
    .4byte 0x00000012
    .4byte sub_812A1FC
    .4byte 0x00000013
    .4byte sub_812A240
    .4byte 0x0000000E
    .4byte sub_812A294
    .4byte 0x0000000F
    .4byte sub_812A2E4
    .4byte 0x00000010
    .4byte sub_812A334
    .4byte 0x00000011
    .4byte sub_812A378
    .4byte 0x00000014
    .4byte sub_812A3D0

kUnk16_845AB64:: @ 845AB64
    .4byte kText_841B366
    .byte 1, 0, 0, 1, 2, 0, 0, 0
    .4byte kText_841B375
    .byte 1, 0, 0, 1, 2, 0, 0, 0
    .4byte kText_841B38A
    .byte 1, 0, 0, 1, 2, 0, 0, 0
    .4byte kText_841B39E
    .byte 1, 0, 0, 1, 2, 0, 0, 0
    .4byte kText_841B3E9
    .byte 2, 0, 0, 1, 2, 0, 0, 0
    .4byte kText_841B3FB
    .byte 2, 0, 0, 0, 2, 1, 0, 0
    .4byte kText_841B426
    .byte 2, 0, 0, 1, 2, 0, 1, 0
    .4byte kText_841B469
    .byte 2, 0, 0, 1, 2, 0, 1, 0
    .4byte kText_841B4A4
    .byte 2, 0, 0, 1, 2, 0, 1, 0
    .4byte kText_841B4C6
    .byte 2, 0, 0, 1, 2, 1, 1, 0
    .4byte kText_841B4D9
    .byte 2, 0, 0, 1, 2, 0, 1, 0

UNK_845ABE8:: @ 845ABE8
    .incbin "baserom.gba", 0x45ABE8, 0x4 @ null

kPointerSet_845ABEC:: @ 845ABEC
    .4byte kText_841B33D, NULL
    .4byte kText_841B343, NULL
    .4byte kText_841B350, NULL
    .4byte kText_841B358, NULL
    .4byte kText_841B361, NULL

kPalette_845AC14:: @ 845AC14
    .incbin "baserom.gba", 0x45AC14, 0x20

kUGfx_845AC34:: @ 845AC34
    .incbin "baserom.gba", 0x45AC34, 0x283

    .align 2
kUGfx_845AEB8:: @ 845AEB8
    .incbin "baserom.gba", 0x45AEB8, 0x1D

    .align 2
kUGfx_845AED8:: @ 845AED8
    .incbin "baserom.gba", 0x45AED8, 0x2A

    .align 2
kUGfx_845AF04:: @ 845AF04
    .incbin "baserom.gba", 0x45AF04, 0x51

    .align 2
kObjTiles_845AF58:: @ 845AF58
    obj_tiles kUGfx_845AC34, 0x1000, 0
    obj_tiles kUGfx_845AED8, 0x40, 1
    obj_tiles kUGfx_845AEB8, 0x40, 2
    obj_tiles kUGfx_845AF04, 0x80, 3
    obj_tiles kUnkGfx_8EA1A50, 0x400, 4

kObjPal_845AF80:: @ 845AF80
    obj_pal kPalette_845AC14, 0

kOAM_845AF88:: @ 845AF88
    .2byte 0x4000
    .2byte 0xC000
    .2byte 0x0400
    .2byte 0x0000

kAnimCmd_845AF90:: @ 845AF90
    obj_image_anim_frame 0, 30
    obj_image_anim_end

kAnimCmd_845AF98:: @ 845AF98
    obj_image_anim_frame 32, 30
    obj_image_anim_end

kAnimCmd_845AFA0:: @ 845AFA0
    obj_image_anim_frame 64, 30
    obj_image_anim_end

kAnimCmd_845AFA8:: @ 845AFA8
    obj_image_anim_frame 96, 30
    obj_image_anim_end

kAnimCmds_845AFB0:: @ 845AFB0
    .4byte kAnimCmd_845AF90 @ 845AF90
    .4byte kAnimCmd_845AF98 @ 845AF98
    .4byte kAnimCmd_845AFA0 @ 845AFA0
    .4byte kAnimCmd_845AFA8 @ 845AFA8

kSpriteTemplate_845AFC0:: @ 845AFC0
    spr_template 0, 0, kOAM_845AF88, kAnimCmds_845AFB0, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kOAM_845AFD8:: @ 845AFD8
    .2byte 0x8000
    .2byte 0x0000
    .2byte 0x0800
    .2byte 0x0000

kSpriteTemplate_845AFE0:: @ 845AFE0
    spr_template 2, 0, kOAM_845AFD8, kDummySpriteAnimTable, NULL, kDummySpriteAffineAnimTable, sub_812B09C

kSpriteTemplate_845AFF8:: @ 845AFF8
    spr_template 1, 0, kOAM_845AFD8, kDummySpriteAnimTable, NULL, kDummySpriteAffineAnimTable, sub_812B0D4

kOAM_845B010:: @ 845B010
    .2byte 0x0000
    .2byte 0x4000
    .2byte 0x0800
    .2byte 0x0000

kOAM_845B018:: @ 845B018
    .2byte 0x4000
    .2byte 0x8000
    .2byte 0x0800
    .2byte 0x0000

kAnimCmd_845B020:: @ 845B020
    obj_image_anim_frame 0, 2
    obj_image_anim_end

kAnimCmd_845B028:: @ 845B028
    obj_image_anim_frame 8, 2
    obj_image_anim_end

kAnimCmd_845B030:: @ 845B030
    obj_image_anim_frame 16, 2
    obj_image_anim_end

kAnimCmd_845B038:: @ 845B038
    obj_image_anim_frame 24, 2
    obj_image_anim_end

kAnimCmds_845B040:: @ 845B040
    .4byte kAnimCmd_845B020 @ 845B020
    .4byte kAnimCmd_845B028 @ 845B028
    .4byte kAnimCmd_845B030 @ 845B030
    .4byte kAnimCmd_845B038 @ 845B038

kSpriteTemplate_845B050:: @ 845B050
    spr_template 3, 0, kOAM_845B010, kDummySpriteAnimTable, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kSpriteTemplate_845B068:: @ 845B068
    spr_template 4, 0, kOAM_845B018, kAnimCmds_845B040, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kPointer_845B080:: @ 845B080
    .4byte Text_81B2DF8 @ 81B2DF8
    .4byte Text_81B2E1C @ 81B2E1C
    .4byte Text_81B2E2E @ 81B2E2E
    .4byte Text_81B2E48 @ 81B2E48
    .4byte Text_81B2E58 @ 81B2E58
    .4byte Text_81B2E6A @ 81B2E6A

kPointer_845B098:: @ 845B098
    .4byte Text_81B2E88 @ 81B2E88
    .4byte Text_81B2EC8 @ 81B2EC8
    .4byte Text_81B2F00 @ 81B2F00
    .4byte Text_81B2F43 @ 81B2F43
    .4byte Text_81B2F74 @ 81B2F74
    .4byte Text_81B2FA9 @ 81B2FA9
    .4byte NULL @ 0
    .4byte Text_81B3083 @ 81B3083
    .4byte Text_81B30A9 @ 81B30A9
    .4byte Text_81B30C1 @ 81B30C1
    .4byte Text_81B30DC @ 81B30DC
    .4byte Text_81B30FC @ 81B30FC
    .4byte Text_81B311F @ 81B311F
    .4byte Text_81B3140 @ 81B3140
    .4byte Text_81B314F @ 81B314F
    .4byte Text_81B3168 @ 81B3168
    .4byte Text_81B3189 @ 81B3189
    .4byte Text_81B31AE @ 81B31AE
    .4byte Text_81B31D3 @ 81B31D3
    .4byte Text_81B31EC @ 81B31EC
    .4byte Text_81B31FF @ 81B31FF
    .4byte Text_81B3215 @ 81B3215
    .4byte Text_81B3226 @ 81B3226
    .4byte Text_81B3243 @ 81B3243
    .4byte Text_81B3261 @ 81B3261
    .4byte Text_81B3276 @ 81B3276
    .4byte Text_81B3290 @ 81B3290
    .4byte Text_81B32B6 @ 81B32B6
    .4byte Text_81B32CD @ 81B32CD
    .4byte Text_81B32E3 @ 81B32E3
    .4byte Text_81B32F9 @ 81B32F9
    .4byte Text_81B330B @ 81B330B
    .4byte Text_81B332B @ 81B332B
    .4byte Text_81B3344 @ 81B3344
    .4byte Text_81B335C @ 81B335C
    .4byte Text_81B3373 @ 81B3373
    .4byte Text_81B338C @ 81B338C
    .4byte Text_81B33A6 @ 81B33A6
    .4byte Text_81B33CA @ 81B33CA
    .4byte Text_81B33EA @ 81B33EA
    .4byte Text_81B3402 @ 81B3402
    .4byte Text_81B3427 @ 81B3427
    .4byte Text_81B3440 @ 81B3440
    .4byte Text_81B3457 @ 81B3457
    .4byte Text_81B346F @ 81B346F
    .4byte Text_81B3481 @ 81B3481
    .4byte Text_81B349B @ 81B349B
    .4byte Text_81B34B7 @ 81B34B7
    .4byte Text_81B34D6 @ 81B34D6
    .4byte Text_81B34F6 @ 81B34F6
    .4byte Text_81B3516 @ 81B3516
    .4byte NULL @ 0
    .4byte Text_81B3525 @ 81B3525
    .4byte Text_81B35E6 @ 81B35E6
    .4byte Text_81B36EB @ 81B36EB
    .4byte Text_81B379A @ 81B379A
    .4byte Text_81B3849 @ 81B3849
    .4byte Text_81B3876 @ 81B3876
    .4byte Text_81B3972 @ 81B3972
    .4byte Text_81B3A51 @ 81B3A51
    .4byte Text_81B3ACC @ 81B3ACC
    .4byte Text_81B3BB6 @ 81B3BB6
    .4byte Text_81B3C99 @ 81B3C99
    .4byte Text_81B3D1B @ 81B3D1B
    .4byte Text_81B3DE3 @ 81B3DE3
    .4byte Text_81B3EBC @ 81B3EBC
    .4byte Text_81B3F7F @ 81B3F7F
    .4byte Text_81B406C @ 81B406C
    .4byte Text_81B410B @ 81B410B
    .4byte Text_81B41D7 @ 81B41D7
    .4byte Text_81B42B3 @ 81B42B3
    .4byte Text_81B439D @ 81B439D
    .4byte Text_81B4483 @ 81B4483
    .4byte Text_81B457C @ 81B457C
    .4byte Text_81B4645 @ 81B4645
    .4byte Text_81B470A @ 81B470A
    .4byte Text_81B47F0 @ 81B47F0
    .4byte Text_81B48C6 @ 81B48C6
    .4byte Text_81B497A @ 81B497A
    .4byte Text_81B4A72 @ 81B4A72
    .4byte Text_81B4B65 @ 81B4B65
    .4byte Text_81B4C54 @ 81B4C54
    .4byte Text_81B4D26 @ 81B4D26
    .4byte Text_81B4E0B @ 81B4E0B
    .4byte Text_81B4ED8 @ 81B4ED8
    .4byte Text_81B4FB2 @ 81B4FB2
    .4byte Text_81B4FFD @ 81B4FFD
    .4byte Text_81B50FF @ 81B50FF
    .4byte Text_81B51B1 @ 81B51B1
    .4byte Text_81B5272 @ 81B5272
    .4byte Text_81B5325 @ 81B5325
    .4byte Text_81B5382 @ 81B5382
    .4byte Text_81B547C @ 81B547C
    .4byte Text_81B54E1 @ 81B54E1
    .4byte Text_81B5589 @ 81B5589
    .4byte Text_81B55F4 @ 81B55F4
    .4byte NULL @ 0
    .4byte Text_81B56E3 @ 81B56E3
    .4byte Text_81B56F4 @ 81B56F4
    .4byte Text_81B5705 @ 81B5705
    .4byte Text_81B5717 @ 81B5717
    .4byte Text_81B5728 @ 81B5728
    .4byte Text_81B5737 @ 81B5737
    .4byte Text_81B5744 @ 81B5744
    .4byte Text_81B5754 @ 81B5754
    .4byte Text_81B5767 @ 81B5767
    .4byte Text_81B577B @ 81B577B
    .4byte Text_81B5787 @ 81B5787
    .4byte Text_81B5795 @ 81B5795
    .4byte Text_81B57A5 @ 81B57A5
    .4byte Text_81B57B8 @ 81B57B8
    .4byte Text_81B57CF @ 81B57CF
    .4byte Text_81B57DE @ 81B57DE
    .4byte Text_81B57EE @ 81B57EE
    .4byte Text_81B580D @ 81B580D
    .4byte Text_81B5824 @ 81B5824
    .4byte Text_81B5834 @ 81B5834
    .4byte Text_81B583F @ 81B583F
    .4byte Text_81B5850 @ 81B5850
    .4byte Text_81B5863 @ 81B5863
    .4byte Text_81B5875 @ 81B5875
    .4byte Text_81B5884 @ 81B5884
    .4byte Text_81B5893 @ 81B5893
    .4byte Text_81B58A4 @ 81B58A4
    .4byte Text_81B58BC @ 81B58BC
    .4byte Text_81B58D3 @ 81B58D3
    .4byte Text_81B58E5 @ 81B58E5
    .4byte Text_81B58FD @ 81B58FD
    .4byte Text_81B590E @ 81B590E
    .4byte Text_81B591D @ 81B591D
    .4byte Text_81B592E @ 81B592E
    .4byte Text_81B593E @ 81B593E
    .4byte Text_81B5950 @ 81B5950
    .4byte Text_81B595D @ 81B595D
    .4byte Text_81B5974 @ 81B5974
    .4byte Text_81B5989 @ 81B5989
    .4byte Text_81B59A7 @ 81B59A7
    .4byte Text_81B59BF @ 81B59BF
    .4byte Text_81B59D6 @ 81B59D6
    .4byte Text_81B59E8 @ 81B59E8
    .4byte Text_81B59F5 @ 81B59F5
    .4byte Text_81B5A0D @ 81B5A0D
    .4byte Text_81B5A1B @ 81B5A1B
    .4byte Text_81B5A29 @ 81B5A29
    .4byte Text_81B5A37 @ 81B5A37
    .4byte NULL @ 0
    .4byte Text_81B5A4D @ 81B5A4D
    .4byte Text_81B5B0C @ 81B5B0C
    .4byte Text_81B5B7D @ 81B5B7D
    .4byte Text_81B5C13 @ 81B5C13
    .4byte Text_81B5CDF @ 81B5CDF
    .4byte Text_81B5D87 @ 81B5D87
    .4byte Text_81B5E41 @ 81B5E41
    .4byte Text_81B5F10 @ 81B5F10
    .4byte Text_81B5FA6 @ 81B5FA6
    .4byte Text_81B606C @ 81B606C
    .4byte Text_81B6140 @ 81B6140
    .4byte Text_81B6203 @ 81B6203
    .4byte Text_81B62E4 @ 81B62E4
    .4byte Text_81B6397 @ 81B6397
    .4byte Text_81B6478 @ 81B6478
    .4byte Text_81B6525 @ 81B6525
    .4byte Text_81B65E7 @ 81B65E7
    .4byte Text_81B66BA @ 81B66BA
    .4byte Text_81B678E @ 81B678E
    .4byte Text_81B6883 @ 81B6883
    .4byte Text_81B68CD @ 81B68CD
    .4byte Text_81B69B9 @ 81B69B9
    .4byte Text_81B6A9A @ 81B6A9A
    .4byte Text_81B6B6E @ 81B6B6E
    .4byte Text_81B6C4F @ 81B6C4F
    .4byte Text_81B6D4A @ 81B6D4A
    .4byte Text_81B6E02 @ 81B6E02
    .4byte Text_81B6EC1 @ 81B6EC1
    .4byte Text_81B6FA8 @ 81B6FA8
    .4byte Text_81B7075 @ 81B7075
    .4byte Text_81B7108 @ 81B7108
    .4byte Text_81B71EA @ 81B71EA
    .4byte Text_81B723B @ 81B723B
    .4byte Text_81B7319 @ 81B7319
    .4byte Text_81B73E8 @ 81B73E8
    .4byte Text_81B747E @ 81B747E
    .4byte Text_81B752C @ 81B752C
    .4byte Text_81B7611 @ 81B7611
    .4byte Text_81B7692 @ 81B7692
    .4byte Text_81B771E @ 81B771E
    .4byte Text_81B77DD @ 81B77DD
    .4byte Text_81B7884 @ 81B7884
    .4byte Text_81B7931 @ 81B7931
    .4byte Text_81B79CB @ 81B79CB
    .4byte Text_81B7A60 @ 81B7A60
    .4byte Text_81B7AEE @ 81B7AEE
    .4byte Text_81B7BBE @ 81B7BBE
    .4byte Text_81B7C57 @ 81B7C57
    .4byte NULL @ 0
    .4byte Text_81B7CC1 @ 81B7CC1
    .4byte Text_81B7CC4 @ 81B7CC4
    .4byte Text_81B7CD9 @ 81B7CD9
    .4byte Text_81B7CDF @ 81B7CDF
    .4byte Text_81B7CE6 @ 81B7CE6
    .4byte Text_81B7CEE @ 81B7CEE
    .4byte Text_81B7CF6 @ 81B7CF6
    .4byte Text_81B7CFE @ 81B7CFE
    .4byte Text_81B7D04 @ 81B7D04
    .4byte Text_81B7D12 @ 81B7D12
    .4byte Text_81B7D17 @ 81B7D17
    .4byte Text_81B7D1A @ 81B7D1A
    .4byte Text_81B7D1F @ 81B7D1F
    .4byte Text_81B7D27 @ 81B7D27
    .4byte Text_81B7D2D @ 81B7D2D
    .4byte Text_81B7D37 @ 81B7D37
    .4byte Text_81B7D3E @ 81B7D3E
    .4byte Text_81B7D45 @ 81B7D45
    .4byte Text_81B7D48 @ 81B7D48
    .4byte Text_81B7D4E @ 81B7D4E
    .4byte Text_81B7D57 @ 81B7D57
    .4byte Text_81B7D5B @ 81B7D5B
    .4byte Text_81B7D61 @ 81B7D61
    .4byte Text_81B7D6B @ 81B7D6B
    .4byte Text_81B7D76 @ 81B7D76
    .4byte Text_81B7D7E @ 81B7D7E
    .4byte Text_81B7D88 @ 81B7D88
    .4byte Text_81B7D8F @ 81B7D8F
    .4byte Text_81B7D9A @ 81B7D9A
    .4byte Text_81B7DA7 @ 81B7DA7
    .4byte Text_81B7DB4 @ 81B7DB4
    .4byte Text_81B7DBA @ 81B7DBA
    .4byte Text_81B7DC6 @ 81B7DC6
    .4byte Text_81B7DCC @ 81B7DCC
    .4byte Text_81B7DD3 @ 81B7DD3
    .4byte Text_81B7DD6 @ 81B7DD6
    .4byte Text_81B7DD9 @ 81B7DD9
    .4byte Text_81B7DE1 @ 81B7DE1
    .4byte Text_81B7DEB @ 81B7DEB
    .4byte Text_81B7DFA @ 81B7DFA
    .4byte Text_81B7E02 @ 81B7E02
    .4byte Text_81B7E09 @ 81B7E09
    .4byte Text_81B7E0F @ 81B7E0F
    .4byte NULL @ 0
    .4byte Text_81B7E16 @ 81B7E16
    .4byte Text_81B7F0A @ 81B7F0A
    .4byte Text_81B800A @ 81B800A
    .4byte Text_81B80EC @ 81B80EC
    .4byte Text_81B81C2 @ 81B81C2
    .4byte Text_81B8256 @ 81B8256
    .4byte Text_81B8348 @ 81B8348
    .4byte Text_81B83EF @ 81B83EF
    .4byte Text_81B847B @ 81B847B
    .4byte Text_81B8550 @ 81B8550
    .4byte Text_81B8647 @ 81B8647
    .4byte Text_81B86E2 @ 81B86E2
    .4byte Text_81B87B8 @ 81B87B8
    .4byte Text_81B8897 @ 81B8897
    .4byte Text_81B8924 @ 81B8924
    .4byte Text_81B8A04 @ 81B8A04
    .4byte Text_81B8A84 @ 81B8A84
    .4byte Text_81B8B62 @ 81B8B62
    .4byte Text_81B8C18 @ 81B8C18
    .4byte Text_81B8C94 @ 81B8C94
    .4byte Text_81B8D1D @ 81B8D1D
    .4byte Text_81B8DD4 @ 81B8DD4
    .4byte Text_81B8E67 @ 81B8E67
    .4byte Text_81B8F4D @ 81B8F4D
    .4byte Text_81B901B @ 81B901B
    .4byte Text_81B90A7 @ 81B90A7
    .4byte Text_81B90E8 @ 81B90E8
    .4byte Text_81B9170 @ 81B9170
    .4byte Text_81B91C2 @ 81B91C2
    .4byte Text_81B91F9 @ 81B91F9
    .4byte Text_81B92B8 @ 81B92B8
    .4byte Text_81B92ED @ 81B92ED
    .4byte Text_81B93D8 @ 81B93D8
    .4byte Text_81B9439 @ 81B9439
    .4byte Text_81B9497 @ 81B9497
    .4byte Text_81B9560 @ 81B9560
    .4byte Text_81B9656 @ 81B9656
    .4byte Text_81B9749 @ 81B9749
    .4byte Text_81B984F @ 81B984F
    .4byte Text_81B991C @ 81B991C
    .4byte Text_81B99C4 @ 81B99C4
    .4byte Text_81B9AA2 @ 81B9AA2
    .4byte Text_81B9B2F @ 81B9B2F
    .4byte NULL @ 0
    .4byte Text_81B9BB7 @ 81B9BB7
    .4byte Text_81B9BC7 @ 81B9BC7
    .4byte Text_81B9BD0 @ 81B9BD0
    .4byte Text_81B9BE1 @ 81B9BE1
    .4byte Text_81B9BF5 @ 81B9BF5
    .4byte Text_81B9C09 @ 81B9C09
    .4byte Text_81B9C1D @ 81B9C1D
    .4byte NULL @ 0
    .4byte Text_81B9C2F @ 81B9C2F
    .4byte Text_81B9D04 @ 81B9D04
    .4byte Text_81B9DC5 @ 81B9DC5
    .4byte Text_81B9E75 @ 81B9E75
    .4byte Text_81B9F09 @ 81B9F09
    .4byte Text_81B9FCE @ 81B9FCE
    .4byte Text_81BA027 @ 81BA027
    .4byte NULL @ 0
    .4byte Text_81BA0F1 @ 81BA0F1
    .4byte Text_81BA10D @ 81BA10D
    .4byte Text_81BA121 @ 81BA121
    .4byte Text_81BA138 @ 81BA138
    .4byte Text_81BA14C @ 81BA14C
    .4byte Text_81BA163 @ 81BA163
    .4byte Text_81BA17A @ 81BA17A
    .4byte Text_81BA194 @ 81BA194
    .4byte Text_81BA1AC @ 81BA1AC
    .4byte Text_81BA1C7 @ 81BA1C7
    .4byte Text_81BA1DC @ 81BA1DC
    .4byte Text_81BA1F4 @ 81BA1F4
    .4byte Text_81BA209 @ 81BA209
    .4byte Text_81BA221 @ 81BA221
    .4byte Text_81BA234 @ 81BA234
    .4byte Text_81BA24A @ 81BA24A
    .4byte Text_81BA260 @ 81BA260
    .4byte Text_81BA279 @ 81BA279
    .4byte Text_81BA291 @ 81BA291
    .4byte Text_81BA2AC @ 81BA2AC
    .4byte Text_81BA2C2 @ 81BA2C2
    .4byte Text_81BA2DB @ 81BA2DB
    .4byte Text_81BA2F1 @ 81BA2F1
    .4byte Text_81BA30A @ 81BA30A
    .4byte Text_81BA320 @ 81BA320
    .4byte Text_81BA339 @ 81BA339
    .4byte Text_81BA34E @ 81BA34E
    .4byte Text_81BA366 @ 81BA366
    .4byte Text_81BA37C @ 81BA37C
    .4byte Text_81BA395 @ 81BA395
    .4byte Text_81BA3A9 @ 81BA3A9
    .4byte Text_81BA3C0 @ 81BA3C0
    .4byte Text_81BA3D5 @ 81BA3D5
    .4byte Text_81BA3ED @ 81BA3ED
    .4byte Text_81BA400 @ 81BA400
    .4byte NULL @ 0
    .4byte Text_81BA416 @ 81BA416
    .4byte Text_81BA4E6 @ 81BA4E6
    .4byte Text_81BA539 @ 81BA539
    .4byte Text_81BA595 @ 81BA595
    .4byte Text_81BA5F2 @ 81BA5F2
    .4byte Text_81BA66F @ 81BA66F
    .4byte Text_81BA6C9 @ 81BA6C9
    .4byte Text_81BA71F @ 81BA71F
    .4byte Text_81BA796 @ 81BA796
    .4byte Text_81BA7E9 @ 81BA7E9
    .4byte Text_81BA862 @ 81BA862
    .4byte Text_81BA8D3 @ 81BA8D3
    .4byte Text_81BA92A @ 81BA92A
    .4byte Text_81BA98D @ 81BA98D
    .4byte Text_81BA9F1 @ 81BA9F1
    .4byte Text_81BAA44 @ 81BAA44
    .4byte Text_81BAAB6 @ 81BAAB6
    .4byte Text_81BAB18 @ 81BAB18
    .4byte Text_81BAB7A @ 81BAB7A
    .4byte Text_81BABCC @ 81BABCC
    .4byte Text_81BAC29 @ 81BAC29
    .4byte Text_81BAC89 @ 81BAC89
    .4byte Text_81BACC4 @ 81BACC4
    .4byte Text_81BAD20 @ 81BAD20
    .4byte Text_81BAD60 @ 81BAD60
    .4byte Text_81BADA2 @ 81BADA2
    .4byte Text_81BADF7 @ 81BADF7
    .4byte Text_81BAEA8 @ 81BAEA8
    .4byte Text_81BAF01 @ 81BAF01
    .4byte Text_81BAF6B @ 81BAF6B
    .4byte Text_81BAFCA @ 81BAFCA
    .4byte Text_81BB02E @ 81BB02E
    .4byte Text_81BB084 @ 81BB084
    .4byte Text_81BB0DF @ 81BB0DF
    .4byte Text_81BB156 @ 81BB156

kHelpTopicList_845B660:: @ 845B660
    .byte 1
    .byte 2
    .byte 3
    .byte -1

kHelpTopicList_845B664:: @ 845B664
    .byte 1
    .byte 2
    .byte 3
    .byte -1

kHelpTopicList_845B668:: @ 845B668
    .byte 19
    .byte -1

kHelpTopicList_845B66A:: @ 845B66A
    .byte 1
    .byte 2
    .byte 3
    .byte -1

kHelpTopicList_845B66E:: @ 845B66E
    .byte 1
    .byte 37
    .byte -1

kHelpTopicList_845B671:: @ 845B671
    .byte 2
    .byte 3
    .byte 4
    .byte 5
    .byte 17
    .byte -1

kHelpTopicList_845B677:: @ 845B677
    .byte 9
    .byte 1
    .byte -1

kHelpTopicList_845B67A:: @ 845B67A
    .byte 2
    .byte 3
    .byte -1

kHelpTopicList_845B67D:: @ 845B67D
    .byte 9
    .byte 10
    .byte 11
    .byte 17
    .byte 12
    .byte 16
    .byte -1

kHelpTopicList_845B684:: @ 845B684
    .byte 9
    .byte 1
    .byte 4
    .byte 5
    .byte 6
    .byte 7
    .byte 8
    .byte 2
    .byte 13
    .byte -1

kHelpTopicList_845B68E:: @ 845B68E
    .byte 9
    .byte 3
    .byte 10
    .byte 15
    .byte 18
    .byte 19
    .byte 20
    .byte -1

kHelpTopicList_845B696:: @ 845B696
    .byte 6
    .byte 7
    .byte 8
    .byte 44
    .byte 9
    .byte 13
    .byte 14
    .byte 15
    .byte 16
    .byte 18
    .byte -1

kHelpTopicList_845B6A1:: @ 845B6A1
    .byte 22
    .byte 23
    .byte 24
    .byte -1

kHelpTopicList_845B6A5:: @ 845B6A5
    .byte 10
    .byte -1

kHelpTopicList_845B6A7:: @ 845B6A7
    .byte 17
    .byte 14
    .byte 25
    .byte 26
    .byte 27
    .byte -1

kHelpTopicList_845B6AD:: @ 845B6AD
    .byte 10
    .byte -1

kHelpTopicList_845B6AF:: @ 845B6AF
    .byte 11
    .byte -1

kHelpTopicList_845B6B1:: @ 845B6B1
    .byte 43
    .byte 25
    .byte 26
    .byte -1

kHelpTopicList_845B6B5:: @ 845B6B5
    .byte 12
    .byte -1

kHelpTopicList_845B6B7:: @ 845B6B7
    .byte 28
    .byte 29
    .byte 30
    .byte 31
    .byte 32
    .byte 33
    .byte 34
    .byte -1

kHelpTopicList_845B6BF:: @ 845B6BF
    .byte 2
    .byte 3
    .byte 4
    .byte -1

kHelpTopicList_845B6C3:: @ 845B6C3
    .byte 1
    .byte 2
    .byte 3
    .byte 7
    .byte -1

kHelpTopicList_845B6C8:: @ 845B6C8
    .byte 2
    .byte 4
    .byte 5
    .byte 9
    .byte 37
    .byte -1

kHelpTopicList_845B6CE:: @ 845B6CE
    .byte 31
    .byte 1
    .byte 2
    .byte 3
    .byte 4
    .byte 5
    .byte 6
    .byte 7
    .byte 8
    .byte 44
    .byte 9
    .byte 13
    .byte 14
    .byte 15
    .byte 16
    .byte 10
    .byte 11
    .byte 12
    .byte 17
    .byte -1

kHelpTopicList_845B6E2:: @ 845B6E2
    .byte 9
    .byte 1
    .byte 2
    .byte 3
    .byte 10
    .byte 40
    .byte -1

kHelpTopicList_845B6E9:: @ 845B6E9
    .byte 2
    .byte 5
    .byte 6
    .byte 10
    .byte 35
    .byte 36
    .byte 9
    .byte 37
    .byte -1

kHelpTopicList_845B6F2:: @ 845B6F2
    .byte 31
    .byte 1
    .byte 2
    .byte 3
    .byte 4
    .byte 5
    .byte 6
    .byte 7
    .byte 8
    .byte 44
    .byte 9
    .byte 13
    .byte 14
    .byte 15
    .byte 16
    .byte 10
    .byte 11
    .byte 12
    .byte 17
    .byte 20
    .byte -1

kHelpTopicList_845B707:: @ 845B707
    .byte 9
    .byte 1
    .byte 2
    .byte 3
    .byte 10
    .byte 40
    .byte -1

kHelpTopicList_845B70E:: @ 845B70E
    .byte 3
    .byte 7
    .byte 4
    .byte 5
    .byte 6
    .byte -1

kHelpTopicList_845B714:: @ 845B714
    .byte 2
    .byte 5
    .byte 6
    .byte 10
    .byte 35
    .byte 36
    .byte 9
    .byte 37
    .byte -1

kHelpTopicList_845B71D:: @ 845B71D
    .byte 31
    .byte 1
    .byte 2
    .byte 3
    .byte 4
    .byte 5
    .byte 6
    .byte 7
    .byte 8
    .byte 44
    .byte 9
    .byte 13
    .byte 14
    .byte 15
    .byte 16
    .byte 10
    .byte 11
    .byte 12
    .byte 17
    .byte -1

kHelpTopicList_845B731:: @ 845B731
    .byte 9
    .byte 1
    .byte 2
    .byte 3
    .byte 10
    .byte 12
    .byte 14
    .byte 22
    .byte 23
    .byte 24
    .byte 21
    .byte -1

kHelpTopicList_845B73D:: @ 845B73D
    .byte 6
    .byte 10
    .byte 35
    .byte 36
    .byte 9
    .byte 37
    .byte -1

kHelpTopicList_845B744:: @ 845B744
    .byte 31
    .byte 1
    .byte 2
    .byte 3
    .byte 4
    .byte 5
    .byte 6
    .byte 7
    .byte 8
    .byte 44
    .byte 9
    .byte 13
    .byte 14
    .byte 15
    .byte 16
    .byte 10
    .byte 11
    .byte 12
    .byte 17
    .byte -1

kHelpTopicList_845B758:: @ 845B758
    .byte 9
    .byte 1
    .byte 2
    .byte 3
    .byte 10
    .byte 21
    .byte -1

kHelpTopicList_845B75F:: @ 845B75F
    .byte 1
    .byte 2
    .byte 3
    .byte 4
    .byte 5
    .byte 6
    .byte 7
    .byte 8
    .byte 9
    .byte 10
    .byte 11
    .byte 12
    .byte 13
    .byte 14
    .byte 15
    .byte 16
    .byte 17
    .byte 18
    .byte 19
    .byte 20
    .byte 21
    .byte 22
    .byte 23
    .byte 24
    .byte 25
    .byte 26
    .byte 27
    .byte 28
    .byte 29
    .byte 30
    .byte 31
    .byte 32
    .byte 33
    .byte 34
    .byte 35
    .byte -1

kHelpTopicList_845B783:: @ 845B783
    .byte 2
    .byte 10
    .byte 4
    .byte 5
    .byte 6
    .byte 7
    .byte 13
    .byte 39
    .byte 8
    .byte 11
    .byte 33
    .byte 35
    .byte 36
    .byte 44
    .byte 9
    .byte 14
    .byte 22
    .byte 23
    .byte 15
    .byte 16
    .byte 17
    .byte 26
    .byte 21
    .byte 31
    .byte 32
    .byte 18
    .byte 19
    .byte 20
    .byte 24
    .byte 25
    .byte 27
    .byte 30
    .byte 28
    .byte 40
    .byte 37
    .byte -1

kHelpTopicList_845B7A7:: @ 845B7A7
    .byte 31
    .byte 1
    .byte 2
    .byte 3
    .byte 4
    .byte 5
    .byte 6
    .byte 7
    .byte 8
    .byte 44
    .byte 9
    .byte 13
    .byte 14
    .byte 15
    .byte 16
    .byte 10
    .byte 11
    .byte 12
    .byte 17
    .byte -1

kHelpTopicList_845B7BB:: @ 845B7BB
    .byte 9
    .byte 1
    .byte 2
    .byte 10
    .byte 11
    .byte 12
    .byte 13
    .byte 21
    .byte -1

kHelpTopicList_845B7C4:: @ 845B7C4
    .byte 2
    .byte 10
    .byte 4
    .byte 5
    .byte 6
    .byte 7
    .byte 13
    .byte 39
    .byte 8
    .byte 11
    .byte 33
    .byte 35
    .byte 36
    .byte 44
    .byte 9
    .byte 14
    .byte 22
    .byte 23
    .byte 15
    .byte 16
    .byte 17
    .byte 26
    .byte 21
    .byte 31
    .byte 32
    .byte 18
    .byte 19
    .byte 20
    .byte 24
    .byte 25
    .byte 27
    .byte 30
    .byte 28
    .byte 40
    .byte 37
    .byte -1

kHelpTopicList_845B7E8:: @ 845B7E8
    .byte 31
    .byte 1
    .byte 2
    .byte 6
    .byte 10
    .byte 11
    .byte 12
    .byte 17
    .byte -1

kHelpTopicList_845B7F1:: @ 845B7F1
    .byte 9
    .byte 1
    .byte 2
    .byte 10
    .byte 11
    .byte 12
    .byte 13
    .byte 21
    .byte 40
    .byte -1

kHelpTopicList_845B7FB:: @ 845B7FB
    .byte 10
    .byte 7
    .byte 13
    .byte 39
    .byte 8
    .byte 11
    .byte 33
    .byte 35
    .byte 36
    .byte 44
    .byte 9
    .byte 14
    .byte 22
    .byte 15
    .byte 16
    .byte 17
    .byte 26
    .byte 21
    .byte 31
    .byte 32
    .byte 18
    .byte 19
    .byte 20
    .byte 24
    .byte 25
    .byte 27
    .byte 30
    .byte 28
    .byte 40
    .byte 37
    .byte -1

kHelpTopicList_845B81A:: @ 845B81A
    .byte 31
    .byte 1
    .byte 2
    .byte 6
    .byte 10
    .byte 11
    .byte 12
    .byte 17
    .byte -1

kHelpTopicList_845B823:: @ 845B823
    .byte 9
    .byte 1
    .byte 2
    .byte 10
    .byte 11
    .byte 12
    .byte 13
    .byte 21
    .byte -1

kHelpTopicList_845B82C:: @ 845B82C
    .byte 7
    .byte 39
    .byte 8
    .byte 44
    .byte 21
    .byte 31
    .byte 32
    .byte 18
    .byte 19
    .byte 20
    .byte 24
    .byte 25
    .byte 27
    .byte 30
    .byte 28
    .byte 40
    .byte 37
    .byte -1

kHelpTopicList_845B83E:: @ 845B83E
    .byte 31
    .byte 1
    .byte 2
    .byte 6
    .byte 10
    .byte 11
    .byte 12
    .byte 17
    .byte -1

kHelpTopicList_845B847:: @ 845B847
    .byte 9
    .byte 1
    .byte 2
    .byte 10
    .byte 11
    .byte 12
    .byte 13
    .byte 21
    .byte -1

kHelpTopicList_845B850:: @ 845B850
    .byte 15
    .byte 27
    .byte 29
    .byte 17
    .byte 18
    .byte 21
    .byte 23
    .byte 22
    .byte 31
    .byte 32
    .byte 19
    .byte 20
    .byte -1

kHelpTopicList_845B85D:: @ 845B85D
    .byte 32
    .byte 33
    .byte 34
    .byte 35
    .byte 36
    .byte 7
    .byte 9
    .byte 43
    .byte -1

kHelpTopicList_845B866:: @ 845B866
    .byte 9
    .byte 1
    .byte 2
    .byte 3
    .byte 4
    .byte 5
    .byte 6
    .byte 7
    .byte 8
    .byte 10
    .byte 13
    .byte 15
    .byte 18
    .byte 19
    .byte 20
    .byte 39
    .byte 21
    .byte -1

kHelpTopicList_845B878:: @ 845B878
    .byte 1
    .byte 2
    .byte 3
    .byte 4
    .byte 5
    .byte 6
    .byte 7
    .byte 8
    .byte 9
    .byte 10
    .byte 11
    .byte 12
    .byte 13
    .byte 14
    .byte 15
    .byte 16
    .byte 17
    .byte 18
    .byte 19
    .byte 20
    .byte 21
    .byte 22
    .byte 23
    .byte 24
    .byte 25
    .byte 26
    .byte 27
    .byte 28
    .byte 29
    .byte 30
    .byte 31
    .byte 32
    .byte 33
    .byte 34
    .byte 35
    .byte -1

kHelpTopicList_845B89C:: @ 845B89C
    .byte 15
    .byte 27
    .byte 29
    .byte 17
    .byte 18
    .byte 22
    .byte 31
    .byte 32
    .byte 19
    .byte 20
    .byte -1

kHelpTopicList_845B8A7:: @ 845B8A7
    .byte 32
    .byte 33
    .byte 34
    .byte 35
    .byte 36
    .byte 7
    .byte 43
    .byte -1

kHelpTopicList_845B8AF:: @ 845B8AF
    .byte 9
    .byte 1
    .byte 2
    .byte 3
    .byte 4
    .byte 5
    .byte 6
    .byte 7
    .byte 8
    .byte 10
    .byte 13
    .byte 15
    .byte 18
    .byte 19
    .byte 20
    .byte 39
    .byte 21
    .byte -1

kHelpTopicList_845B8C1:: @ 845B8C1
    .byte 1
    .byte 2
    .byte 3
    .byte 4
    .byte 5
    .byte 6
    .byte 7
    .byte 8
    .byte 9
    .byte 10
    .byte 11
    .byte 12
    .byte 13
    .byte 14
    .byte 15
    .byte 16
    .byte 17
    .byte 18
    .byte 19
    .byte 20
    .byte 21
    .byte 22
    .byte 23
    .byte 24
    .byte 25
    .byte 26
    .byte 27
    .byte 28
    .byte 29
    .byte 30
    .byte 31
    .byte 32
    .byte 33
    .byte 34
    .byte 35
    .byte -1

kHelpTopicList_845B8E5:: @ 845B8E5
    .byte 15
    .byte 27
    .byte 29
    .byte 17
    .byte 18
    .byte 22
    .byte 31
    .byte 32
    .byte 19
    .byte 20
    .byte -1

kHelpTopicList_845B8F0:: @ 845B8F0
    .byte 32
    .byte 33
    .byte 34
    .byte 35
    .byte 36
    .byte 7
    .byte 43
    .byte -1

kHelpTopicList_845B8F8:: @ 845B8F8
    .byte 9
    .byte 1
    .byte 2
    .byte 3
    .byte 4
    .byte 5
    .byte 6
    .byte 7
    .byte 8
    .byte 10
    .byte 13
    .byte 15
    .byte 18
    .byte 19
    .byte 20
    .byte 39
    .byte 21
    .byte -1

kHelpTopicList_845B90A:: @ 845B90A
    .byte 1
    .byte 2
    .byte 3
    .byte 4
    .byte 5
    .byte 6
    .byte 7
    .byte 8
    .byte 9
    .byte 10
    .byte 11
    .byte 12
    .byte 13
    .byte 14
    .byte 15
    .byte 16
    .byte 17
    .byte 18
    .byte 19
    .byte 20
    .byte 21
    .byte 22
    .byte 23
    .byte 24
    .byte 25
    .byte 26
    .byte 27
    .byte 28
    .byte 29
    .byte 30
    .byte 31
    .byte 32
    .byte 33
    .byte 34
    .byte 35
    .byte -1

kHelpTopicList_845B92E:: @ 845B92E
    .byte 41
    .byte 42
    .byte 43
    .byte -1

kHelpTopicList_845B932:: @ 845B932
    .byte 45
    .byte 46
    .byte 47
    .byte 43
    .byte -1

kHelpTopicList_845B937:: @ 845B937
    .byte 9
    .byte 1
    .byte 2
    .byte 3
    .byte 4
    .byte 5
    .byte 6
    .byte 7
    .byte 8
    .byte 10
    .byte 13
    .byte 15
    .byte 18
    .byte 19
    .byte 20
    .byte -1

kHelpTopicList_845B947:: @ 845B947
    .byte 1
    .byte 2
    .byte 3
    .byte 4
    .byte 5
    .byte 6
    .byte 7
    .byte 8
    .byte 9
    .byte 10
    .byte 11
    .byte 12
    .byte 13
    .byte 14
    .byte 15
    .byte 16
    .byte 17
    .byte 18
    .byte 19
    .byte 20
    .byte 21
    .byte 22
    .byte 23
    .byte 24
    .byte 25
    .byte 26
    .byte 27
    .byte 28
    .byte 29
    .byte 30
    .byte 31
    .byte 32
    .byte 33
    .byte 34
    .byte 35
    .byte -1

kHelpTopicList_845B96B:: @ 845B96B
    .byte 20
    .byte 21
    .byte 22
    .byte 23
    .byte 24
    .byte 25
    .byte 26
    .byte 27
    .byte 28
    .byte 29
    .byte 30
    .byte 48
    .byte -1

kHelpTopicList_845B978:: @ 845B978
    .byte 20
    .byte 21
    .byte 22
    .byte 23
    .byte 24
    .byte 25
    .byte 26
    .byte 27
    .byte 28
    .byte 29
    .byte 30
    .byte 48
    .byte -1

kHelpTopicList_845B985:: @ 845B985
    .byte 20
    .byte 21
    .byte 22
    .byte 23
    .byte 24
    .byte 25
    .byte 26
    .byte 27
    .byte 28
    .byte 29
    .byte 30
    .byte 48
    .byte -1

kHelpTopicList_845B992:: @ 845B992
    .byte 20
    .byte 21
    .byte 22
    .byte 23
    .byte 24
    .byte 25
    .byte 26
    .byte 27
    .byte 28
    .byte 29
    .byte 30
    .byte 48
    .byte -1

kHelpTopicList_845B99F:: @ 845B99F
    .byte 20
    .byte 21
    .byte 22
    .byte 23
    .byte 24
    .byte 25
    .byte 26
    .byte 27
    .byte 28
    .byte 29
    .byte 30
    .byte 48
    .byte -1

kHelpTopicList_845B9AC:: @ 845B9AC
    .byte 38
    .byte 39
    .byte 40
    .byte 41
    .byte 42
    .byte -1

kHelpTopicList_845B9B2:: @ 845B9B2
    .byte 38
    .byte 39
    .byte 40
    .byte 41
    .byte 42
    .byte -1

kHelpTopicList_845B9B8:: @ 845B9B8
    .byte 38
    .byte 39
    .byte 40
    .byte 41
    .byte 42
    .byte -1

kBasicItem_845B9BE:: @ 845B9BE
    .byte 0x09, 0x01, 0x02, 0x03, 0x23, 0x25, 0x24, 0x04, 0x05, 0x06, 0x07, 0x08, 0x0A, 0x0B, 0x0C, 0x0D, 0x0F, 0x10, 0x11, 0x12, 0x13, 0x14, 0x27, 0x15, 0x26, 0x16, 0x17, 0x18, 0x1A, 0x0E, 0x1B, 0xFF

    .align 2
kHelpContext_845B9E0:: @ 845B9E0
    .4byte NULL, NULL, NULL, NULL, NULL
    .4byte NULL, NULL, NULL, kHelpTopicList_845B660, NULL
    .4byte NULL, NULL, NULL, kHelpTopicList_845B664, NULL
    .4byte NULL, kHelpTopicList_845B668, NULL, kHelpTopicList_845B66A, NULL
    .4byte NULL, kHelpTopicList_845B66E, NULL, NULL, NULL
    .4byte NULL, kHelpTopicList_845B671, kHelpTopicList_845B677, NULL, NULL
    .4byte NULL, kHelpTopicList_845B67A, kHelpTopicList_845B67D, NULL, NULL
    .4byte NULL, NULL, kHelpTopicList_845B684, NULL, NULL
    .4byte NULL, NULL, kHelpTopicList_845B68E, NULL, NULL
    .4byte NULL, kHelpTopicList_845B696, kHelpTopicList_845B6A1, NULL, NULL
    .4byte NULL, kHelpTopicList_845B6A5, kHelpTopicList_845B6A7, NULL, NULL
    .4byte NULL, kHelpTopicList_845B6AD, NULL, NULL, NULL
    .4byte NULL, kHelpTopicList_845B6AF, kHelpTopicList_845B6B1, NULL, NULL
    .4byte NULL, kHelpTopicList_845B6B5, kHelpTopicList_845B6B7, NULL, NULL
    .4byte kHelpTopicList_845B6BF, NULL, NULL, kHelpTopicList_845B6C3, NULL
    .4byte kHelpTopicList_845B6C8, kHelpTopicList_845B6CE, kHelpTopicList_845B6E2, NULL, NULL
    .4byte kHelpTopicList_845B6E9, kHelpTopicList_845B6F2, kHelpTopicList_845B707, kHelpTopicList_845B70E, NULL
    .4byte kHelpTopicList_845B714, kHelpTopicList_845B71D, kHelpTopicList_845B731, NULL, NULL
    .4byte kHelpTopicList_845B73D, kHelpTopicList_845B744, kHelpTopicList_845B758, NULL, kHelpTopicList_845B75F
    .4byte kHelpTopicList_845B783, kHelpTopicList_845B7A7, kHelpTopicList_845B7BB, NULL, NULL
    .4byte kHelpTopicList_845B7C4, kHelpTopicList_845B7E8, kHelpTopicList_845B7F1, NULL, NULL
    .4byte kHelpTopicList_845B7FB, kHelpTopicList_845B81A, kHelpTopicList_845B823, NULL, NULL
    .4byte kHelpTopicList_845B82C, kHelpTopicList_845B83E, kHelpTopicList_845B847, NULL, NULL
    .4byte kHelpTopicList_845B850, kHelpTopicList_845B85D, kHelpTopicList_845B866, NULL, kHelpTopicList_845B878
    .4byte kHelpTopicList_845B89C, kHelpTopicList_845B8A7, kHelpTopicList_845B8AF, NULL, kHelpTopicList_845B8C1
    .4byte kHelpTopicList_845B8E5, kHelpTopicList_845B8F0, kHelpTopicList_845B8F8, NULL, kHelpTopicList_845B90A
    .4byte kHelpTopicList_845B92E, kHelpTopicList_845B932, kHelpTopicList_845B937, NULL, kHelpTopicList_845B947
    .4byte NULL, kHelpTopicList_845B96B, NULL, NULL, NULL
    .4byte NULL, kHelpTopicList_845B978, NULL, NULL, NULL
    .4byte NULL, kHelpTopicList_845B985, NULL, NULL, NULL
    .4byte NULL, kHelpTopicList_845B992, NULL, NULL, NULL
    .4byte NULL, kHelpTopicList_845B99F, NULL, NULL, NULL
    .4byte NULL, kHelpTopicList_845B9AC, NULL, NULL, NULL
    .4byte NULL, kHelpTopicList_845B9B2, NULL, NULL, NULL
    .4byte NULL, kHelpTopicList_845B9B8, NULL, NULL, NULL
    .4byte NULL, NULL, NULL, NULL, NULL

kTilemap_845BCB0:: @ 845BCB0
    .incbin "baserom.gba", 0x45BCB0, 0x800

UNK_845C4B0:: @ 845C4B0
    .incbin "baserom.gba", 0x45C4B0, 0x6 @ null

kHelpTopicVisibility:: @ 845C4B6
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 0x00
    .byte 0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01
    .byte 0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01
    .byte 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00
    .byte 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00
    .byte 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

kMapsPokeMarts:: @ 845C594
    .byte 0x03, 0x05, 0x03, 0x06, 0x07, 0x07, 0x05, 0x08, 0x05, 0x09, 0x00, 0x0A, 0x01, 0x0A, 0x02, 0x0A, 0x03, 0x0A, 0x04, 0x0A
    .byte 0x05, 0x0A, 0x06, 0x0A, 0x01, 0x0B, 0x07, 0x0C, 0x05, 0x0E, 0x03, 0x22, 0x07, 0x23, 0x02, 0x1F, 0x04, 0x25, 0xFF, 0xFF

kMapsGyms:: @ 845C5BC
    .byte 0x02, 0x06, 0x05, 0x07, 0x06, 0x09, 0x10, 0x0A, 0x03
    .byte 0x0B, 0x03, 0x0E, 0x00, 0x0C, 0x01, 0x05, 0xFF, 0xFF

kMapsCavesAndForests:: @ 845C5CE
    .byte 0x01, 0x00, 0x01, 0x01, 0x01, 0x03, 0x01, 0x51, 0x02, 0x01, 0x24, 0x03, 0x01, 0x53, 0x05, 0x01
    .byte 0x27, 0x03, 0x01, 0x48, 0x03, 0x01, 0x60, 0x01, 0x01, 0x62, 0x03, 0x01, 0x66, 0x07, 0x01, 0x6D
    .byte 0x01, 0x01, 0x79, 0x01, 0x02, 0x0C, 0x0F, 0x01, 0x6E, 0x04, 0x01, 0x7A, 0x01, 0x02, 0x1B, 0x07

    .align 2
kTilemap_845C600:: @ 845C600
    .incbin "baserom.gba", 0x45C600, 0x800

kUGfx_845CE00:: @ 845CE00
    .incbin "baserom.gba", 0x45CE00, 0x100

kUGfx_845CF00:: @ 845CF00
    .incbin "baserom.gba", 0x45CF00, 0x1E0

kPalette_845D0E0:: @ 845D0E0
    .incbin "baserom.gba", 0x45D0E0, 0x20

kUGfx_845D100:: @ 845D100
    .incbin "baserom.gba", 0x45D100, 0x400

kPalette_845D500:: @ 845D500
    .incbin "baserom.gba", 0x45D500, 0x20

kUGfx_845D520:: @ 845D520
    .incbin "baserom.gba", 0x45D520, 0x800

kPalette_845DD20:: @ 845DD20
    .incbin "baserom.gba", 0x45DD20, 0x20

kUGfx_845DD40:: @ 845DD40
    .incbin "baserom.gba", 0x45DD40, 0x800

kPalette_845E540:: @ 845E540
    .incbin "baserom.gba", 0x45E540, 0x20

kUGfx_845E560:: @ 845E560
    .incbin "baserom.gba", 0x45E560, 0x800

kPalette_845ED60:: @ 845ED60
    .incbin "baserom.gba", 0x45ED60, 0x20

kUGfx_845ED80:: @ 845ED80
    .incbin "baserom.gba", 0x45ED80, 0x800

kPalette_845F580:: @ 845F580
    .incbin "baserom.gba", 0x45F580, 0x20

    .incbin "baserom.gba", 0x45F5A0, 0x20 @ unknown

UNK_845F5C0:: @ 845F5C0
    .incbin "baserom.gba", 0x45F5C0, 0x20 @ null

UNK_845F5E0:: @ 845F5E0
    .incbin "baserom.gba", 0x45F5E0, 0x3 @ null

UNK_845F5E3:: @ 845F5E3
    .incbin "baserom.gba", 0x45F5E3, 0x3 @ null

UNK_845F5E6:: @ 845F5E6
    .incbin "baserom.gba", 0x45F5E6, 0x4 @ null

kBasicItem_845F5EA:: @ 845F5EA
    .2byte 0xFE00, 0xFE01, 0x019E, 0x019F, 0x01A0, 0x01A1, 0x01A2, 0x01A4, 0x01A3, 0x019A, 0x019B, 0x019C, 0x019D, 0xFE02, 0xFE03, 0x015C

    .align 2
kPointer_845F60C:: @ 845F60C
    .4byte kText_841E5E9 @ 841E5E9
    .4byte kText_841E5ED @ 841E5ED
    .4byte kText_841E5F3 @ 841E5F3
    .4byte kText_841E5F8 @ 841E5F8

UNK_845F61C:: @ 845F61C
    .incbin "baserom.gba", 0x45F61C, 0x20 @ null

kPointer_845F63C:: @ 845F63C
    .4byte Text_81B0188 @ 81B0188
    .4byte Text_81B0251 @ 81B0251
    .4byte Text_81B030F @ 81B030F
    .4byte Text_81B03B3 @ 81B03B3
    .4byte Text_81B0446 @ 81B0446
    .4byte Text_81B0504 @ 81B0504
    .4byte Text_81B05C2 @ 81B05C2
    .4byte Text_81B0667 @ 81B0667
    .4byte Text_81B06FB @ 81B06FB
    .4byte Text_81B079F @ 81B079F
    .4byte Text_81B0845 @ 81B0845
    .4byte Text_81B08EE @ 81B08EE
    .4byte Text_81B097F @ 81B097F
    .4byte Text_81B0A45 @ 81B0A45
    .4byte Text_81B0AFF @ 81B0AFF
    .4byte Text_81B0BA6 @ 81B0BA6
    .4byte Text_81B0198 @ 81B0198
    .4byte Text_81B025D @ 81B025D
    .4byte Text_81B031B @ 81B031B
    .4byte Text_81B03BF @ 81B03BF
    .4byte Text_81B0456 @ 81B0456
    .4byte Text_81B0510 @ 81B0510
    .4byte Text_81B05CD @ 81B05CD
    .4byte Text_81B0675 @ 81B0675
    .4byte Text_81B0708 @ 81B0708
    .4byte Text_81B07AD @ 81B07AD
    .4byte Text_81B0851 @ 81B0851
    .4byte Text_81B08FB @ 81B08FB
    .4byte Text_81B098B @ 81B098B
    .4byte Text_81B0A50 @ 81B0A50
    .4byte Text_81B0B0E @ 81B0B0E
    .4byte Text_81B0BB5 @ 81B0BB5

kPointer_845F6BC:: @ 845F6BC
    .4byte Text_81AD106 @ 81AD106
    .4byte Text_81AD145 @ 81AD145
    .4byte Text_81AD1BB @ 81AD1BB
    .4byte Text_81AD258 @ 81AD258
    .4byte Text_81AD2B9 @ 81AD2B9
    .4byte Text_81AD377 @ 81AD377
    .4byte Text_81AD40C @ 81AD40C
    .4byte Text_81AD4AE @ 81AD4AE
    .4byte Text_81AD516 @ 81AD516
    .4byte Text_81AD5A7 @ 81AD5A7
    .4byte Text_81AD608 @ 81AD608
    .4byte Text_81AD69F @ 81AD69F
    .4byte Text_81AD705 @ 81AD705
    .4byte Text_81AD771 @ 81AD771
    .4byte Text_81AD840 @ 81AD840
    .4byte Text_81AD908 @ 81AD908
    .4byte Text_81AD99A @ 81AD99A
    .4byte Text_81ADA27 @ 81ADA27
    .4byte Text_81ADA91 @ 81ADA91
    .4byte Text_81ADAF6 @ 81ADAF6
    .4byte Text_81ADB5A @ 81ADB5A
    .4byte Text_81ADBD9 @ 81ADBD9
    .4byte Text_81ADC72 @ 81ADC72
    .4byte Text_81ADCEB @ 81ADCEB
    .4byte Text_81ADD3C @ 81ADD3C
    .4byte Text_81ADDA7 @ 81ADDA7
    .4byte Text_81ADE0B @ 81ADE0B
    .4byte Text_81ADE82 @ 81ADE82
    .4byte Text_81ADEEC @ 81ADEEC
    .4byte Text_81ADF6A @ 81ADF6A
    .4byte Text_81AE009 @ 81AE009
    .4byte Text_81AE072 @ 81AE072
    .4byte Text_81AE0F3 @ 81AE0F3
    .4byte Text_81AE15B @ 81AE15B
    .4byte Text_81AE1E5 @ 81AE1E5
    .4byte Text_81AE247 @ 81AE247
    .4byte Text_81AE2B6 @ 81AE2B6
    .4byte Text_81AE31D @ 81AE31D
    .4byte Text_81AE37D @ 81AE37D
    .4byte Text_81AE407 @ 81AE407
    .4byte Text_81AE48D @ 81AE48D
    .4byte Text_81AE51B @ 81AE51B
    .4byte Text_81AE5E8 @ 81AE5E8
    .4byte Text_81AE656 @ 81AE656
    .4byte Text_81AE6D7 @ 81AE6D7
    .4byte Text_81AE762 @ 81AE762
    .4byte Text_81AE7CB @ 81AE7CB
    .4byte Text_81AE841 @ 81AE841
    .4byte Text_81AE89E @ 81AE89E
    .4byte Text_81AE90A @ 81AE90A
    .4byte Text_81AE990 @ 81AE990
    .4byte Text_81AEA59 @ 81AEA59
    .4byte Text_81AEAEE @ 81AEAEE
    .4byte Text_81AEB69 @ 81AEB69
    .4byte Text_81AEBDF @ 81AEBDF
    .4byte Text_81AEC28 @ 81AEC28
    .4byte Text_81AEC82 @ 81AEC82
    .4byte Text_81AED27 @ 81AED27
    .4byte Text_81AEDAA @ 81AEDAA
    .4byte Text_81AEE51 @ 81AEE51
    .4byte Text_81AEF25 @ 81AEF25
    .4byte Text_81AEF6C @ 81AEF6C
    .4byte Text_81AEFC6 @ 81AEFC6
    .4byte Text_81AF04C @ 81AF04C
    .4byte Text_81AF0F0 @ 81AF0F0
    .4byte Text_81AF19A @ 81AF19A
    .4byte Text_81AF200 @ 81AF200
    .4byte Text_81AF248 @ 81AF248
    .4byte Text_81AF2B7 @ 81AF2B7
    .4byte Text_81AF34E @ 81AF34E
    .4byte Text_81AF3BE @ 81AF3BE
    .4byte Text_81AF47C @ 81AF47C
    .4byte Text_81AF4FD @ 81AF4FD
    .4byte Text_81AF567 @ 81AF567
    .4byte Text_81AF641 @ 81AF641
    .4byte Text_81AF6BA @ 81AF6BA
    .4byte Text_81AF758 @ 81AF758
    .4byte Text_81AF7CB @ 81AF7CB
    .4byte Text_81AF83E @ 81AF83E
    .4byte Text_81AF8CA @ 81AF8CA
    .4byte Text_81AF929 @ 81AF929
    .4byte Text_81AF998 @ 81AF998
    .4byte Text_81AFA20 @ 81AFA20
    .4byte Text_81AFAB9 @ 81AFAB9
    .4byte Text_81AFB0C @ 81AFB0C
    .4byte Text_81AFB76 @ 81AFB76
    .4byte Text_81AFC38 @ 81AFC38
    .4byte Text_81AFCE9 @ 81AFCE9
    .4byte Text_81AFD49 @ 81AFD49
    .4byte Text_81AFDC4 @ 81AFDC4
    .4byte Text_81AFE68 @ 81AFE68
    .4byte Text_81AFF23 @ 81AFF23
    .4byte Text_81AFFA8 @ 81AFFA8
    .4byte Text_81B0022 @ 81B0022
    .4byte Text_81B00A6 @ 81B00A6
    .4byte Text_81B0106 @ 81B0106

kBasicItem_845F83C:: @ 845F83C
    .byte 0x67, 0x47, 0x30, 0x69, 0x4B, 0x37, 0x37, 0x30, 0x3D, 0x69, 0x23, 0x69, 0x66, 0x50, 0x1B, 0x13
    .byte 0x1E, 0x69, 0x66, 0x51, 0x2B, 0x27, 0x1D, 0x69, 0x66, 0x52, 0x3D, 0x3D, 0x3E, 0x69, 0x66, 0x53
    .byte 0x16, 0x1D, 0x53, 0x69, 0x66, 0x54, 0x1A, 0x16, 0x69, 0x1E, 0x66, 0x19, 0x55, 0x55, 0x69, 0x29
    .byte 0x66, 0x56, 0x37, 0x1C, 0x69, 0x69, 0x4D, 0x4D, 0x20, 0x69, 0x11, 0x23, 0x4F, 0x4F, 0x69, 0x36
    .byte 0x1D, 0x36, 0x4B, 0x36, 0x36, 0x69, 0x4B, 0x23, 0x4A, 0x4A, 0x18, 0x17, 0x69, 0x29, 0x48, 0x12
    .byte 0x20, 0x59, 0x59, 0x59, 0x11, 0x31, 0x69, 0x1E, 0x69, 0x69, 0x57, 0x37, 0x37, 0x57, 0x5B, 0x37

kPointer_845F89C:: @ 845F89C
    .4byte Text_81B0C45 @ 81B0C45
    .4byte Text_81B0C51 @ 81B0C51
    .4byte Text_81B0C5E @ 81B0C5E
    .4byte Text_81B0C6B @ 81B0C6B
    .4byte Text_81B0C79 @ 81B0C79
    .4byte Text_81B0C88 @ 81B0C88
    .4byte Text_81B0C95 @ 81B0C95
    .4byte Text_81B0CA2 @ 81B0CA2
    .4byte Text_81B0CB1 @ 81B0CB1
    .4byte Text_81B0CC1 @ 81B0CC1
    .4byte Text_81B0CCF @ 81B0CCF
    .4byte Text_81B0CDF @ 81B0CDF
    .4byte Text_81B0CEB @ 81B0CEB
    .4byte Text_81B0CF7 @ 81B0CF7
    .4byte Text_81B0D02 @ 81B0D02
    .4byte Text_81B0D0E @ 81B0D0E
    .4byte Text_81B0D16 @ 81B0D16
    .4byte Text_81B0D1F @ 81B0D1F
    .4byte Text_81B0D2D @ 81B0D2D
    .4byte Text_81B0D3B @ 81B0D3B
    .4byte Text_81B0D48 @ 81B0D48
    .4byte Text_81B0D55 @ 81B0D55
    .4byte Text_81B0D65 @ 81B0D65
    .4byte Text_81B0D73 @ 81B0D73
    .4byte Text_81B0D81 @ 81B0D81
    .4byte Text_81B0D90 @ 81B0D90
    .4byte Text_81B0D9E @ 81B0D9E
    .4byte Text_81B0DAC @ 81B0DAC
    .4byte Text_81B0DBA @ 81B0DBA
    .4byte Text_81B0DC8 @ 81B0DC8
    .4byte Text_81B0DD7 @ 81B0DD7
    .4byte Text_81B0DE4 @ 81B0DE4
    .4byte Text_81B0DF0 @ 81B0DF0
    .4byte Text_81B0DFC @ 81B0DFC
    .4byte Text_81B0E08 @ 81B0E08
    .4byte Text_81B0E14 @ 81B0E14
    .4byte Text_81B0E24 @ 81B0E24
    .4byte Text_81B0E31 @ 81B0E31
    .4byte Text_81B0E3D @ 81B0E3D
    .4byte Text_81B0E49 @ 81B0E49
    .4byte Text_81B0E56 @ 81B0E56
    .4byte Text_81B0E63 @ 81B0E63
    .4byte Text_81B0E6F @ 81B0E6F
    .4byte Text_81B0E7C @ 81B0E7C
    .4byte Text_81B0E89 @ 81B0E89
    .4byte Text_81B0E95 @ 81B0E95
    .4byte Text_81B0EA1 @ 81B0EA1
    .4byte Text_81B0EAE @ 81B0EAE
    .4byte Text_81B0EBA @ 81B0EBA
    .4byte Text_81B0ECA @ 81B0ECA
    .4byte Text_81B0ED7 @ 81B0ED7
    .4byte Text_81B0EE4 @ 81B0EE4
    .4byte Text_81B0EF4 @ 81B0EF4
    .4byte Text_81B0F01 @ 81B0F01
    .4byte Text_81B0F11 @ 81B0F11
    .4byte Text_81B0F20 @ 81B0F20
    .4byte Text_81B0F2F @ 81B0F2F
    .4byte Text_81B0F3B @ 81B0F3B
    .4byte Text_81B0F47 @ 81B0F47
    .4byte Text_81B0F53 @ 81B0F53
    .4byte Text_81B0F5F @ 81B0F5F
    .4byte Text_81B0F6E @ 81B0F6E
    .4byte Text_81B0F7D @ 81B0F7D
    .4byte Text_81B0F8A @ 81B0F8A
    .4byte Text_81B0F94 @ 81B0F94
    .4byte Text_81B0F9F @ 81B0F9F
    .4byte Text_81B0FAE @ 81B0FAE
    .4byte Text_81B0FBD @ 81B0FBD
    .4byte Text_81B0FCC @ 81B0FCC
    .4byte Text_81B0FDB @ 81B0FDB
    .4byte Text_81B0FE8 @ 81B0FE8
    .4byte Text_81B0FF7 @ 81B0FF7
    .4byte Text_81B1002 @ 81B1002
    .4byte Text_81B1011 @ 81B1011
    .4byte Text_81B1020 @ 81B1020
    .4byte Text_81B102D @ 81B102D
    .4byte Text_81B103B @ 81B103B
    .4byte Text_81B104A @ 81B104A
    .4byte Text_81B1059 @ 81B1059
    .4byte Text_81B1067 @ 81B1067
    .4byte Text_81B1075 @ 81B1075
    .4byte Text_81B1082 @ 81B1082
    .4byte Text_81B108D @ 81B108D
    .4byte Text_81B1098 @ 81B1098
    .4byte Text_81B10A3 @ 81B10A3
    .4byte Text_81B10B1 @ 81B10B1
    .4byte Text_81B10BF @ 81B10BF
    .4byte Text_81B10CD @ 81B10CD
    .4byte Text_81B10DB @ 81B10DB
    .4byte Text_81B10E8 @ 81B10E8
    .4byte Text_81B10F8 @ 81B10F8
    .4byte Text_81B1107 @ 81B1107
    .4byte Text_81B1111 @ 81B1111
    .4byte Text_81B111B @ 81B111B
    .4byte Text_81B1128 @ 81B1128
    .4byte Text_81B1135 @ 81B1135

kPointer_845FA1C:: @ 845FA1C
    .4byte Text_81B1146 @ 81B1146
    .4byte Text_81B114B @ 81B114B
    .4byte Text_81B1155 @ 81B1155
    .4byte Text_81B115A @ 81B115A
    .4byte Text_81B116A @ 81B116A
    .4byte Text_81B1171 @ 81B1171
    .4byte Text_81B1176 @ 81B1176
    .4byte Text_81B117B @ 81B117B
    .4byte Text_81B1181 @ 81B1181
    .4byte Text_81B1185 @ 81B1185
    .4byte Text_81B1195 @ 81B1195
    .4byte Text_81B119E @ 81B119E
    .4byte Text_81B11AE @ 81B11AE
    .4byte Text_81B11B3 @ 81B11B3
    .4byte Text_81B11B9 @ 81B11B9
    .4byte Text_81B11C3 @ 81B11C3
    .4byte Text_81B11C7 @ 81B11C7
    .4byte Text_81B11CB @ 81B11CB
    .4byte Text_81B11DB @ 81B11DB
    .4byte Text_81B11E0 @ 81B11E0
    .4byte Text_81B11E6 @ 81B11E6
    .4byte Text_81B11EB @ 81B11EB
    .4byte Text_81B11F5 @ 81B11F5
    .4byte Text_81B11FA @ 81B11FA
    .4byte Text_81B120A @ 81B120A
    .4byte Text_81B120F @ 81B120F
    .4byte Text_81B1219 @ 81B1219
    .4byte Text_81B1220 @ 81B1220
    .4byte Text_81B1227 @ 81B1227
    .4byte Text_81B122E @ 81B122E
    .4byte Text_81B123E @ 81B123E
    .4byte Text_81B1243 @ 81B1243
    .4byte Text_81B1249 @ 81B1249
    .4byte Text_81B124E @ 81B124E
    .4byte Text_81B1254 @ 81B1254
    .4byte Text_81B125A @ 81B125A
    .4byte Text_81B126A @ 81B126A
    .4byte Text_81B126F @ 81B126F
    .4byte Text_81B1274 @ 81B1274
    .4byte Text_81B1279 @ 81B1279
    .4byte Text_81B1281 @ 81B1281
    .4byte Text_81B1291 @ 81B1291
    .4byte Text_81B1295 @ 81B1295
    .4byte Text_81B129A @ 81B129A
    .4byte Text_81B12A4 @ 81B12A4
    .4byte Text_81B12AC @ 81B12AC
    .4byte Text_81B12B4 @ 81B12B4
    .4byte Text_81B12C4 @ 81B12C4
    .4byte Text_81B12CA @ 81B12CA
    .4byte Text_81B12CF @ 81B12CF
    .4byte Text_81B12D6 @ 81B12D6
    .4byte Text_81B12DC @ 81B12DC
    .4byte Text_81B12E2 @ 81B12E2
    .4byte Text_81B12E8 @ 81B12E8
    .4byte Text_81B12F8 @ 81B12F8
    .4byte Text_81B1300 @ 81B1300
    .4byte Text_81B1308 @ 81B1308
    .4byte Text_81B1310 @ 81B1310
    .4byte Text_81B1320 @ 81B1320
    .4byte Text_81B132C @ 81B132C
    .4byte Text_81B1335 @ 81B1335
    .4byte Text_81B133B @ 81B133B
    .4byte Text_81B1341 @ 81B1341
    .4byte Text_81B1351 @ 81B1351
    .4byte Text_81B1359 @ 81B1359
    .4byte Text_81B135F @ 81B135F
    .4byte Text_81B1367 @ 81B1367
    .4byte Text_81B136E @ 81B136E
    .4byte Text_81B1376 @ 81B1376
    .4byte Text_81B137E @ 81B137E
    .4byte Text_81B138E @ 81B138E
    .4byte Text_81B1395 @ 81B1395
    .4byte Text_81B139E @ 81B139E
    .4byte Text_81B13A4 @ 81B13A4
    .4byte Text_81B13AA @ 81B13AA
    .4byte Text_81B13B0 @ 81B13B0
    .4byte Text_81B13BC @ 81B13BC
    .4byte Text_81B13CC @ 81B13CC
    .4byte Text_81B13D6 @ 81B13D6
    .4byte Text_81B13D9 @ 81B13D9
    .4byte Text_81B13E4 @ 81B13E4
    .4byte Text_81B13EC @ 81B13EC
    .4byte Text_81B13F2 @ 81B13F2
    .4byte Text_81B13F8 @ 81B13F8
    .4byte Text_81B13FE @ 81B13FE
    .4byte Text_81B140A @ 81B140A
    .4byte Text_81B1416 @ 81B1416
    .4byte Text_81B141F @ 81B141F
    .4byte Text_81B1423 @ 81B1423
    .4byte Text_81B1429 @ 81B1429
    .4byte Text_81B1439 @ 81B1439
    .4byte Text_81B1442 @ 81B1442
    .4byte Text_81B144C @ 81B144C
    .4byte Text_81B1456 @ 81B1456
    .4byte Text_81B145F @ 81B145F
    .4byte Text_81B1463 @ 81B1463

kObjTiles_845FB9C:: @ 845FB9C
    obj_tiles kUGfx_845D100, 0x400, 1000
    obj_tiles kUGfx_845CE00, 0x100, 1001
    obj_tiles kUGfx_845CF00, 0x1E0, 1002
    obj_tiles kUGfx_845E560, 0x800, 1006
    obj_tiles kUGfx_845D520, 0x800, 1007
    obj_tiles kUGfx_845ED80, 0x800, 1008
    obj_tiles kUGfx_845DD40, 0x800, 1009
    obj_tiles NULL, 0x0, 0

kObjPal_845FBDC:: @ 845FBDC
    obj_pal kPalette_845D500, 1000
    obj_pal kPalette_845D0E0, 1002
    obj_pal NULL, 0

kVRAMConfig_845FBF4:: @ 845FBF4
    .4byte 0x31EF
    .4byte 0x21BE
    .4byte 0x3CD
    .4byte 0x21F0

kWindowTemplate_845FC04:: @ 845FC04
    window_template 0x00, 0x01, 0x03, 0x08, 0x0A, 0x0F, 0x0014
    window_template 0x00, 0x06, 0x00, 0x18, 0x02, 0x0F, 0x0064
    window_template 0x00, 0x02, 0x0F, 0x1A, 0x04, 0x0F, 0x0094
    window_template 0x00, 0x0F, 0x0A, 0x0B, 0x04, 0x0F, 0x00FC
    window_template_terminator

kAnimCmd_845FC2C:: @ 845FC2C
    obj_image_anim_frame 0, 15
    obj_image_anim_frame 16, 15
    obj_image_anim_jump 0

kAnimCmds_845FC38:: @ 845FC38
    .4byte kAnimCmd_845FC2C @ 845FC2C

kOAM_845FC3C:: @ 845FC3C
    .2byte 0x0000
    .2byte 0x8000
    .2byte 0x0800
    .2byte 0x0000

kSpriteTemplate_845FC44:: @ 845FC44
    spr_template 1000, 1000, kOAM_845FC3C, kAnimCmds_845FC38, NULL, kDummySpriteAffineAnimTable, objc_nullsub

    .incbin "baserom.gba", 0x45FC5C, 0x8 @ unknown

kOAM_845FC64:: @ 845FC64
    .2byte 0x8000
    .2byte 0x8000
    .2byte 0x0800
    .2byte 0x0000

kAnimCmd_845FC6C:: @ 845FC6C
    obj_image_anim_frame 0, 10
    obj_image_anim_end

kAnimCmds_845FC74:: @ 845FC74
    .4byte kAnimCmd_845FC6C @ 845FC6C

kSpriteTemplate_845FC78:: @ 845FC78
    spr_template 1001, 65535, kOAM_845FC64, kAnimCmds_845FC74, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kAnimCmd_845FC90:: @ 845FC90
    obj_image_anim_frame 0, 10
    obj_image_anim_end

kAnimCmds_845FC98:: @ 845FC98
    .4byte kAnimCmd_845FC90 @ 845FC90

kOAM_845FC9C:: @ 845FC9C
    .2byte 0x0100
    .2byte 0x8000
    .2byte 0x0000
    .2byte 0x0000

kAffineAnimCmd_845FCA4:: @ 845FCA4
    obj_rot_scal_anim_frame 0, 0, 4, 20
    obj_rot_scal_anim_jump 0

kAffineAnimCmds_845FCB4:: @ 845FCB4
    .4byte kAffineAnimCmd_845FCA4 @ 845FCA4

kSpriteTemplate_845FCB8:: @ 845FCB8
    spr_template 1002, 1002, kOAM_845FC9C, kAnimCmds_845FC98, NULL, kAffineAnimCmds_845FCB4, sub_812D840

kAnimCmd_845FCD0:: @ 845FCD0
    obj_image_anim_frame 0, 15
    obj_image_anim_end

kAnimCmds_845FCD8:: @ 845FCD8
    .4byte kAnimCmd_845FCD0 @ 845FCD0

kOAM_845FCDC:: @ 845FCDC
    .2byte 0x0000
    .2byte 0xC000
    .2byte 0x0000
    .2byte 0x0000

kSpriteTemplate_845FCE4:: @ 845FCE4
    spr_template 1006, 65535, kOAM_845FCDC, kAnimCmds_845FCD8, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kSpriteTemplate_845FCFC:: @ 845FCFC
    spr_template 1007, 65535, kOAM_845FCDC, kAnimCmds_845FCD8, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kSpriteTemplate_845FD14:: @ 845FD14
    spr_template 1008, 65535, kOAM_845FCDC, kAnimCmds_845FCD8, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kSpriteTemplate_845FD2C:: @ 845FD2C
    spr_template 1009, 65535, kOAM_845FCDC, kAnimCmds_845FCD8, NULL, kDummySpriteAffineAnimTable, objc_nullsub

UNK_845FD44:: @ 845FD44
    .incbin "baserom.gba", 0x45FD44, 0x10 @ null

kMonItemAnimationTable:: @ 845FD54
    .byte 22, 27, 48, 22, 41 @ BULBASAUR
    .byte 20, 27, 48, 21, 42 @ IVYSAUR
    .byte 27, 32, 32, 27, 51 @ VENUSAUR
    .byte 20, 15, 56, 19, 30 @ CHARMANDER
    .byte 13, 17, 48, 15, 34 @ CHARMELEON
    .byte 27, 7, 40, 26, 25 @ CHARIZARD
    .byte 25, 19, 48, 26, 34 @ SQUIRTLE
    .byte 22, 19, 48, 23, 33 @ WARTORTLE
    .byte 18, 8, 40, 21, 25 @ BLASTOISE
    .byte 21, 20, 48, 19, 36 @ CATERPIE
    .byte 19, 29, 48, 24, 42 @ METAPOD
    .byte 18, 27, 8, 18, 42 @ BUTTERFREE
    .byte 22, 28, 48, 21, 43 @ WEEDLE
    .byte 25, 19, 48, 26, 36 @ KAKUNA
    .byte 25, 22, 8, 25, 37 @ BEEDRILL
    .byte 21, 18, 48, 18, 30 @ PIDGEY
    .byte 36, 14, 48, 31, 30 @ PIDGEOTTO
    .byte 12, 19, 8, 10, 35 @ PIDGEOT
    .byte 23, 30, 48, 24, 45 @ RATTATA
    .byte 18, 20, 48, 16, 38 @ RATICATE
    .byte 21, 20, 48, 21, 31 @ SPEAROW
    .byte 12, 39, 0, 11, 63 @ FEAROW
    .byte 17, 15, 48, 20, 29 @ EKANS
    .byte 27, 1, 40, 29, 16 @ ARBOK
    .byte 25, 19, 48, 26, 31 @ PIKACHU
    .byte 25, 20, 40, 28, 34 @ RAICHU
    .byte 23, 22, 48, 24, 37 @ SANDSHREW
    .byte 17, 19, 40, 19, 34 @ SANDSLASH
    .byte 22, 21, 48, 24, 33 @ NIDORAN_F
    .byte 31, 23, 48, 30, 40 @ NIDORINA
    .byte 16, 11, 40, 19, 28 @ NIDOQUEEN
    .byte 21, 34, 40, 21, 49 @ NIDORAN_M
    .byte 19, 30, 40, 27, 45 @ NIDORINO
    .byte 18, 21, 40, 19, 39 @ NIDOKING
    .byte 25, 20, 48, 27, 36 @ CLEFAIRY
    .byte 28, 18, 48, 29, 33 @ CLEFABLE
    .byte 16, 22, 48, 14, 37 @ VULPIX
    .byte 40, 16, 40, 39, 30 @ NINETALES
    .byte 29, 21, 48, 30, 37 @ JIGGLYPUFF
    .byte 26, 18, 48, 28, 34 @ WIGGLYTUFF
    .byte 20, 29, 8, 20, 41 @ ZUBAT
    .byte 35, 26, 0, 33, 46 @ GOLBAT
    .byte 29, 32, 40, 29, 43 @ ODDISH
    .byte 28, 24, 40, 28, 39 @ GLOOM
    .byte 28, 30, 40, 29, 42 @ VILEPLUME
    .byte 29, 26, 48, 28, 39 @ PARAS
    .byte 30, 28, 40, 32, 46 @ PARASECT
    .byte 27, 22, 16, 26, 41 @ VENONAT
    .byte 18, 25, 8, 22, 39 @ VENOMOTH
    .byte 30, 22, 48, 28, 35 @ DIGLETT
    .byte 26, 17, 48, 26, 31 @ DUGTRIO
    .byte 28, 22, 48, 28, 35 @ MEOWTH
    .byte 19, 19, 48, 19, 33 @ PERSIAN
    .byte 28, 19, 48, 23, 41 @ PSYDUCK
    .byte 23, 18, 40, 23, 34 @ GOLDUCK
    .byte 28, 21, 48, 27, 35 @ MANKEY
    .byte 30, 22, 48, 26, 39 @ PRIMEAPE
    .byte 20, 23, 48, 20, 36 @ GROWLITHE
    .byte 15, 9, 40, 12, 25 @ ARCANINE
    .byte 21, 20, 48, 19, 31 @ POLIWAG
    .byte 31, 16, 48, 30, 23 @ POLIWHIRL
    .byte 34, 12, 48, 33, 24 @ POLIWRATH
    .byte 31, 19, 48, 31, 33 @ ABRA
    .byte 27, 18, 48, 28, 37 @ KADABRA
    .byte 28, 17, 40, 29, 38 @ ALAKAZAM
    .byte 27, 17, 48, 27, 30 @ MACHOP
    .byte 29, 17, 48, 29, 31 @ MACHOKE
    .byte 26, 13, 40, 28, 27 @ MACHAMP
    .byte 21, 14, 48, 14, 28 @ BELLSPROUT
    .byte 26, 28, 16, 21, 50 @ WEEPINBELL
    .byte 30, 15, 48, 28, 27 @ VICTREEBEL
    .byte 26, 21, 48, 30, 38 @ TENTACOOL
    .byte 27, 16, 40, 28, 38 @ TENTACRUEL
    .byte 28, 32, 40, 29, 45 @ GEODUDE
    .byte 29, 25, 40, 30, 38 @ GRAVELER
    .byte 25, 27, 40, 28, 39 @ GOLEM
    .byte 15, 17, 48, 14, 35 @ PONYTA
    .byte 47, 15, 40, 43, 30 @ RAPIDASH
    .byte 20, 31, 40, 21, 47 @ SLOWPOKE
    .byte 14, 13, 40, 12, 31 @ SLOWBRO
    .byte 32, 27, 16, 31, 41 @ MAGNEMITE
    .byte 31, 20, 8, 31, 34 @ MAGNETON
    .byte 22, 20, 48, 22, 41 @ FARFETCHD
    .byte 17, 22, 48, 13, 44 @ DODUO
    .byte 29, 4, 40, 14, 7 @ DODRIO
    .byte 27, 36, 32, 23, 53 @ SEEL
    .byte 18, 10, 48, 14, 26 @ DEWGONG
    .byte 31, 16, 48, 29, 37 @ GRIMER
    .byte 23, 15, 48, 25, 34 @ MUK
    .byte 26, 24, 48, 23, 41 @ SHELLDER
    .byte 25, 30, 40, 29, 44 @ CLOYSTER
    .byte 26, 31, 8, 25, 48 @ GASTLY
    .byte 32, 20, 8, 29, 38 @ HAUNTER
    .byte 26, 22, 48, 25, 40 @ GENGAR
    .byte 31, 36, 32, 40, 54 @ ONIX
    .byte 26, 14, 48, 26, 30 @ DROWZEE
    .byte 28, 18, 48, 25, 36 @ HYPNO
    .byte 29, 29, 48, 26, 43 @ KRABBY
    .byte 30, 31, 40, 28, 48 @ KINGLER
    .byte 28, 27, 48, 27, 43 @ VOLTORB
    .byte 28, 24, 48, 29, 46 @ ELECTRODE
    .byte 33, 23, 48, 32, 36 @ EXEGGCUTE
    .byte 28, 23, 40, 27, 37 @ EXEGGUTOR
    .byte 27, 18, 48, 27, 34 @ CUBONE
    .byte 20, 15, 48, 17, 35 @ MAROWAK
    .byte 46, 17, 48, 40, 34 @ HITMONLEE
    .byte 34, 14, 48, 30, 29 @ HITMONCHAN
    .byte 20, 17, 48, 20, 36 @ LICKITUNG
    .byte 30, 20, 16, 29, 32 @ KOFFING
    .byte 17, 13, 16, 15, 28 @ WEEZING
    .byte 14, 35, 32, 20, 51 @ RHYHORN
    .byte 13, 18, 40, 23, 34 @ RHYDON
    .byte 26, 13, 48, 26, 26 @ CHANSEY
    .byte 28, 24, 48, 29, 41 @ TANGELA
    .byte 27, 6, 40, 28, 20 @ KANGASKHAN
    .byte 28, 20, 48, 22, 35 @ HORSEA
    .byte 16, 23, 48, 9, 42 @ SEADRA
    .byte 22, 35, 32, 21, 52 @ GOLDEEN
    .byte 22, 15, 48, 16, 24 @ SEAKING
    .byte 28, 24, 48, 26, 38 @ STARYU
    .byte 29, 19, 48, 27, 32 @ STARMIE
    .byte 36, 17, 48, 37, 30 @ MR_MIME
    .byte 16, 25, 40, 18, 39 @ SCYTHER
    .byte 27, 15, 48, 25, 28 @ JYNX
    .byte 20, 17, 48, 23, 32 @ ELECTABUZZ
    .byte 16, 14, 48, 11, 25 @ MAGMAR
    .byte 29, 28, 40, 32, 43 @ PINSIR
    .byte 17, 29, 40, 19, 46 @ TAUROS
    .byte 22, 21, 48, 19, 35 @ MAGIKARP
    .byte 11, 24, 40, 22, 41 @ GYARADOS
    .byte 22, 8, 40, 21, 22 @ LAPRAS
    .byte 36, 18, 48, 31, 32 @ DITTO
    .byte 22, 22, 48, 22, 35 @ EEVEE
    .byte 24, 35, 40, 24, 48 @ VAPOREON
    .byte 20, 27, 48, 22, 40 @ JOLTEON
    .byte 22, 23, 48, 20, 37 @ FLAREON
    .byte 24, 18, 48, 16, 35 @ PORYGON
    .byte 29, 29, 48, 28, 43 @ OMANYTE
    .byte 22, 26, 48, 25, 45 @ OMASTAR
    .byte 27, 22, 48, 26, 39 @ KABUTO
    .byte 21, 17, 48, 21, 31 @ KABUTOPS
    .byte 19, 29, 0, 20, 48 @ AERODACTYL
    .byte 53, 9, 48, 46, 20 @ SNORLAX
    .byte 24, 11, 24, 23, 23 @ ARTICUNO
    .byte 14, 14, 16, 4, 40 @ ZAPDOS
    .byte 11, 42, 8, 11, 56 @ MOLTRES
    .byte 13, 18, 48, 11, 33 @ DRATINI
    .byte 24, 14, 48, 19, 28 @ DRAGONAIR
    .byte 27, 7, 24, 25, 23 @ DRAGONITE
    .byte 43, 9, 40, 44, 24 @ MEWTWO
    .byte 25, 20, 16, 31, 33 @ MEW
    .byte 27, 23, 48, 27, 36 @ CHIKORITA
    .byte 29, 16, 48, 32, 29 @ BAYLEEF
    .byte 5, 13, 40, 13, 27 @ MEGANIUM
    .byte 17, 27, 48, 20, 39 @ CYNDAQUIL
    .byte 37, 24, 48, 39, 38 @ QUILAVA
    .byte 9, 16, 40, 16, 28 @ TYPHLOSION
    .byte 22, 16, 48, 25, 32 @ TOTODILE
    .byte 22, 16, 48, 24, 33 @ CROCONAW
    .byte 14, 10, 40, 8, 26 @ FERALIGATR
    .byte 30, 10, 48, 29, 21 @ SENTRET
    .byte 33, 14, 48, 33, 25 @ FURRET
    .byte 29, 21, 48, 28, 36 @ HOOTHOOT
    .byte 25, 14, 48, 24, 28 @ NOCTOWL
    .byte 27, 21, 48, 28, 36 @ LEDYBA
    .byte 24, 18, 16, 28, 33 @ LEDIAN
    .byte 32, 32, 40, 32, 45 @ SPINARAK
    .byte 23, 35, 40, 21, 48 @ ARIADOS
    .byte 34, 30, 8, 35, 43 @ CROBAT
    .byte 31, 29, 48, 31, 41 @ CHINCHOU
    .byte 16, 35, 40, 25, 51 @ LANTURN
    .byte 30, 23, 48, 30, 36 @ PICHU
    .byte 28, 24, 48, 30, 38 @ CLEFFA
    .byte 31, 25, 48, 31, 36 @ IGGLYBUFF
    .byte 33, 21, 48, 31, 32 @ TOGEPI
    .byte 27, 16, 48, 28, 28 @ TOGETIC
    .byte 28, 23, 48, 21, 33 @ NATU
    .byte 27, 8, 48, 25, 20 @ XATU
    .byte 22, 21, 48, 21, 36 @ MAREEP
    .byte 25, 18, 48, 24, 33 @ FLAAFFY
    .byte 15, 10, 48, 16, 27 @ AMPHAROS
    .byte 31, 19, 48, 31, 32 @ BELLOSSOM
    .byte 29, 21, 48, 29, 34 @ MARILL
    .byte 26, 18, 48, 23, 31 @ AZUMARILL
    .byte 32, 16, 48, 32, 31 @ SUDOWOODO
    .byte 29, 15, 48, 30, 32 @ POLITOED
    .byte 35, 37, 8, 37, 51 @ HOPPIP
    .byte 30, 24, 8, 28, 39 @ SKIPLOOM
    .byte 29, 33, 8, 32, 47 @ JUMPLUFF
    .byte 30, 41, 24, 30, 53 @ AIPOM
    .byte 31, 32, 8, 36, 46 @ SUNKERN
    .byte 28, 12, 48, 27, 25 @ SUNFLORA
    .byte 27, 40, 8, 22, 53 @ YANMA
    .byte 29, 19, 48, 31, 33 @ WOOPER
    .byte 21, 9, 48, 18, 24 @ QUAGSIRE
    .byte 17, 27, 48, 17, 41 @ ESPEON
    .byte 35, 21, 48, 35, 34 @ UMBREON
    .byte 36, 19, 48, 32, 34 @ MURKROW
    .byte 30, 19, 40, 29, 37 @ SLOWKING
    .byte 40, 33, 8, 38, 46 @ MISDREAVUS
    .byte 32, 23, 8, 31, 33 @ UNOWN_A
    .byte 29, 9, 48, 29, 26 @ WOBBUFFET
    .byte 11, 13, 40, 17, 29 @ GIRAFARIG
    .byte 29, 18, 16, 25, 37 @ PINECO
    .byte 25, 23, 8, 30, 38 @ FORRETRESS
    .byte 16, 27, 48, 12, 45 @ DUNSPARCE
    .byte 30, 19, 8, 29, 35 @ GLIGAR
    .byte 12, 13, 40, 13, 28 @ STEELIX
    .byte 27, 21, 48, 26, 35 @ SNUBBULL
    .byte 28, 9, 48, 25, 24 @ GRANBULL
    .byte 31, 38, 32, 29, 51 @ QWILFISH
    .byte 21, 15, 16, 26, 26 @ SCIZOR
    .byte 37, 10, 48, 36, 24 @ SHUCKLE
    .byte 24, 25, 40, 26, 38 @ HERACROSS
    .byte 28, 19, 48, 29, 36 @ SNEASEL
    .byte 30, 18, 48, 27, 35 @ TEDDIURSA
    .byte 30, 4, 40, 29, 20 @ URSARING
    .byte 32, 24, 48, 32, 40 @ SLUGMA
    .byte 22, 17, 48, 23, 35 @ MAGCARGO
    .byte 28, 24, 48, 27, 37 @ SWINUB
    .byte 24, 35, 32, 24, 54 @ PILOSWINE
    .byte 25, 29, 40, 25, 43 @ CORSOLA
    .byte 21, 31, 40, 19, 43 @ REMORAID
    .byte 28, 17, 48, 26, 32 @ OCTILLERY
    .byte 29, 17, 48, 27, 31 @ DELIBIRD
    .byte 22, 30, 40, 31, 39 @ MANTINE
    .byte 30, 0, 40, 19, 7 @ SKARMORY
    .byte 37, 17, 48, 37, 31 @ HOUNDOUR
    .byte 13, 19, 48, 13, 36 @ HOUNDOOM
    .byte 14, 19, 40, 10, 44 @ KINGDRA
    .byte 27, 17, 48, 25, 36 @ PHANPY
    .byte 17, 21, 48, 25, 44 @ DONPHAN
    .byte 24, 17, 48, 17, 32 @ PORYGON2
    .byte 21, 21, 40, 23, 40 @ STANTLER
    .byte 24, 16, 48, 27, 37 @ SMEARGLE
    .byte 30, 18, 48, 31, 31 @ TYROGUE
    .byte 26, 57, 16, 26, 43 @ HITMONTOP
    .byte 32, 24, 48, 33, 38 @ SMOOCHUM
    .byte 29, 20, 48, 29, 35 @ ELEKID
    .byte 28, 21, 48, 26, 36 @ MAGBY
    .byte 24, 14, 48, 24, 30 @ MILTANK
    .byte 29, 9, 48, 29, 25 @ BLISSEY
    .byte 41, 12, 40, 39, 30 @ RAIKOU
    .byte 8, 9, 40, 11, 24 @ ENTEI
    .byte 35, 29, 40, 38, 44 @ SUICUNE
    .byte 28, 24, 48, 26, 36 @ LARVITAR
    .byte 27, 25, 48, 27, 40 @ PUPITAR
    .byte 6, 11, 40, 13, 25 @ TYRANITAR
    .byte 8, 42, 8, 20, 52 @ LUGIA
    .byte 13, 37, 8, 14, 52 @ HO_OH
    .byte 21, 33, 8, 26, 43 @ CELEBI
    .byte 31, 18, 8, 30, 28 @ UNOWN_B
    .byte 32, 23, 8, 31, 33 @ UNOWN_C
    .byte 28, 25, 8, 27, 35 @ UNOWN_D
    .byte 33, 25, 8, 32, 35 @ UNOWN_E
    .byte 27, 19, 8, 26, 29 @ UNOWN_F
    .byte 32, 22, 8, 31, 33 @ UNOWN_G
    .byte 32, 25, 8, 31, 35 @ UNOWN_H
    .byte 32, 25, 8, 31, 35 @ UNOWN_I
    .byte 32, 22, 8, 31, 32 @ UNOWN_J
    .byte 29, 26, 8, 28, 36 @ UNOWN_K
    .byte 32, 22, 8, 31, 31 @ UNOWN_L
    .byte 32, 28, 8, 31, 38 @ UNOWN_M
    .byte 32, 26, 8, 31, 35 @ UNOWN_N
    .byte 32, 26, 8, 31, 35 @ UNOWN_O
    .byte 32, 22, 8, 31, 32 @ UNOWN_P
    .byte 29, 22, 8, 28, 32 @ UNOWN_Q
    .byte 32, 21, 8, 31, 31 @ UNOWN_R
    .byte 32, 25, 8, 31, 35 @ UNOWN_S
    .byte 32, 30, 8, 31, 40 @ UNOWN_T
    .byte 32, 23, 8, 31, 33 @ UNOWN_U
    .byte 30, 30, 8, 29, 40 @ UNOWN_V
    .byte 32, 29, 8, 31, 39 @ UNOWN_W
    .byte 32, 25, 8, 31, 35 @ UNOWN_X
    .byte 32, 21, 8, 31, 31 @ UNOWN_Y
    .byte 32, 25, 8, 31, 35 @ UNOWN_Z
    .byte 26, 15, 48, 25, 32 @ TREECKO
    .byte 13, 5, 16, 5, 19 @ GROVYLE
    .byte 16, 4, 40, 12, 18 @ SCEPTILE
    .byte 23, 24, 48, 21, 37 @ TORCHIC
    .byte 32, 18, 40, 30, 32 @ COMBUSKEN
    .byte 26, 7, 40, 29, 19 @ BLAZIKEN
    .byte 27, 29, 40, 25, 44 @ MUDKIP
    .byte 29, 17, 48, 28, 32 @ MARSHTOMP
    .byte 27, 17, 40, 27, 35 @ SWAMPERT
    .byte 20, 18, 48, 15, 32 @ POOCHYENA
    .byte 9, 13, 40, 9, 28 @ MIGHTYENA
    .byte 11, 26, 48, 9, 43 @ ZIGZAGOON
    .byte 13, 40, 24, 11, 55 @ LINOONE
    .byte 33, 23, 48, 31, 38 @ WURMPLE
    .byte 19, 28, 48, 17, 42 @ SILCOON
    .byte 15, 27, 8, 14, 40 @ BEAUTIFLY
    .byte 20, 29, 48, 17, 44 @ CASCOON
    .byte 20, 25, 8, 22, 38 @ DUSTOX
    .byte 25, 37, 40, 23, 50 @ LOTAD
    .byte 34, 16, 48, 41, 29 @ LOMBRE
    .byte 28, 15, 40, 27, 36 @ LUDICOLO
    .byte 27, 23, 48, 24, 40 @ SEEDOT
    .byte 32, 13, 48, 26, 29 @ NUZLEAF
    .byte 50, 17, 40, 46, 35 @ SHIFTRY
    .byte 24, 26, 48, 23, 40 @ NINCADA
    .byte 23, 33, 0, 23, 47 @ NINJASK
    .byte 22, 25, 8, 24, 42 @ SHEDINJA
    .byte 23, 16, 48, 20, 30 @ TAILLOW
    .byte 12, 10, 40, 5, 22 @ SWELLOW
    .byte 31, 22, 48, 29, 35 @ SHROOMISH
    .byte 37, 12, 48, 35, 25 @ BRELOOM
    .byte 33, 22, 48, 31, 39 @ SPINDA
    .byte 26, 22, 16, 21, 38 @ WINGULL
    .byte 29, 10, 16, 9, 27 @ PELIPPER
    .byte 29, 22, 48, 28, 37 @ SURSKIT
    .byte 26, 33, 8, 20, 48 @ MASQUERAIN
    .byte 23, 23, 48, 22, 40 @ WAILMER
    .byte 23, 3, 48, 9, 19 @ WAILORD
    .byte 36, 26, 48, 34, 42 @ SKITTY
    .byte 30, 18, 48, 28, 33 @ DELCATTY
    .byte 25, 16, 48, 19, 30 @ KECLEON
    .byte 29, 21, 48, 27, 34 @ BALTOY
    .byte 30, 13, 40, 29, 36 @ CLAYDOL
    .byte 31, 16, 48, 21, 35 @ NOSEPASS
    .byte 14, 25, 40, 10, 39 @ TORKOAL
    .byte 30, 22, 48, 29, 39 @ SABLEYE
    .byte 23, 18, 48, 21, 30 @ BARBOACH
    .byte 24, 32, 40, 23, 49 @ WHISCASH
    .byte 25, 15, 48, 19, 28 @ LUVDISC
    .byte 31, 20, 48, 29, 35 @ CORPHISH
    .byte 20, 12, 40, 24, 35 @ CRAWDAUNT
    .byte 24, 30, 40, 22, 47 @ FEEBAS
    .byte 32, 12, 40, 31, 29 @ MILOTIC
    .byte 22, 25, 48, 19, 34 @ CARVANHA
    .byte 25, 12, 40, 23, 39 @ SHARPEDO
    .byte 41, 19, 48, 23, 24 @ TRAPINCH
    .byte 16, 39, 32, 14, 52 @ VIBRAVA
    .byte 34, 7, 16, 33, 19 @ FLYGON
    .byte 34, 19, 48, 28, 35 @ MAKUHITA
    .byte 36, 15, 40, 38, 28 @ HARIYAMA
    .byte 17, 24, 48, 20, 39 @ ELECTRIKE
    .byte 47, 24, 40, 46, 41 @ MANECTRIC
    .byte 16, 26, 48, 13, 42 @ NUMEL
    .byte 13, 34, 40, 14, 54 @ CAMERUPT
    .byte 30, 15, 48, 24, 31 @ SPHEAL
    .byte 28, 9, 48, 26, 24 @ SEALEO
    .byte 25, 1, 40, 16, 22 @ WALREIN
    .byte 31, 23, 48, 29, 41 @ CACNEA
    .byte 29, 14, 40, 29, 27 @ CACTURNE
    .byte 30, 22, 48, 30, 38 @ SNORUNT
    .byte 26, 28, 8, 26, 49 @ GLALIE
    .byte 28, 22, 8, 25, 44 @ LUNATONE
    .byte 24, 24, 16, 23, 49 @ SOLROCK
    .byte 27, 16, 48, 24, 31 @ AZURILL
    .byte 33, 20, 48, 27, 40 @ SPOINK
    .byte 20, 16, 48, 21, 32 @ GRUMPIG
    .byte 28, 22, 8, 29, 37 @ PLUSLE
    .byte 33, 22, 8, 31, 38 @ MINUN
    .byte 45, 20, 48, 47, 36 @ MAWILE
    .byte 31, 23, 48, 30, 37 @ MEDITITE
    .byte 33, 15, 40, 30, 29 @ MEDICHAM
    .byte 27, 22, 16, 23, 35 @ SWABLU
    .byte 29, 11, 16, 26, 26 @ ALTARIA
    .byte 26, 21, 48, 27, 38 @ WYNAUT
    .byte 16, 24, 8, 20, 46 @ DUSKULL
    .byte 28, 15, 48, 26, 40 @ DUSCLOPS
    .byte 30, 17, 48, 29, 32 @ ROSELIA
    .byte 25, 30, 48, 24, 47 @ SLAKOTH
    .byte 16, 18, 40, 20, 36 @ VIGOROTH
    .byte 55, 15, 48, 41, 33 @ SLAKING
    .byte 27, 24, 48, 23, 38 @ GULPIN
    .byte 31, 6, 48, 21, 19 @ SWALOT
    .byte 24, 10, 40, 32, 24 @ TROPIUS
    .byte 31, 25, 48, 29, 41 @ WHISMUR
    .byte 28, 18, 40, 34, 39 @ LOUDRED
    .byte 16, 16, 40, 26, 42 @ EXPLOUD
    .byte 32, 26, 48, 30, 38 @ CLAMPERL
    .byte 19, 30, 40, 21, 51 @ HUNTAIL
    .byte 13, 31, 40, 3, 50 @ GOREBYSS
    .byte 42, 17, 40, 42, 34 @ ABSOL
    .byte 22, 25, 8, 23, 39 @ SHUPPET
    .byte 28, 20, 8, 27, 35 @ BANETTE
    .byte 14, 13, 48, 11, 30 @ SEVIPER
    .byte 24, 12, 40, 21, 26 @ ZANGOOSE
    .byte 12, 31, 48, 9, 45 @ RELICANTH
    .byte 24, 28, 48, 26, 44 @ ARON
    .byte 11, 33, 48, 18, 47 @ LAIRON
    .byte 16, 11, 40, 22, 27 @ AGGRON
    .byte 29, 24, 8, 27, 38 @ CASTFORM
    .byte 37, 21, 8, 33, 37 @ VOLBEAT
    .byte 32, 18, 8, 31, 32 @ ILLUMISE
    .byte 30, 17, 48, 31, 30 @ LILEEP
    .byte 18, 22, 40, 21, 40 @ CRADILY
    .byte 28, 30, 48, 27, 43 @ ANORITH
    .byte 21, 5, 40, 20, 19 @ ARMALDO
    .byte 31, 23, 48, 32, 35 @ RALTS
    .byte 28, 18, 48, 31, 30 @ KIRLIA
    .byte 53, 7, 40, 50, 20 @ GARDEVOIR
    .byte 23, 19, 48, 22, 38 @ BAGON
    .byte 25, 27, 48, 25, 44 @ SHELGON
    .byte 9, 17, 48, 10, 33 @ SALAMENCE
    .byte 22, 25, 8, 24, 35 @ BELDUM
    .byte 34, 15, 16, 31, 33 @ METANG
    .byte 36, 27, 40, 34, 43 @ METAGROSS
    .byte 22, 7, 40, 20, 18 @ REGIROCK
    .byte 25, 12, 40, 23, 25 @ REGICE
    .byte 25, 13, 40, 25, 25 @ REGISTEEL
    .byte 14, 25, 40, 11, 38 @ KYOGRE
    .byte 4, 11, 40, 10, 25 @ GROUDON
    .byte 12, 14, 16, 14, 31 @ RAYQUAZA
    .byte 30, 12, 16, 35, 25 @ LATIAS
    .byte 5, 14, 16, 5, 29 @ LATIOS
    .byte 28, 21, 8, 30, 34 @ JIRACHI
    .byte 27, 8, 40, 28, 22 @ DEOXYS
    .byte 29, 12, 8, 28, 26 @ CHIMECHO
    .byte 32, 33, 8, 32, 43 @ UNOWN_EMARK
    .byte 32, 35, 8, 32, 45 @ UNOWN_QMARK

    .align 2
kPalette_8460568:: @ 8460568
    .incbin "baserom.gba", 0x460568, 0x80

kLzGfx_84605E8:: @ 84605E8
    .incbin "baserom.gba", 0x4605E8, 0x5BF

    .align 2
kLzTilemap_8460BA8:: @ 8460BA8
    .incbin "baserom.gba", 0x460BA8, 0xF9

    .align 2
kLzGfx_8460CA4:: @ 8460CA4
    .incbin "baserom.gba", 0x460CA4, 0x43

    .align 2
kLzTilemap_8460CE8:: @ 8460CE8
    .incbin "baserom.gba", 0x460CE8, 0xAC

kTilemap_8460D94:: @ 8460D94
    .incbin "baserom.gba", 0x460D94, 0xA0

kTilemap_8460E34:: @ 8460E34
    .incbin "baserom.gba", 0x460E34, 0xA0

kPalette_8460ED4:: @ 8460ED4
    .incbin "baserom.gba", 0x460ED4, 0x40

kLzGfx_8460F14:: @ 8460F14
    .incbin "baserom.gba", 0x460F14, 0x6E5

    .align 2
kPalette_84615FC:: @ 84615FC
    .incbin "baserom.gba", 0x4615FC, 0x40

kLzGfx_846163C:: @ 846163C
    .incbin "baserom.gba", 0x46163C, 0x696

    .align 2
kPalette_8461CD4:: @ 8461CD4
    .incbin "baserom.gba", 0x461CD4, 0x40

kLzGfx_8461D14:: @ 8461D14
    .incbin "baserom.gba", 0x461D14, 0x695

    .align 2
kPalette_84623AC:: @ 84623AC
    .incbin "baserom.gba", 0x4623AC, 0x40

kLzGfx_84623EC:: @ 84623EC
    .incbin "baserom.gba", 0x4623EC, 0x5E2

    .align 2
kPalette_84629D0:: @ 84629D0
    .incbin "baserom.gba", 0x4629D0, 0x20

kPalette_84629F0:: @ 84629F0
    .incbin "baserom.gba", 0x4629F0, 0x20

kUGfx_8462A10:: @ 8462A10
    .incbin "baserom.gba", 0x462A10, 0x164

kUGfx_8462B74:: @ 8462B74
    .incbin "baserom.gba", 0x462B74, 0x1BE

    .align 2
kUGfx_8462D34:: @ 8462D34
    .incbin "baserom.gba", 0x462D34, 0xE2

    .align 2
kUGfx_8462E18:: @ 8462E18
    .incbin "baserom.gba", 0x462E18, 0x40

kVRAMConfig_8462E58:: @ 8462E58
    .4byte 0x1F8
    .4byte 0x21E1
    .4byte 0x1BC2

kWindowTemplate_8462E64:: @ 8462E64
    window_template 0x00, 0x00, 0x07, 0x1E, 0x04, 0x0F, 0x0001
    window_template_terminator

kWindowTemplate_8462E74:: @ 8462E74
    window_template 0x00, 0x06, 0x03, 0x18, 0x06, 0x0F, 0x0001
    window_template 0x00, 0x06, 0x0A, 0x18, 0x04, 0x0F, 0x0092
    window_template 0x00, 0x06, 0x0F, 0x18, 0x04, 0x0F, 0x00F3
    window_template_terminator

kWindowTemplate_8462E94:: @ 8462E94
    window_template 0x00, 0x06, 0x03, 0x18, 0x04, 0x0F, 0x0001
    window_template 0x00, 0x06, 0x08, 0x18, 0x04, 0x0F, 0x0062
    window_template 0x00, 0x06, 0x0D, 0x18, 0x06, 0x0F, 0x00C3
    window_template_terminator

kPointer_8462EB4:: @ 8462EB4
    .4byte kWindowTemplate_8462E64 @ 8462E64
    .4byte kWindowTemplate_8462E74 @ 8462E74
    .4byte kWindowTemplate_8462E94 @ 8462E94

kWindowTemplate_8462EC0:: @ 8462EC0
    window_template 0x00, 0x01, 0x04, 0x1C, 0x0F, 0x0F, 0x0001

kWindowTemplate_8462EC8:: @ 8462EC8
    window_template 0x00, 0x12, 0x09, 0x09, 0x04, 0x0F, 0x0174

kWindowTemplate_8462ED0:: @ 8462ED0
    window_template 0x00, 0x02, 0x02, 0x06, 0x04, 0x0F, 0x0180

kWindowTemplate_8462ED8:: @ 8462ED8
    window_template 0x00, 0x02, 0x02, 0x0C, 0x0A, 0x0F, 0x0001

    .incbin "baserom.gba", 0x462EE0, 0x8 @ unknown

UNK_8462EE8:: @ 8462EE8
    .incbin "baserom.gba", 0x462EE8, 0x4 @ null

UNK_8462EEC:: @ 8462EEC
    .incbin "baserom.gba", 0x462EEC, 0x4 @ null

kPointer_8462EF0:: @ 8462EF0
    .4byte Text_81C5A04 @ 81C5A04
    .4byte Text_81C5AEB @ 81C5AEB
    .4byte Text_81C5BB9 @ 81C5BB9

kObjTiles_8462EFC:: @ 8462EFC
    obj_tiles kUGfx_8462B74, 0x400, 4097
    obj_tiles kUGfx_8462D34, 0x200, 4098
    obj_tiles kUGfx_8462E18, 0x80, 4099
    obj_tiles kUGfx_8462A10, 0x600, 4096

kObjPal_8462F1C:: @ 8462F1C
    obj_pal kPalette_84629F0, 4097
    obj_pal kPalette_84629D0, 4096

kAnimCmd_8462F2C:: @ 8462F2C
    obj_image_anim_frame 0, 0
    obj_image_anim_end

kAnimCmd_8462F34:: @ 8462F34
    obj_image_anim_frame 16, 0
    obj_image_anim_end

kAnimCmd_8462F3C:: @ 8462F3C
    obj_image_anim_frame 32, 0
    obj_image_anim_end

kAnimCmds_8462F44:: @ 8462F44
    .4byte kAnimCmd_8462F2C @ 8462F2C

kAnimCmds_8462F48:: @ 8462F48
    .4byte kAnimCmd_8462F34 @ 8462F34

kAnimCmds_8462F4C:: @ 8462F4C
    .4byte kAnimCmd_8462F3C @ 8462F3C

kSpriteTemplate_8462F50:: @ 8462F50
    spr_template 4096, 4096, kOAM_83ACAF8, kAnimCmds_8462F44, NULL, kDummySpriteAffineAnimTable, objc_nullsub
    spr_template 4096, 4096, kOAM_83ACAF8, kAnimCmds_8462F48, NULL, kDummySpriteAffineAnimTable, objc_nullsub
    spr_template 4096, 4096, kOAM_83ACAF8, kAnimCmds_8462F4C, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kAnimCmd_8462F98:: @ 8462F98
    obj_image_anim_frame 0, 30
    obj_image_anim_frame 16, 30
    obj_image_anim_jump 0

kAnimCmd_8462FA4:: @ 8462FA4
    obj_image_anim_frame 0, 60
    obj_image_anim_frame 0, 60
    obj_image_anim_frame 0, 60
    obj_image_anim_frame 0, 60
    obj_image_anim_frame 0, 60
    obj_image_anim_frame 0, 60
    obj_image_anim_frame 8, 12
    obj_image_anim_frame 0, 12
    obj_image_anim_frame 8, 12
    obj_image_anim_frame 0, 60
    obj_image_anim_frame 0, 60
    obj_image_anim_frame 0, 60
    obj_image_anim_frame 8, 12
    obj_image_anim_frame 0, 12
    obj_image_anim_frame 8, 12
    obj_image_anim_jump 0

kAnimCmd_8462FE4:: @ 8462FE4
    obj_image_anim_frame 0, 60
    obj_image_anim_frame 0, 60
    obj_image_anim_frame 0, 60
    obj_image_anim_frame 0, 60
    obj_image_anim_frame 0, 60
    obj_image_anim_frame 2, 8
    obj_image_anim_frame 0, 8
    obj_image_anim_frame 2, 8
    obj_image_anim_frame 0, 60
    obj_image_anim_frame 0, 60
    obj_image_anim_frame 0, 60
    obj_image_anim_frame 2, 8
    obj_image_anim_frame 0, 8
    obj_image_anim_frame 2, 8
    obj_image_anim_jump 0

kAnimCmds_8463020:: @ 8463020
    .4byte kAnimCmd_8462F98 @ 8462F98

kAnimCmds_8463024:: @ 8463024
    .4byte kAnimCmd_8462FA4 @ 8462FA4

kAnimCmds_8463028:: @ 8463028
    .4byte kAnimCmd_8462FE4 @ 8462FE4

kSpriteTemplate_846302C:: @ 846302C
    spr_template 4097, 4097, kOAM_83AC9D8, kAnimCmds_8463020, NULL, kDummySpriteAffineAnimTable, objc_nullsub
    spr_template 4098, 4097, kOAM_83AC9F8, kAnimCmds_8463024, NULL, kDummySpriteAffineAnimTable, objc_nullsub
    spr_template 4099, 4097, kOAM_83AC9E8, kAnimCmds_8463028, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kPointer_8463074:: @ 8463074
    .4byte Text_81C5875 @ 81C5875
    .4byte Text_81C58BA @ 81C58BA
    .4byte Text_81C58F9 @ 81C58F9
    .4byte Text_81C592B @ 81C592B
    .4byte Text_81C594F @ 81C594F
    .4byte Text_81C5981 @ 81C5981

kPointer_846308C:: @ 846308C
    .4byte Text_81C575E @ 81C575E
    .4byte Text_81C5767 @ 81C5767
    .4byte Text_81C577A @ 81C577A
    .4byte Text_81C577E @ 81C577E
    .4byte Text_81C5783 @ 81C5783
    .4byte Text_81C5788 @ 81C5788
    .4byte Text_81C578C @ 81C578C
    .4byte Text_81C5792 @ 81C5792
    .4byte Text_81C5797 @ 81C5797
    .4byte Text_81C579D @ 81C579D
    .4byte Text_81C57A2 @ 81C57A2
    .4byte Text_81C57A9 @ 81C57A9
    .4byte Text_81C57AF @ 81C57AF
    .4byte Text_81C57B4 @ 81C57B4
    .4byte Text_81C57B8 @ 81C57B8
    .4byte Text_81C57BC @ 81C57BC
    .4byte Text_81C57C2 @ 81C57C2
    .4byte Text_81C57C6 @ 81C57C6
    .4byte Text_81C57CB @ 81C57CB

kPointer_84630D8:: @ 84630D8
    .4byte Text_81C575E @ 81C575E
    .4byte Text_81C5767 @ 81C5767
    .4byte Text_81C57D0 @ 81C57D0
    .4byte Text_81C57D4 @ 81C57D4
    .4byte Text_81C57D9 @ 81C57D9
    .4byte Text_81C57E0 @ 81C57E0
    .4byte Text_81C57E8 @ 81C57E8
    .4byte Text_81C57EE @ 81C57EE
    .4byte Text_81C57F4 @ 81C57F4
    .4byte Text_81C57FA @ 81C57FA
    .4byte Text_81C57FF @ 81C57FF
    .4byte Text_81C5806 @ 81C5806
    .4byte Text_81C580A @ 81C580A
    .4byte Text_81C580F @ 81C580F
    .4byte Text_81C5814 @ 81C5814
    .4byte Text_81C5819 @ 81C5819
    .4byte Text_81C581F @ 81C581F
    .4byte Text_81C5823 @ 81C5823
    .4byte Text_81C5828 @ 81C5828

kPointer_8463124:: @ 8463124
    .4byte Text_81C5758 @ 81C5758
    .4byte Text_81C576C @ 81C576C
    .4byte Text_81C5771 @ 81C5771
    .4byte Text_81C5775 @ 81C5775

kVRAMConfig_8463134:: @ 8463134
    .4byte 0x11F0
    .4byte 0x1E1
    .4byte 0x21D2

kPointer_8463140:: @ 8463140
    .4byte sub_8132414 @ 8132415
    .4byte sub_8132868 @ 8132869
    .4byte sub_8132908 @ 8132909
    .4byte sub_81328B8 @ 81328B9

kPointerSet_8463150:: @ 8463150
    .4byte kText_84161A0, m_use_81325F0
    .4byte kText_84161B2, m_give_813265C
    .4byte kText_84161C8, m_exit_81327FC

UNK_8463168:: @ 8463168
    .incbin "baserom.gba", 0x463168, 0x3 @ null

UNK_846316B:: @ 846316B
    .incbin "baserom.gba", 0x46316B, 0x5 @ null

kPointer_8463170:: @ 8463170
    .4byte sub_8132CAC @ 8132CAD
    .4byte sub_8132A48 @ 8132A49

UNK_8463178:: @ 8463178
    .incbin "baserom.gba", 0x463178, 0x4 @ null

UNK_846317C:: @ 846317C
    .incbin "baserom.gba", 0x46317C, 0x4 @ null

UNK_8463180:: @ 8463180
    .incbin "baserom.gba", 0x463180, 0x4 @ null

kRBoxBar_8463184:: @ 8463184
    .byte 0x00, 0x01, 0x02
    .byte 0x00, 0x02, 0x03
    .byte 0x00, 0x03, 0x06
    .byte 0x00, 0x0E, 0x0A

kWindowTemplate_8463190:: @ 8463190
    window_template 0x00, 0x0A, 0x01, 0x13, 0x0A, 0x0F, 0x0081
    window_template 0x00, 0x0C, 0x0C, 0x12, 0x08, 0x0A, 0x013F
    window_template 0x01, 0x05, 0x0F, 0x0F, 0x04, 0x0D, 0x01F9
    window_template 0x00, 0x00, 0x01, 0x0A, 0x02, 0x0F, 0x0235
    window_template 0x00, 0x01, 0x0D, 0x05, 0x06, 0x0C, 0x0249
    window_template 0x00, 0x07, 0x0D, 0x05, 0x06, 0x0C, 0x0267
    window_template 0x01, 0x02, 0x0F, 0x1A, 0x04, 0x0B, 0x0285
    window_template 0x01, 0x11, 0x09, 0x0C, 0x04, 0x0F, 0x02ED
    window_template 0x01, 0x01, 0x01, 0x08, 0x03, 0x0D, 0x031D
    window_template_terminator

kWindowTemplate_84631E0:: @ 84631E0
    window_template 0x01, 0x15, 0x09, 0x06, 0x04, 0x0F, 0x0335

kWindowTemplate_84631E8:: @ 84631E8
    window_template 0x01, 0x16, 0x0D, 0x07, 0x06, 0x0F, 0x01CF
    window_template 0x01, 0x16, 0x0F, 0x07, 0x04, 0x0F, 0x01CF

kOAM_84631F8:: @ 84631F8
    .2byte 0x0000
    .2byte 0x8000
    .2byte 0x0800
    .2byte 0x0000

kAnimCmd_8463200:: @ 8463200
    obj_image_anim_frame 0, 0
    obj_image_anim_end

kAnimCmd_8463208:: @ 8463208
    obj_image_anim_frame 16, 0
    obj_image_anim_end

kAnimCmds_8463210:: @ 8463210
    .4byte kAnimCmd_8463200 @ 8463200
    .4byte kAnimCmd_8463208 @ 8463208

kObjTiles_8463218:: @ 8463218
    obj_tiles kUnkGfx_8E84D90, 0x400, 400

kSpriteTemplate_8463220:: @ 8463220
    spr_template 400, 400, kOAM_84631F8, kAnimCmds_8463210, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kBasicItem_8463238:: @ 8463238
    .2byte 0x0000, 0x0090, 0x0080, 0x00C0, 0x0060, 0x0050, 0x00B0, 0x00A0, 0x00E0, 0x0000, 0x0010, 0x0020, 0x0030, 0x0040, 0x00D0, 0x0070, 0x0100, 0x00F0

UNK_846325C:: @ 846325C
    .incbin "baserom.gba", 0x46325C, 0x10 @ null

kOAM_846326C:: @ 846326C
    .2byte 0x0000
    .2byte 0x4000
    .2byte 0x0000
    .2byte 0x0000

kAnimCmd_8463274:: @ 8463274
    obj_image_anim_frame 0, 30
    obj_image_anim_end

kAnimCmd_846327C:: @ 846327C
    obj_image_anim_frame 0, 30, OBJ_IMAGE_ANIM_H_FLIP
    obj_image_anim_end

kAnimCmd_8463284:: @ 8463284
    obj_image_anim_frame 4, 30
    obj_image_anim_end

kAnimCmd_846328C:: @ 846328C
    obj_image_anim_frame 4, 30, OBJ_IMAGE_ANIM_V_FLIP
    obj_image_anim_end

kAnimCmds_8463294:: @ 8463294
    .4byte kAnimCmd_8463274 @ 8463274
    .4byte kAnimCmd_846327C @ 846327C
    .4byte kAnimCmd_8463284 @ 8463284
    .4byte kAnimCmd_846328C @ 846328C

kSpriteTemplate_84632A4:: @ 84632A4
    spr_template 0, 0, kOAM_846326C, kAnimCmds_8463294, NULL, kDummySpriteAffineAnimTable, move_pingpong

UNK_84632BC:: @ 84632BC
    .incbin "baserom.gba", 0x4632BC, 0x4 @ null

UNK_84632C0:: @ 84632C0
    .incbin "baserom.gba", 0x4632C0, 0x4 @ null

UNK_84632C4:: @ 84632C4
    .incbin "baserom.gba", 0x4632C4, 0x4 @ null

UNK_84632C8:: @ 84632C8
    .incbin "baserom.gba", 0x4632C8, 0x4 @ null

UNK_84632CC:: @ 84632CC
    .incbin "baserom.gba", 0x4632CC, 0x4 @ null

UNK_84632D0:: @ 84632D0
    .incbin "baserom.gba", 0x4632D0, 0x4 @ null

UNK_84632D4:: @ 84632D4
    .incbin "baserom.gba", 0x4632D4, 0x4 @ null

UNK_84632D8:: @ 84632D8
    .incbin "baserom.gba", 0x4632D8, 0x4 @ null

kOAM_84632DC:: @ 84632DC
    .2byte 0x0000
    .2byte 0x4000
    .2byte 0x0000
    .2byte 0x0000

kAnimCmd_84632E4:: @ 84632E4
    obj_image_anim_frame 0, 30
    obj_image_anim_end

kAnimCmds_84632EC:: @ 84632EC
    .4byte kAnimCmd_84632E4 @ 84632E4

kSpriteTemplate_84632F0:: @ 84632F0
    spr_template 0, 0, kOAM_84632DC, kAnimCmds_84632EC, NULL, kDummySpriteAffineAnimTable, objc_8134040

kPalette_8463308:: @ 8463308
    .incbin "baserom.gba", 0x463308, 0x20

kLzGfx_8463328:: @ 8463328
    .incbin "baserom.gba", 0x463328, 0x6E

    .align 2
kLzGfx_8463398:: @ 8463398
    .incbin "baserom.gba", 0x463398, 0x40

kLzGfx_84633D8:: @ 84633D8
    .incbin "baserom.gba", 0x4633D8, 0x43

    .align 2
kPalette_846341C:: @ 846341C
    .incbin "baserom.gba", 0x46341C, 0x20

kLzGfx_846343C:: @ 846343C
    .incbin "baserom.gba", 0x46343C, 0x109

    .align 2
kUnknown_8463548:: @ 8463548
    .incbin "baserom.gba", 0x463548, 0x4 @ null

kUnknown_846354C:: @ 846354C
    .incbin "baserom.gba", 0x46354C, 0x4 @ null

kUnknown_8463550:: @ 8463550
    .incbin "baserom.gba", 0x463550, 0x4 @ null

kUnknown_8463554:: @ 8463554
    .incbin "baserom.gba", 0x463554, 0x4 @ null

kUnknown_8463558:: @ 8463558
    .incbin "baserom.gba", 0x463558, 0x4 @ null

kUnknown_846355C:: @ 846355C
    .incbin "baserom.gba", 0x46355C, 0x4 @ null

kUnknown_8463560:: @ 8463560
    .incbin "baserom.gba", 0x463560, 0x4 @ null

kPointer_8463564:: @ 8463564
    .4byte kUnknown_8463548 @ 8463548
    .4byte kUnknown_846354C @ 846354C
    .4byte kUnknown_8463550 @ 8463550
    .4byte kUnknown_8463554 @ 8463554
    .4byte kUnknown_8463558 @ 8463558
    .4byte kUnknown_846355C @ 846355C
    .4byte kUnknown_8463560 @ 8463560

kRegionMapCatchAreas:: @ 8463580
    .byte 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x36, 0x2C, 0x00
    .byte 0x00, 0x36, 0x1C, 0x00
    .byte 0x00, 0x36, 0x0C, 0x00
    .byte 0x00, 0x5C, 0x0C, 0x00
    .byte 0x00, 0x6E, 0x18, 0x00
    .byte 0x00, 0x5C, 0x24, 0x00
    .byte 0x00, 0x4C, 0x18, 0x00
    .byte 0x00, 0x4E, 0x34, 0x00
    .byte 0x00, 0x36, 0x3E, 0x00
    .byte 0x00, 0x2A, 0x02, 0x00
    .byte 0x00, 0x5C, 0x18, 0x00
    .byte 0x02, 0x36, 0x20, 0x00
    .byte 0x02, 0x36, 0x10, 0x00
    .byte 0x01, 0x3D, 0x0C, 0x00
    .byte 0x01, 0x4D, 0x0C, 0x00
    .byte 0x00, 0x5C, 0x12, 0x00
    .byte 0x00, 0x5C, 0x1E, 0x00
    .byte 0x00, 0x54, 0x18, 0x00
    .byte 0x01, 0x62, 0x18, 0x00
    .byte 0x01, 0x62, 0x0C, 0x00
    .byte 0x02, 0x6E, 0x0C, 0x00
    .byte 0x01, 0x62, 0x24, 0x00
    .byte 0x04, 0x6A, 0x19, 0x00
    .byte 0x01, 0x64, 0x2E, 0x00
    .byte 0x02, 0x5E, 0x2D, 0x00
    .byte 0x01, 0x55, 0x34, 0x00
    .byte 0x00, 0x44, 0x18, 0x00
    .byte 0x04, 0x3E, 0x1A, 0x00
    .byte 0x01, 0x40, 0x34, 0x00
    .byte 0x00, 0x4E, 0x3C, 0x00
    .byte 0x03, 0x37, 0x3A, 0x00
    .byte 0x02, 0x36, 0x32, 0x00
    .byte 0x01, 0x28, 0x1C, 0x00
    .byte 0x04, 0x26, 0x04, 0x00
    .byte 0x00, 0x5C, 0x04, 0x00
    .byte 0x03, 0x5A, 0xFE, 0x00
    .byte 0x00, 0x33, 0x14, 0x00
    .byte 0x01, 0x3D, 0x12, 0x00
    .byte 0x00, 0x48, 0x08, 0x00
    .byte 0x00, 0x57, 0x08, 0x00
    .byte 0x00, 0x70, 0x0E, 0x00
    .byte 0x00, 0x71, 0x14, 0x00
    .byte 0x00, 0x71, 0x19, 0x00
    .byte 0x01, 0x4E, 0x2C, 0x00
    .byte 0x00, 0x41, 0x3C, 0x00
    .byte 0x00, 0x34, 0x3E, 0x00
    .byte 0x00, 0x2D, 0x07, 0x00
    .byte 0x00, 0x0A, 0x0A, 0x00
    .byte 0x00, 0x0C, 0x23, 0x00
    .byte 0x00, 0x0E, 0x34, 0x00
    .byte 0x00, 0x0C, 0x54, 0x00
    .byte 0x00, 0x2D, 0x51, 0x00
    .byte 0x00, 0x4C, 0x54, 0x00
    .byte 0x00, 0x68, 0x52, 0x00
    .byte 0x02, 0x0E, 0x02, 0x00
    .byte 0x00, 0x0A, 0x0F, 0x00
    .byte 0x00, 0x0C, 0x1D, 0x00
    .byte 0x01, 0x02, 0x34, 0x00
    .byte 0x01, 0x0C, 0x38, 0x00
    .byte 0x01, 0x2C, 0x4A, 0x00
    .byte 0x01, 0x24, 0x4E, 0x00
    .byte 0x02, 0x30, 0x50, 0x00
    .byte 0x02, 0x34, 0x56, 0x00
    .byte 0x00, 0x48, 0x4A, 0x00
    .byte 0x01, 0x48, 0x4E, 0x00
    .byte 0x02, 0x51, 0x50, 0x00
    .byte 0x00, 0x4C, 0x5C, 0x00
    .byte 0x00, 0x68, 0x4B, 0x00
    .byte 0x00, 0x68, 0x56, 0x00
    .byte 0x02, 0x6C, 0x53, 0x00
    .byte 0x03, 0x60, 0x5A, 0x00
    .byte 0x00, 0x0E, 0x01, 0x00
    .byte 0x00, 0x05, 0x34, 0x00
    .byte 0x00, 0x0D, 0x50, 0x00
    .byte 0x00, 0x36, 0x4A, 0x00
    .byte 0x00, 0x45, 0x49, 0x00
    .byte 0x00, 0x4C, 0x4D, 0x00
    .byte 0x00, 0x49, 0x5F, 0x00
    .byte 0x03, 0x60, 0x5A, 0x00

kPalette_84636C0:: @ 84636C0
    .incbin "baserom.gba", 0x4636C0, 0x20

kPalette_84636E0:: @ 84636E0
    .incbin "baserom.gba", 0x4636E0, 0x20

kPalette_8463700:: @ 8463700
    .incbin "baserom.gba", 0x463700, 0x20

kPalette_8463720:: @ 8463720
    .incbin "baserom.gba", 0x463720, 0x20

kLzGfx_8463740:: @ 8463740
    .incbin "baserom.gba", 0x463740, 0x12C

kLzGfx_846386C:: @ 846386C
    .incbin "baserom.gba", 0x46386C, 0x11D

    .align 2
kOAM_846398C:: @ 846398C
    .2byte 0x4000
    .2byte 0xC000
    .2byte 0x0000
    .2byte 0x0000

kAnimCmd_8463994:: @ 8463994
    obj_image_anim_frame 0, 20
    obj_image_anim_jump 0

kAnimCmd_846399C:: @ 846399C
    obj_image_anim_frame 32, 20
    obj_image_anim_jump 0

kAnimCmds_84639A4:: @ 84639A4
    .4byte kAnimCmd_8463994 @ 8463994
    .4byte kAnimCmd_846399C @ 846399C

kOAM_84639AC:: @ 84639AC
    .2byte 0x4000
    .2byte 0x4000
    .2byte 0x0000
    .2byte 0x0000

kAnimCmd_84639B4:: @ 84639B4
    obj_image_anim_frame 0, 20
    obj_image_anim_jump 0

kAnimCmd_84639BC:: @ 84639BC
    obj_image_anim_frame 4, 20
    obj_image_anim_jump 0

kAnimCmd_84639C4:: @ 84639C4
    obj_image_anim_frame 8, 20
    obj_image_anim_jump 0

kAnimCmd_84639CC:: @ 84639CC
    obj_image_anim_frame 12, 20
    obj_image_anim_jump 0

kAnimCmd_84639D4:: @ 84639D4
    obj_image_anim_frame 16, 20
    obj_image_anim_jump 0

kAnimCmd_84639DC:: @ 84639DC
    obj_image_anim_frame 20, 20
    obj_image_anim_jump 0

kAnimCmd_84639E4:: @ 84639E4
    obj_image_anim_frame 24, 20
    obj_image_anim_jump 0

kAnimCmd_84639EC:: @ 84639EC
    obj_image_anim_frame 28, 20
    obj_image_anim_jump 0

kAnimCmds_84639F4:: @ 84639F4
    .4byte kAnimCmd_84639B4 @ 84639B4
    .4byte kAnimCmd_84639BC @ 84639BC
    .4byte kAnimCmd_84639C4 @ 84639C4
    .4byte kAnimCmd_84639CC @ 84639CC
    .4byte kAnimCmd_84639D4 @ 84639D4
    .4byte kAnimCmd_84639DC @ 84639DC
    .4byte kAnimCmd_84639E4 @ 84639E4
    .4byte kAnimCmd_84639EC @ 84639EC

kOAM_8463A14:: @ 8463A14
    .2byte 0x0000
    .2byte 0x0000
    .2byte 0x0000
    .2byte 0x0000

kAnimCmd_8463A1C:: @ 8463A1C
    obj_image_anim_frame 0, 20
    obj_image_anim_jump 0

kAnimCmd_8463A24:: @ 8463A24
    obj_image_anim_frame 1, 20
    obj_image_anim_jump 0

kAnimCmd_8463A2C:: @ 8463A2C
    obj_image_anim_frame 2, 20
    obj_image_anim_jump 0

kAnimCmd_8463A34:: @ 8463A34
    obj_image_anim_frame 3, 20
    obj_image_anim_jump 0

kAnimCmd_8463A3C:: @ 8463A3C
    obj_image_anim_frame 4, 20
    obj_image_anim_jump 0

kAnimCmd_8463A44:: @ 8463A44
    obj_image_anim_frame 5, 20
    obj_image_anim_jump 0

kAnimCmd_8463A4C:: @ 8463A4C
    obj_image_anim_frame 6, 20
    obj_image_anim_jump 0

kAnimCmd_8463A54:: @ 8463A54
    obj_image_anim_frame 7, 20
    obj_image_anim_jump 0

kAnimCmd_8463A5C:: @ 8463A5C
    obj_image_anim_frame 8, 20
    obj_image_anim_jump 0

kAnimCmd_8463A64:: @ 8463A64
    obj_image_anim_frame 9, 20
    obj_image_anim_jump 0

kAnimCmd_8463A6C:: @ 8463A6C
    obj_image_anim_frame 10, 20
    obj_image_anim_jump 0

kAnimCmd_8463A74:: @ 8463A74
    obj_image_anim_frame 11, 20
    obj_image_anim_jump 0

kAnimCmds_8463A7C:: @ 8463A7C
    .4byte kAnimCmd_8463A1C @ 8463A1C
    .4byte kAnimCmd_8463A24 @ 8463A24
    .4byte kAnimCmd_8463A2C @ 8463A2C
    .4byte kAnimCmd_8463A34 @ 8463A34
    .4byte kAnimCmd_8463A3C @ 8463A3C
    .4byte kAnimCmd_8463A44 @ 8463A44
    .4byte kAnimCmd_8463A4C @ 8463A4C
    .4byte kAnimCmd_8463A54 @ 8463A54
    .4byte kAnimCmd_8463A5C @ 8463A5C
    .4byte kAnimCmd_8463A64 @ 8463A64
    .4byte kAnimCmd_8463A6C @ 8463A6C
    .4byte kAnimCmd_8463A74 @ 8463A74

kPalette_8463AAC:: @ 8463AAC
    .incbin "baserom.gba", 0x463AAC, 0x20

kPalette_8463ACC:: @ 8463ACC
    .incbin "baserom.gba", 0x463ACC, 0x20

kOAM_8463AEC:: @ 8463AEC
    .2byte 0x0000
    .2byte 0x0000
    .2byte 0x0000
    .2byte 0x0000

kAnimCmd_8463AF4:: @ 8463AF4
    obj_image_anim_frame 0, 20
    obj_image_anim_jump 0

kAnimCmds_8463AFC:: @ 8463AFC
    .4byte kAnimCmd_8463AF4 @ 8463AF4

kPalette_8463B00:: @ 8463B00
    .incbin "baserom.gba", 0x463B00, 0x20

kLzGfx_8463B20:: @ 8463B20
    .incbin "baserom.gba", 0x463B20, 0xF

    .align 2
kOAM_8463B30:: @ 8463B30
    .2byte 0x0000
    .2byte 0x0000
    .2byte 0x0000
    .2byte 0x0000

kAnimCmd_8463B38:: @ 8463B38
    obj_image_anim_frame 1, 20
    obj_image_anim_jump 0

kAnimCmds_8463B40:: @ 8463B40
    .4byte kAnimCmd_8463B38 @ 8463B38

kPalette_8463B44:: @ 8463B44
    .incbin "baserom.gba", 0x463B44, 0x20

kLzGfx_8463B64:: @ 8463B64
    .incbin "baserom.gba", 0x463B64, 0x24

kLzTilemap_8463B88:: @ 8463B88
    .incbin "baserom.gba", 0x463B88, 0xF8

kLzTilemap_8463C80:: @ 8463C80
    .incbin "baserom.gba", 0x463C80, 0x13C

kText_8463DBC:: @ 8463DBC
    .string "HARDY$"

kText_8463DC2:: @ 8463DC2
    .string "LONELY$"

kText_8463DC9:: @ 8463DC9
    .string "BRAVE$"

kText_8463DCF:: @ 8463DCF
    .string "ADAMANT$"

kText_8463DD7:: @ 8463DD7
    .string "NAUGHTY$"

kText_8463DDF:: @ 8463DDF
    .string "BOLD$"

kText_8463DE4:: @ 8463DE4
    .string "DOCILE$"

kText_8463DEB:: @ 8463DEB
    .string "RELAXED$"

kText_8463DF3:: @ 8463DF3
    .string "IMPISH$"

kText_8463DFA:: @ 8463DFA
    .string "LAX$"

kText_8463DFE:: @ 8463DFE
    .string "TIMID$"

kText_8463E04:: @ 8463E04
    .string "HASTY$"

kText_8463E0A:: @ 8463E0A
    .string "SERIOUS$"

kText_8463E12:: @ 8463E12
    .string "JOLLY$"

kText_8463E18:: @ 8463E18
    .string "NAIVE$"

kText_8463E1E:: @ 8463E1E
    .string "MODEST$"

kText_8463E25:: @ 8463E25
    .string "MILD$"

kText_8463E2A:: @ 8463E2A
    .string "QUIET$"

kText_8463E30:: @ 8463E30
    .string "BASHFUL$"

kText_8463E38:: @ 8463E38
    .string "RASH$"

kText_8463E3D:: @ 8463E3D
    .string "CALM$"

kText_8463E42:: @ 8463E42
    .string "GENTLE$"

kText_8463E49:: @ 8463E49
    .string "SASSY$"

kText_8463E4F:: @ 8463E4F
    .string "CAREFUL$"

kText_8463E57:: @ 8463E57
    .string "QUIRKY$"

    .align 2
kPointer_8463E60:: @ 8463E60
    .4byte kText_8463DBC @ 8463DBC
    .4byte kText_8463DC2 @ 8463DC2
    .4byte kText_8463DC9 @ 8463DC9
    .4byte kText_8463DCF @ 8463DCF
    .4byte kText_8463DD7 @ 8463DD7
    .4byte kText_8463DDF @ 8463DDF
    .4byte kText_8463DE4 @ 8463DE4
    .4byte kText_8463DEB @ 8463DEB
    .4byte kText_8463DF3 @ 8463DF3
    .4byte kText_8463DFA @ 8463DFA
    .4byte kText_8463DFE @ 8463DFE
    .4byte kText_8463E04 @ 8463E04
    .4byte kText_8463E0A @ 8463E0A
    .4byte kText_8463E12 @ 8463E12
    .4byte kText_8463E18 @ 8463E18
    .4byte kText_8463E1E @ 8463E1E
    .4byte kText_8463E25 @ 8463E25
    .4byte kText_8463E2A @ 8463E2A
    .4byte kText_8463E30 @ 8463E30
    .4byte kText_8463E38 @ 8463E38
    .4byte kText_8463E3D @ 8463E3D
    .4byte kText_8463E42 @ 8463E42
    .4byte kText_8463E49 @ 8463E49
    .4byte kText_8463E4F @ 8463E4F
    .4byte kText_8463E57 @ 8463E57

kPointer_8463EC4:: @ 8463EC4
    .4byte kText_8419B44 @ 8419B44
    .4byte kText_8419B7B @ 8419B7B
    .4byte kText_8419BAE @ 8419BAE
    .4byte kText_8419BDB @ 8419BDB

kPointer_8463ED4:: @ 8463ED4
    .4byte kText_8419A3D @ 8419A3D
    .4byte kText_8419B18 @ 8419B18
    .4byte kText_8419A6E @ 8419A6E
    .4byte kText_8419B18 @ 8419B18
    .4byte kText_8419AA2 @ 8419AA2
    .4byte kText_8419ADE @ 8419ADE
    .4byte kText_8419B18 @ 8419B18

kRBoxBar_8463EF0:: @ 8463EF0
    .byte 0x00, 0x07, 0x08
    .byte 0x00, 0x01, 0x02
    .byte 0x00, 0x03, 0x04
    .byte 0x00, 0x05, 0x06

kVRAMConfig_8463EFC:: @ 8463EFC
    .4byte 0x2E0
    .4byte 0x12AA
    .4byte 0x309B
    .4byte 0x22C9

kWindowTemplate_8463F0C:: @ 8463F0C
    window_template 0x01, 0x00, 0x00, 0x0D, 0x02, 0x07, 0x0258
    window_template 0x01, 0x13, 0x00, 0x0B, 0x02, 0x07, 0x0272
    window_template 0x01, 0x00, 0x02, 0x0F, 0x02, 0x07, 0x0288

kWindowTemplate_8463F24:: @ 8463F24
    window_template 0x02, 0x00, 0x00, 0x0D, 0x02, 0x07, 0x0258
    window_template 0x02, 0x13, 0x00, 0x0B, 0x02, 0x07, 0x0272
    window_template 0x02, 0x00, 0x02, 0x0F, 0x02, 0x07, 0x0288

kWindowTemplate_8463F3C:: @ 8463F3C
    window_template 0x00, 0x0F, 0x02, 0x0F, 0x0C, 0x06, 0x0001
    window_template 0x00, 0x01, 0x0E, 0x1C, 0x06, 0x06, 0x00B5
    window_template 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0000
    window_template 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0000

kWindowTemplate_8463F5C:: @ 8463F5C
    window_template 0x00, 0x14, 0x02, 0x0A, 0x0E, 0x06, 0x0001
    window_template 0x00, 0x06, 0x0C, 0x0E, 0x04, 0x06, 0x008D
    window_template 0x00, 0x01, 0x10, 0x1D, 0x04, 0x06, 0x00C5
    window_template 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0000

kWindowTemplate_8463F7C:: @ 8463F7C
    window_template 0x00, 0x14, 0x02, 0x0A, 0x12, 0x08, 0x0001
    window_template 0x00, 0x00, 0x07, 0x0F, 0x0D, 0x06, 0x00B5
    window_template 0x00, 0x0F, 0x02, 0x05, 0x12, 0x06, 0x0178
    window_template 0x00, 0x06, 0x04, 0x09, 0x02, 0x06, 0x01D2

kWindowTemplate_8463F9C:: @ 8463F9C
    window_template_terminator

kRBoxBar_8463FA4:: @ 8463FA4
    .byte 0x00, 0x0E, 0x0A

kRBoxBar_8463FA7:: @ 8463FA7
    .byte 0x00, 0x01, 0x02
    .byte 0x00, 0x09, 0x08
    .byte 0x00, 0x05, 0x04
    .byte 0x00, 0x02, 0x03
    .byte 0x00, 0x0B, 0x0A

    .align 2
kBasicItem_8463FB8:: @ 8463FB8
    .byte 0x00, 0x02, 0x03, 0x01, 0x04, 0x05

kBasicItem_8463FBE:: @ 8463FBE
    .byte 0xFF, 0x00, 0x01

kBasicItem_8463FC1:: @ 8463FC1
    .byte 0xFE, 0xFF, 0x00, 0x01, 0x02

kBasicItem_8463FC6:: @ 8463FC6
    .byte 0xFD, 0xFE, 0xFF, 0x00, 0x01, 0x02, 0x03

kBasicItem_8463FCD:: @ 8463FCD
    .byte 0xFB, 0xFD, 0xFF, 0x00, 0x01, 0x03, 0x05

kBasicItem_8463FD4:: @ 8463FD4
    .byte 0x01, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x01, 0x01

kBasicItem_8463FDF:: @ 8463FDF
    .byte 0x02, 0x01, 0x00, 0xFF, 0xFE, 0x00, 0xFE, 0xFF, 0x00, 0x01, 0x02

kBasicItem_8463FEA:: @ 8463FEA
    .byte 0x02, 0x01, 0x01, 0x00, 0xFF, 0xFF, 0xFE, 0x00, 0xFE, 0xFF, 0xFF, 0x00, 0x01, 0x01, 0x02, 0x00, 0x00, 0x00

kPointer_8463FFC:: @ 8463FFC
    .4byte kUnkPal_8E9B578 @ 8E9B578
    .4byte kPalette_8463AAC @ 8463AAC
    .4byte kPalette_8463ACC @ 8463ACC

kGfx_8464008:: @ 8464008
    .incbin "baserom.gba", 0x464008, 0x120

kPalette_8464128:: @ 8464128
    .incbin "baserom.gba", 0x464128, 0x20

kBasicItem_8464148:: @ 8464148
    .2byte 0x0058, 0x0001, 0x0059, 0x0002, 0x005A, 0x0003, 0x005B, 0x0004, 0x005C, 0x0005, 0x005D, 0x0006, 0x005E, 0x0007, 0x005F, 0x0008, 0x0060, 0x0009, 0x0061, 0x000A, 0x0062, 0x000B, 0x0063, 0x000F, 0x0064, 0x0015, 0x0065, 0x000C, 0x0066, 0x000D, 0x0067, 0x000E, 0x0068, 0x000F, 0x0069, 0x0010, 0x006A, 0x0011, 0x006B, 0x0012, 0x006C, 0x0013, 0x006D, 0x0014, 0x006E, 0x0015, 0x006F, 0x0016, 0x0070, 0x0017, 0x0071, 0x0018, 0x0072, 0x0019, 0x0073
    .2byte 0x001A, 0x0074, 0x001B, 0x0075, 0x001C, 0x0076, 0x001D, 0x0077, 0x001E, 0x0078, 0x001F, 0x0079, 0x0020, 0x007A, 0x0021, 0x007B, 0x0022, 0x007C, 0x0023, 0x007D, 0x0024, 0x007E, 0x0025, 0x007F, 0x0027, 0x0080, 0x0006, 0x0081, 0x000B, 0x0082, 0x000B, 0x0083, 0x0026, 0x0084, 0x002F, 0x0085, 0x0007, 0x0086, 0x000B, 0x0087, 0x002E, 0x0088, 0x002C, 0x0089, 0x002F, 0x008A, 0x0029, 0x008B, 0x002D, 0x008C, 0x002B, 0x008D, 0x0028, 0x008E, 0x002A

kUnknown_8464224:: @ 8464224
    .incbin "baserom.gba", 0x464224, 0x10 @ null

kUnknown_8464234:: @ 8464234
    .incbin "baserom.gba", 0x464234, 0x8 @ null

kUnknown_846423C:: @ 846423C
    .incbin "baserom.gba", 0x46423C, 0x14 @ null

kUnknown_8464250:: @ 8464250
    .incbin "baserom.gba", 0x464250, 0x8 @ null

kUnknown_8464258:: @ 8464258
    .incbin "baserom.gba", 0x464258, 0x1C @ null

kUnknown_8464274:: @ 8464274
    .incbin "baserom.gba", 0x464274, 0x1C @ null

kUnknown_8464290:: @ 8464290
    .incbin "baserom.gba", 0x464290, 0x2C @ null

kBasicItem_84642BC:: @ 84642BC
    .4byte kUnknown_8464224
    .4byte 0x00000004
    .4byte kUnknown_8464234
    .4byte 0x00000002
    .4byte kUnknown_846423C
    .4byte 0x00000005
    .4byte kUnknown_8464250
    .4byte 0x00000002
    .4byte kUnknown_8464258
    .4byte 0x00000007
    .4byte kUnknown_8464274
    .4byte 0x00000007
    .4byte kUnknown_8464290
    .4byte 0x0000000B

UNK_84642F4:: @ 84642F4
    .incbin "baserom.gba", 0x4642F4, 0xC @ null

UNK_8464300:: @ 8464300
    .incbin "baserom.gba", 0x464300, 0x4C @ null

kVRAMConfig_846434C:: @ 846434C
    .4byte 0x11F0
    .4byte 0x21ED
    .4byte 0x1D2

kPointer_8464358:: @ 8464358
    .4byte c3_813DD74 @ 813DD75
    .4byte c3_813E37C @ 813E37D
    .4byte c3_813E428 @ 813E429
    .4byte c3_813E3FC @ 813E3FD
    .4byte c3_813DD74 @ 813DD75

kPointer_846436C:: @ 846436C
    .4byte sub_813E0DC @ 813E0DD
    .4byte sub_813DFC8 @ 813DFC9

kPointer_8464374:: @ 8464374
    .4byte sub_813E768 @ 813E769
    .4byte sub_813E568 @ 813E569

kPointerSet_846437C:: @ 846437C
    .4byte kText_84161A0, sub_813DE0C
    .4byte kText_84161A4, sub_813DEBC
    .4byte kText_84161B2, sub_813E200
    .4byte kText_84161C8, sub_813E320
    .4byte kText_84161CD, NULL

UNK_84643A4:: @ 84643A4
    .incbin "baserom.gba", 0x4643A4, 0x4 @ null

UNK_84643A8:: @ 84643A8
    .incbin "baserom.gba", 0x4643A8, 0x4 @ null

UNK_84643AC:: @ 84643AC
    .incbin "baserom.gba", 0x4643AC, 0x4 @ null

UNK_84643B0:: @ 84643B0
    .incbin "baserom.gba", 0x4643B0, 0x4 @ null

UNK_84643B4:: @ 84643B4
    .incbin "baserom.gba", 0x4643B4, 0x4 @ null

kWindowTemplate_84643B8:: @ 84643B8
    window_template 0x00, 0x0B, 0x01, 0x12, 0x0E, 0x0F, 0x0027
    window_template 0x00, 0x05, 0x10, 0x19, 0x04, 0x0F, 0x0123
    window_template 0x02, 0x01, 0x01, 0x09, 0x02, 0x0F, 0x0187
    window_template_terminator

kWindowTemplate_84643D8:: @ 84643D8
    window_template 0x02, 0x18, 0x0F, 0x05, 0x04, 0x0F, 0x01D1
    window_template 0x02, 0x11, 0x09, 0x0C, 0x04, 0x0F, 0x01D1
    window_template 0x02, 0x01, 0x01, 0x08, 0x03, 0x0C, 0x0201
    window_template 0x02, 0x17, 0x0F, 0x06, 0x04, 0x0F, 0x0219
    window_template 0x02, 0x15, 0x09, 0x06, 0x04, 0x0F, 0x0219
    window_template 0x02, 0x02, 0x0F, 0x1A, 0x04, 0x0F, 0x0231
    window_template 0x02, 0x06, 0x0F, 0x0E, 0x04, 0x0C, 0x0231
    window_template 0x02, 0x06, 0x0F, 0x0F, 0x04, 0x0C, 0x0269
    window_template 0x02, 0x06, 0x0F, 0x10, 0x04, 0x0C, 0x02A5
    window_template 0x02, 0x06, 0x0F, 0x17, 0x04, 0x0C, 0x02E5
    window_template 0x02, 0x16, 0x11, 0x07, 0x02, 0x0F, 0x0199
    window_template 0x02, 0x16, 0x0F, 0x07, 0x04, 0x0F, 0x0199
    window_template 0x02, 0x16, 0x0D, 0x07, 0x06, 0x0F, 0x0199
    window_template 0x02, 0x16, 0x0B, 0x07, 0x08, 0x0F, 0x0199

kBasicItem_8464448:: @ 8464448
    .byte 0x00, 0x01, 0x02, 0x00
    .byte 0x02, 0x03, 0x00, 0x03
    .byte 0x02, 0x00, 0x00, 0x00

kOAM_8464454:: @ 8464454
    .2byte 0x0100
    .2byte 0xC000
    .2byte 0x0400
    .2byte 0x0000

kAnimCmd_846445C:: @ 846445C
    obj_image_anim_frame 0, 0
    obj_image_anim_end

kAnimCmds_8464464:: @ 8464464
    .4byte kAnimCmd_846445C @ 846445C

kAffineAnimCmd_8464468:: @ 8464468
    obj_rot_scal_anim_frame 256, 256, 0, 0
    obj_rot_scal_anim_end

kAffineAnimCmd_8464478:: @ 8464478
    obj_rot_scal_anim_frame 0, 0, -2, 2
    obj_rot_scal_anim_frame 0, 0, 2, 4
    obj_rot_scal_anim_frame 0, 0, -2, 4
    obj_rot_scal_anim_frame 0, 0, 2, 2
    obj_rot_scal_anim_end

kAffineAnimCmds_84644A0:: @ 84644A0
    .4byte kAffineAnimCmd_8464468 @ 8464468
    .4byte kAffineAnimCmd_8464478 @ 8464478

kObjTiles_84644A8:: @ 84644A8
    obj_tiles kUnkGfx_8E8560C, 0x800, 100

kObjPal_84644B0:: @ 84644B0
    obj_pal kUnkPal_8E85C1C, 100

kSpriteTemplate_84644B8:: @ 84644B8
    spr_template 100, 100, kOAM_8464454, kAnimCmds_8464464, NULL, kAffineAnimCmds_84644A0, objc_nullsub

kUGfx_84644D0:: @ 84644D0
    .incbin "baserom.gba", 0x4644D0, 0x280

kAnimCmd_8464750:: @ 8464750
    obj_image_anim_frame 0, 10
    obj_image_anim_end

kAnimCmd_8464758:: @ 8464758
    obj_image_anim_frame 4, 10
    obj_image_anim_end

kAnimCmd_8464760:: @ 8464760
    obj_image_anim_frame 8, 10
    obj_image_anim_end

kAnimCmd_8464768:: @ 8464768
    obj_image_anim_frame 12, 10
    obj_image_anim_end

kAnimCmd_8464770:: @ 8464770
    obj_image_anim_frame 16, 10
    obj_image_anim_end

kAnimCmds_8464778:: @ 8464778
    .4byte kAnimCmd_8464750 @ 8464750
    .4byte kAnimCmd_8464758 @ 8464758
    .4byte kAnimCmd_8464760 @ 8464760
    .4byte kAnimCmd_8464768 @ 8464768
    .4byte kAnimCmd_8464770 @ 8464770

kOAM_846478C:: @ 846478C
    .2byte 0x0100
    .2byte 0x4000
    .2byte 0x0000
    .2byte 0x0000

kAffineAnimCmd_8464794:: @ 8464794
    obj_rot_scal_anim_frame 0, 0, 0, 1
    obj_rot_scal_anim_end

kAffineAnimCmd_84647A4:: @ 84647A4
    obj_rot_scal_anim_frame 0, 0, 64, 1
    obj_rot_scal_anim_end

kAffineAnimCmd_84647B4:: @ 84647B4
    obj_rot_scal_anim_frame 0, 0, -128, 1
    obj_rot_scal_anim_end

kAffineAnimCmd_84647C4:: @ 84647C4
    obj_rot_scal_anim_frame 0, 0, -64, 1
    obj_rot_scal_anim_end

kAffineAnimCmds_84647D4:: @ 84647D4
    .4byte kAffineAnimCmd_8464794 @ 8464794
    .4byte kAffineAnimCmd_84647A4 @ 84647A4
    .4byte kAffineAnimCmd_84647B4 @ 84647B4
    .4byte kAffineAnimCmd_84647C4 @ 84647C4

kSpriteTemplate_84647E4:: @ 84647E4
    spr_template 2000, 65535, kOAM_846478C, kAnimCmds_8464778, NULL, kAffineAnimCmds_84647D4, sub_813F54C

kObjTiles_84647FC:: @ 84647FC
    obj_tiles kUGfx_84644D0, 0x280, 2000

kWindowTemplate_8464804:: @ 8464804
    window_template 0x00, 0x01, 0x01, 0x08, 0x03, 0x0F, 0x0027
    window_template 0x00, 0x01, 0x0B, 0x0D, 0x02, 0x0F, 0x003F
    window_template 0x00, 0x02, 0x0F, 0x1A, 0x04, 0x0E, 0x0059
    window_template 0x00, 0x11, 0x09, 0x0C, 0x04, 0x0E, 0x00C1
    window_template 0x00, 0x0B, 0x01, 0x11, 0x0C, 0x0E, 0x00F1
    window_template 0x00, 0x05, 0x0E, 0x19, 0x06, 0x0F, 0x01BD
    window_template_terminator

kWindowTemplate_846483C:: @ 846483C
    window_template 0x00, 0x01, 0x01, 0x08, 0x03, 0x0F, 0x0027
    window_template 0x00, 0x01, 0x0B, 0x0D, 0x02, 0x0F, 0x003F
    window_template 0x00, 0x02, 0x0F, 0x1A, 0x04, 0x0E, 0x0059
    window_template 0x00, 0x11, 0x09, 0x0C, 0x04, 0x0E, 0x00C1
    window_template 0x00, 0x0B, 0x01, 0x11, 0x0A, 0x0E, 0x00F1
    window_template 0x00, 0x0C, 0x0C, 0x12, 0x08, 0x0E, 0x019B
    window_template 0x00, 0x01, 0x0E, 0x0A, 0x04, 0x0E, 0x022B
    window_template_terminator

kWindowTemplate_846487C:: @ 846487C
    window_template 0x00, 0x15, 0x09, 0x06, 0x04, 0x0E, 0x00C1

UNK_8464884:: @ 8464884
    .incbin "baserom.gba", 0x464884, 0xC @ null

kBasicItem_8464890:: @ 8464890
    .byte 0x00, 0x03, 0x00, 0x06, 0x03, 0x06, 0x01, 0x04, 0x01, 0x07, 0x04, 0x07, 0x02, 0x05, 0x02
    .byte 0x08, 0x05, 0x08, 0x00, 0x04, 0x00, 0x08, 0x04, 0x08, 0x02, 0x04, 0x02, 0x06, 0x04, 0x06

UNK_84648AE:: @ 84648AE
    .incbin "baserom.gba", 0x4648AE, 0xF @ null

UNK_84648BD:: @ 84648BD
    .incbin "baserom.gba", 0x4648BD, 0x15 @ null

UNK_84648D2:: @ 84648D2
    .incbin "baserom.gba", 0x4648D2, 0x54 @ null

UNK_8464926:: @ 8464926
    .incbin "baserom.gba", 0x464926, 0x40 @ null

UNK_8464966:: @ 8464966
    .incbin "baserom.gba", 0x464966, 0xE @ null

kPalette_8464974:: @ 8464974
    .incbin "baserom.gba", 0x464974, 0x20

kPalette_8464994:: @ 8464994
    .incbin "baserom.gba", 0x464994, 0x20

kPalette_84649B4:: @ 84649B4
    .incbin "baserom.gba", 0x4649B4, 0x20

kPalette_84649D4:: @ 84649D4
    .incbin "baserom.gba", 0x4649D4, 0x20

kPalette_84649F4:: @ 84649F4
    .incbin "baserom.gba", 0x4649F4, 0x20

kUGfx_8464A14:: @ 8464A14
    .incbin "baserom.gba", 0x464A14, 0x638

kPalette_846504C:: @ 846504C
    .incbin "baserom.gba", 0x46504C, 0x20

kUGfx_846506C:: @ 846506C
    .incbin "baserom.gba", 0x46506C, 0x4B6

    .align 2
kPalette_8465524:: @ 8465524
    .incbin "baserom.gba", 0x465524, 0x20

kUGfx_8465544:: @ 8465544
    .incbin "baserom.gba", 0x465544, 0x6C

kObjTiles_84655B0:: @ 84655B0
    obj_tiles kUGfx_8464A14, 0xE00, 0
    obj_tiles kUGfx_846506C, 0xC00, 1
    obj_tiles kUGfx_8465544, 0x280, 2

kObjPal_84655C8:: @ 84655C8
    obj_pal kPalette_8464974, 0
    obj_pal kPalette_8464994, 1
    obj_pal kPalette_84649B4, 2
    obj_pal kPalette_84649D4, 3
    obj_pal kPalette_84649F4, 4
    obj_pal kPalette_846504C, 5
    obj_pal kPalette_8465524, 6
    obj_pal NULL, 0

UNK_8465608:: @ 8465608
    .incbin "baserom.gba", 0x465608, 0xE @ null

kBasicItem_8465616:: @ 8465616
    .2byte 0x0120, 0x011F, 0x011E, 0x011D, 0x011C, 0x011B, 0x011A, 0x0119, 0x0118, 0x0117, 0x0116, 0x0115, 0x0114, 0x0113, 0x0112, 0x0111, 0x0110, 0x010F, 0x010E, 0x010D, 0x010C, 0x010B, 0x010A, 0x0109, 0x0108, 0x0107, 0x0106, 0x0105, 0x0104, 0x0103, 0x0102, 0x0101, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0101, 0x0102, 0x0103, 0x0104, 0x0105, 0x0106, 0x0107, 0x0108, 0x0109, 0x010A, 0x010B, 0x010C, 0x010D, 0x010E, 0x010F, 0x0110, 0x0111, 0x0112, 0x0113, 0x0114, 0x0115, 0x0116, 0x0117, 0x0118, 0x0119, 0x011A, 0x011B, 0x011C, 0x011D, 0x011E, 0x011F, 0x0120

UNK_84656D6:: @ 84656D6
    .incbin "baserom.gba", 0x4656D6, 0x62 @ null

kOAM_8465738:: @ 8465738
    .2byte 0x0100
    .2byte 0x8000
    .2byte 0x0C00
    .2byte 0x0000

kAnimCmd_8465740:: @ 8465740
    obj_image_anim_frame 0, 4
    obj_image_anim_end

kAnimCmd_8465748:: @ 8465748
    obj_image_anim_frame 16, 4
    obj_image_anim_end

kAnimCmd_8465750:: @ 8465750
    obj_image_anim_frame 32, 4
    obj_image_anim_end

kAnimCmd_8465758:: @ 8465758
    obj_image_anim_frame 48, 4
    obj_image_anim_end

kAnimCmd_8465760:: @ 8465760
    obj_image_anim_frame 64, 4
    obj_image_anim_end

kAnimCmd_8465768:: @ 8465768
    obj_image_anim_frame 80, 4
    obj_image_anim_end

kAnimCmd_8465770:: @ 8465770
    obj_image_anim_frame 96, 4
    obj_image_anim_end

kAnimCmd_8465778:: @ 8465778
    obj_image_anim_frame 32, 4
    obj_image_anim_end

kAnimCmd_8465780:: @ 8465780
    obj_image_anim_frame 48, 4
    obj_image_anim_end

kAnimCmd_8465788:: @ 8465788
    obj_image_anim_frame 64, 4
    obj_image_anim_end

kAnimCmd_8465790:: @ 8465790
    obj_image_anim_frame 80, 4
    obj_image_anim_end

kAnimCmd_8465798:: @ 8465798
    obj_image_anim_frame 96, 4
    obj_image_anim_end

kAnimCmds_84657A0:: @ 84657A0
    .4byte kAnimCmd_8465740 @ 8465740
    .4byte kAnimCmd_8465748 @ 8465748
    .4byte kAnimCmd_8465750 @ 8465750
    .4byte kAnimCmd_8465758 @ 8465758
    .4byte kAnimCmd_8465760 @ 8465760
    .4byte kAnimCmd_8465768 @ 8465768
    .4byte kAnimCmd_8465770 @ 8465770
    .4byte kAnimCmd_8465778 @ 8465778
    .4byte kAnimCmd_8465780 @ 8465780
    .4byte kAnimCmd_8465788 @ 8465788
    .4byte kAnimCmd_8465790 @ 8465790
    .4byte kAnimCmd_8465798 @ 8465798

kAffineAnimCmd_84657D0:: @ 84657D0
    obj_rot_scal_anim_frame 256, 256, 0, 1
    obj_rot_scal_anim_end

kAffineAnimCmds_84657E0:: @ 84657E0
    .4byte kAffineAnimCmd_84657D0 @ 84657D0

kSpriteTemplate_84657E4:: @ 84657E4
    spr_template 0, 0, kOAM_8465738, kAnimCmds_84657A0, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kOAM_84657FC:: @ 84657FC
    .2byte 0x8000
    .2byte 0x0000
    .2byte 0x0400
    .2byte 0x0000

kAnimCmd_8465804:: @ 8465804
    obj_image_anim_frame 0, 4
    obj_image_anim_end

kAnimCmd_846580C:: @ 846580C
    obj_image_anim_frame 2, 4
    obj_image_anim_end

kAnimCmd_8465814:: @ 8465814
    obj_image_anim_frame 4, 4
    obj_image_anim_end

kAnimCmd_846581C:: @ 846581C
    obj_image_anim_frame 6, 4
    obj_image_anim_end

kAnimCmd_8465824:: @ 8465824
    obj_image_anim_frame 8, 4
    obj_image_anim_end

kAnimCmd_846582C:: @ 846582C
    obj_image_anim_frame 10, 4
    obj_image_anim_end

kAnimCmd_8465834:: @ 8465834
    obj_image_anim_frame 12, 4
    obj_image_anim_end

kAnimCmd_846583C:: @ 846583C
    obj_image_anim_frame 14, 4
    obj_image_anim_end

kAnimCmd_8465844:: @ 8465844
    obj_image_anim_frame 16, 4
    obj_image_anim_end

kAnimCmd_846584C:: @ 846584C
    obj_image_anim_frame 18, 4
    obj_image_anim_end

kAnimCmds_8465854:: @ 8465854
    .4byte kAnimCmd_8465804 @ 8465804
    .4byte kAnimCmd_846580C @ 846580C
    .4byte kAnimCmd_8465814 @ 8465814
    .4byte kAnimCmd_846581C @ 846581C
    .4byte kAnimCmd_8465824 @ 8465824
    .4byte kAnimCmd_846582C @ 846582C
    .4byte kAnimCmd_8465834 @ 8465834
    .4byte kAnimCmd_846583C @ 846583C
    .4byte kAnimCmd_8465844 @ 8465844
    .4byte kAnimCmd_846584C @ 846584C

kSpriteTemplate_846587C:: @ 846587C
    spr_template 2, 6, kOAM_84657FC, kAnimCmds_8465854, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kOAM_8465894:: @ 8465894
    .2byte 0x0000
    .2byte 0x8000
    .2byte 0x0400
    .2byte 0x0000

kAnimCmd_846589C:: @ 846589C
    obj_image_anim_frame 0, 4
    obj_image_anim_end

kAnimCmd_84658A4:: @ 84658A4
    obj_image_anim_frame 0, 24
    obj_image_anim_frame 16, 24
    obj_image_anim_jump 0

kAnimCmd_84658B0:: @ 84658B0
    obj_image_anim_frame 32, 28
    obj_image_anim_frame 48, 28
    obj_image_anim_jump 0

kAnimCmd_84658BC:: @ 84658BC
    obj_image_anim_frame 64, 12
    obj_image_anim_frame 80, 12
    obj_image_anim_jump 0

kAnimCmds_84658C8:: @ 84658C8
    .4byte kAnimCmd_846589C @ 846589C
    .4byte kAnimCmd_84658A4 @ 84658A4
    .4byte kAnimCmd_84658B0 @ 84658B0
    .4byte kAnimCmd_84658BC @ 84658BC

kSpriteTemplate_84658D8:: @ 84658D8
    spr_template 1, 5, kOAM_8465894, kAnimCmds_84658C8, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kPointer_84658F0:: @ 84658F0
    .4byte sub_8141198 @ 8141199
    .4byte sub_8141460 @ 8141461
    .4byte sub_81414AC @ 81414AD
    .4byte sub_81414EC @ 81414ED
    .4byte sub_81414FC @ 81414FD
    .4byte sub_8141518 @ 8141519
    .4byte sub_8141558 @ 8141559
    .4byte sub_8141568 @ 8141569
    .4byte sub_8141578 @ 8141579
    .4byte sub_8141584 @ 8141585
    .4byte sub_81415C8 @ 81415C9
    .4byte sub_8141610 @ 8141611
    .4byte sub_8141650 @ 8141651
    .4byte sub_8141690 @ 8141691
    .4byte sub_81416C8 @ 81416C9
    .4byte sub_8141764 @ 8141765

kPalette_8465930:: @ 8465930
    .incbin "baserom.gba", 0x465930, 0xA0

kLzGfx_84659D0:: @ 84659D0
    .incbin "baserom.gba", 0x4659D0, 0x804

kLzTilemap_84661D4:: @ 84661D4
    .incbin "baserom.gba", 0x4661D4, 0x2E8

kPalette_84664BC:: @ 84664BC
    .incbin "baserom.gba", 0x4664BC, 0x20

kPalette_84664DC:: @ 84664DC
    .incbin "baserom.gba", 0x4664DC, 0x60

kLzGfx_846653C:: @ 846653C
    .incbin "baserom.gba", 0x46653C, 0x81

    .align 2
kPalette_84665C0:: @ 84665C0
    .incbin "baserom.gba", 0x4665C0, 0x60

kLzGfx_8466620:: @ 8466620
    .incbin "baserom.gba", 0x466620, 0x375

    .align 2
kLzTilemap_8466998:: @ 8466998
    .incbin "baserom.gba", 0x466998, 0x176

    .align 2
kVRAMConfig_8466B10:: @ 8466B10
    .4byte 0x1D0
    .4byte 0x31FF
    .4byte 0x21EA
    .4byte 0x1C5

kWindowTemplate_8466B20:: @ 8466B20
    window_template 0x00, 0x05, 0x0F, 0x14, 0x04, 0x0F, 0x004F
    window_template 0x00, 0x00, 0x00, 0x1E, 0x02, 0x0E, 0x0013
    window_template_terminator

kUnknown_8466B38:: @ 8466B38
    .incbin "baserom.gba", 0x466B38, 0x28 @ null

kUnknown_8466B60:: @ 8466B60
    .incbin "baserom.gba", 0x466B60, 0x2C @ null

kUnknown_8466B8C:: @ 8466B8C
    .incbin "baserom.gba", 0x466B8C, 0x2C @ null

kUnknown_8466BB8:: @ 8466BB8
    .incbin "baserom.gba", 0x466BB8, 0x2C @ null

kUnknown_8466BE4:: @ 8466BE4
    .incbin "baserom.gba", 0x466BE4, 0x28 @ null

kBasicItem_8466C0C:: @ 8466C0C
    .4byte kUnknown_8466B38
    .4byte 0x00000014
    .4byte kUnknown_8466B60
    .4byte 0x00000016
    .4byte kUnknown_8466B8C
    .4byte 0x00000016
    .4byte kUnknown_8466BB8
    .4byte 0x00000016
    .4byte kUnknown_8466BE4
    .4byte 0x00000014

UNK_8466C34:: @ 8466C34
    .incbin "baserom.gba", 0x466C34, 0x4 @ null

kWindowTemplate_8466C38:: @ 8466C38
    window_template 0x00, 0x13, 0x09, 0x06, 0x04, 0x0F, 0x009F

UNK_8466C40:: @ 8466C40
    .incbin "baserom.gba", 0x466C40, 0x18 @ null

kRoamerLocations:: @ 8466C58
    .byte 0x13, 0x14, 0x27, 0x29, 0xFF, 0xFF, 0xFF
    .byte 0x14, 0x13, 0x15, 0x29, 0xFF, 0xFF, 0xFF
    .byte 0x15, 0x14, 0x16, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0x16, 0x15, 0x17, 0x1B, 0x2B, 0xFF, 0xFF
    .byte 0x17, 0x16, 0x18, 0x19, 0x1A, 0x1B, 0x2B
    .byte 0x18, 0x17, 0x19, 0x1A, 0x1D, 0xFF, 0xFF
    .byte 0x19, 0x17, 0x18, 0x1A, 0x22, 0xFF, 0xFF
    .byte 0x1A, 0x17, 0x18, 0x19, 0x1C, 0x1E, 0xFF
    .byte 0x1B, 0x16, 0x17, 0x1C, 0x2B, 0xFF, 0xFF
    .byte 0x1C, 0x1A, 0x1B, 0x1E, 0xFF, 0xFF, 0xFF
    .byte 0x1D, 0x18, 0x1E, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0x1E, 0x1C, 0x1D, 0x1F, 0xFF, 0xFF, 0xFF
    .byte 0x1F, 0x1E, 0x20, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0x20, 0x1F, 0x21, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0x21, 0x20, 0x24, 0x25, 0xFF, 0xFF, 0xFF
    .byte 0x22, 0x19, 0x23, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0x23, 0x22, 0x24, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0x24, 0x21, 0x23, 0x25, 0xFF, 0xFF, 0xFF
    .byte 0x25, 0x21, 0x24, 0x26, 0xFF, 0xFF, 0xFF
    .byte 0x26, 0x25, 0x27, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0x27, 0x13, 0x26, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0x29, 0x13, 0x14, 0x2A, 0xFF, 0xFF, 0xFF
    .byte 0x2A, 0x29, 0x14, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0x2B, 0x16, 0x17, 0x1B, 0xFF, 0xFF, 0xFF
    .byte 0x2C, 0x2B, 0x1B, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF

    .align 2
kPalette_8466D10:: @ 8466D10
    .incbin "baserom.gba", 0x466D10, 0x20

kLzGfx_8466D30:: @ 8466D30
    .incbin "baserom.gba", 0x466D30, 0x30

kVRAMConfig_8466D60:: @ 8466D60
    .4byte 0xF8
    .4byte 0x10E1
    .4byte 0x20D2
    .4byte 0x30C3

kWindowTemplate_8466D70:: @ 8466D70
    window_template 0x00, 0x00, 0x00, 0x1E, 0x02, 0x0F, 0x0013
    window_template 0x00, 0x01, 0x0F, 0x1C, 0x04, 0x0F, 0x004F
    window_template 0x00, 0x00, 0x0F, 0x1E, 0x05, 0x0D, 0x004F
    window_template_terminator

kWindowTemplate_8466D90:: @ 8466D90
    window_template 0x00, 0x01, 0x0F, 0x1C, 0x04, 0x0F, 0x00E5

kWindowTemplate_8466D98:: @ 8466D98
    window_template 0x00, 0x01, 0x0F, 0x14, 0x04, 0x0F, 0x00E5

kWindowTemplate_8466DA0:: @ 8466DA0
    window_template 0x00, 0x01, 0x0F, 0x13, 0x04, 0x0F, 0x00E5

UNK_8466DA8:: @ 8466DA8
    .incbin "baserom.gba", 0x466DA8, 0x8 @ null

UNK_8466DB0:: @ 8466DB0
    .incbin "baserom.gba", 0x466DB0, 0x8 @ null

kWindowTemplate_8466DB8:: @ 8466DB8
    window_template 0x00, 0x16, 0x0C, 0x07, 0x07, 0x0E, 0x0155

kWindowTemplate_8466DC0:: @ 8466DC0
    window_template 0x00, 0x16, 0x0E, 0x07, 0x05, 0x0E, 0x0155

kWindowTemplate_8466DC8:: @ 8466DC8
    window_template 0x00, 0x16, 0x0F, 0x07, 0x04, 0x0E, 0x0155

kListMenuItem_8466DD0:: @ 8466DD0
    .4byte kText_841EDDD, 0
    .4byte kText_841EDEA, 1
    .4byte kText_841EE14, -2

kListMenuItem_8466DE8:: @ 8466DE8
    .4byte kText_841EDF6, 0
    .4byte kText_841EE0D, 1
    .4byte kText_84161C1, -2

kListMenuTemplate_8466E00:: @ 8466E00
    .4byte NULL
    .4byte sub_8107AEC
    .4byte NULL
    .2byte 3, 3

    .incbin "baserom.gba", 0x466E10, 0x8 @ unknown

kListMenuItem_8466E18:: @ 8466E18
    .4byte kText_841EE19, 0
    .4byte kText_841EE21, 1
    .4byte kText_841EE26, 2
    .4byte kText_84161C1, -2

kListMenuItem_8466E38:: @ 8466E38
    .4byte kText_841EE19, 0
    .4byte kText_841EE26, 2
    .4byte kText_84161C1, -2

kListMenuItem_8466E50:: @ 8466E50
    .4byte kText_841EE19, 0
    .4byte kText_841EE21, 1
    .4byte kText_84161C1, -2

kListMenuItem_8466E68:: @ 8466E68
    .4byte kText_841EE19, 0
    .4byte kText_84161C1, -2

kListMenuTemplate_8466E78:: @ 8466E78
    .4byte kListMenuItem_8466E18
    .4byte sub_8107AEC
    .4byte NULL
    .2byte 4, 4

    .incbin "baserom.gba", 0x466E88, 0x8 @ unknown

kListMenuTemplate_8466E90:: @ 8466E90
    .4byte kListMenuItem_8466E38
    .4byte sub_8107AEC
    .4byte NULL
    .2byte 3, 3

    .incbin "baserom.gba", 0x466EA0, 0x8 @ unknown

kListMenuTemplate_8466EA8:: @ 8466EA8
    .4byte kListMenuItem_8466E50
    .4byte sub_8107AEC
    .4byte NULL
    .2byte 3, 3

    .incbin "baserom.gba", 0x466EB8, 0x8 @ unknown

kListMenuTemplate_8466EC0:: @ 8466EC0
    .4byte kListMenuItem_8466E68
    .4byte sub_8107AEC
    .4byte NULL
    .2byte 2, 2

    .incbin "baserom.gba", 0x466ED0, 0x8 @ unknown

kPointer_8466ED8:: @ 8466ED8
    .4byte kText_841E5FD @ 841E5FD
    .4byte kText_841E63F @ 841E63F
    .4byte kText_841E669 @ 841E669
    .4byte kText_841E685 @ 841E685

UNK_8466EE8:: @ 8466EE8
    .incbin "baserom.gba", 0x466EE8, 0x8 @ null

UNK_8466EF0:: @ 8466EF0
    .incbin "baserom.gba", 0x466EF0, 0x10 @ null

kBasicItem_8466F00:: @ 8466F00
    .2byte 0x02A7, 0x02A8, 0x02A9, 0x02AA, 0x02AB, 0x02AC, 0x02AD, 0x02AE, 0x02AF, 0x02B0, 0x02B1, 0x02B2, 0x02B3, 0x02B4, 0x02B5, 0x02B6, 0x02B7, 0x02B8, 0x02B9, 0x02BA

kAsciiString_8466F28:: @ 8466F28
    debug_path
    .asciz "mevent.c"

    .align 2
kAsciiString_8466F5C:: @ 8466F5C
    .asciz "0"

    .align 2
kPointer_8466F60:: @ 8466F60
    .4byte sub_8144C34 @ 8144C35
    .4byte sub_8144C5C @ 8144C5D
    .4byte sub_8144C60 @ 8144C61
    .4byte sub_8144C80 @ 8144C81
    .4byte sub_8144CA0 @ 8144CA1
    .4byte sub_8144E6C @ 8144E6D
    .4byte sub_8144E84 @ 8144E85
    .4byte sub_8144EBC @ 8144EBD

kAsciiString_8466F80:: @ 8466F80
    debug_path
    .asciz "mevent_server.c"

kAsciiString_8466FB8:: @ 8466FB8
    .asciz "size <= ME_SEND_BUF_SIZE"

    .align 2
kAsciiString_8466FD4:: @ 8466FD4
    .asciz "cmd->parameter == NULL"

    .align 2
kAsciiString_8466FEC:: @ 8466FEC
    .asciz "cmd->flag == FALSE"

    .align 2
kAsciiString_8467000:: @ 8467000
    .asciz "cmd->flag == FALSE && cmd->parameter == NULL"

    .align 2
kPointer_8467030:: @ 8467030
    .4byte mevent_srv_seq_0 @ 8145081
    .4byte mevent_srv_seq_1 @ 8145089
    .4byte mevent_srv_seq_2__sub_funcptr_20_then_seq_4 @ 814508D
    .4byte mevent_srv_seq_3__sub_funcptr_24_then_seq_4 @ 81450A9
    .4byte mevent_srv_seq_4 @ 81450C5

kAsciiString_8467044:: @ 8467044
    .asciz "svr->mainseqno < NELEMS(func_tbl)"

    .align 2
kRBoxBar_8467068:: @ 8467068
    .byte 0x00, 0x02, 0x03
    .byte 0x00, 0x01, 0x02

    .align 2
UNK_8467070:: @ 8467070
    .incbin "baserom.gba", 0x467070, 0x4 @ null

kWindowTemplate_8467074:: @ 8467074
    window_template 0x01, 0x01, 0x01, 0x19, 0x04, 0x0F, 0x029C
    window_template 0x01, 0x01, 0x06, 0x1C, 0x08, 0x0F, 0x01BC
    window_template 0x01, 0x01, 0x0E, 0x1C, 0x05, 0x0F, 0x0130

kPalette_846708C:: @ 846708C
    .incbin "baserom.gba", 0x46708C, 0x20

kPalette_84670AC:: @ 84670AC
    .incbin "baserom.gba", 0x4670AC, 0x20

kPalette_84670CC:: @ 84670CC
    .incbin "baserom.gba", 0x4670CC, 0x20

kPalette_84670EC:: @ 84670EC
    .incbin "baserom.gba", 0x4670EC, 0x20

kPalette_846710C:: @ 846710C
    .incbin "baserom.gba", 0x46710C, 0x20

kPalette_846712C:: @ 846712C
    .incbin "baserom.gba", 0x46712C, 0x20

kPalette_846714C:: @ 846714C
    .incbin "baserom.gba", 0x46714C, 0x20

kPalette_846716C:: @ 846716C
    .incbin "baserom.gba", 0x46716C, 0x20

kLzGfx_846718C:: @ 846718C
    .incbin "baserom.gba", 0x46718C, 0xFC

kLzTilemap_8467288:: @ 8467288
    .incbin "baserom.gba", 0x467288, 0xF2

    .align 2
kLzGfx_846737C:: @ 846737C
    .incbin "baserom.gba", 0x46737C, 0xF2

    .align 2
kLzTilemap_8467470:: @ 8467470
    .incbin "baserom.gba", 0x467470, 0xE6

    .align 2
kLzGfx_8467558:: @ 8467558
    .incbin "baserom.gba", 0x467558, 0xD3

    .align 2
kLzTilemap_846762C:: @ 846762C
    .incbin "baserom.gba", 0x46762C, 0xD2

    .align 2
kLzGfx_8467700:: @ 8467700
    .incbin "baserom.gba", 0x467700, 0x231

    .align 2
kLzTilemap_8467934:: @ 8467934
    .incbin "baserom.gba", 0x467934, 0x145

    .align 2
kLzGfx_8467A7C:: @ 8467A7C
    .incbin "baserom.gba", 0x467A7C, 0x22E

    .align 2
kLzTilemap_8467CAC:: @ 8467CAC
    .incbin "baserom.gba", 0x467CAC, 0x145

    .align 2
kPalette_8467DF4:: @ 8467DF4
    .incbin "baserom.gba", 0x467DF4, 0x20

kPalette_8467E14:: @ 8467E14
    .incbin "baserom.gba", 0x467E14, 0x20

kPalette_8467E34:: @ 8467E34
    .incbin "baserom.gba", 0x467E34, 0x20

kPalette_8467E54:: @ 8467E54
    .incbin "baserom.gba", 0x467E54, 0x20

kPalette_8467E74:: @ 8467E74
    .incbin "baserom.gba", 0x467E74, 0x20

kPalette_8467E94:: @ 8467E94
    .incbin "baserom.gba", 0x467E94, 0x20

kPalette_8467EB4:: @ 8467EB4
    .incbin "baserom.gba", 0x467EB4, 0x20

kPalette_8467ED4:: @ 8467ED4
    .incbin "baserom.gba", 0x467ED4, 0x20

kUGfx_8467EF4:: @ 8467EF4
    .incbin "baserom.gba", 0x467EF4, 0x64

kObjTiles_8467F58:: @ 8467F58
    obj_tiles kUGfx_8467EF4, 0x100, 32768

kObjPal_8467F60:: @ 8467F60
    obj_pal kPalette_8467DF4, 32768
    obj_pal kPalette_8467E14, 32768
    obj_pal kPalette_8467E34, 32768
    obj_pal kPalette_8467E54, 32768
    obj_pal kPalette_8467E74, 32768
    obj_pal kPalette_8467E94, 32768
    obj_pal kPalette_8467EB4, 32768
    obj_pal kPalette_8467ED4, 32768

kSpriteTemplate_8467FA0:: @ 8467FA0
    spr_template 32768, 32768, kOAM_83AC9F8, kDummySpriteAnimTable, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kBasicItem_8467FB8:: @ 8467FB8
    .4byte 0x00000001
    .4byte kLzGfx_846718C
    .4byte kLzTilemap_8467288
    .4byte kPalette_846708C
    .4byte 0x00001001
    .4byte kLzGfx_846737C
    .4byte kLzTilemap_8467470
    .4byte kPalette_84670AC
    .4byte 0x00002001
    .4byte kLzGfx_8467558
    .4byte kLzTilemap_846762C
    .4byte kPalette_84670CC
    .4byte 0x00003001
    .4byte kLzGfx_8467558
    .4byte kLzTilemap_846762C
    .4byte kPalette_84670EC
    .4byte 0x00004001
    .4byte kLzGfx_8467558
    .4byte kLzTilemap_846762C
    .4byte kPalette_846710C
    .4byte 0x00005001
    .4byte kLzGfx_8467558
    .4byte kLzTilemap_846762C
    .4byte kPalette_846712C
    .4byte 0x00006001
    .4byte kLzGfx_8467700
    .4byte kLzTilemap_8467934
    .4byte kPalette_846714C
    .4byte 0x00007001
    .4byte kLzGfx_8467A7C
    .4byte kLzTilemap_8467CAC
    .4byte kPalette_846716C

kRBoxBar_8468038:: @ 8468038
    .byte 0x00, 0x02, 0x03
    .byte 0x00, 0x01, 0x02

    .align 2
kWindowTemplate_8468040:: @ 8468040
    window_template 0x00, 0x01, 0x00, 0x1C, 0x03, 0x0F, 0x0000
    window_template 0x02, 0x01, 0x03, 0x1C, 0x14, 0x0F, 0x0000

UNK_8468050:: @ 8468050
    .incbin "baserom.gba", 0x468050, 0x10 @ null

kPalette_8468060:: @ 8468060
    .incbin "baserom.gba", 0x468060, 0x20

kPalette_8468080:: @ 8468080
    .incbin "baserom.gba", 0x468080, 0x20

kPalette_84680A0:: @ 84680A0
    .incbin "baserom.gba", 0x4680A0, 0x20

kLzGfx_84680C0:: @ 84680C0
    .incbin "baserom.gba", 0x4680C0, 0x7F

    .align 2
kLzTilemap_8468140:: @ 8468140
    .incbin "baserom.gba", 0x468140, 0xDC

kLzGfx_846821C:: @ 846821C
    .incbin "baserom.gba", 0x46821C, 0x2E

    .align 2
kLzTilemap_846824C:: @ 846824C
    .incbin "baserom.gba", 0x46824C, 0xBF

    .align 2
kLzGfx_846830C:: @ 846830C
    .incbin "baserom.gba", 0x46830C, 0x70

kLzTilemap_846837C:: @ 846837C
    .incbin "baserom.gba", 0x46837C, 0xC9

    .align 2
kLzGfx_8468448:: @ 8468448
    .incbin "baserom.gba", 0x468448, 0x90

kLzTilemap_84684D8:: @ 84684D8
    .incbin "baserom.gba", 0x4684D8, 0xDC

kLzGfx_84685B4:: @ 84685B4
    .incbin "baserom.gba", 0x4685B4, 0x90

kLzTilemap_8468644:: @ 8468644
    .incbin "baserom.gba", 0x468644, 0xDC

kUnk13_8468720:: @ 8468720
    .4byte 1, kLzGfx_84680C0, kLzTilemap_8468140, kPalette_8468060
    .4byte 1, kLzGfx_846821C, kLzTilemap_846824C, kPalette_84670AC
    .4byte 1, kLzGfx_846830C, kLzTilemap_846837C, kPalette_84670CC
    .4byte 1, kLzGfx_846830C, kLzTilemap_846837C, kPalette_84670EC
    .4byte 1, kLzGfx_846830C, kLzTilemap_846837C, kPalette_846710C
    .4byte 1, kLzGfx_846830C, kLzTilemap_846837C, kPalette_846712C
    .4byte 1, kLzGfx_8468448, kLzTilemap_84684D8, kPalette_8468080
    .4byte 1, kLzGfx_84685B4, kLzTilemap_8468644, kPalette_84680A0

kText_84687A0:: @ 84687A0
    .string "You have collected all STAMPs!\n"
    .string "Want to input a CARD as a prize?$"

UNK_84687E0:: @ 84687E0
    .incbin "baserom.gba", 0x4687E0, 0x10 @ null

kUnknown_84687F0:: @ 84687F0
    .incbin "baserom.gba", 0x4687F0, 0x20 @ null

kUnknown_8468810:: @ 8468810
    .incbin "baserom.gba", 0x468810, 0x10 @ null

kUnknown_8468820:: @ 8468820
    .incbin "baserom.gba", 0x468820, 0x10 @ null

kUnknown_8468830:: @ 8468830
    .incbin "baserom.gba", 0x468830, 0x10 @ null

kUnknown_8468840:: @ 8468840
    .incbin "baserom.gba", 0x468840, 0x30 @ null

kUnknown_8468870:: @ 8468870
    .incbin "baserom.gba", 0x468870, 0x28 @ null

kUnknown_8468898:: @ 8468898
    .incbin "baserom.gba", 0x468898, 0x10 @ null

kUnknown_84688A8:: @ 84688A8
    .incbin "baserom.gba", 0x4688A8, 0x10 @ null

kUnknown_84688B8:: @ 84688B8
    .incbin "baserom.gba", 0x4688B8, 0x28 @ null

kUnknown_84688E0:: @ 84688E0
    .incbin "baserom.gba", 0x4688E0, 0x10 @ null

kUnknown_84688F0:: @ 84688F0
    .incbin "baserom.gba", 0x4688F0, 0x30 @ null

kMEvent_8468920:: @ 8468920
    .4byte 0x12, 0x10, kUnknown_8468810
    .4byte 0x1, 0x0, NULL
    .4byte 0x2, 0x14, NULL
    .4byte 0x0, 0xA, NULL
    .4byte 0x12, 0x10, kUnknown_8468820
    .4byte 0x1, 0x0, NULL
    .4byte 0x2, 0x14, NULL
    .4byte 0x0, 0xB, NULL
    .4byte 0x12, 0x10, kUnknown_84688E0
    .4byte 0x1, 0x0, NULL
    .4byte 0x2, 0x14, NULL
    .4byte 0x0, 0x9, NULL

kMEvent_84689B0:: @ 84689B0
    .4byte 0x12, 0x10, kUnknown_8468898
    .4byte 0x1, 0x0, NULL
    .4byte 0x2, 0x14, NULL
    .4byte 0x0, 0x7, NULL

kMEvent_84689E0:: @ 84689E0
    .4byte 0x12, 0x28, kUnknown_8468870
    .4byte 0x1, 0x0, NULL
    .4byte 0xE, 0x0, NULL
    .4byte 0x1, 0x0, NULL
    .4byte 0x2, 0x13, NULL
    .4byte 0x8, 0x0, NULL
    .4byte 0x4, 0x1, kMEvent_84689B0
    .4byte 0x12, 0x10, kUnknown_84688A8
    .4byte 0x1, 0x0, NULL
    .4byte 0x2, 0x14, NULL
    .4byte 0x0, 0x3, NULL

kMEvent_8468A64:: @ 8468A64
    .4byte 0x12, 0x30, kUnknown_8468840
    .4byte 0x1, 0x0, NULL
    .4byte 0xD, 0x0, NULL
    .4byte 0x1, 0x0, NULL
    .4byte 0xF, 0x0, NULL
    .4byte 0x1, 0x0, NULL
    .4byte 0x2, 0x14, NULL
    .4byte 0x0, 0x2, NULL

kMEvent_8468AC4:: @ 8468AC4
    .4byte 0x12, 0x28, kUnknown_84688B8
    .4byte 0x1, 0x0, NULL
    .4byte 0x2, 0x13, NULL
    .4byte 0x8, 0x0, NULL
    .4byte 0x4, 0x0, kMEvent_8468A64
    .4byte 0x3, 0x0, kMEvent_84595EC

kMEvent_8468B0C:: @ 8468B0C
    .4byte 0x12, 0x10, kUnknown_84688F0
    .4byte 0x1, 0x0, NULL
    .4byte 0x2, 0x14, NULL
    .4byte 0x0, 0x5, NULL
    .4byte 0x12, 0x10, kUnknown_8468830
    .4byte 0x1, 0x0, NULL
    .4byte 0x2, 0x14, NULL
    .4byte 0x0, 0x0, NULL

kMEvent_8468B6C:: @ 8468B6C
    .4byte 0x1B, 0x0, NULL
    .4byte 0x12, 0x20, kUnknown_84687F0
    .4byte 0x1, 0x0, NULL
    .4byte 0x2, 0x11, NULL
    .4byte 0x5, 0x0, NULL
    .4byte 0x6, 0x0, NULL
    .4byte 0x4, 0x0, kMEvent_8468920
    .4byte 0x3, 0x0, kMEvent_84689E0

kMEvent_8468BCC:: @ 8468BCC
    .4byte 0x1A, 0x0, NULL
    .4byte 0x1C, 0x0, NULL
    .4byte 0x12, 0x20, kUnknown_84687F0
    .4byte 0x1, 0x0, NULL
    .4byte 0x2, 0x11, NULL
    .4byte 0x5, 0x0, NULL
    .4byte 0x6, 0x0, NULL
    .4byte 0x4, 0x0, kMEvent_8468920
    .4byte 0x7, 0x0, NULL
    .4byte 0x4, 0x2, kMEvent_8468AC4
    .4byte 0x4, 0x0, kMEvent_8468A64
    .4byte 0x3, 0x0, kMEvent_8468B0C

kAsciiString_8468C5C:: @ 8468C5C
    debug_path
    .asciz "menews_jisan.c"

    .align 2
kAsciiString_8468C94:: @ 8468C94
    .asciz "0"

    .align 2
kGfx_8468C98:: @ 8468C98
    .incbin "baserom.gba", 0x468C98, 0x520

kPalette_84691B8:: @ 84691B8
    .incbin "baserom.gba", 0x4691B8, 0x20

kTilemap_84691D8:: @ 84691D8
    .incbin "baserom.gba", 0x4691D8, 0x800

kTilemap_84699D8:: @ 84699D8
    .incbin "baserom.gba", 0x4699D8, 0x800

kUGfx_846A1D8:: @ 846A1D8
    .incbin "baserom.gba", 0x46A1D8, 0x500

kPalette_846A6D8:: @ 846A6D8
    .incbin "baserom.gba", 0x46A6D8, 0x20

kUGfx_846A6F8:: @ 846A6F8
    .incbin "baserom.gba", 0x46A6F8, 0x800

kVRAMConfig_846AEF8:: @ 846AEF8
    .4byte 0x31EF

kBasicItem_846AEFC:: @ 846AEFC
    .byte 0x03, 0x05, 0x17, 0x20, 0x20, 0x04, 0x08, 0x05, 0x21, 0x04, 0x08
    .byte 0x05, 0x26, 0x00, 0x08, 0x05, 0x23, 0x05, 0x08, 0x05, 0x24, 0x02
    .byte 0x08, 0x05, 0x25, 0x02, 0x08, 0x05, 0x1F, 0x06, 0x08, 0x05, 0x03
    .byte 0x08, 0x15, 0x07, 0x02, 0x3B, 0x08, 0x05, 0x02, 0x3A, 0x08, 0x05

UNK_846AF28:: @ 846AF28
    .incbin "baserom.gba", 0x46AF28, 0x18 @ null

kAnimCmd_846AF40:: @ 846AF40
    obj_image_anim_frame 0, 10
    obj_image_anim_end

kAnimCmd_846AF48:: @ 846AF48
    obj_image_anim_frame 0, 10, OBJ_IMAGE_ANIM_H_FLIP
    obj_image_anim_end

kAnimCmds_846AF50:: @ 846AF50
    .4byte kAnimCmd_846AF40 @ 846AF40
    .4byte kAnimCmd_846AF48 @ 846AF48

kOAM_846AF58:: @ 846AF58
    .2byte 0x0000
    .2byte 0xC000
    .2byte 0x0000
    .2byte 0x0000

kSpriteTemplate_846AF60:: @ 846AF60
    spr_template 3000, 3000, kOAM_846AF58, kAnimCmds_846AF50, NULL, kDummySpriteAffineAnimTable, sub_8147418

kObjTiles_846AF78:: @ 846AF78
    obj_tiles kUGfx_846A6F8, 0x800, 4000
    obj_tiles kUGfx_846A1D8, 0x500, 3000
    obj_tiles NULL, 0x0, 0

kObjPal_846AF90:: @ 846AF90
    obj_pal kPalette_846A6D8, 3000
    obj_pal NULL, 0

kAnimCmd_846AFA0:: @ 846AFA0
    obj_image_anim_frame 0, 20
    obj_image_anim_frame 16, 20
    obj_image_anim_frame 32, 15
    obj_image_anim_end

kAnimCmd_846AFB0:: @ 846AFB0
    obj_image_anim_frame 0, 20, OBJ_IMAGE_ANIM_H_FLIP
    obj_image_anim_frame 16, 20, OBJ_IMAGE_ANIM_H_FLIP
    obj_image_anim_frame 32, 15, OBJ_IMAGE_ANIM_H_FLIP
    obj_image_anim_end

kAnimCmds_846AFC0:: @ 846AFC0
    .4byte kAnimCmd_846AFA0 @ 846AFA0
    .4byte kAnimCmd_846AFB0 @ 846AFB0

kOAM_846AFC8:: @ 846AFC8
    .2byte 0x0000
    .2byte 0x8000
    .2byte 0x0000
    .2byte 0x0000

kSpriteTemplate_846AFD0:: @ 846AFD0
    spr_template 4000, 3000, kOAM_846AFC8, kAnimCmds_846AFC0, NULL, kDummySpriteAffineAnimTable, sub_81474B0

kPalette_846AFE8:: @ 846AFE8
    .incbin "baserom.gba", 0x46AFE8, 0x20

kUGfx_846B008:: @ 846B008
    .incbin "baserom.gba", 0x46B008, 0x422

    .align 2
kObjTiles_846B42C:: @ 846B42C
    obj_tiles kUGfx_846B008, 0xC00, 8192
    obj_tiles NULL, 0x0, 0

kObjPal_846B43C:: @ 846B43C
    obj_pal kPalette_846AFE8, 8192
    obj_pal NULL, 0

kAnimCmd_846B44C:: @ 846B44C
    obj_image_anim_frame 0, 0
    obj_image_anim_end

kAnimCmd_846B454:: @ 846B454
    obj_image_anim_frame 16, 0
    obj_image_anim_end

kAnimCmd_846B45C:: @ 846B45C
    obj_image_anim_frame 32, 0
    obj_image_anim_end

kAnimCmd_846B464:: @ 846B464
    obj_image_anim_frame 64, 0
    obj_image_anim_end

kAnimCmd_846B46C:: @ 846B46C
    obj_image_anim_frame 48, 0
    obj_image_anim_end

kAnimCmd_846B474:: @ 846B474
    obj_image_anim_frame 80, 0
    obj_image_anim_end

kAnimCmds_846B47C:: @ 846B47C
    .4byte kAnimCmd_846B44C @ 846B44C
    .4byte kAnimCmd_846B454 @ 846B454
    .4byte kAnimCmd_846B45C @ 846B45C
    .4byte kAnimCmd_846B464 @ 846B464
    .4byte kAnimCmd_846B46C @ 846B46C
    .4byte kAnimCmd_846B474 @ 846B474

kSpriteTemplate_846B494:: @ 846B494
    spr_template 8192, 8192, kOAM_83AC9D8, kAnimCmds_846B47C, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kPointer_846B4AC:: @ 846B4AC
    .4byte sub_81477C0 @ 81477C1
    .4byte sub_814784C @ 814784D
    .4byte sub_81479D4 @ 81479D5
    .4byte sub_8147A34 @ 8147A35

kUnk7_846B4BC:: @ 846B4BC
    .2byte 0x0001, 0x0002
    .2byte 0x0004, 0x0001
    .2byte 0x0007, 0x0000
    .2byte 0x000A, 0x0001
    .2byte 0x000B, 0x0001
    .2byte 0x000D, 0x0001
    .2byte 0x000E, 0x0001
    .2byte 0x0013, 0x0001
    .2byte 0x0014, 0x0001
    .2byte 0x0019, 0x0000
    .2byte 0x001B, 0x0000
    .2byte 0x001D, 0x0000
    .2byte 0x0020, 0x0000
    .2byte 0x0023, 0x0000
    .2byte 0x0025, 0x0000
    .2byte 0x0027, 0x0002
    .2byte 0x002B, 0x0002
    .2byte 0x002E, 0x0001
    .2byte 0x0034, 0x0000
    .2byte 0x0036, 0x0002
    .2byte 0x0038, 0x0001
    .2byte 0x003A, 0x0001
    .2byte 0x003C, 0x0002
    .2byte 0x0045, 0x0002
    .2byte 0x005A, 0x0001
    .2byte 0x0062, 0x0001
    .2byte 0x0066, 0x0002
    .2byte 0x0068, 0x0000
    .2byte 0x0084, 0x0002
    .2byte 0x0085, 0x0000
    .2byte 0x008A, 0x0001
    .2byte 0x008C, 0x0001
    .2byte 0x0098, 0x0002
    .2byte 0x009B, 0x0001
    .2byte 0x009E, 0x0000
    .2byte 0x00A7, 0x0001
    .2byte 0x00AC, 0x0000
    .2byte 0x00AD, 0x0000
    .2byte 0x00AE, 0x0002
    .2byte 0x00AF, 0x0002
    .2byte 0x00B3, 0x0000
    .2byte 0x00B6, 0x0002
    .2byte 0x00B7, 0x0002
    .2byte 0x00BF, 0x0002
    .2byte 0x00C2, 0x0002
    .2byte 0x00CC, 0x0002
    .2byte 0x00D1, 0x0000
    .2byte 0x00D5, 0x0002
    .2byte 0x00D8, 0x0000
    .2byte 0x00DA, 0x0002
    .2byte 0x00DC, 0x0000
    .2byte 0x00E4, 0x0001
    .2byte 0x00E7, 0x0000
    .2byte 0x00E9, 0x0000
    .2byte 0x00EC, 0x0001
    .2byte 0x00EE, 0x0002
    .2byte 0x00EF, 0x0001
    .2byte 0x00F0, 0x0001
    .2byte 0x00F6, 0x0001
    .2byte 0x0115, 0x0001
    .2byte 0x0118, 0x0002
    .2byte 0x011B, 0x0000
    .2byte 0x011C, 0x0000
    .2byte 0x011E, 0x0001
    .2byte 0x0120, 0x0000
    .2byte 0x0121, 0x0000
    .2byte 0x0122, 0x0001
    .2byte 0x0123, 0x0002
    .2byte 0x0125, 0x0002
    .2byte 0x0127, 0x0002
    .2byte 0x012A, 0x0001
    .2byte 0x0188, 0x0000
    .2byte 0x0189, 0x0000
    .2byte 0x0137, 0x0002
    .2byte 0x0132, 0x0002
    .2byte 0x012D, 0x0001
    .2byte 0x0172, 0x0000
    .2byte 0x015E, 0x0002
    .2byte 0x013B, 0x0000
    .2byte 0x0142, 0x0000
    .2byte 0x0163, 0x0000
    .2byte 0x017E, 0x0001
    .2byte 0x0164, 0x0002
    .2byte 0x0151, 0x0001
    .2byte 0x0161, 0x0001
    .2byte 0x0162, 0x0001
    .2byte 0x0182, 0x0000
    .2byte 0x0183, 0x0000
    .2byte 0x016B, 0x0002
    .2byte 0x016F, 0x0002
    .2byte 0x0153, 0x0002
    .2byte 0x0141, 0x0002
    .2byte 0x015F, 0x0000
    .2byte 0x014C, 0x0002
    .2byte 0x0158, 0x0002
    .2byte 0x0186, 0x0001
    .2byte 0x0168, 0x0000
    .2byte 0x015A, 0x0000
    .2byte 0x0175, 0x0001
    .2byte 0x018B, 0x0001

kPointer_846B64C:: @ 846B64C
    .4byte sub_8148344 @ 8148345
    .4byte sub_81483D0 @ 81483D1
    .4byte sub_8148464 @ 8148465
    .4byte sub_81484D0 @ 81484D1
    .4byte sub_81485C8 @ 81485C9
    .4byte sub_81486C4 @ 81486C5
    .4byte sub_8148760 @ 8148761
    .4byte sub_81487B4 @ 81487B5
    .4byte sub_814881C @ 814881D

kPointer_846B670:: @ 846B670
    .4byte sub_8148398 @ 8148399
    .4byte sub_8148418 @ 8148419
    .4byte sub_81484B0 @ 81484B1
    .4byte sub_814856C @ 814856D
    .4byte sub_8148664 @ 8148665
    .4byte sub_8148724 @ 8148725
    .4byte sub_8148760 @ 8148761
    .4byte sub_8148800 @ 8148801
    .4byte sub_814881C @ 814881D

UNK_846B694:: @ 846B694
    .incbin "baserom.gba", 0x46B694, 0x10 @ null

UNK_846B6A4:: @ 846B6A4
    .incbin "baserom.gba", 0x46B6A4, 0x8 @ null

UNK_846B6AC:: @ 846B6AC
    .incbin "baserom.gba", 0x46B6AC, 0x8 @ null

kBasicItem_846B6B4:: @ 846B6B4
    .byte -3, -6, -8
    .byte -10, -13, -15
    .byte -17, -19, -21
    .byte -23, -25, -27
    .byte -28, -29, -30
    .byte -30, -30, -28
    .byte -27, -26, -25
    .byte -23, -22, -20
    .byte -18, -17, -15
    .byte -13, -11, -8
    .byte -6, -4, -1
    .byte 0, 0, 0
    .byte 0, 0, 0
    .byte 0, 0, 0
    .byte 0, 0, 0
    .byte 0, 0, 0
    .byte -3, -6, -9
    .byte -11, -14, -16
    .byte -18, -20, -22
    .byte -24, -26, -28
    .byte -29, -30, -30
    .byte -28, -26, -24
    .byte -22, -20, -18
    .byte -16, -14, -11
    .byte -9, -6, -4
    .byte -1, 0, 0
    .byte 0, 0, 0
    .byte 0, 0, 0
    .byte 0, 0, 0
    .byte 0, 0, 0
    .byte 0, 0, 0
    .byte 0, 0, 0
    .byte -3, -6, -9
    .byte -11, -13, -15
    .byte -17, -19, -21
    .byte -23, -25, -27
    .byte -28, -29, -30
    .byte -30, -30, -30
    .byte -29, -29, -28
    .byte -28, -27, -27
    .byte -26, -25, -24
    .byte -22, -20, -18
    .byte -16, -14, -12
    .byte -11, -9, -6
    .byte -4, -1, 0
    .byte 0, 0, 0
    .byte 0, 0, 0
    .byte 0, 0, 0

UNK_846B744:: @ 846B744
    .incbin "baserom.gba", 0x46B744, 0x18 @ null

UNK_846B75C:: @ 846B75C
    .incbin "baserom.gba", 0x46B75C, 0x10 @ null

kBasicItem_846B76C:: @ 846B76C
    .4byte 0x00001388, 0x00000001, 0x00001F40, 0x00000002, 0x00002EE0
    .4byte 0x00000003, 0x00003E80, 0x00000004, 0x00004E20, 0x00000005

kPalette_846B794:: @ 846B794
    .incbin "baserom.gba", 0x46B794, 0x20

kPalette_846B7B4:: @ 846B7B4
    .incbin "baserom.gba", 0x46B7B4, 0x20

kLzGfx_846B7D4:: @ 846B7D4
    .incbin "baserom.gba", 0x46B7D4, 0x22A

    .align 2
kLzTilemap_846BA00:: @ 846BA00
    .incbin "baserom.gba", 0x46BA00, 0x1AD

    .align 2
kPalette_846BBB0:: @ 846BBB0
    .incbin "baserom.gba", 0x46BBB0, 0x20

kLzGfx_846BBD0:: @ 846BBD0
    .incbin "baserom.gba", 0x46BBD0, 0x94E

    .align 2
kLzTilemap_846C520:: @ 846C520
    .incbin "baserom.gba", 0x46C520, 0x3B6

    .align 2
kPalette_846C8D8:: @ 846C8D8
    .incbin "baserom.gba", 0x46C8D8, 0x20

kLzGfx_846C8F8:: @ 846C8F8
    .incbin "baserom.gba", 0x46C8F8, 0xAAF

    .align 2
kLzTilemap_846D3A8:: @ 846D3A8
    .incbin "baserom.gba", 0x46D3A8, 0x52A

    .align 2
kVRAMConfig_846D8D4:: @ 846D8D4
    .4byte 0x1B0
    .4byte 0x25E6
    .4byte 0x16C9
    .4byte 0x31DF

kWindowTemplate_846D8E4:: @ 846D8E4
    window_template 0x00, 0x13, 0x00, 0x06, 0x02, 0x02, 0x0013
    window_template 0x00, 0x08, 0x00, 0x06, 0x02, 0x02, 0x001F
    window_template_terminator

kBasicItem_846D8FC:: @ 846D8FC
    .4byte 0x00000000
    .4byte sub_8149DC8
    .4byte 0x00000001
    .4byte sub_8149F64
    .4byte 0x00000002
    .4byte sub_8149FD0
    .4byte 0x00000003
    .4byte sub_814A03C
    .4byte 0x00000004
    .4byte sub_814A0C8
    .4byte 0x00000005
    .4byte sub_814A174
    .4byte 0x00000006
    .4byte sub_814A218
    .4byte 0x00000007
    .4byte sub_814A264
    .4byte 0x00000009
    .4byte sub_814A3AC
    .4byte 0x00000008
    .4byte sub_814A308

UNK_846D94C:: @ 846D94C
    .incbin "baserom.gba", 0x46D94C, 0x4 @ null

kRBoxBar_846D950:: @ 846D950
    .byte 0x00, 0x02, 0x03

UNK_846D953:: @ 846D953
    .incbin "baserom.gba", 0x46D953, 0xD @ null

kObjTiles_846D960:: @ 846D960
    obj_tiles kLzGfx_8479688, 0x0, 800

kObjPal_846D968:: @ 846D968
    obj_pal kPalette_8479668, 800

kUnknown_846D970:: @ 846D970
    .incbin "baserom.gba", 0x46D970, 0x8 @ null

kUnknown_846D978:: @ 846D978
    .incbin "baserom.gba", 0x46D978, 0xC @ null

kUnknown_846D984:: @ 846D984
    .incbin "baserom.gba", 0x46D984, 0x10 @ null

kUnknown_846D994:: @ 846D994
    .incbin "baserom.gba", 0x46D994, 0x14 @ null

kPointer_846D9A8:: @ 846D9A8
    .4byte kUnknown_846D970 @ 846D970
    .4byte kUnknown_846D978 @ 846D978
    .4byte kUnknown_846D984 @ 846D984
    .4byte kUnknown_846D994 @ 846D994

kUnknown_846D9B8:: @ 846D9B8
    .incbin "baserom.gba", 0x46D9B8, 0x4 @ null

kUnknown_846D9BC:: @ 846D9BC
    .incbin "baserom.gba", 0x46D9BC, 0x6 @ null

kUnknown_846D9C2:: @ 846D9C2
    .incbin "baserom.gba", 0x46D9C2, 0x8 @ null

kUnknown_846D9CA:: @ 846D9CA
    .incbin "baserom.gba", 0x46D9CA, 0xA @ null

kPointer_846D9D4:: @ 846D9D4
    .4byte kUnknown_846D9B8 @ 846D9B8
    .4byte kUnknown_846D9BC @ 846D9BC
    .4byte kUnknown_846D9C2 @ 846D9C2
    .4byte kUnknown_846D9CA @ 846D9CA

kPalette_846D9E4:: @ 846D9E4
    .incbin "baserom.gba", 0x46D9E4, 0x20

kPalette_846DA04:: @ 846DA04
    .incbin "baserom.gba", 0x46DA04, 0x20

kUGfx_846DA24:: @ 846DA24
    .incbin "baserom.gba", 0x46DA24, 0x11D

    .align 2
kUGfx_846DB44:: @ 846DB44
    .incbin "baserom.gba", 0x46DB44, 0x1D1

    .align 2
kUGfx_846DD18:: @ 846DD18
    .incbin "baserom.gba", 0x46DD18, 0x130

kUGfx_846DE48:: @ 846DE48
    .incbin "baserom.gba", 0x46DE48, 0xFA

    .align 2
kUGfx_846DF44:: @ 846DF44
    .incbin "baserom.gba", 0x46DF44, 0x16A

    .align 2
kObjTiles_846E0B0:: @ 846E0B0
    obj_tiles kUGfx_846DA24, 0x600, 5
    obj_tiles kUGfx_846DB44, 0xC00, 6
    obj_tiles kUGfx_846DD18, 0x600, 7
    obj_tiles kUGfx_846DE48, 0x600, 8
    obj_tiles kUGfx_846DF44, 0x200, 10

kObjPal_846E0D8:: @ 846E0D8
    obj_pal kPalette_846D9E4, 5
    obj_pal kPalette_846DA04, 6

kSpriteTemplate_846E0E8:: @ 846E0E8
    spr_template 0, 0, kOAM_846E170, kDummySpriteAnimTable, NULL, kDummySpriteAffineAnimTable, objc_nullsub

UNK_846E100:: @ 846E100
    .incbin "baserom.gba", 0x46E100, 0x50 @ null

UNK_846E150:: @ 846E150
    .incbin "baserom.gba", 0x46E150, 0x10 @ null

kPointer_846E160:: @ 846E160
    .4byte kSpriteTemplate_846E220 @ 846E220
    .4byte kSpriteTemplate_846E238 @ 846E238
    .4byte kSpriteTemplate_846E250 @ 846E250
    .4byte kSpriteTemplate_846E268 @ 846E268

kOAM_846E170:: @ 846E170
    .2byte 0x0000
    .2byte 0xC000
    .2byte 0x0800
    .2byte 0x0000

kOAM_846E178:: @ 846E178
    .2byte 0x8000
    .2byte 0x8000
    .2byte 0x0800
    .2byte 0x0000

kOAM_846E180:: @ 846E180
    .2byte 0x0000
    .2byte 0x8000
    .2byte 0x0800
    .2byte 0x0000

kOAM_846E188:: @ 846E188
    .2byte 0x4000
    .2byte 0x8000
    .2byte 0x0800
    .2byte 0x0000

kAnimCmd_846E190:: @ 846E190
    obj_image_anim_frame 0, 1
    obj_image_anim_end

kAnimCmd_846E198:: @ 846E198
    obj_image_anim_frame 8, 1
    obj_image_anim_end

kAnimCmd_846E1A0:: @ 846E1A0
    obj_image_anim_frame 16, 1
    obj_image_anim_end

kAnimCmd_846E1A8:: @ 846E1A8
    obj_image_anim_frame 24, 1
    obj_image_anim_end

kAnimCmd_846E1B0:: @ 846E1B0
    obj_image_anim_frame 32, 1
    obj_image_anim_end

kAnimCmd_846E1B8:: @ 846E1B8
    obj_image_anim_frame 40, 1
    obj_image_anim_end

kAnimCmd_846E1C0:: @ 846E1C0
    obj_image_anim_frame 0, 1
    obj_image_anim_end

kAnimCmd_846E1C8:: @ 846E1C8
    obj_image_anim_frame 16, 1
    obj_image_anim_end

kAnimCmd_846E1D0:: @ 846E1D0
    obj_image_anim_frame 32, 1
    obj_image_anim_end

kAnimCmd_846E1D8:: @ 846E1D8
    obj_image_anim_frame 48, 1
    obj_image_anim_end

kAnimCmd_846E1E0:: @ 846E1E0
    obj_image_anim_frame 64, 1
    obj_image_anim_end

kAnimCmd_846E1E8:: @ 846E1E8
    obj_image_anim_frame 80, 1
    obj_image_anim_end

kAnimCmds_846E1F0:: @ 846E1F0
    .4byte kAnimCmd_846E190 @ 846E190
    .4byte kAnimCmd_846E198 @ 846E198
    .4byte kAnimCmd_846E1A0 @ 846E1A0
    .4byte kAnimCmd_846E1A8 @ 846E1A8
    .4byte kAnimCmd_846E1B0 @ 846E1B0
    .4byte kAnimCmd_846E1B8 @ 846E1B8

kAnimCmds_846E208:: @ 846E208
    .4byte kAnimCmd_846E1C0 @ 846E1C0
    .4byte kAnimCmd_846E1C8 @ 846E1C8
    .4byte kAnimCmd_846E1D0 @ 846E1D0
    .4byte kAnimCmd_846E1D8 @ 846E1D8
    .4byte kAnimCmd_846E1E0 @ 846E1E0
    .4byte kAnimCmd_846E1E8 @ 846E1E8

kSpriteTemplate_846E220:: @ 846E220
    spr_template 5, 5, kOAM_846E178, kAnimCmds_846E1F0, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kSpriteTemplate_846E238:: @ 846E238
    spr_template 6, 5, kOAM_846E180, kAnimCmds_846E208, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kSpriteTemplate_846E250:: @ 846E250
    spr_template 7, 5, kOAM_846E188, kAnimCmds_846E1F0, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kSpriteTemplate_846E268:: @ 846E268
    spr_template 8, 5, kOAM_846E188, kAnimCmds_846E1F0, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kOAM_846E280:: @ 846E280
    .2byte 0x0000
    .2byte 0x4000
    .2byte 0x0400
    .2byte 0x0000

kAnimCmd_846E288:: @ 846E288
    obj_image_anim_frame 0, 0
    obj_image_anim_end

kAnimCmd_846E290:: @ 846E290
    obj_image_anim_frame 0, 4
    obj_image_anim_frame 4, 4
    obj_image_anim_frame 8, 4
    obj_image_anim_frame 12, 4
    obj_image_anim_loop 1
    obj_image_anim_frame 0, 4
    obj_image_anim_end

kAnimCmds_846E2AC:: @ 846E2AC
    .4byte kAnimCmd_846E288 @ 846E288
    .4byte kAnimCmd_846E290 @ 846E290

kSpriteTemplate_846E2B4:: @ 846E2B4
    spr_template 10, 5, kOAM_846E280, kAnimCmds_846E2AC, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kWindowTemplate_846E2CC:: @ 846E2CC
    window_template 0x00, 0x01, 0x01, 0x1C, 0x09, 0x0F, 0x0001

kPointer_846E2D4:: @ 846E2D4
    .4byte kText_841CB78 @ 841CB78
    .4byte kText_841CB88 @ 841CB88
    .4byte kText_841CB94 @ 841CB94

UNK_846E2E0:: @ 846E2E0
    .incbin "baserom.gba", 0x46E2E0, 0x8 @ null

UNK_846E2E8:: @ 846E2E8
    .incbin "baserom.gba", 0x46E2E8, 0x8 @ null

kBasicItem_846E2F0:: @ 846E2F0
    .byte 0x04, 0x01, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x04, 0x02, 0x00
    .byte 0xFF, 0x00, 0x00, 0x00, 0x04
    .byte 0x02, 0x00, 0xFE, 0x00, 0x00
    .byte 0x00, 0x06, 0x03, 0x01, 0xFF
    .byte 0xFD, 0xFF, 0x00, 0x06, 0x04
    .byte 0x01, 0xFE, 0xFC, 0xFE, 0x00

    .align 2
kBasicItem_846E314:: @ 846E314
    .byte 0x03, 0x02, 0x01, 0x00, 0x03
    .byte 0x03, 0x01, 0x00, 0x03, 0x03
    .byte 0x02, 0x00, 0x03, 0x04, 0x02
    .byte 0x00, 0x03, 0x05, 0x03, 0x00

kPointer_846E328:: @ 846E328
    .4byte kText_841CE3C @ 841CE3C
    .4byte kText_841CE78 @ 841CE78
    .4byte kText_841CEA8 @ 841CEA8
    .4byte kText_841CF14 @ 841CF14
    .4byte kText_841CF50 @ 841CF50
    .4byte kText_841CF70 @ 841CF70
    .4byte kText_841CFA0 @ 841CFA0
    .4byte kText_841CFD4 @ 841CFD4
    .4byte kText_841D008 @ 841D008

kPointer_846E34C:: @ 846E34C
    .4byte NULL @ 0
    .4byte sub_814BBB8 @ 814BBB9
    .4byte sub_814BC10 @ 814BC11
    .4byte sub_814BC74 @ 814BC75
    .4byte sub_814BD7C @ 814BD7D
    .4byte sub_814BD9C @ 814BD9D
    .4byte sub_814BDBC @ 814BDBD
    .4byte sub_814BE0C @ 814BE0D
    .4byte sub_814BE64 @ 814BE65
    .4byte sub_814BE7C @ 814BE7D
    .4byte sub_814BFD0 @ 814BFD1
    .4byte sub_814C118 @ 814C119
    .4byte sub_814C24C @ 814C24D
    .4byte sub_814C850 @ 814C851
    .4byte sub_814C8F8 @ 814C8F9
    .4byte sub_814C990 @ 814C991
    .4byte sub_814CB20 @ 814CB21
    .4byte sub_814CC0C @ 814CC0D
    .4byte sub_814CFA8 @ 814CFA9
    .4byte sub_814D094 @ 814D095
    .4byte sub_814D188 @ 814D189
    .4byte sub_814D240 @ 814D241
    .4byte sub_814D31C @ 814D31D
    .4byte sub_814D3A4 @ 814D3A5
    .4byte sub_814D468 @ 814D469
    .4byte sub_814D4C8 @ 814D4C9

UNK_846E3B4:: @ 846E3B4
    .incbin "baserom.gba", 0x46E3B4, 0x10 @ null

UNK_846E3C4:: @ 846E3C4
    .incbin "baserom.gba", 0x46E3C4, 0x4 @ null

UNK_846E3C8:: @ 846E3C8
    .incbin "baserom.gba", 0x46E3C8, 0x4 @ null

kVRAMConfig_846E3CC:: @ 846E3CC
    .4byte 0xF8
    .4byte 0x14D1
    .4byte 0x20C2
    .4byte 0x30B3

kRBoxBar_846E3DC:: @ 846E3DC
    .byte 0x01, 0x02, 0x03

UNK_846E3DF:: @ 846E3DF
    .incbin "baserom.gba", 0x46E3DF, 0x3 @ null

UNK_846E3E2:: @ 846E3E2
    .incbin "baserom.gba", 0x46E3E2, 0x3 @ null

kRBoxBar_846E3E5:: @ 846E3E5
    .byte 0x01, 0x08, 0x09

    .incbin "baserom.gba", 0x46E3E8, 0x3 @ unknown

kRBoxBar_846E3EB:: @ 846E3EB
    .byte 0x01, 0x04, 0x05

    .align 2
kWindowTemplate_846E3F0:: @ 846E3F0
    window_template 0x00, 0x03, 0x04, 0x18, 0x0D, 0x0F, 0x0001

kWindowTemplate_846E3F8:: @ 846E3F8
    window_template 0x00, 0x00, 0x00, 0x09, 0x02, 0x08, 0x03ED
    window_template 0x00, 0x00, 0x03, 0x09, 0x02, 0x08, 0x03DB
    window_template 0x00, 0x00, 0x06, 0x09, 0x02, 0x08, 0x03C9
    window_template 0x00, 0x15, 0x03, 0x09, 0x02, 0x08, 0x03B7
    window_template 0x00, 0x15, 0x06, 0x09, 0x02, 0x08, 0x03A5
    window_template_terminator
    window_template 0x00, 0x04, 0x02, 0x16, 0x10, 0x0F, 0x0001
    window_template 0x00, 0x04, 0x02, 0x16, 0x10, 0x0F, 0x0001
    window_template 0x00, 0x03, 0x02, 0x18, 0x10, 0x0F, 0x0001
    window_template_terminator

UNK_846E448:: @ 846E448
    .incbin "baserom.gba", 0x46E448, 0x8 @ null

UNK_846E450:: @ 846E450
    .incbin "baserom.gba", 0x46E450, 0x20 @ null

kPalette_846E470:: @ 846E470
    .incbin "baserom.gba", 0x46E470, 0x20

kPalette_846E490:: @ 846E490
    .incbin "baserom.gba", 0x46E490, 0x20

kPalette_846E4B0:: @ 846E4B0
    .incbin "baserom.gba", 0x46E4B0, 0x20

kUGfx_846E4D0:: @ 846E4D0
    .incbin "baserom.gba", 0x46E4D0, 0x329

    .align 2
kUGfx_846E7FC:: @ 846E7FC
    .incbin "baserom.gba", 0x46E7FC, 0x37C

kUGfx_846EB78:: @ 846EB78
    .incbin "baserom.gba", 0x46EB78, 0x14A

    .align 2
kUGfx_846ECC4:: @ 846ECC4
    .incbin "baserom.gba", 0x46ECC4, 0xCA

    .align 2
kLzTilemap_846ED90:: @ 846ED90
    .incbin "baserom.gba", 0x46ED90, 0x12D

    .align 2
kLzTilemap_846EEC0:: @ 846EEC0
    .incbin "baserom.gba", 0x46EEC0, 0x197

    .align 2
kLzTilemap_846F058:: @ 846F058
    .incbin "baserom.gba", 0x46F058, 0x228

UNK_846F280:: @ 846F280
    .incbin "baserom.gba", 0x46F280, 0x14 @ null

kBasicItem_846F294:: @ 846F294
    .byte 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0xF0, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x01, 0x00, 0x03
    .byte 0x00, 0xE4, 0xFF, 0xFC, 0xFF
    .byte 0xE8, 0xFF, 0x10, 0x00, 0x02
    .byte 0x00, 0x06, 0x00, 0xF0, 0xFF
    .byte 0x14, 0x00, 0xF8, 0xFF, 0x10
    .byte 0x00, 0x03, 0x14, 0x03, 0x00
    .byte 0x1C, 0x00, 0xFC, 0xFF, 0x20
    .byte 0x00, 0xF8, 0xFF, 0x04, 0x14
    .byte 0x06, 0x00, 0x10, 0x00, 0x14
    .byte 0x00, 0x10, 0x00, 0xF8, 0xFF

UNK_846F2D0:: @ 846F2D0
    .incbin "baserom.gba", 0x46F2D0, 0x1 @ null

UNK_846F2D1:: @ 846F2D1
    .incbin "baserom.gba", 0x46F2D1, 0x5 @ null

UNK_846F2D6:: @ 846F2D6
    .incbin "baserom.gba", 0x46F2D6, 0x1 @ null

UNK_846F2D7:: @ 846F2D7
    .incbin "baserom.gba", 0x46F2D7, 0x15 @ null

UNK_846F2EC:: @ 846F2EC
    .incbin "baserom.gba", 0x46F2EC, 0xC @ null

kObjTiles_846F2F8:: @ 846F2F8
    obj_tiles kUGfx_846E4D0, 0x800, 1
    obj_tiles kUGfx_846E7FC, 0xE00, 2
    obj_tiles kUGfx_846EB78, 0x700, 3
    obj_tiles kUGfx_846ECC4, 0x2C0, 4
    obj_tiles NULL, 0x0, 0

kObjPal_846F320:: @ 846F320
    obj_pal kPalette_846E470, 1
    obj_pal kPalette_846E490, 2
    obj_pal kPalette_846E4B0, 4
    obj_pal NULL, 0

kAnimCmd_846F340:: @ 846F340
    obj_image_anim_frame 0, 0
    obj_image_anim_end

kAnimCmd_846F348:: @ 846F348
    obj_image_anim_frame 0, 4
    obj_image_anim_frame 16, 4
    obj_image_anim_frame 32, 4
    obj_image_anim_end

kAnimCmd_846F358:: @ 846F358
    obj_image_anim_frame 48, 2
    obj_image_anim_frame 64, 2
    obj_image_anim_frame 80, 2
    obj_image_anim_frame 96, 2
    obj_image_anim_end

kAnimCmd_846F36C:: @ 846F36C
    obj_image_anim_frame 0, 2
    obj_image_anim_frame 4, 2
    obj_image_anim_frame 8, 2
    obj_image_anim_frame 12, 2
    obj_image_anim_frame 16, 2
    obj_image_anim_frame 20, 2
    obj_image_anim_jump 0

kAnimCmd_846F388:: @ 846F388
    obj_image_anim_frame 24, 4
    obj_image_anim_frame 28, 4
    obj_image_anim_frame 32, 4
    obj_image_anim_frame 36, 4
    obj_image_anim_frame 40, 4
    obj_image_anim_frame 44, 4
    obj_image_anim_frame 48, 4
    obj_image_anim_frame 52, 4
    obj_image_anim_jump 0

kAnimCmd_846F3AC:: @ 846F3AC
    obj_image_anim_frame 20, 0
    obj_image_anim_end

kAnimCmd_846F3B4:: @ 846F3B4
    obj_image_anim_frame 0, 0
    obj_image_anim_end

kAffineAnimCmd_846F3BC:: @ 846F3BC
    obj_rot_scal_anim_frame 256, 256, 0, 0
    obj_rot_scal_anim_frame 0, 0, 2, 1
    obj_rot_scal_anim_jump 1

kAffineAnimCmd_846F3D4:: @ 846F3D4
    obj_rot_scal_anim_frame 256, 256, 0, 0
    obj_rot_scal_anim_frame 0, 0, -2, 1
    obj_rot_scal_anim_jump 1

kAnimCmds_846F3EC:: @ 846F3EC
    .4byte kAnimCmd_846F340 @ 846F340

kAnimCmds_846F3F0:: @ 846F3F0
    .4byte kAnimCmd_846F348 @ 846F348
    .4byte kAnimCmd_846F358 @ 846F358

kAnimCmds_846F3F8:: @ 846F3F8
    .4byte kAnimCmd_846F36C @ 846F36C
    .4byte kAnimCmd_846F388 @ 846F388

kAnimCmds_846F400:: @ 846F400
    .4byte kAnimCmd_846F3AC @ 846F3AC

kAnimCmds_846F404:: @ 846F404
    .4byte kAnimCmd_846F3B4 @ 846F3B4

kAffineAnimCmds_846F408:: @ 846F408
    .4byte kAffineAnimCmd_846F3BC @ 846F3BC
    .4byte kAffineAnimCmd_846F3D4 @ 846F3D4

kSpriteTemplate_846F410:: @ 846F410
    spr_template 1, 1, kOAM_83AC9E0, kAnimCmds_846F3EC, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kSpriteTemplate_846F428:: @ 846F428
    spr_template 2, 2, kOAM_83AC9D8, kAnimCmds_846F3F0, NULL, kDummySpriteAffineAnimTable, sub_814EFD0

kSpriteTemplate_846F440:: @ 846F440
    spr_template 3, 2, kOAM_83AC9D0, kAnimCmds_846F3F8, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kSpriteTemplate_846F458:: @ 846F458
    spr_template 4, 4, kOAM_83ACA08, kAnimCmds_846F400, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kSpriteTemplate_846F470:: @ 846F470
    spr_template 5, 5, kOAM_83ACA98, kAnimCmds_846F404, NULL, kAffineAnimCmds_846F408, objc_nullsub

kUnk15_846F488:: @ 846F488
    .byte 9, 2, 8, 0
    .2byte 156, 0
    .4byte kObjTiles_846F2F8+0x18
    .4byte kObjPal_846F320+0x10
    .byte 8, 2, 8, 0
    .2byte 180, 0
    .4byte kObjTiles_846F2F8+0x18
    .4byte kObjPal_846F320+0x10
    .byte 8, 2, 8, 0
    .2byte 204, 0
    .4byte kObjTiles_846F2F8+0x18
    .4byte kObjPal_846F320+0x10

kPointer_846F4B8:: @ 846F4B8
    .4byte kText_841D034 @ 841D034
    .4byte kText_841D03C @ 841D03C
    .4byte kText_841D044 @ 841D044
    .4byte kText_841D0D4 @ 841D0D4
    .4byte kText_841D0E8 @ 841D0E8
    .4byte kText_841D100 @ 841D100

kPalette_846F4D0:: @ 846F4D0
    .incbin "baserom.gba", 0x46F4D0, 0x200

kLzGfx_846F6D0:: @ 846F6D0
    .incbin "baserom.gba", 0x46F6D0, 0x210

kLzTilemap_846F8E0:: @ 846F8E0
    .incbin "baserom.gba", 0x46F8E0, 0x193

    .align 2
kVRAMConfig_846FA74:: @ 846FA74
    .4byte 0x1F8
    .4byte 0x1081

kWindowTemplate_846FA7C:: @ 846FA7C
    window_template 0x00, 0x03, 0x00, 0x18, 0x03, 0x0F, 0x0001
    window_template 0x00, 0x03, 0x04, 0x16, 0x0F, 0x0F, 0x0049
    window_template 0x00, 0x19, 0x04, 0x02, 0x0F, 0x0F, 0x0193
    window_template_terminator

kPointer_846FA9C:: @ 846FA9C
    .4byte kText_841E2B4 @ 841E2B4
    .4byte kText_841E2BF @ 841E2BF
    .4byte kText_841E2C9 @ 841E2C9
    .4byte kText_841E2D4 @ 841E2D4

kPointer_846FAAC:: @ 846FAAC
    .4byte kText_841E245 @ 841E245
    .4byte kText_841E263 @ 841E263
    .4byte kText_841E273 @ 841E273
    .4byte kText_841E284 @ 841E284
    .4byte kText_841E29E @ 841E29E

UNK_846FAC0:: @ 846FAC0
    .incbin "baserom.gba", 0x46FAC0, 0x48 @ null

UNK_846FB08:: @ 846FB08
    .incbin "baserom.gba", 0x46FB08, 0x4 @ null

kGfx_846FB0C:: @ 846FB0C
    .incbin "baserom.gba", 0x46FB0C, 0x1000

kGfx_8470B0C:: @ 8470B0C
    .incbin "baserom.gba", 0x470B0C, 0x260

kUGfx_8470D6C:: @ 8470D6C
    .incbin "baserom.gba", 0x470D6C, 0x120

kUGfx_8470E8C:: @ 8470E8C
    .incbin "baserom.gba", 0x470E8C, 0x120

    .incbin "baserom.gba", 0x470FAC, 0x20 @ unknown

kUGfx_8470FCC:: @ 8470FCC
    .incbin "baserom.gba", 0x470FCC, 0x120

kUGfx_84710EC:: @ 84710EC
    .incbin "baserom.gba", 0x4710EC, 0x120

kUGfx_847120C:: @ 847120C
    .incbin "baserom.gba", 0x47120C, 0x120

kUGfx_847132C:: @ 847132C
    .incbin "baserom.gba", 0x47132C, 0x120

kUGfx_847144C:: @ 847144C
    .incbin "baserom.gba", 0x47144C, 0x120

kUGfx_847156C:: @ 847156C
    .incbin "baserom.gba", 0x47156C, 0x120

    .incbin "baserom.gba", 0x47168C, 0x20 @ unknown

kUGfx_84716AC:: @ 84716AC
    .incbin "baserom.gba", 0x4716AC, 0x120

kUGfx_84717CC:: @ 84717CC
    .incbin "baserom.gba", 0x4717CC, 0x120

    .incbin "baserom.gba", 0x4718EC, 0x20 @ unknown

kPalette_847190C:: @ 847190C
    .incbin "baserom.gba", 0x47190C, 0x20

kPalette_847192C:: @ 847192C
    .incbin "baserom.gba", 0x47192C, 0x20

kPalette_847194C:: @ 847194C
    .incbin "baserom.gba", 0x47194C, 0x20

kPalette_847196C:: @ 847196C
    .incbin "baserom.gba", 0x47196C, 0x20

kPalette_847198C:: @ 847198C
    .incbin "baserom.gba", 0x47198C, 0x20

kPalette_84719AC:: @ 84719AC
    .incbin "baserom.gba", 0x4719AC, 0x20

kPalette_84719CC:: @ 84719CC
    .incbin "baserom.gba", 0x4719CC, 0x20

kPalette_84719EC:: @ 84719EC
    .incbin "baserom.gba", 0x4719EC, 0x20

kPalette_8471A0C:: @ 8471A0C
    .incbin "baserom.gba", 0x471A0C, 0x20

kPalette_8471A2C:: @ 8471A2C
    .incbin "baserom.gba", 0x471A2C, 0x20

kGfx_8471A4C:: @ 8471A4C
    .incbin "baserom.gba", 0x471A4C, 0x120

kGfx_8471B6C:: @ 8471B6C
    .incbin "baserom.gba", 0x471B6C, 0x280

kPalette_8471DEC:: @ 8471DEC
    .incbin "baserom.gba", 0x471DEC, 0xA0

kUnk14_8471E8C:: @ 8471E8C
    .4byte kUGfx_8470D6C, kPalette_847190C
    .4byte kUGfx_8470E8C, kPalette_847192C
    .4byte kUGfx_8470FCC, kPalette_847194C
    .4byte kUGfx_84710EC, kPalette_847196C
    .4byte kUGfx_847120C, kPalette_847198C
    .4byte kUGfx_847132C, kPalette_84719AC
    .4byte kUGfx_847144C, kPalette_84719CC
    .4byte kUGfx_847156C, kPalette_84719EC
    .4byte kUGfx_84716AC, kPalette_8471A0C
    .4byte kUGfx_84717CC, kPalette_8471A2C

kPointer_8471EDC:: @ 8471EDC
    .4byte pq_local_npc_255_override_func_0_gp0 @ 81504A9
    .4byte pq_local_npc_255_override_func_1_on_bike @ 81504E9
    .4byte pq_local_npc_255_override_func_2_gp4 @ 8150531
    .4byte pq_local_npc_255_override_func_3_gp2 @ 8150709
    .4byte pq_local_npc_255_override_func_4 @ 81507CD
    .4byte pq_local_npc_255_override_func_5 @ 81507D9
    .4byte pq_local_npc_255_override_func_6 @ 81507E5
    .4byte pq_local_npc_255_override_func_7 @ 81507F1
    .4byte pq_local_npc_255_override_func_8 @ 815077D

    .incbin "baserom.gba", 0x471F00, 0x50 @ unknown

kBasicItem_8471F50:: @ 8471F50
    .byte 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x03, 0x08, 0x09, 0x00, 0x00, 0x01, 0x02, 0x05, 0x06, 0x03, 0x04, 0x05, 0x08
    .byte 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x02, 0x09, 0x00, 0x00, 0x01, 0x04, 0x05
    .byte 0x06, 0x07, 0x02, 0x03, 0x04, 0x09, 0x00, 0x00, 0x01, 0x06, 0x07, 0x02, 0x03, 0x04, 0x05, 0x06, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x01
    .byte 0x00, 0x00, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x01, 0x02, 0x03, 0x00, 0x00, 0x05, 0x06, 0x07, 0x08, 0x01, 0x02, 0x03, 0x04, 0x05, 0x00, 0x00, 0x07
    .byte 0x08, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04
    .byte 0x05, 0x06, 0x07, 0x08, 0x09, 0x00, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x00, 0x01, 0x02, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x00, 0x01
    .byte 0x02, 0x03, 0x04, 0x06, 0x07, 0x08, 0x09, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x08, 0x09, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08

UNK_8472063:: @ 8472063
    .incbin "baserom.gba", 0x472063, 0x4B @ null

UNK_84720AE:: @ 84720AE
    .incbin "baserom.gba", 0x4720AE, 0x4E @ null

kBasicItem_84720FC:: @ 84720FC
    .byte 0x09, 0x09, 0x09, 0x09, 0x01
    .byte 0x01, 0x01, 0x09, 0x09, 0x09
    .byte 0x09, 0x09, 0x09, 0x09, 0x00
    .byte 0x00, 0x01, 0x01, 0x00, 0x09
    .byte 0x09, 0x09, 0x09, 0x09, 0x02
    .byte 0x02, 0x00, 0x00, 0x01, 0x01
    .byte 0x01, 0x09, 0x09, 0x09, 0x03
    .byte 0x03, 0x00, 0x00, 0x01, 0x01
    .byte 0x02, 0x02, 0x03, 0x09, 0x03
    .byte 0x03, 0x04, 0x04, 0x00, 0x00
    .byte 0x01, 0x01, 0x02, 0x02, 0x03

UNK_8472133:: @ 8472133
    .incbin "baserom.gba", 0x472133, 0x19 @ null

kPalette_847214C:: @ 847214C
    .incbin "baserom.gba", 0x47214C, 0xC0

kLzGfx_847220C:: @ 847220C
    .incbin "baserom.gba", 0x47220C, 0x1B1

    .align 2
kPalette_84723C0:: @ 84723C0
    .incbin "baserom.gba", 0x4723C0, 0x20

kLzGfx_84723E0:: @ 84723E0
    .incbin "baserom.gba", 0x4723E0, 0x88D

    .align 2
kLzGfx_8472C70:: @ 8472C70
    .incbin "baserom.gba", 0x472C70, 0xDC9

    .align 2
kLzGfx_8473A3C:: @ 8473A3C
    .incbin "baserom.gba", 0x473A3C, 0x93

    .align 2
kLzGfx_8473AD0:: @ 8473AD0
    .incbin "baserom.gba", 0x473AD0, 0x148

kLzGfx_8473C18:: @ 8473C18
    .incbin "baserom.gba", 0x473C18, 0x121C

kLzTilemap_8474E34:: @ 8474E34
    .incbin "baserom.gba", 0x474E34, 0x269

    .align 2
kLzTilemap_84750A0:: @ 84750A0
    .incbin "baserom.gba", 0x4750A0, 0x24D

    .align 2
kLzTilemap_84752F0:: @ 84752F0
    .incbin "baserom.gba", 0x4752F0, 0x249

    .align 2
UNK_847553C:: @ 847553C
    .incbin "baserom.gba", 0x47553C, 0xC @ null

UNK_8475548:: @ 8475548
    .incbin "baserom.gba", 0x475548, 0x8 @ null

UNK_8475550:: @ 8475550
    .incbin "baserom.gba", 0x475550, 0x8 @ null

UNK_8475558:: @ 8475558
    .incbin "baserom.gba", 0x475558, 0x20 @ null

kPointer_8475578:: @ 8475578
    .4byte sub_8150C78 @ 8150C79
    .4byte sub_8150CBC @ 8150CBD
    .4byte sub_8150CF4 @ 8150CF5
    .4byte sub_8150D7C @ 8150D7D
    .4byte sub_8150DA4 @ 8150DA5
    .4byte sub_8150FDC @ 8150FDD
    .4byte sub_8151198 @ 8151199
    .4byte sub_81512B4 @ 81512B5
    .4byte sub_8151488 @ 8151489
    .4byte sub_81514F0 @ 81514F1
    .4byte sub_815159C @ 815159D
    .4byte sub_8150F40 @ 8150F41

kPointer_84755A8:: @ 84755A8
    .4byte sub_8150C78 @ 8150C79
    .4byte sub_8150CBC @ 8150CBD
    .4byte sub_8150CF4 @ 8150CF5
    .4byte sub_8150D7C @ 8150D7D
    .4byte sub_8150E68 @ 8150E69
    .4byte sub_815109C @ 815109D
    .4byte sub_8151198 @ 8151199
    .4byte sub_81512B4 @ 81512B5
    .4byte sub_8151488 @ 8151489
    .4byte sub_81514F0 @ 81514F1
    .4byte sub_815159C @ 815159D
    .4byte sub_8150FC4 @ 8150FC5

UNK_84755D8:: @ 84755D8
    .incbin "baserom.gba", 0x4755D8, 0x8 @ null

kWindowTemplate_84755E0:: @ 84755E0
    window_template 0x00, 0x01, 0x01, 0x1C, 0x0B, 0x0F, 0x0001

kPointer_84755E8:: @ 84755E8
    .4byte kText_841CC9F @ 841CC9F
    .4byte kText_841CCBC @ 841CCBC
    .4byte kText_841CCCC @ 841CCCC
    .4byte kText_841CCD8 @ 841CCD8

UNK_84755F8:: @ 84755F8
    .incbin "baserom.gba", 0x4755F8, 0x4 @ null

UNK_84755FC:: @ 84755FC
    .incbin "baserom.gba", 0x4755FC, 0x6 @ null

UNK_8475602:: @ 8475602
    .incbin "baserom.gba", 0x475602, 0x6 @ null

kBasicItem_8475608:: @ 8475608
    .2byte 0x270F, 0x0000, 0x005A, 0x270F, 0x270F
    .2byte 0x270F, 0x0046, 0x270F, 0x270F, 0x0000
    .2byte 0x270F, 0x0000, 0x270F, 0x270F, 0x003C
    .2byte 0x0000, 0x270F, 0x270F, 0x270F, 0x0000

kText_8475630:: @ 8475630
    .string "ÀÁÂÇÈÉÊ$"

kText_8475638:: @ 8475638
    .string "ABCDEFG$"

kText_8475640:: @ 8475640
    .string "0123456$"

kPointer_8475648:: @ 8475648
    .4byte kText_8475630 @ 8475630
    .4byte kText_8475630 @ 8475630
    .4byte kText_8475630 @ 8475630
    .4byte kText_8475638 @ 8475638
    .4byte kText_8475640 @ 8475640

kVRAMConfig_847565C:: @ 847565C
    .4byte 0x1E0
    .4byte 0x12C9
    .4byte 0x12EA
    .4byte 0x21FF

    .incbin "baserom.gba", 0x47566C, 0x8 @ unknown

kWindowTemplate_8475674:: @ 8475674
    window_template 0x00, 0x01, 0x01, 0x1C, 0x03, 0x0D, 0x0013
    window_template 0x00, 0x01, 0x06, 0x1C, 0x0D, 0x0D, 0x0067

kWindowTemplate_8475684:: @ 8475684
    window_template 0x00, 0x01, 0x06, 0x1C, 0x07, 0x0D, 0x0067

kWindowTemplate_847568C:: @ 847568C
    window_template 0x00, 0x01, 0x08, 0x13, 0x03, 0x0D, 0x0013
    window_template 0x00, 0x16, 0x07, 0x06, 0x04, 0x0D, 0x004C

kWindowTemplate_847569C:: @ 847569C
    window_template 0x00, 0x04, 0x06, 0x16, 0x05, 0x0D, 0x0013

kWindowTemplate_84756A4:: @ 84756A4
    window_template 0x00, 0x05, 0x08, 0x13, 0x03, 0x0D, 0x0013

    .incbin "baserom.gba", 0x4756AC, 0x1FC @ unknown

kPalette_84758A8:: @ 84758A8
    .incbin "baserom.gba", 0x4758A8, 0x40

kPalette_84758E8:: @ 84758E8
    .incbin "baserom.gba", 0x4758E8, 0x20

kPalette_8475908:: @ 8475908
    .incbin "baserom.gba", 0x475908, 0x20

kPalette_8475928:: @ 8475928
    .incbin "baserom.gba", 0x475928, 0x20

kPalette_8475948:: @ 8475948
    .incbin "baserom.gba", 0x475948, 0x20

kLzGfx_8475968:: @ 8475968
    .incbin "baserom.gba", 0x475968, 0x1B1

    .align 2
kPalette_8475B1C:: @ 8475B1C
    .incbin "baserom.gba", 0x475B1C, 0x20

kLzGfx_8475B3C:: @ 8475B3C
    .incbin "baserom.gba", 0x475B3C, 0x88D

    .align 2
kLzGfx_84763CC:: @ 84763CC
    .incbin "baserom.gba", 0x4763CC, 0xDC9

    .align 2
kLzGfx_8477198:: @ 8477198
    .incbin "baserom.gba", 0x477198, 0x93

    .align 2
kLzGfx_847722C:: @ 847722C
    .incbin "baserom.gba", 0x47722C, 0x148

kLzGfx_8477374:: @ 8477374
    .incbin "baserom.gba", 0x477374, 0x121C

kLzTilemap_8478590:: @ 8478590
    .incbin "baserom.gba", 0x478590, 0x269

    .align 2
kLzTilemap_84787FC:: @ 84787FC
    .incbin "baserom.gba", 0x4787FC, 0x24D

    .align 2
kLzTilemap_8478A4C:: @ 8478A4C
    .incbin "baserom.gba", 0x478A4C, 0x249

    .align 2
UNK_8478C98:: @ 8478C98
    .incbin "baserom.gba", 0x478C98, 0x8 @ null

kOAM_8478CA0:: @ 8478CA0
    .2byte 0x0000
    .2byte 0x4000
    .2byte 0x0000
    .2byte 0x0000

kOAM_8478CA8:: @ 8478CA8
    .2byte 0x0000
    .2byte 0x4000
    .2byte 0x0800
    .2byte 0x0000

kOAM_8478CB0:: @ 8478CB0
    .2byte 0x4000
    .2byte 0xC000
    .2byte 0x0C00
    .2byte 0x0000

kAnimCmd_8478CB8:: @ 8478CB8
    obj_image_anim_frame 0, 20
    obj_image_anim_jump 0

kAnimCmd_8478CC0:: @ 8478CC0
    obj_image_anim_frame 64, 20
    obj_image_anim_jump 0

kAnimCmd_8478CC8:: @ 8478CC8
    obj_image_anim_frame 128, 20
    obj_image_anim_jump 0

kAnimCmd_8478CD0:: @ 8478CD0
    obj_image_anim_frame 192, 20
    obj_image_anim_jump 0

kAnimCmd_8478CD8:: @ 8478CD8
    obj_image_anim_frame 256, 20
    obj_image_anim_jump 0

kAnimCmds_8478CE0:: @ 8478CE0
    .4byte kAnimCmd_8478CB8 @ 8478CB8
    .4byte kAnimCmd_8478CC0 @ 8478CC0
    .4byte kAnimCmd_8478CC8 @ 8478CC8
    .4byte kAnimCmd_8478CD0 @ 8478CD0
    .4byte kAnimCmd_8478CD8 @ 8478CD8

kAnimCmd_8478CF4:: @ 8478CF4
    obj_image_anim_frame 0, 20
    obj_image_anim_jump 0

kAnimCmd_8478CFC:: @ 8478CFC
    obj_image_anim_frame 4, 20
    obj_image_anim_jump 0

kAnimCmd_8478D04:: @ 8478D04
    obj_image_anim_frame 8, 20
    obj_image_anim_jump 0

kAnimCmds_8478D0C:: @ 8478D0C
    .4byte kAnimCmd_8478CF4 @ 8478CF4
    .4byte kAnimCmd_8478CFC @ 8478CFC
    .4byte kAnimCmd_8478D04 @ 8478D04

kAnimCmd_8478D18:: @ 8478D18
    obj_image_anim_frame 0, 20
    obj_image_anim_jump 0

kAnimCmd_8478D20:: @ 8478D20
    obj_image_anim_frame 4, 20
    obj_image_anim_jump 0

kAnimCmd_8478D28:: @ 8478D28
    obj_image_anim_frame 8, 20
    obj_image_anim_jump 0

kAnimCmd_8478D30:: @ 8478D30
    obj_image_anim_frame 12, 20
    obj_image_anim_jump 0

kAnimCmd_8478D38:: @ 8478D38
    obj_image_anim_frame 16, 20
    obj_image_anim_jump 0

kAnimCmd_8478D40:: @ 8478D40
    obj_image_anim_frame 20, 20
    obj_image_anim_jump 0

kAnimCmd_8478D48:: @ 8478D48
    obj_image_anim_frame 24, 20
    obj_image_anim_jump 0

kAnimCmd_8478D50:: @ 8478D50
    obj_image_anim_frame 28, 20
    obj_image_anim_jump 0

kAnimCmd_8478D58:: @ 8478D58
    obj_image_anim_frame 32, 20
    obj_image_anim_jump 0

kAnimCmds_8478D60:: @ 8478D60
    .4byte kAnimCmd_8478D18 @ 8478D18
    .4byte kAnimCmd_8478D20 @ 8478D20
    .4byte kAnimCmd_8478D28 @ 8478D28
    .4byte kAnimCmd_8478D30 @ 8478D30
    .4byte kAnimCmd_8478D38 @ 8478D38
    .4byte kAnimCmd_8478D40 @ 8478D40
    .4byte kAnimCmd_8478D48 @ 8478D48
    .4byte kAnimCmd_8478D50 @ 8478D50
    .4byte kAnimCmd_8478D58 @ 8478D58

kAnimCmd_8478D84:: @ 8478D84
    obj_image_anim_frame 0, 20
    obj_image_anim_jump 0

kAnimCmds_8478D8C:: @ 8478D8C
    .4byte kAnimCmd_8478D84 @ 8478D84

kObjPal_8478D90:: @ 8478D90
    obj_pal kPalette_84758E8, 0
    obj_pal kPalette_8475908, 1
    obj_pal kPalette_8475928, 2

kSpriteTemplate_8478DA8:: @ 8478DA8
    spr_template 1, 2, kOAM_8478CA0, kAnimCmds_8478D0C, NULL, kDummySpriteAffineAnimTable, nullsub_114

    .incbin "baserom.gba", 0x478DC0, 0xC @ unknown

kObjPal_8478DCC:: @ 8478DCC
    obj_pal kPalette_8475948, 3

UNK_8478DD4:: @ 8478DD4
    .incbin "baserom.gba", 0x478DD4, 0x8 @ null

kSpriteTemplate_8478DDC:: @ 8478DDC
    spr_template 2, 3, kOAM_8478CA8, kAnimCmds_8478D60, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kSpriteTemplate_8478DF4:: @ 8478DF4
    spr_template 2, 3, kOAM_8478CA0, kAnimCmds_8478D60, NULL, kDummySpriteAffineAnimTable, objc_nullsub

UNK_8478E0C:: @ 8478E0C
    .incbin "baserom.gba", 0x478E0C, 0x2 @ null

UNK_8478E0E:: @ 8478E0E
    .incbin "baserom.gba", 0x478E0E, 0xA @ null

kObjPal_8478E18:: @ 8478E18
    obj_pal kPalette_8475B1C, 6

kSpriteTemplate_8478E20:: @ 8478E20
    spr_template 5, 6, kOAM_8478CB0, kAnimCmds_8478D8C, NULL, kDummySpriteAffineAnimTable, sub_81543E8

kRBoxBar_8478E38:: @ 8478E38
    .byte 0x01, 0x02, 0x03
    .byte 0x01, 0x04, 0x05
    .byte 0x01, 0x08, 0x09
    .byte 0x01, 0x06, 0x07

kUnknown_8478E44:: @ 8478E44
    .incbin "baserom.gba", 0x478E44, 0x4 @ null

kUnknown_8478E48:: @ 8478E48
    .incbin "baserom.gba", 0x478E48, 0x8 @ null

kUnknown_8478E50:: @ 8478E50
    .incbin "baserom.gba", 0x478E50, 0xC @ null

kUnknown_8478E5C:: @ 8478E5C
    .incbin "baserom.gba", 0x478E5C, 0x10 @ null

kUnknown_8478E6C:: @ 8478E6C
    .incbin "baserom.gba", 0x478E6C, 0x14 @ null

kPointer_8478E80:: @ 8478E80
    .4byte kUnknown_8478E44 @ 8478E44
    .4byte kUnknown_8478E48 @ 8478E48
    .4byte kUnknown_8478E50 @ 8478E50
    .4byte kUnknown_8478E5C @ 8478E5C
    .4byte kUnknown_8478E6C @ 8478E6C

kPointer_8478E94:: @ 8478E94
    .4byte kText_841CD6B @ 841CD6B
    .4byte kText_841CD6E @ 841CD6E
    .4byte kText_841CD71 @ 841CD71
    .4byte kText_841CD74 @ 841CD74
    .4byte kText_841CD77 @ 841CD77

UNK_8478EA8:: @ 8478EA8
    .incbin "baserom.gba", 0x478EA8, 0x8 @ null

kBasicItem_8478EB0:: @ 8478EB0
    .byte 0x1E, 0x00, 0x2D, 0x00, 0x3C
    .byte 0x00, 0x4B, 0x00, 0x5A, 0x00

kBasicItem_8478EBA:: @ 8478EBA
    .byte 0x0C, 0x00, 0x1C, 0x00, 0x2C
    .byte 0x00, 0x3C, 0x00, 0x4C, 0x00

kBasicItem_8478EC4:: @ 8478EC4
    .4byte 0x00000000
    .4byte sub_8154A2C
    .4byte 0x00000001
    .4byte sub_8154B34
    .4byte 0x00000002
    .4byte sub_8154F80
    .4byte 0x00000003
    .4byte sub_81556E0
    .4byte 0x00000004
    .4byte sub_8155A78
    .4byte 0x00000005
    .4byte sub_8155B4C
    .4byte 0x00000006
    .4byte sub_8155C2C
    .4byte 0x00000007
    .4byte sub_8155C80
    .4byte 0x00000008
    .4byte unused_0
    .4byte 0x00000009
    .4byte nullsub_115

kBasicItem_8478F14:: @ 8478F14
    .byte 0x00, 0x01, 0x02, 0x03, 0x04

    .align 2
kPointer_8478F1C:: @ 8478F1C
    .4byte dp01t_00_5_getattr @ 815712D
    .4byte sub_8157750 @ 8157751
    .4byte dp01t_02_5_setattr @ 815775D
    .4byte dp01t_03_5_nop @ 81580D5
    .4byte sub_81580E0 @ 81580E1
    .4byte sub_815823C @ 815823D
    .4byte sub_81582C0 @ 81582C1
    .4byte sub_8158344 @ 8158345
    .4byte sub_8158544 @ 8158545
    .4byte dp01t_09_5_nop @ 8158611
    .4byte sub_815861C @ 815861D
    .4byte dp01t_0B_5_nop @ 8158749
    .4byte sub_8158754 @ 8158755
    .4byte sub_81587A8 @ 81587A9
    .4byte dp01t_0E_5_nop @ 8158809
    .4byte dp01t_0F_5_move_anim @ 8158815
    .4byte dp01t_10_5_message @ 8158A89
    .4byte dp01t_11_5_message_for_player_only @ 8158AFD
    .4byte dp01t_12_5_battle_menu @ 8158B61
    .4byte dp01t_13_5_nop @ 8158BF9
    .4byte dp01t_14_5_move_menu_pokedude @ 8158C49
    .4byte sub_8158C90 @ 8158C91
    .4byte sub_8158CF4 @ 8158CF5
    .4byte dp01t_17_5_nop @ 8158DCD
    .4byte sub_8158DD8 @ 8158DD9
    .4byte sub_8158ED0 @ 8158ED1
    .4byte sub_8158F6C @ 8158F6D
    .4byte dp01t_1B_5_move_anim_start_t2_bysit @ 8159015
    .4byte dp01t_1C_5_status_ailment_toggle @ 815907D
    .4byte dp01t_1D_5_nop @ 8159101
    .4byte dp01t_1E_5_nop @ 815910D
    .4byte dp01t_1F_5_nop @ 8159119
    .4byte dp01t_20_5_nop @ 8159125
    .4byte dp01t_21_5_nop @ 8159131
    .4byte dp01t_22_5_nop @ 815913D
    .4byte dp01t_23_5_nop @ 8159149
    .4byte dp01t_24_5_nop @ 8159155
    .4byte dp01t_25_5_nop @ 8159161
    .4byte dp01t_26_5_nop @ 815916D
    .4byte dp01t_27_5_nop @ 8159179
    .4byte dp01t_28_5_nop @ 8159185
    .4byte dp01t_29_5_blink @ 8159191
    .4byte dp01t_2A_5_nop @ 8159201
    .4byte sub_815920C @ 815920D
    .4byte dp01t_2C_5_fanfare @ 815923D
    .4byte sub_815926C @ 815926D
    .4byte dp01t_2E_5_battle_intro @ 81592D1
    .4byte sub_8159304 @ 8159305
    .4byte sub_8159660 @ 8159661
    .4byte dp01t_31_5_nop @ 81596E5
    .4byte dp01t_32_5_dp11b_obj_free @ 81596F1
    .4byte dp01t_33_5_nop @ 8159715
    .4byte dp01t_34_5_move_anim_start_t3 @ 8159721
    .4byte dp01t_35_5_free_vram @ 815977D
    .4byte dp01t_36_5_nop @ 81597B9
    .4byte dp01t_37_5_flee_maybe @ 81597C5
    .4byte dp01t_38_5_nullsub @ 8159821

    .incbin "baserom.gba", 0x479000, 0x8 @ unknown

kUnknown_8479008:: @ 8479008
    .incbin "baserom.gba", 0x479008, 0x10 @ null

kUnknown_8479018:: @ 8479018
    .incbin "baserom.gba", 0x479018, 0x18 @ null

kUnknown_8479030:: @ 8479030
    .incbin "baserom.gba", 0x479030, 0x18 @ null

kUnknown_8479048:: @ 8479048
    .incbin "baserom.gba", 0x479048, 0x18 @ null

kPointer_8479060:: @ 8479060
    .4byte kUnknown_8479008 @ 8479008
    .4byte kUnknown_8479018 @ 8479018
    .4byte kUnknown_8479030 @ 8479030
    .4byte kUnknown_8479048 @ 8479048

kUnknown_8479070:: @ 8479070
    .incbin "baserom.gba", 0x479070, 0x10 @ null

kUnknown_8479080:: @ 8479080
    .incbin "baserom.gba", 0x479080, 0x20 @ null

kUnknown_84790A0:: @ 84790A0
    .incbin "baserom.gba", 0x4790A0, 0x20 @ null

kUnknown_84790C0:: @ 84790C0
    .incbin "baserom.gba", 0x4790C0, 0x18 @ null

kPointer_84790D8:: @ 84790D8
    .4byte kUnknown_8479070 @ 8479070
    .4byte kUnknown_8479080 @ 8479080
    .4byte kUnknown_84790A0 @ 84790A0
    .4byte kUnknown_84790C0 @ 84790C0

kBasicItem_84790E8:: @ 84790E8
    .4byte 0x00000012
    .4byte sub_8159BA8
    .4byte 0x00040110
    .4byte sub_8159BA8
    .4byte 0x00000012
    .4byte sub_8159BA8
    .4byte 0x000D0010
    .4byte sub_8159BA8

kBasicItem_8479108:: @ 8479108
    .4byte 0x00000012
    .4byte NULL
    .4byte 0x00000012
    .4byte sub_8159D04
    .4byte 0x00000015
    .4byte sub_8159BA8
    .4byte 0x00040110
    .4byte sub_8159BA8
    .4byte 0x000D0010
    .4byte sub_8159BA8

kBasicItem_8479130:: @ 8479130
    .4byte 0x00040110
    .4byte sub_8159BA8
    .4byte 0x00000012
    .4byte sub_8159BA8
    .4byte 0x00000016
    .4byte sub_8159BA8
    .4byte 0x00040110
    .4byte sub_8159BA8
    .4byte 0x00000012
    .4byte sub_8159BA8
    .4byte 0x00000014
    .4byte sub_8159BA8
    .4byte 0x000D0010
    .4byte sub_8159BA8

kBasicItem_8479168:: @ 8479168
    .4byte 0x00000012
    .4byte sub_8159BA8
    .4byte 0x00000012
    .4byte NULL
    .4byte 0x00000012
    .4byte sub_8159BA8
    .4byte 0x006B0110
    .4byte sub_8159BA8
    .4byte 0x00000015
    .4byte sub_8159BA8
    .4byte 0x00000037
    .4byte sub_8159BA8

kPointer_8479198:: @ 8479198
    .4byte kBasicItem_84790E8 @ 84790E8
    .4byte kBasicItem_8479108 @ 8479108
    .4byte kBasicItem_8479130 @ 8479130
    .4byte kBasicItem_8479168 @ 8479168

kPointer_84791A8:: @ 84791A8
    .4byte Text_81C5F69 @ 81C5F69
    .4byte Text_81C5FA7 @ 81C5FA7
    .4byte Text_81C5FDC @ 81C5FDC
    .4byte Text_81C601C @ 81C601C

kPointer_84791B8:: @ 84791B8
    .4byte Text_81C60FA @ 81C60FA
    .4byte Text_81C60FA @ 81C60FA
    .4byte Text_81C615A @ 81C615A
    .4byte Text_81C6196 @ 81C6196
    .4byte Text_81C61EA @ 81C61EA

kPointer_84791CC:: @ 84791CC
    .4byte Text_81C6202 @ 81C6202
    .4byte Text_81C6301 @ 81C6301
    .4byte Text_81C63A9 @ 81C63A9
    .4byte Text_81C63F9 @ 81C63F9
    .4byte Text_81C6446 @ 81C6446
    .4byte Text_81C657A @ 81C657A
    .4byte Text_81C6637 @ 81C6637

kPointer_84791E8:: @ 84791E8
    .4byte Text_81C6645 @ 81C6645
    .4byte Text_81C6645 @ 81C6645
    .4byte Text_81C66CF @ 81C66CF
    .4byte Text_81C6787 @ 81C6787
    .4byte Text_81C684B @ 81C684B
    .4byte Text_81C686C @ 81C686C

kUnknown_8479200:: @ 8479200
    .incbin "baserom.gba", 0x479200, 0x30 @ null

kUnknown_8479230:: @ 8479230
    .incbin "baserom.gba", 0x479230, 0x30 @ null

kUnknown_8479260:: @ 8479260
    .incbin "baserom.gba", 0x479260, 0x40 @ null

kUnknown_84792A0:: @ 84792A0
    .incbin "baserom.gba", 0x4792A0, 0x30 @ null

kPointer_84792D0:: @ 84792D0
    .4byte kUnknown_8479200 @ 8479200
    .4byte kUnknown_8479230 @ 8479230
    .4byte kUnknown_8479260 @ 8479260
    .4byte kUnknown_84792A0 @ 84792A0

kVRAMConfig_84792E0:: @ 84792E0
    .4byte 0x11F0
    .4byte 0x1E1
    .4byte 0x21D2
    .4byte 0x31CB

kWindowTemplate_84792F0:: @ 84792F0
    window_template 0x01, 0x02, 0x0F, 0x1A, 0x04, 0x03, 0x00EA
    window_template 0x00, 0x04, 0x01, 0x16, 0x0C, 0x03, 0x0152
    window_template_terminator

kListMenuItem_8479308:: @ 8479308
    .4byte kText_841B7A4, 0
    .4byte kText_841B7BC, 1
    .4byte kText_841B7D6, 2
    .4byte kText_841B7EE, 3
    .4byte kText_841B807, 4
    .4byte kText_841B81B, 5
    .4byte kText_841B836, -2

kListMenuItem_8479340:: @ 8479340
    .4byte kText_841B7A4, 0
    .4byte kText_841B7BC, 1
    .4byte kText_841B7D6, 2
    .4byte kText_841B7EE, 3
    .4byte kText_841B836, -2

kListMenuTemplate_8479368:: @ 8479368
    .4byte kListMenuItem_8479308
    .4byte NULL
    .4byte NULL
    .2byte 7, 6

    .incbin "baserom.gba", 0x479378, 0x8 @ unknown

UNK_8479380:: @ 8479380
    .incbin "baserom.gba", 0x479380, 0x10 @ null

UNK_8479390:: @ 8479390
    .incbin "baserom.gba", 0x479390, 0x8 @ null

kPointer_8479398:: @ 8479398
    .4byte sub_815B38C @ 815B38D
    .4byte sub_815B404 @ 815B405
    .4byte sub_815B454 @ 815B455
    .4byte sub_815B4C0 @ 815B4C1
    .4byte sub_815B5F8 @ 815B5F9
    .4byte sub_815B588 @ 815B589
    .4byte sub_815B5F8 @ 815B5F9
    .4byte sub_815B624 @ 815B625
    .4byte sub_815B664 @ 815B665
    .4byte sub_815B6A8 @ 815B6A9
    .4byte sub_815B740 @ 815B741
    .4byte sub_815B9F0 @ 815B9F1
    .4byte sub_815B5C0 @ 815B5C1
    .4byte sub_815B5F8 @ 815B5F9
    .4byte sub_815B624 @ 815B625
    .4byte sub_815B7E4 @ 815B7E5
    .4byte sub_815B840 @ 815B841
    .4byte sub_815B8A4 @ 815B8A5
    .4byte sub_815B92C @ 815B92D

kPointer_84793E4:: @ 84793E4
    .4byte sub_815B38C @ 815B38D
    .4byte sub_815B404 @ 815B405
    .4byte sub_815B454 @ 815B455
    .4byte sub_815B4C0 @ 815B4C1
    .4byte sub_815B5F8 @ 815B5F9
    .4byte sub_815B588 @ 815B589
    .4byte sub_815B5F8 @ 815B5F9
    .4byte sub_815B624 @ 815B625
    .4byte sub_815B664 @ 815B665
    .4byte sub_815B6A8 @ 815B6A9
    .4byte sub_815B740 @ 815B741
    .4byte sub_815B9F0 @ 815B9F1
    .4byte sub_815B5C0 @ 815B5C1
    .4byte sub_815B5F8 @ 815B5F9
    .4byte sub_815B624 @ 815B625
    .4byte sub_815B7E4 @ 815B7E5
    .4byte sub_815B840 @ 815B841
    .4byte sub_815B8A4 @ 815B8A5
    .4byte sub_815B92C @ 815B92D

kPointer_8479430:: @ 8479430
    .4byte sub_815B38C @ 815B38D
    .4byte sub_815B404 @ 815B405
    .4byte sub_815B454 @ 815B455
    .4byte sub_815B4C0 @ 815B4C1
    .4byte sub_815B5F8 @ 815B5F9
    .4byte sub_815B588 @ 815B589
    .4byte sub_815B5F8 @ 815B5F9
    .4byte sub_815B624 @ 815B625
    .4byte sub_815B664 @ 815B665
    .4byte sub_815B6A8 @ 815B6A9
    .4byte sub_815B740 @ 815B741
    .4byte sub_815B9F0 @ 815B9F1
    .4byte sub_815B5C0 @ 815B5C1
    .4byte sub_815B5F8 @ 815B5F9
    .4byte sub_815B624 @ 815B625
    .4byte sub_815B7E4 @ 815B7E5
    .4byte sub_815B840 @ 815B841
    .4byte sub_815B8A4 @ 815B8A5
    .4byte sub_815B92C @ 815B92D

kPointer_847947C:: @ 847947C
    .4byte sub_815B38C @ 815B38D
    .4byte sub_815B404 @ 815B405
    .4byte sub_815B454 @ 815B455
    .4byte sub_815B4C0 @ 815B4C1
    .4byte sub_815B5F8 @ 815B5F9
    .4byte sub_815B588 @ 815B589
    .4byte sub_815B5F8 @ 815B5F9
    .4byte sub_815B624 @ 815B625
    .4byte sub_815B664 @ 815B665
    .4byte sub_815B6A8 @ 815B6A9
    .4byte sub_815B740 @ 815B741
    .4byte sub_815B9F0 @ 815B9F1
    .4byte sub_815B5C0 @ 815B5C1
    .4byte sub_815B5F8 @ 815B5F9
    .4byte sub_815B624 @ 815B625
    .4byte sub_815B7E4 @ 815B7E5
    .4byte sub_815B840 @ 815B841
    .4byte sub_815B8A4 @ 815B8A5
    .4byte sub_815B92C @ 815B92D

kPointer_84794C8:: @ 84794C8
    .4byte sub_815B38C @ 815B38D
    .4byte sub_815B404 @ 815B405
    .4byte sub_815B454 @ 815B455
    .4byte sub_815B4C0 @ 815B4C1
    .4byte sub_815B5F8 @ 815B5F9
    .4byte sub_815B588 @ 815B589
    .4byte sub_815B5F8 @ 815B5F9
    .4byte sub_815B624 @ 815B625
    .4byte sub_815B9F0 @ 815B9F1
    .4byte sub_815B5C0 @ 815B5C1
    .4byte sub_815B5F8 @ 815B5F9
    .4byte sub_815B624 @ 815B625
    .4byte sub_815B7E4 @ 815B7E5
    .4byte sub_815B840 @ 815B841
    .4byte sub_815B8A4 @ 815B8A5
    .4byte sub_815B92C @ 815B92D

kPointer_8479508:: @ 8479508
    .4byte sub_815B38C @ 815B38D
    .4byte sub_815B404 @ 815B405
    .4byte sub_815B454 @ 815B455
    .4byte sub_815B4C0 @ 815B4C1
    .4byte sub_815B5F8 @ 815B5F9
    .4byte sub_815B588 @ 815B589
    .4byte sub_815B5F8 @ 815B5F9
    .4byte sub_815B624 @ 815B625
    .4byte sub_815B9F0 @ 815B9F1
    .4byte sub_815B5C0 @ 815B5C1
    .4byte sub_815B5F8 @ 815B5F9
    .4byte sub_815B624 @ 815B625
    .4byte sub_815B7E4 @ 815B7E5
    .4byte sub_815B840 @ 815B841
    .4byte sub_815B8A4 @ 815B8A5
    .4byte sub_815B92C @ 815B92D

kPointer_8479548:: @ 8479548
    .4byte kPointer_8479398 @ 8479398
    .4byte kPointer_84793E4 @ 84793E4
    .4byte kPointer_8479430 @ 8479430
    .4byte kPointer_847947C @ 847947C
    .4byte kPointer_84794C8 @ 84794C8
    .4byte kPointer_8479508 @ 8479508

kPointer_8479560:: @ 8479560
    .4byte kText_841B8BF @ 841B8BF
    .4byte kText_841BB40 @ 841BB40
    .4byte kText_841BE76 @ 841BE76
    .4byte kText_841C23B @ 841C23B
    .4byte kText_841C459 @ 841C459
    .4byte kText_841C82A @ 841C82A

kPointer_8479578:: @ 8479578
    .4byte kText_841BA41 @ 841BA41
    .4byte kText_841BD10 @ 841BD10
    .4byte kText_841C0AF @ 841C0AF
    .4byte kText_841C384 @ 841C384
    .4byte kText_841C7B4 @ 841C7B4
    .4byte kText_841C994 @ 841C994

kTilemap_8479590:: @ 8479590
    .incbin "baserom.gba", 0x479590, 0x20

kBasicItem_84795B0:: @ 84795B0
    .byte 0xF8, 0xF8, 0x01, 0xC0
    .byte 0xF8, 0x00, 0x21, 0x80

kMapObjectSubspriteTable_84795B8:: @ 84795B8
    .4byte 0, NULL

kMapObjectSubspriteTable_84795C0:: @ 84795C0
    .4byte 2, kBasicItem_84795B0

kBasicItem_84795C8:: @ 84795C8
    .byte 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01
    .byte 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00
    .byte 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01
    .byte 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01
    .byte 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01
    .byte 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01
    .byte 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00
    .byte 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01
    .byte 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00

kBasicItem_8479658:: @ 8479658
    .byte 0x01, 0x04, 0x10, 0x40
    .byte 0x02, 0x04, 0x08, 0x20
    .byte 0x02, 0x04, 0x08, 0x20
    .byte 0x00, 0x00, 0x00, 0x00

kPalette_8479668:: @ 8479668
    .incbin "baserom.gba", 0x479668, 0x20

kLzGfx_8479688:: @ 8479688
    .incbin "baserom.gba", 0x479688, 0xBE

    .align 2
kLzGfx_8479748:: @ 8479748
    .incbin "baserom.gba", 0x479748, 0xEE

    .align 2
kUGfx_8479838:: @ 8479838
    .incbin "baserom.gba", 0x479838, 0x200

kUGfx_8479A38:: @ 8479A38
    .incbin "baserom.gba", 0x479A38, 0x220

kObjTiles_8479C58:: @ 8479C58
    obj_tiles kUGfx_8479838, 0x200, 4000
    obj_tiles kUGfx_8479A38, 0x220, 4001
    obj_tiles NULL, 0x0, 0

kAnimCmd_8479C70:: @ 8479C70
    obj_image_anim_frame 0, 12
    obj_image_anim_frame 8, 12
    obj_image_anim_jump 0

kAnimCmds_8479C7C:: @ 8479C7C
    .4byte kAnimCmd_8479C70 @ 8479C70

kOAM_8479C80:: @ 8479C80
    .2byte 0x8000
    .2byte 0x8000
    .2byte 0x0000
    .2byte 0x0000

kSpriteTemplate_8479C88:: @ 8479C88
    spr_template 4000, 65535, kOAM_8479C80, kAnimCmds_8479C7C, NULL, kDummySpriteAffineAnimTable, sub_815D518

kAnimCmd_8479CA0:: @ 8479CA0
    obj_image_anim_frame 0, 10
    obj_image_anim_frame 4, 20
    obj_image_anim_frame 8, 20
    obj_image_anim_frame 12, 30
    obj_image_anim_end

kAnimCmds_8479CB4:: @ 8479CB4
    .4byte kAnimCmd_8479CA0 @ 8479CA0

kOAM_8479CB8:: @ 8479CB8
    .2byte 0x0000
    .2byte 0x4000
    .2byte 0x0000
    .2byte 0x0000

kSpriteTemplate_8479CC0:: @ 8479CC0
    spr_template 4001, 65535, kOAM_8479CB8, kAnimCmds_8479CB4, NULL, kDummySpriteAffineAnimTable, sub_815D624

kAsciiString_8479CD8:: @ 8479CD8
    debug_path
    .asciz "cereader_tool.c"

kAsciiString_8479D10:: @ 8479D10
    .asciz "ttdata->dummy == 0"

    .align 2
kAsciiString_8479D24:: @ 8479D24
    .asciz "ttdata->id == 0"

kDefaultFlags:: @ 8479D34
    .byte 3, 38 @ Route20
    .byte 0x00, 0x00
    .byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0x99, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF

    .byte 3, 39 @ Route21
    .byte 0x00, 0x00
    .byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0x9A, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF

    .byte 1, 31 @ Map1_31
    .byte 0x00, 0x00
    .byte 0x4C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4B, 0xFF, 0xFF
    .byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF

    .byte 1, 34 @ Map1_34
    .byte 0x00, 0x00
    .byte 0x53, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0x4D, 0x4E, 0x4F, 0x50, 0x51, 0x52, 0xFF, 0xFF
    .byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF

    .byte 3, 65 @ SevenIsland_TanobyRuins
    .byte 0x00, 0x00
    .byte 0x40, 0x41, 0x42, 0x43, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF

    .byte 1, 2 @ Map1_2
    .byte 0x00, 0x00
    .byte 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0xFF, 0xFF
    .byte 0x54, 0x55, 0x56, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF

    .byte 1, 109 @ Map1_109
    .byte 0x00, 0x00
    .byte 0x5B, 0x5D, 0x5E, 0x5F, 0x63, 0x64, 0x65, 0x66
    .byte 0x5B, 0x5D, 0x5E, 0x5F, 0x63, 0x64, 0x65, 0xFF
    .byte 0x5A, 0x5C, 0x60, 0x61, 0x62, 0xFF, 0xFF, 0xFF

    .byte 3, 46 @ OneIsland_TreasureBeach
    .byte 0x00, 0x00
    .byte 0x6B, 0x6C, 0x6D, 0x6E, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0x67, 0x68, 0x69, 0x6A, 0x6B, 0x6C, 0xFF, 0xFF
    .byte 0x6B, 0x6C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF

    .byte 3, 48 @ ThreeIsland_BondBridge
    .byte 0x00, 0x00
    .byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0xA6, 0xA7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF

    .byte 3, 15 @ FourIsland
    .byte 0x00, 0x00
    .byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0xA8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0xA9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF

    .byte 3, 57 @ FiveIsland_MemorialPillar
    .byte 0x00, 0x00
    .byte 0xAA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF

    .byte 3, 54 @ FiveIsland_ResortGorgeous
    .byte 0x00, 0x00
    .byte 0xAE, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0xAF, 0xB1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF

    .byte 3, 58 @ SixIsland_OutcastIsland
    .byte 0x00, 0x00
    .byte 0xB2, 0xB3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF

    .byte 3, 59 @ SixIsland_GreenPath
    .byte 0x00, 0x00
    .byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0xB4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF

    .byte 3, 62 @ SevenIsland_TrainerTower
    .byte 0x00, 0x00
    .byte 0xB9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0xBA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    .byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF


kBasicItem_8479ED8:: @ 8479ED8
    .byte 0x1C, 0x03, 0x01, 0x00, 0x38, 0x04, 0x00, 0x00, 0x25, 0x06, 0x01, 0x00, 0x26, 0x07, 0x00, 0x00, 0x29, 0x08, 0x00, 0x00, 0x2A, 0x09, 0x01, 0x00, 0x34, 0x0A, 0x00, 0x00, 0x1C, 0x0B, 0x01, 0x00, 0x1D, 0x0C, 0x01, 0x00, 0x13, 0x0D, 0x00, 0x00, 0x34, 0x0E, 0x00, 0x00, 0x2D, 0x0F, 0x00, 0x00, 0x36, 0x10, 0x00, 0x00, 0x1A, 0x11, 0x00, 0x00, 0x1A, 0x12, 0x00, 0x00, 0x27, 0x13, 0x00, 0x00, 0x34, 0x14, 0x00, 0x00, 0x13, 0x15, 0x00, 0x00, 0x17, 0x16, 0x01, 0x00, 0x3D, 0x17, 0x00, 0x00, 0x13, 0x1D, 0x00
    .byte 0x00, 0x17, 0x1E, 0x01, 0x00, 0x1E, 0x20, 0x00, 0x00, 0x1F, 0x21, 0x01, 0x00, 0x20, 0x22, 0x00, 0x00, 0x23, 0x23, 0x01, 0x00, 0x12, 0x24, 0x00, 0x00, 0x39, 0x26, 0x00, 0x00, 0x29, 0x2D, 0x00, 0x00, 0x1A, 0x2E, 0x00, 0x00, 0x10, 0x2F, 0x00, 0x00, 0x18, 0x30, 0x01, 0x00, 0x1D, 0x31, 0x01, 0x00, 0x2E, 0x32, 0x01, 0x00, 0x28, 0x33, 0x01, 0x00, 0x3E, 0x35, 0x00, 0x00, 0x1B, 0x38, 0x00, 0x00, 0x19, 0x40, 0x00, 0x00, 0x1C, 0x41, 0x01, 0x00, 0x27, 0x42, 0x00, 0x00, 0x28, 0x43, 0x01, 0x00, 0x16, 0x47
    .byte 0x01, 0x00, 0x14, 0x48, 0x00, 0x00, 0x38, 0x49, 0x00, 0x00, 0x12, 0x58, 0x00, 0x00, 0x14, 0x59, 0x00, 0x00, 0x16, 0x5A, 0x01, 0x00, 0x3E, 0x5B, 0x00, 0x00, 0x27, 0x5C, 0x00, 0x00, 0x28, 0x5D, 0x01, 0x00, 0x34, 0x5E, 0x00, 0x00, 0x34, 0x5F, 0x00, 0x00, 0x38, 0x60, 0x00, 0x00, 0x35, 0x61, 0x00, 0x00, 0x34, 0x62, 0x00, 0x00, 0x1E, 0x63, 0x00, 0x00, 0x39, 0x64, 0x00, 0x00, 0x2D, 0x65, 0x00, 0x00, 0x35, 0x66, 0x00, 0x00, 0x20, 0x67, 0x00, 0x00, 0x1D, 0x68, 0x01, 0x00, 0x2E, 0x69, 0x01, 0x00, 0x13
    .byte 0x6A, 0x00, 0x00, 0x1A, 0x6B, 0x00, 0x00, 0x1A, 0x6C, 0x00, 0x00, 0x19, 0x6D, 0x00, 0x00, 0x1A, 0x6E, 0x00, 0x00, 0x36, 0x6F, 0x00, 0x00, 0x37, 0x71, 0x00, 0x00, 0x29, 0x74, 0x00, 0x00, 0x2A, 0x75, 0x01, 0x00, 0x3D, 0x7A, 0x00, 0x00, 0x3A, 0x7D, 0x01, 0x00, 0x17, 0x89, 0x01, 0x00, 0x18, 0x8A, 0x01, 0x00, 0x25, 0x8B, 0x01, 0x00, 0x1C, 0x8C, 0x01, 0x00, 0x27, 0x8D, 0x00, 0x00, 0x28, 0x8E, 0x01, 0x00, 0x1C, 0x8F, 0x01, 0x00, 0x38, 0x90, 0x00, 0x00, 0x1C, 0x91, 0x01, 0x00, 0x16, 0x92, 0x01, 0x00

kBasicItem_847A024:: @ 847A024
    .byte 0x1D, 0x17, 0x1F, 0x01, 0x01, 0x00, 0x00, 0x00, 0x11, 0x11
    .byte 0x34, 0x01, 0x01, 0x00, 0x00, 0x00, 0x1D, 0x19, 0x4A, 0x01
    .byte 0x00, 0x00, 0x00, 0x00, 0x20, 0x23, 0x4B, 0x00, 0x01, 0x00
    .byte 0x00, 0x00, 0x26, 0x2E, 0x4C, 0x00, 0x01, 0x00, 0x00, 0x00
    .byte 0x11, 0x11, 0x7E, 0x01, 0x01, 0x00, 0x00, 0x00, 0x29, 0x2A
    .byte 0x7F, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1D, 0x19, 0x80, 0x01
    .byte 0x00, 0x00, 0x00, 0x00, 0x18, 0x36, 0x81, 0x01, 0x00, 0x00
    .byte 0x00, 0x00, 0x2E, 0x26, 0x82, 0x01, 0x00, 0x00, 0x00, 0x00

kUnk5_847A074:: @ 847A074
    .byte 0x03, 0x06, 0x00, 0x00
    .byte 0x37, 0x06, 0x00, 0x00
    .byte 0x02, 0x06, 0x00, 0x00
    .byte 0x67, 0x01, 0x00, 0x00
    .byte 0x04, 0x01, 0x00, 0x00
    .byte 0x24, 0x04, 0x00, 0x00
    .byte 0x4A, 0x01, 0x00, 0x00
    .byte 0x26, 0x01, 0x00, 0x00
    .byte 0x2A, 0x00, 0x00, 0x00
    .byte 0x42, 0x03, 0x00, 0x00
    .byte 0x1B, 0x09, 0x00, 0x00
    .byte 0x4C, 0x03, 0x00, 0x00
    .byte 0x44, 0x03, 0x00, 0x00
    .byte 0x21, 0x04, 0x00, 0x00
    .byte 0x43, 0x03, 0x00, 0x00
    .byte 0x6A, 0x01, 0x00, 0x00
    .byte 0x5D, 0x05, 0x00, 0x00
    .byte 0x56, 0x05, 0x00, 0x00
    .byte 0x09, 0x05, 0x00, 0x00
    .byte 0x11, 0x04, 0x00, 0x00
    .byte 0x48, 0x03, 0x00, 0x00
    .byte 0x3C, 0x00, 0x00, 0x00
    .byte 0x29, 0x00, 0x00, 0x00
    .byte 0x5C, 0x09, 0x00, 0x00
    .byte 0x28, 0x09, 0x00, 0x00
    .byte 0x06, 0x0C, 0x00, 0x00
    .byte 0x68, 0x0B, 0x00, 0x00
    .byte 0x05, 0x0B, 0x00, 0x00
    .byte 0x58, 0x0D, 0x00, 0x00
    .byte 0x16, 0x0D, 0x00, 0x00
    .byte 0x46, 0x08, 0x00, 0x00
    .byte 0x0F, 0x01, 0x00, 0x00
    .byte 0x3F, 0x03, 0x00, 0x00
    .byte 0x0E, 0x03, 0x00, 0x00
    .byte 0x5F, 0x04, 0x00, 0x00
    .byte 0x63, 0x04, 0x00, 0x00
    .byte 0x50, 0x04, 0x00, 0x00
    .byte 0x10, 0x04, 0x00, 0x00
    .byte 0x52, 0x03, 0x00, 0x00
    .byte 0x35, 0x04, 0x00, 0x00
    .byte 0x5B, 0x03, 0x00, 0x00
    .byte 0x14, 0x03, 0x00, 0x00
    .byte 0x3D, 0x00, 0x00, 0x00
    .byte 0x13, 0x00, 0x00, 0x00
    .byte 0x12, 0x0B, 0x00, 0x00
    .byte 0x30, 0x07, 0x00, 0x00
    .byte 0x38, 0x07, 0x00, 0x00
    .byte 0x2F, 0x07, 0x00, 0x00
    .byte 0x3B, 0x01, 0x00, 0x00
    .byte 0x31, 0x01, 0x00, 0x00
    .byte 0x4E, 0x0B, 0x00, 0x00
    .byte 0x3A, 0x00, 0x00, 0x00
    .byte 0x32, 0x00, 0x00, 0x00
    .byte 0x23, 0x03, 0x00, 0x00
    .byte 0x0D, 0x0D, 0x00, 0x00
    .byte 0x0A, 0x03, 0x00, 0x00
    .byte 0x49, 0x01, 0x00, 0x00
    .byte 0x0C, 0x01, 0x00, 0x00
    .byte 0x69, 0x01, 0x00, 0x00
    .byte 0x0B, 0x01, 0x00, 0x00
    .byte 0x25, 0x01, 0x00, 0x00
    .byte 0x3E, 0x02, 0x00, 0x00
    .byte 0x27, 0x02, 0x00, 0x00
    .byte 0x65, 0x01, 0x00, 0x00
    .byte 0x2D, 0x01, 0x00, 0x00
    .byte 0x61, 0x01, 0x00, 0x00
    .byte 0x2B, 0x03, 0x00, 0x00
    .byte 0x66, 0x05, 0x00, 0x00
    .byte 0x2E, 0x05, 0x00, 0x00
    .byte 0x2C, 0x00, 0x00, 0x00
    .byte 0x5E, 0x02, 0x00, 0x00
    .byte 0x34, 0x02, 0x00, 0x00
    .byte 0x51, 0x00, 0x00, 0x00
    .byte 0x59, 0x00, 0x00, 0x00
    .byte 0x40, 0x03, 0x00, 0x00
    .byte 0x55, 0x06, 0x00, 0x00
    .byte 0x53, 0x06, 0x00, 0x00
    .byte 0x4B, 0x04, 0x00, 0x00
    .byte 0x15, 0x04, 0x00, 0x00
    .byte 0x1A, 0x09, 0x00, 0x00
    .byte 0x57, 0x0A, 0x00, 0x00
    .byte 0x17, 0x01, 0x00, 0x00
    .byte 0x47, 0x03, 0x00, 0x00
    .byte 0x62, 0x01, 0x00, 0x00
    .byte 0x39, 0x00, 0x00, 0x00
    .byte 0x1D, 0x00, 0x00, 0x00
    .byte 0x1C, 0x04, 0x00, 0x00
    .byte 0x20, 0x00, 0x00, 0x00
    .byte 0x4F, 0x05, 0x00, 0x00
    .byte 0x22, 0x05, 0x00, 0x00
    .byte 0x45, 0x0B, 0x00, 0x00
    .byte 0x1F, 0x0B, 0x00, 0x00
    .byte 0x5A, 0x00, 0x00, 0x00
    .byte 0x1E, 0x00, 0x00, 0x00
    .byte 0x08, 0x00, 0x00, 0x00
    .byte 0x64, 0x02, 0x00, 0x00
    .byte 0x07, 0x02, 0x00, 0x00
    .byte 0x60, 0x08, 0x00, 0x00
    .byte 0x36, 0x08, 0x00, 0x00
    .byte 0x41, 0x0B, 0x00, 0x00
    .byte 0x33, 0x0B, 0x00, 0x00
    .byte 0x54, 0x00, 0x00, 0x00
    .byte 0x18, 0x01, 0x00, 0x00
    .byte 0x4D, 0x0B, 0x00, 0x00
    .byte 0x19, 0x00, 0x00, 0x00

kWindowTemplate_847A218:: @ 847A218
    window_template 0x00, 0x03, 0x01, 0x1B, 0x12, 0x0F, 0x0001

    .incbin "baserom.gba", 0x47A220, 0xC @ unknown

kRBoxBar_847A22C:: @ 847A22C
    .byte 0x00, 0x02, 0x03

    .align 2
kPointer_847A230:: @ 847A230
    .4byte sub_815DD44 @ 815DD45
    .4byte sub_815DF54 @ 815DF55
    .4byte sub_815E160 @ 815E161
    .4byte sub_815E1C0 @ 815E1C1
    .4byte sub_815E1F0 @ 815E1F1
    .4byte sub_815E218 @ 815E219
    .4byte sub_815E28C @ 815E28D
    .4byte sub_815E394 @ 815E395
    .4byte trainer_tower_add_reward_to_bag @ 815E409
    .4byte sub_815E4B0 @ 815E4B1
    .4byte sub_815E56C @ 815E56D
    .4byte sub_815E5C4 @ 815E5C5
    .4byte sub_815E5F0 @ 815E5F1
    .4byte sub_815E658 @ 815E659
    .4byte sub_815E720 @ 815E721
    .4byte sub_815E88C @ 815E88D
    .4byte sub_815E8B4 @ 815E8B5
    .4byte sub_815E8CC @ 815E8CD
    .4byte sub_815E908 @ 815E909
    .4byte sub_815E948 @ 815E949
    .4byte sub_815E9C8 @ 815E9C9

kBasicItem_847A284:: @ 847A284
    .2byte 0x012A, 0x016E, 0x0176, 0x012B, 0x016F, 0x0177, 0x012C, 0x0170, 0x0178, 0x012D, 0x0171, 0x0179
    .2byte 0x012E, 0x0172, 0x017A, 0x012F, 0x0173, 0x017B, 0x0130, 0x0174, 0x017C, 0x0131, 0x0175, 0x017D

UNK_847A2B4:: @ 847A2B4
    .incbin "baserom.gba", 0x47A2B4, 0x1E @ null

kBasicItem_847A2D2:: @ 847A2D2
    .2byte 0x011D, 0x011C, 0x011C, 0x011B, 0x011D, 0x011D, 0x011B, 0x011B, 0x011D, 0x011C, 0x011D, 0x011D, 0x011D, 0x011D

kBasicItem_847A2EE:: @ 847A2EE
    .byte 0x00, 0x02, 0x01, 0x03, 0x02, 0x04, 0x03, 0x05
    .byte 0x04, 0x01, 0x05, 0x02, 0x00, 0x03, 0x01, 0x04

kBasicItem_847A2FE:: @ 847A2FE
    .byte 0x00, 0x01, 0x01, 0x03, 0x02, 0x00, 0x03, 0x04
    .byte 0x04, 0x02, 0x05, 0x02, 0x00, 0x03, 0x01, 0x05

kBasicItem_847A30E:: @ 847A30E
    .byte 0x00, 0x02, 0x04, 0x01, 0x03, 0x05, 0x02, 0x03
    .byte 0x01, 0x03, 0x04, 0x00, 0x04, 0x01, 0x02, 0x05
    .byte 0x00, 0x03, 0x00, 0x05, 0x02, 0x01, 0x04, 0x05

    .align 2
kPalette_847A328:: @ 847A328
    .incbin "baserom.gba", 0x47A328, 0x20

kUGfx_847A348:: @ 847A348
    .incbin "baserom.gba", 0x47A348, 0x451

    .align 2
kObjTiles_847A79C:: @ 847A79C
    obj_tiles kUGfx_847A348, 0xE00, 0

kObjPal_847A7A4:: @ 847A7A4
    obj_pal kPalette_847A328, 0

kOAM_847A7AC:: @ 847A7AC
    .2byte 0x0300
    .2byte 0x8000
    .2byte 0x0000
    .2byte 0x0000

kOAM_847A7B4:: @ 847A7B4
    .2byte 0x4000
    .2byte 0xC000
    .2byte 0x0000
    .2byte 0x0000

kAnimCmd_847A7BC:: @ 847A7BC
    obj_image_anim_frame 0, 1
    obj_image_anim_end

kAnimCmd_847A7C4:: @ 847A7C4
    obj_image_anim_frame 16, 1
    obj_image_anim_end

kAnimCmd_847A7CC:: @ 847A7CC
    obj_image_anim_frame 32, 1
    obj_image_anim_end

kAnimCmds_847A7D4:: @ 847A7D4
    .4byte kAnimCmd_847A7BC @ 847A7BC
    .4byte kAnimCmd_847A7C4 @ 847A7C4
    .4byte kAnimCmd_847A7CC @ 847A7CC

kAnimCmd_847A7E0:: @ 847A7E0
    obj_image_anim_frame 48, 1
    obj_image_anim_end

kAnimCmd_847A7E8:: @ 847A7E8
    obj_image_anim_frame 80, 1
    obj_image_anim_end

kAnimCmds_847A7F0:: @ 847A7F0
    .4byte kAnimCmd_847A7E0 @ 847A7E0
    .4byte kAnimCmd_847A7E8 @ 847A7E8

kAffineAnimCmd_847A7F8:: @ 847A7F8
    obj_rot_scal_anim_frame 256, 256, 0, 0
    obj_rot_scal_anim_end

kAffineAnimCmd_847A808:: @ 847A808
    obj_rot_scal_anim_frame 256, 256, 0, 0
    obj_rot_scal_anim_frame 16, -16, 0, 8
    obj_rot_scal_anim_end

kAffineAnimCmd_847A820:: @ 847A820
    obj_rot_scal_anim_frame -18, 18, 0, 8
    obj_rot_scal_anim_end

kAffineAnimCmd_847A830:: @ 847A830
    obj_rot_scal_anim_frame 6, -6, 0, 8
    obj_rot_scal_anim_frame -4, 4, 0, 8
    obj_rot_scal_anim_frame 256, 256, 0, 0
    obj_rot_scal_anim_end

kAffineAnimCmds_847A850:: @ 847A850
    .4byte kAffineAnimCmd_847A7F8 @ 847A7F8
    .4byte kAffineAnimCmd_847A808 @ 847A808
    .4byte kAffineAnimCmd_847A820 @ 847A820
    .4byte kAffineAnimCmd_847A830 @ 847A830

kSpriteTemplate_847A860:: @ 847A860
    spr_template 0, 0, kOAM_847A7AC, kAnimCmds_847A7D4, NULL, kAffineAnimCmds_847A850, objc_nullsub
    spr_template 0, 0, kOAM_847A7B4, kAnimCmds_847A7F0, NULL, kDummySpriteAffineAnimTable, objc_nullsub

kPointer_847A890:: @ 847A890
    .4byte kBerryProgramUpdateTiles_0 @ 8EA467C
    .4byte kBerryProgramUpdateTilemap_0 @ 8EA52B8
    .4byte kBerryProgramUpdatePalette_0 @ 8EA463C
    .4byte kBerryProgramUpdateTiles_1 @ 8EA5664
    .4byte kBerryProgramUpdateTilemap_1 @ 8EA60C8
    .4byte kUnkPal_8EA5604 @ 8EA5604
    .4byte kBerryProgramUpdateTiles_2 @ 8EA6408
    .4byte kBerryProgramUpdateTilemap_2 @ 8EA7028
    .4byte kBerryProgramUpdatePalette_2 @ 8EA63C8
    .4byte kBerryProgramUpdateTiles_3 @ 8EA7320
    .4byte kBerryProgramUpdateTilemap_3 @ 8EA8118
    .4byte kBerryProgramUpdatePalette_3 @ 8EA72E0
    .4byte kBerryProgramUpdateTiles_4 @ 8EA8408
    .4byte kBerryProgramUpdateTilemap_4 @ 8EA8CC8
    .4byte kBerryProgramUpdatePalette_4 @ 8EA83C8
    .4byte kBerryProgramUpdateTiles_5 @ 8EA8F40
    .4byte kBerryProgramUpdateTilemap_5 @ 8EA9588
    .4byte kBerryProgramUpdatePalette_5 @ 8EA8F00

kText_847A8D8:: @ 847A8D8
    .string "{CLEAR 11}A{CLEAR 6}B{CLEAR 6}C{CLEAR 26}D{CLEAR 6}E{CLEAR 6}F{CLEAR 26}others$"

kText_847A8FA:: @ 847A8FA
    .string "{CLEAR 11}G{CLEAR 6}H{CLEAR 6}I{CLEAR 26}J{CLEAR 6}K{CLEAR 6}L$"

kText_847A913:: @ 847A913
    .string "{CLEAR 11}M{CLEAR 6}N{CLEAR 6}O{CLEAR 26}P{CLEAR 6}Q{CLEAR 6}R{CLEAR 6}S{CLEAR 26} $"

kText_847A934:: @ 847A934
    .string "{CLEAR 11}T{CLEAR 6}U{CLEAR 6}V{CLEAR 26}W{CLEAR 6}X{CLEAR 6}Y{CLEAR 6}Z{CLEAR 26} $"

kText_847A955:: @ 847A955
    .string "{CLEAR 11}a{CLEAR 6}b{CLEAR 6}c{CLEAR 26}d{CLEAR 6}e{CLEAR 6}f{CLEAR 6} {CLEAR 26}.$"

kText_847A976:: @ 847A976
    .string "{CLEAR 11}g{CLEAR 6}h{CLEAR 7}i{CLEAR 27}j{CLEAR 6}k{CLEAR 6}l{CLEAR 7} {CLEAR 26},$"

kText_847A997:: @ 847A997
    .string "{CLEAR 11}m{CLEAR 6}n{CLEAR 7}o{CLEAR 26}p{CLEAR 6}q{CLEAR 7}r{CLEAR 6}s{CLEAR 27} $"

kText_847A9B8:: @ 847A9B8
    .string "{CLEAR 12}t{CLEAR 6}u{CLEAR 6}v{CLEAR 26}w{CLEAR 6}x{CLEAR 6}y{CLEAR 6}z{CLEAR 26} $"

kText_847A9D9:: @ 847A9D9
    .string "{CLEAR 11}A{CLEAR 6}B{CLEAR 6}C{CLEAR 26}D{CLEAR 6}E{CLEAR 6}F{CLEAR 6} {CLEAR 26}.$"

kText_847A9FA:: @ 847A9FA
    .string "{CLEAR 11}G{CLEAR 6}H{CLEAR 6}I{CLEAR 26}J{CLEAR 6}K{CLEAR 6}L{CLEAR 6} {CLEAR 26},$"

kText_847AA1B:: @ 847AA1B
    .string "{CLEAR 11}M{CLEAR 6}N{CLEAR 6}O{CLEAR 26}P{CLEAR 6}Q{CLEAR 6}R{CLEAR 6}S{CLEAR 26} $"

kText_847AA3C:: @ 847AA3C
    .string "{CLEAR 11}T{CLEAR 6}U{CLEAR 6}V{CLEAR 26}W{CLEAR 6}X{CLEAR 6}Y{CLEAR 6}Z{CLEAR 26} $"

kText_847AA5D:: @ 847AA5D
    .string "{CLEAR 11}0{CLEAR 16}1{CLEAR 16}2{CLEAR 16}3{CLEAR 16}4{CLEAR 16} $"

kText_847AA76:: @ 847AA76
    .string "{CLEAR 11}5{CLEAR 16}6{CLEAR 16}7{CLEAR 16}8{CLEAR 16}9{CLEAR 16} $"

kText_847AA8F:: @ 847AA8F
    .string "{CLEAR 11}!{CLEAR 16}?{CLEAR 16}♂{CLEAR 16}♀{CLEAR 16}/{CLEAR 16}-$"

kText_847AAA8:: @ 847AAA8
    .string "{CLEAR 11}…{CLEAR 16}“{CLEAR 16}”{CLEAR 18}‘{CLEAR 18}’{CLEAR 18} $"

kText_847AAC1:: @ 847AAC1
    .string "ABCDE$"

kText_847AAC7:: @ 847AAC7
    .string "FGHIJ$"

kText_847AACD:: @ 847AACD
    .string "KLMNO$"

kText_847AAD3:: @ 847AAD3
    .string "PQRST$"

kText_847AAD9:: @ 847AAD9
    .string "UVWXY$"

kText_847AADF:: @ 847AADF
    .string "Z    $"

kText_847AAE5:: @ 847AAE5
    .string "01234$"

kText_847AAEB:: @ 847AAEB
    .string "56789$"

kText_847AAF1:: @ 847AAF1
    .string ".,!? $"

kText_847AAF7:: @ 847AAF7
    .string "-/&… $"

kText_847AAFD:: @ 847AAFD
    .string "abcde$"

kText_847AB03:: @ 847AB03
    .string "fghij$"

kText_847AB09:: @ 847AB09
    .string "klmno$"

kText_847AB0F:: @ 847AB0F
    .string "pqrst$"

kText_847AB15:: @ 847AB15
    .string "uvwxy$"

kText_847AB1B:: @ 847AB1B
    .string "z    $"

kText_847AB21:: @ 847AB21
    .string "01234$"

kText_847AB27:: @ 847AB27
    .string "56789$"

kText_847AB2D:: @ 847AB2D
    .string ".,!? $"

kText_847AB33:: @ 847AB33
    .string "-/&… $"

    .incbin "baserom.gba", 0x47AB39, 0x8 @ unknown

kUnknown_847AB41:: @ 847AB41
    .incbin "baserom.gba", 0x47AB41, 0xB @ null

kUnknown_847AB4C:: @ 847AB4C
    .incbin "baserom.gba", 0x47AB4C, 0xB @ null

kUnknown_847AB57:: @ 847AB57
    .incbin "baserom.gba", 0x47AB57, 0xB @ null

kUnknown_847AB62:: @ 847AB62
    .incbin "baserom.gba", 0x47AB62, 0x9 @ null

kUnknown_847AB6B:: @ 847AB6B
    .incbin "baserom.gba", 0x47AB6B, 0xB @ null

kUnknown_847AB76:: @ 847AB76
    .incbin "baserom.gba", 0x47AB76, 0xB @ null

kUnknown_847AB81:: @ 847AB81
    .incbin "baserom.gba", 0x47AB81, 0xB @ null

kUnknown_847AB8C:: @ 847AB8C
    .incbin "baserom.gba", 0x47AB8C, 0xB @ null

kUnknown_847AB97:: @ 847AB97
    .incbin "baserom.gba", 0x47AB97, 0xB @ null

kUnknown_847ABA2:: @ 847ABA2
    .incbin "baserom.gba", 0x47ABA2, 0xA @ null

kTrainerCard_847ABAC:: @ 847ABAC
    .byte 1 @ Card Number
    .byte 8
    .byte 0 @ Battle Type
    .byte 7 @ Reward Item

    .string "COLE$", 11 @ Trainer Name
    .byte 88, 1, 0
    .2byte 3083
    .2byte 2566
    .2byte 4130
    .2byte 5128
    .2byte 4164
    .2byte 3072
    .2byte 4647
    .2byte 3072
    .2byte 2080
    .2byte 3072
    .2byte 65535
    .2byte 65535
    .2byte 3114
    .2byte 3073
    .2byte 4668
    .2byte 4151
    .2byte 3631
    .2byte 3073
    .2byte 3108
    .2byte 3108
    .2byte 2566
    .2byte 1569
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_RATICATE
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_SHOCK_WAVE, MOVE_HYPER_FANG, MOVE_SCARY_FACE, MOVE_ENDEAVOR
    .byte 0x00, 0x00, 0x6E, 0x00, 0xC8, 0x00, 0x00, 0xC8
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x16, 0x00, 0x00, 0x00
    .string "RATICATE$", 11 @ name
    .byte 255

    .2byte SPECIES_MAGMAR
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_FIRE_PUNCH, MOVE_SUNNY_DAY, MOVE_SMOG, MOVE_STRENGTH
    .byte 0x00, 0x00, 0x64, 0x00, 0x00, 0xD2, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x56, 0x00, 0x00, 0x00
    .string "MAGMAR$", 11 @ name
    .byte 255

    .2byte SPECIES_MAGCARGO
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_FLAMETHROWER, MOVE_AMNESIA, MOVE_BODY_SLAM, MOVE_HARDEN
    .byte 0x00, 0x00, 0x6E, 0xC8, 0x00, 0x00, 0xC8, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x02, 0x00, 0x00, 0x00
    .string "MAGCARGO$", 11 @ name
    .byte 255

    .2byte SPECIES_PRIMEAPE
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_OVERHEAT, MOVE_SEISMIC_TOSS, MOVE_SWAGGER, MOVE_KARATE_CHOP
    .byte 0x00, 0x00, 0x64, 0x00, 0x00, 0xD2, 0xC8, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x87, 0x00, 0x00, 0x00
    .string "PRIMEAPE$", 11 @ name
    .byte 255

    .2byte SPECIES_GOLBAT
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_GIGA_DRAIN, MOVE_CONFUSE_RAY, MOVE_SLUDGE_BOMB, MOVE_MEAN_LOOK
    .byte 0x00, 0x00, 0x00, 0xC8, 0x00, 0x6E, 0xC8, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x81, 0x00, 0x00, 0x00
    .string "GOLBAT$", 11 @ name
    .byte 255

    .2byte SPECIES_SLOWBRO
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_SUNNY_DAY, MOVE_YAWN, MOVE_FLAMETHROWER, MOVE_CONFUSION
    .byte 0x00, 0x00, 0x64, 0x00, 0x64, 0x00, 0xD2, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x11, 0x00, 0x00, 0x00
    .string "SLOWBRO$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0xAB, 0x6A, 0x01, 0x00

kTrainerCard_847AF8C:: @ 847AF8C
    .byte 2 @ Card Number
    .byte 8
    .byte 0 @ Battle Type
    .byte 13 @ Reward Item

    .string "JAC$", 11 @ Trainer Name
    .byte 98, 1, 0
    .2byte 2601
    .2byte 4128
    .2byte 9896
    .2byte 3072
    .2byte 2058
    .2byte 3622
    .2byte 2567
    .2byte 4618
    .2byte 5168
    .2byte 7700
    .2byte 2561
    .2byte 4662
    .2byte 3104
    .2byte 3073
    .2byte 2601
    .2byte 2059
    .2byte 2561
    .2byte 1555
    .2byte 2561
    .2byte 4096
    .2byte 7193
    .2byte 5134
    .2byte 4128
    .2byte 9896
    .byte 0, 0

    .2byte SPECIES_MEOWTH
    .2byte ITEM_LIECHI_BERRY
    .2byte MOVE_SWAGGER, MOVE_SUBSTITUTE, MOVE_FAKE_OUT, MOVE_SLASH
    .byte 0x00, 0x00, 0xC8, 0x6E, 0x00, 0xC8, 0x00, 0x00
    .byte 0x8A, 0x00, 0x00, 0x00, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x8A, 0x00, 0x00, 0x00
    .string "MEOWTH$", 11 @ name
    .byte 255

    .2byte SPECIES_FLAREON
    .2byte ITEM_PETAYA_BERRY
    .2byte MOVE_FLAMETHROWER, MOVE_BITE, MOVE_SAND_ATTACK, MOVE_FIRE_SPIN
    .byte 0x00, 0x00, 0x6E, 0x00, 0xC8, 0x00, 0xC8, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x07, 0x00, 0x00, 0x00
    .string "FLAREON$", 11 @ name
    .byte 255

    .2byte SPECIES_PORYGON
    .2byte ITEM_PETAYA_BERRY
    .2byte MOVE_TRI_ATTACK, MOVE_RECYCLE, MOVE_PSYBEAM, MOVE_CONVERSION_2
    .byte 0x00, 0x00, 0x64, 0x00, 0xD2, 0x00, 0xC8, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x07, 0x00, 0x00, 0x00
    .string "PORYGON$", 11 @ name
    .byte 255

    .2byte SPECIES_CHANSEY
    .2byte ITEM_LUCKY_PUNCH
    .2byte MOVE_FLAMETHROWER, MOVE_LIGHT_SCREEN, MOVE_BODY_SLAM, MOVE_MINIMIZE
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x10, 0x00, 0x00, 0x00
    .string "CHANSEY$", 11 @ name
    .byte 255

    .2byte SPECIES_FARFETCHD
    .2byte ITEM_STICK
    .2byte MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_FLY, MOVE_SAND_ATTACK
    .byte 0x00, 0x00, 0x64, 0x64, 0x64, 0x64, 0x00, 0x6E
    .byte 0x85, 0x00, 0x00, 0x00, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x85, 0x00, 0x00, 0x00
    .string "FARFETCH’D$", 11 @ name
    .byte 255

    .2byte SPECIES_MR_MIME
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_SUBSTITUTE, MOVE_SHOCK_WAVE, MOVE_LIGHT_SCREEN, MOVE_BRICK_BREAK
    .byte 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00
    .byte 0x82, 0x00, 0x00, 0x00, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x82, 0x00, 0x00, 0x00
    .string "MR. MIME$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0x56, 0x64, 0x01, 0x00

kTrainerCard_847B36C:: @ 847B36C
    .byte 3 @ Card Number
    .byte 8
    .byte 0 @ Battle Type
    .byte 2 @ Reward Item

    .string "MILY$", 11 @ Trainer Name
    .byte 137, 1, 0
    .2byte 6709
    .2byte 4150
    .2byte 2600
    .2byte 526
    .2byte 10004
    .2byte 3072
    .2byte 4115
    .2byte 4137
    .2byte 4641
    .2byte 3075
    .2byte 526
    .2byte 1566
    .2byte 7695
    .2byte 4107
    .2byte 4129
    .2byte 5174
    .2byte 9387
    .2byte 3077
    .2byte 7695
    .2byte 4107
    .2byte 4128
    .2byte 6183
    .2byte 5168
    .2byte 3638
    .byte 0, 0

    .2byte SPECIES_CHANSEY
    .2byte ITEM_ORAN_BERRY
    .2byte MOVE_LIGHT_SCREEN, MOVE_EGG_BOMB, MOVE_MINIMIZE, MOVE_SECRET_POWER
    .byte 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x08, 0x00, 0x00, 0x00
    .string "CHANSEY$", 11 @ name
    .byte 255

    .2byte SPECIES_CLEFABLE
    .2byte ITEM_ORAN_BERRY
    .2byte MOVE_METRONOME, MOVE_REFLECT, MOVE_SING, MOVE_POUND
    .byte 0x00, 0x00, 0x6E, 0x00, 0xC8, 0x00, 0x00, 0xC8
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x16, 0x00, 0x00, 0x00
    .string "CLEFABLE$", 11 @ name
    .byte 255

    .2byte SPECIES_TOGETIC
    .2byte ITEM_ORAN_BERRY
    .2byte MOVE_METRONOME, MOVE_REFLECT, MOVE_SWEET_KISS, MOVE_PECK
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x16, 0x00, 0x00, 0x00
    .string "TOGETIC$", 11 @ name
    .byte 255

    .2byte SPECIES_TOGETIC
    .2byte ITEM_ORAN_BERRY
    .2byte MOVE_METRONOME, MOVE_HIDDEN_POWER, MOVE_ATTRACT, MOVE_LIGHT_SCREEN
    .byte 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x20, 0x00, 0x00, 0x00
    .string "TOGETIC$", 11 @ name
    .byte 255

    .2byte SPECIES_CHANSEY
    .2byte ITEM_ORAN_BERRY
    .2byte MOVE_FLAMETHROWER, MOVE_SOFT_BOILED, MOVE_LIGHT_SCREEN, MOVE_SECRET_POWER
    .byte 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x05, 0x00, 0x00, 0x00
    .string "CHANSEY$", 11 @ name
    .byte 255

    .2byte SPECIES_CLEFABLE
    .2byte ITEM_ORAN_BERRY
    .2byte MOVE_REFLECT, MOVE_FLAMETHROWER, MOVE_SING, MOVE_BODY_SLAM
    .byte 0x00, 0x00, 0x6E, 0x00, 0xC8, 0x00, 0xC8, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0xC0, 0x00, 0x00, 0x00
    .string "CLEFABLE$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0xEC, 0x64, 0x01, 0x00

kTrainerCard_847B74C:: @ 847B74C
    .byte 4 @ Card Number
    .byte 8
    .byte 1 @ Battle Type
    .byte 9 @ Reward Item

    .string "JOS & ANNE$", 11 @ Trainer Name
    .byte 127, 7, 0
    .2byte 2561
    .2byte 4117
    .2byte 1585
    .2byte 4143
    .2byte 2562
    .2byte 7690
    .2byte 3610
    .2byte 5184
    .2byte 4668
    .2byte 3072
    .2byte 5125
    .2byte 1576
    .2byte 3093
    .2byte 3076
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 2601
    .2byte 4620
    .2byte 3594
    .2byte 2562
    .2byte 1542
    .2byte 3076
    .byte 0, 0

    .2byte SPECIES_RAPIDASH
    .2byte ITEM_WHITE_HERB
    .2byte MOVE_BOUNCE, MOVE_OVERHEAT, MOVE_HYPNOSIS, MOVE_RETURN
    .byte 0x00, 0x00, 0x64, 0x64, 0x00, 0x6E, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0xBF
    .byte 0x10, 0x00, 0x00, 0x00
    .string "RAPIDASH$", 11 @ name
    .byte 255

    .2byte SPECIES_NINETALES
    .2byte ITEM_CHARCOAL
    .2byte MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP, MOVE_HEAT_WAVE, MOVE_DIG
    .byte 0x00, 0x00, 0x6E, 0x00, 0x00, 0xC8, 0xC8, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x15, 0x00, 0x00, 0x00
    .string "NINETALES$", 11 @ name
    .byte 255

    .2byte SPECIES_MISDREAVUS
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_GRUDGE, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT
    .byte 0x00, 0x00, 0xC8, 0x00, 0x00, 0xD2, 0x64, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x0A, 0x00, 0x00, 0x00
    .string "MISDREAVUS$", 11 @ name
    .byte 255

    .2byte SPECIES_ALAKAZAM
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_LIGHT_SCREEN, MOVE_RECOVER, MOVE_PSYCHIC, MOVE_THUNDER_PUNCH
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x0A, 0x00, 0x00, 0x00
    .string "ALAKAZAM$", 11 @ name
    .byte 255

    .2byte SPECIES_BLISSEY
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_LIGHT_SCREEN, MOVE_ATTRACT, MOVE_RETURN, MOVE_PSYCHIC
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0xBF
    .byte 0x16, 0x00, 0x00, 0x00
    .string "BLISSEY$", 11 @ name
    .byte 255

    .2byte SPECIES_CROBAT
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_TOXIC, MOVE_FLY, MOVE_CONFUSE_RAY, MOVE_SHADOW_BALL
    .byte 0x00, 0x00, 0x64, 0x00, 0x64, 0xD2, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x17, 0x00, 0x00, 0x00
    .string "CROBAT$", 11 @ name
    .byte 255

    .string "JOS & ANNE$", 11 @ Trainer Name
    .byte 127, 7, 0
    .2byte 2050
    .2byte 3073
    .2byte 527
    .2byte 3621
    .2byte 4143
    .2byte 1585
    .2byte 3626
    .2byte 3072
    .2byte 2621
    .2byte 527
    .2byte 3597
    .2byte 1542
    .2byte 1584
    .2byte 3074
    .2byte 2562
    .2byte 3616
    .2byte 3620
    .2byte 3072
    .2byte 3599
    .2byte 4104
    .2byte 2561
    .2byte 1585
    .2byte 7695
    .2byte 3075
    .byte 0, 0

    .2byte SPECIES_HOUNDOOM
    .2byte ITEM_CHARCOAL
    .2byte MOVE_TAUNT, MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_CRUNCH
    .byte 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0xBF
    .byte 0x82, 0x00, 0x00, 0x00
    .string "HOUNDOOM$", 11 @ name
    .byte 255

    .2byte SPECIES_AERODACTYL
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_ROAR, MOVE_FIRE_BLAST, MOVE_HYPER_BEAM, MOVE_AERIAL_ACE
    .byte 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0xBF
    .byte 0x33, 0x00, 0x00, 0x00
    .string "AERODACTYL$", 11 @ name
    .byte 255

    .2byte SPECIES_ARCANINE
    .2byte ITEM_CHARCOAL
    .2byte MOVE_HEAT_WAVE, MOVE_EXTREME_SPEED, MOVE_ROAR, MOVE_DIG
    .byte 0x00, 0x00, 0xD2, 0x00, 0x00, 0xC8, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x56, 0x00, 0x00, 0x00
    .string "ARCANINE$", 11 @ name
    .byte 255

    .2byte SPECIES_WEEZING
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_EXPLOSION, MOVE_SMOKESCREEN, MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT
    .byte 0x00, 0x00, 0x64, 0x64, 0x64, 0x00, 0x64, 0x6E
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x8E, 0x00, 0x00, 0x00
    .string "WEEZING$", 11 @ name
    .byte 255

    .2byte SPECIES_CHARIZARD
    .2byte ITEM_WHITE_HERB
    .2byte MOVE_OVERHEAT, MOVE_OUTRAGE, MOVE_DRAGON_RAGE, MOVE_SMOKESCREEN
    .byte 0x00, 0x00, 0x64, 0x6E, 0x00, 0x64, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x33, 0x00, 0x00, 0x00
    .string "CHARIZARD$", 11 @ name
    .byte 255

    .2byte SPECIES_GENGAR
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT
    .byte 0x00, 0x00, 0x37, 0x00, 0x64, 0xFF, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x87, 0x00, 0x00, 0x00
    .string "GENGAR$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0x08, 0x79, 0x01, 0x00

kTrainerCard_847BB2C:: @ 847BB2C
    .byte 5 @ Card Number
    .byte 8
    .byte 1 @ Battle Type
    .byte 4 @ Reward Item

    .string "EMY & ALEK$", 11 @ Trainer Name
    .byte 128, 1, 0
    .2byte 2601
    .2byte 4133
    .2byte 1584
    .2byte 4151
    .2byte 8225
    .2byte 4614
    .2byte 3101
    .2byte 3101
    .2byte 2586
    .2byte 4107
    .2byte 3628
    .2byte 8215
    .2byte 3113
    .2byte 3073
    .2byte 2566
    .2byte 4130
    .2byte 1580
    .2byte 3075
    .2byte 2603
    .2byte 4111
    .2byte 2562
    .2byte 3075
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_TAUROS
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_FLAMETHROWER, MOVE_REST, MOVE_SHOCK_WAVE, MOVE_DOUBLE_TEAM
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0A, 0x00, 0x00, 0x00
    .string "TAUROS$", 11 @ name
    .byte 255

    .2byte SPECIES_KANGASKHAN
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_FLAMETHROWER, MOVE_DIZZY_PUNCH, MOVE_REST, MOVE_FAKE_OUT
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x02, 0x00, 0x00, 0x00
    .string "KANGASKHAN$", 11 @ name
    .byte 255

    .2byte SPECIES_FEAROW
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_DOUBLE_EDGE, MOVE_REST
    .byte 0x00, 0x00, 0x64, 0xD2, 0x64, 0x00, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x94, 0x00, 0x00, 0x00
    .string "FEAROW$", 11 @ name
    .byte 255

    .2byte SPECIES_TOGETIC
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_FLAMETHROWER, MOVE_LIGHT_SCREEN, MOVE_REST, MOVE_ANCIENT_POWER
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x24, 0x00, 0x00, 0x00
    .string "TOGETIC$", 11 @ name
    .byte 255

    .2byte SPECIES_PIDGEOT
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_STEEL_WING, MOVE_FLY, MOVE_MIRROR_MOVE, MOVE_REST
    .byte 0x00, 0x00, 0x64, 0x6E, 0x64, 0x64, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0D, 0x00, 0x00, 0x00
    .string "PIDGEOT$", 11 @ name
    .byte 255

    .2byte SPECIES_URSARING
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_REST, MOVE_SNORE, MOVE_DIG, MOVE_SLASH
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x8A, 0x00, 0x00, 0x00
    .string "URSARING$", 11 @ name
    .byte 255

    .string "EMY & ALEK$", 11 @ Trainer Name
    .byte 128, 1, 0
    .2byte 2601
    .2byte 4612
    .2byte 4144
    .2byte 8225
    .2byte 4636
    .2byte 3073
    .2byte 3092
    .2byte 3076
    .2byte 2600
    .2byte 2581
    .2byte 4107
    .2byte 1048
    .2byte 3082
    .2byte 3073
    .2byte 2562
    .2byte 4117
    .2byte 4102
    .2byte 1580
    .2byte 4663
    .2byte 3076
    .2byte 2603
    .2byte 4111
    .2byte 2562
    .2byte 3075
    .byte 0, 0

    .2byte SPECIES_LICKITUNG
    .2byte ITEM_SHELL_BELL
    .2byte MOVE_FLAMETHROWER, MOVE_EARTHQUAKE, MOVE_REST, MOVE_SLEEP_TALK
    .byte 0x00, 0x00, 0x00, 0x64, 0xFF, 0x00, 0x37, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x16, 0x00, 0x00, 0x00
    .string "LICKITUNG$", 11 @ name
    .byte 255

    .2byte SPECIES_NOCTOWL
    .2byte ITEM_SHELL_BELL
    .2byte MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_REFLECT, MOVE_AERIAL_ACE
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0B, 0x00, 0x00, 0x00
    .string "NOCTOWL$", 11 @ name
    .byte 255

    .2byte SPECIES_FURRET
    .2byte ITEM_SHELL_BELL
    .2byte MOVE_FLAMETHROWER, MOVE_AMNESIA, MOVE_SHOCK_WAVE, MOVE_SLASH
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x0E, 0x00, 0x00, 0x00
    .string "FURRET$", 11 @ name
    .byte 255

    .2byte SPECIES_RATICATE
    .2byte ITEM_SHELL_BELL
    .2byte MOVE_SUPER_FANG, MOVE_QUICK_ATTACK, MOVE_SWAGGER, MOVE_ENDEAVOR
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x8A, 0x00, 0x00, 0x00
    .string "RATICATE$", 11 @ name
    .byte 255

    .2byte SPECIES_WIGGLYTUFF
    .2byte ITEM_SHELL_BELL
    .2byte MOVE_SUNNY_DAY, MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_BODY_SLAM
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0B, 0x00, 0x00, 0x00
    .string "WIGGLYTUFF$", 11 @ name
    .byte 255

    .2byte SPECIES_PORYGON2
    .2byte ITEM_SHELL_BELL
    .2byte MOVE_THUNDERBOLT, MOVE_CONVERSION_2, MOVE_TRI_ATTACK, MOVE_RECOVER
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0A, 0x00, 0x00, 0x00
    .string "PORYGON2$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0x3B, 0x5D, 0x01, 0x00

kTrainerCard_847BF0C:: @ 847BF0C
    .byte 6 @ Card Number
    .byte 8
    .byte 1 @ Battle Type
    .byte 0 @ Reward Item

    .string "JO & HALEY$", 11 @ Trainer Name
    .byte 129, 5, 0
    .2byte 2625
    .2byte 5676
    .2byte 7700
    .2byte 1558
    .2byte 3128
    .2byte 3075
    .2byte 3130
    .2byte 2621
    .2byte 1543
    .2byte 3072
    .2byte 2059
    .2byte 3072
    .2byte 3131
    .2byte 3072
    .2byte 7705
    .2byte 3628
    .2byte 4656
    .2byte 3072
    .2byte 4138
    .2byte 2561
    .2byte 4120
    .2byte 4107
    .2byte 1585
    .2byte 3076
    .byte 0, 0

    .2byte SPECIES_SNEASEL
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_SHADOW_BALL, MOVE_SUNNY_DAY, MOVE_TAUNT, MOVE_AERIAL_ACE
    .byte 0x00, 0x00, 0xC8, 0x00, 0x32, 0xD2, 0x00, 0x32
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x0D, 0x00, 0x00, 0x00
    .string "SNEASEL$", 11 @ name
    .byte 255

    .2byte SPECIES_ALAKAZAM
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_FIRE_PUNCH, MOVE_RECOVER, MOVE_PSYCHIC, MOVE_SUNNY_DAY
    .byte 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x05, 0x00, 0x00, 0x00
    .string "ALAKAZAM$", 11 @ name
    .byte 255

    .2byte SPECIES_HITMONTOP
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_MEGA_KICK, MOVE_ENDEAVOR, MOVE_DIG, MOVE_SUNNY_DAY
    .byte 0x00, 0x00, 0x64, 0xD2, 0x00, 0xC8, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x08, 0x00, 0x00, 0x00
    .string "HITMONTOP$", 11 @ name
    .byte 255

    .2byte SPECIES_GIRAFARIG
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_LIGHT_SCREEN, MOVE_SUNNY_DAY, MOVE_SHADOW_BALL, MOVE_PSYBEAM
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x0A, 0x00, 0x00, 0x00
    .string "GIRAFARIG$", 11 @ name
    .byte 255

    .2byte SPECIES_XATU
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_SUNNY_DAY, MOVE_DRILL_PECK, MOVE_CONFUSE_RAY, MOVE_PSYCHIC
    .byte 0x00, 0x00, 0x6E, 0x00, 0x64, 0x64, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x14, 0x00, 0x00, 0x00
    .string "XATU$", 11 @ name
    .byte 255

    .2byte SPECIES_MR_MIME
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_REFLECT, MOVE_SUNNY_DAY, MOVE_PSYCHIC, MOVE_SHOCK_WAVE
    .byte 0x00, 0x00, 0x6E, 0x00, 0xC8, 0xC8, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x05, 0x00, 0x00, 0x00
    .string "MR. MIME$", 11 @ name
    .byte 255

    .string "JO & HALEY$", 11 @ Trainer Name
    .byte 129, 5, 0
    .2byte 2562
    .2byte 2562
    .2byte 2562
    .2byte 4145
    .2byte 4130
    .2byte 1542
    .2byte 2566
    .2byte 4130
    .2byte 3620
    .2byte 3075
    .2byte 2621
    .2byte 1543
    .2byte 8216
    .2byte 3076
    .2byte 2621
    .2byte 4113
    .2byte 1593
    .2byte 3076
    .2byte 3112
    .2byte 3076
    .2byte 2625
    .2byte 3631
    .2byte 8205
    .2byte 3076
    .byte 0, 0

    .2byte SPECIES_HYPNO
    .2byte ITEM_FOCUS_BAND
    .2byte MOVE_FIRE_PUNCH, MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_NIGHTMARE
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x87, 0x00, 0x00, 0x00
    .string "HYPNO$", 11 @ name
    .byte 255

    .2byte SPECIES_HITMONCHAN
    .2byte ITEM_FOCUS_BAND
    .2byte MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_DETECT
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0F, 0x00, 0x00, 0x00
    .string "HITMONCHAN$", 11 @ name
    .byte 255

    .2byte SPECIES_MACHAMP
    .2byte ITEM_FOCUS_BAND
    .2byte MOVE_FLAMETHROWER, MOVE_BRICK_BREAK, MOVE_SCARY_FACE, MOVE_DIG
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x43, 0x00, 0x00, 0x00
    .string "MACHAMP$", 11 @ name
    .byte 255

    .2byte SPECIES_HOUNDOOM
    .2byte ITEM_FOCUS_BAND
    .2byte MOVE_ROAR, MOVE_FLAMETHROWER, MOVE_BITE, MOVE_PROTECT
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x87, 0x00, 0x00, 0x00
    .string "HOUNDOOM$", 11 @ name
    .byte 255

    .2byte SPECIES_PRIMEAPE
    .2byte ITEM_FOCUS_BAND
    .2byte MOVE_OVERHEAT, MOVE_SWAGGER, MOVE_SEISMIC_TOSS, MOVE_DOUBLE_TEAM
    .byte 0x00, 0x00, 0x64, 0x00, 0x64, 0x64, 0x6E, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x8C, 0x00, 0x00, 0x00
    .string "PRIMEAPE$", 11 @ name
    .byte 255

    .2byte SPECIES_HERACROSS
    .2byte ITEM_FOCUS_BAND
    .2byte MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_LEER
    .byte 0x00, 0x00, 0x6E, 0x00, 0xC8, 0x00, 0x00, 0xC8
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x85, 0x00, 0x00, 0x00
    .string "HERACROSS$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0xB1, 0x60, 0x01, 0x00

kTrainerCard_847C2EC:: @ 847C2EC
    .byte 7 @ Card Number
    .byte 8
    .byte 2 @ Battle Type
    .byte 12 @ Reward Item

    .string "JORDY$", 11 @ Trainer Name
    .byte 97, 3, 0
    .2byte 4119
    .2byte 5662
    .2byte 2580
    .2byte 3091
    .2byte 2562
    .2byte 1595
    .2byte 7714
    .2byte 3603
    .2byte 1595
    .2byte 2562
    .2byte 4111
    .2byte 3072
    .2byte 2562
    .2byte 4113
    .2byte 3621
    .2byte 4143
    .2byte 1034
    .2byte 3072
    .2byte 4639
    .2byte 3072
    .2byte 2561
    .2byte 4119
    .2byte 527
    .2byte 4137
    .byte 0, 0

    .2byte SPECIES_MAGBY
    .2byte ITEM_LAX_INCENSE
    .2byte MOVE_SMOKESCREEN, MOVE_CONFUSE_RAY, MOVE_FLAMETHROWER, MOVE_SCREECH
    .byte 0x00, 0x00, 0xD2, 0x1E, 0x1E, 0x00, 0xD2, 0x1E
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x43, 0x00, 0x00, 0x00
    .string "MAGBY$", 11 @ name
    .byte 0

    .2byte SPECIES_CLEFFA
    .2byte ITEM_LAX_INCENSE
    .2byte MOVE_ATTRACT, MOVE_CHARM, MOVE_SECRET_POWER, MOVE_FLASH
    .byte 0x00, 0x00, 0xD2, 0xD2, 0x1E, 0x00, 0x1E, 0x1E
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0xCA, 0x00, 0x00, 0x00
    .string "CLEFFA$", 11 @ name
    .byte 255

    .2byte SPECIES_IGGLYBUFF
    .2byte ITEM_LAX_INCENSE
    .2byte MOVE_SING, MOVE_HIDDEN_POWER, MOVE_CHARM, MOVE_DOUBLE_TEAM
    .byte 0x00, 0x00, 0xD2, 0x00, 0x2D, 0xD2, 0x00, 0x2D
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0xD2, 0x00, 0x00, 0x00
    .string "IGGLYBUFF$", 11 @ name
    .byte 255

    .2byte SPECIES_SMOOCHUM
    .2byte ITEM_LAX_INCENSE
    .2byte MOVE_FAKE_TEARS, MOVE_PSYCHIC, MOVE_MEAN_LOOK, MOVE_SING
    .byte 0x00, 0x00, 0xD2, 0x00, 0x2D, 0x00, 0xD2, 0x2D
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x11, 0x00, 0x00, 0x00
    .string "SMOOCHUM$", 11 @ name
    .byte 255

    .2byte SPECIES_TOGEPI
    .2byte ITEM_LAX_INCENSE
    .2byte MOVE_SWEET_KISS, MOVE_YAWN, MOVE_ANCIENT_POWER, MOVE_DOUBLE_TEAM
    .byte 0x00, 0x00, 0xD2, 0xD2, 0x2D, 0x00, 0x00, 0x2D
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x34, 0x00, 0x00, 0x00
    .string "TOGEPI$", 11 @ name
    .byte 0

    .2byte SPECIES_PICHU
    .2byte ITEM_LAX_INCENSE
    .2byte MOVE_THUNDER_WAVE, MOVE_SHOCK_WAVE, MOVE_SWEET_KISS, MOVE_FLASH
    .byte 0x00, 0x00, 0xD2, 0x00, 0x2D, 0x00, 0xD2, 0x2D
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x8E, 0x00, 0x00, 0x00
    .string "PICHU$", 11 @ name
    .byte 0

    .string "ERNEST$", 11 @ Trainer Name
    .byte 97, 1, 0
    .2byte 2609
    .2byte 5684
    .2byte 7187
    .2byte 4139
    .2byte 2594
    .2byte 3072
    .2byte 4130
    .2byte 1556
    .2byte 3601
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 7717
    .2byte 4155
    .2byte 2562
    .2byte 8726
    .2byte 2580
    .2byte 3075
    .2byte 2601
    .2byte 4671
    .2byte 2561
    .2byte 5135
    .2byte 4128
    .2byte 6696
    .byte 0, 0

    .2byte SPECIES_CLEFFA
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_SWEET_KISS, MOVE_FRUSTRATION, MOVE_SING, MOVE_ATTRACT
    .byte 0x00, 0x00, 0xD2, 0xD2, 0x2D, 0x00, 0x00, 0x2D
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0xCA, 0x00, 0x00, 0x00
    .string "CLEFFA$", 11 @ name
    .byte 0

    .2byte SPECIES_MAGBY
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_FRUSTRATION, MOVE_CONFUSE_RAY, MOVE_FLAMETHROWER, MOVE_TOXIC
    .byte 0x00, 0x00, 0x5A, 0xD2, 0x00, 0x00, 0xD2, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x4D, 0x00, 0x00, 0x00
    .string "MAGBY$", 11 @ name
    .byte 0

    .2byte SPECIES_TOGEPI
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_FRUSTRATION, MOVE_DOUBLE_TEAM, MOVE_TOXIC, MOVE_SWEET_KISS
    .byte 0x00, 0x00, 0xD2, 0xD2, 0x2D, 0x00, 0x00, 0x2D
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x34, 0x00, 0x00, 0x00
    .string "TOGEPI$", 11 @ name
    .byte 0

    .2byte SPECIES_SMOOCHUM
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_MEAN_LOOK, MOVE_PERISH_SONG, MOVE_TOXIC, MOVE_FLASH
    .byte 0x00, 0x00, 0x5A, 0x00, 0xD2, 0x00, 0x00, 0xD2
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x16, 0x00, 0x00, 0x00
    .string "SMOOCHUM$", 11 @ name
    .byte 0

    .2byte SPECIES_IGGLYBUFF
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_DOUBLE_TEAM, MOVE_SWEET_KISS, MOVE_SEISMIC_TOSS, MOVE_FLASH
    .byte 0x00, 0x00, 0xD2, 0x00, 0x2D, 0xD2, 0x00, 0x2D
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x0A, 0x00, 0x00, 0x00
    .string "IGGLYBUFF$", 11 @ name
    .byte 0

    .2byte SPECIES_PICHU
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_TAIL_WHIP, MOVE_FRUSTRATION, MOVE_ATTRACT, MOVE_THUNDER_WAVE
    .byte 0x00, 0x00, 0x5A, 0xD2, 0x00, 0xD2, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x80, 0x00, 0x00, 0x00
    .string "PICHU$", 11 @ name
    .byte 0

    .string "GABRIEL$", 11 @ Trainer Name
    .byte 102, 1, 0
    .2byte 2086
    .2byte 3072
    .2byte 2051
    .2byte 4143
    .2byte 1122
    .2byte 2562
    .2byte 2601
    .2byte 1590
    .2byte 2562
    .2byte 4618
    .2byte 7700
    .2byte 3075
    .2byte 7714
    .2byte 4112
    .2byte 7700
    .2byte 3075
    .2byte 65535
    .2byte 65535
    .2byte 2601
    .2byte 5128
    .2byte 4143
    .2byte 1542
    .2byte 7196
    .2byte 7187
    .byte 0, 0

    .2byte SPECIES_PICHU
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_THUNDER_WAVE, MOVE_FRUSTRATION, MOVE_THUNDERBOLT, MOVE_ATTRACT
    .byte 0x00, 0x00, 0x5A, 0xD2, 0x00, 0x00, 0xD2, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x81, 0x00, 0x00, 0x00
    .string "PICHU$", 11 @ name
    .byte 0

    .2byte SPECIES_TOGEPI
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_ATTRACT, MOVE_FRUSTRATION, MOVE_TOXIC, MOVE_SUBSTITUTE
    .byte 0x00, 0x00, 0xD2, 0xD2, 0x00, 0x00, 0x00, 0x5A
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x33, 0x00, 0x00, 0x00
    .string "TOGEPI$", 11 @ name
    .byte 0

    .2byte SPECIES_CLEFFA
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_ENCORE, MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_FLASH
    .byte 0x00, 0x00, 0xD2, 0x00, 0x96, 0x00, 0x00, 0x96
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0xCF, 0x00, 0x00, 0x00
    .string "CLEFFA$", 11 @ name
    .byte 0

    .2byte SPECIES_IGGLYBUFF
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_ATTRACT, MOVE_SUBSTITUTE, MOVE_SING, MOVE_PERISH_SONG
    .byte 0x00, 0x00, 0xD2, 0x00, 0xD2, 0x00, 0x00, 0x5A
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0xCF, 0x00, 0x00, 0x00
    .string "IGGLYBUFF$", 11 @ name
    .byte 0

    .2byte SPECIES_SMOOCHUM
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_SWEET_KISS, MOVE_PERISH_SONG, MOVE_TOXIC, MOVE_ATTRACT
    .byte 0x00, 0x00, 0x6E, 0x00, 0xC8, 0x00, 0x00, 0xC8
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x16, 0x00, 0x00, 0x00
    .string "SMOOCHUM$", 11 @ name
    .byte 0

    .2byte SPECIES_MAGBY
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_LEER, MOVE_FRUSTRATION, MOVE_SUBSTITUTE, MOVE_FLAMETHROWER
    .byte 0x00, 0x00, 0x5A, 0xD2, 0x00, 0x00, 0xD2, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x4D, 0x00, 0x00, 0x00
    .string "MAGBY$", 11 @ name
    .byte 0

    .byte 0x4A, 0x7A, 0x01, 0x00

kTrainerCard_847C6CC:: @ 847C6CC
    .byte 8 @ Card Number
    .byte 8
    .byte 2 @ Battle Type
    .byte 14 @ Reward Item

    .string "MIKE$", 11 @ Trainer Name
    .byte 96, 5, 0
    .2byte 2600
    .2byte 526
    .2byte 4111
    .2byte 5132
    .2byte 4148
    .2byte 1566
    .2byte 2075
    .2byte 7712
    .2byte 4107
    .2byte 2565
    .2byte 1566
    .2byte 3075
    .2byte 2562
    .2byte 4618
    .2byte 2580
    .2byte 4144
    .2byte 2565
    .2byte 9980
    .2byte 3100
    .2byte 3072
    .2byte 3613
    .2byte 5146
    .2byte 5148
    .2byte 3072
    .byte 0, 0

    .2byte SPECIES_PINSIR
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_GUILLOTINE, MOVE_BRICK_BREAK, MOVE_DIG, MOVE_REVENGE
    .byte 0x00, 0x00, 0x64, 0xD2, 0x00, 0x64, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x80, 0x00, 0x00, 0x00
    .string "PINSIR$", 11 @ name
    .byte 255

    .2byte SPECIES_CHARIZARD
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_DRAGON_CLAW, MOVE_METAL_CLAW, MOVE_AERIAL_ACE, MOVE_OUTRAGE
    .byte 0x00, 0x00, 0xC8, 0xC8, 0x00, 0x6E, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x35, 0x00, 0x00, 0x00
    .string "CHARIZARD$", 11 @ name
    .byte 255

    .2byte SPECIES_RHYDON
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_MEGAHORN, MOVE_HORN_DRILL, MOVE_CRUSH_CLAW, MOVE_BRICK_BREAK
    .byte 0x00, 0x00, 0x64, 0xD2, 0xC8, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x09, 0x00, 0x00, 0x00
    .string "RHYDON$", 11 @ name
    .byte 255

    .2byte SPECIES_ARCANINE
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_EXTREME_SPEED, MOVE_IRON_TAIL, MOVE_AERIAL_ACE, MOVE_DIG
    .byte 0x00, 0x00, 0x6E, 0xC8, 0x00, 0xC8, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x3F, 0x00, 0x00, 0x00
    .string "ARCANINE$", 11 @ name
    .byte 255

    .2byte SPECIES_GOLEM
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_DOUBLE_EDGE, MOVE_ROLLOUT, MOVE_BRICK_BREAK, MOVE_DIG
    .byte 0x00, 0x00, 0x64, 0xD2, 0xC8, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x02, 0x00, 0x00, 0x00
    .string "GOLEM$", 11 @ name
    .byte 255

    .2byte SPECIES_HOUNDOOM
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_CRUNCH, MOVE_REVERSAL, MOVE_DOUBLE_EDGE, MOVE_COUNTER
    .byte 0x00, 0x00, 0xC8, 0x6E, 0xC8, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x9E
    .byte 0x08, 0x00, 0x00, 0x00
    .string "HOUNDOOM$", 11 @ name
    .byte 255

    .string "REBECCA$", 11 @ Trainer Name
    .byte 138, 5, 0
    .2byte 2561
    .2byte 4096
    .2byte 1542
    .2byte 3073
    .2byte 65535
    .2byte 65535
    .2byte 2609
    .2byte 4153
    .2byte 4654
    .2byte 3594
    .2byte 2601
    .2byte 5154
    .2byte 3124
    .2byte 3073
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 2562
    .2byte 4632
    .2byte 2580
    .2byte 3594
    .2byte 2566
    .2byte 1075
    .byte 0, 0

    .2byte SPECIES_SANDSLASH
    .2byte ITEM_SILK_SCARF
    .2byte MOVE_CRUSH_CLAW, MOVE_DIG, MOVE_DOUBLE_EDGE, MOVE_AERIAL_ACE
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x0D, 0x00, 0x00, 0x00
    .string "SANDSLASH$", 11 @ name
    .byte 255

    .2byte SPECIES_DRAGONAIR
    .2byte ITEM_SILK_SCARF
    .2byte MOVE_OUTRAGE, MOVE_IRON_TAIL, MOVE_DOUBLE_EDGE, MOVE_SLAM
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x03, 0x00, 0x00, 0x00
    .string "DRAGONAIR$", 11 @ name
    .byte 255

    .2byte SPECIES_RAPIDASH
    .2byte ITEM_SILK_SCARF
    .2byte MOVE_BOUNCE, MOVE_IRON_TAIL, MOVE_THRASH, MOVE_DOUBLE_EDGE
    .byte 0x00, 0x00, 0x6E, 0x64, 0x64, 0x64, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x9E
    .byte 0x94, 0x00, 0x00, 0x00
    .string "RAPIDASH$", 11 @ name
    .byte 255

    .2byte SPECIES_FLAREON
    .2byte ITEM_SILK_SCARF
    .2byte MOVE_IRON_TAIL, MOVE_FLAIL, MOVE_BITE, MOVE_DOUBLE_EDGE
    .byte 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x21, 0x00, 0x00, 0x00
    .string "FLAREON$", 11 @ name
    .byte 255

    .2byte SPECIES_NIDOQUEEN
    .2byte ITEM_SILK_SCARF
    .2byte MOVE_SUPERPOWER, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_COUNTER
    .byte 0x00, 0x00, 0x6E, 0x64, 0x64, 0x64, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x17, 0x00, 0x00, 0x00
    .string "NIDOQUEEN$", 11 @ name
    .byte 255

    .2byte SPECIES_PERSIAN
    .2byte ITEM_SILK_SCARF
    .2byte MOVE_RETURN, MOVE_AERIAL_ACE, MOVE_IRON_TAIL, MOVE_DIG
    .byte 0x00, 0x00, 0x6E, 0xC8, 0x00, 0xC8, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x80, 0x00, 0x00, 0x00
    .string "PERSIAN$", 11 @ name
    .byte 255

    .string "NICOLAS$", 11 @ Trainer Name
    .byte 111, 5, 0
    .2byte 7695
    .2byte 4107
    .2byte 7712
    .2byte 2562
    .2byte 7193
    .2byte 3072
    .2byte 2566
    .2byte 1594
    .2byte 4143
    .2byte 4146
    .2byte 4671
    .2byte 2580
    .2byte 7717
    .2byte 5677
    .2byte 2561
    .2byte 4671
    .2byte 2562
    .2byte 3075
    .2byte 2561
    .2byte 4126
    .2byte 4143
    .2byte 6159
    .2byte 2634
    .2byte 3638
    .byte 0, 0

    .2byte SPECIES_HITMONLEE
    .2byte ITEM_KINGS_ROCK
    .2byte MOVE_MEGA_KICK, MOVE_REVERSAL, MOVE_FOCUS_PUNCH, MOVE_BRICK_BREAK
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x08, 0x00, 0x00, 0x00
    .string "HITMONLEE$", 11 @ name
    .byte 255

    .2byte SPECIES_SCYTHER
    .2byte ITEM_KINGS_ROCK
    .2byte MOVE_SLASH, MOVE_REVERSAL, MOVE_STEEL_WING, MOVE_AERIAL_ACE
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x17, 0x00, 0x00, 0x00
    .string "SCYTHER$", 11 @ name
    .byte 255

    .2byte SPECIES_MAGMAR
    .2byte ITEM_KINGS_ROCK
    .2byte MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_BRICK_BREAK, MOVE_IRON_TAIL
    .byte 0x00, 0x00, 0x6E, 0x64, 0x64, 0x64, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x53, 0x00, 0x00, 0x00
    .string "MAGMAR$", 11 @ name
    .byte 255

    .2byte SPECIES_MACHAMP
    .2byte ITEM_KINGS_ROCK
    .2byte MOVE_DYNAMIC_PUNCH, MOVE_DIG, MOVE_CROSS_CHOP, MOVE_REVENGE
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x3F, 0x00, 0x00, 0x00
    .string "MACHAMP$", 11 @ name
    .byte 255

    .2byte SPECIES_PRIMEAPE
    .2byte ITEM_KINGS_ROCK
    .2byte MOVE_THRASH, MOVE_CROSS_CHOP, MOVE_IRON_TAIL, MOVE_AERIAL_ACE
    .byte 0x00, 0x00, 0x00, 0x00, 0xC8, 0x6E, 0x00, 0xC8
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x08, 0x00, 0x00, 0x00
    .string "PRIMEAPE$", 11 @ name
    .byte 255

    .2byte SPECIES_POLIWRATH
    .2byte ITEM_KINGS_ROCK
    .2byte MOVE_BODY_SLAM, MOVE_DIG, MOVE_MEGA_KICK, MOVE_COUNTER
    .byte 0x00, 0x00, 0x6E, 0x64, 0x64, 0x64, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x0D, 0x00, 0x00, 0x00
    .string "POLIWRATH$", 11 @ name
    .byte 255

    .byte 0x05, 0x6F, 0x01, 0x00

kTrainerCard_847CAAC:: @ 847CAAC
    .byte 9 @ Card Number
    .byte 8
    .byte 0 @ Battle Type
    .byte 0 @ Reward Item

    .string "JOEY$", 11 @ Trainer Name
    .byte 92, 1, 0
    .2byte 2600
    .2byte 526
    .2byte 4111
    .2byte 4633
    .2byte 1568
    .2byte 3072
    .2byte 4113
    .2byte 2600
    .2byte 526
    .2byte 4153
    .2byte 5153
    .2byte 3075
    .2byte 2565
    .2byte 526
    .2byte 4111
    .2byte 3107
    .2byte 1569
    .2byte 3072
    .2byte 3597
    .2byte 3107
    .2byte 526
    .2byte 1536
    .2byte 4107
    .2byte 4616
    .byte 0, 0

    .2byte SPECIES_MURKROW
    .2byte ITEM_BLACK_GLASSES
    .2byte MOVE_FAINT_ATTACK, MOVE_AERIAL_ACE, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x89, 0x00, 0x00, 0x00
    .string "MURKROW$", 11 @ name
    .byte 255

    .2byte SPECIES_TAUROS
    .2byte ITEM_SILK_SCARF
    .2byte MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_ROCK_TOMB, MOVE_PURSUIT
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0C, 0x00, 0x00, 0x00
    .string "TAUROS$", 11 @ name
    .byte 255

    .2byte SPECIES_SLOWBRO
    .2byte ITEM_MYSTIC_WATER
    .2byte MOVE_AMNESIA, MOVE_PSYCHIC, MOVE_SURF, MOVE_ICE_BEAM
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x89, 0x00, 0x00, 0x00
    .string "SLOWBRO$", 11 @ name
    .byte 255

    .2byte SPECIES_ARBOK
    .2byte ITEM_POISON_BARB
    .2byte MOVE_IRON_TAIL, MOVE_SLUDGE_BOMB, MOVE_ROCK_SLIDE, MOVE_TOXIC
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x89, 0x00, 0x00, 0x00
    .string "ARBOK$", 11 @ name
    .byte 255

    .2byte SPECIES_NIDOKING
    .2byte ITEM_SOFT_SAND
    .2byte MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_SLUDGE_BOMB, MOVE_ROCK_SLIDE
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0C, 0x00, 0x00, 0x00
    .string "NIDOKING$", 11 @ name
    .byte 255

    .2byte SPECIES_RAPIDASH
    .2byte ITEM_CHARCOAL
    .2byte MOVE_FLAMETHROWER, MOVE_BOUNCE, MOVE_QUICK_ATTACK, MOVE_DOUBLE_KICK
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x89, 0x00, 0x00, 0x00
    .string "RAPIDASH$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0x17, 0x64, 0x01, 0x00

kTrainerCard_847CE8C:: @ 847CE8C
    .byte 10 @ Card Number
    .byte 8
    .byte 0 @ Battle Type
    .byte 12 @ Reward Item

    .string "LILY$", 11 @ Trainer Name
    .byte 140, 1, 0
    .2byte 2561
    .2byte 4662
    .2byte 3622
    .2byte 4151
    .2byte 9432
    .2byte 3072
    .2byte 2561
    .2byte 5671
    .2byte 4151
    .2byte 2600
    .2byte 526
    .2byte 3072
    .2byte 2561
    .2byte 5135
    .2byte 3622
    .2byte 4151
    .2byte 9432
    .2byte 3076
    .2byte 2600
    .2byte 526
    .2byte 4126
    .2byte 2600
    .2byte 5653
    .2byte 7176
    .byte 0, 0

    .2byte SPECIES_CLEFAIRY
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_CHARM, MOVE_METRONOME, MOVE_RETURN, MOVE_REST
    .byte 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x0C, 0x00, 0x00, 0x00
    .string "CLEFAIRY$", 11 @ name
    .byte 255

    .2byte SPECIES_TOGEPI
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_CHARM, MOVE_METRONOME, MOVE_RETURN, MOVE_REST
    .byte 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x0C, 0x00, 0x00, 0x00
    .string "TOGEPI$", 11 @ name
    .byte 255

    .2byte SPECIES_MEOWTH
    .2byte ITEM_SILK_SCARF
    .2byte MOVE_CHARM, MOVE_ASSIST, MOVE_RETURN, MOVE_REST
    .byte 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x89, 0x00, 0x00, 0x00
    .string "MEOWTH$", 11 @ name
    .byte 255

    .2byte SPECIES_JIGGLYPUFF
    .2byte ITEM_SILK_SCARF
    .2byte MOVE_CHARM, MOVE_ROLLOUT, MOVE_RETURN, MOVE_REST
    .byte 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x0C, 0x00, 0x00, 0x00
    .string "JIGGLYPUFF$", 11 @ name
    .byte 255

    .2byte SPECIES_SNORLAX
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_CHARM, MOVE_ROLLOUT, MOVE_RETURN, MOVE_REST
    .byte 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x25, 0x00, 0x00, 0x00
    .string "SNORLAX$", 11 @ name
    .byte 255

    .2byte SPECIES_SNUBBULL
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_CHARM, MOVE_LICK, MOVE_RETURN, MOVE_REST
    .byte 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x0C, 0x00, 0x00, 0x00
    .string "SNUBBULL$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0xB7, 0x6C, 0x01, 0x00

kTrainerCard_847D26C:: @ 847D26C
    .byte 11 @ Card Number
    .byte 8
    .byte 0 @ Battle Type
    .byte 14 @ Reward Item

    .string "BRANDON$", 11 @ Trainer Name
    .byte 89, 1, 0
    .2byte 1084
    .2byte 4107
    .2byte 3614
    .2byte 4133
    .2byte 5174
    .2byte 4108
    .2byte 4665
    .2byte 3075
    .2byte 4115
    .2byte 1084
    .2byte 4656
    .2byte 3075
    .2byte 2076
    .2byte 2624
    .2byte 1084
    .2byte 4156
    .2byte 6157
    .2byte 3075
    .2byte 1084
    .2byte 4107
    .2byte 4128
    .2byte 4656
    .2byte 9475
    .2byte 4108
    .byte 0, 0

    .2byte SPECIES_BUTTERFREE
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_SILVER_WIND, MOVE_SLEEP_POWDER, MOVE_PSYCHIC, MOVE_SUPERSONIC
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x8A, 0x00, 0x00, 0x00
    .string "BUTTERFREE$", 11 @ name
    .byte 255

    .2byte SPECIES_BEEDRILL
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_SLUDGE_BOMB, MOVE_TWINEEDLE, MOVE_DOUBLE_TEAM, MOVE_AERIAL_ACE
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x8A, 0x00, 0x00, 0x00
    .string "BEEDRILL$", 11 @ name
    .byte 255

    .2byte SPECIES_PARASECT
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_GIGA_DRAIN, MOVE_LIGHT_SCREEN, MOVE_STUN_SPORE, MOVE_SLASH
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x8A, 0x00, 0x00, 0x00
    .string "PARASECT$", 11 @ name
    .byte 255

    .2byte SPECIES_YANMA
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_HYPNOSIS, MOVE_SONIC_BOOM, MOVE_QUICK_ATTACK, MOVE_AERIAL_ACE
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x9E
    .byte 0x8A, 0x00, 0x00, 0x00
    .string "YANMA$", 11 @ name
    .byte 255

    .2byte SPECIES_SHUCKLE
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_TOXIC, MOVE_ROCK_TOMB, MOVE_PROTECT, MOVE_REST
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x8A, 0x00, 0x00, 0x00
    .string "SHUCKLE$", 11 @ name
    .byte 255

    .2byte SPECIES_FORRETRESS
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_TOXIC, MOVE_GIGA_DRAIN, MOVE_PROTECT, MOVE_SANDSTORM
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x8A, 0x00, 0x00, 0x00
    .string "FORRETRESS$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0x1F, 0x6E, 0x01, 0x00

kTrainerCard_847D64C:: @ 847D64C
    .byte 12 @ Card Number
    .byte 8
    .byte 1 @ Battle Type
    .byte 2 @ Reward Item

    .string "RIC & RENE$", 11 @ Trainer Name
    .byte 129, 5, 0
    .2byte 2600
    .2byte 5139
    .2byte 2574
    .2byte 4107
    .2byte 3628
    .2byte 8215
    .2byte 2600
    .2byte 5139
    .2byte 2574
    .2byte 4107
    .2byte 4153
    .2byte 8215
    .2byte 2600
    .2byte 5139
    .2byte 2574
    .2byte 4115
    .2byte 8215
    .2byte 3075
    .2byte 5139
    .2byte 2574
    .2byte 1577
    .2byte 3072
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_HITMONLEE
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_ROCK_TOMB, MOVE_HI_JUMP_KICK, MOVE_BULK_UP, MOVE_PROTECT
    .byte 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x02, 0x00, 0x00, 0x00
    .string "HITMONLEE$", 11 @ name
    .byte 255

    .2byte SPECIES_RHYDON
    .2byte ITEM_SHELL_BELL
    .2byte MOVE_MEGAHORN, MOVE_ROCK_BLAST, MOVE_BRICK_BREAK, MOVE_PROTECT
    .byte 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x7F, 0x00, 0x00, 0x00
    .string "RHYDON$", 11 @ name
    .byte 255

    .2byte SPECIES_GOLEM
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_BRICK_BREAK, MOVE_ROCK_BLAST, MOVE_DIG, MOVE_PROTECT
    .byte 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x02, 0x00, 0x00, 0x00
    .string "GOLEM$", 11 @ name
    .byte 255

    .2byte SPECIES_MAGMAR
    .2byte ITEM_SHELL_BELL
    .2byte MOVE_FIRE_PUNCH, MOVE_BRICK_BREAK, MOVE_CONFUSE_RAY, MOVE_PROTECT
    .byte 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x4F, 0x00, 0x00, 0x00
    .string "MAGMAR$", 11 @ name
    .byte 255

    .2byte SPECIES_HERACROSS
    .2byte ITEM_FOCUS_BAND
    .2byte MOVE_MEGAHORN, MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_PROTECT
    .byte 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x7F, 0x00, 0x00, 0x00
    .string "HERACROSS$", 11 @ name
    .byte 255

    .2byte SPECIES_POLIWRATH
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_FOCUS_PUNCH, MOVE_SURF, MOVE_BULK_UP, MOVE_PROTECT
    .byte 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x97, 0x00, 0x00, 0x00
    .string "POLIWRATH$", 11 @ name
    .byte 255

    .string "RIC & RENE$", 11 @ Trainer Name
    .byte 129, 5, 0
    .2byte 2601
    .2byte 3628
    .2byte 8215
    .2byte 3072
    .2byte 65535
    .2byte 65535
    .2byte 2601
    .2byte 4153
    .2byte 8215
    .2byte 3072
    .2byte 65535
    .2byte 65535
    .2byte 2076
    .2byte 65535
    .2byte 2601
    .2byte 3585
    .2byte 8215
    .2byte 3075
    .2byte 2561
    .2byte 4096
    .2byte 4120
    .2byte 2600
    .2byte 5180
    .2byte 3072
    .byte 0, 0

    .2byte SPECIES_MACHAMP
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_CROSS_CHOP, MOVE_SEISMIC_TOSS, MOVE_ROCK_TOMB, MOVE_PROTECT
    .byte 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x4E, 0x00, 0x00, 0x00
    .string "MACHAMP$", 11 @ name
    .byte 255

    .2byte SPECIES_PINSIR
    .2byte ITEM_FOCUS_BAND
    .2byte MOVE_ROCK_TOMB, MOVE_SEISMIC_TOSS, MOVE_SUBMISSION, MOVE_PROTECT
    .byte 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x80, 0x00, 0x00, 0x00
    .string "PINSIR$", 11 @ name
    .byte 255

    .2byte SPECIES_MAROWAK
    .2byte ITEM_SHELL_BELL
    .2byte MOVE_BRICK_BREAK, MOVE_BONEMERANG, MOVE_AERIAL_ACE, MOVE_PROTECT
    .byte 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x03, 0x00, 0x00, 0x00
    .string "MAROWAK$", 11 @ name
    .byte 255

    .2byte SPECIES_HITMONCHAN
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_MACH_PUNCH, MOVE_THUNDER_PUNCH, MOVE_DOUBLE_TEAM, MOVE_PROTECT
    .byte 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x03, 0x00, 0x00, 0x00
    .string "HITMONCHAN$", 11 @ name
    .byte 255

    .2byte SPECIES_ELECTABUZZ
    .2byte ITEM_SHELL_BELL
    .2byte MOVE_THUNDER_PUNCH, MOVE_BRICK_BREAK, MOVE_THUNDER_WAVE, MOVE_PROTECT
    .byte 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x4F, 0x00, 0x00, 0x00
    .string "ELECTABUZZ$", 11 @ name
    .byte 255

    .2byte SPECIES_POLIWRATH
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_FOCUS_PUNCH, MOVE_SURF, MOVE_BULK_UP, MOVE_PROTECT
    .byte 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x97, 0x00, 0x00, 0x00
    .string "POLIWRATH$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0xB4, 0x66, 0x01, 0x00

kTrainerCard_847DA2C:: @ 847DA2C
    .byte 13 @ Card Number
    .byte 8
    .byte 1 @ Battle Type
    .byte 13 @ Reward Item

    .string "JEN & KIRA$", 11 @ Trainer Name
    .byte 126, 5, 0
    .2byte 2601
    .2byte 5128
    .2byte 4143
    .2byte 4623
    .2byte 4655
    .2byte 3072
    .2byte 3098
    .2byte 3130
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 3082
    .2byte 3072
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 2561
    .2byte 4096
    .2byte 4623
    .2byte 4143
    .2byte 527
    .2byte 4145
    .byte 0, 0

    .2byte SPECIES_JOLTEON
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_QUICK_ATTACK, MOVE_THUNDERBOLT, MOVE_DOUBLE_KICK, MOVE_PIN_MISSILE
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x29, 0x00, 0x00, 0x00
    .string "JOLTEON$", 11 @ name
    .byte 255

    .2byte SPECIES_ESPEON
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_QUICK_ATTACK, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_BITE
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x29, 0x00, 0x00, 0x00
    .string "ESPEON$", 11 @ name
    .byte 255

    .2byte SPECIES_FLAREON
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_QUICK_ATTACK, MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_IRON_TAIL
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x33, 0x00, 0x00, 0x00
    .string "FLAREON$", 11 @ name
    .byte 255

    .2byte SPECIES_VAPOREON
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_QUICK_ATTACK, MOVE_WATERFALL, MOVE_ICE_BEAM, MOVE_BITE
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x10, 0x00, 0x00, 0x00
    .string "VAPOREON$", 11 @ name
    .byte 255

    .2byte SPECIES_EEVEE
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_QUICK_ATTACK, MOVE_DOUBLE_EDGE, MOVE_BITE, MOVE_IRON_TAIL
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x10, 0x00, 0x00, 0x00
    .string "EEVEE$", 11 @ name
    .byte 255

    .2byte SPECIES_UMBREON
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_QUICK_ATTACK, MOVE_FAINT_ATTACK, MOVE_SHADOW_BALL, MOVE_IRON_TAIL
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x10, 0x00, 0x00, 0x00
    .string "UMBREON$", 11 @ name
    .byte 255

    .string "JEN & KIRA$", 11 @ Trainer Name
    .byte 126, 3, 0
    .2byte 4109
    .2byte 4623
    .2byte 4655
    .2byte 3072
    .2byte 65535
    .2byte 65535
    .2byte 3091
    .2byte 3076
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 3082
    .2byte 3072
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 2621
    .2byte 4126
    .2byte 4143
    .2byte 6157
    .2byte 4145
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_JOLTEON
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HELPING_HAND, MOVE_THUNDERBOLT
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00
    .byte 0x0A, 0x00, 0x00, 0x00, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x0A, 0x00, 0x00, 0x00
    .string "JOLTEON$", 11 @ name
    .byte 255

    .2byte SPECIES_ESPEON
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_HELPING_HAND, MOVE_PSYCHIC
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00
    .byte 0x0A, 0x00, 0x00, 0x00, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x0A, 0x00, 0x00, 0x00
    .string "ESPEON$", 11 @ name
    .byte 255

    .2byte SPECIES_FLAREON
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HELPING_HAND, MOVE_FLAMETHROWER
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00
    .byte 0x0D, 0x00, 0x00, 0x00, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x0D, 0x00, 0x00, 0x00
    .string "FLAREON$", 11 @ name
    .byte 255

    .2byte SPECIES_VAPOREON
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HELPING_HAND, MOVE_SURF
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00
    .byte 0x23, 0x00, 0x00, 0x00, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x23, 0x00, 0x00, 0x00
    .string "VAPOREON$", 11 @ name
    .byte 255

    .2byte SPECIES_EEVEE
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HELPING_HAND, MOVE_DOUBLE_EDGE
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00
    .byte 0x23, 0x00, 0x00, 0x00, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x23, 0x00, 0x00, 0x00
    .string "EEVEE$", 11 @ name
    .byte 255

    .2byte SPECIES_UMBREON
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HELPING_HAND, MOVE_FAINT_ATTACK
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00
    .byte 0x23, 0x00, 0x00, 0x00, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x23, 0x00, 0x00, 0x00
    .string "UMBREON$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0xC2, 0x7F, 0x01, 0x00

kTrainerCard_847DE0C:: @ 847DE0C
    .byte 14 @ Card Number
    .byte 8
    .byte 1 @ Battle Type
    .byte 8 @ Reward Item

    .string "ISAC & MAG$", 11 @ Trainer Name
    .byte 127, 1, 0
    .2byte 2624
    .2byte 9305
    .2byte 4096
    .2byte 5662
    .2byte 2562
    .2byte 8218
    .2byte 3593
    .2byte 8218
    .2byte 2076
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 2601
    .2byte 4138
    .2byte 8218
    .2byte 3076
    .2byte 65535
    .2byte 65535
    .2byte 2600
    .2byte 2581
    .2byte 4115
    .2byte 8218
    .2byte 2633
    .2byte 8225
    .byte 0, 0

    .2byte SPECIES_NIDOKING
    .2byte ITEM_SOFT_SAND
    .2byte MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_SHADOW_BALL, MOVE_FIRE_BLAST
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x03, 0x00, 0x00, 0x00
    .string "NIDOKING$", 11 @ name
    .byte 255

    .2byte SPECIES_GLIGAR
    .2byte ITEM_SOFT_SAND
    .2byte MOVE_EARTHQUAKE, MOVE_QUICK_ATTACK, MOVE_AERIAL_ACE, MOVE_IRON_TAIL
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x80, 0x00, 0x00, 0x00
    .string "GLIGAR$", 11 @ name
    .byte 255

    .2byte SPECIES_QUAGSIRE
    .2byte ITEM_SOFT_SAND
    .2byte MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_BLIZZARD, MOVE_BRICK_BREAK
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x80, 0x00, 0x00, 0x00
    .string "QUAGSIRE$", 11 @ name
    .byte 0

    .2byte SPECIES_PILOSWINE
    .2byte ITEM_SOFT_SAND
    .2byte MOVE_EARTHQUAKE, MOVE_BLIZZARD, MOVE_ANCIENT_POWER, MOVE_BODY_SLAM
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x80, 0x00, 0x00, 0x00
    .string "PILOSWINE$", 11 @ name
    .byte 255

    .2byte SPECIES_GOLEM
    .2byte ITEM_SOFT_SAND
    .2byte MOVE_EARTHQUAKE, MOVE_ROCK_BLAST, MOVE_BRICK_BREAK, MOVE_EXPLOSION
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x80, 0x00, 0x00, 0x00
    .string "GOLEM$", 11 @ name
    .byte 255

    .2byte SPECIES_STEELIX
    .2byte ITEM_SOFT_SAND
    .2byte MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_DRAGON_BREATH, MOVE_DOUBLE_EDGE
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x80, 0x00, 0x00, 0x00
    .string "STEELIX$", 11 @ name
    .byte 255

    .string "ISAC & MAG$", 11 @ Trainer Name
    .byte 127, 1, 0
    .2byte 2600
    .2byte 526
    .2byte 4157
    .2byte 527
    .2byte 4138
    .2byte 8218
    .2byte 4665
    .2byte 3075
    .2byte 2561
    .2byte 4156
    .2byte 3587
    .2byte 3072
    .2byte 2076
    .2byte 2562
    .2byte 7720
    .2byte 2580
    .2byte 3593
    .2byte 8218
    .2byte 2601
    .2byte 8225
    .2byte 4139
    .2byte 2585
    .2byte 4130
    .2byte 8218
    .byte 0, 0

    .2byte SPECIES_SKARMORY
    .2byte ITEM_KINGS_ROCK
    .2byte MOVE_SANDSTORM, MOVE_STEEL_WING, MOVE_AIR_CUTTER, MOVE_SPIKES
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0B, 0x00, 0x00, 0x00
    .string "SKARMORY$", 11 @ name
    .byte 255

    .2byte SPECIES_MANTINE
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_ICE_BEAM, MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_AERIAL_ACE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x0B, 0x00, 0x00, 0x00
    .string "MANTINE$", 11 @ name
    .byte 255

    .2byte SPECIES_JUMPLUFF
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_TAIL_WHIP, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_AERIAL_ACE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0B, 0x00, 0x00, 0x00
    .string "JUMPLUFF$", 11 @ name
    .byte 255

    .2byte SPECIES_GENGAR
    .2byte ITEM_KINGS_ROCK
    .2byte MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_PSYCHIC
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0B, 0x00, 0x00, 0x00
    .string "GENGAR$", 11 @ name
    .byte 255

    .2byte SPECIES_CROBAT
    .2byte ITEM_KINGS_ROCK
    .2byte MOVE_GIGA_DRAIN, MOVE_POISON_FANG, MOVE_FLY, MOVE_STEEL_WING
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0B, 0x00, 0x00, 0x00
    .string "CROBAT$", 11 @ name
    .byte 255

    .2byte SPECIES_XATU
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_AERIAL_ACE, MOVE_LIGHT_SCREEN
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0B, 0x00, 0x00, 0x00
    .string "XATU$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0xB0, 0x6B, 0x01, 0x00

kTrainerCard_847E1EC:: @ 847E1EC
    .byte 15 @ Card Number
    .byte 8
    .byte 2 @ Battle Type
    .byte 6 @ Reward Item

    .string "CHELSEA$", 11 @ Trainer Name
    .byte 142, 7, 0
    .2byte 3597
    .2byte 532
    .2byte 6188
    .2byte 4107
    .2byte 4616
    .2byte 4108
    .2byte 2562
    .2byte 5703
    .2byte 3597
    .2byte 1582
    .2byte 65535
    .2byte 65535
    .2byte 4102
    .2byte 5183
    .2byte 4143
    .2byte 3597
    .2byte 532
    .2byte 6188
    .2byte 4119
    .2byte 4146
    .2byte 1084
    .2byte 3597
    .2byte 532
    .2byte 6188
    .byte 0, 0

    .2byte SPECIES_VILEPLUME
    .2byte ITEM_PETAYA_BERRY
    .2byte MOVE_INGRAIN, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_STUN_SPORE
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x11, 0x00, 0x00, 0x00
    .string "VILEPLUME$", 11 @ name
    .byte 255

    .2byte SPECIES_STARMIE
    .2byte ITEM_PETAYA_BERRY
    .2byte MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_WATERFALL, MOVE_RECOVER
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0xBF
    .byte 0x10, 0x00, 0x00, 0x00
    .string "STARMIE$", 11 @ name
    .byte 255

    .2byte SPECIES_URSARING
    .2byte ITEM_LIECHI_BERRY
    .2byte MOVE_FAINT_ATTACK, MOVE_BODY_SLAM, MOVE_BRICK_BREAK, MOVE_ROCK_TOMB
    .byte 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x01, 0x00, 0x00, 0x00
    .string "URSARING$", 11 @ name
    .byte 255

    .2byte SPECIES_NOCTOWL
    .2byte ITEM_LIECHI_BERRY
    .2byte MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_FAINT_ATTACK, MOVE_AERIAL_ACE
    .byte 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x01, 0x00, 0x00, 0x00
    .string "NOCTOWL$", 11 @ name
    .byte 255

    .2byte SPECIES_NINETALES
    .2byte ITEM_PETAYA_BERRY
    .2byte MOVE_GRUDGE, MOVE_OVERHEAT, MOVE_FAINT_ATTACK, MOVE_WILL_O_WISP
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x10, 0x00, 0x00, 0x00
    .string "NINETALES$", 11 @ name
    .byte 255

    .2byte SPECIES_LEDIAN
    .2byte ITEM_LIECHI_BERRY
    .2byte MOVE_SILVER_WIND, MOVE_SWIFT, MOVE_AERIAL_ACE, MOVE_TOXIC
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x01, 0x00, 0x00, 0x00
    .string "LEDIAN$", 11 @ name
    .byte 255

    .string "TRENTON$", 11 @ Trainer Name
    .byte 141, 7, 0
    .2byte 2561
    .2byte 9910
    .2byte 3597
    .2byte 4672
    .2byte 532
    .2byte 6188
    .2byte 1552
    .2byte 3072
    .2byte 3597
    .2byte 1582
    .2byte 4107
    .2byte 2563
    .2byte 9910
    .2byte 3597
    .2byte 532
    .2byte 6188
    .2byte 65535
    .2byte 65535
    .2byte 9910
    .2byte 3605
    .2byte 1578
    .2byte 3597
    .2byte 532
    .2byte 6188
    .byte 0, 0

    .2byte SPECIES_GYARADOS
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_EARTHQUAKE, MOVE_WATERFALL, MOVE_BLIZZARD, MOVE_HYPER_BEAM
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x88, 0x00, 0x00, 0x00
    .string "GYARADOS$", 11 @ name
    .byte 255

    .2byte SPECIES_VICTREEBEL
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_REFLECT, MOVE_ATTRACT
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x8E, 0x00, 0x00, 0x00
    .string "VICTREEBEL$", 11 @ name
    .byte 255

    .2byte SPECIES_DONPHAN
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_IRON_TAIL, MOVE_DOUBLE_EDGE
    .byte 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x97, 0x00, 0x00, 0x00
    .string "DONPHAN$", 11 @ name
    .byte 255

    .2byte SPECIES_FEAROW
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_FAINT_ATTACK, MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_DOUBLE_TEAM
    .byte 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x97, 0x00, 0x00, 0x00
    .string "FEAROW$", 11 @ name
    .byte 255

    .2byte SPECIES_ARCANINE
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_EXTREME_SPEED, MOVE_FIRE_BLAST, MOVE_CRUNCH, MOVE_AERIAL_ACE
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x4F, 0x00, 0x00, 0x00
    .string "ARCANINE$", 11 @ name
    .byte 255

    .2byte SPECIES_ARIADOS
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_SIGNAL_BEAM, MOVE_TOXIC
    .byte 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x97, 0x00, 0x00, 0x00
    .string "ARIADOS$", 11 @ name
    .byte 255

    .string "ALBERT$", 11 @ Trainer Name
    .byte 116, 7, 0
    .2byte 4109
    .2byte 4126
    .2byte 4129
    .2byte 8207
    .2byte 7187
    .2byte 7690
    .2byte 2566
    .2byte 1594
    .2byte 4143
    .2byte 5662
    .2byte 7684
    .2byte 8207
    .2byte 2566
    .2byte 1568
    .2byte 7705
    .2byte 3612
    .2byte 3605
    .2byte 8207
    .2byte 2601
    .2byte 5162
    .2byte 4159
    .2byte 7700
    .2byte 8207
    .2byte 1560
    .byte 0, 0

    .2byte SPECIES_KINGDRA
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_TWISTER, MOVE_OCTAZOOKA, MOVE_AURORA_BEAM, MOVE_RETURN
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x15, 0x00, 0x00, 0x00
    .string "KINGDRA$", 11 @ name
    .byte 255

    .2byte SPECIES_GOLEM
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_DOUBLE_EDGE
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0xBF
    .byte 0x7F, 0x00, 0x00, 0x00
    .string "GOLEM$", 11 @ name
    .byte 255

    .2byte SPECIES_DRAGONITE
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_THUNDER, MOVE_FIRE_BLAST, MOVE_BLIZZARD, MOVE_DRAGON_CLAW
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x01, 0x00, 0x00, 0x00
    .string "DRAGONITE$", 11 @ name
    .byte 255

    .2byte SPECIES_TYRANITAR
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_THUNDER, MOVE_FIRE_BLAST
    .byte 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x97, 0x00, 0x00, 0x00
    .string "TYRANITAR$", 11 @ name
    .byte 255

    .2byte SPECIES_AMPHAROS
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_REFLECT, MOVE_THUNDER, MOVE_BRICK_BREAK, MOVE_RETURN
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x13, 0x00, 0x00, 0x00
    .string "AMPHAROS$", 11 @ name
    .byte 255

    .2byte SPECIES_VENUSAUR
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_BODY_SLAM
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x2A, 0x00, 0x00, 0x00
    .string "VENUSAUR$", 11 @ name
    .byte 255

    .byte 0x4C, 0x84, 0x01, 0x00

kTrainerCard_847E5CC:: @ 847E5CC
    .byte 16 @ Card Number
    .byte 8
    .byte 2 @ Battle Type
    .byte 4 @ Reward Item

    .string "CAMRYN$", 11 @ Trainer Name
    .byte 93, 1, 0
    .2byte 4109
    .2byte 1576
    .2byte 2561
    .2byte 4116
    .2byte 1585
    .2byte 3072
    .2byte 2561
    .2byte 5643
    .2byte 7700
    .2byte 2561
    .2byte 4106
    .2byte 1542
    .2byte 3084
    .2byte 3078
    .2byte 4155
    .2byte 2561
    .2byte 1585
    .2byte 3075
    .2byte 2566
    .2byte 1569
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_MURKROW
    .2byte ITEM_BLACK_GLASSES
    .2byte MOVE_AERIAL_ACE, MOVE_SHADOW_BALL, MOVE_FAINT_ATTACK, MOVE_CONFUSE_RAY
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x89, 0x00, 0x00, 0x00
    .string "MURKROW$", 11 @ name
    .byte 255

    .2byte SPECIES_RAPIDASH
    .2byte ITEM_CHARCOAL
    .2byte MOVE_BOUNCE, MOVE_FLAMETHROWER, MOVE_QUICK_ATTACK, MOVE_DOUBLE_KICK
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x0C, 0x00, 0x00, 0x00
    .string "RAPIDASH$", 11 @ name
    .byte 255

    .2byte SPECIES_MILTANK
    .2byte ITEM_SILK_SCARF
    .2byte MOVE_MILK_DRINK, MOVE_BRICK_BREAK, MOVE_BODY_SLAM, MOVE_SHADOW_BALL
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0C, 0x00, 0x00, 0x00
    .string "MILTANK$", 11 @ name
    .byte 255

    .2byte SPECIES_GOLDUCK
    .2byte ITEM_MYSTIC_WATER
    .2byte MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_LIGHT_SCREEN
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x89, 0x00, 0x00, 0x00
    .string "GOLDUCK$", 11 @ name
    .byte 255

    .2byte SPECIES_SANDSLASH
    .2byte ITEM_SOFT_SAND
    .2byte MOVE_SANDSTORM, MOVE_AERIAL_ACE, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x89, 0x00, 0x00, 0x00
    .string "SANDSLASH$", 11 @ name
    .byte 255

    .2byte SPECIES_NIDOQUEEN
    .2byte ITEM_HARD_STONE
    .2byte MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_SLUDGE_BOMB, MOVE_ROCK_SLIDE
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0C, 0x00, 0x00, 0x00
    .string "NIDOQUEEN$", 11 @ name
    .byte 255

    .string "NATALIA$", 11 @ Trainer Name
    .byte 143, 1, 0
    .2byte 7695
    .2byte 9446
    .2byte 2562
    .2byte 4154
    .2byte 4137
    .2byte 3075
    .2byte 4124
    .2byte 7700
    .2byte 4658
    .2byte 3075
    .2byte 65535
    .2byte 65535
    .2byte 7700
    .2byte 4124
    .2byte 5125
    .2byte 3075
    .2byte 65535
    .2byte 65535
    .2byte 2561
    .2byte 10015
    .2byte 7684
    .2byte 4144
    .2byte 5151
    .2byte 9528
    .byte 0, 0

    .2byte SPECIES_BELLOSSOM
    .2byte ITEM_PERSIM_BERRY
    .2byte MOVE_SWEET_SCENT, MOVE_ATTRACT, MOVE_PETAL_DANCE, MOVE_FLAIL
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0C, 0x00, 0x00, 0x00
    .string "BELLOSSOM$", 11 @ name
    .byte 255

    .2byte SPECIES_VICTREEBEL
    .2byte ITEM_MIRACLE_SEED
    .2byte MOVE_SWEET_SCENT, MOVE_ATTRACT, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x89, 0x00, 0x00, 0x00
    .string "VICTREEBEL$", 11 @ name
    .byte 255

    .2byte SPECIES_PARASECT
    .2byte ITEM_MIRACLE_SEED
    .2byte MOVE_SWEET_SCENT, MOVE_ATTRACT, MOVE_GIGA_DRAIN, MOVE_AERIAL_ACE
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x89, 0x00, 0x00, 0x00
    .string "PARASECT$", 11 @ name
    .byte 255

    .2byte SPECIES_VILEPLUME
    .2byte ITEM_PERSIM_BERRY
    .2byte MOVE_SWEET_SCENT, MOVE_ATTRACT, MOVE_PETAL_DANCE, MOVE_SLUDGE_BOMB
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0C, 0x00, 0x00, 0x00
    .string "VILEPLUME$", 11 @ name
    .byte 255

    .2byte SPECIES_VENUSAUR
    .2byte ITEM_PERSIM_BERRY
    .2byte MOVE_SWEET_SCENT, MOVE_ATTRACT, MOVE_PETAL_DANCE, MOVE_SLUDGE_BOMB
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0C, 0x00, 0x00, 0x00
    .string "VENUSAUR$", 11 @ name
    .byte 255

    .2byte SPECIES_MEGANIUM
    .2byte ITEM_MIRACLE_SEED
    .2byte MOVE_SWEET_SCENT, MOVE_ATTRACT, MOVE_GIGA_DRAIN, MOVE_BODY_SLAM
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x25, 0x00, 0x00, 0x00
    .string "MEGANIUM$", 11 @ name
    .byte 255

    .string "KATHLEEN$", 11 @ Trainer Name
    .byte 117, 7, 0
    .2byte 4153
    .2byte 4654
    .2byte 2609
    .2byte 4136
    .2byte 4139
    .2byte 2562
    .2byte 2059
    .2byte 3076
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 7695
    .2byte 4107
    .2byte 4655
    .2byte 4143
    .2byte 5671
    .2byte 3076
    .2byte 2562
    .2byte 4126
    .2byte 1131
    .2byte 7700
    .2byte 4107
    .2byte 5169
    .byte 0, 0

    .2byte SPECIES_MAROWAK
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_BONEMERANG, MOVE_AERIAL_ACE
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x89, 0x00, 0x00, 0x00
    .string "MAROWAK$", 11 @ name
    .byte 255

    .2byte SPECIES_LAPRAS
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_SURF, MOVE_BLIZZARD, MOVE_PSYCHIC, MOVE_THUNDER
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x0C, 0x00, 0x00, 0x00
    .string "LAPRAS$", 11 @ name
    .byte 255

    .2byte SPECIES_ARCANINE
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_EXTREME_SPEED, MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_AERIAL_ACE
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x57, 0x00, 0x00, 0x00
    .string "ARCANINE$", 11 @ name
    .byte 255

    .2byte SPECIES_RAICHU
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_THUNDERBOLT, MOVE_QUICK_ATTACK, MOVE_DOUBLE_TEAM, MOVE_IRON_TAIL
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x89, 0x00, 0x00, 0x00
    .string "RAICHU$", 11 @ name
    .byte 255

    .2byte SPECIES_TOGETIC
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_ANCIENT_POWER, MOVE_SWEET_KISS, MOVE_PSYCHIC, MOVE_MAGICAL_LEAF
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x0C, 0x00, 0x00, 0x00
    .string "TOGETIC$", 11 @ name
    .byte 255

    .2byte SPECIES_SNORLAX
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_BODY_SLAM, MOVE_REST, MOVE_SNORE, MOVE_SHADOW_BALL
    .byte 0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x0C, 0x00, 0x00, 0x00
    .string "SNORLAX$", 11 @ name
    .byte 255

    .byte 0x8C, 0x73, 0x01, 0x00

kTrainerCard_847E9AC:: @ 847E9AC
    .byte 17 @ Card Number
    .byte 8
    .byte 0 @ Battle Type
    .byte 3 @ Reward Item

    .string "BRADEN$", 11 @ Trainer Name
    .byte 101, 1, 0
    .2byte 2601
    .2byte 5146
    .2byte 4613
    .2byte 4144
    .2byte 2600
    .2byte 1076
    .2byte 3089
    .2byte 65535
    .2byte 3630
    .2byte 2561
    .2byte 1543
    .2byte 3075
    .2byte 2562
    .2byte 3103
    .2byte 2580
    .2byte 4152
    .2byte 4148
    .2byte 4614
    .2byte 4658
    .2byte 6157
    .2byte 2562
    .2byte 3072
    .2byte 2566
    .2byte 5155
    .byte 0, 0

    .2byte SPECIES_VAPOREON
    .2byte ITEM_CHERI_BERRY
    .2byte MOVE_SURF, MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_WISH
    .byte 0x00, 0x00, 0x64, 0x00, 0x6E, 0x00, 0xC8, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x11, 0x00, 0x00, 0x00
    .string "VAPOREON$", 11 @ name
    .byte 255

    .2byte SPECIES_SLOWBRO
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_SURF, MOVE_CONFUSION, MOVE_AMNESIA, MOVE_DISABLE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x91, 0x00, 0x00, 0x00
    .string "SLOWBRO$", 11 @ name
    .byte 255

    .2byte SPECIES_POLITOED
    .2byte ITEM_CHESTO_BERRY
    .2byte MOVE_SURF, MOVE_EARTHQUAKE, MOVE_HYPNOSIS, MOVE_SWAGGER
    .byte 0x00, 0x00, 0x64, 0x64, 0x6E, 0x00, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x96, 0x00, 0x00, 0x00
    .string "POLITOED$", 11 @ name
    .byte 255

    .2byte SPECIES_TENTACRUEL
    .2byte ITEM_POISON_BARB
    .2byte MOVE_SURF, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM, MOVE_MIRROR_COAT
    .byte 0x00, 0x00, 0x64, 0x00, 0x6E, 0x00, 0xC8, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x00, 0x00, 0x00, 0x00
    .string "TENTACRUEL$", 11 @ name
    .byte 255

    .2byte SPECIES_RATICATE
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_SUPER_FANG, MOVE_HYPER_FANG, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK
    .byte 0x00, 0x00, 0x6E, 0xC8, 0x64, 0x00, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x80, 0x00, 0x00, 0x00
    .string "RATICATE$", 11 @ name
    .byte 255

    .2byte SPECIES_DUNSPARCE
    .2byte ITEM_PERSIM_BERRY
    .2byte MOVE_WATER_PULSE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_YAWN
    .byte 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x7F, 0x00, 0x00, 0x00
    .string "DUNSPARCE$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0x30, 0x65, 0x01, 0x00

kTrainerCard_847ED8C:: @ 847ED8C
    .byte 18 @ Card Number
    .byte 8
    .byte 0 @ Battle Type
    .byte 10 @ Reward Item

    .string "ALLYSON$", 11 @ Trainer Name
    .byte 117, 7, 0
    .2byte 2601
    .2byte 4130
    .2byte 4135
    .2byte 4143
    .2byte 1585
    .2byte 7181
    .2byte 2049
    .2byte 3073
    .2byte 2561
    .2byte 4648
    .2byte 2597
    .2byte 7181
    .2byte 2598
    .2byte 7718
    .2byte 4135
    .2byte 7684
    .2byte 2561
    .2byte 4626
    .2byte 2566
    .2byte 4153
    .2byte 1568
    .2byte 7181
    .2byte 3613
    .2byte 4138
    .byte 0, 0

    .2byte SPECIES_STARMIE
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_SURF, MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_RECOVER
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0xBF
    .byte 0x0F, 0x00, 0x00, 0x00
    .string "STARMIE$", 11 @ name
    .byte 255

    .2byte SPECIES_BLASTOISE
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_MIRROR_COAT
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x32, 0x00, 0x00, 0x00
    .string "BLASTOISE$", 11 @ name
    .byte 255

    .2byte SPECIES_KINGDRA
    .2byte ITEM_CHESTO_BERRY
    .2byte MOVE_SURF, MOVE_ICE_BEAM, MOVE_DRAGON_BREATH, MOVE_REST
    .byte 0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0xFF, 0x9B
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x8C, 0x00, 0x00, 0x00
    .string "KINGDRA$", 11 @ name
    .byte 255

    .2byte SPECIES_QUAGSIRE
    .2byte ITEM_CHESTO_BERRY
    .2byte MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_REST
    .byte 0x00, 0x00, 0x00, 0x64, 0x64, 0x00, 0x9B, 0x9B
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x16, 0x00, 0x00, 0x00
    .string "QUAGSIRE$", 11 @ name
    .byte 255

    .2byte SPECIES_LAPRAS
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_SURF, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_ATTRACT
    .byte 0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0xFF, 0x9B
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0xBF
    .byte 0x0F, 0x00, 0x00, 0x00
    .string "LAPRAS$", 11 @ name
    .byte 255

    .2byte SPECIES_DRAGONITE
    .2byte ITEM_SHELL_BELL
    .2byte MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_LIGHT_SCREEN
    .byte 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x9B, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x96, 0x00, 0x00, 0x00
    .string "DRAGONITE$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0x32, 0x6E, 0x01, 0x00

kTrainerCard_847F16C:: @ 847F16C
    .byte 19 @ Card Number
    .byte 8
    .byte 0 @ Battle Type
    .byte 14 @ Reward Item

    .string "ALBERTO$", 11 @ Trainer Name
    .byte 91, 5, 0
    .2byte 4109
    .2byte 527
    .2byte 4144
    .2byte 4137
    .2byte 7721
    .2byte 7710
    .2byte 2087
    .2byte 3073
    .2byte 2562
    .2byte 1581
    .2byte 7194
    .2byte 3096
    .2byte 2609
    .2byte 4138
    .2byte 4136
    .2byte 3076
    .2byte 2561
    .2byte 1555
    .2byte 3128
    .2byte 2561
    .2byte 5633
    .2byte 3076
    .2byte 2561
    .2byte 1584
    .byte 0, 0

    .2byte SPECIES_FERALIGATR
    .2byte ITEM_FOCUS_BAND
    .2byte MOVE_SURF, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_DRAGON_CLAW
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x64, 0x9B
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x32, 0x00, 0x00, 0x00
    .string "FERALIGATR$", 11 @ name
    .byte 255

    .2byte SPECIES_POLIWRATH
    .2byte ITEM_KINGS_ROCK
    .2byte MOVE_SURF, MOVE_EARTHQUAKE, MOVE_MEGA_KICK, MOVE_ROCK_TOMB
    .byte 0x00, 0x00, 0x64, 0xFF, 0x00, 0x00, 0x00, 0x9B
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x9E
    .byte 0x96, 0x00, 0x00, 0x00
    .string "POLIWRATH$", 11 @ name
    .byte 255

    .2byte SPECIES_KANGASKHAN
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_CRUSH_CLAW, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_AERIAL_ACE
    .byte 0x00, 0x00, 0x00, 0xFF, 0x82, 0x00, 0x00, 0x7D
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x03, 0x00, 0x00, 0x00
    .string "KANGASKHAN$", 11 @ name
    .byte 255

    .2byte SPECIES_MILTANK
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_ROCK_TOMB, MOVE_MILK_DRINK
    .byte 0x00, 0x00, 0x9B, 0xFF, 0x00, 0x00, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x03, 0x00, 0x00, 0x00
    .string "MILTANK$", 11 @ name
    .byte 255

    .2byte SPECIES_GOLDUCK
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_CROSS_CHOP, MOVE_SURF, MOVE_ICE_BEAM, MOVE_DISABLE
    .byte 0x00, 0x00, 0x00, 0x64, 0x64, 0x00, 0x64, 0xD2
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x9E
    .byte 0x96, 0x00, 0x00, 0x00
    .string "GOLDUCK$", 11 @ name
    .byte 255

    .2byte SPECIES_GRANBULL
    .2byte ITEM_LIECHI_BERRY
    .2byte MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB
    .byte 0x00, 0x00, 0x00, 0xFF, 0x82, 0x00, 0x00, 0x7D
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0xCA, 0x00, 0x00, 0x00
    .string "GRANBULL$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0x90, 0x68, 0x01, 0x00

kTrainerCard_847F54C:: @ 847F54C
    .byte 20 @ Card Number
    .byte 8
    .byte 1 @ Battle Type
    .byte 12 @ Reward Item

    .string "KAT & KIPP$", 11 @ Trainer Name
    .byte 130, 4, 0
    .2byte 2601
    .2byte 5128
    .2byte 4143
    .2byte 4623
    .2byte 2600
    .2byte 5180
    .2byte 3107
    .2byte 4143
    .2byte 1537
    .2byte 2600
    .2byte 8215
    .2byte 2574
    .2byte 3092
    .2byte 3076
    .2byte 3613
    .2byte 3599
    .2byte 4137
    .2byte 4611
    .2byte 3128
    .2byte 2600
    .2byte 8215
    .2byte 2574
    .2byte 1577
    .2byte 1577
    .byte 0, 0

    .2byte SPECIES_SNEASEL
    .2byte ITEM_RAWST_BERRY
    .2byte MOVE_DIG, MOVE_TORMENT, MOVE_REFLECT, MOVE_TAUNT
    .byte 0x00, 0x00, 0x00, 0x00, 0x9B, 0xFF, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x0D, 0x00, 0x00, 0x00
    .string "SNEASEL$", 11 @ name
    .byte 255

    .2byte SPECIES_OMASTAR
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_DIVE, MOVE_LEER, MOVE_TICKLE, MOVE_SUPERSONIC
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x2D, 0x00, 0x00, 0x00
    .string "OMASTAR$", 11 @ name
    .byte 255

    .2byte SPECIES_DEWGONG
    .2byte ITEM_PERSIM_BERRY
    .2byte MOVE_DIVE, MOVE_ENCORE, MOVE_GROWL, MOVE_SAFEGUARD
    .byte 0x00, 0x00, 0xC8, 0x00, 0x64, 0x00, 0x00, 0xD2
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x14, 0x00, 0x00, 0x00
    .string "DEWGONG$", 11 @ name
    .byte 255

    .2byte SPECIES_QUAGSIRE
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_DIVE, MOVE_YAWN, MOVE_AMNESIA, MOVE_SAFEGUARD
    .byte 0x00, 0x00, 0xC8, 0x00, 0x6E, 0x00, 0x00, 0xC8
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x91, 0x00, 0x00, 0x00
    .string "QUAGSIRE$", 11 @ name
    .byte 255

    .2byte SPECIES_CORSOLA
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_DIG, MOVE_MIRROR_COAT, MOVE_RECOVER, MOVE_CONFUSE_RAY
    .byte 0x00, 0x00, 0x9B, 0x00, 0x64, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x17, 0x00, 0x00, 0x00
    .string "CORSOLA$", 11 @ name
    .byte 255

    .2byte SPECIES_SANDSLASH
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_DIG, MOVE_COUNTER, MOVE_DEFENSE_CURL, MOVE_SAND_ATTACK
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x94, 0x00, 0x00, 0x00
    .string "SANDSLASH$", 11 @ name
    .byte 255

    .string "KAT & KIPP$", 11 @ Trainer Name
    .byte 130, 4, 0
    .2byte 3115
    .2byte 3076
    .2byte 2621
    .2byte 4638
    .2byte 1585
    .2byte 3072
    .2byte 3115
    .2byte 3076
    .2byte 2625
    .2byte 1569
    .2byte 4143
    .2byte 1585
    .2byte 7714
    .2byte 2076
    .2byte 4111
    .2byte 2562
    .2byte 3620
    .2byte 3075
    .2byte 3082
    .2byte 3082
    .2byte 3101
    .2byte 5139
    .2byte 2575
    .2byte 3072
    .byte 0, 0

    .2byte SPECIES_FURRET
    .2byte ITEM_KINGS_ROCK
    .2byte MOVE_DIG, MOVE_AMNESIA, MOVE_DEFENSE_CURL, MOVE_FOLLOW_ME
    .byte 0x00, 0x00, 0xFF, 0x00, 0x64, 0x00, 0x00, 0x9B
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x80, 0x00, 0x00, 0x00
    .string "FURRET$", 11 @ name
    .byte 255

    .2byte SPECIES_AZUMARILL
    .2byte ITEM_WHITE_HERB
    .2byte MOVE_DIVE, MOVE_LIGHT_SCREEN, MOVE_TAIL_WHIP, MOVE_DEFENSE_CURL
    .byte 0x00, 0x00, 0x9B, 0x00, 0x64, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x14, 0x00, 0x00, 0x00
    .string "AZUMARILL$", 11 @ name
    .byte 255

    .2byte SPECIES_KINGLER
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_DIVE, MOVE_HARDEN, MOVE_LEER, MOVE_AMNESIA
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x91, 0x00, 0x00, 0x00
    .string "KINGLER$", 11 @ name
    .byte 255

    .2byte SPECIES_CLOYSTER
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_DIVE, MOVE_WITHDRAW, MOVE_PROTECT, MOVE_SUPERSONIC
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x14, 0x00, 0x00, 0x00
    .string "CLOYSTER$", 11 @ name
    .byte 255

    .2byte SPECIES_QUAGSIRE
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_DIG, MOVE_YAWN, MOVE_AMNESIA, MOVE_SAFEGUARD
    .byte 0x00, 0x00, 0xC8, 0x00, 0x6E, 0x00, 0x00, 0xC8
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x94, 0x00, 0x00, 0x00
    .string "QUAGSIRE$", 11 @ name
    .byte 255

    .2byte SPECIES_KABUTOPS
    .2byte ITEM_PECHA_BERRY
    .2byte MOVE_DIG, MOVE_SAND_ATTACK, MOVE_ENDURE, MOVE_CONFUSE_RAY
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x30, 0x00, 0x00, 0x00
    .string "KABUTOPS$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0x7C, 0x5D, 0x01, 0x00

kTrainerCard_847F92C:: @ 847F92C
    .byte 21 @ Card Number
    .byte 8
    .byte 1 @ Battle Type
    .byte 8 @ Reward Item

    .string "GEB&MEGAN$", 11 @ Trainer Name
    .byte 127, 7, 0
    .2byte 2566
    .2byte 2624
    .2byte 2560
    .2byte 3075
    .2byte 1595
    .2byte 3112
    .2byte 3112
    .2byte 2059
    .2byte 2600
    .2byte 2611
    .2byte 1075
    .2byte 1582
    .2byte 2566
    .2byte 1580
    .2byte 2591
    .2byte 2562
    .2byte 2611
    .2byte 3075
    .2byte 4116
    .2byte 2562
    .2byte 527
    .2byte 1584
    .2byte 5649
    .2byte 3075
    .byte 0, 0

    .2byte SPECIES_POLITOED
    .2byte ITEM_KINGS_ROCK
    .2byte MOVE_SURF, MOVE_HYPNOSIS, MOVE_PERISH_SONG, MOVE_SWAGGER
    .byte 0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0xFF, 0x9B
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x8C, 0x00, 0x00, 0x00
    .string "POLITOED$", 11 @ name
    .byte 255

    .2byte SPECIES_GYARADOS
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_HYPER_BEAM, MOVE_DRAGON_DANCE, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT
    .byte 0x00, 0x00, 0x00, 0xFF, 0x9B, 0x00, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x96, 0x00, 0x00, 0x00
    .string "GYARADOS$", 11 @ name
    .byte 255

    .2byte SPECIES_LAPRAS
    .2byte ITEM_SHELL_BELL
    .2byte MOVE_SURF, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM
    .byte 0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0xFF, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x0F, 0x00, 0x00, 0x00
    .string "LAPRAS$", 11 @ name
    .byte 255

    .2byte SPECIES_NIDOQUEEN
    .2byte ITEM_FOCUS_BAND
    .2byte MOVE_SURF, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE
    .byte 0x00, 0x00, 0x6E, 0x64, 0x64, 0x00, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x00, 0x00, 0x00, 0x00
    .string "NIDOQUEEN$", 11 @ name
    .byte 255

    .2byte SPECIES_JYNX
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_WATER_PULSE, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PSYCHIC
    .byte 0x00, 0x00, 0xFF, 0x00, 0x9B, 0x00, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x00, 0x00, 0x00, 0x00
    .string "JYNX$", 11 @ name
    .byte 255

    .2byte SPECIES_GIRAFARIG
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_LIGHT_SCREEN, MOVE_CRUNCH, MOVE_PSYCHIC, MOVE_REFLECT
    .byte 0x00, 0x00, 0xD2, 0x00, 0x64, 0x00, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x8C, 0x00, 0x00, 0x00
    .string "GIRAFARIG$", 11 @ name
    .byte 255

    .string "GEB&MEGAN$", 11 @ Trainer Name
    .byte 127, 7, 0
    .2byte 2566
    .2byte 2624
    .2byte 1571
    .2byte 3075
    .2byte 3091
    .2byte 3076
    .2byte 3091
    .2byte 3076
    .2byte 2601
    .2byte 4133
    .2byte 2059
    .2byte 65535
    .2byte 2600
    .2byte 6154
    .2byte 7695
    .2byte 4107
    .2byte 3614
    .2byte 4641
    .2byte 2621
    .2byte 5135
    .2byte 4143
    .2byte 6159
    .2byte 2634
    .2byte 3638
    .byte 0, 0

    .2byte SPECIES_MAROWAK
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE, MOVE_PROTECT
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x94, 0x00, 0x00, 0x00
    .string "MAROWAK$", 11 @ name
    .byte 255

    .2byte SPECIES_URSARING
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE
    .byte 0x00, 0x00, 0x00, 0xFF, 0x9B, 0x00, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x80, 0x00, 0x00, 0x00
    .string "URSARING$", 11 @ name
    .byte 255

    .2byte SPECIES_SLOWKING
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_SURF, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_SHADOW_BALL
    .byte 0x00, 0x00, 0x00, 0x6E, 0x00, 0x00, 0xC8, 0xC8
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x11, 0x00, 0x00, 0x00
    .string "SLOWKING$", 11 @ name
    .byte 255

    .2byte SPECIES_ALAKAZAM
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_PSYCHIC, MOVE_PROTECT, MOVE_LIGHT_SCREEN, MOVE_REFLECT
    .byte 0x00, 0x00, 0x6E, 0x00, 0xC8, 0x00, 0x00, 0xC8
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x41, 0x00, 0x00, 0x00
    .string "ALAKAZAM$", 11 @ name
    .byte 255

    .2byte SPECIES_NIDOKING
    .2byte ITEM_FOCUS_BAND
    .2byte MOVE_SURF, MOVE_MEGAHORN, MOVE_THUNDERBOLT, MOVE_ICE_BEAM
    .byte 0x00, 0x00, 0x6E, 0x64, 0x64, 0x00, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x00, 0x00, 0x00, 0x00
    .string "NIDOKING$", 11 @ name
    .byte 255

    .2byte SPECIES_RHYDON
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_EARTHQUAKE, MOVE_PROTECT, MOVE_MEGAHORN, MOVE_ROCK_SLIDE
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x93, 0x00, 0x00, 0x00
    .string "RHYDON$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0xF4, 0x60, 0x01, 0x00

kTrainerCard_847FD0C:: @ 847FD0C
    .byte 22 @ Card Number
    .byte 8
    .byte 1 @ Battle Type
    .byte 5 @ Reward Item

    .string "LISA&LEAH$", 11 @ Trainer Name
    .byte 126, 1, 0
    .2byte 3604
    .2byte 2625
    .2byte 5128
    .2byte 4143
    .2byte 1542
    .2byte 3072
    .2byte 2079
    .2byte 3073
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 3131
    .2byte 3072
    .2byte 3082
    .2byte 3073
    .2byte 65535
    .2byte 65535
    .2byte 2070
    .2byte 3594
    .2byte 2566
    .2byte 4138
    .2byte 1569
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_POLIWAG
    .2byte ITEM_CHERI_BERRY
    .2byte MOVE_SURF, MOVE_PROTECT, MOVE_TOXIC, MOVE_DOUBLE_TEAM
    .byte 0x00, 0x00, 0x00, 0x00, 0x64, 0xFF, 0x00, 0x9B
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x87, 0x00, 0x00, 0x00
    .string "POLIWAG$", 11 @ name
    .byte 255

    .2byte SPECIES_SQUIRTLE
    .2byte ITEM_MYSTIC_WATER
    .2byte MOVE_WATER_PULSE, MOVE_PROTECT, MOVE_TOXIC, MOVE_MIRROR_COAT
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x2D, 0x00, 0x00, 0x00
    .string "SQUIRTLE$", 11 @ name
    .byte 255

    .2byte SPECIES_CHINCHOU
    .2byte ITEM_MAGNET
    .2byte MOVE_SURF, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY, MOVE_THUNDERBOLT
    .byte 0x00, 0x00, 0x00, 0x00, 0x64, 0xFF, 0x00, 0x9B
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x0F, 0x00, 0x00, 0x00
    .string "CHINCHOU$", 11 @ name
    .byte 255

    .2byte SPECIES_NIDORAN_F
    .2byte ITEM_POISON_BARB
    .2byte MOVE_WATER_PULSE, MOVE_SLUDGE_BOMB, MOVE_CRUNCH, MOVE_DIG
    .byte 0x00, 0x00, 0x6E, 0x64, 0x64, 0x00, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x00, 0x00, 0x00, 0x00
    .string "NIDORAN♀$", 11 @ name
    .byte 255

    .2byte SPECIES_CLEFAIRY
    .2byte ITEM_WHITE_HERB
    .2byte MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_SING, MOVE_MINIMIZE
    .byte 0x00, 0x00, 0x6E, 0x00, 0x64, 0x64, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x0F, 0x00, 0x00, 0x00
    .string "CLEFAIRY$", 11 @ name
    .byte 255

    .2byte SPECIES_HORSEA
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_SURF, MOVE_SMOKESCREEN, MOVE_ATTRACT, MOVE_DRAGON_RAGE
    .byte 0x00, 0x00, 0x6E, 0x00, 0x64, 0x64, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x2D, 0x00, 0x00, 0x00
    .string "HORSEA$", 11 @ name
    .byte 255

    .string "LISA&LEAH$", 11 @ Trainer Name
    .byte 126, 1, 0
    .2byte 4118
    .2byte 2621
    .2byte 1542
    .2byte 3075
    .2byte 2609
    .2byte 8207
    .2byte 2079
    .2byte 3073
    .2byte 2562
    .2byte 5662
    .2byte 2580
    .2byte 4613
    .2byte 3131
    .2byte 3072
    .2byte 3082
    .2byte 3073
    .2byte 65535
    .2byte 65535
    .2byte 2562
    .2byte 4657
    .2byte 4130
    .2byte 9979
    .2byte 4140
    .2byte 2594
    .byte 0, 0

    .2byte SPECIES_WOOPER
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_SURF, MOVE_EARTHQUAKE, MOVE_YAWN, MOVE_FLASH
    .byte 0x00, 0x00, 0x6E, 0x64, 0x64, 0x00, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x93, 0x00, 0x00, 0x00
    .string "WOOPER$", 11 @ name
    .byte 255

    .2byte SPECIES_PSYDUCK
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_SURF, MOVE_CROSS_CHOP, MOVE_HYPNOSIS, MOVE_DISABLE
    .byte 0x00, 0x00, 0x6E, 0x64, 0x64, 0x00, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x9E
    .byte 0x96, 0x00, 0x00, 0x00
    .string "PSYDUCK$", 11 @ name
    .byte 255

    .2byte SPECIES_SNUBBULL
    .2byte ITEM_PECHA_BERRY
    .2byte MOVE_WATER_PULSE, MOVE_THUNDER_WAVE, MOVE_CRUNCH, MOVE_SHADOW_BALL
    .byte 0x00, 0x00, 0x6E, 0x64, 0x64, 0x64, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x00, 0x00, 0x00, 0x00
    .string "SNUBBULL$", 11 @ name
    .byte 255

    .2byte SPECIES_JIGGLYPUFF
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_WATER_PULSE, MOVE_THUNDER_WAVE, MOVE_SING, MOVE_DISABLE
    .byte 0x00, 0x00, 0x6E, 0x64, 0x64, 0x00, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x0F, 0x00, 0x00, 0x00
    .string "JIGGLYPUFF$", 11 @ name
    .byte 255

    .2byte SPECIES_NIDORAN_M
    .2byte ITEM_FOCUS_BAND
    .2byte MOVE_WATER_PULSE, MOVE_SLUDGE_BOMB, MOVE_HORN_DRILL, MOVE_DIG
    .byte 0x00, 0x00, 0x6E, 0x64, 0x64, 0x00, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x00, 0x00, 0x00, 0x00
    .string "NIDORAN♂$", 11 @ name
    .byte 255

    .2byte SPECIES_TOTODILE
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_SURF, MOVE_PROTECT, MOVE_TOXIC, MOVE_DOUBLE_TEAM
    .byte 0x00, 0x00, 0x6E, 0x00, 0x64, 0x64, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x2D, 0x00, 0x00, 0x00
    .string "TOTODILE$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0xD4, 0x97, 0x01, 0x00

kTrainerCard_84800EC:: @ 84800EC
    .byte 23 @ Card Number
    .byte 8
    .byte 2 @ Battle Type
    .byte 1 @ Reward Item

    .string "PRISCILLA$", 11 @ Trainer Name
    .byte 139, 1, 0
    .2byte 2601
    .2byte 3603
    .2byte 526
    .2byte 2581
    .2byte 2051
    .2byte 3072
    .2byte 3082
    .2byte 3072
    .2byte 4155
    .2byte 2561
    .2byte 1542
    .2byte 3075
    .2byte 3123
    .2byte 3076
    .2byte 2561
    .2byte 5677
    .2byte 1542
    .2byte 3076
    .2byte 2566
    .2byte 4128
    .2byte 4658
    .2byte 523
    .2byte 2065
    .2byte 3072
    .byte 0, 0

    .2byte SPECIES_GOLDEEN
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_WATER_PULSE, MOVE_MEGAHORN, MOVE_SUPERSONIC, MOVE_ICE_BEAM
    .byte 0x00, 0x00, 0x6E, 0x64, 0x64, 0x00, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x96, 0x00, 0x00, 0x00
    .string "GOLDEEN$", 11 @ name
    .byte 0

    .2byte SPECIES_SEAKING
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_SURF, MOVE_MEGAHORN, MOVE_HORN_DRILL, MOVE_PROTECT
    .byte 0x00, 0x00, 0x64, 0x64, 0x64, 0x00, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x00, 0x00, 0x00, 0x00
    .string "SEAKING$", 11 @ name
    .byte 0

    .2byte SPECIES_LANTURN
    .2byte ITEM_SHELL_BELL
    .2byte MOVE_SURF, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_ICE_BEAM
    .byte 0x00, 0x00, 0x00, 0x00, 0x64, 0x64, 0x64, 0xD2
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x8C, 0x00, 0x00, 0x00
    .string "LANTURN$", 11 @ name
    .byte 0

    .2byte SPECIES_LANTURN
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_RAIN_DANCE
    .byte 0x00, 0x00, 0x00, 0x00, 0x64, 0x64, 0x64, 0xD2
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x0F, 0x00, 0x00, 0x00
    .string "LANTURN$", 11 @ name
    .byte 0

    .2byte SPECIES_GOLDEEN
    .2byte ITEM_APICOT_BERRY
    .2byte MOVE_WATER_PULSE, MOVE_DOUBLE_EDGE, MOVE_TOXIC, MOVE_PSYBEAM
    .byte 0x00, 0x00, 0x6E, 0x64, 0x64, 0x00, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x00, 0x00, 0x00, 0x00
    .string "GOLDEEN$", 11 @ name
    .byte 0

    .2byte SPECIES_SEAKING
    .2byte ITEM_PETAYA_BERRY
    .2byte MOVE_SURF, MOVE_HYPER_BEAM, MOVE_ICE_BEAM, MOVE_PSYBEAM
    .byte 0x00, 0x00, 0x6E, 0x64, 0x64, 0x00, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x96, 0x00, 0x00, 0x00
    .string "SEAKING$", 11 @ name
    .byte 0

    .string "CHARLOTTE$", 11 @ Trainer Name
    .byte 145, 1, 0
    .2byte 2063
    .2byte 4131
    .2byte 2601
    .2byte 4128
    .2byte 526
    .2byte 2610
    .2byte 3101
    .2byte 2600
    .2byte 2600
    .2byte 3076
    .2byte 2601
    .2byte 2059
    .2byte 2566
    .2byte 4145
    .2byte 4162
    .2byte 4128
    .2byte 526
    .2byte 2610
    .2byte 3121
    .2byte 2065
    .2byte 4139
    .2byte 4129
    .2byte 5143
    .2byte 1576
    .byte 0, 0

    .2byte SPECIES_OCTILLERY
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_OCTAZOOKA, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER
    .byte 0x00, 0x00, 0x37, 0x00, 0x64, 0x00, 0x64, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x0F, 0x00, 0x00, 0x00
    .string "OCTILLERY$", 11 @ name
    .byte 255

    .2byte SPECIES_QWILFISH
    .2byte ITEM_PERSIM_BERRY
    .2byte MOVE_SURF, MOVE_TOXIC, MOVE_REVENGE, MOVE_DOUBLE_TEAM
    .byte 0x00, 0x00, 0xC8, 0x00, 0x00, 0x00, 0x64, 0xD2
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x14, 0x00, 0x00, 0x00
    .string "QWILFISH$", 11 @ name
    .byte 255

    .2byte SPECIES_REMORAID
    .2byte ITEM_PECHA_BERRY
    .2byte MOVE_SURF, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_THUNDER_WAVE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x96, 0x00, 0x00, 0x00
    .string "REMORAID$", 11 @ name
    .byte 255

    .2byte SPECIES_REMORAID
    .2byte ITEM_WHITE_HERB
    .2byte MOVE_WATER_PULSE, MOVE_BLIZZARD, MOVE_FIRE_BLAST, MOVE_PROTECT
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x00, 0x00, 0x00, 0x00
    .string "REMORAID$", 11 @ name
    .byte 255

    .2byte SPECIES_OCTILLERY
    .2byte ITEM_FOCUS_BAND
    .2byte MOVE_OCTAZOOKA, MOVE_SLUDGE_BOMB, MOVE_THUNDER_WAVE, MOVE_HYPER_BEAM
    .byte 0x00, 0x00, 0x9B, 0x64, 0x00, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x93, 0x00, 0x00, 0x00
    .string "OCTILLERY$", 11 @ name
    .byte 255

    .2byte SPECIES_QWILFISH
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND
    .byte 0x00, 0x00, 0x64, 0x64, 0x00, 0x00, 0x64, 0xD2
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x96, 0x00, 0x00, 0x00
    .string "QWILFISH$", 11 @ name
    .byte 255

    .string "SHANIA$", 11 @ Trainer Name
    .byte 105, 1, 0
    .2byte 4128
    .2byte 526
    .2byte 6697
    .2byte 3613
    .2byte 7714
    .2byte 2601
    .2byte 3083
    .2byte 2077
    .2byte 3107
    .2byte 2566
    .2byte 1594
    .2byte 3630
    .2byte 7717
    .2byte 3074
    .2byte 2562
    .2byte 4657
    .2byte 4130
    .2byte 3587
    .2byte 4658
    .2byte 1576
    .2byte 2048
    .2byte 4139
    .2byte 5144
    .2byte 2580
    .byte 0, 0

    .2byte SPECIES_MANTINE
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x80, 0x00, 0x00, 0x00
    .string "MANTINE$", 11 @ name
    .byte 255

    .2byte SPECIES_MAGIKARP
    .2byte ITEM_CHOICE_BAND
    .2byte MOVE_SPLASH, MOVE_TACKLE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x0D, 0x00, 0x00, 0x00
    .string "MAGIKARP$", 11 @ name
    .byte 255

    .2byte SPECIES_MANTINE
    .2byte ITEM_MENTAL_HERB
    .2byte MOVE_SURF, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY, MOVE_ATTRACT
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x0F, 0x00, 0x00, 0x00
    .string "MANTINE$", 11 @ name
    .byte 255

    .2byte SPECIES_GYARADOS
    .2byte ITEM_SHELL_BELL
    .2byte MOVE_HYPER_BEAM, MOVE_THUNDER_WAVE, MOVE_EARTHQUAKE, MOVE_PROTECT
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x03, 0x00, 0x00, 0x00
    .string "GYARADOS$", 11 @ name
    .byte 255

    .2byte SPECIES_MAGIKARP
    .2byte ITEM_CHOICE_BAND
    .2byte MOVE_FLAIL, MOVE_TACKLE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x94, 0x00, 0x00, 0x00
    .string "MAGIKARP$", 11 @ name
    .byte 255

    .2byte SPECIES_GYARADOS
    .2byte ITEM_KINGS_ROCK
    .2byte MOVE_DOUBLE_EDGE, MOVE_THUNDER_WAVE, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x80, 0x00, 0x00, 0x00
    .string "GYARADOS$", 11 @ name
    .byte 255

    .byte 0x1D, 0x52, 0x01, 0x00

kTrainerCard_84804CC:: @ 84804CC
    .byte 24 @ Card Number
    .byte 8
    .byte 2 @ Battle Type
    .byte 13 @ Reward Item

    .string "BRENNAN$", 11 @ Trainer Name
    .byte 91, 1, 0
    .2byte 5703
    .2byte 7684
    .2byte 1592
    .2byte 3076
    .2byte 3613
    .2byte 4616
    .2byte 2562
    .2byte 1585
    .2byte 3609
    .2byte 2562
    .2byte 1581
    .2byte 3072
    .2byte 3102
    .2byte 2562
    .2byte 4618
    .2byte 4129
    .2byte 1592
    .2byte 1542
    .2byte 2561
    .2byte 4119
    .2byte 9504
    .2byte 2562
    .2byte 3594
    .2byte 3076
    .byte 0, 0

    .2byte SPECIES_LAPRAS
    .2byte ITEM_CHESTO_BERRY
    .2byte MOVE_HYDRO_PUMP, MOVE_PSYCHIC, MOVE_ATTRACT, MOVE_REST
    .byte 0x00, 0x00, 0x00, 0x00, 0x9B, 0x00, 0x64, 0xFF
    .byte 0x0F, 0x00, 0x00, 0x00, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x0F, 0x00, 0x00, 0x00
    .string "LAPRAS$", 11 @ name
    .byte 255

    .2byte SPECIES_KINGDRA
    .2byte ITEM_CHESTO_BERRY
    .2byte MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_DRAGON_BREATH, MOVE_REST
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x8C, 0x00, 0x00, 0x00
    .string "KINGDRA$", 11 @ name
    .byte 255

    .2byte SPECIES_MACHAMP
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_HYPER_BEAM
    .byte 0x00, 0x00, 0x00, 0xFF, 0x82, 0x00, 0x00, 0x7D
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x4E, 0x00, 0x00, 0x00
    .string "MACHAMP$", 11 @ name
    .byte 255

    .2byte SPECIES_CHANSEY
    .2byte ITEM_ORAN_BERRY
    .2byte MOVE_WATER_PULSE, MOVE_SOFT_BOILED, MOVE_MINIMIZE, MOVE_THUNDER_WAVE
    .byte 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x05, 0x00, 0x00, 0x00
    .string "CHANSEY$", 11 @ name
    .byte 255

    .2byte SPECIES_TAUROS
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_SWAGGER
    .byte 0x00, 0x00, 0x6E, 0x64, 0x64, 0x64, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x03, 0x00, 0x00, 0x00
    .string "TAUROS$", 11 @ name
    .byte 255

    .2byte SPECIES_SNORLAX
    .2byte ITEM_ORAN_BERRY
    .2byte MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_REST
    .byte 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x21, 0x00, 0x00, 0x00
    .string "SNORLAX$", 11 @ name
    .byte 255

    .string "KADEN$", 11 @ Trainer Name
    .byte 100, 1, 0
    .2byte 2600
    .2byte 6688
    .2byte 6698
    .2byte 8704
    .2byte 4107
    .2byte 3643
    .2byte 2600
    .2byte 3643
    .2byte 6698
    .2byte 8704
    .2byte 1541
    .2byte 4152
    .2byte 3081
    .2byte 3076
    .2byte 2561
    .2byte 4665
    .2byte 2561
    .2byte 1584
    .2byte 6698
    .2byte 8704
    .2byte 4116
    .2byte 527
    .2byte 2580
    .2byte 1541
    .byte 0, 0

    .2byte SPECIES_CHINCHOU
    .2byte ITEM_MAGNET
    .2byte MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY, MOVE_PROTECT
    .byte 0x00, 0x00, 0x64, 0x00, 0x64, 0x64, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x00, 0x00, 0x00, 0x00
    .string "CHINCHOU$", 11 @ name
    .byte 255

    .2byte SPECIES_DRATINI
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_WATER_PULSE, MOVE_THUNDER_WAVE, MOVE_DRAGON_BREATH, MOVE_PROTECT
    .byte 0x00, 0x00, 0x6E, 0x00, 0x64, 0x64, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x00, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x00, 0x00, 0x00, 0x00
    .string "DRATINI$", 11 @ name
    .byte 255

    .2byte SPECIES_SLOWPOKE
    .2byte ITEM_PECHA_BERRY
    .2byte MOVE_WATER_PULSE, MOVE_YAWN, MOVE_DISABLE, MOVE_PROTECT
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x96, 0x00, 0x00, 0x00
    .string "SLOWPOKE$", 11 @ name
    .byte 255

    .2byte SPECIES_MAGIKARP
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_SPLASH, MOVE_FLAIL, MOVE_TACKLE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF
    .byte 0x17, 0x00, 0x00, 0x00, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x17, 0x00, 0x00, 0x00
    .string "MAGIKARP$", 11 @ name
    .byte 255

    .2byte SPECIES_SEAKING
    .2byte ITEM_CHERI_BERRY
    .2byte MOVE_HORN_DRILL, MOVE_MEGAHORN, MOVE_SUPERSONIC, MOVE_AGILITY
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF
    .byte 0x17, 0x00, 0x00, 0x00, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x17, 0x00, 0x00, 0x00
    .string "SEAKING$", 11 @ name
    .byte 255

    .2byte SPECIES_TENTACRUEL
    .2byte ITEM_FOCUS_BAND
    .2byte MOVE_MIRROR_COAT, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_TOXIC
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x96, 0x00, 0x00, 0x00
    .string "TENTACRUEL$", 11 @ name
    .byte 255

    .string "EMANUEL$", 11 @ Trainer Name
    .byte 122, 1, 0
    .2byte 3087
    .2byte 3075
    .2byte 4111
    .2byte 2562
    .2byte 5137
    .2byte 3075
    .2byte 2561
    .2byte 4665
    .2byte 2561
    .2byte 4124
    .2byte 7721
    .2byte 3076
    .2byte 2562
    .2byte 3629
    .2byte 4111
    .2byte 4128
    .2byte 8723
    .2byte 523
    .2byte 2601
    .2byte 2059
    .2byte 7700
    .2byte 2598
    .2byte 2565
    .2byte 2560
    .byte 0, 0

    .2byte SPECIES_VAPOREON
    .2byte ITEM_SHELL_BELL
    .2byte MOVE_SURF, MOVE_ICE_BEAM, MOVE_ATTRACT, MOVE_BITE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x14, 0x00, 0x00, 0x00
    .string "VAPOREON$", 11 @ name
    .byte 255

    .2byte SPECIES_ESPEON
    .2byte ITEM_CHESTO_BERRY
    .2byte MOVE_PSYCHIC, MOVE_BITE, MOVE_REFLECT, MOVE_REST
    .byte 0x00, 0x00, 0x6E, 0x00, 0xC8, 0x00, 0x00, 0xC8
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x0F, 0x00, 0x00, 0x00
    .string "ESPEON$", 11 @ name
    .byte 255

    .2byte SPECIES_BLISSEY
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_WATER_PULSE, MOVE_MINIMIZE, MOVE_THUNDER_WAVE, MOVE_PROTECT
    .byte 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x05, 0x00, 0x00, 0x00
    .string "BLISSEY$", 11 @ name
    .byte 255

    .2byte SPECIES_STARMIE
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_SURF, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_PSYCHIC
    .byte 0x00, 0x00, 0xFF, 0x00, 0x64, 0x00, 0x00, 0x9B
    .byte 0x14, 0x00, 0x00, 0x00, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x14, 0x00, 0x00, 0x00
    .string "STARMIE$", 11 @ name
    .byte 255

    .2byte SPECIES_PERSIAN
    .2byte ITEM_KINGS_ROCK
    .2byte MOVE_SLASH, MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_FAKE_OUT
    .byte 0x00, 0x00, 0x00, 0xFF, 0x82, 0x00, 0x00, 0x7D
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x0D, 0x00, 0x00, 0x00
    .string "PERSIAN$", 11 @ name
    .byte 255

    .2byte SPECIES_AZUMARILL
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_SURF, MOVE_ENCORE, MOVE_ATTRACT, MOVE_DIG
    .byte 0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0xFF, 0x9B
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x00, 0x00, 0x00, 0x00
    .string "AZUMARILL$", 11 @ name
    .byte 255

    .byte 0x4B, 0x55, 0x01, 0x00

kTrainerCard_84808AC:: @ 84808AC
    .byte 25 @ Card Number
    .byte 8
    .byte 0 @ Battle Type
    .byte 12 @ Reward Item

    .string "JARRETT$", 11 @ Trainer Name
    .byte 108, 2, 0
    .2byte 4109
    .2byte 4126
    .2byte 4129
    .2byte 9881
    .2byte 6177
    .2byte 3072
    .2byte 2057
    .2byte 4139
    .2byte 2565
    .2byte 1582
    .2byte 6177
    .2byte 2593
    .2byte 4658
    .2byte 9336
    .2byte 4131
    .2byte 3072
    .2byte 2566
    .2byte 3626
    .2byte 4662
    .2byte 4143
    .2byte 6177
    .2byte 2634
    .2byte 3638
    .2byte 3075
    .byte 0, 0

    .2byte SPECIES_ELECTRODE
    .2byte ITEM_FOCUS_BAND
    .2byte MOVE_EXPLOSION, MOVE_LIGHT_SCREEN, MOVE_SCREECH, MOVE_THUNDERBOLT
    .byte 0x00, 0x00, 0x0A, 0x96, 0x64, 0x96, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x0D, 0x00, 0x00, 0x00
    .string "ELECTRODE$", 11 @ name
    .byte 255

    .2byte SPECIES_VOLTORB
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_EXPLOSION, MOVE_FLASH, MOVE_DOUBLE_TEAM, MOVE_THUNDER
    .byte 0x00, 0x00, 0x00, 0x00, 0x9B, 0xFF, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x0D, 0x00, 0x00, 0x00
    .string "VOLTORB$", 11 @ name
    .byte 255

    .2byte SPECIES_WEEZING
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_EXPLOSION, MOVE_SLUDGE_BOMB, MOVE_DESTINY_BOND, MOVE_THUNDERBOLT
    .byte 0x00, 0x00, 0x00, 0xC8, 0x9B, 0x00, 0x00, 0x9B
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x07, 0x00, 0x00, 0x00
    .string "WEEZING$", 11 @ name
    .byte 255

    .2byte SPECIES_GOLEM
    .2byte ITEM_SHELL_BELL
    .2byte MOVE_EXPLOSION, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB
    .byte 0x00, 0x00, 0x00, 0xFF, 0x64, 0x00, 0x00, 0x96
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x7F, 0x00, 0x00, 0x00
    .string "GOLEM$", 11 @ name
    .byte 255

    .2byte SPECIES_EXEGGCUTE
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_EXPLOSION, MOVE_STUN_SPORE, MOVE_HYPNOSIS, MOVE_GIGA_DRAIN
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x07, 0x00, 0x00, 0x00
    .string "EXEGGCUTE$", 11 @ name
    .byte 255

    .2byte SPECIES_FORRETRESS
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_EXPLOSION, MOVE_GIGA_DRAIN, MOVE_DIG, MOVE_PROTECT
    .byte 0x00, 0x00, 0x00, 0x64, 0x9B, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x84, 0x00, 0x00, 0x00
    .string "FORRETRESS$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0x6A, 0x5B, 0x01, 0x00

kTrainerCard_8480C8C:: @ 8480C8C
    .byte 26 @ Card Number
    .byte 8
    .byte 0 @ Battle Type
    .byte 13 @ Reward Item

    .string "OWEN$", 11 @ Trainer Name
    .byte 95, 2, 0
    .2byte 2052
    .2byte 9814
    .2byte 4119
    .2byte 9763
    .2byte 2580
    .2byte 3072
    .2byte 1589
    .2byte 2600
    .2byte 9945
    .2byte 4148
    .2byte 9814
    .2byte 3072
    .2byte 9763
    .2byte 9236
    .2byte 1081
    .2byte 9746
    .2byte 8199
    .2byte 3607
    .2byte 9746
    .2byte 8199
    .2byte 65535
    .2byte 65535
    .2byte 8199
    .2byte 9746
    .byte 0, 0

    .2byte SPECIES_MAGNETON
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_PROTECT, MOVE_ZAP_CANNON, MOVE_TOXIC, MOVE_SUPERSONIC
    .byte 0x00, 0x00, 0x00, 0x00, 0x7D, 0xFF, 0x00, 0x82
    .byte 0x0A, 0x00, 0x00, 0x00, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x0A, 0x00, 0x00, 0x00
    .string "MAGNETON$", 11 @ name
    .byte 255

    .2byte SPECIES_PIKACHU
    .2byte ITEM_LIGHT_BALL
    .2byte MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_DOUBLE_TEAM
    .byte 0x00, 0x00, 0x00, 0x00, 0x96, 0x00, 0xFF, 0x69
    .byte 0x0F, 0x00, 0x00, 0x00, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x0F, 0x00, 0x00, 0x00
    .string "PIKACHU$", 11 @ name
    .byte 255

    .2byte SPECIES_JOLTEON
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_DOUBLE_TEAM, MOVE_TOXIC
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x64, 0x00, 0x9B
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x37, 0x00, 0x00, 0x00
    .string "JOLTEON$", 11 @ name
    .byte 255

    .2byte SPECIES_BLISSEY
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_THUNDER_WAVE, MOVE_BLIZZARD, MOVE_WATER_PULSE, MOVE_REST
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x05, 0x00, 0x00, 0x00
    .string "BLISSEY$", 11 @ name
    .byte 255

    .2byte SPECIES_PORYGON2
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_THUNDER_WAVE, MOVE_ZAP_CANNON, MOVE_PSYCHIC, MOVE_RECOVER
    .byte 0x00, 0x00, 0x00, 0x00, 0x7D, 0x00, 0xFF, 0x82
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x05, 0x00, 0x00, 0x00
    .string "PORYGON2$", 11 @ name
    .byte 255

    .2byte SPECIES_PORYGON
    .2byte ITEM_LAX_INCENSE
    .2byte MOVE_THUNDER_WAVE, MOVE_ZAP_CANNON, MOVE_DOUBLE_TEAM, MOVE_PROTECT
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF
    .byte 0x05, 0x00, 0x00, 0x00, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x05, 0x00, 0x00, 0x00
    .string "PORYGON$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0xEC, 0x60, 0x01, 0x00

kTrainerCard_848106C:: @ 848106C
    .byte 27 @ Card Number
    .byte 8
    .byte 0 @ Battle Type
    .byte 1 @ Reward Item

    .string "LORENZO$", 11 @ Trainer Name
    .byte 106, 1, 0
    .2byte 7695
    .2byte 1566
    .2byte 4107
    .2byte 7194
    .2byte 6674
    .2byte 3072
    .2byte 2077
    .2byte 1071
    .2byte 4118
    .2byte 7193
    .2byte 2600
    .2byte 1566
    .2byte 2052
    .2byte 3072
    .2byte 9350
    .2byte 3072
    .2byte 3076
    .2byte 7714
    .2byte 2561
    .2byte 4096
    .2byte 5662
    .2byte 3597
    .2byte 9350
    .2byte 8713
    .byte 0, 0

    .2byte SPECIES_MR_MIME
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN, MOVE_REFLECT
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x64, 0x9B
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x07, 0x00, 0x00, 0x00
    .string "MR. MIME$", 11 @ name
    .byte 255

    .2byte SPECIES_HYPNO
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_PSYCHIC
    .byte 0x00, 0x00, 0x00, 0x00, 0x9B, 0x00, 0xC8, 0x9B
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x8C, 0x00, 0x00, 0x00
    .string "HYPNO$", 11 @ name
    .byte 255

    .2byte SPECIES_ALAKAZAM
    .2byte ITEM_CHOICE_BAND
    .2byte MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_PSYCHIC
    .byte 0x00, 0x00, 0x00, 0x00, 0x9B, 0x96, 0x9B, 0x32
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x0F, 0x00, 0x00, 0x00
    .string "ALAKAZAM$", 11 @ name
    .byte 255

    .2byte SPECIES_GENGAR
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_HYPNOSIS, MOVE_TOXIC
    .byte 0x00, 0x00, 0x00, 0xC8, 0x00, 0x64, 0x37, 0x9B
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x88, 0x00, 0x00, 0x00
    .string "GENGAR$", 11 @ name
    .byte 255

    .2byte SPECIES_GIRAFARIG
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_THUNDERBOLT, MOVE_CRUNCH, MOVE_BODY_SLAM, MOVE_REST
    .byte 0x00, 0x00, 0x00, 0x64, 0x64, 0x9B, 0x00, 0x9B
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x9E
    .byte 0x03, 0x00, 0x00, 0x00
    .string "GIRAFARIG$", 11 @ name
    .byte 255

    .2byte SPECIES_STARMIE
    .2byte ITEM_APICOT_BERRY
    .2byte MOVE_THUNDERBOLT, MOVE_SURF, MOVE_RECOVER, MOVE_ICE_BEAM
    .byte 0x00, 0x00, 0x00, 0x00, 0x37, 0xFA, 0x96, 0x37
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x0A, 0x00, 0x00, 0x00
    .string "STARMIE$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0x4B, 0x62, 0x01, 0x00

kTrainerCard_848144C:: @ 848144C
    .byte 28 @ Card Number
    .byte 8
    .byte 1 @ Battle Type
    .byte 11 @ Reward Item

    .string "NIA & CARL$", 11 @ Trainer Name
    .byte 127, 4, 0
    .2byte 2050
    .2byte 2600
    .2byte 6168
    .2byte 4673
    .2byte 6695
    .2byte 1558
    .2byte 3613
    .2byte 3597
    .2byte 6168
    .2byte 8715
    .2byte 3637
    .2byte 1566
    .2byte 2600
    .2byte 3626
    .2byte 1558
    .2byte 4112
    .2byte 9979
    .2byte 3075
    .2byte 2600
    .2byte 1590
    .2byte 1558
    .2byte 4112
    .2byte 8223
    .2byte 3076
    .byte 0, 0

    .2byte SPECIES_MUK
    .2byte ITEM_CHOICE_BAND
    .2byte MOVE_THUNDERBOLT, MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_BODY_SLAM
    .byte 0x00, 0x00, 0x00, 0xFF, 0x9B, 0x00, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0xBF
    .byte 0x07, 0x00, 0x00, 0x00
    .string "MUK$", 11 @ name
    .byte 255

    .2byte SPECIES_GENGAR
    .2byte ITEM_PETAYA_BERRY
    .2byte MOVE_THUNDERBOLT, MOVE_CONFUSE_RAY, MOVE_PSYCHIC, MOVE_EXPLOSION
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x9B, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x15, 0x00, 0x00, 0x00
    .string "GENGAR$", 11 @ name
    .byte 255

    .2byte SPECIES_ALAKAZAM
    .2byte ITEM_GANLON_BERRY
    .2byte MOVE_THUNDER_PUNCH, MOVE_PSYCHIC, MOVE_RECOVER, MOVE_REFLECT
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x0A, 0x00, 0x00, 0x00
    .string "ALAKAZAM$", 11 @ name
    .byte 255

    .2byte SPECIES_JOLTEON
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_THUNDERBOLT, MOVE_FLAIL, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM
    .byte 0x00, 0x00, 0x00, 0x32, 0x64, 0xA0, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x05, 0x00, 0x00, 0x00
    .string "JOLTEON$", 11 @ name
    .byte 255

    .2byte SPECIES_ELECTRODE
    .2byte ITEM_LIECHI_BERRY
    .2byte MOVE_THUNDERBOLT, MOVE_EXPLOSION, MOVE_MIRROR_COAT, MOVE_LIGHT_SCREEN
    .byte 0x00, 0x00, 0x00, 0x37, 0x00, 0x64, 0x64, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x14, 0x00, 0x00, 0x00
    .string "ELECTRODE$", 11 @ name
    .byte 255

    .2byte SPECIES_RAICHU
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_THUNDERBOLT, MOVE_COUNTER, MOVE_REVERSAL, MOVE_LIGHT_SCREEN
    .byte 0x00, 0x00, 0x00, 0x37, 0xFF, 0x00, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x02, 0x00, 0x00, 0x00
    .string "RAICHU$", 11 @ name
    .byte 255

    .string "NIA & CARL$", 11 @ Trainer Name
    .byte 127, 4, 0
    .2byte 8723
    .2byte 6674
    .2byte 6698
    .2byte 6158
    .2byte 7191
    .2byte 3072
    .2byte 7703
    .2byte 3597
    .2byte 1566
    .2byte 4148
    .2byte 2624
    .2byte 6158
    .2byte 3128
    .2byte 3072
    .2byte 9301
    .2byte 1090
    .2byte 6158
    .2byte 7191
    .2byte 1537
    .2byte 4140
    .2byte 5649
    .2byte 3072
    .2byte 3108
    .2byte 3076
    .byte 0, 0

    .2byte SPECIES_KANGASKHAN
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_SHADOW_BALL, MOVE_REVERSAL, MOVE_ENDURE, MOVE_FAKE_OUT
    .byte 0x00, 0x00, 0x00, 0xFF, 0x69, 0x00, 0x00, 0x96
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x03, 0x00, 0x00, 0x00
    .string "KANGASKHAN$", 11 @ name
    .byte 255

    .2byte SPECIES_TAUROS
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_DOUBLE_EDGE, MOVE_ROCK_TOMB, MOVE_SURF, MOVE_REST
    .byte 0x00, 0x00, 0x00, 0xFF, 0x64, 0x00, 0x00, 0x9B
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x03, 0x00, 0x00, 0x00
    .string "TAUROS$", 11 @ name
    .byte 255

    .2byte SPECIES_MILTANK
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_BODY_SLAM, MOVE_SHADOW_BALL, MOVE_MILK_DRINK, MOVE_ROCK_TOMB
    .byte 0x00, 0x00, 0x00, 0x9B, 0x32, 0xFA, 0x00, 0x37
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x03, 0x00, 0x00, 0x00
    .string "MILTANK$", 11 @ name
    .byte 255

    .2byte SPECIES_RHYDON
    .2byte ITEM_CHOICE_BAND
    .2byte MOVE_THUNDERBOLT, MOVE_MEGAHORN, MOVE_HORN_DRILL, MOVE_ROCK_TOMB
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0xBF
    .byte 0x80, 0x00, 0x00, 0x00
    .string "RHYDON$", 11 @ name
    .byte 255

    .2byte SPECIES_DRAGONITE
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_BLIZZARD, MOVE_SURF, MOVE_OUTRAGE, MOVE_FLAMETHROWER
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0x3F
    .byte 0x91, 0x00, 0x00, 0x00
    .string "DRAGONITE$", 11 @ name
    .byte 255

    .2byte SPECIES_LAPRAS
    .2byte ITEM_SHELL_BELL
    .2byte MOVE_THUNDERBOLT, MOVE_BLIZZARD, MOVE_SURF, MOVE_HORN_DRILL
    .byte 0x00, 0x00, 0x00, 0x00, 0x9B, 0x00, 0xFF, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0xBF
    .byte 0x91, 0x00, 0x00, 0x00
    .string "LAPRAS$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0x60, 0x63, 0x01, 0x00

kTrainerCard_848182C:: @ 848182C
    .byte 29 @ Card Number
    .byte 8
    .byte 1 @ Battle Type
    .byte 3 @ Reward Item

    .string "AXE & REN$", 11 @ Trainer Name
    .byte 130, 2, 0
    .2byte 2609
    .2byte 5128
    .2byte 4143
    .2byte 527
    .2byte 3636
    .2byte 5150
    .2byte 3613
    .2byte 7700
    .2byte 2579
    .2byte 2601
    .2byte 5150
    .2byte 3072
    .2byte 2561
    .2byte 1546
    .2byte 4151
    .2byte 7695
    .2byte 9545
    .2byte 3076
    .2byte 7695
    .2byte 9545
    .2byte 5124
    .2byte 2580
    .2byte 3593
    .2byte 8218
    .byte 0, 0

    .2byte SPECIES_LANTURN
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_RAIN_DANCE, MOVE_SURF, MOVE_THUNDER, MOVE_ICE_BEAM
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0A, 0x00, 0x00, 0x00
    .string "LANTURN$", 11 @ name
    .byte 255

    .2byte SPECIES_MANTINE
    .2byte ITEM_PETAYA_BERRY
    .2byte MOVE_RAIN_DANCE, MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_ICE_BEAM
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x9B, 0x64, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x14, 0x00, 0x00, 0x00
    .string "MANTINE$", 11 @ name
    .byte 255

    .2byte SPECIES_DEWGONG
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_RAIN_DANCE, MOVE_SURF, MOVE_SHEER_COLD, MOVE_BLIZZARD
    .byte 0x00, 0x00, 0x00, 0x64, 0x64, 0x00, 0xFF, 0x37
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x11, 0x00, 0x00, 0x00
    .string "DEWGONG$", 11 @ name
    .byte 255

    .2byte SPECIES_CLOYSTER
    .2byte ITEM_KINGS_ROCK
    .2byte MOVE_RAIN_DANCE, MOVE_SURF, MOVE_ICE_BEAM, MOVE_HYPER_BEAM
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x11, 0x00, 0x00, 0x00
    .string "CLOYSTER$", 11 @ name
    .byte 255

    .2byte SPECIES_TENTACRUEL
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_RAIN_DANCE, MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB
    .byte 0x00, 0x00, 0x00, 0x00, 0x64, 0x64, 0xFF, 0x37
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0A, 0x00, 0x00, 0x00
    .string "TENTACRUEL$", 11 @ name
    .byte 255

    .2byte SPECIES_GYARADOS
    .2byte ITEM_LIECHI_BERRY
    .2byte MOVE_RAIN_DANCE, MOVE_SURF, MOVE_DRAGON_DANCE, MOVE_RETURN
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x03, 0x00, 0x00, 0x00
    .string "GYARADOS$", 11 @ name
    .byte 255

    .string "AXE & REN$", 11 @ Trainer Name
    .byte 130, 2, 0
    .2byte 2624
    .2byte 1068
    .2byte 7720
    .2byte 2580
    .2byte 3593
    .2byte 5150
    .2byte 2561
    .2byte 1543
    .2byte 3594
    .2byte 2601
    .2byte 4130
    .2byte 5120
    .2byte 2601
    .2byte 8195
    .2byte 4139
    .2byte 3641
    .2byte 5120
    .2byte 5673
    .2byte 2575
    .2byte 2561
    .2byte 5135
    .2byte 3622
    .2byte 5120
    .2byte 5649
    .byte 0, 0

    .2byte SPECIES_ELECTABUZZ
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_THUNDER, MOVE_PSYCHIC, MOVE_CROSS_CHOP, MOVE_LIGHT_SCREEN
    .byte 0x00, 0x00, 0x00, 0x9B, 0x9B, 0x64, 0x64, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x40, 0x00, 0x00, 0x00
    .string "ELECTABUZZ$", 11 @ name
    .byte 255

    .2byte SPECIES_MAGNETON
    .2byte ITEM_PETAYA_BERRY
    .2byte MOVE_THUNDER, MOVE_SONIC_BOOM, MOVE_METAL_SOUND, MOVE_REFLECT
    .byte 0x00, 0x00, 0x00, 0x00, 0x9B, 0xFF, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x0A, 0x00, 0x00, 0x00
    .string "MAGNETON$", 11 @ name
    .byte 255

    .2byte SPECIES_PORYGON
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_THUNDER, MOVE_PSYCHIC, MOVE_BLIZZARD, MOVE_PROTECT
    .byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x11, 0x00, 0x00, 0x00
    .string "PORYGON$", 11 @ name
    .byte 255

    .2byte SPECIES_DRAGONAIR
    .2byte ITEM_SHELL_BELL
    .2byte MOVE_THUNDER, MOVE_SURF, MOVE_BLIZZARD, MOVE_OUTRAGE
    .byte 0x00, 0x00, 0x00, 0x00, 0x32, 0x9B, 0xFF, 0x32
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0A, 0x00, 0x00, 0x00
    .string "DRAGONAIR$", 11 @ name
    .byte 255

    .2byte SPECIES_PERSIAN
    .2byte ITEM_SHELL_BELL
    .2byte MOVE_THUNDER, MOVE_FAKE_OUT, MOVE_WATER_PULSE, MOVE_RETURN
    .byte 0x00, 0x00, 0x00, 0x9B, 0x00, 0xC8, 0x9B, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0B, 0x00, 0x00, 0x00
    .string "PERSIAN$", 11 @ name
    .byte 255

    .2byte SPECIES_STARMIE
    .2byte ITEM_GANLON_BERRY
    .2byte MOVE_THUNDER, MOVE_SURF, MOVE_RECOVER, MOVE_REFLECT
    .byte 0x00, 0x00, 0x00, 0x00, 0x5F, 0xFF, 0x64, 0x3C
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x05, 0x00, 0x00, 0x00
    .string "STARMIE$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0x72, 0x52, 0x01, 0x00

kTrainerCard_8481C0C:: @ 8481C0C
    .byte 30 @ Card Number
    .byte 8
    .byte 1 @ Battle Type
    .byte 5 @ Reward Item

    .string "KATI & GEB$", 11 @ Trainer Name
    .byte 128, 2, 0
    .2byte 2054
    .2byte 4143
    .2byte 2624
    .2byte 8225
    .2byte 9814
    .2byte 9417
    .2byte 3129
    .2byte 3129
    .2byte 2624
    .2byte 8225
    .2byte 3129
    .2byte 6185
    .2byte 2561
    .2byte 5135
    .2byte 4143
    .2byte 1585
    .2byte 2600
    .2byte 9946
    .2byte 2566
    .2byte 3614
    .2byte 3603
    .2byte 2593
    .2byte 3083
    .2byte 3072
    .byte 0, 0

    .2byte SPECIES_FLAAFFY
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_ATTRACT, MOVE_PROTECT, MOVE_THUNDERBOLT, MOVE_REFLECT
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x84, 0x00, 0x00, 0x00
    .string "FLAAFFY$", 11 @ name
    .byte 255

    .2byte SPECIES_QUAGSIRE
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_ATTRACT, MOVE_SURF, MOVE_AMNESIA, MOVE_BLIZZARD
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x64, 0x9B
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x93, 0x00, 0x00, 0x00
    .string "QUAGSIRE$", 11 @ name
    .byte 255

    .2byte SPECIES_PIKACHU
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_ATTRACT, MOVE_REVERSAL, MOVE_THUNDERBOLT, MOVE_IRON_TAIL
    .byte 0x00, 0x00, 0x00, 0x9B, 0x64, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x8A, 0x00, 0x00, 0x00
    .string "PIKACHU$", 11 @ name
    .byte 255

    .2byte SPECIES_ELECTABUZZ
    .2byte ITEM_LIECHI_BERRY
    .2byte MOVE_ATTRACT, MOVE_COUNTER, MOVE_ICE_PUNCH, MOVE_BODY_SLAM
    .byte 0x00, 0x00, 0x00, 0x00, 0x96, 0xFF, 0x00, 0x69
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x46, 0x00, 0x00, 0x00
    .string "ELECTABUZZ$", 11 @ name
    .byte 255

    .2byte SPECIES_TOGETIC
    .2byte ITEM_KINGS_ROCK
    .2byte MOVE_ATTRACT, MOVE_BLIZZARD, MOVE_ANCIENT_POWER, MOVE_WATER_PULSE
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x2D, 0x00, 0x00, 0x00
    .string "TOGETIC$", 11 @ name
    .byte 255

    .2byte SPECIES_GOLDUCK
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_ATTRACT, MOVE_SURF, MOVE_DIG, MOVE_CROSS_CHOP
    .byte 0x00, 0x00, 0x00, 0x9B, 0x32, 0xFF, 0x00, 0x32
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x80, 0x00, 0x00, 0x00
    .string "GOLDUCK$", 11 @ name
    .byte 255

    .string "KATI & GEB$", 11 @ Trainer Name
    .byte 128, 2, 0
    .2byte 2601
    .2byte 1107
    .2byte 2566
    .2byte 1116
    .2byte 8225
    .2byte 1064
    .2byte 4119
    .2byte 7193
    .2byte 2624
    .2byte 8225
    .2byte 6691
    .2byte 3072
    .2byte 2589
    .2byte 3097
    .2byte 5124
    .2byte 1123
    .2byte 4153
    .2byte 3072
    .2byte 2562
    .2byte 4126
    .2byte 7187
    .2byte 4143
    .2byte 5692
    .2byte 3075
    .byte 0, 0

    .2byte SPECIES_PICHU
    .2byte ITEM_FOCUS_BAND
    .2byte MOVE_ATTRACT, MOVE_PROTECT, MOVE_SWEET_KISS, MOVE_REVERSAL
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x03, 0x00, 0x00, 0x00
    .string "PICHU$", 11 @ name
    .byte 255

    .2byte SPECIES_ELEKID
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_ATTRACT, MOVE_PROTECT, MOVE_DOUBLE_TEAM, MOVE_FOCUS_PUNCH
    .byte 0x00, 0x00, 0x00, 0xFF, 0x82, 0x00, 0x00, 0x7D
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x02, 0x00, 0x00, 0x00
    .string "ELEKID$", 11 @ name
    .byte 255

    .2byte SPECIES_TOGEPI
    .2byte ITEM_FOCUS_BAND
    .2byte MOVE_ATTRACT, MOVE_PROTECT, MOVE_YAWN, MOVE_WATER_PULSE
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x0F, 0x00, 0x00, 0x00
    .string "TOGEPI$", 11 @ name
    .byte 255

    .2byte SPECIES_PSYDUCK
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_ATTRACT, MOVE_PROTECT, MOVE_DIG, MOVE_DIVE
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x16, 0x00, 0x00, 0x00
    .string "PSYDUCK$", 11 @ name
    .byte 255

    .2byte SPECIES_MAREEP
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_ATTRACT, MOVE_PROTECT, MOVE_LIGHT_SCREEN, MOVE_THUNDERBOLT
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x14
    .byte 0x07, 0x00, 0x00, 0x00
    .string "MAREEP$", 11 @ name
    .byte 255

    .2byte SPECIES_WOOPER
    .2byte ITEM_FOCUS_BAND
    .2byte MOVE_ATTRACT, MOVE_PROTECT, MOVE_SURF, MOVE_YAWN
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x4A, 0x29, 0xA5, 0x94
    .byte 0x07, 0x00, 0x00, 0x00
    .string "WOOPER$", 11 @ name
    .byte 255

    .string "$", 11 @ Trainer Name
    .byte 0, 1, 0
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .2byte 65535
    .byte 0, 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .2byte SPECIES_NONE
    .2byte ITEM_NONE
    .2byte MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    .byte 0x00, 0x00, 0x00, 0x00
    .string "$$$$$$$$$$$", 11 @ name
    .byte 0

    .byte 0x66, 0x59, 0x01, 0x00

kTrainerCard_8481FEC:: @ 8481FEC
    .byte 31 @ Card Number
    .byte 8
    .byte 2 @ Battle Type
    .byte 7 @ Reward Item

    .string "BEN$", 11 @ Trainer Name
    .byte 107, 1, 0
    .2byte 3129
    .2byte 4109
    .2byte 9263
    .2byte 4135
    .2byte 1081
    .2byte 1566
    .2byte 1073
    .2byte 4107
    .2byte 1081
    .2byte 2049
    .2byte 4137
    .2byte 4107
    .2byte 1081
    .2byte 4135
    .2byte 2600
    .2byte 6168
    .2byte 6171
    .2byte 2601
    .2byte 1081
    .2byte 3072
    .2byte 2609
    .2byte 4128
    .2byte 5169
    .2byte 1566
    .byte 0, 0

    .2byte SPECIES_ELECTRODE
    .2byte ITEM_LIECHI_BERRY
    .2byte MOVE_THUNDERBOLT, MOVE_MIRROR_COAT, MOVE_EXPLOSION, MOVE_THUNDER_WAVE
    .byte 0x00, 0x00, 0x00, 0x00, 0x37, 0xFF, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x14, 0x00, 0x00, 0x00
    .string "ELECTRODE$", 11 @ name
    .byte 255

    .2byte SPECIES_ELECTABUZZ
    .2byte ITEM_CHOICE_BAND
    .2byte MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_PSYCHIC, MOVE_ICE_PUNCH
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x9B, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0F, 0x00, 0x00, 0x00
    .string "ELECTABUZZ$", 11 @ name
    .byte 255

    .2byte SPECIES_LANTURN
    .2byte ITEM_CHOICE_BAND
    .2byte MOVE_THUNDERBOLT, MOVE_DOUBLE_EDGE, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP
    .byte 0x00, 0x00, 0x00, 0x00, 0x7D, 0x00, 0xFF, 0x82
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x8E, 0x00, 0x00, 0x00
    .string "LANTURN$", 11 @ name
    .byte 255

    .2byte SPECIES_MAGNETON
    .2byte ITEM_LIECHI_BERRY
    .2byte MOVE_ZAP_CANNON, MOVE_HYPER_BEAM, MOVE_LOCK_ON, MOVE_SUPERSONIC
    .byte 0x00, 0x00, 0x00, 0x00, 0xC8, 0xFF, 0x00, 0x37
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x14, 0x00, 0x00, 0x00
    .string "MAGNETON$", 11 @ name
    .byte 255

    .2byte SPECIES_RAICHU
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_DOUBLE_EDGE, MOVE_MEGA_KICK, MOVE_REVERSAL, MOVE_BODY_SLAM
    .byte 0x00, 0x00, 0x00, 0xFF, 0x50, 0x64, 0x00, 0x4B
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x8A, 0x00, 0x00, 0x00
    .string "RAICHU$", 11 @ name
    .byte 255

    .2byte SPECIES_AMPHAROS
    .2byte ITEM_SHELL_BELL
    .2byte MOVE_THUNDERBOLT, MOVE_MEGA_KICK, MOVE_COUNTER, MOVE_BODY_SLAM
    .byte 0x00, 0x00, 0x00, 0xC8, 0x96, 0x00, 0x0A, 0x96
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x07, 0x00, 0x00, 0x00
    .string "AMPHAROS$", 11 @ name
    .byte 255

    .string "CAMDEN$", 11 @ Trainer Name
    .byte 99, 1, 0
    .2byte 3129
    .2byte 4109
    .2byte 9263
    .2byte 4135
    .2byte 1081
    .2byte 1566
    .2byte 4128
    .2byte 9301
    .2byte 4107
    .2byte 1081
    .2byte 4153
    .2byte 3072
    .2byte 1081
    .2byte 3072
    .2byte 2609
    .2byte 4135
    .2byte 8731
    .2byte 521
    .2byte 1081
    .2byte 3072
    .2byte 2609
    .2byte 4128
    .2byte 6683
    .2byte 3072
    .byte 0, 0

    .2byte SPECIES_GRANBULL
    .2byte ITEM_CHOICE_BAND
    .2byte MOVE_THUNDERBOLT, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB
    .byte 0x00, 0x00, 0x00, 0xFF, 0x37, 0x00, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x02, 0x00, 0x00, 0x00
    .string "GRANBULL$", 11 @ name
    .byte 255

    .2byte SPECIES_PERSIAN
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_THUNDERBOLT, MOVE_WATER_PULSE, MOVE_HYPNOSIS, MOVE_SLASH
    .byte 0x00, 0x00, 0x00, 0x64, 0x37, 0xFF, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x80, 0x00, 0x00, 0x00
    .string "PERSIAN$", 11 @ name
    .byte 255

    .2byte SPECIES_LICKITUNG
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_PROTECT, MOVE_SURF, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL
    .byte 0x00, 0x00, 0xC8, 0xFF, 0x00, 0x00, 0x37, 0x00
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x02, 0x00, 0x00, 0x00
    .string "LICKITUNG$", 11 @ name
    .byte 255

    .2byte SPECIES_RATICATE
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_THUNDERBOLT, MOVE_HYPER_FANG, MOVE_SUPER_FANG, MOVE_REVERSAL
    .byte 0x00, 0x00, 0x00, 0xFF, 0x64, 0x32, 0x00, 0x69
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x94, 0x00, 0x00, 0x00
    .string "RATICATE$", 11 @ name
    .byte 255

    .2byte SPECIES_PRIMEAPE
    .2byte ITEM_SCOPE_LENS
    .2byte MOVE_THUNDERBOLT, MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB
    .byte 0x00, 0x00, 0x00, 0xFF, 0x82, 0x00, 0x00, 0x7D
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x02, 0x00, 0x00, 0x00
    .string "PRIMEAPE$", 11 @ name
    .byte 255

    .2byte SPECIES_KANGASKHAN
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_THUNDERBOLT, MOVE_SURF, MOVE_CRUSH_CLAW, MOVE_REST
    .byte 0x00, 0x00, 0x00, 0x64, 0x9B, 0x00, 0x64, 0x9B
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x11, 0x00, 0x00, 0x00
    .string "KANGASKHAN$", 11 @ name
    .byte 255

    .string "ZACKERY$", 11 @ Trainer Name
    .byte 113, 1, 0
    .2byte 3129
    .2byte 4109
    .2byte 9263
    .2byte 4135
    .2byte 1081
    .2byte 1566
    .2byte 9812
    .2byte 4107
    .2byte 1081
    .2byte 2562
    .2byte 5664
    .2byte 3075
    .2byte 1081
    .2byte 3072
    .2byte 9876
    .2byte 9876
    .2byte 9876
    .2byte 3073
    .2byte 4138
    .2byte 5131
    .2byte 7194
    .2byte 3072
    .2byte 9425
    .2byte 9425
    .byte 0, 0

    .2byte SPECIES_WEEZING
    .2byte ITEM_CHOICE_BAND
    .2byte MOVE_THUNDERBOLT, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_SHADOW_BALL
    .byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x9B, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x02, 0x00, 0x00, 0x00
    .string "WEEZING$", 11 @ name
    .byte 255

    .2byte SPECIES_MUK
    .2byte ITEM_LEFTOVERS
    .2byte MOVE_THUNDERBOLT, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_CURSE
    .byte 0x00, 0x00, 0x00, 0x00, 0x96, 0x00, 0xFF, 0x69
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0xA9
    .byte 0x84, 0x00, 0x00, 0x00
    .string "MUK$", 11 @ name
    .byte 255

    .2byte SPECIES_GENGAR
    .2byte ITEM_PETAYA_BERRY
    .2byte MOVE_THUNDERBOLT, MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_WILL_O_WISP
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFA, 0x9B, 0x69
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0A, 0x00, 0x00, 0x00
    .string "GENGAR$", 11 @ name
    .byte 255

    .2byte SPECIES_MISDREAVUS
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_PSYCHIC, MOVE_GRUDGE, MOVE_CONFUSE_RAY, MOVE_DESTINY_BOND
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0x69, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x0A, 0x00, 0x00, 0x00
    .string "MISDREAVUS$", 11 @ name
    .byte 255

    .2byte SPECIES_CROBAT
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_SLUDGE_BOMB, MOVE_CONFUSE_RAY, MOVE_GIGA_DRAIN, MOVE_TOXIC
    .byte 0x00, 0x00, 0x00, 0x00, 0xC8, 0x6E, 0x00, 0xC8
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x87, 0x00, 0x00, 0x00
    .string "CROBAT$", 11 @ name
    .byte 255

    .2byte SPECIES_HAUNTER
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_DESTINY_BOND, MOVE_HYPNOSIS, MOVE_CONFUSE_RAY, MOVE_TOXIC
    .byte 0x00, 0x00, 0x00, 0x00, 0x9B, 0x64, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0x94, 0x52, 0x4A, 0x29
    .byte 0x91, 0x00, 0x00, 0x00
    .string "HAUNTER$", 11 @ name
    .byte 255

    .byte 0x49, 0x4F, 0x01, 0x00

kTrainerCard_84823CC:: @ 84823CC
    .byte 32 @ Card Number
    .byte 8
    .byte 2 @ Battle Type
    .byte 14 @ Reward Item

    .string "MAURA$", 11 @ Trainer Name
    .byte 104, 2, 0
    .2byte 2601
    .2byte 3597
    .2byte 6153
    .2byte 1596
    .2byte 3072
    .2byte 65535
    .2byte 7714
    .2byte 7704
    .2byte 2561
    .2byte 1596
    .2byte 4148
    .2byte 3075
    .2byte 2601
    .2byte 2077
    .2byte 1596
    .2byte 2609
    .2byte 3603
    .2byte 3587
    .2byte 2082
    .2byte 3072
    .2byte 3597
    .2byte 1062
    .2byte 4107
    .2byte 8210
    .byte 0, 0

    .2byte SPECIES_PICHU
    .2byte ITEM_FOCUS_BAND
    .2byte MOVE_THUNDER_SHOCK, MOVE_THUNDER_WAVE, MOVE_SWEET_KISS, MOVE_PROTECT
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x05, 0x00, 0x00, 0x00
    .string "PICHU$", 11 @ name
    .byte 255

    .2byte SPECIES_MAREEP
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_THUNDER_SHOCK, MOVE_CHARGE, MOVE_PROTECT, MOVE_RETURN
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x07, 0x00, 0x00, 0x00
    .string "MAREEP$", 11 @ name
    .byte 255

    .2byte SPECIES_IGGLYBUFF
    .2byte ITEM_QUICK_CLAW
    .2byte MOVE_SING, MOVE_SWEET_KISS, MOVE_PRESENT, MOVE_PROTECT
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x07, 0x00, 0x00, 0x00
    .string "IGGLYBUFF$", 11 @ name
    .byte 255

    .2byte SPECIES_CLEFFA
    .2byte ITEM_LAX_INCENSE
    .2byte MOVE_SING, MOVE_SWEET_KISS, MOVE_ENCORE, MOVE_METRONOME
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x16, 0x00, 0x00, 0x00
    .string "CLEFFA$", 11 @ name
    .byte 255

    .2byte SPECIES_NIDORAN_F
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_CRUNCH, MOVE_DIG, MOVE_FLATTER, MOVE_ATTRACT
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x16, 0x00, 0x00, 0x00
    .string "NIDORAN♀$", 11 @ name
    .byte 255

    .2byte SPECIES_NIDORAN_M
    .2byte ITEM_SITRUS_BERRY
    .2byte MOVE_HORN_DRILL, MOVE_SLUDGE_BOMB, MOVE_FLATTER, MOVE_ATTRACT
    .byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x07, 0x00, 0x00, 0x00
    .string "NIDORAN♂$", 11 @ name
    .byte 255

    .string "MIKAELA$", 11 @ Trainer Name
    .byte 90, 1, 0
    .2byte 2601
    .2byte 3628
    .2byte 3597
    .2byte 1538
    .2byte 523
    .2byte 7690
    .2byte 4638
    .2byte 5643
    .2byte 7714
    .2byte 2601
    .2byte 1538
    .2byte 4150
    .2byte 7196
    .2byte 7187
    .2byte 2561
    .2byte 4096
    .2byte 4102
    .2byte 5154
    .2byte 2562
    .2byte 9983
    .2byte 2580
    .2byte 3633
    .2byte 2601
    .2byte 5168
    .byte 0, 0

    .2byte SPECIES_NIDORINO
    .2byte ITEM_CHOICE_BAND
    .2byte MOVE_SHOCK_WAVE, MOVE_HORN_DRILL, MOVE_ICE_BEAM, MOVE_IRON_TAIL
    .byte 0x00, 0x00, 0x00, 0x00, 0x9B, 0x00, 0xFF, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x07, 0x00, 0x00, 0x00
    .string "NIDORINO$", 11 @ name
    .byte 255

    .2byte SPECIES_NIDORINA
    .2byte ITEM_CHOICE_BAND
    .2byte MOVE_SHOCK_WAVE, MOVE_CRUNCH, MOVE_BODY_SLAM, MOVE_COUNTER
    .byte 0x00, 0x00, 0x00, 0xFF, 0x9B, 0x00, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x16, 0x00, 0x00, 0x00
    .string "NIDORINA$", 11 @ name
    .byte 255

    .2byte SPECIES_PIKACHU
    .2byte ITEM_LIGHT_BALL
    .2byte MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_COUNTER, MOVE_BODY_SLAM
    .byte 0x00, 0x00, 0x00, 0x00, 0xC8, 0x00, 0xFF, 0x37
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x11, 0x00, 0x00, 0x00
    .string "PIKACHU$", 11 @ name
    .byte 255

    .2byte SPECIES_FLAAFFY
    .2byte ITEM_BRIGHT_POWDER
    .2byte MOVE_SHOCK_WAVE, MOVE_DOUBLE_TEAM, MOVE_SEISMIC_TOSS, MOVE_BODY_SLAM
    .byte 0x00, 0x00, 0x00, 0xFF, 0x64, 0x00, 0x00, 0x96
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x07, 0x00, 0x00, 0x00
    .string "FLAAFFY$", 11 @ name
    .byte 255

    .2byte SPECIES_JIGGLYPUFF
    .2byte ITEM_CHOICE_BAND
    .2byte MOVE_SHOCK_WAVE, MOVE_SHADOW_BALL, MOVE_FOCUS_PUNCH, MOVE_BODY_SLAM
    .byte 0x00, 0x00, 0x00, 0xFF, 0x96, 0x00, 0x00, 0x69
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x16, 0x00, 0x00, 0x00
    .string "JIGGLYPUFF$", 11 @ name
    .byte 255

    .2byte SPECIES_CLEFAIRY
    .2byte ITEM_CHOICE_BAND
    .2byte MOVE_SHOCK_WAVE, MOVE_METEOR_MASH, MOVE_MOONLIGHT, MOVE_BODY_SLAM
    .byte 0x00, 0x00, 0x00, 0xFF, 0x64, 0x00, 0x00, 0x9B
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x07, 0x00, 0x00, 0x00
    .string "CLEFAIRY$", 11 @ name
    .byte 255

    .string "FLINT$", 11 @ Trainer Name
    .byte 99, 4, 0
    .2byte 2601
    .2byte 3597
    .2byte 9936
    .2byte 6188
    .2byte 1596
    .2byte 3072
    .2byte 2602
    .2byte 1543
    .2byte 7695
    .2byte 9936
    .2byte 1560
    .2byte 3072
    .2byte 2561
    .2byte 4117
    .2byte 4659
    .2byte 3641
    .2byte 3638
    .2byte 5686
    .2byte 3088
    .2byte 3072
    .2byte 2601
    .2byte 8206
    .2byte 4138
    .2byte 4136
    .byte 0, 0

    .2byte SPECIES_WIGGLYTUFF
    .2byte ITEM_CHOICE_BAND
    .2byte MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_WATER_PULSE, MOVE_FLAMETHROWER
    .byte 0x00, 0x00, 0x00, 0x00, 0x9B, 0x00, 0xFF, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0xCF, 0x00, 0x00, 0x00
    .string "WIGGLYTUFF$", 11 @ name
    .byte 255

    .2byte SPECIES_CLEFABLE
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_THUNDERBOLT, MOVE_SOFT_BOILED, MOVE_METEOR_MASH, MOVE_DOUBLE_EDGE
    .byte 0x00, 0x00, 0x00, 0xFF, 0x64, 0x00, 0x00, 0x96
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0xCF, 0x00, 0x00, 0x00
    .string "CLEFABLE$", 11 @ name
    .byte 255

    .2byte SPECIES_NIDOQUEEN
    .2byte ITEM_CHOICE_BAND
    .2byte MOVE_THUNDERBOLT, MOVE_CRUNCH, MOVE_SUPERPOWER, MOVE_SURF
    .byte 0x00, 0x00, 0x00, 0xC8, 0x6E, 0x00, 0x64, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x07, 0x00, 0x00, 0x00
    .string "NIDOQUEEN$", 11 @ name
    .byte 255

    .2byte SPECIES_NIDOKING
    .2byte ITEM_CHOICE_BAND
    .2byte MOVE_THUNDERBOLT, MOVE_HYPER_BEAM, MOVE_MEGAHORN, MOVE_SHADOW_BALL
    .byte 0x00, 0x00, 0x00, 0xFF, 0x96, 0x00, 0x00, 0x64
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x02, 0x00, 0x00, 0x00
    .string "NIDOKING$", 11 @ name
    .byte 255

    .2byte SPECIES_RAICHU
    .2byte ITEM_SALAC_BERRY
    .2byte MOVE_THUNDERBOLT, MOVE_REVERSAL, MOVE_IRON_TAIL, MOVE_DOUBLE_EDGE
    .byte 0x00, 0x00, 0x00, 0x9B, 0x96, 0x64, 0x00, 0x69
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x80, 0x00, 0x00, 0x00
    .string "RAICHU$", 11 @ name
    .byte 255

    .2byte SPECIES_AMPHAROS
    .2byte ITEM_LUM_BERRY
    .2byte MOVE_THUNDERBOLT, MOVE_REST, MOVE_BODY_SLAM, MOVE_IRON_TAIL
    .byte 0x00, 0x00, 0x00, 0xFF, 0x96, 0x00, 0x00, 0x69
    .byte 0x00, 0x00, 0x00, 0x10, 0xEF, 0xBD, 0xF7, 0x1E
    .byte 0x80, 0x00, 0x00, 0x00
    .string "AMPHAROS$", 11 @ name
    .byte 255

    .byte 0x80, 0x6B, 0x01, 0x00

kBasicItem_84827AC:: @ 84827AC
    .byte 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

kTrainerCards_Single:: @ 84827B4
    .4byte kTrainerCard_847F16C @ 847F16C
    .4byte kTrainerCard_847D26C @ 847D26C
    .4byte kTrainerCard_84808AC @ 84808AC
    .4byte kTrainerCard_847ABAC @ 847ABAC
    .4byte kTrainerCard_847CAAC @ 847CAAC
    .4byte kTrainerCard_847E9AC @ 847E9AC
    .4byte kTrainerCard_847AF8C @ 847AF8C
    .4byte kTrainerCard_847CE8C @ 847CE8C

kTrainerCards_Double:: @ 84827D4
    .4byte kTrainerCard_847DA2C @ 847DA2C
    .4byte kTrainerCard_847BF0C @ 847BF0C
    .4byte kTrainerCard_847D64C @ 847D64C
    .4byte kTrainerCard_847DE0C @ 847DE0C
    .4byte kTrainerCard_847B74C @ 847B74C
    .4byte kTrainerCard_847BB2C @ 847BB2C
    .4byte kTrainerCard_848182C @ 848182C
    .4byte kTrainerCard_847F92C @ 847F92C

kTrainerCards_Knockout:: @ 84827F4
    .4byte kTrainerCard_847C2EC @ 847C2EC
    .4byte kTrainerCard_847C6CC @ 847C6CC
    .4byte kTrainerCard_847E5CC @ 847E5CC
    .4byte kTrainerCard_84804CC @ 84804CC
    .4byte kTrainerCard_84823CC @ 84823CC
    .4byte kTrainerCard_8481FEC @ 8481FEC
    .4byte kTrainerCard_84800EC @ 84800EC
    .4byte kTrainerCard_847E1EC @ 847E1EC

kTrainerCards_Mixed:: @ 8482814
    .4byte kTrainerCard_847ED8C @ 847ED8C
    .4byte kTrainerCard_848106C @ 848106C
    .4byte kTrainerCard_8480C8C @ 8480C8C
    .4byte kTrainerCard_847F92C @ 847F92C
    .4byte kTrainerCard_847F54C @ 847F54C
    .4byte kTrainerCard_847E1EC @ 847E1EC
    .4byte kTrainerCard_847D64C @ 847D64C
    .4byte kTrainerCard_847C6CC @ 847C6CC

kPoundMoveDescription:: @ 8482834
    .string "A physical attack\n"
    .string "delivered with a\n"
    .string "long tail or a\n"
    .string "foreleg, etc.$"

kKarateChopMoveDescription:: @ 8482874
    .string "The foe is attacked\n"
    .string "with a sharp chop.\n"
    .string "It has a high\n"
    .string "critical-hit ratio.$"

kDoubleSlapMoveDescription:: @ 84828BD
    .string "The foe is slapped\n"
    .string "repeatedly, back\n"
    .string "and forth, two to\n"
    .string "five times.$"

kCometPunchMoveDescription:: @ 84828FF
    .string "The foe is hit with\n"
    .string "a flurry of punches\n"
    .string "that strike two to\n"
    .string "five times.$"

kMegaPunchMoveDescription:: @ 8482946
    .string "The foe is slugged\n"
    .string "by a punch thrown\n"
    .string "with muscle-packed\n"
    .string "power.$"

kPayDayMoveDescription:: @ 8482985
    .string "Numerous coins are\n"
    .string "hurled at the foe.\n"
    .string "Money is earned\n"
    .string "after battle.$"

kFirePunchMoveDescription:: @ 84829C9
    .string "The foe is punched\n"
    .string "with a fiery fist.\n"
    .string "It may leave the\n"
    .string "foe with a burn.$"

kIcePunchMoveDescription:: @ 8482A11
    .string "The foe is punched\n"
    .string "with an icy fist.\n"
    .string "It may leave the\n"
    .string "foe frozen.$"

kThunderPunchMoveDescription:: @ 8482A53
    .string "The foe is punched\n"
    .string "with an electrified\n"
    .string "fist. It may leave\n"
    .string "the foe paralyzed.$"

kScratchMoveDescription:: @ 8482AA0
    .string "Hard, pointed, and\n"
    .string "sharp claws rake\n"
    .string "the foe.$"

kViceGripMoveDescription:: @ 8482ACD
    .string "Huge, impressive\n"
    .string "pincers grip and\n"
    .string "squeeze the foe.$"

kGuillotineMoveDescription:: @ 8482B00
    .string "A vicious tearing\n"
    .string "attack with pincers.\n"
    .string "The foe will faint\n"
    .string "if it hits.$"

kRazorWindMoveDescription:: @ 8482B46
    .string "Blades of wind hit\n"
    .string "the foe on the 2nd\n"
    .string "turn. It has a high\n"
    .string "critical-hit ratio.$"

kSwordsDanceMoveDescription:: @ 8482B94
    .string "A frenetic dance of\n"
    .string "fighting. It sharply\n"
    .string "raises the ATTACK\n"
    .string "stat.$"

kCutMoveDescription:: @ 8482BD5
    .string "A basic attack.\n"
    .string "It can be used to\n"
    .string "cut down thin trees\n"
    .string "and grass.$"

kGustMoveDescription:: @ 8482C16
    .string "Strikes the foe\n"
    .string "with a gust of wind\n"
    .string "whipped up by\n"
    .string "wings.$"

kWingAttackMoveDescription:: @ 8482C4F
    .string "The foe is struck\n"
    .string "with large, imposing\n"
    .string "wings spread wide.$"

kWhirlwindMoveDescription:: @ 8482C89
    .string "The foe is made to\n"
    .string "switch out with an\n"
    .string "ally. In the wild,\n"
    .string "the battle ends.$"

kFlyMoveDescription:: @ 8482CD3
    .string "A 2-turn move that\n"
    .string "hits on the 2nd\n"
    .string "turn. Use it to fly\n"
    .string "to any known town.$"

kBindMoveDescription:: @ 8482D1D
    .string "A long body or\n"
    .string "tentacles are used\n"
    .string "to bind the foe for\n"
    .string "two to five turns.$"

kSlamMoveDescription:: @ 8482D66
    .string "The foe is struck\n"
    .string "with a long tail,\n"
    .string "vines, etc.$"

kVineWhipMoveDescription:: @ 8482D96
    .string "The foe is struck\n"
    .string "with slender, whip-\n"
    .string "like vines.$"

kStompMoveDescription:: @ 8482DC8
    .string "The foe is stomped\n"
    .string "with a big foot.\n"
    .string "It may make the\n"
    .string "foe flinch.$"

kDoubleKickMoveDescription:: @ 8482E08
    .string "Two legs are used\n"
    .string "to quickly kick the\n"
    .string "foe twice in one\n"
    .string "turn.$"

kMegaKickMoveDescription:: @ 8482E45
    .string "The foe is attacked\n"
    .string "by a kick fired\n"
    .string "with muscle-packed\n"
    .string "power.$"

kJumpKickMoveDescription:: @ 8482E83
    .string "The user jumps up\n"
    .string "high, then kicks.\n"
    .string "If it misses, the\n"
    .string "user hurts itself.$"

kRollingKickMoveDescription:: @ 8482ECC
    .string "A quick kick from a\n"
    .string "rolling spin.\n"
    .string "It may make the\n"
    .string "foe flinch.$"

kSandAttackMoveDescription:: @ 8482F0A
    .string "A lot of sand is\n"
    .string "hurled in the foe’s\n"
    .string "face, reducing its\n"
    .string "accuracy.$"

kHeadbuttMoveDescription:: @ 8482F4C
    .string "The user sticks its\n"
    .string "head out and rams.\n"
    .string "It may make the\n"
    .string "foe flinch.$"

kHornAttackMoveDescription:: @ 8482F8F
    .string "The foe is jabbed\n"
    .string "with a sharply\n"
    .string "pointed horn to\n"
    .string "inflict damage.$"

kFuryAttackMoveDescription:: @ 8482FD0
    .string "The foe is jabbed\n"
    .string "repeatedly with a\n"
    .string "horn or beak two to\n"
    .string "five times.$"

kHornDrillMoveDescription:: @ 8483014
    .string "The horn is rotated\n"
    .string "like a drill to ram.\n"
    .string "The foe will faint\n"
    .string "if it hits.$"

kTackleMoveDescription:: @ 848305C
    .string "A physical attack\n"
    .string "in which the user\n"
    .string "charges, full body,\n"
    .string "into the foe.$"

kBodySlamMoveDescription:: @ 84830A2
    .string "The user drops its\n"
    .string "full body on the\n"
    .string "foe. It may leave\n"
    .string "the foe paralyzed.$"

kWrapMoveDescription:: @ 84830EB
    .string "A long body or\n"
    .string "vines are used to\n"
    .string "wrap the foe for\n"
    .string "two to five turns.$"

kTakeDownMoveDescription:: @ 8483130
    .string "A reckless, full-\n"
    .string "body charge attack\n"
    .string "that also hurts the\n"
    .string "user a little.$"

kThrashMoveDescription:: @ 8483178
    .string "The user rampages\n"
    .string "about for two to\n"
    .string "three turns, then\n"
    .string "becomes confused.$"

kDoubleEdgeMoveDescription:: @ 84831BF
    .string "A reckless, life-\n"
    .string "risking tackle that\n"
    .string "also hurts the user\n"
    .string "a little.$"

kTailWhipMoveDescription:: @ 8483203
    .string "The user wags its\n"
    .string "tail cutely, making\n"
    .string "the foe lower its\n"
    .string "DEFENSE stat.$"

kPoisonStingMoveDescription:: @ 8483249
    .string "The foe is stabbed\n"
    .string "with a toxic barb,\n"
    .string "etc. It may poison\n"
    .string "the foe.$"

kTwineedleMoveDescription:: @ 848328B
    .string "The foe is stabbed\n"
    .string "twice with foreleg\n"
    .string "stingers. It may\n"
    .string "poison the foe.$"

kPinMissileMoveDescription:: @ 84832D2
    .string "Sharp pins are shot\n"
    .string "at the foe and hit\n"
    .string "two to five times\n"
    .string "at once.$"

kLeerMoveDescription:: @ 8483314
    .string "The foe is given an\n"
    .string "intimidating look\n"
    .string "that lowers its\n"
    .string "DEFENSE stat.$"

kBiteMoveDescription:: @ 8483358
    .string "The user bites with\n"
    .string "vicious fangs.\n"
    .string "It may make the\n"
    .string "foe flinch.$"

kGrowlMoveDescription:: @ 8483397
    .string "The user growls in\n"
    .string "a cute way, making\n"
    .string "the foe lower its\n"
    .string "ATTACK stat.$"

kRoarMoveDescription:: @ 84833DC
    .string "The foe is made to\n"
    .string "switch out with an\n"
    .string "ally. In the wild,\n"
    .string "the battle ends.$"

kSingMoveDescription:: @ 8483426
    .string "A soothing song\n"
    .string "in a calming voice\n"
    .string "lulls the foe into\n"
    .string "a deep slumber.$"

kSupersonicMoveDescription:: @ 848346C
    .string "The user generates\n"
    .string "odd sound waves.\n"
    .string "It may confuse the\n"
    .string "foe.$"

kSonicBoomMoveDescription:: @ 84834A8
    .string "The foe is hit with\n"
    .string "a shock wave that\n"
    .string "always inflicts 20-\n"
    .string "HP damage.$"

kDisableMoveDescription:: @ 84834ED
    .string "For a few turns,\n"
    .string "it prevents the foe\n"
    .string "from using the move\n"
    .string "it last used.$"

kAcidMoveDescription:: @ 8483534
    .string "The foe is sprayed\n"
    .string "with a harsh, hide-\n"
    .string "melting acid that\n"
    .string "may lower DEFENSE.$"

kEmberMoveDescription:: @ 8483580
    .string "The foe is attacked\n"
    .string "with small flames.\n"
    .string "The foe may suffer\n"
    .string "a burn.$"

kFlamethrowerMoveDescription:: @ 84835C2
    .string "The foe is scorched\n"
    .string "with intense flames.\n"
    .string "The foe may suffer\n"
    .string "a burn.$"

kMistMoveDescription:: @ 8483606
    .string "The ally party is\n"
    .string "protected by a\n"
    .string "mist that prevents\n"
    .string "stat reductions.$"

kWaterGunMoveDescription:: @ 848364B
    .string "The foe is struck\n"
    .string "with a lot of water\n"
    .string "expelled forcibly\n"
    .string "from the mouth.$"

kHydroPumpMoveDescription:: @ 8483693
    .string "A high volume of\n"
    .string "water is blasted at\n"
    .string "the foe under great\n"
    .string "pressure.$"

kSurfMoveDescription:: @ 84836D6
    .string "A big wave crashes\n"
    .string "down on the foe.\n"
    .string "Can also be used\n"
    .string "for crossing water.$"

kIceBeamMoveDescription:: @ 848371F
    .string "The foe is struck\n"
    .string "with an icy beam.\n"
    .string "It may freeze the\n"
    .string "foe solid.$"

kBlizzardMoveDescription:: @ 8483760
    .string "The foe is blasted\n"
    .string "with a blizzard.\n"
    .string "It may freeze the\n"
    .string "foe solid.$"

kPsybeamMoveDescription:: @ 84837A1
    .string "A peculiar ray is\n"
    .string "shot at the foe.\n"
    .string "It may leave the\n"
    .string "foe confused.$"

kBubbleBeamMoveDescription:: @ 84837E3
    .string "A spray of bubbles\n"
    .string "strikes the foe.\n"
    .string "It may lower the\n"
    .string "foe’s SPEED stat.$"

kAuroraBeamMoveDescription:: @ 848382A
    .string "A rainbow-colored\n"
    .string "attack beam.\n"
    .string "It may lower the\n"
    .string "foe’s ATTACK stat.$"

kHyperBeamMoveDescription:: @ 848386D
    .string "A severely damaging\n"
    .string "attack that makes\n"
    .string "the user rest on\n"
    .string "the next turn.$"

kPeckMoveDescription:: @ 84838B3
    .string "The foe is jabbed\n"
    .string "with a sharply\n"
    .string "pointed beak or\n"
    .string "horn.$"

kDrillPeckMoveDescription:: @ 84838EA
    .string "A corkscrewing\n"
    .string "attack with the\n"
    .string "sharp beak acting\n"
    .string "as a drill.$"

kSubmissionMoveDescription:: @ 8483927
    .string "A reckless, full-\n"
    .string "body throw attack\n"
    .string "that also hurts the\n"
    .string "user a little.$"

kLowKickMoveDescription:: @ 848396E
    .string "A low, tripping kick\n"
    .string "that inflicts more\n"
    .string "damage on heavier\n"
    .string "foes.$"

kCounterMoveDescription:: @ 84839AE
    .string "A retaliation move\n"
    .string "that counters any\n"
    .string "physical hit with\n"
    .string "double the damage.$"

kSeismicTossMoveDescription:: @ 84839F8
    .string "A gravity-fed throw\n"
    .string "that causes damage\n"
    .string "matching the user’s\n"
    .string "level.$"

kStrengthMoveDescription:: @ 8483A3A
    .string "The foe is slugged\n"
    .string "at maximum power.\n"
    .string "Can also be used\n"
    .string "to move boulders.$"

kAbsorbMoveDescription:: @ 8483A82
    .string "An attack that\n"
    .string "absorbs half the\n"
    .string "damage it inflicted\n"
    .string "to restore HP.$"

kMegaDrainMoveDescription:: @ 8483AC5
    .string "A tough attack that\n"
    .string "drains half the\n"
    .string "damage it inflicted\n"
    .string "to restore HP.$"

kLeechSeedMoveDescription:: @ 8483B0C
    .string "A seed is planted\n"
    .string "on the foe to steal\n"
    .string "some HP for the \n"
    .string "user on every turn.$"

kGrowthMoveDescription:: @ 8483B57
    .string "The user’s body is\n"
    .string "forced to grow,\n"
    .string "raising the SP.\n"
    .string "ATK stat.$"

kRazorLeafMoveDescription:: @ 8483B94
    .string "The foe is hit with\n"
    .string "a cutting leaf.\n"
    .string "It has a high\n"
    .string "critical-hit ratio.$"

kSolarBeamMoveDescription:: @ 8483BDA
    .string "A 2-turn move that\n"
    .string "blasts the foe with\n"
    .string "absorbed energy in\n"
    .string "the 2nd turn.$"

kPoisonPowderMoveDescription:: @ 8483C22
    .string "A cloud of toxic\n"
    .string "dust is scattered.\n"
    .string "It may poison the\n"
    .string "foe.$"

kStunSporeMoveDescription:: @ 8483C5D
    .string "Paralyzing dust is\n"
    .string "scattered wildly.\n"
    .string "It may paralyze\n"
    .string "the foe.$"

kSleepPowderMoveDescription:: @ 8483C9B
    .string "A sleep-inducing\n"
    .string "dust is scattered\n"
    .string "in high volume\n"
    .string "around a foe.$"

kPetalDanceMoveDescription:: @ 8483CDB
    .string "The user attacks\n"
    .string "with petals for two\n"
    .string "to three turns,\n"
    .string "then gets confused.$"

kStringShotMoveDescription:: @ 8483D24
    .string "The foe is bound\n"
    .string "with strings shot\n"
    .string "from the mouth to\n"
    .string "reduce its SPEED.$"

kDragonRageMoveDescription:: @ 8483D6B
    .string "The foe is hit with\n"
    .string "a shock wave that\n"
    .string "always inflicts 40-\n"
    .string "HP damage.$"

kFireSpinMoveDescription:: @ 8483DB0
    .string "The foe is trapped\n"
    .string "in an intense spiral\n"
    .string "of fire that rages\n"
    .string "two to five turns.$"

kThunderShockMoveDescription:: @ 8483DFE
    .string "An electric shock\n"
    .string "attack that may\n"
    .string "also leave the foe\n"
    .string "paralyzed.$"

kThunderboltMoveDescription:: @ 8483E3E
    .string "A strong electrical\n"
    .string "attack that may\n"
    .string "also leave the foe\n"
    .string "paralyzed.$"

kThunderWaveMoveDescription:: @ 8483E80
    .string "A weak electric\n"
    .string "shock that is sure\n"
    .string "to cause paralysis\n"
    .string "if it hits.$"

kThunderMoveDescription:: @ 8483EC2
    .string "A brutal lightning\n"
    .string "attack that may\n"
    .string "also leave the foe\n"
    .string "paralyzed.$"

kRockThrowMoveDescription:: @ 8483F03
    .string "The foe is attacked\n"
    .string "with a shower of\n"
    .string "small, easily\n"
    .string "thrown rocks.$"

kEarthquakeMoveDescription:: @ 8483F44
    .string "An earthquake that\n"
    .string "strikes all POKéMON\n"
    .string "in battle excluding\n"
    .string "the user.$"

kFissureMoveDescription:: @ 8483F89
    .string "The foe is dropped\n"
    .string "into a fissure.\n"
    .string "The foe faints if it\n"
    .string "hits.$"

kDigMoveDescription:: @ 8483FC7
    .string "An attack that hits\n"
    .string "on the 2nd turn.\n"
    .string "Can also be used\n"
    .string "to exit dungeons.$"

kToxicMoveDescription:: @ 848400F
    .string "A move that badly\n"
    .string "poisons the foe.\n"
    .string "Its poison damage\n"
    .string "worsens every turn.$"

kConfusionMoveDescription:: @ 8484058
    .string "A weak telekinetic\n"
    .string "attack that may\n"
    .string "also leave the foe\n"
    .string "confused.$"

kPsychicMoveDescription:: @ 8484098
    .string "A strong telekinetic\n"
    .string "attack. It may also\n"
    .string "lower the foe’s\n"
    .string "SP. DEF stat.$"

kHypnosisMoveDescription:: @ 84840DF
    .string "Hypnotic suggestion\n"
    .string "is used to make the\n"
    .string "foe fall into a\n"
    .string "deep sleep.$"

kMeditateMoveDescription:: @ 8484123
    .string "The user meditates\n"
    .string "to awaken its power\n"
    .string "and raise its\n"
    .string "ATTACK stat.$"

kAgilityMoveDescription:: @ 8484165
    .string "The user relaxes\n"
    .string "and lightens its\n"
    .string "body to sharply\n"
    .string "boost its SPEED.$"

kQuickAttackMoveDescription:: @ 84841A8
    .string "An almost invisibly\n"
    .string "fast attack that\n"
    .string "is certain to strike\n"
    .string "first.$"

kRageMoveDescription:: @ 84841E9
    .string "An attack that\n"
    .string "becomes stronger\n"
    .string "each time the user\n"
    .string "is hit in battle.$"

kTeleportMoveDescription:: @ 848422E
    .string "Use it to flee from\n"
    .string "any wild POKéMON.\n"
    .string "Also warps to the\n"
    .string "last POKé CENTER.$"

kNightShadeMoveDescription:: @ 8484278
    .string "An attack with a\n"
    .string "mirage that inflicts\n"
    .string "damage matching\n"
    .string "the user’s level.$"

kMimicMoveDescription:: @ 84842C0
    .string "The user copies the\n"
    .string "move last used by\n"
    .string "the foe for the\n"
    .string "rest of the battle.$"

kScreechMoveDescription:: @ 848430A
    .string "An ear-splitting\n"
    .string "screech is emitted\n"
    .string "to sharply reduce\n"
    .string "the foe’s DEFENSE.$"

kDoubleTeamMoveDescription:: @ 8484353
    .string "The user creates\n"
    .string "illusory copies of\n"
    .string "itself to raise its\n"
    .string "evasiveness.$"

kRecoverMoveDescription:: @ 8484398
    .string "A self-healing move\n"
    .string "that restores HP by\n"
    .string "up to half of the\n"
    .string "user’s maximum HP.$"

kHardenMoveDescription:: @ 84843E5
    .string "The user stiffens\n"
    .string "all the muscles in\n"
    .string "its body to raise\n"
    .string "its DEFENSE stat.$"

kMinimizeMoveDescription:: @ 848442E
    .string "The user compresses\n"
    .string "all the cells in its\n"
    .string "body to raise its\n"
    .string "evasiveness.$"

kSmokescreenMoveDescription:: @ 8484476
    .string "An obscuring cloud\n"
    .string "of smoke or ink\n"
    .string "reduces the foe’s\n"
    .string "accuracy.$"

kConfuseRayMoveDescription:: @ 84844B5
    .string "The foe is exposed\n"
    .string "to a sinister ray\n"
    .string "that triggers\n"
    .string "confusion.$"

kWithdrawMoveDescription:: @ 84844F3
    .string "The user withdraws\n"
    .string "its body in its hard\n"
    .string "shell, raising its\n"
    .string "DEFENSE stat.$"

kDefenseCurlMoveDescription:: @ 848453C
    .string "The user curls up\n"
    .string "to conceal weak\n"
    .string "spots and raise its\n"
    .string "DEFENSE stat.$"

kBarrierMoveDescription:: @ 8484580
    .string "The user creates a\n"
    .string "sturdy wall that\n"
    .string "sharply raises its\n"
    .string "DEFENSE stat.$"

kLightScreenMoveDescription:: @ 84845C5
    .string "A wall of light\n"
    .string "cuts damage from\n"
    .string "SP. ATK attacks\n"
    .string "for five turns.$"

kHazeMoveDescription:: @ 8484606
    .string "Eliminates all stat\n"
    .string "changes among all\n"
    .string "POKéMON engaged in\n"
    .string "battle.$"

kReflectMoveDescription:: @ 8484647
    .string "A wall of light\n"
    .string "cuts damage from\n"
    .string "physical attacks\n"
    .string "for five turns.$"

kFocusEnergyMoveDescription:: @ 8484689
    .string "The user takes a\n"
    .string "deep breath and\n"
    .string "focuses to raise its\n"
    .string "critical-hit ratio.$"

kBideMoveDescription:: @ 84846D3
    .string "The user endures\n"
    .string "attacks for two\n"
    .string "turns, then strikes\n"
    .string "back double.$"

kMetronomeMoveDescription:: @ 8484715
    .string "Waggles a finger\n"
    .string "and stimulates the\n"
    .string "brain into using any\n"
    .string "move at random.$"

kMirrorMoveMoveDescription:: @ 848475E
    .string "The user counters\n"
    .string "the move last used\n"
    .string "by the foe with the\n"
    .string "same move.$"

kSelfDestructMoveDescription:: @ 84847A2
    .string "The user blows up\n"
    .string "to inflict severe\n"
    .string "damage, even\n"
    .string "making itself faint.$"

kEggBombMoveDescription:: @ 84847E8
    .string "A large egg is\n"
    .string "hurled with great\n"
    .string "force at the foe to\n"
    .string "inflict damage.$"

kLickMoveDescription:: @ 848482D
    .string "The foe is licked\n"
    .string "and hit with a long\n"
    .string "tongue. It may\n"
    .string "also paralyze.$"

kSmogMoveDescription:: @ 8484871
    .string "The foe is attacked\n"
    .string "with exhaust gases.\n"
    .string "It may also poison\n"
    .string "the foe.$"

kSludgeMoveDescription:: @ 84848B5
    .string "Toxic sludge is\n"
    .string "hurled at the foe.\n"
    .string "It may poison the\n"
    .string "target.$"

kBoneClubMoveDescription:: @ 84848F2
    .string "The foe is clubbed\n"
    .string "with a bone held in\n"
    .string "hand. It may make\n"
    .string "the foe flinch.$"

kFireBlastMoveDescription:: @ 848493B
    .string "The foe is hit with\n"
    .string "an intense flame.\n"
    .string "It may leave the\n"
    .string "target with a burn.$"

kWaterfallMoveDescription:: @ 8484986
    .string "A powerful charge\n"
    .string "attack. It can also\n"
    .string "be used to climb\n"
    .string "a waterfall.$"

kClampMoveDescription:: @ 84849CA
    .string "The foe is clamped\n"
    .string "and squeezed by\n"
    .string "the user’s shell for\n"
    .string "two to five turns.$"

kSwiftMoveDescription:: @ 8484A15
    .string "Star-shaped rays\n"
    .string "that never miss are\n"
    .string "fired at all foes in\n"
    .string "battle.$"

kSkullBashMoveDescription:: @ 8484A57
    .string "The user raises its\n"
    .string "DEFENSE in the 1st\n"
    .string "turn, then attacks\n"
    .string "in the 2nd turn.$"

kSpikeCannonMoveDescription:: @ 8484AA2
    .string "Sharp spikes are\n"
    .string "fired at the foe to\n"
    .string "strike two to five\n"
    .string "times.$"

kConstrictMoveDescription:: @ 8484AE1
    .string "The foe is attacked\n"
    .string "with long tentacles\n"
    .string "or vines. It may\n"
    .string "lower SPEED.$"

kAmnesiaMoveDescription:: @ 8484B27
    .string "Forgets about\n"
    .string "something and\n"
    .string "sharply raises\n"
    .string "SP. DEF.$"

kKinesisMoveDescription:: @ 8484B5B
    .string "The user distracts\n"
    .string "the foe by bending\n"
    .string "a spoon. It may\n"
    .string "lower accuracy.$"

kSoftBoiledMoveDescription:: @ 8484BA1
    .string "Heals the user by\n"
    .string "up to half its full\n"
    .string "HP. It can be used\n"
    .string "to heal an ally.$"

kHiJumpKickMoveDescription:: @ 8484BEB
    .string "A strong jumping\n"
    .string "knee kick. If it\n"
    .string "misses, the user is\n"
    .string "hurt.$"

kGlareMoveDescription:: @ 8484C27
    .string "The user intimidates\n"
    .string "the foe with the\n"
    .string "design on its belly\n"
    .string "to cause paralysis.$"

kDreamEaterMoveDescription:: @ 8484C75
    .string "Absorbs half the\n"
    .string "damage it inflicted\n"
    .string "on a sleeping foe\n"
    .string "to restore HP.$"

kPoisonGasMoveDescription:: @ 8484CBB
    .string "The foe is sprayed\n"
    .string "with a cloud of\n"
    .string "toxic gas that may\n"
    .string "poison the foe.$"

kBarrageMoveDescription:: @ 8484D01
    .string "Round objects are\n"
    .string "hurled at the foe\n"
    .string "to strike two to\n"
    .string "five times.$"

kLeechLifeMoveDescription:: @ 8484D42
    .string "An attack that\n"
    .string "absorbs half the\n"
    .string "damage it inflicted\n"
    .string "to restore HP.$"

kLovelyKissMoveDescription:: @ 8484D85
    .string "The user forces a\n"
    .string "kiss on the foe\n"
    .string "with a scary face\n"
    .string "that induces sleep.$"

kSkyAttackMoveDescription:: @ 8484DCD
    .string "A 2nd-turn attack\n"
    .string "move with a high\n"
    .string "critical-hit ratio.\n"
    .string "The foe may flinch.$"

kTransformMoveDescription:: @ 8484E18
    .string "The user transforms\n"
    .string "into a copy of the\n"
    .string "foe with even the\n"
    .string "same move set.$"

kBubbleMoveDescription:: @ 8484E60
    .string "A spray of bubbles\n"
    .string "hits the foe.\n"
    .string "It may lower the\n"
    .string "foe’s SPEED stat.$"

kDizzyPunchMoveDescription:: @ 8484EA4
    .string "The foe is hit with\n"
    .string "a rhythmic punch\n"
    .string "that may leave it\n"
    .string "confused.$"

kSporeMoveDescription:: @ 8484EE5
    .string "The user scatters\n"
    .string "bursts of fine\n"
    .string "spores that induce\n"
    .string "sleep.$"

kFlashMoveDescription:: @ 8484F20
    .string "A blast of light\n"
    .string "that cuts the foe’s\n"
    .string "accuracy. It also\n"
    .string "illuminates caves.$"

kPsywaveMoveDescription:: @ 8484F6A
    .string "The foe is attacked\n"
    .string "with an odd, hot\n"
    .string "energy wave that\n"
    .string "varies in intensity.$"

kSplashMoveDescription:: @ 8484FB5
    .string "The user just flops\n"
    .string "and splashes around\n"
    .string "without having any\n"
    .string "effect.$"

kAcidArmorMoveDescription:: @ 8484FF8
    .string "The user alters its\n"
    .string "cells to liquefy\n"
    .string "itself and sharply\n"
    .string "raise DEFENSE.$"

kCrabhammerMoveDescription:: @ 848503F
    .string "A large pincer is\n"
    .string "used to hammer the\n"
    .string "foe. It has a high\n"
    .string "critical-hit ratio.$"

kExplosionMoveDescription:: @ 848508B
    .string "The user explodes\n"
    .string "to inflict terrible\n"
    .string "damage even while\n"
    .string "fainting itself.$"

kFurySwipesMoveDescription:: @ 84850D4
    .string "The foe is raked\n"
    .string "with sharp claws or\n"
    .string "scythes two to five\n"
    .string "times.$"

kBonemerangMoveDescription:: @ 8485114
    .string "The user throws a\n"
    .string "bone that hits the\n"
    .string "foe once, then once\n"
    .string "again on return.$"

kRestMoveDescription:: @ 848515E
    .string "The user sleeps for\n"
    .string "two turns to fully\n"
    .string "restore HP and heal\n"
    .string "any status problem.$"

kRockSlideMoveDescription:: @ 84851AD
    .string "Large boulders are\n"
    .string "hurled at the foe.\n"
    .string "It may make the\n"
    .string "foe flinch.$"

kHyperFangMoveDescription:: @ 84851EF
    .string "The foe is attacked\n"
    .string "with sharp fangs.\n"
    .string "It may make the\n"
    .string "foe flinch.$"

kSharpenMoveDescription:: @ 8485231
    .string "The user reduces\n"
    .string "its polygon count\n"
    .string "to sharpen edges\n"
    .string "and raise ATTACK.$"

kConversionMoveDescription:: @ 8485277
    .string "The user changes\n"
    .string "its type to match\n"
    .string "the type of one of\n"
    .string "its moves.$"

kTriAttackMoveDescription:: @ 84852B8
    .string "A simultaneous\n"
    .string "3-beam attack that\n"
    .string "may paralyze, burn,\n"
    .string "or freeze the foe.$"

kSuperFangMoveDescription:: @ 8485301
    .string "The user attacks\n"
    .string "with sharp fangs\n"
    .string "and halves the\n"
    .string "foe’s HP.$"

kSlashMoveDescription:: @ 848533C
    .string "The foe is slashed\n"
    .string "with claws, etc.\n"
    .string "It has a high\n"
    .string "critical-hit ratio.$"

kSubstituteMoveDescription:: @ 8485382
    .string "The user creates a\n"
    .string "decoy using one-\n"
    .string "quarter of its full\n"
    .string "HP.$"

kStruggleMoveDescription:: @ 84853BE
    .string "An attack that is\n"
    .string "used only if there\n"
    .string "is no PP. It also\n"
    .string "hurts the user.$"

kSketchMoveDescription:: @ 8485405
    .string "This move copies\n"
    .string "the move last used\n"
    .string "by the foe, then\n"
    .string "disappears.$"

kTripleKickMoveDescription:: @ 8485446
    .string "A 3-kick attack\n"
    .string "that becomes more\n"
    .string "powerful with each\n"
    .string "successive hit.$"

kThiefMoveDescription:: @ 848548B
    .string "An attack that may\n"
    .string "take the foe’s held\n"
    .string "item if the user\n"
    .string "isn’t holding one.$"

kSpiderWebMoveDescription:: @ 84854D6
    .string "Ensnares the foe \n"
    .string "with sticky string\n"
    .string "so it doesn’t flee\n"
    .string "or switch out.$"

kMindReaderMoveDescription:: @ 848551D
    .string "The user predicts\n"
    .string "the foe’s action to\n"
    .string "ensure its next\n"
    .string "attack hits.$"

kNightmareMoveDescription:: @ 8485560
    .string "A sleeping foe is\n"
    .string "shown a nightmare\n"
    .string "that inflicts some\n"
    .string "damage every turn.$"

kFlameWheelMoveDescription:: @ 84855AA
    .string "The user makes a\n"
    .string "fiery charge at the\n"
    .string "foe. It may cause\n"
    .string "a burn.$"

kSnoreMoveDescription:: @ 84855E9
    .string "An attack that can\n"
    .string "be used only while\n"
    .string "asleep. It may\n"
    .string "cause flinching.$"

kCurseMoveDescription:: @ 848562F
    .string "A move that works\n"
    .string "differently for the\n"
    .string "GHOST-type and all\n"
    .string "the other types.$"

kFlailMoveDescription:: @ 8485679
    .string "A desperate attack\n"
    .string "that becomes more\n"
    .string "powerful the less\n"
    .string "HP the user has.$"

kConversion2MoveDescription:: @ 84856C1
    .string "The user changes\n"
    .string "type to make itself\n"
    .string "resistant to the\n"
    .string "last attack it took.$"

kAeroblastMoveDescription:: @ 848570C
    .string "A vortex of air is\n"
    .string "shot at the foe.\n"
    .string "It has a high\n"
    .string "critical-hit ratio.$"

kCottonSporeMoveDescription:: @ 8485752
    .string "Cotton-like spores\n"
    .string "cling to the foe,\n"
    .string "sharply reducing\n"
    .string "its SPEED stat.$"

kReversalMoveDescription:: @ 8485798
    .string "An all-out attack\n"
    .string "that becomes more\n"
    .string "powerful the less\n"
    .string "HP the user has.$"

kSpiteMoveDescription:: @ 84857DF
    .string "A move that cuts\n"
    .string "2 to 5 PP from the\n"
    .string "move last used by\n"
    .string "the foe.$"

kPowderSnowMoveDescription:: @ 848581E
    .string "Blasts the foe with\n"
    .string "a snowy gust.\n"
    .string "It may cause\n"
    .string "freezing.$"

kProtectMoveDescription:: @ 8485857
    .string "Enables the user to\n"
    .string "evade all attacks.\n"
    .string "It may fail if used\n"
    .string "in succession.$"

kMachPunchMoveDescription:: @ 84858A1
    .string "A punch thrown at\n"
    .string "blinding speed.\n"
    .string "It is certain to\n"
    .string "strike first.$"

kScaryFaceMoveDescription:: @ 84858E2
    .string "Frightens the foe\n"
    .string "with a scary face\n"
    .string "to sharply reduce\n"
    .string "its SPEED.$"

kFaintAttackMoveDescription:: @ 8485923
    .string "The user draws up\n"
    .string "close to the foe\n"
    .string "disarmingly, then\n"
    .string "hits without fail.$"

kSweetKissMoveDescription:: @ 848596B
    .string "The user kisses\n"
    .string "the foe with sweet\n"
    .string "cuteness that\n"
    .string "causes confusion.$"

kBellyDrumMoveDescription:: @ 84859AE
    .string "The user maximizes\n"
    .string "its ATTACK stat at\n"
    .string "the cost of half\n"
    .string "its full HP.$"

kSludgeBombMoveDescription:: @ 84859F2
    .string "Filthy sludge is\n"
    .string "hurled at the foe.\n"
    .string "It may poison the\n"
    .string "target.$"

kMudSlapMoveDescription:: @ 8485A30
    .string "Mud is hurled in\n"
    .string "the foe’s face to\n"
    .string "inflict damage and\n"
    .string "lower its accuracy.$"

kOctazookaMoveDescription:: @ 8485A7A
    .string "Ink is blasted in\n"
    .string "the foe’s face or\n"
    .string "eyes to damage and\n"
    .string "lower accuracy.$"

kSpikesMoveDescription:: @ 8485AC1
    .string "A trap of spikes is\n"
    .string "laid around the\n"
    .string "foe’s party to hurt\n"
    .string "foes switching in.$"

kZapCannonMoveDescription:: @ 8485B0C
    .string "An electric blast is\n"
    .string "fired like a cannon\n"
    .string "to inflict damage\n"
    .string "and paralyze.$"

kForesightMoveDescription:: @ 8485B55
    .string "Completely negates\n"
    .string "the foe’s efforts to\n"
    .string "heighten its ability\n"
    .string "to evade.$"

kDestinyBondMoveDescription:: @ 8485B9C
    .string "If the user faints,\n"
    .string "the foe delivering\n"
    .string "the final hit also\n"
    .string "faints.$"

kPerishSongMoveDescription:: @ 8485BDE
    .string "Any battler that\n"
    .string "hears this faints\n"
    .string "in three turns\n"
    .string "unless it switches.$"

kIcyWindMoveDescription:: @ 8485C24
    .string "A chilling wind is\n"
    .string "used to attack.\n"
    .string "It also lowers the\n"
    .string "SPEED stat.$"

kDetectMoveDescription:: @ 8485C66
    .string "Enables the user to\n"
    .string "evade all attacks.\n"
    .string "It may fail if used\n"
    .string "in succession.$"

kBoneRushMoveDescription:: @ 8485CB0
    .string "The user strikes\n"
    .string "the foe with a bone\n"
    .string "in hand two to five\n"
    .string "times.$"

kLockOnMoveDescription:: @ 8485CF0
    .string "The user locks on\n"
    .string "to the foe, making\n"
    .string "the next move sure\n"
    .string "to hit.$"

kOutrageMoveDescription:: @ 8485D30
    .string "The user thrashes\n"
    .string "about for two to\n"
    .string "three turns, then\n"
    .string "becomes confused.$"

kSandstormMoveDescription:: @ 8485D77
    .string "A 5-turn sandstorm\n"
    .string "that damages all\n"
    .string "types except ROCK,\n"
    .string "GROUND, and STEEL.$"

kGigaDrainMoveDescription:: @ 8485DC1
    .string "A harsh attack that\n"
    .string "absorbs half the\n"
    .string "damage it inflicted\n"
    .string "to restore HP.$"

kEndureMoveDescription:: @ 8485E09
    .string "The user endures\n"
    .string "any hit with 1 HP\n"
    .string "left. It may fail if\n"
    .string "used in succession.$"

kCharmMoveDescription:: @ 8485E55
    .string "The foe is charmed\n"
    .string "by the user’s cute\n"
    .string "appeals, sharply\n"
    .string "cutting its ATTACK.$"

kRolloutMoveDescription:: @ 8485EA0
    .string "A 5-turn rolling\n"
    .string "attack that becomes\n"
    .string "stronger each time\n"
    .string "it hits.$"

kFalseSwipeMoveDescription:: @ 8485EE1
    .string "A restrained attack\n"
    .string "that always leaves\n"
    .string "the foe with at\n"
    .string "least 1 HP.$"

kSwaggerMoveDescription:: @ 8485F24
    .string "A move that makes\n"
    .string "the foe confused,\n"
    .string "but also sharply\n"
    .string "raises its ATTACK.$"

kMilkDrinkMoveDescription:: @ 8485F6C
    .string "Heals the user by\n"
    .string "up to half its full\n"
    .string "HP. It can be used\n"
    .string "to heal an ally.$"

kSparkMoveDescription:: @ 8485FB6
    .string "An electrically\n"
    .string "charged tackle that\n"
    .string "may also paralyze\n"
    .string "the foe.$"

kFuryCutterMoveDescription:: @ 8485FF5
    .string "An attack that\n"
    .string "grows stronger on\n"
    .string "each successive\n"
    .string "hit.$"

kSteelWingMoveDescription:: @ 848602B
    .string "The foe is hit with\n"
    .string "wings of steel.\n"
    .string "It may also raise\n"
    .string "the user’s DEFENSE.$"

kMeanLookMoveDescription:: @ 8486075
    .string "The foe is fixed\n"
    .string "with a mean look\n"
    .string "that prevents it\n"
    .string "from escaping.$"

kAttractMoveDescription:: @ 84860B7
    .string "If it is the other\n"
    .string "gender, the foe is\n"
    .string "made infatuated and\n"
    .string "unlikely to attack.$"

kSleepTalkMoveDescription:: @ 8486105
    .string "While asleep, the\n"
    .string "user randomly uses\n"
    .string "one of the moves it\n"
    .string "knows.$"

kHealBellMoveDescription:: @ 8486145
    .string "A soothing bell\n"
    .string "chimes to heal the\n"
    .string "status problems of\n"
    .string "all allies.$"

kReturnMoveDescription:: @ 8486187
    .string "This attack move\n"
    .string "grows more powerful\n"
    .string "the more the user\n"
    .string "likes its TRAINER.$"

kPresentMoveDescription:: @ 84861D1
    .string "The foe is given a\n"
    .string "booby-trapped gift.\n"
    .string "It restores HP\n"
    .string "sometimes, however.$"

kFrustrationMoveDescription:: @ 848621B
    .string "This attack move\n"
    .string "grows more powerful\n"
    .string "the less the user\n"
    .string "likes its TRAINER.$"

kSafeguardMoveDescription:: @ 8486265
    .string "It protects the\n"
    .string "user’s party from\n"
    .string "all status problems\n"
    .string "for five turns.$"

kPainSplitMoveDescription:: @ 84862AB
    .string "The user adds its\n"
    .string "HP to the foe’s HP,\n"
    .string "then equally shares\n"
    .string "the total HP.$"

kSacredFireMoveDescription:: @ 84862F3
    .string "A mystical and\n"
    .string "powerful fire\n"
    .string "attack that may\n"
    .string "inflict a burn.$"

kMagnitudeMoveDescription:: @ 8486330
    .string "A ground-shaking\n"
    .string "attack against all\n"
    .string "standing POKéMON.\n"
    .string "Its power varies.$"

kDynamicPunchMoveDescription:: @ 8486378
    .string "The foe is punched\n"
    .string "with the user’s full\n"
    .string "power. It confuses\n"
    .string "the foe if it hits.$"

kMegahornMoveDescription:: @ 84863C7
    .string "A brutal ramming\n"
    .string "attack delivered\n"
    .string "with a tough and\n"
    .string "impressive horn.$"

kDragonBreathMoveDescription:: @ 848640B
    .string "The foe is hit with\n"
    .string "an incredible blast\n"
    .string "of breath that may\n"
    .string "also paralyze.$"

kBatonPassMoveDescription:: @ 8486455
    .string "The user switches\n"
    .string "out, passing along\n"
    .string "any stat changes\n"
    .string "to the new battler.$"

kEncoreMoveDescription:: @ 848649F
    .string "Makes the foe use\n"
    .string "the move it last\n"
    .string "used repeatedly for\n"
    .string "two to six turns.$"

kPursuitMoveDescription:: @ 84864E8
    .string "An attack move that\n"
    .string "works especially\n"
    .string "well on a foe that\n"
    .string "is switching out.$"

kRapidSpinMoveDescription:: @ 8486532
    .string "An attack that\n"
    .string "frees the user from\n"
    .string "BIND, WRAP, LEECH\n"
    .string "SEED, and SPIKES.$"

kSweetScentMoveDescription:: @ 8486579
    .string "Allures the foe to\n"
    .string "reduce evasiveness.\n"
    .string "It also attracts\n"
    .string "wild POKéMON.$"

kIronTailMoveDescription:: @ 84865BF
    .string "An attack with a\n"
    .string "steel-hard tail.\n"
    .string "It may lower the\n"
    .string "foe’s DEFENSE stat.$"

kMetalClawMoveDescription:: @ 8486606
    .string "The foe is attacked\n"
    .string "with steel claws.\n"
    .string "It may also raise\n"
    .string "the user’s ATTACK.$"

kVitalThrowMoveDescription:: @ 8486651
    .string "Makes the user\n"
    .string "attack after the\n"
    .string "foe. In return,\n"
    .string "it will not miss.$"

kMorningSunMoveDescription:: @ 8486693
    .string "Restores the user’s\n"
    .string "HP. The amount of\n"
    .string "HP regained varies\n"
    .string "with the weather.$"

kSynthesisMoveDescription:: @ 84866DE
    .string "Restores the user’s\n"
    .string "HP. The amount of\n"
    .string "HP regained varies\n"
    .string "with the weather.$"

kMoonlightMoveDescription:: @ 8486729
    .string "Restores the user’s\n"
    .string "HP. The amount of\n"
    .string "HP regained varies\n"
    .string "with the weather.$"

kHiddenPowerMoveDescription:: @ 8486774
    .string "An attack that\n"
    .string "varies in type and\n"
    .string "intensity depending\n"
    .string "on the user.$"

kCrossChopMoveDescription:: @ 84867B7
    .string "The foe is hit with\n"
    .string "double chops.\n"
    .string "It has a high\n"
    .string "critical-hit ratio.$"

kTwisterMoveDescription:: @ 84867FB
    .string "A vicious twister\n"
    .string "attacks the foe.\n"
    .string "It may make the\n"
    .string "foe flinch.$"

kRainDanceMoveDescription:: @ 848683A
    .string "A heavy rain falls\n"
    .string "for five turns,\n"
    .string "powering up WATER-\n"
    .string "type moves.$"

kSunnyDayMoveDescription:: @ 848687C
    .string "The sun blazes for\n"
    .string "five turns, powering\n"
    .string "up FIRE-type\n"
    .string "moves.$"

kCrunchMoveDescription:: @ 84868B8
    .string "The foe is crunched\n"
    .string "with sharp fangs.\n"
    .string "It may lower the\n"
    .string "foe’s SP. DEF.$"

kMirrorCoatMoveDescription:: @ 84868FE
    .string "A retaliation move\n"
    .string "that pays back the\n"
    .string "foe’s special attack\n"
    .string "double.$"

kPsychUpMoveDescription:: @ 8486941
    .string "The user hypnotizes\n"
    .string "itself into copying\n"
    .string "any stat change\n"
    .string "made by the foe.$"

kExtremeSpeedMoveDescription:: @ 848698A
    .string "A blindingly speedy\n"
    .string "charge attack that\n"
    .string "always goes before\n"
    .string "any other.$"

kAncientPowerMoveDescription:: @ 84869CF
    .string "An ancient power is\n"
    .string "used to attack. It\n"
    .string "may also raise all\n"
    .string "the user’s stats.$"

kShadowBallMoveDescription:: @ 8486A1B
    .string "A shadowy blob is\n"
    .string "hurled at the foe.\n"
    .string "May also lower the\n"
    .string "foe’s SP. DEF.$"

kFutureSightMoveDescription:: @ 8486A62
    .string "Two turns after\n"
    .string "this move is used,\n"
    .string "the foe is attacked\n"
    .string "psychically.$"

kRockSmashMoveDescription:: @ 8486AA6
    .string "An attack that may\n"
    .string "also cut DEFENSE.\n"
    .string "It can also smash\n"
    .string "cracked boulders.$"

kWhirlpoolMoveDescription:: @ 8486AEF
    .string "The foe is trapped\n"
    .string "in a fast, vicious\n"
    .string "whirlpool for two\n"
    .string "to five turns.$"

kBeatUpMoveDescription:: @ 8486B36
    .string "All party POKéMON\n"
    .string "join in the attack.\n"
    .string "The more allies,\n"
    .string "the more damage.$"

kFakeOutMoveDescription:: @ 8486B7E
    .string "An attack that hits\n"
    .string "first and causes\n"
    .string "flinching. Usable\n"
    .string "only on 1st turn.$"

kUproarMoveDescription:: @ 8486BC7
    .string "The user attacks in\n"
    .string "an uproar that\n"
    .string "prevents sleep for\n"
    .string "two to five turns.$"

kStockpileMoveDescription:: @ 8486C10
    .string "The user charges\n"
    .string "up power for use\n"
    .string "later. It can be\n"
    .string "used three times.$"

kSpitUpMoveDescription:: @ 8486C55
    .string "The power built\n"
    .string "using STOCKPILE is\n"
    .string "released at once\n"
    .string "for attack.$"

kSwallowMoveDescription:: @ 8486C95
    .string "The energy it built\n"
    .string "using STOCKPILE is\n"
    .string "absorbed to restore\n"
    .string "HP.$"

kHeatWaveMoveDescription:: @ 8486CD4
    .string "The user exhales a\n"
    .string "heated breath to\n"
    .string "attack. It may also\n"
    .string "inflict a burn.$"

kHailMoveDescription:: @ 8486D1C
    .string "A hailstorm lasting\n"
    .string "five turns damages\n"
    .string "all POKéMON except\n"
    .string "the ICE-type.$"

kTormentMoveDescription:: @ 8486D64
    .string "It enrages the foe,\n"
    .string "making it incapable\n"
    .string "of using the same\n"
    .string "move successively.$"

kFlatterMoveDescription:: @ 8486DB1
    .string "Flattery is used to\n"
    .string "confuse the foe,\n"
    .string "but its SP. ATK\n"
    .string "also rises.$"

kWillOWispMoveDescription:: @ 8486DF2
    .string "A sinister, bluish\n"
    .string "white flame is shot\n"
    .string "at the foe to\n"
    .string "inflict a burn.$"

kMementoMoveDescription:: @ 8486E37
    .string "The user faints,\n"
    .string "but sharply lowers\n"
    .string "the foe’s ATTACK\n"
    .string "and SP. ATK.$"

kFacadeMoveDescription:: @ 8486E79
    .string "An attack that is\n"
    .string "boosted if user is\n"
    .string "burned, poisoned,\n"
    .string "or paralyzed.$"

kFocusPunchMoveDescription:: @ 8486EBE
    .string "An attack that is\n"
    .string "executed last.\n"
    .string "The user flinches\n"
    .string "if hit beforehand.$"

kSmellingSaltMoveDescription:: @ 8486F04
    .string "Doubly effective on\n"
    .string "a paralyzed foe,\n"
    .string "but it also cures\n"
    .string "the foe’s paralysis.$"

kFollowMeMoveDescription:: @ 8486F50
    .string "The user draws\n"
    .string "attention to itself,\n"
    .string "making foes attack\n"
    .string "only the user.$"

kNaturePowerMoveDescription:: @ 8486F96
    .string "An attack that\n"
    .string "changes type\n"
    .string "depending on the\n"
    .string "user’s location.$"

kChargeMoveDescription:: @ 8486FD4
    .string "The user charges\n"
    .string "power to boost the\n"
    .string "ELECTRIC move it\n"
    .string "uses next.$"

kTauntMoveDescription:: @ 8487014
    .string "The foe is taunted\n"
    .string "into a rage that\n"
    .string "allows it to use\n"
    .string "only attack moves.$"

kHelpingHandMoveDescription:: @ 848705C
    .string "A move that boosts\n"
    .string "the power of the\n"
    .string "ally’s attack in a\n"
    .string "battle.$"

kTrickMoveDescription:: @ 848709B
    .string "A move that tricks\n"
    .string "the foe into\n"
    .string "trading held items\n"
    .string "with the user.$"

kRolePlayMoveDescription:: @ 84870DD
    .string "The user mimics the\n"
    .string "foe completely and\n"
    .string "copies the foe’s\n"
    .string "ability.$"

kWishMoveDescription:: @ 848711E
    .string "A self-healing move\n"
    .string "that restores half\n"
    .string "the full HP on the\n"
    .string "next turn.$"

kAssistMoveDescription:: @ 8487163
    .string "The user randomly\n"
    .string "picks and uses a\n"
    .string "move of an allied\n"
    .string "POKéMON.$"

kIngrainMoveDescription:: @ 84871A1
    .string "The user lays roots\n"
    .string "that restore HP on\n"
    .string "every turn.\n"
    .string "It can’t switch out.$"

kSuperpowerMoveDescription:: @ 84871E9
    .string "A powerful attack,\n"
    .string "but it also lowers\n"
    .string "the user’s ATTACK\n"
    .string "and DEFENSE stats.$"

kMagicCoatMoveDescription:: @ 8487234
    .string "Reflects back the\n"
    .string "foe’s LEECH SEED\n"
    .string "and any status-\n"
    .string "damaging move.$"

kRecycleMoveDescription:: @ 8487276
    .string "A move that\n"
    .string "recycles a used\n"
    .string "item for use once\n"
    .string "more.$"

kRevengeMoveDescription:: @ 84872AA
    .string "An attack move that\n"
    .string "gains in intensity if\n"
    .string "the target has hurt\n"
    .string "the user.$"

kBrickBreakMoveDescription:: @ 84872F2
    .string "An attack that also\n"
    .string "breaks any barrier\n"
    .string "like LIGHT SCREEN\n"
    .string "and REFLECT.$"

kYawnMoveDescription:: @ 8487338
    .string "A huge yawn lulls\n"
    .string "the foe into falling\n"
    .string "asleep on the next\n"
    .string "turn.$"

kKnockOffMoveDescription:: @ 8487378
    .string "Knocks down the\n"
    .string "foe’s held item to\n"
    .string "prevent its use\n"
    .string "during the battle.$"

kEndeavorMoveDescription:: @ 84873BE
    .string "Gains power the\n"
    .string "fewer HP the user\n"
    .string "has compared with\n"
    .string "the foe.$"

kEruptionMoveDescription:: @ 84873FB
    .string "The higher the\n"
    .string "user’s HP, the more\n"
    .string "powerful this\n"
    .string "attack becomes.$"

kSkillSwapMoveDescription:: @ 848743C
    .string "The user employs\n"
    .string "its psychic power\n"
    .string "to swap abilities\n"
    .string "with the foe.$"

kImprisonMoveDescription:: @ 848747F
    .string "Prevents foes from\n"
    .string "using any move\n"
    .string "that is also known\n"
    .string "by the user.$"

kRefreshMoveDescription:: @ 84874C1
    .string "A self-healing move\n"
    .string "that cures the user\n"
    .string "of a poisoning,\n"
    .string "burn, or paralysis.$"

kGrudgeMoveDescription:: @ 848750D
    .string "If the user faints,\n"
    .string "this move deletes\n"
    .string "the PP of the move\n"
    .string "that finished it.$"

kSnatchMoveDescription:: @ 8487558
    .string "Steals the effects\n"
    .string "of the foe’s\n"
    .string "healing or status-\n"
    .string "changing move.$"

kSecretPowerMoveDescription:: @ 848759A
    .string "An attack that may\n"
    .string "have an additional\n"
    .string "effect that varies\n"
    .string "with the terrain.$"

kDiveMoveDescription:: @ 84875E5
    .string "The user dives\n"
    .string "underwater on the\n"
    .string "first turn and\n"
    .string "strikes next turn.$"

kArmThrustMoveDescription:: @ 8487628
    .string "A quick flurry of\n"
    .string "straight-arm\n"
    .string "punches that hit\n"
    .string "two to five times.$"

kCamouflageMoveDescription:: @ 848766B
    .string "Alters the user’s\n"
    .string "type depending on\n"
    .string "the location’s\n"
    .string "terrain.$"

kTailGlowMoveDescription:: @ 84876A7
    .string "The user flashes a\n"
    .string "light that sharply\n"
    .string "raises its SP. ATK\n"
    .string "stat.$"

kLusterPurgeMoveDescription:: @ 84876E6
    .string "A burst of light\n"
    .string "injures the foe. It\n"
    .string "may also lower the\n"
    .string "foe’s SP. DEF.$"

kMistBallMoveDescription:: @ 848772D
    .string "A flurry of down\n"
    .string "hits the foe. It\n"
    .string "may also lower the\n"
    .string "foe’s SP. ATK.$"

kFeatherDanceMoveDescription:: @ 8487771
    .string "The foe is covered\n"
    .string "with a mass of down\n"
    .string "that sharply cuts\n"
    .string "the ATTACK stat.$"

kTeeterDanceMoveDescription:: @ 84877BB
    .string "A wobbly dance\n"
    .string "that confuses all\n"
    .string "the POKéMON in\n"
    .string "battle.$"

kBlazeKickMoveDescription:: @ 84877F3
    .string "A fiery kick with a\n"
    .string "high critical-hit\n"
    .string "ratio. It may also\n"
    .string "burn the foe.$"

kMudSportMoveDescription:: @ 848783A
    .string "Weakens ELECTRIC-\n"
    .string "type attacks while\n"
    .string "the user is in the\n"
    .string "battle.$"

kIceBallMoveDescription:: @ 848787A
    .string "A 5-turn rolling\n"
    .string "attack that becomes\n"
    .string "stronger each time\n"
    .string "it rolls.$"

kNeedleArmMoveDescription:: @ 84878BC
    .string "An attack using\n"
    .string "thorny arms.\n"
    .string "It may make the\n"
    .string "foe flinch.$"

kSlackOffMoveDescription:: @ 84878F5
    .string "The user slacks off\n"
    .string "and restores its HP\n"
    .string "by half its full\n"
    .string "HP.$"

kHyperVoiceMoveDescription:: @ 8487932
    .string "The user lets loose\n"
    .string "a horribly loud\n"
    .string "shout with the\n"
    .string "power to damage.$"

kPoisonFangMoveDescription:: @ 8487976
    .string "The foe is bitten\n"
    .string "with toxic fangs.\n"
    .string "It may also badly\n"
    .string "poison the foe.$"

kCrushClawMoveDescription:: @ 84879BC
    .string "The foe is attacked\n"
    .string "with sharp claws.\n"
    .string "It may also lower\n"
    .string "the foe’s DEFENSE.$"

kBlastBurnMoveDescription:: @ 8487A07
    .string "The foe is hit with\n"
    .string "a huge explosion.\n"
    .string "The user can’t move\n"
    .string "on the next turn.$"

kHydroCannonMoveDescription:: @ 8487A53
    .string "The foe is hit with\n"
    .string "a watery cannon.\n"
    .string "The user can’t move\n"
    .string "on the next turn.$"

kMeteorMashMoveDescription:: @ 8487A9E
    .string "The foe is hit with\n"
    .string "a hard, fast punch.\n"
    .string "It may also raise\n"
    .string "the user’s ATTACK.$"

kAstonishMoveDescription:: @ 8487AEB
    .string "An attack using a\n"
    .string "startling shout.\n"
    .string "It also may make\n"
    .string "the foe flinch.$"

kWeatherBallMoveDescription:: @ 8487B2F
    .string "An attack that\n"
    .string "varies in power and\n"
    .string "type depending on\n"
    .string "the weather.$"

kAromatherapyMoveDescription:: @ 8487B71
    .string "A soothing scent is\n"
    .string "released to heal\n"
    .string "all status problems\n"
    .string "in the user’s party.$"

kFakeTearsMoveDescription:: @ 8487BBF
    .string "The user feigns\n"
    .string "crying to sharply\n"
    .string "lower the foe’s\n"
    .string "SP. DEF stat.$"

kAirCutterMoveDescription:: @ 8487BFF
    .string "The foe is hit with\n"
    .string "razor-like wind.\n"
    .string "It has a high\n"
    .string "critical-hit ratio.$"

kOverheatMoveDescription:: @ 8487C46
    .string "An intense attack\n"
    .string "that also sharply\n"
    .string "reduces the user’s\n"
    .string "SP. ATK stat.$"

kOdorSleuthMoveDescription:: @ 8487C8B
    .string "Completely negates\n"
    .string "the foe’s efforts to\n"
    .string "heighten its ability\n"
    .string "to evade.$"

kRockTombMoveDescription:: @ 8487CD2
    .string "Boulders are hurled\n"
    .string "at the foe. It also\n"
    .string "lowers the foe’s\n"
    .string "SPEED if it hits.$"

kSilverWindMoveDescription:: @ 8487D1D
    .string "The foe is attacked\n"
    .string "with a silver dust.\n"
    .string "It may raise all\n"
    .string "the user’s stats.$"

kMetalSoundMoveDescription:: @ 8487D68
    .string "A horrible metallic\n"
    .string "screech is used to\n"
    .string "sharply lower the\n"
    .string "foe’s SP. DEF.$"

kGrassWhistleMoveDescription:: @ 8487DB0
    .string "A pleasant melody\n"
    .string "is played to lull\n"
    .string "the foe into a deep\n"
    .string "sleep.$"

kTickleMoveDescription:: @ 8487DEF
    .string "The foe is made to\n"
    .string "laugh, reducing its\n"
    .string "ATTACK and DEFENSE\n"
    .string "stats.$"

kCosmicPowerMoveDescription:: @ 8487E30
    .string "The user absorbs a\n"
    .string "mystic power to\n"
    .string "raise its DEFENSE\n"
    .string "and SP. DEF.$"

kWaterSpoutMoveDescription:: @ 8487E72
    .string "The higher the\n"
    .string "user’s HP, the more\n"
    .string "powerful this\n"
    .string "attack becomes.$"

kSignalBeamMoveDescription:: @ 8487EB3
    .string "The foe is hit with\n"
    .string "a flashing beam\n"
    .string "that may also\n"
    .string "cause confusion.$"

kShadowPunchMoveDescription:: @ 8487EF6
    .string "The user throws a\n"
    .string "punch from the\n"
    .string "shadows. It cannot\n"
    .string "be evaded.$"

kExtrasensoryMoveDescription:: @ 8487F35
    .string "The user attacks\n"
    .string "with an odd power\n"
    .string "that may make the\n"
    .string "foe flinch.$"

kSkyUppercutMoveDescription:: @ 8487F76
    .string "The user attacks\n"
    .string "with an uppercut\n"
    .string "thrown skywards\n"
    .string "with force.$"

kSandTombMoveDescription:: @ 8487FB4
    .string "The foe is trapped\n"
    .string "inside a painful\n"
    .string "sandstorm for two\n"
    .string "to five turns.$"

kSheerColdMoveDescription:: @ 8487FF9
    .string "The foe is attacked\n"
    .string "with ultimate cold\n"
    .string "that causes fainting\n"
    .string "if it hits.$"

kMuddyWaterMoveDescription:: @ 8488041
    .string "The user attacks\n"
    .string "with muddy water.\n"
    .string "It may also lower\n"
    .string "the foe’s accuracy.$"

kBulletSeedMoveDescription:: @ 848808A
    .string "The user shoots\n"
    .string "seeds at the foe.\n"
    .string "Two to five seeds\n"
    .string "are shot at once.$"

kAerialAceMoveDescription:: @ 84880D0
    .string "An extremely fast\n"
    .string "attack against one\n"
    .string "target. It can’t be\n"
    .string "evaded.$"

kIcicleSpearMoveDescription:: @ 8488111
    .string "Sharp icicles are\n"
    .string "fired at the foe.\n"
    .string "It strikes two to\n"
    .string "five times.$"

kIronDefenseMoveDescription:: @ 8488153
    .string "The user hardens\n"
    .string "its body’s surface\n"
    .string "to sharply raise its\n"
    .string "DEFENSE stat.$"

kBlockMoveDescription:: @ 848819A
    .string "The user blocks the\n"
    .string "foe’s way with arms\n"
    .string "spread wide to\n"
    .string "prevent escape.$"

kHowlMoveDescription:: @ 84881E1
    .string "The user howls to\n"
    .string "raise its spirit and\n"
    .string "boost its ATTACK\n"
    .string "stat.$"

kDragonClawMoveDescription:: @ 848821F
    .string "Sharp, huge claws\n"
    .string "hook and slash the\n"
    .string "foe quickly and\n"
    .string "with great power.$"

kFrenzyPlantMoveDescription:: @ 8488266
    .string "The foe is hit with\n"
    .string "an enormous branch.\n"
    .string "The user can’t move\n"
    .string "on the next turn.$"

kBulkUpMoveDescription:: @ 84882B4
    .string "The user bulks up\n"
    .string "its body to boost\n"
    .string "both its ATTACK and\n"
    .string "DEFENSE stats.$"

kBounceMoveDescription:: @ 84882FB
    .string "The user bounces\n"
    .string "on the foe on the\n"
    .string "2nd turn. It may\n"
    .string "paralyze the foe.$"

kMudShotMoveDescription:: @ 8488341
    .string "The user attacks by\n"
    .string "hurling mud.\n"
    .string "It also reduces the\n"
    .string "foe’s SPEED.$"

kPoisonTailMoveDescription:: @ 8488383
    .string "An attack with a\n"
    .string "high critical-hit\n"
    .string "ratio. It may also\n"
    .string "poison the foe.$"

kCovetMoveDescription:: @ 84883C9
    .string "A cutely executed\n"
    .string "attack that also\n"
    .string "steals the foe’s\n"
    .string "hold item.$"

kVoltTackleMoveDescription:: @ 8488408
    .string "The user throws an\n"
    .string "electrified tackle.\n"
    .string "It hurts the user\n"
    .string "a little.$"

kMagicalLeafMoveDescription:: @ 848844B
    .string "The foe is attacked\n"
    .string "with a strange leaf\n"
    .string "that cannot be\n"
    .string "evaded.$"

kWaterSportMoveDescription:: @ 848848A
    .string "Weakens FIRE-type\n"
    .string "attacks while the\n"
    .string "user is in the\n"
    .string "battle.$"

kCalmMindMoveDescription:: @ 84884C5
    .string "The user focuses\n"
    .string "its mind to raise\n"
    .string "the SP. ATK and\n"
    .string "SP. DEF stats.$"

kLeafBladeMoveDescription:: @ 8488507
    .string "The foe is slashed\n"
    .string "with a sharp leaf.\n"
    .string "It has a high\n"
    .string "critical-hit ratio.$"

kDragonDanceMoveDescription:: @ 848854F
    .string "A mystic, powerful\n"
    .string "dance that boosts\n"
    .string "the user’s ATTACK\n"
    .string "and SPEED stats.$"

kRockBlastMoveDescription:: @ 8488597
    .string "The user hurls two\n"
    .string "to five hard rocks\n"
    .string "at the foe to\n"
    .string "attack.$"

kShockWaveMoveDescription:: @ 84885D3
    .string "A rapid jolt of\n"
    .string "electricity strikes\n"
    .string "the foe. It can’t\n"
    .string "be evaded.$"

kWaterPulseMoveDescription:: @ 8488614
    .string "An attack with a\n"
    .string "pulsing blast of\n"
    .string "water. It may also\n"
    .string "confuse the foe.$"

kDoomDesireMoveDescription:: @ 848865A
    .string "A move that attacks\n"
    .string "the foe with a\n"
    .string "blast of light two\n"
    .string "turns after use.$"

kPsychoBoostMoveDescription:: @ 84886A1
    .string "An intense attack\n"
    .string "that also sharply\n"
    .string "reduces the user’s\n"
    .string "SP. ATK stat.$"

    .align 2
kMoveDescriptions:: @ 84886E8
    .4byte kPoundMoveDescription @ 8482834
    .4byte kKarateChopMoveDescription @ 8482874
    .4byte kDoubleSlapMoveDescription @ 84828BD
    .4byte kCometPunchMoveDescription @ 84828FF
    .4byte kMegaPunchMoveDescription @ 8482946
    .4byte kPayDayMoveDescription @ 8482985
    .4byte kFirePunchMoveDescription @ 84829C9
    .4byte kIcePunchMoveDescription @ 8482A11
    .4byte kThunderPunchMoveDescription @ 8482A53
    .4byte kScratchMoveDescription @ 8482AA0
    .4byte kViceGripMoveDescription @ 8482ACD
    .4byte kGuillotineMoveDescription @ 8482B00
    .4byte kRazorWindMoveDescription @ 8482B46
    .4byte kSwordsDanceMoveDescription @ 8482B94
    .4byte kCutMoveDescription @ 8482BD5
    .4byte kGustMoveDescription @ 8482C16
    .4byte kWingAttackMoveDescription @ 8482C4F
    .4byte kWhirlwindMoveDescription @ 8482C89
    .4byte kFlyMoveDescription @ 8482CD3
    .4byte kBindMoveDescription @ 8482D1D
    .4byte kSlamMoveDescription @ 8482D66
    .4byte kVineWhipMoveDescription @ 8482D96
    .4byte kStompMoveDescription @ 8482DC8
    .4byte kDoubleKickMoveDescription @ 8482E08
    .4byte kMegaKickMoveDescription @ 8482E45
    .4byte kJumpKickMoveDescription @ 8482E83
    .4byte kRollingKickMoveDescription @ 8482ECC
    .4byte kSandAttackMoveDescription @ 8482F0A
    .4byte kHeadbuttMoveDescription @ 8482F4C
    .4byte kHornAttackMoveDescription @ 8482F8F
    .4byte kFuryAttackMoveDescription @ 8482FD0
    .4byte kHornDrillMoveDescription @ 8483014
    .4byte kTackleMoveDescription @ 848305C
    .4byte kBodySlamMoveDescription @ 84830A2
    .4byte kWrapMoveDescription @ 84830EB
    .4byte kTakeDownMoveDescription @ 8483130
    .4byte kThrashMoveDescription @ 8483178
    .4byte kDoubleEdgeMoveDescription @ 84831BF
    .4byte kTailWhipMoveDescription @ 8483203
    .4byte kPoisonStingMoveDescription @ 8483249
    .4byte kTwineedleMoveDescription @ 848328B
    .4byte kPinMissileMoveDescription @ 84832D2
    .4byte kLeerMoveDescription @ 8483314
    .4byte kBiteMoveDescription @ 8483358
    .4byte kGrowlMoveDescription @ 8483397
    .4byte kRoarMoveDescription @ 84833DC
    .4byte kSingMoveDescription @ 8483426
    .4byte kSupersonicMoveDescription @ 848346C
    .4byte kSonicBoomMoveDescription @ 84834A8
    .4byte kDisableMoveDescription @ 84834ED
    .4byte kAcidMoveDescription @ 8483534
    .4byte kEmberMoveDescription @ 8483580
    .4byte kFlamethrowerMoveDescription @ 84835C2
    .4byte kMistMoveDescription @ 8483606
    .4byte kWaterGunMoveDescription @ 848364B
    .4byte kHydroPumpMoveDescription @ 8483693
    .4byte kSurfMoveDescription @ 84836D6
    .4byte kIceBeamMoveDescription @ 848371F
    .4byte kBlizzardMoveDescription @ 8483760
    .4byte kPsybeamMoveDescription @ 84837A1
    .4byte kBubbleBeamMoveDescription @ 84837E3
    .4byte kAuroraBeamMoveDescription @ 848382A
    .4byte kHyperBeamMoveDescription @ 848386D
    .4byte kPeckMoveDescription @ 84838B3
    .4byte kDrillPeckMoveDescription @ 84838EA
    .4byte kSubmissionMoveDescription @ 8483927
    .4byte kLowKickMoveDescription @ 848396E
    .4byte kCounterMoveDescription @ 84839AE
    .4byte kSeismicTossMoveDescription @ 84839F8
    .4byte kStrengthMoveDescription @ 8483A3A
    .4byte kAbsorbMoveDescription @ 8483A82
    .4byte kMegaDrainMoveDescription @ 8483AC5
    .4byte kLeechSeedMoveDescription @ 8483B0C
    .4byte kGrowthMoveDescription @ 8483B57
    .4byte kRazorLeafMoveDescription @ 8483B94
    .4byte kSolarBeamMoveDescription @ 8483BDA
    .4byte kPoisonPowderMoveDescription @ 8483C22
    .4byte kStunSporeMoveDescription @ 8483C5D
    .4byte kSleepPowderMoveDescription @ 8483C9B
    .4byte kPetalDanceMoveDescription @ 8483CDB
    .4byte kStringShotMoveDescription @ 8483D24
    .4byte kDragonRageMoveDescription @ 8483D6B
    .4byte kFireSpinMoveDescription @ 8483DB0
    .4byte kThunderShockMoveDescription @ 8483DFE
    .4byte kThunderboltMoveDescription @ 8483E3E
    .4byte kThunderWaveMoveDescription @ 8483E80
    .4byte kThunderMoveDescription @ 8483EC2
    .4byte kRockThrowMoveDescription @ 8483F03
    .4byte kEarthquakeMoveDescription @ 8483F44
    .4byte kFissureMoveDescription @ 8483F89
    .4byte kDigMoveDescription @ 8483FC7
    .4byte kToxicMoveDescription @ 848400F
    .4byte kConfusionMoveDescription @ 8484058
    .4byte kPsychicMoveDescription @ 8484098
    .4byte kHypnosisMoveDescription @ 84840DF
    .4byte kMeditateMoveDescription @ 8484123
    .4byte kAgilityMoveDescription @ 8484165
    .4byte kQuickAttackMoveDescription @ 84841A8
    .4byte kRageMoveDescription @ 84841E9
    .4byte kTeleportMoveDescription @ 848422E
    .4byte kNightShadeMoveDescription @ 8484278
    .4byte kMimicMoveDescription @ 84842C0
    .4byte kScreechMoveDescription @ 848430A
    .4byte kDoubleTeamMoveDescription @ 8484353
    .4byte kRecoverMoveDescription @ 8484398
    .4byte kHardenMoveDescription @ 84843E5
    .4byte kMinimizeMoveDescription @ 848442E
    .4byte kSmokescreenMoveDescription @ 8484476
    .4byte kConfuseRayMoveDescription @ 84844B5
    .4byte kWithdrawMoveDescription @ 84844F3
    .4byte kDefenseCurlMoveDescription @ 848453C
    .4byte kBarrierMoveDescription @ 8484580
    .4byte kLightScreenMoveDescription @ 84845C5
    .4byte kHazeMoveDescription @ 8484606
    .4byte kReflectMoveDescription @ 8484647
    .4byte kFocusEnergyMoveDescription @ 8484689
    .4byte kBideMoveDescription @ 84846D3
    .4byte kMetronomeMoveDescription @ 8484715
    .4byte kMirrorMoveMoveDescription @ 848475E
    .4byte kSelfDestructMoveDescription @ 84847A2
    .4byte kEggBombMoveDescription @ 84847E8
    .4byte kLickMoveDescription @ 848482D
    .4byte kSmogMoveDescription @ 8484871
    .4byte kSludgeMoveDescription @ 84848B5
    .4byte kBoneClubMoveDescription @ 84848F2
    .4byte kFireBlastMoveDescription @ 848493B
    .4byte kWaterfallMoveDescription @ 8484986
    .4byte kClampMoveDescription @ 84849CA
    .4byte kSwiftMoveDescription @ 8484A15
    .4byte kSkullBashMoveDescription @ 8484A57
    .4byte kSpikeCannonMoveDescription @ 8484AA2
    .4byte kConstrictMoveDescription @ 8484AE1
    .4byte kAmnesiaMoveDescription @ 8484B27
    .4byte kKinesisMoveDescription @ 8484B5B
    .4byte kSoftBoiledMoveDescription @ 8484BA1
    .4byte kHiJumpKickMoveDescription @ 8484BEB
    .4byte kGlareMoveDescription @ 8484C27
    .4byte kDreamEaterMoveDescription @ 8484C75
    .4byte kPoisonGasMoveDescription @ 8484CBB
    .4byte kBarrageMoveDescription @ 8484D01
    .4byte kLeechLifeMoveDescription @ 8484D42
    .4byte kLovelyKissMoveDescription @ 8484D85
    .4byte kSkyAttackMoveDescription @ 8484DCD
    .4byte kTransformMoveDescription @ 8484E18
    .4byte kBubbleMoveDescription @ 8484E60
    .4byte kDizzyPunchMoveDescription @ 8484EA4
    .4byte kSporeMoveDescription @ 8484EE5
    .4byte kFlashMoveDescription @ 8484F20
    .4byte kPsywaveMoveDescription @ 8484F6A
    .4byte kSplashMoveDescription @ 8484FB5
    .4byte kAcidArmorMoveDescription @ 8484FF8
    .4byte kCrabhammerMoveDescription @ 848503F
    .4byte kExplosionMoveDescription @ 848508B
    .4byte kFurySwipesMoveDescription @ 84850D4
    .4byte kBonemerangMoveDescription @ 8485114
    .4byte kRestMoveDescription @ 848515E
    .4byte kRockSlideMoveDescription @ 84851AD
    .4byte kHyperFangMoveDescription @ 84851EF
    .4byte kSharpenMoveDescription @ 8485231
    .4byte kConversionMoveDescription @ 8485277
    .4byte kTriAttackMoveDescription @ 84852B8
    .4byte kSuperFangMoveDescription @ 8485301
    .4byte kSlashMoveDescription @ 848533C
    .4byte kSubstituteMoveDescription @ 8485382
    .4byte kStruggleMoveDescription @ 84853BE
    .4byte kSketchMoveDescription @ 8485405
    .4byte kTripleKickMoveDescription @ 8485446
    .4byte kThiefMoveDescription @ 848548B
    .4byte kSpiderWebMoveDescription @ 84854D6
    .4byte kMindReaderMoveDescription @ 848551D
    .4byte kNightmareMoveDescription @ 8485560
    .4byte kFlameWheelMoveDescription @ 84855AA
    .4byte kSnoreMoveDescription @ 84855E9
    .4byte kCurseMoveDescription @ 848562F
    .4byte kFlailMoveDescription @ 8485679
    .4byte kConversion2MoveDescription @ 84856C1
    .4byte kAeroblastMoveDescription @ 848570C
    .4byte kCottonSporeMoveDescription @ 8485752
    .4byte kReversalMoveDescription @ 8485798
    .4byte kSpiteMoveDescription @ 84857DF
    .4byte kPowderSnowMoveDescription @ 848581E
    .4byte kProtectMoveDescription @ 8485857
    .4byte kMachPunchMoveDescription @ 84858A1
    .4byte kScaryFaceMoveDescription @ 84858E2
    .4byte kFaintAttackMoveDescription @ 8485923
    .4byte kSweetKissMoveDescription @ 848596B
    .4byte kBellyDrumMoveDescription @ 84859AE
    .4byte kSludgeBombMoveDescription @ 84859F2
    .4byte kMudSlapMoveDescription @ 8485A30
    .4byte kOctazookaMoveDescription @ 8485A7A
    .4byte kSpikesMoveDescription @ 8485AC1
    .4byte kZapCannonMoveDescription @ 8485B0C
    .4byte kForesightMoveDescription @ 8485B55
    .4byte kDestinyBondMoveDescription @ 8485B9C
    .4byte kPerishSongMoveDescription @ 8485BDE
    .4byte kIcyWindMoveDescription @ 8485C24
    .4byte kDetectMoveDescription @ 8485C66
    .4byte kBoneRushMoveDescription @ 8485CB0
    .4byte kLockOnMoveDescription @ 8485CF0
    .4byte kOutrageMoveDescription @ 8485D30
    .4byte kSandstormMoveDescription @ 8485D77
    .4byte kGigaDrainMoveDescription @ 8485DC1
    .4byte kEndureMoveDescription @ 8485E09
    .4byte kCharmMoveDescription @ 8485E55
    .4byte kRolloutMoveDescription @ 8485EA0
    .4byte kFalseSwipeMoveDescription @ 8485EE1
    .4byte kSwaggerMoveDescription @ 8485F24
    .4byte kMilkDrinkMoveDescription @ 8485F6C
    .4byte kSparkMoveDescription @ 8485FB6
    .4byte kFuryCutterMoveDescription @ 8485FF5
    .4byte kSteelWingMoveDescription @ 848602B
    .4byte kMeanLookMoveDescription @ 8486075
    .4byte kAttractMoveDescription @ 84860B7
    .4byte kSleepTalkMoveDescription @ 8486105
    .4byte kHealBellMoveDescription @ 8486145
    .4byte kReturnMoveDescription @ 8486187
    .4byte kPresentMoveDescription @ 84861D1
    .4byte kFrustrationMoveDescription @ 848621B
    .4byte kSafeguardMoveDescription @ 8486265
    .4byte kPainSplitMoveDescription @ 84862AB
    .4byte kSacredFireMoveDescription @ 84862F3
    .4byte kMagnitudeMoveDescription @ 8486330
    .4byte kDynamicPunchMoveDescription @ 8486378
    .4byte kMegahornMoveDescription @ 84863C7
    .4byte kDragonBreathMoveDescription @ 848640B
    .4byte kBatonPassMoveDescription @ 8486455
    .4byte kEncoreMoveDescription @ 848649F
    .4byte kPursuitMoveDescription @ 84864E8
    .4byte kRapidSpinMoveDescription @ 8486532
    .4byte kSweetScentMoveDescription @ 8486579
    .4byte kIronTailMoveDescription @ 84865BF
    .4byte kMetalClawMoveDescription @ 8486606
    .4byte kVitalThrowMoveDescription @ 8486651
    .4byte kMorningSunMoveDescription @ 8486693
    .4byte kSynthesisMoveDescription @ 84866DE
    .4byte kMoonlightMoveDescription @ 8486729
    .4byte kHiddenPowerMoveDescription @ 8486774
    .4byte kCrossChopMoveDescription @ 84867B7
    .4byte kTwisterMoveDescription @ 84867FB
    .4byte kRainDanceMoveDescription @ 848683A
    .4byte kSunnyDayMoveDescription @ 848687C
    .4byte kCrunchMoveDescription @ 84868B8
    .4byte kMirrorCoatMoveDescription @ 84868FE
    .4byte kPsychUpMoveDescription @ 8486941
    .4byte kExtremeSpeedMoveDescription @ 848698A
    .4byte kAncientPowerMoveDescription @ 84869CF
    .4byte kShadowBallMoveDescription @ 8486A1B
    .4byte kFutureSightMoveDescription @ 8486A62
    .4byte kRockSmashMoveDescription @ 8486AA6
    .4byte kWhirlpoolMoveDescription @ 8486AEF
    .4byte kBeatUpMoveDescription @ 8486B36
    .4byte kFakeOutMoveDescription @ 8486B7E
    .4byte kUproarMoveDescription @ 8486BC7
    .4byte kStockpileMoveDescription @ 8486C10
    .4byte kSpitUpMoveDescription @ 8486C55
    .4byte kSwallowMoveDescription @ 8486C95
    .4byte kHeatWaveMoveDescription @ 8486CD4
    .4byte kHailMoveDescription @ 8486D1C
    .4byte kTormentMoveDescription @ 8486D64
    .4byte kFlatterMoveDescription @ 8486DB1
    .4byte kWillOWispMoveDescription @ 8486DF2
    .4byte kMementoMoveDescription @ 8486E37
    .4byte kFacadeMoveDescription @ 8486E79
    .4byte kFocusPunchMoveDescription @ 8486EBE
    .4byte kSmellingSaltMoveDescription @ 8486F04
    .4byte kFollowMeMoveDescription @ 8486F50
    .4byte kNaturePowerMoveDescription @ 8486F96
    .4byte kChargeMoveDescription @ 8486FD4
    .4byte kTauntMoveDescription @ 8487014
    .4byte kHelpingHandMoveDescription @ 848705C
    .4byte kTrickMoveDescription @ 848709B
    .4byte kRolePlayMoveDescription @ 84870DD
    .4byte kWishMoveDescription @ 848711E
    .4byte kAssistMoveDescription @ 8487163
    .4byte kIngrainMoveDescription @ 84871A1
    .4byte kSuperpowerMoveDescription @ 84871E9
    .4byte kMagicCoatMoveDescription @ 8487234
    .4byte kRecycleMoveDescription @ 8487276
    .4byte kRevengeMoveDescription @ 84872AA
    .4byte kBrickBreakMoveDescription @ 84872F2
    .4byte kYawnMoveDescription @ 8487338
    .4byte kKnockOffMoveDescription @ 8487378
    .4byte kEndeavorMoveDescription @ 84873BE
    .4byte kEruptionMoveDescription @ 84873FB
    .4byte kSkillSwapMoveDescription @ 848743C
    .4byte kImprisonMoveDescription @ 848747F
    .4byte kRefreshMoveDescription @ 84874C1
    .4byte kGrudgeMoveDescription @ 848750D
    .4byte kSnatchMoveDescription @ 8487558
    .4byte kSecretPowerMoveDescription @ 848759A
    .4byte kDiveMoveDescription @ 84875E5
    .4byte kArmThrustMoveDescription @ 8487628
    .4byte kCamouflageMoveDescription @ 848766B
    .4byte kTailGlowMoveDescription @ 84876A7
    .4byte kLusterPurgeMoveDescription @ 84876E6
    .4byte kMistBallMoveDescription @ 848772D
    .4byte kFeatherDanceMoveDescription @ 8487771
    .4byte kTeeterDanceMoveDescription @ 84877BB
    .4byte kBlazeKickMoveDescription @ 84877F3
    .4byte kMudSportMoveDescription @ 848783A
    .4byte kIceBallMoveDescription @ 848787A
    .4byte kNeedleArmMoveDescription @ 84878BC
    .4byte kSlackOffMoveDescription @ 84878F5
    .4byte kHyperVoiceMoveDescription @ 8487932
    .4byte kPoisonFangMoveDescription @ 8487976
    .4byte kCrushClawMoveDescription @ 84879BC
    .4byte kBlastBurnMoveDescription @ 8487A07
    .4byte kHydroCannonMoveDescription @ 8487A53
    .4byte kMeteorMashMoveDescription @ 8487A9E
    .4byte kAstonishMoveDescription @ 8487AEB
    .4byte kWeatherBallMoveDescription @ 8487B2F
    .4byte kAromatherapyMoveDescription @ 8487B71
    .4byte kFakeTearsMoveDescription @ 8487BBF
    .4byte kAirCutterMoveDescription @ 8487BFF
    .4byte kOverheatMoveDescription @ 8487C46
    .4byte kOdorSleuthMoveDescription @ 8487C8B
    .4byte kRockTombMoveDescription @ 8487CD2
    .4byte kSilverWindMoveDescription @ 8487D1D
    .4byte kMetalSoundMoveDescription @ 8487D68
    .4byte kGrassWhistleMoveDescription @ 8487DB0
    .4byte kTickleMoveDescription @ 8487DEF
    .4byte kCosmicPowerMoveDescription @ 8487E30
    .4byte kWaterSpoutMoveDescription @ 8487E72
    .4byte kSignalBeamMoveDescription @ 8487EB3
    .4byte kShadowPunchMoveDescription @ 8487EF6
    .4byte kExtrasensoryMoveDescription @ 8487F35
    .4byte kSkyUppercutMoveDescription @ 8487F76
    .4byte kSandTombMoveDescription @ 8487FB4
    .4byte kSheerColdMoveDescription @ 8487FF9
    .4byte kMuddyWaterMoveDescription @ 8488041
    .4byte kBulletSeedMoveDescription @ 848808A
    .4byte kAerialAceMoveDescription @ 84880D0
    .4byte kIcicleSpearMoveDescription @ 8488111
    .4byte kIronDefenseMoveDescription @ 8488153
    .4byte kBlockMoveDescription @ 848819A
    .4byte kHowlMoveDescription @ 84881E1
    .4byte kDragonClawMoveDescription @ 848821F
    .4byte kFrenzyPlantMoveDescription @ 8488266
    .4byte kBulkUpMoveDescription @ 84882B4
    .4byte kBounceMoveDescription @ 84882FB
    .4byte kMudShotMoveDescription @ 8488341
    .4byte kPoisonTailMoveDescription @ 8488383
    .4byte kCovetMoveDescription @ 84883C9
    .4byte kVoltTackleMoveDescription @ 8488408
    .4byte kMagicalLeafMoveDescription @ 848844B
    .4byte kWaterSportMoveDescription @ 848848A
    .4byte kCalmMindMoveDescription @ 84884C5
    .4byte kLeafBladeMoveDescription @ 8488507
    .4byte kDragonDanceMoveDescription @ 848854F
    .4byte kRockBlastMoveDescription @ 8488597
    .4byte kShockWaveMoveDescription @ 84885D3
    .4byte kWaterPulseMoveDescription @ 8488614
    .4byte kDoomDesireMoveDescription @ 848865A
    .4byte kPsychoBoostMoveDescription @ 84886A1

kText_8488C70:: @ 8488C70
    .string "Obtained a {STR_VAR_2} BERRY!\n"
    .string "Dad has it at PETALBURG GYM.$"

kText_8488CA2:: @ 8488CA2
    .string "The {STR_VAR_1} BERRY transformed into\n"
    .string "one {STR_VAR_2} BERRY.$"

kText_8488CCE:: @ 8488CCE
    .string "The {STR_VAR_1} BERRY has already been\n"
    .string "obtained.$"

kText_8488CF6:: @ 8488CF6
    .string "A special RIBBON was awarded to\n"
    .string "your party POKéMON.$"

kText_8488D2A:: @ 8488D2A
    .string "The POKéDEX has been upgraded\n"
    .string "with the NATIONAL MODE.$"

kText_8488D60:: @ 8488D60
    .string "A rare word has been added.$"

kText_8488D7C:: @ 8488D7C
    .string "{STR_VAR_1} was sent over!$"

kText_8488D8E:: @ 8488D8E
    .string "Your party is full.\n"
    .string "{STR_VAR_1} could not be sent over.$"

kText_8488DBD:: @ 8488DBD
    .string "A new TRAINER has arrived in\n"
    .string "HOENN.$"

kText_8488DE1:: @ 8488DE1
    .string "バトルタワーに　あらたな\n"
    .string "たいせんしゃが　あらわれた！$"

kText_8488DFD:: @ 8488DFD
    .string "This data can’t be used in\n"
    .string "this version.$"

    .align 2
kEventScript_8488E28:: @ 8488E28
    setvaddress kEventScript_8488E28
    setorcopyvar 0x800D, 0x0001
    specialvar 0x8008, 390
    setorcopyvar 0x800D, 0x0000
    specialvar 0x8009, 390
    subvar 0x8008, 32777
    getnumberstring 0, 32776
    lock
    faceplayer
    vmessage kText_8488E55
    waitmessage
    waitbutton
    release
    end

kText_8488E55:: @ 8488E55
    .string "Thank you for using the STAMP CARD\n"
    .string "System.\p"
    .string "You have {STR_VAR_1} more to collect to\n"
    .string "fill your STAMP CARD.$"

kEventScript_8488EB5:: @ 8488EB5
    setvaddress kEventScript_8488EB5
    checkflag 0x03D8

kEventScript_8488EBD:: @ 8488EBD
    vgoto_if 0, kEventScript_8488EC4
    gotoram

kEventScript_8488EC4:: @ 8488EC4
    specialvar 0x40B5, 131
    compare_var_to_value 0x40B5, 6
    vgoto_if 1, kEventScript_8488EEB
    setflag 0x03D8
    vcall kEventScript_8488EF6
    lock
    faceplayer
    vmessage kText_8488F56
    waitmessage
    waitbutton
    playfanfare 258
    waitfanfare
    release
    end

kEventScript_8488EEB:: @ 8488EEB
    lock
    faceplayer
    vmessage kText_8488FE3
    waitmessage
    waitbutton
    release
    end

kEventScript_8488EF6:: @ 8488EF6
    giveegg SPECIES_PICHU
    setobedience 16565
    setcatchlocale 16565, 255
    compare_var_to_value 0x40B5, 1
    vgoto_if 1, kEventScript_8488F38
    compare_var_to_value 0x40B5, 2
    vgoto_if 1, kEventScript_8488F3E
    compare_var_to_value 0x40B5, 3
    vgoto_if 1, kEventScript_8488F44
    compare_var_to_value 0x40B5, 4
    vgoto_if 1, kEventScript_8488F4A
    compare_var_to_value 0x40B5, 5
    vgoto_if 1, kEventScript_8488F50
    return

kEventScript_8488F38:: @ 8488F38
    setpokemove 1, 2, MOVE_SURF
    return

kEventScript_8488F3E:: @ 8488F3E
    setpokemove 2, 2, MOVE_SURF
    return

kEventScript_8488F44:: @ 8488F44
    setpokemove 3, 2, MOVE_SURF
    return

kEventScript_8488F4A:: @ 8488F4A
    setpokemove 4, 2, MOVE_SURF
    return

kEventScript_8488F50:: @ 8488F50
    setpokemove 5, 2, MOVE_SURF
    return

kText_8488F56:: @ 8488F56
    .string "Thank you for using the MYSTERY\n"
    .string "GIFT System.\p"
    .string "From the POKéMON CENTER we\n"
    .string "have a gift - a POKéMON EGG!\p"
    .string "Please raise it with love and\n"
    .string "kindness.$"

kText_8488FE3:: @ 8488FE3
    .string "Oh, your party appears to be full.\p"
    .string "Please come see me after storing\n"
    .string "a POKéMON on a PC.$"

kEventScript_848903A:: @ 848903A
    setvaddress kEventScript_848903A
    special 246
    compare_var_to_value 0x800D, 0
    vgoto_if 1, kEventScript_8489058
    lock
    faceplayer
    vmessage kText_8489063
    waitmessage
    waitbutton
    release
    end

kEventScript_8489058:: @ 8489058
    lock
    faceplayer
    vmessage kText_84891B0
    waitmessage
    waitbutton
    release
    end

kText_8489063:: @ 8489063
    .string "Thank you for using the MYSTERY\n"
    .string "GIFT System.\p"
    .string "By holding this WONDER CARD, you\n"
    .string "may take part in a survey at a\l"
    .string "POKéMON MART.\p"
    .string "Use these surveys to invite\n"
    .string "TRAINERS to the SEVII ISLANDS.\p"
    .string "…Let me give you a secret\n"
    .string "password for a survey:\p"
    .string "“GIVE ME\n"
    .string "AWESOME TRAINER”\p"
    .string "Write that in on a survey and send\n"
    .string "it to the WIRELESS\l"
    .string "COMMUNICATION SYSTEM.$"

kText_84891B0:: @ 84891B0
    .string "Thank you for using the MYSTERY\n"
    .string "GIFT System.\p"
    .string "A TRAINER has arrived in the SEVII\n"
    .string "ISLANDS looking for you.\p"
    .string "We hope you will enjoy\n"
    .string "battling the visiting TRAINER.\p"
    .string "You may invite other TRAINERS by\n"
    .string "entering other passwords.\p"
    .string "Try looking for other passwords\n"
    .string "that may work.$"

kEventScript_84892B9:: @ 84892B9
    setvaddress kEventScript_84892B9
    checkflag 0x03D8
    vgoto_if 1, kEventScript_84892F6
    setorcopyvar 0x800D, 0x0002
    specialvar 0x8008, 390
    compare_var_to_value 0x8008, 3
    vgoto_if 0, kEventScript_84892F6
    lock
    faceplayer
    vmessage kText_8489419
    waitmessage
    waitbutton
    setorcopyvar 0x8000, 0x000D
    setorcopyvar 0x8001, 0x0001
    callstd 0
    release
    setflag 0x03D8
    end

kEventScript_84892F6:: @ 84892F6
    lock
    faceplayer
    vmessage kText_8489301
    waitmessage
    waitbutton
    release
    end

kText_8489301:: @ 8489301
    .string "Thank you for using the MYSTERY\n"
    .string "GIFT System.\p"
    .string "Your BATTLE COUNT CARD keeps\n"
    .string "track of your battle record against\l"
    .string "TRAINERS with the same CARD.\p"
    .string "Look for and battle TRAINERS who\n"
    .string "have the same CARD as you.\p"
    .string "You may check the overall rankings\n"
    .string "by reading the NEWS.\p"
    .string "Please do give it a try!$"

kText_8489419:: @ 8489419
    .string "Thank you for using the MYSTERY\n"
    .string "GIFT System.\p"
    .string "Congratulations!\p"
    .string "You have won a prize for winning\n"
    .string "three battles!\p"
    .string "We hope you will be inspired to\n"
    .string "battle some more.$"

kEventScript_84894B9:: @ 84894B9
    setvaddress kEventScript_84894B9
    lock
    faceplayer
    checkflag 0x02A7
    vgoto_if 1, kEventScript_848951D
    checkflag 0x02E4
    vgoto_if 1, kEventScript_848951D
    checkitem ITEM_AURORA_TICKET, 1
    compare_var_to_value 0x800D, 1
    vgoto_if 1, kEventScript_848951D
    vmessage kText_8489526
    waitmessage
    waitbutton
    checkitemspace ITEM_AURORA_TICKET, 1
    compare_var_to_value 0x800D, 0
    vgoto_if 1, kEventScript_8489514
    setorcopyvar 0x8000, 0x0173
    setorcopyvar 0x8001, 0x0001
    callstd 0
    setflag 0x084B
    setflag 0x02A7
    vmessage kText_8489583
    waitmessage
    waitbutton
    release
    end

kEventScript_8489514:: @ 8489514
    vmessage kText_8489615
    waitmessage
    waitbutton
    release
    end

kEventScript_848951D:: @ 848951D
    vmessage kText_84895E8
    waitmessage
    waitbutton
    release
    end

kText_8489526:: @ 8489526
    .string "Thank you for using the MYSTERY\n"
    .string "GIFT System.\p"
    .string "You must be {PLAYER}.\n"
    .string "There is a ticket here for you.$"

kText_8489583:: @ 8489583
    .string "It appears to be for use at the\n"
    .string "VERMILION CITY port.\p"
    .string "Why not give it a try and see what\n"
    .string "it is about?$"

kText_84895E8:: @ 84895E8
    .string "Thank you for using the MYSTERY\n"
    .string "GIFT System.$"

kText_8489615:: @ 8489615
    .string "Oh, I’m sorry, {PLAYER}. Your BAG’s\n"
    .string "KEY ITEMS POCKET is full.\p"
    .string "Please store something on your PC,\n"
    .string "then come back for this.$"

kEventScript_8489689:: @ 8489689
    setvaddress kEventScript_8489689
    lock
    faceplayer
    checkflag 0x02A8
    vgoto_if 1, kEventScript_84896F6
    checkflag 0x02F2
    vgoto_if 1, kEventScript_84896F6
    checkflag 0x02F3
    vgoto_if 1, kEventScript_84896F6
    checkitem ITEM_MYSTIC_TICKET, 1
    compare_var_to_value 0x800D, 1
    vgoto_if 1, kEventScript_84896F6
    vmessage kText_84896FF
    waitmessage
    waitbutton
    checkitemspace ITEM_MYSTIC_TICKET, 1
    compare_var_to_value 0x800D, 0
    vgoto_if 1, kEventScript_84896ED
    setorcopyvar 0x8000, 0x0172
    setorcopyvar 0x8001, 0x0001
    callstd 0
    setflag 0x084A
    setflag 0x02A8
    vmessage kText_848975C
    waitmessage
    waitbutton
    release
    end

kEventScript_84896ED:: @ 84896ED
    vmessage kText_84897EE
    waitmessage
    waitbutton
    release
    end

kEventScript_84896F6:: @ 84896F6
    vmessage kText_84897C1
    waitmessage
    waitbutton
    release
    end

kText_84896FF:: @ 84896FF
    .string "Thank you for using the MYSTERY\n"
    .string "GIFT System.\p"
    .string "You must be {PLAYER}.\n"
    .string "There is a ticket here for you.$"

kText_848975C:: @ 848975C
    .string "It appears to be for use at the\n"
    .string "VERMILION CITY port.\p"
    .string "Why not give it a try and see what\n"
    .string "it is about?$"

kText_84897C1:: @ 84897C1
    .string "Thank you for using the MYSTERY\n"
    .string "GIFT System.$"

kText_84897EE:: @ 84897EE
    .string "Oh, I’m sorry, {PLAYER}. Your BAG’s\n"
    .string "KEY ITEMS POCKET is full.\p"
    .string "Please store something on your PC,\n"
    .string "then come back for this.$"

kEventScript_8489862:: @ 8489862
    setvaddress kEventScript_8489862
    addvar 0x4024, 1
    compare_var_to_value 0x4024, 10
    vgoto_if 0, kEventScript_848987C
    setvar 0x4024, 0

kEventScript_848987C:: @ 848987C
    lock
    faceplayer
    vmessage kText_8489887
    waitmessage
    waitbutton
    release
    end

kText_8489887:: @ 8489887
    .string "Thank you for using the MYSTERY\n"
    .string "GIFT System.\p"
    .string "Recently, there have been rumors\n"
    .string "of rare POKéMON appearances.\p"
    .string "The rumors are about ALTERING\n"
    .string "CAVE on OUTCAST ISLAND.\p"
    .string "Why not visit there and check if\n"
    .string "the rumors are indeed true?$"

    .align 2
gMPlayJumpTableTemplate:: @ 8489968
    .4byte ply_fine @ 81DC7E1
    .4byte ply_goto @ 81DC851
    .4byte ply_patt @ 81DC871
    .4byte ply_pend @ 81DC88D
    .4byte ply_rept @ 81DC8A1
    .4byte ply_fine @ 81DC7E1
    .4byte ply_fine @ 81DC7E1
    .4byte ply_fine @ 81DC7E1
    .4byte ply_fine @ 81DC7E1
    .4byte ply_prio @ 81DC8D1
    .4byte ply_tempo @ 81DC8DD
    .4byte ply_keysh @ 81DC8F1
    .4byte ply_voice @ 81DC905
    .4byte ply_vol @ 81DC935
    .4byte ply_pan @ 81DC949
    .4byte ply_bend @ 81DC95D
    .4byte ply_bendr @ 81DC971
    .4byte ply_lfos @ 81DCF69
    .4byte ply_lfodl @ 81DC985
    .4byte ply_mod @ 81DCF7D
    .4byte ply_modt @ 81DC991
    .4byte ply_fine @ 81DC7E1
    .4byte ply_fine @ 81DC7E1
    .4byte ply_tune @ 81DC9A9
    .4byte ply_fine @ 81DC7E1
    .4byte ply_fine @ 81DC7E1
    .4byte ply_fine @ 81DC7E1
    .4byte ply_port @ 81DC9BD
    .4byte ply_fine @ 81DC7E1
    .4byte ply_endtie @ 81DCF01
    .4byte SampleFreqSet @ 81DD599
    .4byte TrackStop @ 81DCC89
    .4byte FadeOutBody @ 81DD97D
    .4byte TrkVolPitSet @ 81DDA45
    .4byte RealClearChain @ 81DC7C1
    .4byte SoundMainBTM @ 81DC7A9

gDeltaEncodingTable:: @ 84899F8
    .incbin "baserom.gba", 0x4899F8, 0x10 @ null

gScaleTable:: @ 8489A08
    .incbin "baserom.gba", 0x489A08, 0xB4 @ null

gFreqTable:: @ 8489ABC
    .incbin "baserom.gba", 0x489ABC, 0x30 @ null

gPcmSamplesPerVBlankTable:: @ 8489AEC
    .incbin "baserom.gba", 0x489AEC, 0x18 @ null

gCgbScaleTable:: @ 8489B04
    .incbin "baserom.gba", 0x489B04, 0x84 @ null

gCgbFreqTable:: @ 8489B88
    .incbin "baserom.gba", 0x489B88, 0x18 @ null

gNoiseTable:: @ 8489BA0
    .incbin "baserom.gba", 0x489BA0, 0x3C @ null

gCgb3Vol:: @ 8489BDC
    .incbin "baserom.gba", 0x489BDC, 0x10 @ null

gClockTable:: @ 8489BEC
    .incbin "baserom.gba", 0x489BEC, 0x34 @ null

gPokemonCrySongTemplate:: @ 8489C20
    .incbin "baserom.gba", 0x489C20, 0x34 @ null

gXcmdTable:: @ 8489C54
    .4byte ply_xxx @ 81DE4A5
    .4byte ply_xwave @ 81DE4B9
    .4byte ply_xtype @ 81DE501
    .4byte ply_xxx @ 81DE4A5
    .4byte ply_xatta @ 81DE515
    .4byte ply_xdeca @ 81DE529
    .4byte ply_xsust @ 81DE53D
    .4byte ply_xrele @ 81DE551
    .4byte ply_xiecv @ 81DE565
    .4byte ply_xiecl @ 81DE571
    .4byte ply_xleng @ 81DE57D
    .4byte ply_xswee @ 81DE591
    .4byte ply_xcmd_0C @ 81DE5A5
    .4byte ply_xcmd_0D @ 81DE5ED

