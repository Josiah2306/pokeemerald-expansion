LavenderTown_VolunteerPokemonHouse_Frlg_MapScripts::
	.byte 0

LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji::
	lock
	faceplayer
	goto_if_set FLAG_GOT_POKE_FLUTE, LavenderTown_VolunteerPokemonHouse_EventScript_AlreadyHavePokeFlute
	msgbox LavenderTown_VolunteerPokemonHouse_Text_IdLikeYouToHaveThis
	checkitemspace ITEM_POKE_FLUTE
	goto_if_eq VAR_RESULT, FALSE, LavenderTown_VolunteerPokemonHouse_EventScript_NoRoomForPokeFlute
	setflag FLAG_GOT_POKE_FLUTE
	giveitem_msg LavenderTown_VolunteerPokemonHouse_Text_ReceivedPokeFluteFromMrFuji, ITEM_POKE_FLUTE, 1, MUS_RG_OBTAIN_KEY_ITEM
	msgbox LavenderTown_VolunteerPokemonHouse_Text_ExplainPokeFlute
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_AlreadyHavePokeFlute::
	msgbox LavenderTown_VolunteerPokemonHouse_Text_HasPokeFluteHelpedYou
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_NoRoomForPokeFlute::
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MustMakeRoomForThis
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_LittleGirl::
	lock
	faceplayer
	famechecker FAMECHECKER_MRFUJI, 0
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiLooksAfterOrphanedMons
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_LittleBoy::
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MonsNiceToHug, MSGBOX_NPC
	end

LavenderTown_VolunteerPokemonHouse_EventScript_Youngster::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_MR_FUJI, LavenderTown_VolunteerPokemonHouse_EventScript_YoungsterFujiBack
	msgbox LavenderTown_VolunteerPokemonHouse_Text_WhereDidMrFujiGo
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_YoungsterFujiBack::
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiWasPrayingForCubonesMother
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_Nidorino::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_NIDORINO, CRY_MODE_NORMAL
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Nidorino
	waitmoncry
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_Psyduck::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Psyduck
	waitmoncry
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_PokemonFanMagazine::
	lockall
	famechecker FAMECHECKER_MRFUJI, 2
	msgbox LavenderTown_VolunteerPokemonHouse_Text_GrandPrizeDrawingClipped
	releaseall
	end

LavenderTown_VolunteerPokemonHouse_EventScript_Bookshelf::
	msgbox LavenderTown_VolunteerPokemonHouse_Text_PokemonMagazinesLineShelf, MSGBOX_SIGN
	end

LavenderTown_PokemonCenter_1F_Text_HearMrFujiNotFromAroundHere::
	.string "I recently moved to this town.\p"
	.string "I hear that MR. FUJI's not from\n"
	.string "these parts originally, either.$"

LavenderTown_VolunteerPokemonHouse_Text_WhereDidMrFujiGo::
	.string "That's odd, MR. FUJI isn't here.\n"
	.string "Where'd he go?$"

LavenderTown_VolunteerPokemonHouse_Text_MrFujiWasPrayingForCubonesMother::
	.string "MR. FUJI had been praying alone\n"
	.string "for CUBONE's mother.$"

LavenderTown_VolunteerPokemonHouse_Text_MrFujiLooksAfterOrphanedMons::
	.string "This is really MR. FUJI's house.\p"
	.string "He's really kind.\p"
	.string "He looks after abandoned and\n"
	.string "orphaned POKéMON.$"

LavenderTown_VolunteerPokemonHouse_Text_MonsNiceToHug::
	.string "It's so warm!\n"
	.string "POKéMON are so nice to hug.$"

LavenderTown_VolunteerPokemonHouse_Text_Nidorino::
	.string "NIDORINO: Gaoo!$"

LavenderTown_VolunteerPokemonHouse_Text_Psyduck::
	.string "PSYDUCK: Gwappa!$"

LavenderTown_VolunteerPokemonHouse_Text_IdLikeYouToHaveThis::
	.string "MR. FUJI: {PLAYER}…\p"
	.string "Your POKéDEX quest is one that\n"
	.string "requires strong dedication.\p"
	.string "Without deep love for POKéMON,\n"
	.string "your quest may fail.\p"
	.string "I'm not sure if this will help you,\n"
	.string "but I'd like you to have it.$"

LavenderTown_VolunteerPokemonHouse_Text_ReceivedPokeFluteFromMrFuji::
	.string "{PLAYER} received a POKé FLUTE\n"
	.string "from MR. FUJI.$"

LavenderTown_VolunteerPokemonHouse_Text_ExplainPokeFlute::
	.string "Upon hearing the POKé FLUTE,\n"
	.string "sleeping POKéMON will spring awake.\p"
	.string "Try using it on POKéMON that are\n"
	.string "sleeping obstacles.$"

LavenderTown_VolunteerPokemonHouse_Text_MustMakeRoomForThis::
	.string "You must make room for this!$"

LavenderTown_VolunteerPokemonHouse_Text_HasPokeFluteHelpedYou::
	.string "MR. FUJI: Has my POKé FLUTE\n"
	.string "helped you?$"

