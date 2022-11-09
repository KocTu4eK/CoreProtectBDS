/**
 * @file  BedBlock.hpp
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
 * @brief MC class BedBlock.
 *
 */
class BedBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDBLOCK
public:
    class BedBlock& operator=(class BedBlock const &) = delete;
    BedBlock(class BedBlock const &) = delete;
    BedBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -791226410
     */
    virtual ~BedBlock();
    /**
     * @vftbl  3
     * @symbol ?getNextBlockPermutation@BedBlock@@UEBAPEBVBlock@@AEBV2@@Z
     * @hash   85802648
     */
    virtual class Block const * getNextBlockPermutation(class Block const &) const;
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
     * @vftbl  56
     * @symbol ?canFillAtPos@BedBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   1742372842
     */
    virtual bool canFillAtPos(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  57
     * @symbol ?sanitizeFillBlock@BedBlock@@UEBAAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEBV2@@Z
     * @hash   -1360760945
     */
    virtual class Block const & sanitizeFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  58
     * @symbol ?onFillBlock@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   428797647
     */
    virtual void onFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
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
     * @vftbl  69
     * @symbol ?checkIsPathable@BedBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
     * @hash   -638578720
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  75
     * @hash   -155704094
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  81
     * @symbol ?updateEntityAfterFallOn@BedBlock@@UEBAXAEBVBlockPos@@AEAUUpdateEntityAfterFallOnInterface@@@Z
     * @hash   -164837492
     */
    virtual void updateEntityAfterFallOn(class BlockPos const &, struct UpdateEntityAfterFallOnInterface &) const;
    /**
     * @vftbl  82
     * @hash   -137056850
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  98
     * @symbol ?playerWillDestroy@BedBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   1496141040
     */
    virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  100
     * @symbol ?neighborChanged@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -1175414786
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  101
     * @symbol ?getSecondPart@BedBlock@@UEBA_NAEBVBlockSource@@AEBVBlockPos@@AEAV3@@Z
     * @hash   2000347289
     */
    virtual bool getSecondPart(class BlockSource const &, class BlockPos const &, class BlockPos &) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@BedBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
     * @hash   343374574
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
    /**
     * @vftbl  103
     * @symbol ?spawnResources@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@PEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@@Z
     * @hash   1317804978
     */
    virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, struct ResourceDropsContext const &, std::vector<class Item const *> *) const;
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
     * @vftbl  129
     * @symbol ?canSpawnAt@BedBlock@@UEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
     * @hash   650344547
     */
    virtual bool canSpawnAt(class BlockSource const &, class BlockPos const &) const;
    /**
     * @vftbl  131
     * @hash   1418088223
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  145
     * @symbol ?telemetryVariant@BedBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1745119263
     */
    virtual int telemetryVariant(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  146
     * @symbol ?getVariant@BedBlock@@UEBAHAEBVBlock@@@Z
     * @hash   -247950820
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  149
     * @symbol ?getMappedFace@BedBlock@@UEBAEEAEBVBlock@@@Z
     * @hash   -622786990
     */
    virtual unsigned char getMappedFace(unsigned char, class Block const &) const;
    /**
     * @vftbl  156
     * @hash   1479964130
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
     * @symbol ?onPlace@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1965613128
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  171
     * @symbol ?onFallOn@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@M@Z
     * @hash   1780550628
     */
    virtual void onFallOn(class BlockSource &, class BlockPos const &, class Actor &, float) const;
    /**
     * @vftbl  176
     * @hash   1530011088
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  178
     * @symbol ?use@BedBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     * @hash   2044582353
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  187
     * @hash   1566775104
     */
    virtual void __unk_vfn_187();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDBLOCK
    /**
     * @symbol ?canBeSilkTouched@BedBlock@@MEBA_NXZ
     * @hash   -1774778981
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @symbol ?isBounceBlock@BedBlock@@UEBA_NXZ
     * @hash   299316087
     */
    MCVAPI bool isBounceBlock() const;
    /**
     * @symbol ?isInteractiveBlock@BedBlock@@UEBA_NXZ
     * @hash   35763249
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @symbol ??0BedBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   1908194810
     */
    MCAPI BedBlock(std::string const &, int);
    /**
     * @symbol ?HEAD_PIECE_DATA@BedBlock@@2GB
     * @hash   1750429068
     */
    MCAPI static unsigned short const HEAD_PIECE_DATA;
    /**
     * @symbol ?OCCUPIED_DATA@BedBlock@@2GB
     * @hash   -1630142544
     */
    MCAPI static unsigned short const OCCUPIED_DATA;
    /**
     * @symbol ?findWakeupPosition@BedBlock@@SA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@_NAEBV?$optional@VVec3@@@3@@Z
     * @hash   1776136628
     */
    MCAPI static class std::optional<class BlockPos> findWakeupPosition(class BlockSource &, class BlockPos const &, bool, class std::optional<class Vec3> const &);
    /**
     * @symbol ?isDangerousSpawnBlock@BedBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   991123802
     */
    MCAPI static bool isDangerousSpawnBlock(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?isValidStandUpPosition@BedBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1068445108
     */
    MCAPI static bool isValidStandUpPosition(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?setOccupied@BedBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@_N@Z
     * @hash   158061040
     */
    MCAPI static void setOccupied(class BlockSource &, class BlockPos const &, bool);

};