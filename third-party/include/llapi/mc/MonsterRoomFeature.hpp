/**
 * @file  MonsterRoomFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MonsterRoomFeature.
 *
 */
class MonsterRoomFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MONSTERROOMFEATURE
public:
    class MonsterRoomFeature& operator=(class MonsterRoomFeature const &) = delete;
    MonsterRoomFeature(class MonsterRoomFeature const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   69451947
     */
    virtual ~MonsterRoomFeature();
    /**
     * @vftbl  3
     * @symbol ?place@MonsterRoomFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1134226581
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol ??0MonsterRoomFeature@@QEAA@XZ
     * @hash   2048873821
     */
    MCAPI MonsterRoomFeature();

};