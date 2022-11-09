/**
 * @file  SwimMoveControl.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveControl.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SwimMoveControl.
 *
 */
class SwimMoveControl : public MoveControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMMOVECONTROL
public:
    class SwimMoveControl& operator=(class SwimMoveControl const &) = delete;
    SwimMoveControl(class SwimMoveControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1216478478
     */
    virtual ~SwimMoveControl();
    /**
     * @vftbl  1
     * @symbol ?initializeInternal@SwimMoveControl@@UEAAXAEAVMob@@PEAUMoveControlDescription@@@Z
     * @hash   1656450481
     */
    virtual void initializeInternal(class Mob &, struct MoveControlDescription *);
    /**
     * @vftbl  2
     * @symbol ?tick@SwimMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
     * @hash   -1762248942
     */
    virtual void tick(class MoveControlComponent &, class Mob &);
    /**
     * @symbol ??0SwimMoveControl@@QEAA@XZ
     * @hash   1654172192
     */
    MCAPI SwimMoveControl();

};