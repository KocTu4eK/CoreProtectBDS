/**
 * @file  BlockPartVisibilityDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockPartVisibilityDescription.
 *
 */
struct BlockPartVisibilityDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPARTVISIBILITYDESCRIPTION
public:
    struct BlockPartVisibilityDescription& operator=(struct BlockPartVisibilityDescription const &) = delete;
    BlockPartVisibilityDescription(struct BlockPartVisibilityDescription const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1445855980
     */
    virtual ~BlockPartVisibilityDescription();
    /**
     * @vftbl  1
     * @symbol ?getName@BlockPartVisibilityDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1099582353
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol ?initializeComponent@BlockPartVisibilityDescription@@UEBAXAEAVEntityContext@@@Z
     * @hash   1505821237
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @hash   -1403710109
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockPartVisibilityDescription@@UEBA_NXZ
     * @hash   -2138482409
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockPartVisibilityDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   1918507225
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl  6
     * @symbol ?initializeFromNetwork@BlockPartVisibilityDescription@@UEAAXAEBVCompoundTag@@@Z
     * @hash   1199731097
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @symbol ??0BlockPartVisibilityDescription@@QEAA@XZ
     * @hash   -140748282
     */
    MCAPI BlockPartVisibilityDescription();
    /**
     * @symbol ?NameID@BlockPartVisibilityDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1965815565
     */
    MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType@BlockPartVisibilityDescription@@SAXXZ
     * @hash   1993030483
     */
    MCAPI static void bindType();
    /**
     * @symbol ?registerVersionUpgrades@BlockPartVisibilityDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     * @hash   1618875570
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};