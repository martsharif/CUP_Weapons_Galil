class CfgMagazines //TODO: Move to CUP_Weapons_Ammunition
{
	class CA_Magazine;
	/* Galil 7,62 */
	class CUP_25Rnd_762x51_Galil_Mag :  CA_Magazine
	{
		author = "$STR_CUP_AUTHOR_STRING";
		CUP_WEAPONS_DLC;
		scope = public;
		picture="\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		displayName = "$STR_CUP_dn_galil_25rnd_M";
		displayNameShort = "$STR_CUP_dns_76251";
		count = 25;
		tracersEvery = 0;
		ammo = "B_762x51_Ball";
		mass = 10.5;
		initSpeed=850;
		descriptionShort = "$STR_CUP_dss_galil_25rnd_M";
		model = "\CUP\Weapons\CUP_Weapons_Galil\magazines\galil_762_mag.p3d";
		modelSpecial = "\CUP\Weapons\CUP_Weapons_Galil\proxies\galil_762_mag.p3d";
		modelSpecialIsProxy = 1;
	};
	class CUP_25Rnd_762x51_Red_Tracers_Galil_Mag : CUP_25Rnd_762x51_Galil_Mag
	{
		author = "$STR_CUP_AUTHOR_STRING";
		CUP_WEAPONS_DLC;
		scope = public;
		tracersEvery=1;
		ammo="B_762x51_Tracer_Red";
		displayName = "$STR_CUP_dn_galil_25rnd_te1_r_M";
		displayNameShort = "$STR_CUP_dns_76251_Red";
	};
	class CUP_25Rnd_762x51_Green_Tracers_Galil_Mag : CUP_25Rnd_762x51_Galil_Mag
	{
		author = "$STR_CUP_AUTHOR_STRING";
		CUP_WEAPONS_DLC;
		scope = public;
		tracersEvery=1;
		ammo="B_762x51_Tracer_Green";
		displayName = "$STR_CUP_dn_galil_25rnd_te1_g_M";
		displayNameShort = "$STR_CUP_dns_76251_Green";
	};

	/* Galil 5,56*/
	class CUP_35Rnd_556x45_Galil_Mag :  CA_Magazine
	{
		author = "$STR_CUP_AUTHOR_STRING";
		CUP_WEAPONS_DLC;
		scope = public;
		picture="\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		displayName = "$STR_CUP_dn_galil_35rnd_M";
		displayNameShort = "$STR_CUP_dns_55645";
		count = 35;
		tracersEvery = 0;
		lastRoundsTracer = 4;
		ammo = "B_556x45_Ball";
		mass = 8.5;
		initSpeed=950;
		descriptionShort = "$STR_CUP_dss_galil_35rnd_M";
		model = "\CUP\Weapons\CUP_Weapons_Galil\magazines\galil_556_35_mag.p3d";
		modelSpecial = "\CUP\Weapons\CUP_Weapons_Galil\proxies\galil_556_35_mag.p3d";
		modelSpecialIsProxy = 1;
	};
	class CUP_35Rnd_556x45_Red_Tracer_Galil_Mag : CUP_35Rnd_556x45_Galil_Mag
	{
		author = "$STR_CUP_AUTHOR_STRING";
		CUP_WEAPONS_DLC;
		scope = public;
		tracersEvery=1;
		ammo = "B_556x45_Ball_Tracer_Red";
		displayName = "$STR_CUP_dn_galil_35rnd_te1_r_M";
		displayNameShort = "$STR_CUP_dns_55645_Red";
	};
	class CUP_35Rnd_556x45_Green_Tracer_Galil_Mag : CUP_35Rnd_556x45_Galil_Mag
	{
		author = "$STR_CUP_AUTHOR_STRING";
		CUP_WEAPONS_DLC;
		scope = public;
		tracersEvery=1;
		ammo = "B_556x45_Ball_Tracer_Green";
		displayName = "$STR_CUP_dn_galil_35rnd_te1_g_M";
		displayNameShort = "$STR_CUP_dns_55645_Green";
	};

	class CUP_50Rnd_556x45_Galil_Mag :  CA_Magazine
	{
		author = "$STR_CUP_AUTHOR_STRING";
		CUP_WEAPONS_DLC;
		scope = public;
		picture="\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		displayName = "$STR_CUP_dn_galil_50rnd_M";
		displayNameShort = "$STR_CUP_dns_55645";
		count = 50;
		tracersEvery = 0;
		lastRoundsTracer = 4;
		ammo = "B_556x45_Ball";
		initSpeed=950;
		mass = 14;
		descriptionShort = "$STR_CUP_dss_galil_50rnd_M";
		model = "\CUP\Weapons\CUP_Weapons_Galil\magazines\galil_556_50_mag.p3d";
		modelSpecial = "\CUP\Weapons\CUP_Weapons_Galil\proxies\galil_556_50_mag.p3d";
		modelSpecialIsProxy = 1;
	};
	class CUP_50Rnd_556x45_Red_Tracer_Galil_Mag : CUP_50Rnd_556x45_Galil_Mag
	{
		author = "$STR_CUP_AUTHOR_STRING";
		CUP_WEAPONS_DLC;
		scope = public;
		tracersEvery=1;
		ammo = "B_556x45_Ball_Tracer_Red";
		displayName = "$STR_CUP_dn_galil_50rnd_te1_r_M";
		displayNameShort = "$STR_CUP_dns_55645_Red";
	};
	class CUP_50Rnd_556x45_Green_Tracer_Galil_Mag : CUP_50Rnd_556x45_Galil_Mag
	{
		author = "$STR_CUP_AUTHOR_STRING";
		CUP_WEAPONS_DLC;
		scope = public;
		tracersEvery=1;
		ammo = "B_556x45_Ball_Tracer_Green";
		displayName = "$STR_CUP_dn_galil_50rnd_te1_g_M";
		displayNameShort = "$STR_CUP_dns_55645_Green";
	};
};
