/**
 * @file  IWebviewTelemetry.hpp
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
 * @brief MC class IWebviewTelemetry.
 *
 */
class IWebviewTelemetry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IWEBVIEWTELEMETRY
public:
    class IWebviewTelemetry& operator=(class IWebviewTelemetry const &) = delete;
    IWebviewTelemetry(class IWebviewTelemetry const &) = delete;
    IWebviewTelemetry() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   78255511
     */
    virtual ~IWebviewTelemetry();
    /**
     * @vftbl  1
     * @hash   -1405557151
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   -1404633630
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1403710109
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1402786588
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   -1401863067
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?onDownloadBegin@IWebviewTelemetry@@UEAAXAEBUWebviewDownloadInfo@@@Z
     * @hash   -1777657139
     */
    virtual void onDownloadBegin(struct WebviewDownloadInfo const &);
    /**
     * @vftbl  7
     * @hash   -1400016025
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol ?onDownloadComplete@IWebviewTelemetry@@UEAAXAEBUWebviewDownloadInfo@@@Z
     * @hash   -1463751153
     */
    virtual void onDownloadComplete(struct WebviewDownloadInfo const &);
    /**
     * @vftbl  9
     * @symbol ?onDownloadCanceled@IWebviewTelemetry@@UEAAXAEBUWebviewDownloadInfo@@@Z
     * @hash   -426487313
     */
    virtual void onDownloadCanceled(struct WebviewDownloadInfo const &);
    /**
     * @symbol ??0IWebviewTelemetry@@QEAA@AEBVIMinecraftEventing@@@Z
     * @hash   -2140015806
     */
    MCAPI IWebviewTelemetry(class IMinecraftEventing const &);

};