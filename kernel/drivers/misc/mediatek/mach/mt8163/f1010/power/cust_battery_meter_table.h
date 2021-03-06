#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0
#define BAT_NTC_100 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900
#define RBAT_PULL_DOWN_R           30000
#endif
#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900
#define RBAT_PULL_DOWN_R           100000
#endif
#if (BAT_NTC_100 == 1)
#define RBAT_PULL_UP_R             24000
#define RBAT_PULL_DOWN_R           100000000
#endif
#define RBAT_PULL_UP_VOLT          1800


// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
		{-20 , 75022},
		{-15 , 57926},
		{-10 , 45168},
		{ -5 , 35548},
		{  0 , 28224},
		{  5 , 22595},
		{ 10 , 18231},
		{ 15 , 14820},
		{ 20 , 12133},
		{ 25 , 10000},
		{ 30 , 8295},
		{ 35 , 6922},
		{ 40 , 5810},
		{ 45 , 4903},
		{ 50 , 4160},
		{ 55 , 3547},
		{ 60 , 3039}
	};
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

#if (BAT_NTC_100 == 1)
	BATT_TEMPERATURE Batt_Temperature_Table[] = {
		{-20,1151037},
		{-15,846579},
		{-10,628988},
		{ -5,471632},
		{  0,357012},
		{  5,272500},
		{ 10,209710},
		{ 15,162651},
		{ 20,127080},
		{ 25,100000},
		{ 30,79222},
		{ 35,63167},
		{ 40,50677},
		{ 45,40904},
		{ 50,33195},
		{ 55,27091},
		{ 60,22224}
	};
#endif
// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
	{0  , 4180},
	{1  , 4163},
	{2  , 4155},
	{3  , 4146},
	{4  , 4131},
	{5  , 4124},
	{6  , 4116},
	{7  , 4103},
	{8  , 4089},
	{9  , 4083},
	{10 , 4077},
	{11 , 4065},
	{12 , 4052},
	{13 , 4046},
	{14 , 4040},
	{15 , 4029},
	{16 , 4023},
	{17 , 4017},
	{18 , 4007},
	{19 , 3996},
	{20 , 3991},
	{21 , 3986},
	{22 , 3976},
	{23 , 3972},
	{24 , 3967},
	{25 , 3958},
	{26 , 3949},
	{27 , 3945},
	{28 , 3940},
	{29 , 3932},
	{30 , 3924},
	{31 , 3920},
	{32 , 3916},
	{33 , 3908},
	{34 , 3904},
	{35 , 3900},
	{36 , 3892},
	{37 , 3884},
	{38 , 3880},
	{39 , 3875},
	{40 , 3864},
	{41 , 3858},
	{42 , 3851},
	{43 , 3839},
	{44 , 3829},
	{45 , 3826},
	{46 , 3822},
	{47 , 3816},
	{48 , 3810},
	{49 , 3808},
	{50 , 3805},
	{51 , 3801},
	{52 , 3799},
	{53 , 3797},
	{54 , 3793},
	{55 , 3790},
	{56 , 3789},
	{57 , 3787},
	{58 , 3784},
	{59 , 3783},
	{60 , 3781},
	{61 , 3779},
	{62 , 3777},
	{63 , 3776},
	{64 , 3775},
	{65 , 3773},
	{66 , 3771},
	{67 , 3771},
	{68 , 3770},
	{69 , 3768},
	{70 , 3767},
	{71 , 3765},
	{72 , 3762},
	{73 , 3759},
	{74 , 3758},
	{75 , 3756},
	{76 , 3750},
	{77 , 3748},
	{78 , 3746},
	{79 , 3740},
	{80 , 3736},
	{81 , 3734},
	{82 , 3731},
	{83 , 3723},
	{84 , 3713},
	{85 , 3709},
	{86 , 3705},
	{87 , 3695},
	{88 , 3689},
	{89 , 3683},
	{90 , 3675},
	{91 , 3669},
	{92 , 3666},
	{93 , 3663},
	{94 , 3657},
	{95 , 3652},
	{96 , 3646},
	{97 , 3610},
	{98 , 3541},
	{99 , 3471},
	{100, 3400}
};

