class CfgFactionClasses 
{
	class BNB_FA_Nor_Faction 
	{
		displayName = "JEF Nordic";
		side = 1;
		icon = "\A3\ui_f\data\map\markers\flags\Nor_ca.paa";
		priority = 1;
	};
};

class CfgEditorSubcategories 
{
	class BNB_FA_Nor_MTP 
	{
		displayName = "JEF Nordic (MTP)";
	};
	class BNB_FA_Nor_Desert 
	{
		displayName = "JEF Nor (Desert)";
	};
	class BNB_FA_Nor_Woodland 
	{
		displayName = "JEF Nordic (Woodland)";
	};
		class BNB_FA_Nor_Winter 
	{
		displayName = "JEF Nor (Winter)";
	};
};

class CfgGroups 
{
	class WEST 
	{
		name="BLUFOR";
		class BNB_FA_Nor_Group
		{
		name = "JEF Nordic";
			class BNB_FA_Nor_MTP 
			{
				name = "JEF Nor (MTP)";
				class BNB_FA_Nor_Section_MTP_Open
				{
					name = "Section (Open/Base)";
					side = 1;
					faction = "BNB_FA_Nor_MTP";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_IC_MTP";
            			rank="SERGEANT";
            			position[]={-10,-10,0};
          			};
					class Unit1
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_IC_MTP";
            			rank="CORPORAL";
            			position[]={5,-5,0};
          			};
					class Unit2
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Medic_MTP";
            			rank="PRIVATE";
            			position[]={-5,-5,0};
          			};
					class Unit3
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Rifleman_MTP";
            			rank="PRIVATE";
            			position[]={10,-10,0};
          			};
					class Unit4
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Rifleman_MTP";
            			rank="PRIVATE";
            			position[]={0,-0,0};
          			};
					class Unit5
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Rifleman_MTP";
            			rank="PRIVATE";
            			position[]={15,-15,0};
          			};
					class Unit6
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Rifleman_MTP";
            			rank="PRIVATE";
            			position[]={-15,-15,0};
          			};
					class Unit7
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Rifleman_MTP";
            			rank="PRIVATE";
            			position[]={20,-20,0};
          			};
				};
			
			};
			class BNB_FA_Nor_Desert 
			{
				name = "JEF Nor (Desert)";
				class BNB_FA_Nor_Section_Desert_Open
				{
					name = "Section (Open/Base)";
					side = 1;
					faction = "BNB_FA_Nor_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_IC_Desert";
            			rank="SERGEANT";
            			position[]={-10,-10,0};
          			};
					class Unit1
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_IC_Desert";
            			rank="CORPORAL";
            			position[]={5,-5,0};
          			};
					class Unit2
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Medic_Desert";
            			rank="PRIVATE";
            			position[]={-5,-5,0};
          			};
					class Unit3
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Rifleman_Desert";
            			rank="PRIVATE";
            			position[]={10,-10,0};
          			};
					class Unit4
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Rifleman_Desert";
            			rank="PRIVATE";
            			position[]={0,-0,0};
          			};
					class Unit5
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Rifleman_Desert";
            			rank="PRIVATE";
            			position[]={15,-15,0};
          			};
					class Unit6
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Rifleman_Desert";
            			rank="PRIVATE";
            			position[]={-15,-15,0};
          			};
					class Unit7
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Rifleman_Desert";
            			rank="PRIVATE";
            			position[]={20,-20,0};
          			};
				};
			};	
			class BNB_FA_Nor_Woodland 
			{
				name = "JEF Nor (Woodland)";
				class BNB_FA_Nor_Section_Woodland_Open
				{
					name = "Section (Open/Base)";
					side = 1;
					faction = "BNB_FA_Nor_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_IC_Woodland";
            			rank="SERGEANT";
            			position[]={-10,-10,0};
          			};
					class Unit1
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_IC_Woodland";
            			rank="CORPORAL";
            			position[]={5,-5,0};
          			};
					class Unit2
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Medic_Woodland";
            			rank="PRIVATE";
            			position[]={-5,-5,0};
          			};
					class Unit3
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Rifleman_Woodland";
            			rank="PRIVATE";
            			position[]={10,-10,0};
          			};
					class Unit4
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Rifleman_Woodland";
            			rank="PRIVATE";
            			position[]={0,-0,0};
          			};
					class Unit5
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Rifleman_Woodland";
            			rank="PRIVATE";
            			position[]={15,-15,0};
          			};
					class Unit6
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Rifleman_Woodland";
            			rank="PRIVATE";
            			position[]={-15,-15,0};
          			};
					class Unit7
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Rifleman_Woodland";
            			rank="PRIVATE";
            			position[]={20,-20,0};
          			};
				};
			
			};
			class BNB_FA_Nor_Winter 
			{
				name = "JEF Nor (Winter)";
				class BNB_FA_Nor_Section_Winter_Open
				{
					name = "Section (Open/Base)";
					side = 1;
					faction = "BNB_FA_Nor_Winter";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_IC_Winter";
            			rank="SERGEANT";
            			position[]={-10,-10,0};
          			};
					class Unit1
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_IC_Winter";
            			rank="CORPORAL";
            			position[]={5,-5,0};
          			};
					class Unit2
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Medic_Winter";
            			rank="PRIVATE";
            			position[]={-5,-5,0};
          			};
					class Unit3
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Rifleman_Winter";
            			rank="PRIVATE";
            			position[]={10,-10,0};
          			};
					class Unit4
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Rifleman_Winter";
            			rank="PRIVATE";
            			position[]={0,-0,0};
          			};
					class Unit5
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Rifleman_Winter";
            			rank="PRIVATE";
            			position[]={15,-15,0};
          			};
					class Unit6
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Rifleman_Winter";
            			rank="PRIVATE";
            			position[]={-15,-15,0};
          			};
					class Unit7
          			{
            			side=1;
            			vehicle="BNB_FA_Nor_Rifleman_Winter";
            			rank="PRIVATE";
            			position[]={20,-20,0};
          			};
				};
			
			};
		};
	};
};
