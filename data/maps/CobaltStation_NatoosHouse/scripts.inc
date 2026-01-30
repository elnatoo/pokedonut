CobaltStation_NatoosHouse_MapScripts::
	.byte 0


CobaltStation_NatoosHouse_EventScript_CheckPC::
# 4 "data/maps/CobaltStation_NatoosHouse/scripts.pory"
	lockall
# 5 "data/maps/CobaltStation_NatoosHouse/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 6 "data/maps/CobaltStation_NatoosHouse/scripts.pory"
	special DoPCTurnOnEffect
# 7 "data/maps/CobaltStation_NatoosHouse/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 8 "data/maps/CobaltStation_NatoosHouse/scripts.pory"
	special BedroomPC
# 9 "data/maps/CobaltStation_NatoosHouse/scripts.pory"
	waitstate
# 10 "data/maps/CobaltStation_NatoosHouse/scripts.pory"
	releaseall
	end


CobaltStation_NatoosHouse_EventScript_TurnOffPC::
# 15 "data/maps/CobaltStation_NatoosHouse/scripts.pory"
	lockall
# 16 "data/maps/CobaltStation_NatoosHouse/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 17 "data/maps/CobaltStation_NatoosHouse/scripts.pory"
	playse SE_PC_OFF
# 18 "data/maps/CobaltStation_NatoosHouse/scripts.pory"
	special DoPCTurnOffEffect
# 19 "data/maps/CobaltStation_NatoosHouse/scripts.pory"
	waitstate
# 20 "data/maps/CobaltStation_NatoosHouse/scripts.pory"
	releaseall
	end


CobaltStation_NatoosHouse_EventScript_Notebook::
# 25 "data/maps/CobaltStation_NatoosHouse/scripts.pory"
	msgbox CobaltStation_NatoosHouse_Text_Notebook, MSGBOX_SIGN
	end


CobaltStation_NatoosHouse_EventScript_GameConsole::
# 36 "data/maps/CobaltStation_NatoosHouse/scripts.pory"
	msgbox CobaltStation_NatoosHouse_Text_GameConsole, MSGBOX_SIGN
	end


CobaltStation_NatoosHouse_Text_Notebook::
# 29 "data/maps/CobaltStation_NatoosHouse/scripts.pory"
	.string "(This is my journal.\n"
	.string "It contains notes about Pokémon\l"
	.string "battling.\p"
	.string "Best not to lose it!)$"

CobaltStation_NatoosHouse_Text_GameConsole::
# 40 "data/maps/CobaltStation_NatoosHouse/scripts.pory"
	.string "(It's my old GameCube.\n"
	.string "It's a bit old, but still functional!)$"
