	.include "asm/macros.inc"
	.include "asm/macros/field_effect_script.inc"
	.include "constants/constants.inc"

.text
kFieldEffectScriptPointers:: @ 81D96AC
    .4byte FieldEffectScript_00
    .4byte FieldEffectScript_01
    .4byte FieldEffectScript_02
    .4byte FieldEffectScript_03
    .4byte FieldEffectScript_04
    .4byte FieldEffectScript_05
    .4byte FieldEffectScript_06
    .4byte FieldEffectScript_07
    .4byte FieldEffectScript_08
    .4byte FieldEffectScript_09
    .4byte FieldEffectScript_0A
    .4byte FieldEffectScript_0B
    .4byte FieldEffectScript_0C
    .4byte FieldEffectScript_0D
    .4byte FieldEffectScript_0E
    .4byte FieldEffectScript_0F
    .4byte FieldEffectScript_10
    .4byte FieldEffectScript_11
    .4byte FieldEffectScript_12
    .4byte FieldEffectScript_13
    .4byte FieldEffectScript_14
    .4byte FieldEffectScript_15
    .4byte FieldEffectScript_16
    .4byte FieldEffectScript_17
    .4byte FieldEffectScript_18
    .4byte FieldEffectScript_19
    .4byte FieldEffectScript_1A
    .4byte FieldEffectScript_1B
    .4byte FieldEffectScript_1C
    .4byte FieldEffectScript_1D
    .4byte FieldEffectScript_1E
    .4byte FieldEffectScript_1F
    .4byte FieldEffectScript_20
    .4byte FieldEffectScript_21
    .4byte FieldEffectScript_22
    .4byte FieldEffectScript_23
    .4byte FieldEffectScript_24
    .4byte FieldEffectScript_25
    .4byte FieldEffectScript_26
    .4byte FieldEffectScript_27
    .4byte FieldEffectScript_28
    .4byte FieldEffectScript_29
    .4byte FieldEffectScript_2A
    .4byte FieldEffectScript_2B
    .4byte FieldEffectScript_2C
    .4byte FieldEffectScript_2D
    .4byte FieldEffectScript_2E
    .4byte FieldEffectScript_2F
    .4byte FieldEffectScript_30
    .4byte FieldEffectScript_31
    .4byte FieldEffectScript_32
    .4byte FieldEffectScript_33
    .4byte FieldEffectScript_34
    .4byte FieldEffectScript_35
    .4byte FieldEffectScript_36
    .4byte FieldEffectScript_37
    .4byte FieldEffectScript_38
    .4byte FieldEffectScript_39
    .4byte FieldEffectScript_3A
    .4byte FieldEffectScript_3B
    .4byte FieldEffectScript_3C
    .4byte FieldEffectScript_3D
    .4byte FieldEffectScript_3E
    .4byte FieldEffectScript_3F
    .4byte FieldEffectScript_40
    .4byte FieldEffectScript_41
    .4byte FieldEffectScript_42
    .4byte FieldEffectScript_43
    .4byte FieldEffectScript_44
    .4byte FieldEffectScript_45

FieldEffectScript_00:: @ 81D97C4
    callnative oei_00_exclamation_mark
    end

FieldEffectScript_01:: @ 81D97CA
    callnative oei_01_cut
    end

FieldEffectScript_02:: @ 81D97D0
    callnative oei_02_cut2
    end

FieldEffectScript_03:: @ 81D97D6
    callnative oei_03_shadow
    end

FieldEffectScript_04:: @ 81D97DC
    loadfadedpal_callnative kObjPal_83A5348, oei_04_grass_normal
    end

FieldEffectScript_05:: @ 81D97E6
    loadfadedpal_callnative kObjPal_83A5348, oei_05_ripples
    end

FieldEffectScript_06:: @ 81D97F0
    callnative oei_06_8086028
    end

FieldEffectScript_07:: @ 81D97F6
    loadfadedpal_callnative kObjPal_83A5348, oei_07_ash
    end

FieldEffectScript_08:: @ 81D9800
    callnative oei_0C8_80DC3D0
    end

FieldEffectScript_09:: @ 81D9806
    callnative oei_09_surf
    end

FieldEffectScript_0A:: @ 81D980C
    loadfadedpal_callnative kObjPal_83A5340, oei_0A_80DC740
    end

FieldEffectScript_0B:: @ 81D9816
    end

FieldEffectScript_0C:: @ 81D9817
    loadfadedpal_callnative kObjPal_83A5348, oei_0C_80DB4F4
    end

FieldEffectScript_0D:: @ 81D9821
    loadfadedpal_callnative kObjPal_83A5340, oei_0D_80DB9A0
    end

FieldEffectScript_0E:: @ 81D982B
    loadfadedpal_callnative kObjPal_83A5340, oei_0E_water_drop_tall
    end

FieldEffectScript_0F:: @ 81D9835
    loadfadedpal_callnative kObjPal_83A5340, oei_0F_80DBB88
    end

FieldEffectScript_10:: @ 81D983F
    loadfadedpal_callnative kObjPal_83A5340, oei_10_80DBCB8
    end

FieldEffectScript_11:: @ 81D9849
    loadfadedpal_callnative kObjPal_83A5348, oei_11_grass_tall
    end

FieldEffectScript_12:: @ 81D9853
    loadfadedpal_callnative kObjPal_83A5348, oei_12_80DB798
    end

FieldEffectScript_13:: @ 81D985D
    loadfadedpal_callnative kObjPal_83A5348, oei_13_80DC08C
    end

