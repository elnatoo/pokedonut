CobaltStation_MapScripts::
	.byte 0


CobaltStation_EventScript_TrainStationSign::
# 4 "data/maps/CobaltStation/scripts.pory"
	lockall
# 5 "data/maps/CobaltStation/scripts.pory"
	msgbox CobaltStation_Text_TrainStationSign
# 6 "data/maps/CobaltStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CobaltStation_Movement_TrainStationSign
# 7 "data/maps/CobaltStation/scripts.pory"
	waitmovement 0
# 8 "data/maps/CobaltStation/scripts.pory"
	special SpawnCameraObject
# 9 "data/maps/CobaltStation/scripts.pory"
	applymovement LOCALID_CAMERA, CobaltStation_Movement_CameraPanRight
# 10 "data/maps/CobaltStation/scripts.pory"
	waitmovement 0
# 11 "data/maps/CobaltStation/scripts.pory"
	special RemoveCameraObject
# 13 "data/maps/CobaltStation/scripts.pory"
	releaseall
	return


# 21 "data/maps/CobaltStation/scripts.pory"
CobaltStation_Movement_TrainStationSign:
# 22 "data/maps/CobaltStation/scripts.pory"
	face_right
	step_end

# 25 "data/maps/CobaltStation/scripts.pory"
CobaltStation_Movement_CameraPanRight:
# 26 "data/maps/CobaltStation/scripts.pory"
	walk_right
# 27 "data/maps/CobaltStation/scripts.pory"
	walk_right
# 28 "data/maps/CobaltStation/scripts.pory"
	step_end

CobaltStation_EventScript_NatoosHouseSign::
# 32 "data/maps/CobaltStation/scripts.pory"
	lockall
# 33 "data/maps/CobaltStation/scripts.pory"
	msgbox CobaltStation_EventScript_NatoosHouseSign_Text_0
# 34 "data/maps/CobaltStation/scripts.pory"
	releaseall
	return


CobaltStation_EventScript_NatoosHouseSign_Text_0:
# 33 "data/maps/CobaltStation/scripts.pory"
	.string "{PLAYER}'s House.$"

CobaltStation_Text_TrainStationSign::
# 16 "data/maps/CobaltStation/scripts.pory"
	.string "Azure Train Station.\p"
	.string "Beware of trains and what items they\n"
	.string "may drop!$"
