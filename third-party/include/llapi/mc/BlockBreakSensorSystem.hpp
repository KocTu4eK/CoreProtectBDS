/**
 * @file  BlockBreakSensorSystem.hpp
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
 * @brief MC class BlockBreakSensorSystem.
 *
 */
class BlockBreakSensorSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKBREAKSENSORSYSTEM
public:
    class BlockBreakSensorSystem& operator=(class BlockBreakSensorSystem const &) = delete;
    BlockBreakSensorSystem(class BlockBreakSensorSystem const &) = delete;
    BlockBreakSensorSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   54785893
     */
    virtual ~BlockBreakSensorSystem();
    /**
     * @vftbl  1
     * @hash   -1405557151
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@BlockBreakSensorSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   -97667749
     */
    virtual void tick(class EntityRegistry &);

};