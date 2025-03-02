#pragma once

enum UpdateClientConst
{
	UC_NEW_GROUND = 0x00, 
	UC_PICK_UP = 0x01, 
	UC_DROP = 0x02,
	UC_OLD_GROUND = 0x03, 
	UC_TO_STORAGE = 0x04,
	UC_FROM_STORAGE = 0x05, 
	UC_TO_EQUIP = 0x06,
	UC_FROM_EQUIP = 0x08, 
	UC_SWITCH_EQUIP = 0x09,
	UC_TO_STORE = 0x0B,
	UC_FROM_STORE = 0x0C, 
	UC_SWITCH_STORAGE = 0x0d, 
	UC_TO_BELTSLOT = 0x0E, 
	UC_FROM_BELTSLOT = 0x0F, 
	UC_SWITCH_BELTSLOT = 0x10, 
	UC_TO_CURSOR = 0x12, 
	UC_SOCKET_TO_ITEM=0x13,
	UC_SHIFT_BELTSLOT = 0x15, 
	//ԭ�����0x17
	UC_SELECT_STASH = 0x18,
	UC_SHARED_GOLD,
	UC_PAGE_NAME,
	UC_ADD_STAT,
	UC_ADD_SYNERGY,
	UC_TEST1,
	UC_TEST2,
	UC_TEST3,
	UC_DMG,
	UC_UPDATEBASESTAT 
};

enum UpdateServerConst
{
	US_UNASSIGN_STR_POINT=0x10,//Don't change these first 8 value
	US_UNASSIGN_ENE_POINT,
	US_UNASSIGN_DEX_POINT,
	US_UNASSIGN_VIT_POINT,
	US_UNASSIGN_STR_POINTS,
	US_UNASSIGN_ENE_POINTS,
	US_UNASSIGN_DEX_POINTS,
	US_UNASSIGN_VIT_POINTS,
	US_UNASSIGN_SKILLS,
	US_SELECT_PREVIOUS,
	US_SELECT_NEXT,
	US_SELECT_SELF,
	US_SELECT_SHARED,
	US_SELECT_PREVIOUS_INDEX,
	US_SELECT_NEXT_INDEX,
	US_SELECT_PREVIOUS2,
	US_SELECT_NEXT2,
	US_SELECT_PREVIOUS_INDEX2,
	US_SELECT_NEXT_INDEX2,
	US_WORLDEVENT,
	US_SAVE,
	US_MAXGOLD,
	US_PUTGOLD,
	US_TAKEGOLD,
	US_RENAME,
	US_PAGENAME,
	US_SET_INDEX,
	US_SET_MAIN_INDEX,
	US_RESET_INDEX,
	US_INSERT_PAGE,
	US_DELETE_PAGE,
	US_SWAP3,
	US_SWAP2,
	US_SWAP1,
	US_SWAP0,
	US_SWAP0_TOGGLE,
	US_TOGGLE1,
	US_TOGGLE2,
	US_TOGGLE3
};