/**
 * @file  HitboxComponent.hpp
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
 * @brief MC class HitboxComponent.
 *
 */
class HitboxComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HITBOXCOMPONENT
public:
    class HitboxComponent& operator=(class HitboxComponent const &) = delete;
    HitboxComponent() = delete;
#endif

public:
    /**
     * @symbol ??0HitboxComponent@@QEAA@AEBV0@@Z
     * @hash   325009681
     */
    MCAPI HitboxComponent(class HitboxComponent const &);
    /**
     * @symbol ?fromCompoundTag@HitboxComponent@@QEAAXAEBVCompoundTag@@@Z
     * @hash   469640552
     */
    MCAPI void fromCompoundTag(class CompoundTag const &);
    /**
     * @symbol ??4HitboxComponent@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   -585616978
     */
    MCAPI class HitboxComponent & operator=(class HitboxComponent &&);
    /**
     * @symbol ?toCompoundTag@HitboxComponent@@QEAAXAEAVCompoundTag@@@Z
     * @hash   -1222741698
     */
    MCAPI void toCompoundTag(class CompoundTag &);
    /**
     * @symbol ??1HitboxComponent@@QEAA@XZ
     * @hash   1235083457
     */
    MCAPI ~HitboxComponent();

};