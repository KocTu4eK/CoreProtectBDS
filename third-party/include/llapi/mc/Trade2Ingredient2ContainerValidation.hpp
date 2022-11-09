/**
 * @file  Trade2Ingredient2ContainerValidation.hpp
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
 * @brief MC class Trade2Ingredient2ContainerValidation.
 *
 */
class Trade2Ingredient2ContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADE2INGREDIENT2CONTAINERVALIDATION
public:
    class Trade2Ingredient2ContainerValidation& operator=(class Trade2Ingredient2ContainerValidation const &) = delete;
    Trade2Ingredient2ContainerValidation(class Trade2Ingredient2ContainerValidation const &) = delete;
    Trade2Ingredient2ContainerValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1004470959
     */
    virtual ~Trade2Ingredient2ContainerValidation();
    /**
     * @vftbl  1
     * @symbol ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     * @hash   701801483
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
     * @hash   1920700968
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
     * @hash   90980622
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @vftbl  7
     * @symbol ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
     * @hash   1309343330
     */
    virtual bool canDestroy(class ContainerScreenContext const &) const;
    /**
     * @vftbl  8
     * @symbol ?getContainerOffset@Trade2Ingredient2ContainerValidation@@UEBAHAEBVContainerScreenContext@@@Z
     * @hash   849265579
     */
    virtual int getContainerOffset(class ContainerScreenContext const &) const;
    /**
     * @vftbl  9
     * @symbol ?getContainerSize@ContainerValidationBase@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
     * @hash   1140128617
     */
    virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;

};