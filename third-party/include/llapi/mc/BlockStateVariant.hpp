/**
 * @file  BlockStateVariant.hpp
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
 * @brief MC class BlockStateVariant.
 *
 */
class BlockStateVariant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSTATEVARIANT
public:
    class BlockStateVariant& operator=(class BlockStateVariant const &) = delete;
    BlockStateVariant(class BlockStateVariant const &) = delete;
    BlockStateVariant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1060127535
     */
    virtual ~BlockStateVariant();
    /**
     * @vftbl  1
     * @symbol ?toNBT@BlockStateVariant@@UEBAXAEAVCompoundTag@@H@Z
     * @hash   -1768449076
     */
    virtual void toNBT(class CompoundTag &, int) const;
    /**
     * @vftbl  2
     * @symbol ?fromNBT@BlockStateVariant@@UEBA_NAEBVCompoundTag@@AEAH@Z
     * @hash   -926783632
     */
    virtual bool fromNBT(class CompoundTag const &, int &) const;

};