#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 0
#define BAT_NTC_47 1

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
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
        {-20,68237},
        {-15,53650},
        {-10,42506},
        { -5,33892},
        {  0,27219},
        {  5,22021},
        { 10,17926},
        { 15,14674},
        { 20,12081},
        { 25,10000},
        { 30,8315},
        { 35,6948},
        { 40,5834},
        { 45,4917},
        { 50,4161},
        { 55,3535},
        { 60,3014}
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

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
	{0  , 4315},
	{1  , 4290},
	{2  , 4265},
	{4  , 4238},
	{5  , 4212},
	{6  , 4192},
	{7  , 4178},
	{9  , 4162},
	{10 , 4148},
	{11 , 4134},
	{12 , 4121},
	{14 , 4109},
	{15 , 4100},
	{16 , 4093},
	{17 , 4086},
	{19 , 4073},
	{20 , 4052},
	{21 , 4027},
	{22 , 4003},
	{23 , 3987},
	{25 , 3975},
	{26 , 3964},
	{27 , 3955},
	{28 , 3949},
	{30 , 3942},
	{31 , 3935},
	{32 , 3927},
	{33 , 3919},
	{35 , 3911},
	{36 , 3903},
	{37 , 3892},
	{38 , 3885},
	{40 , 3876},
	{41 , 3869},
	{42 , 3860},
	{43 , 3854},
	{44 , 3845},
	{46 , 3840},
	{47 , 3834},
	{48 , 3828},
	{49 , 3824},
	{51 , 3818},
	{52 , 3813},
	{53 , 3806},
	{54 , 3804},
	{56 , 3801},
	{57 , 3795},
	{58 , 3793},
	{59 , 3792},
	{61 , 3788},
	{62 , 3786},
	{63 , 3786},
	{64 , 3782},
	{65  , 3783},         
	{67 , 3780},
	{68 , 3780},
	{69  , 3776},         
	{70 , 3776},
	{72 , 3773},
	{73 , 3773},
	{74 , 3770},
	{75 , 3763},
	{77 , 3762},
	{78 , 3758},
	{79 , 3753},
	{80 , 3748},
	{82 , 3744},
	{83 , 3737},
	{84 , 3732},
	{85 , 3725},
	{86 , 3719},
	{88 , 3714},
	{89 , 3710},
	{90 , 3706},
	{91  , 3702},         
	{93 , 3699},
	{94 , 3695},
	{95 , 3682},
	{96 , 3649},
	{98 , 3592},
	{99 , 3514},
	{100, 3396},
	{100, 3354},
	{100, 3354},
	{100, 3354},
	{100, 3354},
	{100, 3354},
	{100, 3354},
	{100, 3354},
	{100, 3354}
};      
        
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
	{0  , 4321},
	{1  , 4295},
	{2  , 4275},
	{4  , 4258},
	{5  , 4242},
	{6  , 4229},
	{7  , 4215},
	{8  , 4203},
	{9  , 4189},
	{11 , 4178},
	{12 , 4165},
	{13 , 4152},
	{14 , 4140},
	{15 , 4127},
	{16 , 4115},
	{18 , 4104},
	{19 , 4095},
	{20 , 4089},
	{21 , 4084},
	{22 , 4073},
	{23 , 4051},
	{25 , 4023},
	{26 , 4004},
	{27 , 3989},
	{28 , 3979},
	{29 , 3969},
	{30 , 3964},
	{32 , 3957},
	{33 , 3952},
	{34 , 3946},
	{35 , 3939},
	{36 , 3931},
	{37 , 3920},
	{39 , 3911},
	{40 , 3901},
	{41 , 3891},
	{42 , 3881},
	{43 , 3874},
	{44 , 3866},
	{46 , 3859},
	{47 , 3850},
	{48 , 3844},
	{49 , 3839},
	{50 , 3834},
	{51 , 3829},
	{53 , 3824},
	{54 , 3820},
	{55 , 3814},
	{56 , 3811},
	{57 , 3807},
	{58 , 3804},
	{60 , 3800},
	{61 , 3797},
	{62 , 3794},
	{63 , 3792},
	{64 , 3789},
	{65 , 3787},
	{67 , 3786},
	{68 , 3784},
	{69 , 3784},
	{70 , 3783},
	{71 , 3781},
	{72 , 3780},
	{74 , 3778},
	{75 , 3776},
	{76 , 3774},
	{77 , 3770},
	{78 , 3766},
	{79 , 3760},
	{81 , 3753},
	{82 , 3748},
	{83 , 3746},
	{84 , 3743},
	{85 , 3737},
	{86 , 3730},
	{88 , 3722},
	{89 , 3713},
	{90 , 3708},
	{91 , 3706},
	{92 , 3703},
	{93 , 3700},
	{95 , 3696},
	{96 , 3681},
	{97 , 3639},
	{98 , 3577},
	{99 , 3492},
	{100, 3352},
	{100, 3207},
	{100, 3125},
	{100, 3125}
};           

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
	{0  , 4334},
	{1  , 4308},
	{2  , 4287},
	{3  , 4268},
	{5  , 4251},
	{6  , 4235},
	{7  , 4221},
	{8  , 4206},
	{9  , 4193},
	{10 , 4179},
	{11 , 4166},
	{13 , 4154},
	{14 , 4141},
	{15 , 4129},
	{16 , 4116},
	{17 , 4104},
	{18 , 4092},
	{19 , 4079},
	{21 , 4068},
	{22 , 4057},
	{23 , 4049},
	{24 , 4044},
	{25 , 4031},
	{26 , 4012},
	{28 , 3994},
	{29 , 3979},
	{30 , 3970},
	{31 , 3964},
	{32 , 3960},
	{33 , 3952},
	{34 , 3943},
	{36 , 3935},
	{37 , 3927},
	{38 , 3917},
	{39 , 3909},
	{40 , 3900},
	{41 , 3890},
	{42 , 3880},
	{44 , 3870},
	{45 , 3860},
	{46 , 3850},
	{47 , 3841},
	{48 , 3832},
	{49 , 3825},
	{50 , 3819},
	{52 , 3813},
	{53 , 3807},
	{54 , 3802},
	{55 , 3798},
	{56 , 3793},
	{57 , 3789},
	{58 , 3785},
	{60 , 3782},
	{61 , 3779},
	{62 , 3775},
	{63 , 3772},
	{64 , 3769},
	{65 , 3767},
	{67 , 3764},
	{68 , 3761},
	{69 , 3759},
	{70 , 3757},
	{71 , 3754},
	{72 , 3752},
	{73 , 3748},
	{75 , 3743},
	{76 , 3739},
	{77 , 3734},
	{78 , 3731},
	{79 , 3726},
	{80 , 3723},
	{81 , 3719},
	{83 , 3715},
	{84 , 3710},
	{85 , 3703},
	{86 , 3696},
	{87 , 3690},
	{88 , 3682},
	{89 , 3674},
	{91 , 3671},
	{92 , 3669},
	{93 , 3670},
	{94 , 3666},
	{95 , 3659},
	{96 , 3637},
	{97 , 3588},
	{99 , 3522},
	{100, 3429},
	{100, 3269},
	{100, 3073}    
};     

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
	{0	, 4334},
	{1	, 4313},
	{2	, 4295},
	{3	, 4279},
	{5	, 4262},
	{6	, 4249},
	{7	, 4235},
	{8	, 4221},
	{9	, 4206},
	{10 , 4195},
	{11 , 4180},
	{13 , 4167},
	{14 , 4154},
	{15 , 4142},
	{16 , 4129},
	{17 , 4119},
	{18 , 4104},
	{19 , 4093},
	{21 , 4082},
	{22 , 4070},
	{23 , 4059},
	{24 , 4048},
	{25 , 4037},
	{26 , 4026},
	{28 , 4015},
	{29 , 4009},
	{30 , 4000},
	{31 , 3987},
	{32 , 3980},
	{33 , 3970},
	{34 , 3959},
	{36 , 3951},
	{37 , 3942},
	{38 , 3934},
	{39 , 3925},
	{40 , 3918},
	{41 , 3907},
	{42 , 3900},
	{44 , 3888},
	{45 , 3878},
	{46 , 3866},
	{47 , 3858},
	{48 , 3850},
	{49 , 3842},
	{50 , 3837},
	{52 , 3832},
	{53 , 3826},
	{54 , 3822},
	{55 , 3816},
	{56 , 3811},
	{57 , 3807},
	{58 , 3802},
	{60 , 3802},
	{61 , 3796},
	{62 , 3793},
	{63 , 3790},
	{64 , 3786},
	{65 , 3783},
	{66 , 3783},
	{68 , 3778},
	{69 , 3777},
	{70 , 3774},
	{71 , 3772},
	{72 , 3766},
	{73 , 3760},
	{74 , 3758},
	{76 , 3747},
	{77 , 3743},
	{78 , 3737},
	{79 , 3733},
	{80 , 3730},
	{81 , 3726},
	{83 , 3722},
	{84 , 3717},
	{85 , 3710},
	{86 , 3704},
	{87 , 3699},
	{88 , 3690},
	{89 , 3682},
	{91 , 3680},
	{92 , 3678},
	{93 , 3677},
	{94 , 3674},
	{95 , 3667},
	{96 , 3638},
	{97 , 3590},
	{99 , 3526},
	{100, 3436},
	{100, 3291},
	{100, 3083}
};           

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
  {0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};    

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
	{423 , 4315},
	{423 , 4290},
	{430 , 4265},
	{440 , 4238},
	{447 , 4212},
	{460 , 4192},
	{480 , 4178},
	{490 , 4162},
	{503 , 4148},
	{505 , 4134},
	{508 , 4121},
	{508 , 4109},
	{515 , 4100},
	{533 , 4093},
	{553 , 4086},
	{560 , 4073},
	{555 , 4052},
	{543 , 4027},
	{528 , 4003},
	{523 , 3987},
	{523 , 3975},
	{520 , 3964},
	{515 , 3955},
	{523 , 3949},
	{523 , 3942},
	{525 , 3935},
	{520 , 3927},
	{518 , 3919},
	{513 , 3911},
	{513 , 3903},
	{505 , 3892},
	{508 , 3885},
	{505 , 3876},
	{505 , 3869},
	{503 , 3860},
	{503 , 3854},
	{495 , 3845},
	{503 , 3840},
	{503 , 3834},
	{500 , 3828},
	{508 , 3824},
	{505 , 3818},
	{508 , 3813},
	{503 , 3806},
	{510 , 3804},
	{518 , 3801},
	{510 , 3795},
	{515 , 3793},
	{525 , 3792},
	{523 , 3788},
	{528 , 3786},
	{538 , 3786},
	{540 , 3782},
	{553 , 3783},
	{558 , 3780},
	{570 , 3780},
	{570 , 3776},
	{585 , 3776},
	{595 , 3773},
	{613 , 3773},
	{625 , 3770},
	{625 , 3763},
	{645 , 3762},
	{663 , 3758},
	{673 , 3753},
	{688 , 3748},
	{705 , 3744},
	{725 , 3737},
	{745 , 3732},
	{763 , 3725},
	{788 , 3719},
	{823 , 3714},
	{860 , 3710},
	{903 , 3706},
	{900 , 3702},
	{908 , 3699},
	{925 , 3695},
	{940 , 3682},
	{963 , 3649},
	{978 , 3592},
	{998 , 3514},
	{1023, 3396},
	{1173, 3354},
	{1173, 3354},
	{1173, 3354},
	{1173, 3354},
	{1173, 3354},
	{1173, 3354},
	{1173, 3354},
	{1173, 3354}      
};      

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
	{268 , 4321},
	{268 , 4295},
	{275 , 4275},
	{275 , 4258},
	{275 , 4242},
	{283 , 4229},
	{283 , 4215},
	{288 , 4203},
	{283 , 4189},
	{290 , 4178},
	{295 , 4165},
	{295 , 4152},
	{298 , 4140},
	{295 , 4127},
	{300 , 4115},
	{303 , 4104},
	{302 , 4095},
	{308 , 4089},
	{322 , 4084},
	{325 , 4073},
	{323 , 4051},
	{312 , 4023},
	{315 , 4004},
	{313 , 3989},
	{315 , 3979},
	{315 , 3969},
	{320 , 3964},
	{315 , 3957},
	{320 , 3952},
	{318 , 3946},
	{318 , 3939},
	{320 , 3931},
	{310 , 3920},
	{308 , 3911},
	{303 , 3901},
	{295 , 3891},
	{288 , 3881},
	{293 , 3874},
	{290 , 3866},
	{285 , 3859},
	{283 , 3850},
	{283 , 3844},
	{285 , 3839},
	{288 , 3834},
	{288 , 3829},
	{290 , 3824},
	{288 , 3820},
	{288 , 3814},
	{290 , 3811},
	{293 , 3807},
	{298 , 3804},
	{295 , 3800},
	{295 , 3797},
	{298 , 3794},
	{298 , 3792},
	{298 , 3789},
	{298 , 3787},
	{300 , 3786},
	{300 , 3784},
	{303 , 3784},
	{305 , 3783},
	{305 , 3781},
	{308 , 3780},
	{308 , 3778},
	{318 , 3776},
	{313 , 3774},
	{310 , 3770},
	{313 , 3766},
	{295 , 3760},
	{253 , 3753},
	{238 , 3748},
	{240 , 3746},
	{298 , 3743},
	{328 , 3737},
	{335 , 3730},
	{345 , 3722},
	{348 , 3713},
	{355 , 3708},
	{373 , 3706},
	{390 , 3703},
	{415 , 3700},
	{453 , 3696},
	{485 , 3681},
	{520 , 3639},
	{580 , 3577},
	{683 , 3492},
	{858 , 3352},
	{1018, 3207},
	{818 , 3125},
	{818 , 3125}
};     

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
	{238, 4334},
	{238, 4308},
	{238, 4287},
	{238, 4268},
	{235, 4251},
	{235, 4235},
	{238, 4221},
	{235, 4206},
	{238, 4193},
	{238, 4179},
	{238, 4166},
	{238, 4154},
	{240, 4141},
	{240, 4129},
	{240, 4116},
	{243, 4104},
	{240, 4092},
	{240, 4079},
	{245, 4068},
	{245, 4057},
	{248, 4049},
	{255, 4044},
	{250, 4031},
	{247, 4012},
	{250, 3994},
	{248, 3979},
	{250, 3970},
	{255, 3964},
	{260, 3960},
	{258, 3952},
	{255, 3943},
	{258, 3935},
	{260, 3927},
	{260, 3917},
	{260, 3909},
	{260, 3900},
	{258, 3890},
	{255, 3880},
	{253, 3870},
	{250, 3860},
	{245, 3850},
	{243, 3841},
	{235, 3832},
	{235, 3825},
	{235, 3819},
	{235, 3813},
	{235, 3807},
	{233, 3802},
	{235, 3798},
	{233, 3793},
	{235, 3789},
	{235, 3785},
	{238, 3782},
	{240, 3779},
	{238, 3775},
	{238, 3772},
	{238, 3769},
	{240, 3767},
	{240, 3764},
	{238, 3761},
	{240, 3759},
	{243, 3757},
	{240, 3754},
	{243, 3752},
	{238, 3748},
	{235, 3743},
	{235, 3739},
	{233, 3734},
	{235, 3731},
	{235, 3726},
	{238, 3723},
	{235, 3719},
	{238, 3715},
	{238, 3710},
	{238, 3703},
	{235, 3696},
	{238, 3690},
	{238, 3682},
	{238, 3674},
	{238, 3671},
	{238, 3669},
	{248, 3670},
	{250, 3666},
	{250, 3659},
	{248, 3637},
	{250, 3588},
	{255, 3522},
	{268, 3429},
	{315, 3269},
	{680, 3073}
}; 

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
	{185, 4334},
	{185, 4313},
	{185, 4295},
	{183, 4279},
	{185, 4262},
	{190, 4249},
	{190, 4235},
	{188, 4221},
	{185, 4206},
	{195, 4195},
	{190, 4180},
	{190, 4167},
	{188, 4154},
	{188, 4142},
	{185, 4129},
	{195, 4119},
	{190, 4104},
	{193, 4093},
	{193, 4082},
	{195, 4070},
	{188, 4059},
	{190, 4048},
	{190, 4037},
	{195, 4026},
	{190, 4015},
	{205, 4009},
	{208, 4000},
	{193, 3987},
	{200, 3980},
	{200, 3970},
	{200, 3959},
	{205, 3951},
	{205, 3942},
	{208, 3934},
	{205, 3925},
	{215, 3918},
	{203, 3907},
	{213, 3900},
	{203, 3888},
	{205, 3878},
	{193, 3866},
	{188, 3858},
	{190, 3850},
	{185, 3842},
	{183, 3837},
	{190, 3832},
	{185, 3826},
	{185, 3822},
	{188, 3816},
	{180, 3811},
	{188, 3807},
	{188, 3802},
	{198, 3802},
	{185, 3796},
	{190, 3793},
	{193, 3790},
	{185, 3786},
	{193, 3783},
	{193, 3783},
	{190, 3778},
	{200, 3777},
	{195, 3774},
	{205, 3772},
	{198, 3766},
	{195, 3760},
	{190, 3758},
	{178, 3747},
	{195, 3743},
	{188, 3737},
	{190, 3733},
	{193, 3730},
	{193, 3726},
	{193, 3722},
	{195, 3717},
	{193, 3710},
	{193, 3704},
	{198, 3699},
	{195, 3690},
	{188, 3682},
	{193, 3680},
	{190, 3678},
	{195, 3677},
	{203, 3674},
	{208, 3667},
	{198, 3638},
	{205, 3590},
	{210, 3526},
	{223, 3436},
	{263, 3291},
	{713, 3083}  
}; 

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
  {0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};    

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H
