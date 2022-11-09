/**
 * @file  MoveToNode.hpp
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
 * @brief MC class MoveToNode.
 *
 */
class MoveToNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETONODE
public:
    class MoveToNode& operator=(class MoveToNode const &) = delete;
    MoveToNode(class MoveToNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   828406040
     */
    virtual ~MoveToNode();
    /**
     * @vftbl  1
     * @symbol ?tick@MoveToNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     * @hash   -1412888293
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @vftbl  2
     * @symbol ?initializeFromDefinition@MoveToNode@@EEAAXAEAVActor@@@Z
     * @hash   1230370143
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @symbol ??0MoveToNode@@QEAA@XZ
     * @hash   469160794
     */
    MCAPI MoveToNode();

};