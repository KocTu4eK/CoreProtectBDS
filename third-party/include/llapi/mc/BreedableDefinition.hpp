/**
 * @file  BreedableDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreedableDefinition.
 *
 */
class BreedableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREEDABLEDEFINITION
public:
    class BreedableDefinition& operator=(class BreedableDefinition const &) = delete;
    BreedableDefinition(class BreedableDefinition const &) = delete;
#endif

public:
    /**
     * @symbol ??0BreedableDefinition@@QEAA@XZ
     * @hash   -1419920883
     */
    MCAPI BreedableDefinition();
    /**
     * @symbol ?addBreedItem@BreedableDefinition@@QEAAXAEBVItemDescriptor@@@Z
     * @hash   -115560506
     */
    MCAPI void addBreedItem(class ItemDescriptor const &);
    /**
     * @symbol ?addBreedableType@BreedableDefinition@@QEAAXAEBUBreedableType@@@Z
     * @hash   1094406518
     */
    MCAPI void addBreedableType(struct BreedableType const &);
    /**
     * @symbol ?addEnvironmentRequirement@BreedableDefinition@@QEAAXAEBUEnvironmentRequirement@@@Z
     * @hash   1044157274
     */
    MCAPI void addEnvironmentRequirement(struct EnvironmentRequirement const &);
    /**
     * @symbol ?initialize@BreedableDefinition@@QEAAXAEAVEntityContext@@AEAVBreedableComponent@@@Z
     * @hash   -1711386875
     */
    MCAPI void initialize(class EntityContext &, class BreedableComponent &);
    /**
     * @symbol ??1BreedableDefinition@@QEAA@XZ
     * @hash   -946735139
     */
    MCAPI ~BreedableDefinition();
    /**
     * @symbol ?buildSchema@BreedableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VBreedableDefinition@@@JsonUtil@@@std@@@Z
     * @hash   899215924
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BreedableDefinition>> &);

};