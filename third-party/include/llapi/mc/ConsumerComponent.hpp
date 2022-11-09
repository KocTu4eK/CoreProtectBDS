/**
 * @file  ConsumerComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseCircuitComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ConsumerComponent.
 *
 */
class ConsumerComponent : public BaseCircuitComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONSUMERCOMPONENT
public:
    class ConsumerComponent& operator=(class ConsumerComponent const &) = delete;
    ConsumerComponent(class ConsumerComponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1101250059
     */
    virtual ~ConsumerComponent();
    /**
     * @vftbl  7
     * @symbol ?canConsumerPower@ConsumerComponent@@UEBA_NXZ
     * @hash   824552832
     */
    virtual bool canConsumerPower() const;
    /**
     * @vftbl  11
     * @symbol ?addSource@ConsumerComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
     * @hash   -1197340779
     */
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /**
     * @vftbl  12
     * @symbol ?allowConnection@ConsumerComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
     * @hash   1989287255
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @vftbl  14
     * @symbol ?evaluate@ConsumerComponent@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
     * @hash   -335513951
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
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
     * @vftbl  21
     * @symbol ?isSecondaryPowered@ConsumerComponent@@UEBA_NXZ
     * @hash   -1688160293
     */
    virtual bool isSecondaryPowered() const;
    /**
     * @vftbl  23
     * @symbol ?getCircuitComponentType@ConsumerComponent@@UEBA?AW4CircuitComponentType@@XZ
     * @hash   765931807
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @symbol ??0ConsumerComponent@@QEAA@XZ
     * @hash   1122284323
     */
    MCAPI ConsumerComponent();

};