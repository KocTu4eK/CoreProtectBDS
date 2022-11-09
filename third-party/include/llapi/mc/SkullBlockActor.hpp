/**
 * @file  SkullBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SkullBlockActor.
 *
 */
class SkullBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There
public:
enum class SkullType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKULLBLOCKACTOR
public:
    class SkullBlockActor& operator=(class SkullBlockActor const &) = delete;
    SkullBlockActor(class SkullBlockActor const &) = delete;
    SkullBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -804671885
     */
    virtual ~SkullBlockActor();
    /**
     * @vftbl  1
     * @symbol ?load@SkullBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   1474286476
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol ?save@SkullBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   -1916528053
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  7
     * @symbol ?tick@SkullBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   789148517
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  8
     * @symbol ?onChanged@SkullBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   -509789859
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @vftbl  12
     * @hash   -380221563
     */
    virtual void __unk_vfn_12();
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
     * @vftbl  35
     * @symbol ?_getUpdatePacket@SkullBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     * @hash   1863456286
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl  36
     * @symbol ?_onUpdatePacket@SkullBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   186492388
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ??0SkullBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   1881109976
     */
    MCAPI SkullBlockActor(class BlockPos const &);
    /**
     * @symbol ?getSkullType@SkullBlockActor@@QEBA?AW4SkullType@1@XZ
     * @hash   -1376331356
     */
    MCAPI enum class SkullBlockActor::SkullType getSkullType() const;
    /**
     * @symbol ?setRotation@SkullBlockActor@@QEAAXM@Z
     * @hash   -2141841084
     */
    MCAPI void setRotation(float);
    /**
     * @symbol ?setSkullType@SkullBlockActor@@QEAAXH@Z
     * @hash   -119678018
     */
    MCAPI void setSkullType(int);

};