/**
 * @file  ContainerScreenContext.hpp
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
 * @brief MC class ContainerScreenContext.
 *
 */
class ContainerScreenContext {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERSCREENCONTEXT
public:
    class ContainerScreenContext& operator=(class ContainerScreenContext const &) = delete;
    ContainerScreenContext(class ContainerScreenContext const &) = delete;
#endif

public:
    /**
     * @symbol ??0ContainerScreenContext@@QEAA@XZ
     * @hash   1545234606
     */
    MCAPI ContainerScreenContext();
    /**
     * @symbol ??0ContainerScreenContext@@QEAA@AEAVPlayer@@W4ContainerType@@AEBVBlockPos@@@Z
     * @hash   2075179121
     */
    MCAPI ContainerScreenContext(class Player &, enum class ContainerType, class BlockPos const &);
    /**
     * @symbol ??0ContainerScreenContext@@QEAA@AEAVPlayer@@W4ContainerType@@AEBUActorUniqueID@@@Z
     * @hash   956095667
     */
    MCAPI ContainerScreenContext(class Player &, enum class ContainerType, struct ActorUniqueID const &);
    /**
     * @symbol ?getPlayer@ContainerScreenContext@@QEBAAEAVPlayer@@XZ
     * @hash   -113515114
     */
    MCAPI class Player & getPlayer() const;
    /**
     * @symbol ?getScreenContainerType@ContainerScreenContext@@QEBA?AW4ContainerType@@XZ
     * @hash   813889700
     */
    MCAPI enum class ContainerType getScreenContainerType() const;
    /**
     * @symbol ?tryGetActor@ContainerScreenContext@@QEBAPEAVActor@@XZ
     * @hash   -578405513
     */
    MCAPI class Actor * tryGetActor() const;
    /**
     * @symbol ?tryGetBlockActor@ContainerScreenContext@@QEBAPEAVBlockActor@@XZ
     * @hash   -456850567
     */
    MCAPI class BlockActor * tryGetBlockActor() const;

};