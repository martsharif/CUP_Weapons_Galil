////////////////////////////////////////////////////////////////////
//DeRap: CUP_Weapons_Galil\config.bin
//Produced from mikero's Dos Tools Dll version 7.97
//https://mikero.bytex.digital/Downloads
//'now' is Sun Sep 18 23:32:06 2022 : 'file' last modified on Tue Jan 18 17:04:04 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CUP_Weapons_Galil
	{
		units[] = {};
		weapons[] = {"CUP_arifle_GALIL_BASE","CUP_arifle_Galil_black","CUP_arifle_Galil_556_black","CUP_arifle_Galil_SAR_black","CUP_arifle_Galil_SAR_black","CUP_arifle_Galil_black_no_ris","CUP_arifle_Galil_556_black_no_ris","CUP_arifle_Galil_SAR_black_no_ris"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Weapons_F","CUP_Weapons_Ammunition","A3_Anims_F_Config_Sdr"};
		version = "2012-12-28";
		magazines[] = {"CUP_25Rnd_762x51_Galil_Mag","CUP_25Rnd_762x51_Red_Tracers_Galil_Mag","CUP_25Rnd_762x51_m118_Galil_Mag","CUP_25Rnd_762x51_m80_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Red_Tracer_Galil_Mag","CUP_35Rnd_556x45_m855_Galil_Mag","CUP_35Rnd_556x45_m855_tracer_Galil_Mag","CUP_35Rnd_556x45_m855a1_Galil_Mag","CUP_35Rnd_556x45_m855a1_tracer_Galil_Mag","CUP_50Rnd_556x45_Galil_Mag","CUP_50Rnd_556x45_Red_Tracer_Galil_Mag","CUP_50Rnd_556x45_m855_Galil_Mag","CUP_50Rnd_556x45_m855_tracer_Galil_Mag","CUP_50Rnd_556x45_m855a1_Galil_Mag","CUP_50Rnd_556x45_m855a1_tracer_Galil_Mag"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_MuzzleSlot;
class asdg_UnderSlot;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgRecoils
{
	class Default{};
	class recoil_default: Default{};
	class recoil_galil556: recoil_default
	{
		muzzleOuter[] = {0.36,1.2,0.36,0.48};
		kickBack[] = {0.02,0.03};
		temporary = 0.004;
		permanent = 0.04;
	};
	class recoil_galil762: recoil_default
	{
		muzzleOuter[] = {0.3,1.6,0.36,0.5};
		kickBack[] = {0.024,0.048};
		temporary = 0.015;
		permanent = 0.04;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class CUP_25Rnd_762x51_Galil_Mag: CA_Magazine
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Weapons";
		scope = 2;
		picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		displayName = "25rnd Galil M993 AP";
		displayNameShort = "M993 AP";
		count = 25;
		tracersEvery = 0;
		ammo = "rhs_ammo_762x51_M993_Ball";
		mass = 10.5;
		initSpeed = 850;
		descriptionShort = "Caliber: 7.62x51mm NATO<br />Rounds: 25<br />Used in: Galil 7.62 Rifles";
		model = "\CUP\Weapons\CUP_Weapons_Galil\magazines\galil_762_mag.p3d";
		modelSpecial = "\CUP\Weapons\CUP_Weapons_Galil\proxies\galil_762_mag.p3d";
		modelSpecialIsProxy = 1;
	};
	class CUP_25Rnd_762x51_Red_Tracers_Galil_Mag: CUP_25Rnd_762x51_Galil_Mag
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Weapons";
		scope = 2;
		tracersEvery = 1;
		ammo = "rhs_ammo_762x51_M62_tracer";
		displayname = "25rnd M14 M62 (Tracer)";
		displayNameShort = "M62 Tracer";
	};
	class CUP_25Rnd_762x51_m118_Galil_Mag: CUP_25Rnd_762x51_Galil_Mag
	{
		ammo = "rhs_ammo_762x51_M118_Special_Ball";
		displayName = "25rnd Galil M118";
		displayNameShort = "M118 Ball";
	};
	class CUP_25Rnd_762x51_m80_Galil_Mag: CUP_25Rnd_762x51_Galil_Mag
	{
		ammo = "rhs_ammo_762x51_M80_Ball";
		displayname = "25rnd Galil M80";
		displayNameShort = "M80 Ball";
	};
	class CUP_35Rnd_556x45_Galil_Mag: CA_Magazine
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Weapons";
		scope = 2;
		picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		displayName = "35rnd STANAG M193";
		displayNameShort = "M193";
		count = 35;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		ammo = "rhs_ammo_556x45_M193_Ball";
		mass = 8.5;
		initSpeed = 950;
		descriptionShort = "Caliber: 5.56x45mm NATO<br/>Rounds: 35<br/>Used in: Galil 5.56 Rifles";
		model = "\CUP\Weapons\CUP_Weapons_Galil\magazines\galil_556_35_mag.p3d";
		modelSpecial = "\CUP\Weapons\CUP_Weapons_Galil\proxies\galil_556_35_mag.p3d";
		modelSpecialIsProxy = 1;
	};
	class CUP_35Rnd_556x45_Red_Tracer_Galil_Mag: CUP_35Rnd_556x45_Galil_Mag
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Weapons";
		scope = 2;
		tracersEvery = 1;
		ammo = "rhs_ammo_556x45_M196_Ball_Red";
		displayName = "35rnd STANAG M196 (Tracer)";
		displayNameShort = "M196 Tracer";
	};
	class CUP_35Rnd_556x45_m855_Galil_Mag: CUP_35Rnd_556x45_Galil_Mag
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Weapons";
		scope = 2;
		ammo = "rhs_ammo_556x45_M855_Ball";
		displayName = "35rnd STANAG M855";
		displayNameShort = "M855";
	};
	class CUP_35Rnd_556x45_m855_tracer_Galil_Mag: CUP_35Rnd_556x45_Galil_Mag
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Weapons";
		scope = 2;
		tracersEvery = 1;
		ammo = "rhs_ammo_556x45_M855_Ball_Red";
		displayName = "35rnd STANAG M856 (Tracer)";
		displayNameShort = "M856 Tracer";
	};
	class CUP_35Rnd_556x45_m855a1_Galil_Mag: CUP_35Rnd_556x45_Galil_Mag
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Weapons";
		scope = 2;
		ammo = "rhs_ammo_556x45_M855A1_Ball";
		displayName = "35rnd STANAG M855A1";
		displayNameShort = "M855A1 EPR";
	};
	class CUP_35Rnd_556x45_m855a1_tracer_Galil_Mag: CUP_35Rnd_556x45_Galil_Mag
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Weapons";
		tracersEvery = 1;
		scope = 2;
		ammo = "rhs_ammo_556x45_M855A1_Ball_Red";
		displayName = "35rnd STANAG M856A1 (Tracer)";
		displayNameShort = "M856A1 Tracer";
	};
	class CUP_50Rnd_556x45_Galil_Mag: CA_Magazine
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Weapons";
		scope = 2;
		picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		displayName = "50rnd STANAG M193";
		displayNameShort = "M193";
		count = 50;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		ammo = "rhs_ammo_556x45_M193_Ball";
		initSpeed = 950;
		mass = 14;
		descriptionShort = "Caliber: 5.56x45mm NATO<br/>Rounds: 50<br/>Used in: Galil 5.56 Rifles";
		model = "\CUP\Weapons\CUP_Weapons_Galil\magazines\galil_556_50_mag.p3d";
		modelSpecial = "\CUP\Weapons\CUP_Weapons_Galil\proxies\galil_556_50_mag.p3d";
		modelSpecialIsProxy = 1;
	};
	class CUP_50Rnd_556x45_Red_Tracer_Galil_Mag: CUP_50Rnd_556x45_Galil_Mag
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Weapons";
		scope = 2;
		tracersEvery = 1;
		ammo = "rhs_ammo_556x45_M196_Ball_Red";
		displayName = "50rnd STANAG M196 (Tracer)";
		displayNameShort = "M196 Tracer";
	};
	class CUP_50Rnd_556x45_m855_Galil_Mag: CUP_50Rnd_556x45_Galil_Mag
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Weapons";
		scope = 2;
		ammo = "rhs_ammo_556x45_M855_Ball";
		displayName = "50rnd STANAG M855";
		displayNameShort = "M855";
	};
	class CUP_50Rnd_556x45_m855_tracer_Galil_Mag: CUP_50Rnd_556x45_Galil_Mag
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Weapons";
		scope = 2;
		tracersEvery = 1;
		ammo = "rhs_ammo_556x45_M855_Ball_Red";
		displayName = "50rnd STANAG M856 (Tracer)";
		displayNameShort = "M856 Tracer";
	};
	class CUP_50Rnd_556x45_m855a1_Galil_Mag: CUP_50Rnd_556x45_Galil_Mag
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Weapons";
		scope = 2;
		ammo = "rhs_ammo_556x45_M855A1_Ball";
		displayName = "50rnd STANAG M855A1";
		displayNameShort = "M855A1 EPR";
	};
	class CUP_50Rnd_556x45_m855a1_tracer_Galil_Mag: CUP_50Rnd_556x45_Galil_Mag
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Weapons";
		tracersEvery = 1;
		scope = 2;
		ammo = "rhs_ammo_556x45_M855A1_Ball_Red";
		displayName = "50rnd STANAG M856A1 (Tracer)";
		displayNameShort = "M856A1 Tracer";
	};
};
class CfgWeapons
{
	class Rifle;
	class UGL_F;
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class muzzle_snds_H;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_arifle_GALIL_BASE: Rifle_Base_F
	{
		scope = 1;
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Weapons";
		magazines[] = {"CUP_25Rnd_762x51_Galil_Mag","CUP_25Rnd_762x51_Red_Tracers_Galil_Mag","CUP_25Rnd_762x51_m118_Galil_Mag","CUP_25Rnd_762x51_m80_Galil_Mag"};
		magazineReloadSwitchPhase = 0.4;
		recoil = "recoil_galil762";
		reloadAction = "CUP_GestureReloadAK";
		class Library
		{
			libTextDesc = "$STR_CUP_lib_Galil";
		};
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		maxZeroing = 1000;
		selectionfireanim = "zasleh";
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				directionName = "Konec hlavne";
				effectName = "RifleAssaultCloud";
				positionName = "Usti hlavne";
			};
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
			class RHS_BarrelRefract
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne up";
				effectName = "RHS_BarrelRefract";
			};
		};
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		descriptionShort = "$STR_CUP_dss_Galil";
		discreteDistance[] = {50,100,200,300,400};
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics1","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_01",0.56234133,1,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_02",0.56234133,1.2,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Mk18_Shot_SoundSet","Mk18_tail_SoundSet","Mk18_InteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_01",3.9810717,1,2000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_02",3.9810717,1,2000};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_03",3.9810717,1,2000};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_forest",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_houses",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_interior",1.5848932,1,2000};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_meadows",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_trees",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"Mk18_silencerShot_SoundSet","Mk18_silencerTail_SoundSet","Mk18_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_forest",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_houses",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_interior",1,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_meadows",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_trees",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 0.085;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_01",0.56234133,1,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_02",0.56234133,1.2,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Mk18_Shot_SoundSet","Mk18_tail_SoundSet","Mk18_InteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_01",3.9810717,1,2000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_02",3.9810717,1,2000};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_03",3.9810717,1,2000};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_forest",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_houses",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_interior",1.5848932,1,2000};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_meadows",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_trees",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"Mk18_silencerShot_SoundSet","Mk18_silencerTail_SoundSet","Mk18_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_forest",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_houses",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_interior",1.9952624,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_meadows",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_trees",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 0.085;
			recoil = "recoil_auto_ebr";
			recoilProne = "recoil_auto_prone_ebr";
			dispersion = 0.00073;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
		};
		class single_close_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 500;
			maxRangeProbab = 0.01;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 900;
			maxRangeProbab = 0.05;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
		};
		aiDispersionCoefY = 3;
		aiDispersionCoefX = 2;
		drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.01,1};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX",0.39810717,1,30};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 180;
			class CowsSlot{};
			class MuzzleSlot{};
			class PointerSlot{};
			class UnderBarrelSlot{};
			class asdg_OpticRail_Galil: asdg_OpticRail1913
			{
				iconPosition[] = {0.6,0.3};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "center";
			};
		};
		inertia = 0.7;
		dexterity = 1.3;
		class ItemInfo
		{
			priority = 1;
		};
	};
	class CUP_arifle_Galil_black: CUP_arifle_GALIL_BASE
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Weapons";
		scope = 2;
		magazines[] = {"CUP_25Rnd_762x51_Galil_Mag","CUP_25Rnd_762x51_Red_Tracers_Galil_Mag","CUP_25Rnd_762x51_m118_Galil_Mag","CUP_25Rnd_762x51_m80_Galil_Mag"};
		displayName = "$STR_CUP_dn_Galil_black";
		model = "\CUP\Weapons\CUP_Weapons_Galil\CUP_galil_arm_762.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_Galil\data\ui\gear_galil_ar_X_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_Galil\data\anim\hand_anim.rtm"};
		initSpeed = -0.9411765;
		hasBipod = 1;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 533.4;
		ace_railHeightAboveBore = 6.4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 98.12;
		};
	};
	class CUP_arifle_Galil_556_black: CUP_arifle_GALIL_BASE
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Weapons";
		scope = 2;
		displayName = "$STR_CUP_dn_Galil_556_black";
		model = "\CUP\Weapons\CUP_Weapons_Galil\CUP_galil_arm.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_Galil\data\ui\gear_galil_ar_X_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_Galil\data\anim\hand_anim.rtm"};
		initSpeed = -1;
		recoil = "recoil_galil556";
		hasBipod = 1;
		magazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Red_Tracer_Galil_Mag","CUP_35Rnd_556x45_m855_Galil_Mag","CUP_35Rnd_556x45_m855_tracer_Galil_Mag","CUP_35Rnd_556x45_m855a1_Galil_Mag","CUP_35Rnd_556x45_m855a1_tracer_Galil_Mag","CUP_50Rnd_556x45_Galil_Mag","CUP_50Rnd_556x45_Red_Tracer_Galil_Mag","CUP_50Rnd_556x45_m855_Galil_Mag","CUP_50Rnd_556x45_m855_tracer_Galil_Mag","CUP_50Rnd_556x45_m855a1_Galil_Mag","CUP_50Rnd_556x45_m855a1_tracer_Galil_Mag"};
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 457.2;
		ace_railHeightAboveBore = 6.4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 95.91;
		};
	};
	class CUP_arifle_Galil_SAR_black: CUP_arifle_GALIL_BASE
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Weapons";
		scope = 2;
		magazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Red_Tracer_Galil_Mag","CUP_35Rnd_556x45_m855_Galil_Mag","CUP_35Rnd_556x45_m855_tracer_Galil_Mag","CUP_35Rnd_556x45_m855a1_Galil_Mag","CUP_35Rnd_556x45_m855a1_tracer_Galil_Mag","CUP_50Rnd_556x45_Galil_Mag","CUP_50Rnd_556x45_Red_Tracer_Galil_Mag","CUP_50Rnd_556x45_m855_Galil_Mag","CUP_50Rnd_556x45_m855_tracer_Galil_Mag","CUP_50Rnd_556x45_m855a1_Galil_Mag","CUP_50Rnd_556x45_m855a1_tracer_Galil_Mag"};
		displayName = "$STR_CUP_dn_Galil_SAR_black";
		model = "\CUP\Weapons\CUP_Weapons_Galil\CUP_galil_SAR.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_Galil\data\ui\gear_galil_sar_X_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_Galil\data\anim\hand_anim.rtm"};
		initSpeed = -0.94736844;
		recoil = "recoil_galil556";
		hasBipod = 0;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 330.2;
		ace_railHeightAboveBore = 6.4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 82.68;
		};
	};
	class CUP_arifle_Galil_black_no_ris: CUP_arifle_Galil_black
	{
		displayName = "Galil ARM (7.62/Black) (No RIS)";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_OpticRail_Galil: asdg_MuzzleSlot{};
		};
	};
	class CUP_arifle_Galil_556_black_no_ris: CUP_arifle_Galil_556_black
	{
		displayName = "Galil ARM (5.56/Black) (No RIS)";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_OpticRail_Galil: asdg_MuzzleSlot{};
		};
	};
	class CUP_arifle_Galil_SAR_black_no_ris: CUP_arifle_Galil_SAR_black
	{
		displayName = "Galil SAR (5.56/Black) (No RIS)";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_OpticRail_Galil: asdg_MuzzleSlot{};
		};
	};
};
