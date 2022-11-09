/**
 * @file  ScreenHandlerBase.hpp
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
 * @brief MC class ScreenHandlerBase.
 *
 */
class ScreenHandlerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCREENHANDLERBASE
public:
    class ScreenHandlerBase& operator=(class ScreenHandlerBase const &) = delete;
    ScreenHandlerBase(class ScreenHandlerBase const &) = delete;
    ScreenHandlerBase() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1981007491
     */
    virtual ~ScreenHandlerBase();
    /**
     * @vftbl  1
     * @symbol ?handleAction@ScreenHandlerBase@@UEAA?AW4ItemStackNetResult@@AEBVItemStackRequestAction@@@Z
     * @hash   70432390
     */
    virtual enum class ItemStackNetResult handleAction(class ItemStackRequestAction const &);
    /**
     * @vftbl  2
     * @symbol ?endRequest@ScreenHandlerBase@@UEAA?AW4ItemStackNetResult@@XZ
     * @hash   -254430415
     */
    virtual enum class ItemStackNetResult endRequest();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCREENHANDLERBASE
    /**
     * @symbol ?endRequestBatch@ScreenHandlerBase@@UEAAXXZ
     * @hash   -1816800930
     */
    MCVAPI void endRequestBatch();
    /**
     * @symbol ?postRequest@ScreenHandlerBase@@UEAAX_N@Z
     * @hash   -607466331
     */
    MCVAPI void postRequest(bool);
#endif
    /**
     * @symbol ??0ScreenHandlerBase@@QEAA@AEAVItemStackRequestActionHandler@@@Z
     * @hash   2050961642
     */
    MCAPI ScreenHandlerBase(class ItemStackRequestActionHandler &);

//protected:
    /**
     * @symbol ?_tryGetSparseContainer@ScreenHandlerBase@@IEAA?AV?$shared_ptr@VSimpleSparseContainer@@@std@@W4ContainerEnumName@@@Z
     * @hash   190717941
     */
    MCAPI class std::shared_ptr<class SimpleSparseContainer> _tryGetSparseContainer(enum class ContainerEnumName);

protected:

};