/**
 * @file  GetInteractionPositionForBlockNode.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Facing.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GetInteractionPositionForBlockNode.
 *
 */
class GetInteractionPositionForBlockNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETINTERACTIONPOSITIONFORBLOCKNODE
public:
    class GetInteractionPositionForBlockNode& operator=(class GetInteractionPositionForBlockNode const &) = delete;
    GetInteractionPositionForBlockNode(class GetInteractionPositionForBlockNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   140050037
     */
    virtual ~GetInteractionPositionForBlockNode();
    /**
     * @vftbl  1
     * @symbol ?tick@GetInteractionPositionForBlockNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     * @hash   -2133220216
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @vftbl  2
     * @symbol ?initializeFromDefinition@GetInteractionPositionForBlockNode@@EEAAXAEAVActor@@@Z
     * @hash   -803178916
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @symbol ??0GetInteractionPositionForBlockNode@@QEAA@XZ
     * @hash   -425214441
     */
    MCAPI GetInteractionPositionForBlockNode();

//private:
    /**
     * @symbol ?parseFacingNameFromString@GetInteractionPositionForBlockNode@@AEAA?AW4Name@Facing@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1889297083
     */
    MCAPI enum class Facing::Name parseFacingNameFromString(std::string);

private:

};