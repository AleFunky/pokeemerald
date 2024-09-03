
#include "global.h"
#include "save.h"

struct SaveBlock1_v0
{
    /*0x00*/ struct Coords16 pos;
    /*0x04*/ struct WarpData location;
    /*0x0C*/ struct WarpData continueGameWarp;
    /*0x14*/ struct WarpData dynamicWarp;
    /*0x1C*/ struct WarpData lastHealLocation; // used by white-out and teleport
    /*0x24*/ struct WarpData escapeWarp; // used by Dig and Escape Rope
    /*0x2C*/ u16 savedMusic;
    /*0x2E*/ u8 weather;
    /*0x2F*/ u8 weatherCycleStage;
    /*0x30*/ u8 flashLevel;
    /*0x31*/ //u8 padding1;
    /*0x32*/ u16 mapLayoutId;
    /*0x34*/ u16 mapView[0x100];
    /*0x234*/ u8 playerPartyCount;
    /*0x235*/ //u8 padding2[3];
    /*0x238*/ struct Pokemon playerParty[6];
    /*0x490*/ u32 money;
    /*0x494*/ u16 coins;
    /*0x496*/ u16 registeredItem; // registered for use with SELECT button
    /*0x498*/ struct ItemSlot pcItems[50];
    /*0x560*/ struct ItemSlot bagPocket_Items[120];
    /*0x5D8*/ struct ItemSlot bagPocket_KeyItems[30];
    /*0x650*/ struct ItemSlot bagPocket_PokeBalls[16];
    /*0x690*/ struct ItemSlot bagPocket_TMHM[64];
    /*0x790*/ struct ItemSlot bagPocket_Berries[46];
    /*0x848*/ struct Pokeblock pokeblocks[40];
#if FREE_EXTRA_SEEN_FLAGS_SAVEBLOCK1 == FALSE
    /*0x988*/ u8 filler1[0x34]; // Previously Dex Flags, feel free to remove.
#endif //FREE_EXTRA_SEEN_FLAGS_SAVEBLOCK1
    /*0x9BC*/ u16 berryBlenderRecords[3];
    /*0x9C2*/ u8 unused_9C2[6];
#if FREE_MATCH_CALL == FALSE
    /*0x9C8*/ u16 trainerRematchStepCounter;
    /*0x9CA*/ u8 trainerRematches[100];
#endif //FREE_MATCH_CALL
    /*0xA2E*/ //u8 padding3[2];
    /*0xA30*/ struct ObjectEvent objectEvents[16];
    /*0xC70*/ struct ObjectEventTemplate objectEventTemplates[64];
    /*0x1270*/ u8 flags[300];
    /*0x139C*/ u16 vars[256];
    /*0x159C*/ u32 gameStats[64];
    /*0x169C*/ struct BerryTree berryTrees[128];
    /*0x1A9C*/ struct SecretBase secretBases[20];
    /*0x271C*/ u8 playerRoomDecorations[12];
    /*0x2728*/ u8 playerRoomDecorationPositions[12];
    /*0x2734*/ u8 decorationDesks[10];
    /*0x273E*/ u8 decorationChairs[10];
    /*0x2748*/ u8 decorationPlants[10];
    /*0x2752*/ u8 decorationOrnaments[30];
    /*0x2770*/ u8 decorationMats[30];
    /*0x278E*/ u8 decorationPosters[10];
    /*0x2798*/ u8 decorationDolls[40];
    /*0x27C0*/ u8 decorationCushions[10];
    /*0x27CC*/ TVShow tvShows[25];
    /*0x27CA*/ //u8 padding4[2];
    /*0x2B50*/ PokeNews pokeNews[16];
    /*0x2B90*/ u16 outbreakPokemonSpecies;
    /*0x2B92*/ u8 outbreakLocationMapNum;
    /*0x2B93*/ u8 outbreakLocationMapGroup;
    /*0x2B94*/ u8 outbreakPokemonLevel;
    /*0x2B95*/ u8 outbreakUnused1;
    /*0x2B96*/ u16 outbreakUnused2;
    /*0x2B98*/ u16 outbreakPokemonMoves[4];
    /*0x2BA0*/ u8 outbreakUnused3;
    /*0x2BA1*/ u8 outbreakPokemonProbability;
    /*0x2BA2*/ u16 outbreakDaysLeft;
    /*0x2BA4*/ struct GabbyAndTyData gabbyAndTyData;
    /*0x2BB0*/ u16 easyChatProfile[6];
    /*0x2BBC*/ u16 easyChatBattleStart[6];
    /*0x2BC8*/ u16 easyChatBattleWon[6];
    /*0x2BD4*/ u16 easyChatBattleLost[6];
    /*0x2BE0*/ struct Mail mail[16];
    /*0x2E20*/ u8 unlockedTrendySayings[5]; // Bitfield for unlockable Easy Chat words in EC_GROUP_TRENDY_SAYING
    /*0x2E25*/ //u8 padding5[3];
    /*0x2E28*/ OldMan oldMan;
    /*0x2e64*/ struct DewfordTrend dewfordTrends[5];
    /*0x2e90*/ struct ContestWinner contestWinners[13]; // see CONTEST_WINNER_*
    /*0x3030*/ struct DayCare daycare;
#if FREE_LINK_BATTLE_RECORDS == FALSE
    /*0x3150*/ struct LinkBattleRecords linkBattleRecords;
#endif //FREE_LINK_BATTLE_RECORDS
    /*0x31A8*/ u8 giftRibbons[11];
    /*0x31B3*/ struct ExternalEventData externalEventData;
    /*0x31C7*/ struct ExternalEventFlags externalEventFlags;
    /*0x31DC*/ struct Roamer roamer[1];
#if FREE_ENIGMA_BERRY == FALSE
    /*0x31F8*/ struct EnigmaBerry enigmaBerry;
#endif //FREE_ENIGMA_BERRY
#if FREE_MYSTERY_GIFT == FALSE
    /*0x322C*/ struct MysteryGiftSave mysteryGift;
#endif //FREE_MYSTERY_GIFT
    /*0x3???*/ u8 dexSeen[49];
    /*0x3???*/ u8 dexCaught[49];
#if FREE_TRAINER_HILL == FALSE
    /*0x3???*/ u32 trainerHillTimes[4];
#endif //FREE_TRAINER_HILL
#if FREE_MYSTERY_EVENT_BUFFERS == FALSE
    /*0x3???*/ struct RamScript ramScript;
#endif //FREE_MYSTERY_EVENT_BUFFERS
    /*0x3???*/ struct RecordMixingGift recordMixingGift;
    /*0x3???*/ LilycoveLady lilycoveLady;
    /*0x3???*/ struct TrainerNameRecord trainerNameRecords[20];
#if FREE_UNION_ROOM_CHAT == FALSE
    /*0x3???*/ u8 registeredTexts[10][21];
#endif //FREE_UNION_ROOM_CHAT
#if FREE_TRAINER_HILL == FALSE
    /*0x3???*/ struct TrainerHillSave trainerHill;
#endif //FREE_TRAINER_HILL
    /*0x3???*/ struct WaldaPhrase waldaPhrase;
    // sizeof: 0x3???
};

