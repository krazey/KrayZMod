
// retexture mod for the KSK troops (BIS models) by Brainbug

#define private		0
#define protected		1
#define public		2

#define true	1
#define false	0

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

class CfgPatches {
	class ksk_mod {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CACharacters", CA_E, "CACharacters_E_Head", "CACharacters2", "CACharacters_E", "CAWeapons_E"};
	};
};

class CfgVehicles {
	class Man;						// External class references
	class SoldierWB;
	class GER_Soldier_base_EP1;
	class GER_Soldier_EP1;
	class GER_Soldier_Medic_EP1;
	class GER_Soldier_TL_EP1;
	class GER_Soldier_Scout_EP1;
	class GER_Soldier_MG_EP1;
	class ReammoBox;
	class ReammoBox_EP1;
	class Bag_Base_EP1;
	class US_Backpack_EP1;
	class DE_Backpack_Specops_EP1;
	
// desert (3-color flecktarn)	
	
	class GER_Soldier_EP1_des : GER_Soldier_EP1 {					// rifleman (balaclava)
		camouflage = 0.8;	
		model = "\ksk_mod\GER_rifleman_des";
	};
	
	class GER_Soldier_Medic_EP1_des : GER_Soldier_Medic_EP1 {		// medic (boonie hat + medic dummy backpack)
		camouflage = 0.8;	
		model = "\ksk_mod\GER_medic_des";
	};
	
	class GER_Soldier_TL_EP1_des : GER_Soldier_TL_EP1 {				// team leader (boonie hat)
		camouflage = 0.7;	
		displayName = "Team Leader (desert)";
		model = "\ksk_mod\GER_rifleman_light_des";
		backpack = "DE_Backpack_Specops_EP1_des";
		weapons[] = {"G36K_camo", "NVGoggles", "Binocular_Vector", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "itemGPS", M9SD};
		magazines[] = {"30Rnd_556x45_G36", "30Rnd_556x45_G36", "30Rnd_556x45_G36", "30Rnd_556x45_G36", "30Rnd_556x45_G36", "30Rnd_556x45_G36", "30Rnd_556x45_G36", "30Rnd_556x45_G36", "IR_Strobe_Target", "IR_Strobe_Target", "SmokeShellRed", "SmokeShellGreen", "15Rnd_9x19_M9SD", "15Rnd_9x19_M9SD", "15Rnd_9x19_M9SD", "15Rnd_9x19_M9SD"};
		respawnWeapons[] = {"G36K_camo", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "Binocular_Vector", "itemGPS", M9SD};
		respawnMagazines[] = {"30Rnd_556x45_G36", "30Rnd_556x45_G36", "30Rnd_556x45_G36", "30Rnd_556x45_G36", "IR_Strobe_Target", "SmokeShellRed", "SmokeShellGreen", "15Rnd_9x19_M9SD", "15Rnd_9x19_M9SD"};
	};
	
	class GER_Soldier_Scout_EP1_des : GER_Soldier_Scout_EP1 {		// scout (balaclava)
		camouflage = 0.7;	
		displayName = "Scout (desert)";
		model = "\ksk_mod\GER_rifleman_des";
		backpack = "DE_Backpack_Specops_EP1_des";
		weapons[] = {"G36_C_SD_camo", "NVGoggles", "Binocular_Vector", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "itemGPS", M9SD};
		magazines[] = {"30Rnd_556x45_G36SD", "30Rnd_556x45_G36SD", "30Rnd_556x45_G36SD", "30Rnd_556x45_G36SD", "30Rnd_556x45_G36SD", "30Rnd_556x45_G36SD", "PipeBomb", "PipeBomb", "IR_Strobe_Target", "SmokeShellRed", "15Rnd_9x19_M9SD", "15Rnd_9x19_M9SD", "15Rnd_9x19_M9SD", "15Rnd_9x19_M9SD"};
		respawnWeapons[] = {"G36_C_SD_camo", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "Binocular_Vector", "itemGPS", M9SD};
		respawnMagazines[] = {"30Rnd_556x45_G36SD", "30Rnd_556x45_G36SD", "30Rnd_556x45_G36SD", "30Rnd_556x45_G36SD", "HandGrenade_West", "IR_Strobe_Target", "SmokeShellRed", "15Rnd_9x19_M9SD", "15Rnd_9x19_M9SD"};
	};
	
