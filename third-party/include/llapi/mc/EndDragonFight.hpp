/**
 * @file  EndDragonFight.hpp
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
 * @brief MC class EndDragonFight.
 *
 */
class EndDragonFight {

#define AFTER_EXTRA
// Add Member There
public:
enum class GatewayTask;
struct GateWayGenerator {
    GateWayGenerator() = delete;
    GateWayGenerator(GateWayGenerator const&) = delete;
    GateWayGenerator(GateWayGenerator const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDDRAGONFIGHT
public:
    class EndDragonFight& operator=(class EndDragonFight const &) = delete;
    EndDragonFight(class EndDragonFight const &) = delete;
    EndDragonFight() = delete;
#endif

public:
    /**
     * @symbol ??0EndDragonFight@@QEAA@AEAVBlockSource@@@Z
     * @hash   -1036552997
     */
    MCAPI EndDragonFight(class BlockSource &);
    /**
     * @symbol ?loadData@EndDragonFight@@QEAAXAEBVCompoundTag@@@Z
     * @hash   418892146
     */
    MCAPI void loadData(class CompoundTag const &);
    /**
     * @symbol ?onCrystalDestroyed@EndDragonFight@@QEAAXAEBVEnderCrystal@@AEBVActorDamageSource@@@Z
     * @hash   1345326881
     */
    MCAPI void onCrystalDestroyed(class EnderCrystal const &, class ActorDamageSource const &);
    /**
     * @symbol ?resetSpikeCrystals@EndDragonFight@@QEAAXXZ
     * @hash   116107045
     */
    MCAPI void resetSpikeCrystals();
    /**
     * @symbol ?saveData@EndDragonFight@@QEAAXAEAVCompoundTag@@@Z
     * @hash   -1653987130
     */
    MCAPI void saveData(class CompoundTag &);
    /**
     * @symbol ?spawnNewGatewayChunks@EndDragonFight@@QEAAXAEBVBlockPos@@_N1@Z
     * @hash   1686013504
     */
    MCAPI void spawnNewGatewayChunks(class BlockPos const &, bool, bool);
    /**
     * @symbol ?tick@EndDragonFight@@QEAAXXZ
     * @hash   898812053
     */
    MCAPI void tick();
    /**
     * @symbol ?tryRespawn@EndDragonFight@@QEAAXXZ
     * @hash   794894309
     */
    MCAPI void tryRespawn();
    /**
     * @symbol ?verifyExitPositions@EndDragonFight@@QEAAXAEAVEndGatewayBlockActor@@@Z
     * @hash   -746127610
     */
    MCAPI void verifyExitPositions(class EndGatewayBlockActor &);
    /**
     * @symbol ??1EndDragonFight@@QEAA@XZ
     * @hash   -905311668
     */
    MCAPI ~EndDragonFight();

//private:
    /**
     * @symbol ?_canSpawnNewGateway@EndDragonFight@@AEBA_NPEAVChunkViewSource@@AEBVBlockPos@@@Z
     * @hash   -501931416
     */
    MCAPI bool _canSpawnNewGateway(class ChunkViewSource *, class BlockPos const &) const;
    /**
     * @symbol ?_createNewDragon@EndDragonFight@@AEAAXXZ
     * @hash   1045032450
     */
    MCAPI void _createNewDragon();
    /**
     * @symbol ?_findExitPortal@EndDragonFight@@AEAA?AUBuildMatch@@XZ
     * @hash   2102014379
     */
    MCAPI struct BuildMatch _findExitPortal();
    /**
     * @symbol ?_initializeDragon@EndDragonFight@@AEAAXAEAVEnderDragon@@@Z
     * @hash   808721621
     */
    MCAPI void _initializeDragon(class EnderDragon &);
    /**
     * @symbol ?_makeEndIslandFeature@EndDragonFight@@AEAAXAEAVBlockSource@@VBlockPos@@@Z
     * @hash   1324661781
     */
    MCAPI void _makeEndIslandFeature(class BlockSource &, class BlockPos);
    /**
     * @symbol ?_placeAndLinkNewGatewayPair@EndDragonFight@@AEAAXXZ
     * @hash   1986692849
     */
    MCAPI void _placeAndLinkNewGatewayPair();
    /**
     * @symbol ?_setEndGatewayBlockActorExitPosition@EndDragonFight@@AEAA_NAEAVBlockSource@@0AEBVBlockPos@@1_N@Z
     * @hash   1113408293
     */
    MCAPI bool _setEndGatewayBlockActorExitPosition(class BlockSource &, class BlockSource &, class BlockPos const &, class BlockPos const &, bool);
    /**
     * @symbol ?_setEndGatewayExitPositions@EndDragonFight@@AEAAXXZ
     * @hash   1334410682
     */
    MCAPI void _setEndGatewayExitPositions();
    /**
     * @symbol ?_setRespawnStage@EndDragonFight@@AEAAXW4RespawnAnimation@@@Z
     * @hash   870579565
     */
    MCAPI void _setRespawnStage(enum class RespawnAnimation);
    /**
     * @symbol ?_spawnExitPortal@EndDragonFight@@AEAAX_N@Z
     * @hash   -318091292
     */
    MCAPI void _spawnExitPortal(bool);
    /**
     * @symbol ?_spawnNewGatewayChunksTask@EndDragonFight@@AEAAXAEAV?$tuple@W4GatewayTask@EndDragonFight@@UGateWayGenerator@2@U32@@std@@@Z
     * @hash   2102290856
     */
    MCAPI void _spawnNewGatewayChunksTask(class std::tuple<enum class EndDragonFight::GatewayTask, struct EndDragonFight::GateWayGenerator, struct EndDragonFight::GateWayGenerator> &);
    /**
     * @symbol ?_spawnNewGatewayPair@EndDragonFight@@AEAAXXZ
     * @hash   -2094145836
     */
    MCAPI void _spawnNewGatewayPair();
    /**
     * @symbol ?_tickRespawnAnimation@EndDragonFight@@AEAAXAEBV?$vector@UActorUniqueID@@V?$allocator@UActorUniqueID@@@std@@@std@@H@Z
     * @hash   293608986
     */
    MCAPI void _tickRespawnAnimation(std::vector<struct ActorUniqueID> const &, int);
    /**
     * @symbol ?_updateCrystalCount@EndDragonFight@@AEAAXXZ
     * @hash   786450171
     */
    MCAPI void _updateCrystalCount();
    /**
     * @symbol ?_verifyExitPositionsTask@EndDragonFight@@AEAAXAEAV?$tuple@W4GatewayTask@EndDragonFight@@UGateWayGenerator@2@U32@@std@@@Z
     * @hash   1638301802
     */
    MCAPI void _verifyExitPositionsTask(class std::tuple<enum class EndDragonFight::GatewayTask, struct EndDragonFight::GateWayGenerator, struct EndDragonFight::GateWayGenerator> &);

private:
    /**
     * @symbol ?ARENA_SIZE_CHUNKS@EndDragonFight@@0HB
     * @hash   1607667066
     */
    MCAPI static int const ARENA_SIZE_CHUNKS;
    /**
     * @symbol ?DEFAULT_PORTAL_LOCATION@EndDragonFight@@0VBlockPos@@B
     * @hash   -1052379563
     */
    MCAPI static class BlockPos const DEFAULT_PORTAL_LOCATION;
    /**
     * @symbol ?GATEWAY_CHUNK_RADIUS@EndDragonFight@@0HB
     * @hash   -1502862895
     */
    MCAPI static int const GATEWAY_CHUNK_RADIUS;
    /**
     * @symbol ?GATEWAY_COUNT@EndDragonFight@@0HB
     * @hash   -312222902
     */
    MCAPI static int const GATEWAY_COUNT;
    /**
     * @symbol ?GATEWAY_DISTANCE@EndDragonFight@@0HB
     * @hash   1227838506
     */
    MCAPI static int const GATEWAY_DISTANCE;
    /**
     * @symbol ?GATEWAY_HEIGHT@EndDragonFight@@0HB
     * @hash   -1229771680
     */
    MCAPI static int const GATEWAY_HEIGHT;
    /**
     * @symbol ?TIME_BETWEEN_CRYSTAL_SCANS@EndDragonFight@@0HB
     * @hash   -761861626
     */
    MCAPI static int const TIME_BETWEEN_CRYSTAL_SCANS;
    /**
     * @symbol ?TIME_BETWEEN_PLAYER_SCANS@EndDragonFight@@0HB
     * @hash   -1427108057
     */
    MCAPI static int const TIME_BETWEEN_PLAYER_SCANS;
    /**
     * @symbol ?TIME_BETWEEN_PORTAL_SCANS@EndDragonFight@@0HB
     * @hash   -2105306282
     */
    MCAPI static int const TIME_BETWEEN_PORTAL_SCANS;

};