struct SaveBlock2_v0
{
    /*0x00*/ u8 playerName[8];
    /*0x08*/ u8 playerGender; // MALE, FEMALE
    /*0x09*/ u8 specialSaveWarpFlags;
    /*0x0A*/ u8 playerTrainerId[4];
    /*0x0E*/ u16 playTimeHours;
    /*0x10*/ u8 playTimeMinutes;
    /*0x11*/ u8 playTimeSeconds;
    /*0x12*/ u8 playTimeVBlanks;
    /*0x13*/ u8 optionsButtonMode;  // OPTIONS_BUTTON_MODE_[NORMAL/LR/L_EQUALS_A]
    /*0x14*/ u16 optionsTextSpeed:3; // OPTIONS_TEXT_SPEED_[SLOW/MID/FAST]
             u16 optionsWindowFrameType:5; // Specifies one of the 20 decorative borders for text boxes
             u16 optionsSound:1; // OPTIONS_SOUND_[MONO/STEREO]
             u16 optionsBattleStyle:1; // OPTIONS_BATTLE_STYLE_[SHIFT/SET]
             u16 optionsBattleSceneOff:1; // whether battle animations are disabled
             u16 regionMapZoom:1; // whether the map is zoomed in
             //u16 padding1:4;
             //u16 padding2;
    /*0x18*/ struct Pokedex pokedex;
    /*0x90*/ u8 filler_90[0x8];
    /*0x98*/ struct Time localTimeOffset;
    /*0xA0*/ struct Time lastBerryTreeUpdate;
    /*0xA8*/ u32 gcnLinkFlags; // Read by Pokémon Colosseum/XD
    /*0xAC*/ u32 encryptionKey;
    /*0xB0*/ struct PlayersApprentice playerApprentice;
    /*0xDC*/ struct Apprentice apprentices[4];
    /*0x1EC*/ struct BerryCrush berryCrush;
#if FREE_POKEMON_JUMP == FALSE
    /*0x1FC*/ struct PokemonJumpRecords pokeJump;
#endif //FREE_POKEMON_JUMP
    /*0x20C*/ struct BerryPickingResults berryPick;
#if FREE_RECORD_MIXING_HALL_RECORDS == FALSE
    /*0x21C*/ struct RankingHall1P hallRecords1P[9][2][3]; // From record mixing.
    /*0x57C*/ struct RankingHall2P hallRecords2P[2][3]; // From record mixing.
#endif //FREE_RECORD_MIXING_HALL_RECORDS
    /*0x624*/ u16 contestLinkResults[5][4];
    /*0x64C*/ struct BattleFrontier frontier;
}; // sizeof=0xF2C

