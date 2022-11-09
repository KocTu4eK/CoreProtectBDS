/**
 * @file  PaddleBehaviorUtility.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace PaddleBehaviorUtility.
 *
 */
namespace PaddleBehaviorUtility {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?computePaddleForcesBasedOnGaze@PaddleBehaviorUtility@@YAXAEAVVec3@@AEAM1MMM@Z
     * @hash   -1591482303
     */
    MCAPI void computePaddleForcesBasedOnGaze(class Vec3 &, float &, float &, float, float, float);
    /**
     * @symbol ?setPaddleForce@PaddleBehaviorUtility@@YA_NAEAUPaddle@@UTick@@M@Z
     * @hash   1841381502
     */
    MCAPI bool setPaddleForce(struct Paddle &, struct Tick, float);
    /**
     * @symbol ?setPaddleState@PaddleBehaviorUtility@@YA_NAEAUPaddle@@AEAVSynchedActorData@@_NW4Side@@UTick@@22@Z
     * @hash   -58738178
     */
    MCAPI bool setPaddleState(struct Paddle &, class SynchedActorData &, bool, enum class Side, struct Tick, bool, bool);

};