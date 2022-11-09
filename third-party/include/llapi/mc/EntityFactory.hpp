/**
 * @file  EntityFactory.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityFactory.
 *
 */
class EntityFactory {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYFACTORY
public:
    class EntityFactory& operator=(class EntityFactory const &) = delete;
    EntityFactory(class EntityFactory const &) = delete;
    EntityFactory() = delete;
#endif

public:
    /**
     * @symbol ??0EntityFactory@@QEAA@V?$not_null@PEAVEntityRegistryBase@@@gsl@@@Z
     * @hash   -1496624789
     */
    MCAPI EntityFactory(class gsl::not_null<class EntityRegistryBase *>);
    /**
     * @symbol ?create@EntityFactory@@QEAA?AVStrictEntityContextOwner@@XZ
     * @hash   1844400728
     */
    MCAPI class StrictEntityContextOwner create();
    /**
     * @symbol ?destroy@EntityFactory@@QEAAX$$QEAVStrictEntityContextOwner@@@Z
     * @hash   1465312960
     */
    MCAPI void destroy(class StrictEntityContextOwner &&);

};