/**
 * The following is the function which copies all the data from the old save file to the new one.
 */

bool8 UpdateSave_v0_v1(const struct SaveSectorLocation *locations)
{
    /** The passed locations structure has been filled with pointers to the old save data on the heap already.
     * We just need to assign the old save blocks to the pointers on the heap accordingly. (Again I'm using
     * literal numbers here as I'm being overly cautious: what if I change the SECTOR_IDs for the save blocks in 
     * later save version?)
     */ 
    const struct SaveBlock2_v0* sOldSaveBlock2Ptr = (struct SaveBlock2_v0*)(locations[0].data); // SECTOR_ID_SAVEBLOCK2
    const struct SaveBlock1_v0* sOldSaveBlock1Ptr = (struct SaveBlock1_v0*)(locations[1].data); // SECTOR_ID_SAVEBLOCK1_START
    const struct PokemonStorage* sOldPokemonStoragePtr = (struct PokemonStorage*)(locations[5].data); // SECTOR_ID_PKMN_STORAGE_START
    u32 arg, i, j, k;
    
#define COPY_FIELD(field) gSaveBlock2Ptr->field = sOldSaveBlock2Ptr->field
#define COPY_BLOCK(field) CpuCopy16(&sOldSaveBlock2Ptr->field, &gSaveBlock2Ptr->field, sizeof(gSaveBlock2Ptr->field))
#define COPY_ARRAY(field) for(i = 0; i < min(ARRAY_COUNT(gSaveBlock2Ptr->field), ARRAY_COUNT(sOldSaveBlock2Ptr->field)); i++) gSaveBlock2Ptr->field[i] = sOldSaveBlock2Ptr->field[i];
    
    /** We need to fill in any data that's new in this version. */
    gSaveBlock2Ptr->_saveSentinel = 0xFF;
    gSaveBlock2Ptr->saveVersion = 1;
    
    COPY_ARRAY(playerName);
    COPY_FIELD(playerGender);
    COPY_FIELD(specialSaveWarpFlags);
    COPY_ARRAY(playerTrainerId);
    COPY_FIELD(playTimeHours);
    COPY_FIELD(playTimeMinutes);
    COPY_FIELD(playTimeSeconds);
    COPY_FIELD(playTimeVBlanks);
    COPY_FIELD(optionsButtonMode);
    COPY_FIELD(optionsTextSpeed);
    COPY_FIELD(optionsWindowFrameType);
    COPY_FIELD(optionsSound);
    COPY_FIELD(optionsBattleStyle);
    COPY_FIELD(optionsBattleSceneOff);
    COPY_FIELD(regionMapZoom);
    
    COPY_FIELD(pokedex);
    COPY_FIELD(localTimeOffset);
    COPY_FIELD(lastBerryTreeUpdate);
    COPY_FIELD(gcnLinkFlags);
    COPY_FIELD(encryptionKey);
    COPY_FIELD(playerApprentice);
    COPY_BLOCK(apprentices);
    COPY_FIELD(berryCrush);
    COPY_FIELD(pokeJump);
    COPY_FIELD(berryPick);
    COPY_BLOCK(hallRecords1P);
    COPY_BLOCK(hallRecords2P);
    COPY_BLOCK(contestLinkResults);
    COPY_FIELD(berryPick);
    COPY_FIELD(berryPick);
    COPY_FIELD(frontier);

#undef COPY_FIELD
#undef COPY_BLOCK
#undef COPY_ARRAY

#define COPY_FIELD(field) gSaveBlock1Ptr->field = sOldSaveBlock1Ptr->field
#define COPY_BLOCK(field) CpuCopy16(&sOldSaveBlock1Ptr->field, &gSaveBlock1Ptr->field, sizeof(gSaveBlock1Ptr->field))
#define COPY_ARRAY(field) for(i = 0; i < min(ARRAY_COUNT(gSaveBlock1Ptr->field), ARRAY_COUNT(sOldSaveBlock1Ptr->field)); i++) gSaveBlock1Ptr->field[i] = sOldSaveBlock1Ptr->field[i];
    
    COPY_FIELD(pos);
    COPY_FIELD(location);
    COPY_FIELD(continueGameWarp);
    COPY_FIELD(dynamicWarp);
    COPY_FIELD(lastHealLocation);
    COPY_FIELD(escapeWarp);
    
    /** We don't need to copy things related to the current map, see below. */
    // COPY_FIELD(weather);
    // COPY_FIELD(weatherCycleStage);
    // COPY_FIELD(flashLevel);
    // COPY_FIELD(savedMusic);
    // COPY_FIELD(mapLayoutId);
    // COPY_BLOCK(mapView);
    // COPY_BLOCK(objectEvents);
    // COPY_BLOCK(objectEventTemplates);
    
    /** The pokemon structure hasn't changed at all this version, so
     *  we don't need to do anything special to copy the pokemon over. */
    COPY_FIELD(playerPartyCount);
    COPY_ARRAY(playerParty);
    
    COPY_FIELD(money);
    COPY_FIELD(coins);
    COPY_FIELD(registeredItem);
    
    /** Because we changed the PC items, it's not gonna be a straight copy. */
    COPY_ARRAY(pcItems);
    COPY_ARRAY(bagPocket_Items);
    COPY_ARRAY(bagPocket_KeyItems);
    COPY_ARRAY(bagPocket_PokeBalls);
    COPY_ARRAY(bagPocket_TMHM);
    COPY_ARRAY(bagPocket_Berries);
    
    COPY_BLOCK(pokeblocks);
    COPY_ARRAY(dexSeen);
    COPY_ARRAY(dexCaught);
    COPY_BLOCK(berryBlenderRecords);
    COPY_FIELD(trainerRematchStepCounter);
    COPY_BLOCK(trainerRematches);
    
    COPY_BLOCK(flags);
    COPY_BLOCK(vars);
    COPY_BLOCK(gameStats);
    COPY_BLOCK(berryTrees);
    COPY_BLOCK(secretBases);
    COPY_BLOCK(playerRoomDecorations);
    COPY_BLOCK(playerRoomDecorationPositions);
    COPY_BLOCK(decorationDesks);
    COPY_BLOCK(decorationChairs);
    COPY_BLOCK(decorationPlants);
    COPY_BLOCK(decorationOrnaments);
    COPY_BLOCK(decorationMats);
    COPY_BLOCK(decorationPosters);
    COPY_BLOCK(decorationDolls);
    COPY_BLOCK(decorationCushions);
    
    COPY_BLOCK(tvShows);
    COPY_BLOCK(pokeNews);
    COPY_FIELD(outbreakPokemonSpecies);
    COPY_FIELD(outbreakLocationMapNum);
    COPY_FIELD(outbreakLocationMapGroup);
    COPY_FIELD(outbreakPokemonLevel);
    COPY_FIELD(outbreakUnused1);
    COPY_FIELD(outbreakUnused2);
    COPY_BLOCK(outbreakPokemonMoves);
    COPY_FIELD(outbreakUnused3);
    COPY_FIELD(outbreakPokemonProbability);
    COPY_FIELD(outbreakDaysLeft);
    COPY_FIELD(gabbyAndTyData);
    COPY_BLOCK(easyChatProfile);
    COPY_BLOCK(easyChatBattleStart);
    COPY_BLOCK(easyChatBattleWon);
    COPY_BLOCK(easyChatBattleLost);
    COPY_BLOCK(mail);
    COPY_BLOCK(unlockedTrendySayings);
    
    COPY_FIELD(oldMan);
    COPY_BLOCK(dewfordTrends);
    COPY_BLOCK(contestWinners);
    COPY_FIELD(daycare);
    COPY_FIELD(linkBattleRecords);
    COPY_BLOCK(giftRibbons);
    COPY_FIELD(externalEventData);
    COPY_FIELD(externalEventFlags);
    COPY_BLOCK(roamer);
    COPY_FIELD(enigmaBerry);
    COPY_FIELD(mysteryGift);
    COPY_BLOCK(trainerHillTimes);
    COPY_FIELD(ramScript);
    COPY_FIELD(recordMixingGift);
    COPY_FIELD(lilycoveLady);
    COPY_BLOCK(trainerNameRecords);
    COPY_BLOCK(registeredTexts);
    COPY_FIELD(trainerHill);
    COPY_FIELD(waldaPhrase);
    
#undef COPY_FIELD
#undef COPY_BLOCK
#undef COPY_ARRAY
    
    /**
     * The pokemon structure hasn't changed at all this version, so
     * we can just assign across the old box storage to the new.  */ 
    *gPokemonStoragePtr = *sOldPokemonStoragePtr;
    
    /**
     * The most common kind of change that might happen between major versions are 
     * map changes. The save file usually saves the area around the player and 
     * event objects currently on the map, so that when the player resumes play, 
     * everything will be exactly where it was when they saved. But if the map has
     * changed at all, this means there could be incongruity between the saved
     * version of the map and the new version in the updated ROM. So to make it so
     * that the map reloads properly, we use the "Continue Game Warp" usually used
     * when the player clears the game to place the player at a known position and
     * with a newly loaded map and event objects. Here, we're using the last location
     * that the player healed, so the player will appear in the same spot they would
     * as if they blacked out. */
    SetContinueGameWarpStatus();
    gSaveBlock1Ptr->continueGameWarp = gSaveBlock1Ptr->lastHealLocation;
    
    return TRUE;
}

