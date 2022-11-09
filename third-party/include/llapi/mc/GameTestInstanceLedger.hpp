/**
 * @file  GameTestInstanceLedger.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GameTestInstanceLedger.
 *
 */
class GameTestInstanceLedger {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTINSTANCELEDGER
public:
    class GameTestInstanceLedger& operator=(class GameTestInstanceLedger const &) = delete;
    GameTestInstanceLedger(class GameTestInstanceLedger const &) = delete;
    GameTestInstanceLedger() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1996485356
     */
    virtual ~GameTestInstanceLedger();
    /**
     * @vftbl  1
     * @symbol ?onTestStructureLoaded@GameTestInstanceLedger@@UEAAXAEAVBaseGameTestInstance@gametest@@@Z
     * @hash   612188930
     */
    virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance &);
    /**
     * @symbol ??0GameTestInstanceLedger@@QEAA@AEAVLevelStorage@@@Z
     * @hash   60864551
     */
    MCAPI GameTestInstanceLedger(class LevelStorage &);
    /**
     * @symbol ?clear@GameTestInstanceLedger@@QEAAXV?$AutomaticID@VDimension@@H@@@Z
     * @hash   -657799114
     */
    MCAPI void clear(class AutomaticID<class Dimension, int>);
    /**
     * @symbol ?getBoundingBoxes@GameTestInstanceLedger@@QEBA?AV?$vector@VBoundingBox@@V?$allocator@VBoundingBox@@@std@@@std@@V?$AutomaticID@VDimension@@H@@@Z
     * @hash   1577514063
     */
    MCAPI std::vector<class BoundingBox> getBoundingBoxes(class AutomaticID<class Dimension, int>) const;

//private:

private:
    /**
     * @symbol ?GAME_TEST_INSTANCE_PREFIX@GameTestInstanceLedger@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1838148829
     */
    MCAPI static std::string const GAME_TEST_INSTANCE_PREFIX;

};