	class GER_Soldier_MG_EP1_des : GER_Soldier_MG_EP1 {				// automatic rifleman (balaclava)
		camouflage = 0.8;	
		displayName = "Automatic Rifleman (desert)";
		model = "\ksk_mod\GER_rifleman_des";
		backpack = "DE_Backpack_Specops_EP1_des";
		weapons[] = {"MG36_camo", "NVGoggles", "Binocular_Vector", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "itemGPS", M9SD};
		magazines[] = {"100Rnd_556x45_BetaCMag", "100Rnd_556x45_BetaCMag", "100Rnd_556x45_BetaCMag", "100Rnd_556x45_BetaCMag", "HandGrenade_West", "HandGrenade_West", "IR_Strobe_Target", "SmokeShellRed", "15Rnd_9x19_M9SD", "15Rnd_9x19_M9SD", "15Rnd_9x19_M9SD", "15Rnd_9x19_M9SD"};
		respawnWeapons[] = {"MG36_camo", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "Binocular_Vector", "itemGPS", M9SD};
		respawnMagazines[] = {"100Rnd_556x45_BetaCMag", "100Rnd_556x45_BetaCMag", "100Rnd_556x45_BetaCMag", "HandGrenade_West", "IR_Strobe_Target", "SmokeShellRed", "15Rnd_9x19_M9SD", "15Rnd_9x19_M9SD"};
	};

	class DE_Backpack_Specops_EP1_des : DE_Backpack_Specops_EP1 {
		scope = public;
		displayName = "Backpack FT3";
		model = "\ksk_mod\backpack_ger_des.p3d";
		picture = "\ksk_mod\backpack_des_ca.paa";
	};
	
// woodland (5-color flecktarn)
	
	class GER_Soldier_EP1_wdl : GER_Soldier_EP1_des {					// rifleman (balaclava)
		model = "\ksk_mod\GER_rifleman_wdl";
	};
	
	class GER_Soldier_Medic_EP1_wdl : GER_Soldier_Medic_EP1_des {		// medic (boonie hat + medic dummy backpack)
		model = "\ksk_mod\GER_medic_wdl";
	};
	
	class GER_Soldier_TL_EP1_wdl : GER_Soldier_TL_EP1_des {				// team leader (boonie hat)
		displayName = "Team Leader (woodland)";
		model = "\ksk_mod\GER_rifleman_light_wdl";
		backpack = "DE_Backpack_Specops_EP1_wdl";
	};
	
	class GER_Soldier_Scout_EP1_wdl : GER_Soldier_Scout_EP1_des {		// scout (balaclava)
		displayName = "Scout (woodland)";
		model = "\ksk_mod\GER_rifleman_wdl";
		backpack = "DE_Backpack_Specops_EP1_wdl";
	};
	
	class GER_Soldier_MG_EP1_wdl : GER_Soldier_MG_EP1_des {				// automatic rifleman (balaclava)
		displayName = "Automatic Rifleman (woodland)";
		model = "\ksk_mod\GER_rifleman_wdl";
		backpack = "DE_Backpack_Specops_EP1_wdl";
	};
	
	class DE_Backpack_Specops_EP1_wdl : DE_Backpack_Specops_EP1 {
		scope = public;
		displayName = "Backpack FT5";
		model = "\ksk_mod\backpack_ger_wdl.p3d";
		picture = "\ksk_mod\backpack_wdl_ca.paa";
	};
};
	
