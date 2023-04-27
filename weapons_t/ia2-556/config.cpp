
class CfgPatches
{
	class prbraz_weapons_ia2_556
	{
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"prbraz_ia2_556_F"};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class MuzzleSlot_556;
class CowsSlot_Rail;
class PointerSlot_Rail;
class UnderBarrelSlot_rail;

class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class prbraz_ia2_556_base_F: Rifle_Base_F
	{
		scope=0;

		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_beta\rifles\mk20\data\Anim\mk20.rtm"
		};

		reloadAction="GestureReloadARX2";

		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
		magazineWell[]=
		{
			"STANAG_556x45",
			"STANAG_556x45_Large"
		};
		magazineReloadSwitchPhase=0.47999999;
		htMin=8;
		htMax=920;
		inertia=0.5;
		aimTransitionSpeed=1.1;
		dexterity=1.5;
		initSpeed=800;
		recoil="recoil_spar";
		discreteDistance[] = {150, 250};
		discreteDistanceInitIndex = 0;
		discreteDistanceCameraPoint[] = {"OP_eye0", "OP_eye1"};
		cameraDir = "OP_look";
		maxZeroing=250;
		distanceZoomMin=0;
		distanceZoomMax=150;
		cartridgePos = "nabojnicestart";
		cartridgeVel = "nabojniceend";
		deployedPivot = "bipod";
		muzzleEnd = "konec hlavne";
		muzzlePos = "usti hlavne";

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_556
			{
				iconPosition[]={0,0.40000001};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[]={0.34999999,0.44999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				iconPosition[]={0.2,0.80000001};
				iconScale=0.30000001;
			};
			mass=140;
		};

		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01",
			0.44668359,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02",
			0.44668359,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03",
			0.44668359,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04",
			0.44668359,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_01",
			0.44668359,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_02",
			0.44668359,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_03",
			0.44668359,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_04",
			0.44668359,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_01",
			0.44668359,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_02",
			0.44668359,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_03",
			0.44668359,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_04",
			0.44668359,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.086999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.072999999,
			"bullet8",
			0.072999999,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};

		modes[]=
		{
			"Single",
			"FullAuto",
		};

		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\dry_Mk20",
			0.31622776,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\reload_Mk20",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",
			0.25118864,
			1,
			5
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType // this base class has base definitions that both standard and silenced sounds will inherit (sound of closure stays the same no matter what muzzle accessory is used)
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = { "A3\sounds_f\weapons\closure\closure_rifle_2", db-12, 1, 10 };
				closure2[] = { "A3\sounds_f\weapons\closure\closure_rifle_3", db-12, 1, 10 };
				soundClosure[] = { closure1, 0.5, closure2, 0.5 };
			};

			class StandardSound : BaseSoundModeType // Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
				begin1[] = { "A3\Sounds_F\weapons\ebr\ebr_st_4", db0, 1, 500 };
				begin2[] = { "A3\Sounds_F\weapons\ebr\ebr_st_5", db0, 1, 500 };
				begin3[] = { "A3\Sounds_F\weapons\ebr\ebr_st_6", db0, 1, 500 };
				soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
			};

			class SilencedSound : BaseSoundModeType // Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
				begin1[] = { "A3\sounds_f\weapons\ebr\silencer_mk18_01", db-1, 1, 200 };
				begin2[] = { "A3\sounds_f\weapons\ebr\silencer_mk18_02", db-1, 1, 200 };
				soundBegin[] = { begin1, 0.5, begin2, 0.5 };
			};

			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};

			reloadTime=0.07;
			dispersion=0.00116;
			recoil="recoil_single_mk20";
			recoilProne="recoil_single_prone_mk20";
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType // this base class has base definitions that both standard and silenced sounds will inherit (sound of closure stays the same no matter what muzzle accessory is used)
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = { "A3\sounds_f\weapons\closure\closure_rifle_2", db-12, 1, 10 };
				closure2[] = { "A3\sounds_f\weapons\closure\closure_rifle_3", db-12, 1, 10 };
				soundClosure[] = { closure1, 0.5, closure2, 0.5 };
			};

			class StandardSound : BaseSoundModeType // Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
				begin1[] = { "A3\Sounds_F\weapons\ebr\ebr_st_4", db0, 1, 500 };
				begin2[] = { "A3\Sounds_F\weapons\ebr\ebr_st_5", db0, 1, 500 };
				begin3[] = { "A3\Sounds_F\weapons\ebr\ebr_st_6", db0, 1, 500 };
				soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
			};

			class SilencedSound : BaseSoundModeType // Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
				begin1[] = { "A3\sounds_f\weapons\ebr\silencer_mk18_01", db-1, 1, 200 };
				begin2[] = { "A3\sounds_f\weapons\ebr\silencer_mk18_02", db-1, 1, 200 };
				soundBegin[] = { begin1, 0.5, begin2, 0.5 };
			};
			reloadTime=0.07;
			dispersion=0.00116;
			recoil="recoil_auto_mk20";
			recoilProne="recoil_auto_prone_mk20";
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};

		class GunParticles : GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
	};

	class prbraz_ia2_556_F: prbraz_ia2_556_base_F
	{
		scope = 2;
		displayName="Imbel IA2 5,56mm";

		picture="\projectbrazil\weapons_t\ia2-556\data\UI\gear_prbraz_ia2_556_ca.paa";
		UiPicture = "\projectbrazil\weapons_t\ia2-556\data\UI\gear_prbraz_ia2_556_ca.paa";
		overviewPicture="\projectbrazil\weapons_t\ia2-556\data\UI\gear_prbraz_ia2_556_ca.paa";
		model = "\projectbrazil\weapons_t\ia2-556\ia2-556.p3d";

		weaponInfoType = "RscWeaponZeroing";

		muzzles[] = {this};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
		};
	};
};