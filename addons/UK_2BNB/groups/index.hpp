class CfgFactionClasses 
{
	class BNB_FA_UK_Faction 
	{
		displayName = "2BNB UK";
		side = 1;
		icon = "\A3\ui_f\data\map\markers\flags\UK_ca.paa";
		priority = 1;
	};
};

class CfgEditorSubcategories 
{
	class BNB_FA_UK_MTP 
	{
		displayName = "2BNB UK (MTP)";
	};
	class BNB_FA_UK_Desert 
	{
		displayName = "2BNB UK (Desert)";
	};
	class BNB_FA_UK_Woodland 
	{
		displayName = "2BNB UK (Woodland)";
	};
		class BNB_FA_UK_Winter 
	{
		displayName = "2BNB UK (Winter)";
	};
};

class CfgGroups 
{
	class WEST 
	{
		name="BLUFOR";
		class BNB_FA_UK_Group
		{
		name = "2BNB UK";
			class BNB_FA_UK_MTP 
			{
				name = "2BNB UK (MTP)";
				class BNB_FA_UK_Section_MTP_Open
				{
					name = "Section (Open/Base)";
					side = 1;
					faction = "BNB_FA_UK_MTP";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
          			{
            			side=1;
            			vehicle="BNB_FA_UK_IC_MTP";
            			rank="SERGEANT";
            			position[]={-10,-10,0};
          			};
					class Unit1
          			{
            			side=1;
            			vehicle="BNB_FA_UK_IC_MTP";
            			rank="CORPORAL";
            			position[]={5,-5,0};
          			};
					class Unit2
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Medic_MTP";
            			rank="PRIVATE";
            			position[]={-5,-5,0};
          			};
					class Unit3
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Rifleman_MTP";
            			rank="PRIVATE";
            			position[]={10,-10,0};
          			};
					class Unit4
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Rifleman_MTP";
            			rank="PRIVATE";
            			position[]={0,-0,0};
          			};
					class Unit5
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Rifleman_MTP";
            			rank="PRIVATE";
            			position[]={15,-15,0};
          			};
					class Unit6
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Rifleman_MTP";
            			rank="PRIVATE";
            			position[]={-15,-15,0};
          			};
					class Unit7
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Rifleman_MTP";
            			rank="PRIVATE";
            			position[]={20,-20,0};
          			};
				};
			
			};
			class BNB_FA_UK_Desert 
			{
				name = "2BNB UK (Desert)";
				class BNB_FA_UK_Section_Desert_Open
				{
					name = "Section (Open/Base)";
					side = 1;
					faction = "BNB_FA_UK_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
          			{
            			side=1;
            			vehicle="BNB_FA_UK_IC_Desert";
            			rank="SERGEANT";
            			position[]={-10,-10,0};
          			};
					class Unit1
          			{
            			side=1;
            			vehicle="BNB_FA_UK_IC_Desert";
            			rank="CORPORAL";
            			position[]={5,-5,0};
          			};
					class Unit2
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Medic_Desert";
            			rank="PRIVATE";
            			position[]={-5,-5,0};
          			};
					class Unit3
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Rifleman_Desert";
            			rank="PRIVATE";
            			position[]={10,-10,0};
          			};
					class Unit4
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Rifleman_Desert";
            			rank="PRIVATE";
            			position[]={0,-0,0};
          			};
					class Unit5
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Rifleman_Desert";
            			rank="PRIVATE";
            			position[]={15,-15,0};
          			};
					class Unit6
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Rifleman_Desert";
            			rank="PRIVATE";
            			position[]={-15,-15,0};
          			};
					class Unit7
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Rifleman_Desert";
            			rank="PRIVATE";
            			position[]={20,-20,0};
          			};
				};
			};	
			class BNB_FA_UK_Woodland 
			{
				name = "2BNB UK (Woodland)";
				class BNB_FA_UK_Section_Woodland_Open
				{
					name = "Section (Open/Base)";
					side = 1;
					faction = "BNB_FA_UK_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
          			{
            			side=1;
            			vehicle="BNB_FA_UK_IC_Woodland";
            			rank="SERGEANT";
            			position[]={-10,-10,0};
          			};
					class Unit1
          			{
            			side=1;
            			vehicle="BNB_FA_UK_IC_Woodland";
            			rank="CORPORAL";
            			position[]={5,-5,0};
          			};
					class Unit2
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Medic_Woodland";
            			rank="PRIVATE";
            			position[]={-5,-5,0};
          			};
					class Unit3
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Rifleman_Woodland";
            			rank="PRIVATE";
            			position[]={10,-10,0};
          			};
					class Unit4
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Rifleman_Woodland";
            			rank="PRIVATE";
            			position[]={0,-0,0};
          			};
					class Unit5
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Rifleman_Woodland";
            			rank="PRIVATE";
            			position[]={15,-15,0};
          			};
					class Unit6
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Rifleman_Woodland";
            			rank="PRIVATE";
            			position[]={-15,-15,0};
          			};
					class Unit7
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Rifleman_Woodland";
            			rank="PRIVATE";
            			position[]={20,-20,0};
          			};
				};
			
			};
			class BNB_FA_UK_Winter 
			{
				name = "2BNB UK (Winter)";
				class BNB_FA_UK_Section_Winter_Open
				{
					name = "Section (Open/Base)";
					side = 1;
					faction = "BNB_FA_UK_Winter";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
          			{
            			side=1;
            			vehicle="BNB_FA_UK_IC_Winter";
            			rank="SERGEANT";
            			position[]={-10,-10,0};
          			};
					class Unit1
          			{
            			side=1;
            			vehicle="BNB_FA_UK_IC_Winter";
            			rank="CORPORAL";
            			position[]={5,-5,0};
          			};
					class Unit2
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Medic_Winter";
            			rank="PRIVATE";
            			position[]={-5,-5,0};
          			};
					class Unit3
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Rifleman_Winter";
            			rank="PRIVATE";
            			position[]={10,-10,0};
          			};
					class Unit4
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Rifleman_Winter";
            			rank="PRIVATE";
            			position[]={0,-0,0};
          			};
					class Unit5
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Rifleman_Winter";
            			rank="PRIVATE";
            			position[]={15,-15,0};
          			};
					class Unit6
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Rifleman_Winter";
            			rank="PRIVATE";
            			position[]={-15,-15,0};
          			};
					class Unit7
          			{
            			side=1;
            			vehicle="BNB_FA_UK_Rifleman_Winter";
            			rank="PRIVATE";
            			position[]={20,-20,0};
          			};
				};
			
			};
		};
	};
};
