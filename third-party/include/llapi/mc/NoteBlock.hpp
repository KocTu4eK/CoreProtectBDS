/**
 * @file  NoteBlock.hpp
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
 * @brief MC class NoteBlock.
 *
 */
class NoteBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NOTEBLOCK
public:
    class NoteBlock& operator=(class NoteBlock const &) = delete;
    NoteBlock(class NoteBlock const &) = delete;
    NoteBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1264113673
     */
    virtual ~NoteBlock();
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
     * @vftbl  73
     * @symbol ?onRedstoneUpdate@NoteBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
     * @hash   -1403185622
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /**
     * @vftbl  75
     * @hash   -155704094
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @symbol ?setupRedstoneComponent@NoteBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -424998003
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  82
     * @hash   -129845506
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  105
     * @hash   1335894854
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  109
     * @symbol ?attack@NoteBlock@@UEBA_NPEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   1844094064
     */
    virtual bool attack(class Player *, class BlockPos const &) const;
    /**
     * @vftbl  116
     * @symbol ?triggerEvent@NoteBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@HH@Z
     * @hash   598480803
     */
    virtual void triggerEvent(class BlockSource &, class BlockPos const &, int, int) const;
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
     * @symbol ?onPlace@NoteBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -374160695
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  176
     * @hash   1530011088
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  178
     * @symbol ?use@NoteBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     * @hash   -1199461808
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  187
     * @hash   1566775104
     */
    virtual void __unk_vfn_187();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NOTEBLOCK
    /**
     * @symbol ?isInteractiveBlock@NoteBlock@@UEBA_NXZ
     * @hash   -1029171838
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @symbol ??0NoteBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   672374409
     */
    MCAPI NoteBlock(std::string const &, int);

};