/**
 * @file  VRRotateControlSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VRRotateControlSystem.
 *
 */
class VRRotateControlSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VRROTATECONTROLSYSTEM
public:
    class VRRotateControlSystem& operator=(class VRRotateControlSystem const &) = delete;
    VRRotateControlSystem(class VRRotateControlSystem const &) = delete;
    VRRotateControlSystem() = delete;
#endif

public:
    /**
     * @symbol ?create@VRRotateControlSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   485085892
     */
    MCAPI static struct TickingSystemWithInfo create();

};