// T1 0C
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
	{0  , 4180},
	{1  , 4163},
	{2  , 4155},
	{3  , 4146},
	{4  , 4131},
	{5  , 4124},
	{6  , 4116},
	{7  , 4103},
	{8  , 4089},
	{9  , 4083},
	{10 , 4077},
	{11 , 4065},
	{12 , 4052},
	{13 , 4046},
	{14 , 4040},
	{15 , 4029},
	{16 , 4023},
	{17 , 4017},
	{18 , 4007},
	{19 , 3996},
	{20 , 3991},
	{21 , 3986},
	{22 , 3976},
	{23 , 3972},
	{24 , 3967},
	{25 , 3958},
	{26 , 3949},
	{27 , 3945},
	{28 , 3940},
	{29 , 3932},
	{30 , 3924},
	{31 , 3920},
	{32 , 3916},
	{33 , 3908},
	{34 , 3904},
	{35 , 3900},
	{36 , 3892},
	{37 , 3884},
	{38 , 3880},
	{39 , 3875},
	{40 , 3864},
	{41 , 3858},
	{42 , 3851},
	{43 , 3839},
	{44 , 3829},
	{45 , 3826},
	{46 , 3822},
	{47 , 3816},
	{48 , 3810},
	{49 , 3808},
	{50 , 3805},
	{51 , 3801},
	{52 , 3799},
	{53 , 3797},
	{54 , 3793},
	{55 , 3790},
	{56 , 3789},
	{57 , 3787},
	{58 , 3784},
	{59 , 3783},
	{60 , 3781},
	{61 , 3779},
	{62 , 3777},
	{63 , 3776},
	{64 , 3775},
	{65 , 3773},
	{66 , 3771},
	{67 , 3771},
	{68 , 3770},
	{69 , 3768},
	{70 , 3767},
	{71 , 3765},
	{72 , 3762},
	{73 , 3759},
	{74 , 3758},
	{75 , 3756},
	{76 , 3750},
	{77 , 3748},
	{78 , 3746},
	{79 , 3740},
	{80 , 3736},
	{81 , 3734},
	{82 , 3731},
	{83 , 3723},
	{84 , 3713},
	{85 , 3709},
	{86 , 3705},
	{87 , 3695},
	{88 , 3689},
	{89 , 3683},
	{90 , 3675},
	{91 , 3669},
	{92 , 3666},
	{93 , 3663},
	{94 , 3657},
	{95 , 3652},
	{96 , 3646},
	{97 , 3610},
	{98 , 3541},
	{99 , 3471},
	{100, 3400}
};

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
	{0  , 4180},
	{1  , 4163},
	{2  , 4155},
	{3  , 4146},
	{4  , 4131},
	{5  , 4124},
	{6  , 4116},
	{7  , 4103},
	{8  , 4089},
	{9  , 4083},
	{10 , 4077},
	{11 , 4065},
	{12 , 4052},
	{13 , 4046},
	{14 , 4040},
	{15 , 4029},
	{16 , 4023},
	{17 , 4017},
	{18 , 4007},
	{19 , 3996},
	{20 , 3991},
	{21 , 3986},
	{22 , 3976},
	{23 , 3972},
	{24 , 3967},
	{25 , 3958},
	{26 , 3949},
	{27 , 3945},
	{28 , 3940},
	{29 , 3932},
	{30 , 3924},
	{31 , 3920},
	{32 , 3916},
	{33 , 3908},
	{34 , 3904},
	{35 , 3900},
	{36 , 3892},
	{37 , 3884},
	{38 , 3880},
	{39 , 3875},
	{40 , 3864},
	{41 , 3858},
	{42 , 3851},
	{43 , 3839},
	{44 , 3829},
	{45 , 3826},
	{46 , 3822},
	{47 , 3816},
	{48 , 3810},
	{49 , 3808},
	{50 , 3805},
	{51 , 3801},
	{52 , 3799},
	{53 , 3797},
	{54 , 3793},
	{55 , 3790},
	{56 , 3789},
	{57 , 3787},
	{58 , 3784},
	{59 , 3783},
	{60 , 3781},
	{61 , 3779},
	{62 , 3777},
	{63 , 3776},
	{64 , 3775},
	{65 , 3773},
	{66 , 3771},
	{67 , 3771},
	{68 , 3770},
	{69 , 3768},
	{70 , 3767},
	{71 , 3765},
	{72 , 3762},
	{73 , 3759},
	{74 , 3758},
	{75 , 3756},
	{76 , 3750},
	{77 , 3748},
	{78 , 3746},
	{79 , 3740},
	{80 , 3736},
	{81 , 3734},
	{82 , 3731},
	{83 , 3723},
	{84 , 3713},
	{85 , 3709},
	{86 , 3705},
	{87 , 3695},
	{88 , 3689},
	{89 , 3683},
	{90 , 3675},
	{91 , 3669},
	{92 , 3666},
	{93 , 3663},
	{94 , 3657},
	{95 , 3652},
	{96 , 3646},
	{97 , 3610},
	{98 , 3541},
	{99 , 3471},
	{100, 3400}
};
// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
	{0  , 4180},
	{1  , 4163},
	{2  , 4155},
	{3  , 4146},
	{4  , 4131},
	{5  , 4124},
	{6  , 4116},
	{7  , 4103},
	{8  , 4089},
	{9  , 4083},
	{10 , 4077},
	{11 , 4065},
	{12 , 4052},
	{13 , 4046},
	{14 , 4040},
	{15 , 4029},
	{16 , 4023},
	{17 , 4017},
	{18 , 4007},
	{19 , 3996},
	{20 , 3991},
	{21 , 3986},
	{22 , 3976},
	{23 , 3972},
	{24 , 3967},
	{25 , 3958},
	{26 , 3949},
	{27 , 3945},
	{28 , 3940},
	{29 , 3932},
	{30 , 3924},
	{31 , 3920},
	{32 , 3916},
	{33 , 3908},
	{34 , 3904},
	{35 , 3900},
	{36 , 3892},
	{37 , 3884},
	{38 , 3880},
	{39 , 3875},
	{40 , 3864},
	{41 , 3858},
	{42 , 3851},
	{43 , 3839},
	{44 , 3829},
	{45 , 3826},
	{46 , 3822},
	{47 , 3816},
	{48 , 3810},
	{49 , 3808},
	{50 , 3805},
	{51 , 3801},
	{52 , 3799},
	{53 , 3797},
	{54 , 3793},
	{55 , 3790},
	{56 , 3789},
	{57 , 3787},
	{58 , 3784},
	{59 , 3783},
	{60 , 3781},
	{61 , 3779},
	{62 , 3777},
	{63 , 3776},
	{64 , 3775},
	{65 , 3773},
	{66 , 3771},
	{67 , 3771},
	{68 , 3770},
	{69 , 3768},
	{70 , 3767},
	{71 , 3765},
	{72 , 3762},
	{73 , 3759},
	{74 , 3758},
	{75 , 3756},
	{76 , 3750},
	{77 , 3748},
	{78 , 3746},
	{79 , 3740},
	{80 , 3736},
	{81 , 3734},
	{82 , 3731},
	{83 , 3723},
	{84 , 3713},
	{85 , 3709},
	{86 , 3705},
	{87 , 3695},
	{88 , 3689},
	{89 , 3683},
	{90 , 3675},
	{91 , 3669},
	{92 , 3666},
	{93 , 3663},
	{94 , 3657},
	{95 , 3652},
	{96 , 3646},
	{97 , 3610},
	{98 , 3541},
	{99 , 3471},
	{100, 3400}
};

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0}
};

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
	{83 , 4180},
	{83 , 4163},
	{83 , 4155},
	{83 , 4146},
	{83 , 4131},
	{83 , 4124},
	{83 , 4116},
	{85 , 4103},
	{85 , 4089},
	{85 , 4083},
	{85 , 4077},
	{88 , 4065},
	{87 , 4052},
	{87 , 4046},
	{87 , 4040},
	{90 , 4029},
	{90 , 4023},
	{90 , 4017},
	{93 , 4007},
	{95 , 3996},
	{96 , 3991},
	{97 , 3986},
	{97 , 3976},
	{98 , 3972},
	{100, 3967},
	{100, 3958},
	{102, 3949},
	{103, 3945},
	{105, 3940},
	{107, 3932},
	{108, 3924},
	{109, 3920},
	{110, 3916},
	{113, 3908},
	{113, 3904},
	{113, 3900},
	{115, 3892},
	{117, 3884},
	{117, 3880},
	{117, 3875},
	{112, 3864},
	{108, 3858},
	{103, 3851},
	{97 , 3839},
	{92 , 3829},
	{91 , 3826},
	{90 , 3822},
	{90 , 3816},
	{88 , 3810},
	{88 , 3808},
	{88 , 3805},
	{88 , 3801},
	{89 , 3799},
	{90 , 3797},
	{88 , 3793},
	{90 , 3790},
	{90 , 3789},
	{90 , 3787},
	{92 , 3784},
	{92 , 3783},
	{92 , 3781},
	{92 , 3779},
	{92 , 3777},
	{92 , 3776},
	{93 , 3775},
	{93 , 3773},
	{93 , 3771},
	{94 , 3771},
	{95 , 3770},
	{95 , 3768},
	{94 , 3767},
	{93 , 3765},
	{93 , 3762},
	{95 , 3759},
	{96 , 3758},
	{97 , 3756},
	{93 , 3750},
	{94 , 3748},
	{95 , 3746},
	{92 , 3740},
	{93 , 3736},
	{94 , 3734},
	{95 , 3731},
	{95 , 3723},
	{93 , 3713},
	{95 , 3709},
	{97 , 3705},
	{97 , 3695},
	{97 , 3689},
	{97 , 3683},
	{100, 3675},
	{100, 3669},
	{101, 3666},
	{103, 3663},
	{105, 3657},
	{110, 3652},
	{115, 3646},
	{118, 3610},
	{117, 3541},
	{110, 3471},
	{123, 3400}
};

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
	{83 , 4180},
	{83 , 4163},
	{83 , 4155},
	{83 , 4146},
	{83 , 4131},
	{83 , 4124},
	{83 , 4116},
	{85 , 4103},
	{85 , 4089},
	{85 , 4083},
	{85 , 4077},
	{88 , 4065},
	{87 , 4052},
	{87 , 4046},
	{87 , 4040},
	{90 , 4029},
	{90 , 4023},
	{90 , 4017},
	{93 , 4007},
	{95 , 3996},
	{96 , 3991},
	{97 , 3986},
	{97 , 3976},
	{98 , 3972},
	{100, 3967},
	{100, 3958},
	{102, 3949},
	{103, 3945},
	{105, 3940},
	{107, 3932},
	{108, 3924},
	{109, 3920},
	{110, 3916},
	{113, 3908},
	{113, 3904},
	{113, 3900},
	{115, 3892},
	{117, 3884},
	{117, 3880},
	{117, 3875},
	{112, 3864},
	{108, 3858},
	{103, 3851},
	{97 , 3839},
	{92 , 3829},
	{91 , 3826},
	{90 , 3822},
	{90 , 3816},
	{88 , 3810},
	{88 , 3808},
	{88 , 3805},
	{88 , 3801},
	{89 , 3799},
	{90 , 3797},
	{88 , 3793},
	{90 , 3790},
	{90 , 3789},
	{90 , 3787},
	{92 , 3784},
	{92 , 3783},
	{92 , 3781},
	{92 , 3779},
	{92 , 3777},
	{92 , 3776},
	{93 , 3775},
	{93 , 3773},
	{93 , 3771},
	{94 , 3771},
	{95 , 3770},
	{95 , 3768},
	{94 , 3767},
	{93 , 3765},
	{93 , 3762},
	{95 , 3759},
	{96 , 3758},
	{97 , 3756},
	{93 , 3750},
	{94 , 3748},
	{95 , 3746},
	{92 , 3740},
	{93 , 3736},
	{94 , 3734},
	{95 , 3731},
	{95 , 3723},
	{93 , 3713},
	{95 , 3709},
	{97 , 3705},
	{97 , 3695},
	{97 , 3689},
	{97 , 3683},
	{100, 3675},
	{100, 3669},
	{101, 3666},
	{103, 3663},
	{105, 3657},
	{110, 3652},
	{115, 3646},
	{118, 3610},
	{117, 3541},
	{110, 3471},
	{123, 3400}
};

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
	{83 , 4180},
	{83 , 4163},
	{83 , 4155},
	{83 , 4146},
	{83 , 4131},
	{83 , 4124},
	{83 , 4116},
	{85 , 4103},
	{85 , 4089},
	{85 , 4083},
	{85 , 4077},
	{88 , 4065},
	{87 , 4052},
	{87 , 4046},
	{87 , 4040},
	{90 , 4029},
	{90 , 4023},
	{90 , 4017},
	{93 , 4007},
	{95 , 3996},
	{96 , 3991},
	{97 , 3986},
	{97 , 3976},
	{98 , 3972},
	{100, 3967},
	{100, 3958},
	{102, 3949},
	{103, 3945},
	{105, 3940},
	{107, 3932},
	{108, 3924},
	{109, 3920},
	{110, 3916},
	{113, 3908},
	{113, 3904},
	{113, 3900},
	{115, 3892},
	{117, 3884},
	{117, 3880},
	{117, 3875},
	{112, 3864},
	{108, 3858},
	{103, 3851},
	{97 , 3839},
	{92 , 3829},
	{91 , 3826},
	{90 , 3822},
	{90 , 3816},
	{88 , 3810},
	{88 , 3808},
	{88 , 3805},
	{88 , 3801},
	{89 , 3799},
	{90 , 3797},
	{88 , 3793},
	{90 , 3790},
	{90 , 3789},
	{90 , 3787},
	{92 , 3784},
	{92 , 3783},
	{92 , 3781},
	{92 , 3779},
	{92 , 3777},
	{92 , 3776},
	{93 , 3775},
	{93 , 3773},
	{93 , 3771},
	{94 , 3771},
	{95 , 3770},
	{95 , 3768},
	{94 , 3767},
	{93 , 3765},
	{93 , 3762},
	{95 , 3759},
	{96 , 3758},
	{97 , 3756},
	{93 , 3750},
	{94 , 3748},
	{95 , 3746},
	{92 , 3740},
	{93 , 3736},
	{94 , 3734},
	{95 , 3731},
	{95 , 3723},
	{93 , 3713},
	{95 , 3709},
	{97 , 3705},
	{97 , 3695},
	{97 , 3689},
	{97 , 3683},
	{100, 3675},
	{100, 3669},
	{101, 3666},
	{103, 3663},
	{105, 3657},
	{110, 3652},
	{115, 3646},
	{118, 3610},
	{117, 3541},
	{110, 3471},
	{123, 3400}
};

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
	{83 , 4180},
	{83 , 4163},
	{83 , 4155},
	{83 , 4146},
	{83 , 4131},
	{83 , 4124},
	{83 , 4116},
	{85 , 4103},
	{85 , 4089},
	{85 , 4083},
	{85 , 4077},
	{88 , 4065},
	{87 , 4052},
	{87 , 4046},
	{87 , 4040},
	{90 , 4029},
	{90 , 4023},
	{90 , 4017},
	{93 , 4007},
	{95 , 3996},
	{96 , 3991},
	{97 , 3986},
	{97 , 3976},
	{98 , 3972},
	{100, 3967},
	{100, 3958},
	{102, 3949},
	{103, 3945},
	{105, 3940},
	{107, 3932},
	{108, 3924},
	{109, 3920},
	{110, 3916},
	{113, 3908},
	{113, 3904},
	{113, 3900},
	{115, 3892},
	{117, 3884},
	{117, 3880},
	{117, 3875},
	{112, 3864},
	{108, 3858},
	{103, 3851},
	{97 , 3839},
	{92 , 3829},
	{91 , 3826},
	{90 , 3822},
	{90 , 3816},
	{88 , 3810},
	{88 , 3808},
	{88 , 3805},
	{88 , 3801},
	{89 , 3799},
	{90 , 3797},
	{88 , 3793},
	{90 , 3790},
	{90 , 3789},
	{90 , 3787},
	{92 , 3784},
	{92 , 3783},
	{92 , 3781},
	{92 , 3779},
	{92 , 3777},
	{92 , 3776},
	{93 , 3775},
	{93 , 3773},
	{93 , 3771},
	{94 , 3771},
	{95 , 3770},
	{95 , 3768},
	{94 , 3767},
	{93 , 3765},
	{93 , 3762},
	{95 , 3759},
	{96 , 3758},
	{97 , 3756},
	{93 , 3750},
	{94 , 3748},
	{95 , 3746},
	{92 , 3740},
	{93 , 3736},
	{94 , 3734},
	{95 , 3731},
	{95 , 3723},
	{93 , 3713},
	{95 , 3709},
	{97 , 3705},
	{97 , 3695},
	{97 , 3689},
	{97 , 3683},
	{100, 3675},
	{100, 3669},
	{101, 3666},
	{103, 3663},
	{105, 3657},
	{110, 3652},
	{115, 3646},
	{118, 3610},
	{117, 3541},
	{110, 3471},
	{123, 3400}
};

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0}
};

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H

