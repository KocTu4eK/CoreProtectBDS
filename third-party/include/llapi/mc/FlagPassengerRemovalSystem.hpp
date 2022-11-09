/**
 * @file  FlagPassengerRemovalSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class FlagPassengerRemovalSystem.
 *
 */
class FlagPassengerRemovalSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLAGPASSENGERREMOVALSYSTEM
public:
    class FlagPassengerRemovalSystem& operator=(class FlagPassengerRemovalSystem const &) = delete;
    FlagPassengerRemovalSystem(class FlagPassengerRemovalSystem const &) = delete;
    FlagPassengerRemovalSystem() = delete;
#endif

public:
    /**
     * @symbol ?createDeferredSystem@FlagPassengerRemovalSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   1074915126
     */
    MCAPI static struct TickingSystemWithInfo createDeferredSystem();
    /**
     * @symbol ?tickDeferredPassengerRemoval@FlagPassengerRemovalSystem@@SAXAEBVStrictEntityContext@@AEBUVehicleComponent@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UStopRidingRequestFlag@@@@@@@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UPendingRemovePassengersComponent@@@@@Z
     * @hash   1330241807
     */
    MCAPI static void tickDeferredPassengerRemoval(class StrictEntityContext const &, struct VehicleComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct StopRidingRequestFlag>>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PendingRemovePassengersComponent>);

};