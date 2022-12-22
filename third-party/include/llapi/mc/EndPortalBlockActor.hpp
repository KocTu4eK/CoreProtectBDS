/**
 * @file  EndPortalBlockActor.hpp
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
 * @brief MC class EndPortalBlockActor.
 *
 */
class EndPortalBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDPORTALBLOCKACTOR
public:
    class EndPortalBlockActor& operator=(class EndPortalBlockActor const &) = delete;
    EndPortalBlockActor(class EndPortalBlockActor const &) = delete;
    EndPortalBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -822126147
     */
    virtual ~EndPortalBlockActor();
    /**
     * @vftbl  12
     * @hash   -291256027
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  18
     * @hash   -285714901
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  31
     * @hash   -234921246
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl  32
     * @hash   -233997725
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -233074204
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -232150683
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @hash   -190772906
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl  36
     * @hash   -189849385
     */
    virtual void __unk_vfn_36();
    /**
     * @symbol ??0EndPortalBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   1218354114
     */
    MCAPI EndPortalBlockActor(class BlockPos const &);

};