struct SaveBlock1_v1
{
    /*0x00*/ struct Coords16 pos;
    /*0x04*/ struct WarpData location;
    /*0x0C*/ struct WarpData continueGameWarp;
    /*0x14*/ struct WarpData dynamicWarp;
    /*0x1C*/ struct WarpData lastHealLocation; // used by white-out and teleport
    /*0x24*/ struct WarpData escapeWarp; // used by Dig and Escape Rope
    /*0x2C*/ u16 savedMusic;
    /*0x2E*/ u8 weather;
    /*0x2F*/ u8 weatherCycleStage;
    /*0x30*/ u8 flashLevel;
    /*0x31*/ //u8 padding1;
    /*0x32*/ u16 mapLayoutId;
    /*0x34*/ u16 mapView[0x100];
    /*0x234*/ u8 playerPartyCount;
    /*0x235*/ //u8 padding2[3];
    /*0x238*/ struct Pokemon playerParty[6];
    /*0x490*/ u32 money;
    /*0x494*/ u16 coins;
    /*0x496*/ u16 registeredItem; // registered for use with SELECT button
    /*0x498*/ struct ItemSlot pcItems[75];
    /*0x560*/ struct ItemSlot bagPocket_Items[120];
    /*0x5D8*/ struct ItemSlot bagPocket_KeyItems[30];
    /*0x650*/ struct ItemSlot bagPocket_PokeBalls[16];
    /*0x690*/ struct ItemSlot bagPocket_TMHM[50];
    /*0x790*/ struct ItemSlot bagPocket_Berries[46];
    /*0x848*/ struct Pokeblock pokeblocks[40];
#if FREE_EXTRA_SEEN_FLAGS_SAVEBLOCK1 == FALSE
    /*0x988*/ u8 filler1[0x34]; // Previously Dex Flags, feel free to remove.
#endif //FREE_EXTRA_SEEN_FLAGS_SAVEBLOCK1
    /*0x9BC*/ u16 berryBlenderRecords[3];
    /*0x9C2*/ u8 unused_9C2[6];
#if FREE_MATCH_CALL == FALSE
    /*0x9C8*/ u16 trainerRematchStepCounter;
    /*0x9CA*/ u8 trainerRematches[100];
#endif //FREE_MATCH_CALL
    /*0xA2E*/ //u8 padding3[2];
    /*0xA30*/ struct ObjectEvent objectEvents[16];
    /*0xC70*/ struct ObjectEventTemplate objectEventTemplates[64];
    /*0x1270*/ u8 flags[300];
    /*0x139C*/ u16 vars[256];
    /*0x159C*/ u32 gameStats[64];
    /*0x169C*/ struct BerryTree berryTrees[128];
    /*0x1A9C*/ struct SecretBase secretBases[20];
    /*0x271C*/ u8 playerRoomDecorations[12];
    /*0x2728*/ u8 playerRoomDecorationPositions[12];
    /*0x2734*/ u8 decorationDesks[10];
    /*0x273E*/ u8 decorationChairs[10];
    /*0x2748*/ u8 decorationPlants[10];
    /*0x2752*/ u8 decorationOrnaments[30];
    /*0x2770*/ u8 decorationMats[30];
    /*0x278E*/ u8 decorationPosters[10];
    /*0x2798*/ u8 decorationDolls[40];
    /*0x27C0*/ u8 decorationCushions[10];
    /*0x27CC*/ TVShow tvShows[25];
    /*0x27CA*/ //u8 padding4[2];
    /*0x2B50*/ PokeNews pokeNews[16];
    /*0x2B90*/ u16 outbreakPokemonSpecies;
    /*0x2B92*/ u8 outbreakLocationMapNum;
    /*0x2B93*/ u8 outbreakLocationMapGroup;
    /*0x2B94*/ u8 outbreakPokemonLevel;
    /*0x2B95*/ u8 outbreakUnused1;
    /*0x2B96*/ u16 outbreakUnused2;
    /*0x2B98*/ u16 outbreakPokemonMoves[4];
    /*0x2BA0*/ u8 outbreakUnused3;
    /*0x2BA1*/ u8 outbreakPokemonProbability;
    /*0x2BA2*/ u16 outbreakDaysLeft;
    /*0x2BA4*/ struct GabbyAndTyData gabbyAndTyData;
    /*0x2BB0*/ u16 easyChatProfile[6];
    /*0x2BBC*/ u16 easyChatBattleStart[6];
    /*0x2BC8*/ u16 easyChatBattleWon[6];
    /*0x2BD4*/ u16 easyChatBattleLost[6];
    /*0x2BE0*/ struct Mail mail[16];
    /*0x2E20*/ u8 unlockedTrendySayings[5]; // Bitfield for unlockable Easy Chat words in EC_GROUP_TRENDY_SAYING
    /*0x2E25*/ //u8 padding5[3];
    /*0x2E28*/ OldMan oldMan;
    /*0x2e64*/ struct DewfordTrend dewfordTrends[5];
    /*0x2e90*/ struct ContestWinner contestWinners[13]; // see CONTEST_WINNER_*
    /*0x3030*/ struct DayCare daycare;
#if FREE_LINK_BATTLE_RECORDS == FALSE
    /*0x3150*/ struct LinkBattleRecords linkBattleRecords;
#endif //FREE_LINK_BATTLE_RECORDS
    /*0x31A8*/ u8 giftRibbons[11];
    /*0x31B3*/ struct ExternalEventData externalEventData;
    /*0x31C7*/ struct ExternalEventFlags externalEventFlags;
    /*0x31DC*/ struct Roamer roamer[1];
#if FREE_ENIGMA_BERRY == FALSE
    /*0x31F8*/ struct EnigmaBerry enigmaBerry;
#endif //FREE_ENIGMA_BERRY
#if FREE_MYSTERY_GIFT == FALSE
    /*0x322C*/ struct MysteryGiftSave mysteryGift;
#endif //FREE_MYSTERY_GIFT
    /*0x3???*/ u8 dexSeen[49];
    /*0x3???*/ u8 dexCaught[49];
#if FREE_TRAINER_HILL == FALSE
    /*0x3???*/ u32 trainerHillTimes[4];
#endif //FREE_TRAINER_HILL
#if FREE_MYSTERY_EVENT_BUFFERS == FALSE
    /*0x3???*/ struct RamScript ramScript;
#endif //FREE_MYSTERY_EVENT_BUFFERS
    /*0x3???*/ struct RecordMixingGift recordMixingGift;
    /*0x3???*/ LilycoveLady lilycoveLady;
    /*0x3???*/ struct TrainerNameRecord trainerNameRecords[20];
#if FREE_UNION_ROOM_CHAT == FALSE
    /*0x3???*/ u8 registeredTexts[10][21];
#endif //FREE_UNION_ROOM_CHAT
#if FREE_TRAINER_HILL == FALSE
    /*0x3???*/ struct TrainerHillSave trainerHill;
#endif //FREE_TRAINER_HILL
    /*0x3???*/ struct WaldaPhrase waldaPhrase;
    // sizeof: 0x3???
};

