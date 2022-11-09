/**
 * @file  FenceGateBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FenceGateBlock.
 *
 */
class FenceGateBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FENCEGATEBLOCK
public:
    class FenceGateBlock& operator=(class FenceGateBlock const &) = delete;
    FenceGateBlock(class FenceGateBlock const &) = delete;
    FenceGateBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -995105893
     */
    virtual ~FenceGateBlock();
    /**
     * @vftbl  10
     * @symbol ?getAABB@FenceGateBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     * @hash   -485709423
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  14
     * @symbol ?getLiquidClipVolume@FenceGateBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVAABB@@@Z
     * @hash   780755081
     */
    virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
    /**
     * @vftbl  19
     * @hash   -323784916
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  25
     * @symbol ?canConnect@FenceGateBlock@@UEBA_NAEBVBlock@@E0@Z
     * @hash   189381784
     */
    virtual bool canConnect(class Block const &, unsigned char, class Block const &) const;
    /**
     * @vftbl  29
     * @hash   -295155765
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -274838303
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -272991261
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -272067740
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -271144219
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @hash   -269297177
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -268373656
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -267450135
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -266526614
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -253420496
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -245285631
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -244362110
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -242515068
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -241591547
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -240668026
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -239744505
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -238820984
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -237897463
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @hash   -213885917
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @hash   -188950850
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @hash   -188027329
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  62
     * @symbol ?canContainLiquid@FenceGateBlock@@UEBA_NXZ
     * @hash   325425527
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl  73
     * @symbol ?onRedstoneUpdate@FenceGateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
     * @hash   -1983686172
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /**
     * @vftbl  75
     * @hash   -155704094
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @symbol ?setupRedstoneComponent@FenceGateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1893925705
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  82
     * @hash   -129845506
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  85
     * @symbol ?ignoreEntitiesOnPistonMove@FenceGateBlock@@UEBA_NAEBVBlock@@@Z
     * @hash   1977062135
     */
    virtual bool ignoreEntitiesOnPistonMove(class Block const &) const;
    /**
     * @vftbl  100
     * @symbol ?neighborChanged@FenceGateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -1675124365
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  105
     * @hash   1335894854
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  106
     * @symbol ?getPlacementBlock@FenceGateBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     * @hash   -1179289712
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @vftbl  123
     * @hash   1391306114
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @hash   1393153156
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @hash   1394076677
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  131
     * @hash   1418088223
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  156
     * @hash   1472752786
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  167
     * @hash   1459544802
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl  168
     * @hash   1460468323
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @hash   1461391844
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @symbol ?onPlace@FenceGateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1486010429
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  173
     * @symbol ?tick@FenceGateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -875814745
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  176
     * @hash   1530011088
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  178
     * @symbol ?use@FenceGateBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     * @hash   480510614
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  187
     * @hash   1566775104
     */
    virtual void __unk_vfn_187();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FENCEGATEBLOCK
    /**
     * @symbol ?isFenceGateBlock@FenceGateBlock@@UEBA_NXZ
     * @hash   -762657678
     */
    MCVAPI bool isFenceGateBlock() const;
    /**
     * @symbol ?isInteractiveBlock@FenceGateBlock@@UEBA_NXZ
     * @hash   233638700
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @symbol ??0FenceGateBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4WoodType@@@Z
     * @hash   -192965674
     */
    MCAPI FenceGateBlock(std::string const &, int, enum class WoodType);
    /**
     * @symbol ?resolveIsInWall@FenceGateBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1722789907
     */
    MCAPI void resolveIsInWall(class BlockSource &, class BlockPos const &) const;

//private:
    /**
     * @symbol ?_onOpenChanged@FenceGateBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1741606356
     */
    MCAPI void _onOpenChanged(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_setOpen@FenceGateBlock@@AEBAXAEAVBlockSource@@V?$not_null@PEBVBlock@@@gsl@@AEBVBlockPos@@PEAVPlayer@@_N@Z
     * @hash   -350608180
     */
    MCAPI void _setOpen(class BlockSource &, class gsl::not_null<class Block const *>, class BlockPos const &, class Player *, bool) const;

private:

};