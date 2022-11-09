/**
 * @file  CompositePackSource.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CompositePackSource.
 *
 */
class CompositePackSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOSITEPACKSOURCE
public:
    class CompositePackSource& operator=(class CompositePackSource const &) = delete;
    CompositePackSource(class CompositePackSource const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1368884407
     */
    virtual ~CompositePackSource();
    /**
     * @vftbl  1
     * @symbol ?forEachPackConst@CompositePackSource@@UEBAXV?$function@$$A6AXAEBVPack@@@Z@std@@@Z
     * @hash   -1654529662
     */
    virtual void forEachPackConst(class std::function<void (class Pack const &)>) const;
    /**
     * @vftbl  2
     * @symbol ?forEachPack@CompositePackSource@@UEAAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z
     * @hash   1255516451
     */
    virtual void forEachPack(class std::function<void (class Pack &)>);
    /**
     * @vftbl  3
     * @hash   -1353738109
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1352814588
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol ?load@CompositePackSource@@UEAA?AVPackSourceReport@@AEAVIPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
     * @hash   -1391444744
     */
    virtual class PackSourceReport load(class IPackManifestFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);
    /**
     * @symbol ??0CompositePackSource@@QEAA@XZ
     * @hash   1995256103
     */
    MCAPI CompositePackSource();
    /**
     * @symbol ??0CompositePackSource@@QEAA@$$QEAV?$vector@PEAVPackSource@@V?$allocator@PEAVPackSource@@@std@@@std@@@Z
     * @hash   598535384
     */
    MCAPI CompositePackSource(std::vector<class PackSource *> &&);
    /**
     * @symbol ?addPackSource@CompositePackSource@@QEAAXPEAVPackSource@@@Z
     * @hash   1228003301
     */
    MCAPI void addPackSource(class PackSource *);
    /**
     * @symbol ?clear@CompositePackSource@@QEAAXXZ
     * @hash   373444351
     */
    MCAPI void clear();

};