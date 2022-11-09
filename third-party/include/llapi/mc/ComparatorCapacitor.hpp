/**
 * @file  ComparatorCapacitor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SidePoweredComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ComparatorCapacitor.
 *
 */
class ComparatorCapacitor : public SidePoweredComponent {

#define AFTER_EXTRA
// Add Member There
public:
enum class Mode;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPARATORCAPACITOR
public:
    class ComparatorCapacitor& operator=(class ComparatorCapacitor const &) = delete;
    ComparatorCapacitor(class ComparatorCapacitor const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1774887206
     */
    virtual ~ComparatorCapacitor();
    /**
     * @vftbl  6
     * @symbol ?canConsumePowerAnyDirection@ComparatorCapacitor@@UEBA_NXZ
     * @hash   -537411608
     */
    virtual bool canConsumePowerAnyDirection() const;
    /**
     * @vftbl  7
     * @symbol ?canConsumerPower@ComparatorCapacitor@@UEBA_NXZ
     * @hash   2112715099
     */
    virtual bool canConsumerPower() const;
    /**
     * @vftbl  11
     * @symbol ?addSource@ComparatorCapacitor@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
     * @hash   1796949728
     */
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /**
     * @vftbl  12
     * @symbol ?allowConnection@ComparatorCapacitor@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
     * @hash   -1638066964
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @vftbl  14
     * @symbol ?evaluate@ComparatorCapacitor@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
     * @hash   -1054438148
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /**
     * @vftbl  15
     * @symbol ?cacheValues@ComparatorCapacitor@@UEAAXAEAVCircuitSystem@@AEBVBlockPos@@@Z
     * @hash   470411413
     */
    virtual void cacheValues(class CircuitSystem &, class BlockPos const &);
    /**
     * @vftbl  16
     * @symbol ?updateDependencies@ComparatorCapacitor@@UEAAXAEAVCircuitSceneGraph@@AEBVBlockPos@@@Z
     * @hash   -2055818506
     */
    virtual void updateDependencies(class CircuitSceneGraph &, class BlockPos const &);
    /**
     * @vftbl  17
     * @hash   -325631958
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  20
     * @hash   -303467454
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl  23
     * @symbol ?getCircuitComponentType@ComparatorCapacitor@@UEBA?AW4CircuitComponentType@@XZ
     * @hash   -2004669238
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @symbol ??0ComparatorCapacitor@@QEAA@XZ
     * @hash   -426898712
     */
    MCAPI ComparatorCapacitor();
    /**
     * @symbol ?clearAnalogStrength@ComparatorCapacitor@@QEAAXE@Z
     * @hash   1727764091
     */
    MCAPI void clearAnalogStrength(unsigned char);
    /**
     * @symbol ?getOldStrength@ComparatorCapacitor@@QEAAHXZ
     * @hash   1418947772
     */
    MCAPI int getOldStrength();
    /**
     * @symbol ?isSubtractMode@ComparatorCapacitor@@QEAA_NXZ
     * @hash   1746657640
     */
    MCAPI bool isSubtractMode();
    /**
     * @symbol ?setAnalogStrength@ComparatorCapacitor@@QEAAXHE@Z
     * @hash   405579108
     */
    MCAPI void setAnalogStrength(int, unsigned char);
    /**
     * @symbol ?setMode@ComparatorCapacitor@@QEAAXW4Mode@1@@Z
     * @hash   -1288962655
     */
    MCAPI void setMode(enum class ComparatorCapacitor::Mode);

};