FieldEffectScript_14:: @ 81D9867
    loadfadedpal_callnative kObjPal_83A5348, oei_14_80DC0F8
    end

FieldEffectScript_15:: @ 81D9871
    loadfadedpal_callnative kObjPal_83A5340, oei_15_80DC164
    end

FieldEffectScript_16:: @ 81D987B
    loadfadedpal_callnative kObjPal_83A5340, oei_16_80DC1D0
    end

FieldEffectScript_17:: @ 81D9885
    callnative oei_17_80DC9DC
    end

FieldEffectScript_18:: @ 81D988B
    loadfadedpal_callnative kObjPal_83A5340, oei_18_80DBA14
    end

FieldEffectScript_19:: @ 81D9895
    loadfadedpal kObjPal_83CBE9C
    loadfadedpal_callnative kObjPal_83A5340, oei_19_8083B8C
    end

FieldEffectScript_1A:: @ 81D98A4
    end

FieldEffectScript_1B:: @ 81D98A5
    end

FieldEffectScript_1C:: @ 81D98A6
    callnative oei_1C_80DC9E0
    end

FieldEffectScript_1D:: @ 81D98AC
    callnative oei_1D_80DC9F0
    end

FieldEffectScript_1E:: @ 81D98B2
    callnative oei_1E_8086D38
    end

FieldEffectScript_1F:: @ 81D98B8
    callnative oei_1F_8086E10
    end

FieldEffectScript_20:: @ 81D98BE
    callnative oei_20_8087484
    end

FieldEffectScript_21:: @ 81D98C4
    callnative oei_21_8082624
    end

FieldEffectScript_22:: @ 81D98CA
    loadfadedpal_callnative kObjPal_83A5340, oei_22_80DBD98
    end

FieldEffectScript_23:: @ 81D98D4
    loadfadedpal_callnative kObjPal_83A5340, oei_23_80DBA88
    end

FieldEffectScript_24:: @ 81D98DE
    callnative oei_24_80DCA00
    end

FieldEffectScript_25:: @ 81D98E4
    callnative oei_25_rocksmash
    end

FieldEffectScript_28:: @ 81D98EA
    callnative oei_28_80D0860
    end

FieldEffectScript_26:: @ 81D98F0
    callnative oei_26_80C9ACC
    end

FieldEffectScript_27:: @ 81D98F6
    loadfadedpal_callnative kObjPal_83A5340, oei_27_80DC7B0
    end

FieldEffectScript_29:: @ 81D9900
    loadfadedpal_callnative kObjPal_83A5348, oei_29_micrograss
    end

FieldEffectScript_2A:: @ 81D990A
    loadfadedpal_callnative kObjPal_83A5348, oei_2A_80DBF50
    end

FieldEffectScript_2B:: @ 81D9914
    callnative oei_2B_waterfall
    end

FieldEffectScript_2C:: @ 81D991A
    callnative oei_2C_dive
    end

FieldEffectScript_2D:: @ 81D9920
    loadpal kObjPal_83FA658
    callnative oei_2D_80D1504
    end

FieldEffectScript_2E:: @ 81D992B
    callnative oei_2E_80825B4
    end

FieldEffectScript_2F:: @ 81D9931
    end

FieldEffectScript_30:: @ 81D9932
    end

FieldEffectScript_31:: @ 81D9933
    loadfadedpal_callnative kObjPal_83A5ED8, oei_31_water_drop_heavy
    end

FieldEffectScript_32:: @ 81D993D
    loadfadedpal_callnative kObjPal_83A5ED8, oei_32_water_drop_light
    end

FieldEffectScript_33:: @ 81D9947
    callnative oei_33_sweet_scent
    end

FieldEffectScript_34:: @ 81D994D
    end

FieldEffectScript_35:: @ 81D994E
    loadfadedpal_callnative kObjPal_83A5340, oei_35_80DC938
    end

FieldEffectScript_36:: @ 81D9958
    loadfadedpal_callnative kObjPal_83A5FF8, oei_36_80DCC1C
    end

FieldEffectScript_37:: @ 81D9962
    end

FieldEffectScript_38:: @ 81D9963
    end

FieldEffectScript_39:: @ 81D9964
    end

FieldEffectScript_3A:: @ 81D9965
    loadfadedpal_callnative kObjPal_83D4144, oei_3A_08097A48
    end

FieldEffectScript_3B:: @ 81D996F
    callnative oei_3B_8086084
    end

FieldEffectScript_3C:: @ 81D9975
    end

FieldEffectScript_3D:: @ 81D9976
    end

FieldEffectScript_3E:: @ 81D9977
    loadfadedpal kObjPal_83CBE9C
    loadfadedpal_callnative kObjPal_83CBEA4, oei_3E_8083CE0
    end

FieldEffectScript_3F:: @ 81D9986
    callnative oei_3F_teleport
    end

FieldEffectScript_40:: @ 81D998C
    callnative oei_40_exclamation_mark_var3
    end

FieldEffectScript_41:: @ 81D9992
    callnative oei_41_versus_seeker
    end

FieldEffectScript_42:: @ 81D9998
    callnative oei_42_exclamation_mark_var1
    end

FieldEffectScript_43:: @ 81D999E
    callnative oei_43_8087924
    end

FieldEffectScript_44:: @ 81D99A4
    callnative oei_44_8087AB4
    end

FieldEffectScript_45:: @ 81D99AA
    callnative oei_45_8087E28
    end
