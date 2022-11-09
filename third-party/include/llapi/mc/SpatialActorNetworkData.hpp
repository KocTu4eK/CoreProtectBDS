/**
 * @file  SpatialActorNetworkData.hpp
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
 * @brief MC class SpatialActorNetworkData.
 *
 */
class SpatialActorNetworkData {

#define AFTER_EXTRA
// Add Member There
public:
struct DebugSpatialPacketModifiers {
    DebugSpatialPacketModifiers() = delete;
    DebugSpatialPacketModifiers(DebugSpatialPacketModifiers const&) = delete;
    DebugSpatialPacketModifiers(DebugSpatialPacketModifiers const&&) = delete;
};
struct DebugSendRateModifiers {
    DebugSendRateModifiers() = delete;
    DebugSendRateModifiers(DebugSendRateModifiers const&) = delete;
    DebugSendRateModifiers(DebugSendRateModifiers const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPATIALACTORNETWORKDATA
public:
    class SpatialActorNetworkData& operator=(class SpatialActorNetworkData const &) = delete;
    SpatialActorNetworkData(class SpatialActorNetworkData const &) = delete;
    SpatialActorNetworkData() = delete;
#endif

public:
    /**
     * @symbol ??0SpatialActorNetworkData@@QEAA@AEAVActor@@@Z
     * @hash   -1238745204
     */
    MCAPI SpatialActorNetworkData(class Actor &);
    /**
     * @symbol ?enableAutoSend@SpatialActorNetworkData@@QEAAX_N@Z
     * @hash   -1116020342
     */
    MCAPI void enableAutoSend(bool);
    /**
     * @symbol ?getLastSentPositionForAddingEntity@SpatialActorNetworkData@@QEAA?AVVec3@@XZ
     * @hash   -2067520734
     */
    MCAPI class Vec3 getLastSentPositionForAddingEntity();
    /**
     * @symbol ?getLastSentRotationForAddingEntity@SpatialActorNetworkData@@QEAA?AVVec2@@XZ
     * @hash   521141434
     */
    MCAPI class Vec2 getLastSentRotationForAddingEntity();
    /**
     * @symbol ?getLastSentYBodyRotationForAddingEntity@SpatialActorNetworkData@@QEAAMXZ
     * @hash   -924993304
     */
    MCAPI float getLastSentYBodyRotationForAddingEntity();
    /**
     * @symbol ?getLastSentYHeadRotationForAddingEntity@SpatialActorNetworkData@@QEAAMXZ
     * @hash   1669753740
     */
    MCAPI float getLastSentYHeadRotationForAddingEntity();
    /**
     * @symbol ?handleClientData@SpatialActorNetworkData@@QEAAXAEBVMoveActorAbsoluteData@@@Z
     * @hash   -1609652930
     */
    MCAPI void handleClientData(class MoveActorAbsoluteData const &);
    /**
     * @symbol ?isAutoSendEnabled@SpatialActorNetworkData@@QEBA_NXZ
     * @hash   152360112
     */
    MCAPI bool isAutoSendEnabled() const;
    /**
     * @symbol ?sendUpdate@SpatialActorNetworkData@@QEAAX_N00@Z
     * @hash   -1330610902
     */
    MCAPI void sendUpdate(bool, bool, bool);
    /**
     * @symbol ?shouldSendMotionPredictionHintsPacket@SpatialActorNetworkData@@QEBA_NXZ
     * @hash   -1771518112
     */
    MCAPI bool shouldSendMotionPredictionHintsPacket() const;
    /**
     * @symbol ?shouldSendUpdate@SpatialActorNetworkData@@QEBA_N_N0@Z
     * @hash   -636271583
     */
    MCAPI bool shouldSendUpdate(bool, bool) const;
    /**
     * @symbol ?teleportEntity@SpatialActorNetworkData@@QEAAXAEBVVec3@@AEBVVec2@@M@Z
     * @hash   -1154884042
     */
    MCAPI void teleportEntity(class Vec3 const &, class Vec2 const &, float);
    /**
     * @symbol ?getDebugSpatialPacketModifiers@SpatialActorNetworkData@@SAAEAUDebugSpatialPacketModifiers@1@XZ
     * @hash   -2025993552
     */
    MCAPI static struct SpatialActorNetworkData::DebugSpatialPacketModifiers & getDebugSpatialPacketModifiers();

//private:
    /**
     * @symbol ?_findRelevantPlayersToSendUpdate@SpatialActorNetworkData@@AEAA?AV?$vector@UNetworkIdentifierWithSubId@@V?$allocator@UNetworkIdentifierWithSubId@@@std@@@std@@XZ
     * @hash   66649395
     */
    MCAPI std::vector<struct NetworkIdentifierWithSubId> _findRelevantPlayersToSendUpdate();
    /**
     * @symbol ?_getOptimizationScore@SpatialActorNetworkData@@AEBA_KAEAVPlayer@@@Z
     * @hash   -1888090891
     */
    MCAPI unsigned __int64 _getOptimizationScore(class Player &) const;
    /**
     * @symbol ?_initializeLastSentValues@SpatialActorNetworkData@@AEAAXXZ
     * @hash   1055079572
     */
    MCAPI void _initializeLastSentValues();
    /**
     * @symbol ?_shouldUpdateBasedOptimizationOnScore@SpatialActorNetworkData@@AEBA_NAEAVPlayer@@@Z
     * @hash   1212977549
     */
    MCAPI bool _shouldUpdateBasedOptimizationOnScore(class Player &) const;

private:
    /**
     * @symbol ?mDebugSendRateModifiers@SpatialActorNetworkData@@0UDebugSendRateModifiers@1@A
     * @hash   -762802131
     */
    MCAPI static struct SpatialActorNetworkData::DebugSendRateModifiers mDebugSendRateModifiers;
    /**
     * @symbol ?mDebugSpatialPacketModifiers@SpatialActorNetworkData@@0UDebugSpatialPacketModifiers@1@A
     * @hash   1948125631
     */
    MCAPI static struct SpatialActorNetworkData::DebugSpatialPacketModifiers mDebugSpatialPacketModifiers;

};