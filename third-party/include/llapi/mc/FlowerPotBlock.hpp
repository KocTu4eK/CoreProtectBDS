/**
 * @file  FlowerPotBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FlowerPotBlock.
 *
 */
class FlowerPotBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOWERPOTBLOCK
public:
    class FlowerPotBlock& operator=(class FlowerPotBlock const &) = delete;
    FlowerPotBlock(class FlowerPotBlock const &) = delete;
    FlowerPotBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -719888387
     */
    virtual ~FlowerPotBlock();
    /**
     * @vftbl  19
     * @hash   -323784916
     */
    virtual void __unk_vfn_19();
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
     * @vftbl  55
     * @symbol ?isValidAuxValue@FlowerPotBlock@@UEBA_NH@Z
     * @hash   1839980537
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl  60
     * @hash   -196162194
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @hash   -188027329
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  62
     * @symbol ?canContainLiquid@FlowerPotBlock@@UEBA_NXZ
     * @hash   -1886190187
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
     * @vftbl  91
     * @symbol ?mayPlace@FlowerPotBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
     * @hash   1632021822
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  92
     * @symbol ?mayPlace@FlowerPotBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   603837037
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  98
     * @symbol ?playerWillDestroy@FlowerPotBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1316920313
     */
    virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  100
     * @symbol ?neighborChanged@FlowerPotBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   511639733
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@FlowerPotBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
     * @hash   1669086887
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
    /**
     * @vftbl  105
     * @hash   1335894854
     */
    virtual void __unk_vfn_105();
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
     * @hash   1479964130
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  164
     * @symbol ?onRemove@FlowerPotBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1106449796
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
     * @vftbl  173
     * @symbol ?tick@FlowerPotBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1387428247
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  176
     * @hash   1530011088
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  178
     * @symbol ?use@FlowerPotBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     * @hash   1019075784
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  179
     * @symbol ?canSurvive@FlowerPotBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1485261053
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  187
     * @hash   1566775104
     */
    virtual void __unk_vfn_187();
    /**
     * @vftbl  189
     * @symbol ?getResourceItem@FlowerPotBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   771894913
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLOWERPOTBLOCK
    /**
     * @symbol ?isInteractiveBlock@FlowerPotBlock@@UEBA_NXZ
     * @hash   -1977977014
     */
    MCVAPI bool isInteractiveBlock() const;
    /**
     * @symbol ?waterSpreadCausesSpawn@FlowerPotBlock@@UEBA_NXZ
     * @hash   -1669634916
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @symbol ??0FlowerPotBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -1291479087
     */
    MCAPI FlowerPotBlock(std::string const &, int);
    /**
     * @symbol ?isSupportedBlock@FlowerPotBlock@@SA_NAEBVBlock@@@Z
     * @hash   233007707
     */
    MCAPI static bool isSupportedBlock(class Block const &);

//private:
    /**
     * @symbol ?_tryPlaceFlower@FlowerPotBlock@@AEBA_NAEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   -597540881
     */
    MCAPI bool _tryPlaceFlower(class Player &, class BlockPos const &) const;
    /**
     * @symbol ?_tryTakeFlower@FlowerPotBlock@@AEBA_NAEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   1717055847
     */
    MCAPI bool _tryTakeFlower(class Player &, class BlockPos const &) const;
    /**
     * @symbol ?_updateFlowerPotEntity@FlowerPotBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVFlowerPotBlockActor@@PEBVBlock@@AEAVActor@@@Z
     * @hash   -1991636600
     */
    MCAPI void _updateFlowerPotEntity(class BlockSource &, class BlockPos const &, class FlowerPotBlockActor *, class Block const *, class Actor &) const;

private:

};