LavenderTown_VolunteerPokemonHouse_Text_GrandPrizeDrawingClipped::
	.string "POKéMON FAN MAGAZINE\n"
	.string "Monthly Grand Prize Drawing!\p"
	.string "The application form is…\p"
	.string "Gone! It's been clipped out.\n"
	.string "Someone must have applied already.$"

LavenderTown_VolunteerPokemonHouse_Text_PokemonMagazinesLineShelf::
	.string "POKéMON magazines line the shelf.\p"
	.string "POKéMON INSIDER…\p"
	.string "POKéMON FAN…$"

LavenderTown_VolunteerPokemonHouse_Frlg_EventScript_SkarmoryGift::
    lock
    faceplayer
    goto_if_set FLAG_RECEIVED_LAVENDER_SKARMORY, LavenderTown_VolunteerPokemonHouse_Frlg_EventScript_AlreadyReceivedSkarmory
    msgbox LavenderTown_VolunteerPokemonHouse_Frlg_Text_WantSkarmory, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, LavenderTown_VolunteerPokemonHouse_Frlg_EventScript_DeclinedSkarmory
    givemon SPECIES_SKARMORY, 30, ITEM_METAL_COAT, ITEM_POKE_BALL, NATURE_IMPISH, 1, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_STEEL_WING, MOVE_RAZOR_WING, MOVE_SPIKES, MOVE_ROOST
    goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LavenderTown_VolunteerPokemonHouse_Frlg_EventScript_ReceiveSkarmoryParty
    goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LavenderTown_VolunteerPokemonHouse_Frlg_EventScript_ReceiveSkarmoryPC
    goto Common_EventScript_NoMoreRoomForPokemon
    end

LavenderTown_VolunteerPokemonHouse_Frlg_EventScript_ReceiveSkarmoryParty::
    call LavenderTown_VolunteerPokemonHouse_Frlg_EventScript_ReceivedSkarmoryFanfare
    msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, LavenderTown_VolunteerPokemonHouse_Frlg_EventScript_FinishSkarmoryGift
    specialvar VAR_0x8004, CalculatePlayerPartyCount
    subvar VAR_0x8004, 1
    call Common_EventScript_NameReceivedPartyMon
    goto LavenderTown_VolunteerPokemonHouse_Frlg_EventScript_FinishSkarmoryGift
    end

LavenderTown_VolunteerPokemonHouse_Frlg_EventScript_ReceiveSkarmoryPC::
    call LavenderTown_VolunteerPokemonHouse_Frlg_EventScript_ReceivedSkarmoryFanfare
    msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, LavenderTown_VolunteerPokemonHouse_Frlg_EventScript_TransferSkarmoryToPC
    call Common_EventScript_NameReceivedBoxMon
    goto LavenderTown_VolunteerPokemonHouse_Frlg_EventScript_TransferSkarmoryToPC
    end

LavenderTown_VolunteerPokemonHouse_Frlg_EventScript_TransferSkarmoryToPC::
    setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SKARMORY
    bufferspeciesname STR_VAR_1, SPECIES_SKARMORY
    call Common_EventScript_TransferredToPC
    goto LavenderTown_VolunteerPokemonHouse_Frlg_EventScript_FinishSkarmoryGift
    end

LavenderTown_VolunteerPokemonHouse_Frlg_EventScript_ReceivedSkarmoryFanfare::
     playfanfare MUS_OBTAIN_ITEM
    message LavenderTown_VolunteerPokemonHouse_Frlg_Text_PlayerReceivedSkarmory
    waitmessage
    waitfanfare
    bufferspeciesname STR_VAR_1, SPECIES_SKARMORY
    bufferspeciesname STR_VAR_2, SPECIES_SKARMORY
    return

LavenderTown_VolunteerPokemonHouse_Frlg_EventScript_FinishSkarmoryGift::
    setflag FLAG_RECEIVED_LAVENDER_SKARMORY
    release
    end

LavenderTown_VolunteerPokemonHouse_Frlg_EventScript_DeclinedSkarmory::
    msgbox LavenderTown_VolunteerPokemonHouse_Frlg_Text_DeclinedSkarmory, MSGBOX_DEFAULT
    release
    end

LavenderTown_VolunteerPokemonHouse_Frlg_EventScript_AlreadyReceivedSkarmory::
    msgbox LavenderTown_VolunteerPokemonHouse_Frlg_Text_AlreadyReceivedSkarmory, MSGBOX_DEFAULT
    release
    end

LavenderTown_VolunteerPokemonHouse_Frlg_Text_WantSkarmory:
    .string "I rescued this SKARMORY while\n"
    .string "hiking near Rock Tunnel.\p"
    .string "MR. FUJI helped nurse it back to\n"
    .string "full health, and now it's strong!\l"
    .string "Will you take it on your journey?$"

LavenderTown_VolunteerPokemonHouse_Frlg_Text_PlayerReceivedSkarmory:
    .string "{PLAYER} received a SKARMORY!$"

LavenderTown_VolunteerPokemonHouse_Frlg_Text_DeclinedSkarmory:
    .string "I understand. It'll stay here with\n"
    .string "MR. FUJI and me until you're ready.$"

LavenderTown_VolunteerPokemonHouse_Frlg_Text_AlreadyReceivedSkarmory:
    .string "That SKARMORY has wings of steel.\n"
    .string "Take good care of it!$"