struct SaveBlock2_v1
{
    u8 _saveSentinel; // 0xFF
    u16 saveVersion;
    /*0x00*/ u8 playerName[8];
    /*0x08*/ u8 playerGender; // MALE, FEMALE
    /*0x09*/ u8 specialSaveWarpFlags;
    /*0x0A*/ u8 playerTrainerId[4];
    /*0x0E*/ u16 playTimeHours;
    /*0x10*/ u8 playTimeMinutes;
    /*0x11*/ u8 playTimeSeconds;
    /*0x12*/ u8 playTimeVBlanks;
    /*0x13*/ u8 optionsButtonMode;  // OPTIONS_BUTTON_MODE_[NORMAL/LR/L_EQUALS_A]
    /*0x14*/ u16 optionsTextSpeed:3; // OPTIONS_TEXT_SPEED_[SLOW/MID/FAST]
             u16 optionsWindowFrameType:5; // Specifies one of the 20 decorative borders for text boxes
             u16 optionsSound:1; // OPTIONS_SOUND_[MONO/STEREO]
             u16 optionsBattleStyle:1; // OPTIONS_BATTLE_STYLE_[SHIFT/SET]
             u16 optionsBattleSceneOff:1; // whether battle animations are disabled
             u16 regionMapZoom:1; // whether the map is zoomed in
             //u16 padding1:4;
             //u16 padding2;
    /*0x18*/ struct Pokedex pokedex;
    /*0x90*/ u8 filler_90[0x8];
    /*0x98*/ struct Time localTimeOffset;
    /*0xA0*/ struct Time lastBerryTreeUpdate;
    /*0xA8*/ u32 gcnLinkFlags; // Read by Pokémon Colosseum/XD
    /*0xAC*/ u32 encryptionKey;
    /*0xB0*/ struct PlayersApprentice playerApprentice;
    /*0xDC*/ struct Apprentice apprentices[4];
    /*0x1EC*/ struct BerryCrush berryCrush;
#if FREE_POKEMON_JUMP == FALSE
    /*0x1FC*/ struct PokemonJumpRecords pokeJump;
#endif //FREE_POKEMON_JUMP
    /*0x20C*/ struct BerryPickingResults berryPick;
#if FREE_RECORD_MIXING_HALL_RECORDS == FALSE
    /*0x21C*/ struct RankingHall1P hallRecords1P[9][2][3]; // From record mixing.
    /*0x57C*/ struct RankingHall2P hallRecords2P[2][3]; // From record mixing.
#endif //FREE_RECORD_MIXING_HALL_RECORDS
    /*0x624*/ u16 contestLinkResults[5][4];
    /*0x64C*/ struct BattleFrontier frontier;
}; // sizeof=0xF2C

