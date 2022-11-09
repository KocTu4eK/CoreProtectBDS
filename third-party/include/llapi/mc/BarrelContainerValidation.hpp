/**
 * @file  BarrelContainerValidation.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BarrelContainerValidation.
 *
 */
class BarrelContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BARRELCONTAINERVALIDATION
public:
    class BarrelContainerValidation& operator=(class BarrelContainerValidation const &) = delete;
    BarrelContainerValidation(class BarrelContainerValidation const &) = delete;
    BarrelContainerValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1345019358
     */
    virtual ~BarrelContainerValidation();
    /**
     * @vftbl  1
     * @symbol ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     * @hash   471116952
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @vftbl  2
     * @hash   -1361872974
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol ?getAvailableSetCount@ContainerValidationBase@@UEBAHHAEBVItemStackBase@@@Z
     * @hash   1359070203
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /**
     * @vftbl  4
     * @hash   -1360025932
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   -1359102411
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
     * @hash   -1589704485
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @vftbl  7
     * @symbol ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
     * @hash   -371341777
     */
    virtual bool canDestroy(class ContainerScreenContext const &) const;
    /**
     * @vftbl  8
     * @hash   -1362943528
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol ?getContainerSize@BarrelContainerValidation@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
     * @hash   257958140
     */
    virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;

};