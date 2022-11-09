/**
 * @file  LeafBlock.hpp
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
 * @brief MC class LeafBlock.
 *
 */
class LeafBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEAFBLOCK
public:
    class LeafBlock& operator=(class LeafBlock const &) = delete;
    LeafBlock(class LeafBlock const &) = delete;
    LeafBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   145916445
     */
    virtual ~LeafBlock();
    /**
     * @vftbl  19
     * @hash   -323784916
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  22
     * @symbol ?canProvideSupport@LeafBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
     * @hash   -1359363954
     */
    virtual bool canProvideSupport(class Block const &, unsigned char, enum class BlockSupportType) const;
    /**
     * @vftbl  24
     * @symbol ?canProvideMultifaceSupport@LeafBlock@@UEBA_NAEBVBlock@@E@Z
     * @hash   -205827292
     */
    virtual bool canProvideMultifaceSupport(class Block const &, unsigned char) const;
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
     * @hash   -246209152
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
     * @symbol ?canContainLiquid@LeafBlock@@UEBA_NXZ
     * @hash   1087872377
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl  75
     * @hash   -155704094
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  82
     * @hash   -129845506
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  96
     * @symbol ?breaksFallingBlocks@LeafBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
     * @hash   997521516
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @vftbl  103
     * @symbol ?spawnResources@LeafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@PEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@@Z
     * @hash   1195525727
     */
    virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, struct ResourceDropsContext const &, std::vector<class Item const *> *) const;
    /**
     * @vftbl  105
     * @hash   1335894854
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  106
     * @symbol ?getPlacementBlock@LeafBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     * @hash   116415758
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
     * @vftbl  136
     * @symbol ?getColor@LeafBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   490204571
     */
    virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  139
     * @symbol ?isSeasonTinted@LeafBlock@@UEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -404940352
     */
    virtual bool isSeasonTinted(class Block const &, class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  140
     * @symbol ?onGraphicsModeChanged@LeafBlock@@UEAAXAEBUBlockGraphicsModeChangeContext@@@Z
     * @hash   1806182955
     */
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const &);
    /**
     * @vftbl  156
     * @hash   1472752786
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  164
     * @symbol ?onRemove@LeafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -183951856
     */
    virtual void onRemove(class BlockSource &, class BlockPos const &) const;
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
     * @vftbl  172
     * @symbol ?playerDestroy@LeafBlock@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1032903677
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  174
     * @symbol ?randomTick@LeafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -339696366
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  176
     * @hash   1537222432
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  181
     * @symbol ?getRenderLayer@LeafBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1993529880
     */
    virtual enum class BlockRenderLayer getRenderLayer(class Block const &, class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  186
     * @symbol ?getMapColor@LeafBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   753724423
     */
    virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  187
     * @hash   1566775104
     */
    virtual void __unk_vfn_187();
    /**
     * @vftbl  188
     * @symbol ?getResourceCount@LeafBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     * @hash   -387859963
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  193
     * @symbol ?getExtraResourceItem@LeafBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
     * @hash   1896534151
     */
    virtual class ItemInstance getExtraResourceItem(class Block const &) const;
    /**
     * @symbol ??0LeafBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HV?$WeakPtr@VBlockLegacy@@@@@Z
     * @hash   -1843940889
     */
    MCAPI LeafBlock(std::string const &, int, class WeakPtr<class BlockLegacy>);
    /**
     * @symbol ?getSeasonsColor@LeafBlock@@QEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@HH@Z
     * @hash   1594118744
     */
    MCAPI class mce::Color getSeasonsColor(class BlockSource &, class BlockPos const &, int, int) const;
    /**
     * @symbol ?runDecay@LeafBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@H@Z
     * @hash   1845962358
     */
    MCAPI static void runDecay(class BlockSource &, class BlockPos const &, int);

//protected:
    /**
     * @symbol ?getSapling@LeafBlock@@IEBAAEBVBlock@@XZ
     * @hash   -935165353
     */
    MCAPI class Block const & getSapling() const;
    /**
     * @symbol ?_isTransparent@LeafBlock@@KA_NAEBVBlock@@AEBW4BlockProperty@@@Z
     * @hash   1185780045
     */
    MCAPI static bool _isTransparent(class Block const &, enum class BlockProperty const &);

protected:

};