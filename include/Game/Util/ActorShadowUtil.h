#pragma once

#include "revolution.h"
#include "JSystem.h"

class Color8;
class HitSensor;
class LiveActor;

// Complete
namespace MR {
    // This belongs to ActorShadowLocalUtil
    void initShadowFromCSV(LiveActor *, const char *, bool);

    void initShadowFromCSVWithInitShadowVolumeSphere(LiveActor *, const char *);
    void initShadowFromCSVWithoutInitShadowVolumeSphere(LiveActor *, const char *);
    void initShadowControllerList(LiveActor *, u32);
    void addShadowVolumeOval(LiveActor *, const char *, const TVec3f &, MtxPtr);
    void addShadowVolumeCylinder(LiveActor *, const char *, f32);
    void addShadowVolumeBox(LiveActor *, const char *, const TVec3f &);
    void addShadowVolumeBox(LiveActor *, const char *, const TVec3f &, MtxPtr);
    void addShadowVolumeLine(LiveActor *, const char *, LiveActor *, const char *, f32, LiveActor *, const char *, f32);
    void addShadowVolumeFlatModel(LiveActor *, const char *, const char *, MtxPtr);
    void initShadowSurfaceCircle(LiveActor *, f32);
    void initShadowVolumeSphere(LiveActor *, f32);
    void initShadowVolumeOval(LiveActor *, const TVec3f &);
    void initShadowVolumeCylinder(LiveActor *, f32);
    void initShadowVolumeFlatModel(LiveActor *, const char *, MtxPtr);
    void setShadowDropPositionPtr(LiveActor *, const char *, const TVec3f *);
    void setShadowDropPositionMtxPtr(LiveActor *, const char *, MtxPtr, const TVec3f &);
    void setShadowDropPositionAtJoint(LiveActor *, const char *, const char *, const TVec3f &);
    void setShadowDropDirectionPtr(LiveActor *, const char *, const TVec3f *);
    void setShadowDropDirectionPtrAll(LiveActor *, const TVec3f *);
    void setShadowProjectionPtr(LiveActor *, const char *, const TVec3f *, const TVec3f *);
    void setShadowDropPosition(LiveActor *, const char *, const TVec3f &);
    void setShadowDropDirection(LiveActor *, const char *, const TVec3f &);
    void setShadowDropLength(LiveActor *, const char *, f32);
    void setShadowProjection(LiveActor *, const char *, const TVec3f &, const TVec3f &, bool);
    void setShadowSurfaceOvalColor(LiveActor *, const char *, Color8);
    void setShadowSurfaceOvalAlpha(LiveActor *, const char *, u8);
    void setShadowVolumeSphereRadius(LiveActor *, const char *, f32);
    void setShadowVolumeCylinderRadius(LiveActor *, const char *, f32);
    void setShadowVolumeBoxSize(LiveActor *, const char *, const TVec3f &);
    void setShadowVolumeStartDropOffset(LiveActor *, const char *, f32);
    void setShadowVolumeEndDropOffset(LiveActor *, const char *, f32);
    void onShadowVolumeCutDropLength(LiveActor *, const char *);
    void onCalcShadow(LiveActor *, const char *);
    void offCalcShadow(LiveActor *, const char *);
    void onCalcShadowOneTime(LiveActor *, const char *);
    void onCalcShadowAll(LiveActor *);
    void offCalcShadowAll(LiveActor *);
    void onCalcShadowOneTimeAll(LiveActor *);
    void onCalcShadowDropGravity(LiveActor *, const char *);
    void onCalcShadowDropGravityOneTime(LiveActor *, const char *);
    void onCalcShadowDropPrivateGravity(LiveActor *, const char *);
    void onCalcShadowDropPrivateGravityOneTime(LiveActor *, const char *);
    void offCalcShadowDropPrivateGravity(LiveActor *, const char *);
    void excludeCalcShadowToMyCollision(LiveActor *, const char *);
    void excludeCalcShadowToSensorAll(LiveActor *, const HitSensor *);
    void excludeCalcShadowToActorAll(LiveActor *, const LiveActor *);
    bool isExistShadow(const LiveActor *, const char *);
    bool isExistShadows(const LiveActor *);
    void invalidateShadow(LiveActor *, const char *);
    void validateShadow(LiveActor *, const char *);
    void validateShadowGroup(LiveActor *, const char *);
    void invalidateShadowAll(LiveActor *);
    void validateShadowAll(LiveActor *);
    void offShadowVisibleSyncHost(LiveActor *, const char *);
    void onShadowVisibleSyncHostAll(LiveActor *);
    void offShadowVisibleSyncHostAll(LiveActor *);
    void onShadowFollowHostScale(LiveActor *, const char *);
    void onShadowFollowHostScaleAll(LiveActor *);
    void calcClippingRangeIncludeShadow(TVec3f *, f32 *, const LiveActor *, f32);
    void setClippingRangeIncludeShadow(LiveActor *, TVec3f *, f32);
    bool isShadowProjected(const LiveActor *, const char *);
    void getShadowProjectionPos(const LiveActor *, const char *, TVec3f *);
    void getShadowProjectionNormal(const LiveActor *, const char *, TVec3f *);
    f32 getShadowProjectionLength(const LiveActor *, const char *);
    HitSensor* getShadowProjectedSensor(const LiveActor *, const char *);
    bool isShadowProjectedAny(const LiveActor *);
    f32 getShadowNearProjectionLength(const LiveActor *);
};