bool8 UpdateSave_v1_v2(const struct SaveSectorLocation *locations)
{
    /** The passed locations structure has been filled with pointers to the old save data on the heap already.
     * We just need to assign the old save blocks to the pointers on the heap accordingly. (Again I'm using
     * literal numbers here as I'm being overly cautious: what if I change the SECTOR_IDs for the save blocks in 
     * later save version?)
     */ 
    const struct SaveBlock2_v1* sOldSaveBlock2Ptr = (struct SaveBlock2_v1*)(locations[0].data); // SECTOR_ID_SAVEBLOCK2
    const struct SaveBlock1_v1* sOldSaveBlock1Ptr = (struct SaveBlock1_v1*)(locations[1].data); // SECTOR_ID_SAVEBLOCK1_START
    const struct PokemonStorage* sOldPokemonStoragePtr = (struct PokemonStorage*)(locations[5].data); // SECTOR_ID_PKMN_STORAGE_START
    u32 arg, i, j, k;
    
#define COPY_FIELD(field) gSaveBlock2Ptr->field = sOldSaveBlock2Ptr->field
#define COPY_BLOCK(field) CpuCopy16(&sOldSaveBlock2Ptr->field, &gSaveBlock2Ptr->field, sizeof(gSaveBlock2Ptr->field))
#define COPY_ARRAY(field) for(i = 0; i < min(ARRAY_COUNT(gSaveBlock2Ptr->field), ARRAY_COUNT(sOldSaveBlock2Ptr->field)); i++) gSaveBlock2Ptr->field[i] = sOldSaveBlock2Ptr->field[i];
    
    /** We need to fill in any data that's new in this version. */
    gSaveBlock2Ptr->_saveSentinel = 0xFF;
    gSaveBlock2Ptr->saveVersion = 2;
    
    COPY_ARRAY(playerName);
    COPY_FIELD(playerGender);
    COPY_FIELD(specialSaveWarpFlags);
    COPY_ARRAY(playerTrainerId);
    COPY_FIELD(playTimeHours);
    COPY_FIELD(playTimeMinutes);
    COPY_FIELD(playTimeSeconds);
    COPY_FIELD(playTimeVBlanks);
    COPY_FIELD(optionsButtonMode);
    COPY_FIELD(optionsTextSpeed);
    COPY_FIELD(optionsWindowFrameType);
    COPY_FIELD(optionsSound);
    COPY_FIELD(optionsBattleStyle);
    COPY_FIELD(optionsBattleSceneOff);
    COPY_FIELD(regionMapZoom);
    
    COPY_FIELD(pokedex);
    COPY_FIELD(localTimeOffset);
    COPY_FIELD(lastBerryTreeUpdate);
    COPY_FIELD(gcnLinkFlags);
    COPY_FIELD(encryptionKey);
    COPY_FIELD(playerApprentice);
    COPY_BLOCK(apprentices);
    COPY_FIELD(berryCrush);
    COPY_FIELD(pokeJump);
    COPY_FIELD(berryPick);
    COPY_BLOCK(hallRecords1P);
    COPY_BLOCK(hallRecords2P);
    COPY_BLOCK(contestLinkResults);
    COPY_FIELD(berryPick);
    COPY_FIELD(berryPick);
    COPY_FIELD(frontier);

#undef COPY_FIELD
#undef COPY_BLOCK
#undef COPY_ARRAY

#define COPY_FIELD(field) gSaveBlock1Ptr->field = sOldSaveBlock1Ptr->field
#define COPY_BLOCK(field) CpuCopy16(&sOldSaveBlock1Ptr->field, &gSaveBlock1Ptr->field, sizeof(gSaveBlock1Ptr->field))
#define COPY_ARRAY(field) for(i = 0; i < min(ARRAY_COUNT(gSaveBlock1Ptr->field), ARRAY_COUNT(sOldSaveBlock1Ptr->field)); i++) gSaveBlock1Ptr->field[i] = sOldSaveBlock1Ptr->field[i];
    
    COPY_FIELD(pos);
    COPY_FIELD(location);
    COPY_FIELD(continueGameWarp);
    COPY_FIELD(dynamicWarp);
    COPY_FIELD(lastHealLocation);
    COPY_FIELD(escapeWarp);
    
    /** We don't need to copy things related to the current map, see below. */
    // COPY_FIELD(weather);
    // COPY_FIELD(weatherCycleStage);
    // COPY_FIELD(flashLevel);
    // COPY_FIELD(savedMusic);
    // COPY_FIELD(mapLayoutId);
    // COPY_BLOCK(mapView);
    // COPY_BLOCK(objectEvents);
    // COPY_BLOCK(objectEventTemplates);
    
    /** The pokemon structure hasn't changed at all this version, so
     *  we don't need to do anything special to copy the pokemon over. */
    COPY_FIELD(playerPartyCount);
    COPY_ARRAY(playerParty);
    
    COPY_FIELD(money);
    COPY_FIELD(coins);
    COPY_FIELD(registeredItem);
    
    /** Because we changed the PC items, it's not gonna be a straight copy. */
    COPY_ARRAY(pcItems);
    COPY_ARRAY(bagPocket_Items);
    COPY_ARRAY(bagPocket_KeyItems);
    COPY_ARRAY(bagPocket_PokeBalls);
    for (i = 0; i < min(ARRAY_COUNT(gSaveBlock1Ptr->bagPocket_TMHM), ARRAY_COUNT(sOldSaveBlock1Ptr->bagPocket_TMHM)); i++) {
        gSaveBlock1Ptr->bagPocket_TMHM[i] = sOldSaveBlock1Ptr->bagPocket_TMHM[i];
    }

    COPY_ARRAY(bagPocket_Berries);
    
    COPY_BLOCK(pokeblocks);
    COPY_ARRAY(dexSeen);
    COPY_ARRAY(dexCaught);
    COPY_BLOCK(berryBlenderRecords);
    COPY_FIELD(trainerRematchStepCounter);
    COPY_BLOCK(trainerRematches);
    
    COPY_BLOCK(flags);
    COPY_BLOCK(vars);
    COPY_BLOCK(gameStats);
    COPY_BLOCK(berryTrees);
    COPY_BLOCK(secretBases);
    COPY_BLOCK(playerRoomDecorations);
    COPY_BLOCK(playerRoomDecorationPositions);
    COPY_BLOCK(decorationDesks);
    COPY_BLOCK(decorationChairs);
    COPY_BLOCK(decorationPlants);
    COPY_BLOCK(decorationOrnaments);
    COPY_BLOCK(decorationMats);
    COPY_BLOCK(decorationPosters);
    COPY_BLOCK(decorationDolls);
    COPY_BLOCK(decorationCushions);
    
    COPY_BLOCK(tvShows);
    COPY_BLOCK(pokeNews);
    COPY_FIELD(outbreakPokemonSpecies);
    COPY_FIELD(outbreakLocationMapNum);
    COPY_FIELD(outbreakLocationMapGroup);
    COPY_FIELD(outbreakPokemonLevel);
    COPY_FIELD(outbreakUnused1);
    COPY_FIELD(outbreakUnused2);
    COPY_BLOCK(outbreakPokemonMoves);
    COPY_FIELD(outbreakUnused3);
    COPY_FIELD(outbreakPokemonProbability);
    COPY_FIELD(outbreakDaysLeft);
    COPY_FIELD(gabbyAndTyData);
    COPY_BLOCK(easyChatProfile);
    COPY_BLOCK(easyChatBattleStart);
    COPY_BLOCK(easyChatBattleWon);
    COPY_BLOCK(easyChatBattleLost);
    COPY_BLOCK(mail);
    COPY_BLOCK(unlockedTrendySayings);
    
    COPY_FIELD(oldMan);
    COPY_BLOCK(dewfordTrends);
    COPY_BLOCK(contestWinners);
    COPY_FIELD(daycare);
    COPY_FIELD(linkBattleRecords);
    COPY_BLOCK(giftRibbons);
    COPY_FIELD(externalEventData);
    COPY_FIELD(externalEventFlags);
    COPY_BLOCK(roamer);
    COPY_FIELD(enigmaBerry);
    COPY_FIELD(mysteryGift);
    COPY_BLOCK(trainerHillTimes);
    COPY_FIELD(ramScript);
    COPY_FIELD(recordMixingGift);
    COPY_FIELD(lilycoveLady);
    COPY_BLOCK(trainerNameRecords);
    COPY_BLOCK(registeredTexts);
    COPY_FIELD(trainerHill);
    COPY_FIELD(waldaPhrase);
    
#undef COPY_FIELD
#undef COPY_BLOCK
#undef COPY_ARRAY
    
    /**
     * The pokemon structure hasn't changed at all this version, so
     * we can just assign across the old box storage to the new.  */ 
    *gPokemonStoragePtr = *sOldPokemonStoragePtr;
    
    /**
     * The most common kind of change that might happen between major versions are 
     * map changes. The save file usually saves the area around the player and 
     * event objects currently on the map, so that when the player resumes play, 
     * everything will be exactly where it was when they saved. But if the map has
     * changed at all, this means there could be incongruity between the saved
     * version of the map and the new version in the updated ROM. So to make it so
     * that the map reloads properly, we use the "Continue Game Warp" usually used
     * when the player clears the game to place the player at a known position and
     * with a newly loaded map and event objects. Here, we're using the last location
     * that the player healed, so the player will appear in the same spot they would
     * as if they blacked out. */
    SetContinueGameWarpStatus();
    gSaveBlock1Ptr->continueGameWarp = gSaveBlock1Ptr->lastHealLocation;
    
    return TRUE;
}