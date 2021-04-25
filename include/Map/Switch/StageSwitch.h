#pragma once

#include "kamek.h"
#include "Util/JMapIdInfo.h"
#include "JMap/JMapInfoIter.h"

class StageSwitchCtrl
{
public:
    StageSwitchCtrl(const JMapInfoIter &);

    SwitchIdInfo* mSW_A; // _0
    SwitchIdInfo* mSW_B; // _4
    SwitchIdInfo* mSW_Appear; // _8
    SwitchIdInfo* mSW_Dead; // _C
    u8 _10;
    u8 _11;
    u8 _12;
    u8 _13;
    SwitchIdInfo* mSW_Param; // _14
};

class SwitchIdInfo
{
public:
    SwitchIdInfo(s32, const JMapInfoIter &);

    JMapIdInfo* mIDInfo; // _0
    bool mIsGlobal; // _4
};

class StageSwitchFunction
{
public:
    static SwitchIdInfo* createSwitchIdInfo(const char *, const JMapInfoIter &l, bool);
};

class BitFlag128
{
public:
    bool get(s32) const;
    void set(s32, bool);

    s32 mFlags[0x4];
};

class ZoneSwitch
{
public:
    ZoneSwitch();

    BitFlag128 mFlags;
};