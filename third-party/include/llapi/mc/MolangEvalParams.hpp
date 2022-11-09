/**
 * @file  MolangEvalParams.hpp
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
 * @brief MC structure MolangEvalParams.
 *
 */
struct MolangEvalParams {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGEVALPARAMS
public:
    struct MolangEvalParams& operator=(struct MolangEvalParams const &) = delete;
    MolangEvalParams(struct MolangEvalParams const &) = delete;
    MolangEvalParams() = delete;
#endif

public:
    /**
     * @symbol ?getActorFromArg@MolangEvalParams@@QEBAPEAVActor@@AEBUMolangScriptArg@@@Z
     * @hash   1752783960
     */
    MCAPI class Actor * getActorFromArg(struct MolangScriptArg const &) const;
    /**
     * @symbol ?getActorPtrFromPushedArray@MolangEvalParams@@QEBAPEAVActor@@_K0AEA_N@Z
     * @hash   1863866051
     */
    MCAPI class Actor * getActorPtrFromPushedArray(unsigned __int64, unsigned __int64, bool &) const;
    /**
     * @symbol ?popActor@MolangEvalParams@@QEAAPEAVActor@@XZ
     * @hash   -1647118229
     */
    MCAPI class Actor * popActor();
    /**
     * @symbol ?popFloat@MolangEvalParams@@QEAAMXZ
     * @hash   -1028069720
     */
    MCAPI float popFloat();
    /**
     * @symbol ?popHash@MolangEvalParams@@QEAA_KXZ
     * @hash   -1398213851
     */
    MCAPI unsigned __int64 popHash();
    /**
     * @symbol ?popMissingVariableOrActorAddress@MolangEvalParams@@QEAA_KAEBVHashedString@@@Z
     * @hash   -521389474
     */
    MCAPI unsigned __int64 popMissingVariableOrActorAddress(class HashedString const &);
    /**
     * @symbol ?popMissingVariableOrActorAddress@MolangEvalParams@@QEAA_KW4MolangVariableIndex@@@Z
     * @hash   -1030876156
     */
    MCAPI unsigned __int64 popMissingVariableOrActorAddress(enum class MolangVariableIndex);
    /**
     * @symbol ?popPublicAccessMode@MolangEvalParams@@QEAA_NXZ
     * @hash   569368590
     */
    MCAPI bool popPublicAccessMode();
    /**
     * @symbol ?popRenderParamsCopyAndPtr@MolangEvalParams@@QEAAXXZ
     * @hash   1792869891
     */
    MCAPI void popRenderParamsCopyAndPtr();
    /**
     * @symbol ?pushLoopScope@MolangEvalParams@@QEAAX_K0@Z
     * @hash   -297824967
     */
    MCAPI void pushLoopScope(unsigned __int64, unsigned __int64);
    /**
     * @symbol ?pushRenderParams@MolangEvalParams@@QEAAXAEBVRenderParams@@@Z
     * @hash   2058327882
     */
    MCAPI void pushRenderParams(class RenderParams const &);
    /**
     * @symbol ?pushReturnValue@MolangEvalParams@@QEAAXXZ
     * @hash   -900554525
     */
    MCAPI void pushReturnValue();
    /**
     * @symbol ?pushValue@MolangEvalParams@@QEAAXM@Z
     * @hash   1458384838
     */
    MCAPI void pushValue(float);
    /**
     * @symbol ?renderParams@MolangEvalParams@@QEAAAEAVRenderParams@@XZ
     * @hash   1660288088
     */
    MCAPI class RenderParams & renderParams();
    /**
     * @symbol ?renderParams@MolangEvalParams@@QEBAAEBVRenderParams@@XZ
     * @hash   -688777418
     */
    MCAPI class RenderParams const & renderParams() const;
    /**
     * @symbol ?restoreAndPopStackState@MolangEvalParams@@QEAAXXZ
     * @hash   903589587
     */
    MCAPI void restoreAndPopStackState();
    /**
     * @symbol ??1MolangEvalParams@@QEAA@XZ
     * @hash   -1567110660
     */
    MCAPI ~MolangEvalParams();
    /**
     * @symbol ?getLocalThreadEvalParams@MolangEvalParams@@SAAEAU1@XZ
     * @hash   -2010925455
     */
    MCAPI static struct MolangEvalParams & getLocalThreadEvalParams();

//private:

};