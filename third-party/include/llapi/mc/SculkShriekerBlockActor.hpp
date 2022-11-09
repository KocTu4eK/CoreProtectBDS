/**
 * @file  SculkShriekerBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SculkShriekerBlockActor.
 *
 */
class SculkShriekerBlockActor : public BlockActor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKSHRIEKERBLOCKACTOR
public:
    class SculkShriekerBlockActor& operator=(class SculkShriekerBlockActor const &) = delete;
    SculkShriekerBlockActor(class SculkShriekerBlockActor const &) = delete;
    SculkShriekerBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   459043897
     */
    virtual ~SculkShriekerBlockActor();
    /**
     * @vftbl  1
     * @symbol ?load@SculkShriekerBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   155888178
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol ?save@SculkShriekerBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   -22343903
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  7
     * @symbol ?tick@SculkShriekerBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   1222385771
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @hash   -380221563
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol ?onRemoved@SculkShriekerBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   1253419223
     */
    virtual void onRemoved(class BlockSource &);
    /**
     * @vftbl  16
     * @hash   -376527479
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  28
     * @hash   -346051286
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl  29
     * @hash   -308978789
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -288661327
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -322963261
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -322039740
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -321116219
     */
    virtual void __unk_vfn_34();
    /**
     * @symbol ??0SculkShriekerBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   -320920834
     */
    MCAPI SculkShriekerBlockActor(class BlockPos const &);
    /**
     * @symbol ?tryRespond@SculkShriekerBlockActor@@QEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1906616625
     */
    MCAPI void tryRespond(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?tryShriek@SculkShriekerBlockActor@@QEAA_NAEAVBlockSource@@VBlockPos@@AEAVPlayer@@@Z
     * @hash   -1316531473
     */
    MCAPI bool tryShriek(class BlockSource &, class BlockPos, class Player &);
    /**
     * @symbol ?tryGet@SculkShriekerBlockActor@@SAPEAV1@AEAVBlockSource@@VBlockPos@@@Z
     * @hash   -1567928139
     */
    MCAPI static class SculkShriekerBlockActor * tryGet(class BlockSource &, class BlockPos);
    /**
     * @symbol ?tryGetPlayerInHierarchy@SculkShriekerBlockActor@@SAPEAVPlayer@@PEAVActor@@@Z
     * @hash   -238093529
     */
    MCAPI static class Player * tryGetPlayerInHierarchy(class Actor *);

//private:
    /**
     * @symbol ?_canRespond@SculkShriekerBlockActor@@CA_NAEBVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1167268692
     */
    MCAPI static bool _canRespond(class BlockSource const &, class BlockPos const &);

private:

};