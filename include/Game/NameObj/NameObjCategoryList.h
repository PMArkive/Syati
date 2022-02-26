#pragma once

#include "revolution.h"
#include "Game/NameObj/NameObj.h"
#include "Game/Util/Array.h"
#include "Game/Util/Functor.h"

#define CATEGORY_MOVEMENT_00 0x00
#define CATEGORY_MOVEMENT_STOP_SCENE_DELAY_REQUEST 0x01
#define CATEGORY_MOVEMENT_CAMERA 0x02
#define CATEGORY_MOVEMENT_SCREEN_EFFECT 0x03
#define CATEGORY_MOVEMENT_CLIPPING_DIRECTOR 0x04
#define CATEGORY_MOVEMENT_SENSOR_HIT_CHECKER 0x05
#define CATEGORY_MOVEMENT_MSG_SHARED_GROUP 0x06
#define CATEGORY_MOVEMENT_07 0x07
#define CATEGORY_MOVEMENT_08 0x08
#define CATEGORY_MOVEMENT_AUD_CAMERA_WATCHER 0x09
#define CATEGORY_MOVEMENT_TALK_DIRECTOR 0x0A
#define CATEGORY_MOVEMENT_DEMO_DIRECTOR 0x0B
#define CATEGORY_MOVEMENT_0C 0x0C
#define CATEGORY_MOVEMENT_AREA_OBJ 0x0D
#define CATEGORY_MOVEMENT_LAYOUT 0x0E
#define CATEGORY_MOVEMENT_LAYOUT_DECORATION 0x0F
#define CATEGORY_MOVEMENT_WIPE_LAYOUT 0x10
#define CATEGORY_MOVEMENT_LAYOUT_ON_PAUSE 0x11
#define CATEGORY_MOVEMENT_12 0x12
#define CATEGORY_MOVEMENT_13 0x13
#define CATEGORY_MOVEMENT_MIRROR_CAMERA 0x14
#define CATEGORY_MOVEMENT_IMAGE_EFFECT 0x15
#define CATEGORY_MOVEMENT_AUD_EFFECT_DIRECTOR 0x16
#define CATEGORY_MOVEMENT_AUD_BGM_CONDUCTOR 0x17
#define CATEGORY_MOVEMENT_CAMERA_COVER 0x18
#define CATEGORY_MOVEMENT_SWITCH_WATCHER_HOLDER 0x19
#define CATEGORY_MOVEMENT_PAUSE_BLUR 0x1A
#define CATEGORY_MOVEMENT_MAP_PARTS 0x1B
#define CATEGORY_MOVEMENT_PLANET 0x1C
#define CATEGORY_MOVEMENT_COLLISION_MAP_OBJ 0x1D
#define CATEGORY_MOVEMENT_COLLISION_ENEMY 0x1E
#define CATEGORY_MOVEMENT_COLLISION_DIRECTOR 0x1F
#define CATEGORY_MOVEMENT_ENVIRONMENT 0x20
#define CATEGORY_MOVEMENT_MAP_OBJ 0x21
#define CATEGORY_MOVEMENT_MAP_OBJ_DECORATION 0x22
#define CATEGORY_MOVEMENT_AFTER_MAP_OBJ 0x23
#define CATEGORY_MOVEMENT_PLAYER 0x24
#define CATEGORY_MOVEMENT_PLAYER_DECORATION 0x25
#define CATEGORY_MOVEMENT_PLAYER_MESSENGER 0x26
#define CATEGORY_MOVEMENT_NPC 0x27
#define CATEGORY_MOVEMENT_RIDE 0x28
#define CATEGORY_MOVEMENT_ENEMY 0x29
#define CATEGORY_MOVEMENT_ENEMY_DECORATION 0x2A
#define CATEGORY_MOVEMENT_ITEM 0x2B
#define CATEGORY_MOVEMENT_SHADOW_CONTROLLER 0x2C
#define CATEGORY_MOVEMENT_SUPER_DREAMER 0x2D
#define CATEGORY_MOVEMENT_WORLD_MAP_INFO 0x2E
#define CATEGORY_MOVEMENT_WORLD_MAP_MINI_OBJ 0x2F
#define CATEGORY_MOVEMENT_WORLD_MAP_ICON 0x30
#define CATEGORY_MOVEMENT_MAX_VALUE 0x31

#define CATEGORY_CALC_ANIM_MAP_PARTS 0x00
#define CATEGORY_CALC_ANIM_PLANET 0x01
#define CATEGORY_CALC_ANIM_COLLISION_MAP_OBJ 0x02
#define CATEGORY_CALC_ANIM_COLLISION_ENEMY 0x03
#define CATEGORY_CALC_ANIM_ENVIRONMENT 0x04
#define CATEGORY_CALC_ANIM_MAP_OBJ 0x05
#define CATEGORY_CALC_ANIM_NPC 0x06
#define CATEGORY_CALC_ANIM_RIDE 0x07
#define CATEGORY_CALC_ANIM_ENEMY 0x08
#define CATEGORY_CALC_ANIM_PLAYER 0x09
#define CATEGORY_CALC_ANIM_PLAYER_DECORATION 0x0A
#define CATEGORY_CALC_ANIM_MAP_OBJ_DECORATION 0x0B
#define CATEGORY_CALC_ANIM_MIRROR_MAP_OBJ 0x0C
#define CATEGORY_CALC_ANIM_LAYOUT 0x0D
#define CATEGORY_CALC_ANIM_LAYOUT_DECORATION 0x0E
#define CATEGORY_CALC_ANIM_ITEM 0x0F
#define CATEGORY_CALC_ANIM_10 0x10
#define CATEGORY_CALC_ANIM_PARTICLE 0x11
#define CATEGORY_CALC_ANIM_PARTICLE_IGNORE_PAUSE 0x12
#define CATEGORY_CALC_ANIM_13 0x13
#define CATEGORY_CALC_ANIM_14 0x14
#define CATEGORY_CALC_ANIM_15 0x15
#define CATEGORY_CALC_ANIM_16 0x16
#define CATEGORY_CALC_ANIM_MAX_VALUE 0x17

#define CATEGORY_DRAW_BUFFER_CLIPPED_MAP_PARTS 0x00
#define CATEGORY_DRAW_BUFFER_BOSS_BUSSUN 0x01
#define CATEGORY_DRAW_BUFFER_SKY 0x02
#define CATEGORY_DRAW_BUFFER_AIR 0x03
#define CATEGORY_DRAW_BUFFER_SUN 0x04
#define CATEGORY_DRAW_BUFFER_PLANET 0x05
#define CATEGORY_DRAW_BUFFER_PLANET_LOW 0x06
#define CATEGORY_DRAW_BUFFER_ENVIRONMENT 0x07
#define CATEGORY_DRAW_BUFFER_ENVIRONMENT_STRONG_LIGHT 0x08
#define CATEGORY_DRAW_BUFFER_MAP_OBJ 0x09
#define CATEGORY_DRAW_BUFFER_MAP_OBJ_WEAK_LIGHT 0x0A
#define CATEGORY_DRAW_BUFFER_MAP_OBJ_STRONG_LIGHT 0x0B
#define CATEGORY_DRAW_BUFFER_NO_SHADOWED_MAP_OBJ 0x0C
#define CATEGORY_DRAW_BUFFER_NO_SHADOWED_MAP_OBJ_STRONG_LIGHT 0x0D
#define CATEGORY_DRAW_BUFFER_NO_SILHOUETTED_MAP_OBJ 0x0E
#define CATEGORY_DRAW_BUFFER_NO_SILHOUETTED_MAP_OBJ_WEAK_LIGHT 0x0F
#define CATEGORY_DRAW_BUFFER_NO_SILHOUETTED_MAP_OBJ_STRONG_LIGHT 0x10
#define CATEGORY_DRAW_BUFFER_NPC 0x11
#define CATEGORY_DRAW_BUFFER_RIDE 0x12
#define CATEGORY_DRAW_BUFFER_ENEMY 0x13
#define CATEGORY_DRAW_BUFFER_ENEMY_DECORATION 0x14
#define CATEGORY_DRAW_BUFFER_PLAYER 0x15
#define CATEGORY_DRAW_BUFFER_PLAYER_DECORATION 0x16
#define CATEGORY_DRAW_BUFFER_GHOST_MAZE_MASK 0x17
#define CATEGORY_DRAW_BUFFER_18 0x18
#define CATEGORY_DRAW_BUFFER_19 0x19
#define CATEGORY_DRAW_BUFFER_INDIRECT_MAP_OBJ 0x1A
#define CATEGORY_DRAW_BUFFER_INDIRECT_MAP_OBJ_STRONG_LIGHT 0x1B
#define CATEGORY_DRAW_BUFFER_INDIRECT_NPC 0x1C
#define CATEGORY_DRAW_BUFFER_INDIRECT_ENEMY 0x1D
#define CATEGORY_DRAW_BUFFER_INDIRECT_PLANET 0x1E
#define CATEGORY_DRAW_BUFFER_BLOOM 0x1F
#define CATEGORY_DRAW_BUFFER_TRIPOD_BOSS 0x20
#define CATEGORY_DRAW_BUFFER_CRYSTAL 0x21
#define CATEGORY_DRAW_BUFFER_CRYSTAL_ITEM 0x22
#define CATEGORY_DRAW_BUFFER_GLARING_LIGHT 0x23
#define CATEGORY_DRAW_BUFFER_24 0x24
#define CATEGORY_DRAW_BUFFER_TIME_STOP_SCREEN_EFFECT 0x25
#define CATEGORY_DRAW_BUFFER_STORY_BOOK 0x26
#define CATEGORY_DRAW_BUFFER_WORLD_MAP_MINI_OBJ 0x27
#define CATEGORY_DRAW_BUFFER_28 0x28
#define CATEGORY_DRAW_BUFFER_3D_MODEL_FOR_2D 0x29
#define CATEGORY_DRAW_BUFFER_2A 0x2A
#define CATEGORY_DRAW_BUFFER_SWITCHING_SCREEN_EFFECT 0x2B
#define CATEGORY_DRAW_BUFFER_MIRROR_MAP_OBJ 0x2C
#define CATEGORY_DRAW_BUFFER_2D 0x2D
#define CATEGORY_DRAW_BUFFER_2E 0x2E
#define CATEGORY_DRAW_BUFFER_2F 0x2F
#define CATEGORY_DRAW_BUFFER_MAX_VALUE 0x30

#define CATEGORY_DRAW_SWING_ROPE 0x00
#define CATEGORY_DRAW_01 0x01
#define CATEGORY_DRAW_CREEPER 0x02
#define CATEGORY_DRAW_03 0x03
#define CATEGORY_DRAW_PLANT_STALK 0x04
#define CATEGORY_DRAW_PLANT 0x05
#define CATEGORY_DRAW_TRAPEZE 0x06
#define CATEGORY_DRAW_OCEAN_BOWL 0x07
#define CATEGORY_DRAW_OCEAN_RING 0x08
#define CATEGORY_DRAW_OCEAN_RING_PIPE_INSIDE 0x09
#define CATEGORY_DRAW_OCEAN_RING_PIPE_OUTSIDE 0x0A
#define CATEGORY_DRAW_OCEAN_SPHERE 0x0B
#define CATEGORY_DRAW_WATER_ROAD 0x0C
#define CATEGORY_DRAW_WHIRL_POOL 0x0D
#define CATEGORY_DRAW_ELECTRIC_RAIL 0x0E
#define CATEGORY_DRAW_BIG_BUBBLE 0x0F
#define CATEGORY_DRAW_BIG_BUBBLE_GOAL 0x10
#define CATEGORY_DRAW_11 0x11
#define CATEGORY_DRAW_SPIN_DRIVER_PATH 0x12
#define CATEGORY_DRAW_G_CAPTURE 0x13
#define CATEGORY_DRAW_CLIP_AREA_DROP_LASER 0x14
#define CATEGORY_DRAW_SPIDER_THREAD 0x15
#define CATEGORY_DRAW_SPACE_COCOON 0x16
#define CATEGORY_DRAW_17 0x17
#define CATEGORY_DRAW_NORMAL_MAP_OBJ 0x18
#define CATEGORY_DRAW_FLEXIBLE_SPHERE 0x19
#define CATEGORY_DRAW_KIRAIRA_CHAIN 0x1A
#define CATEGORY_DRAW_WATER_PLANT 0x1B
#define CATEGORY_DRAW_1C 0x1C
#define CATEGORY_DRAW_1D 0x1D
#define CATEGORY_DRAW_FLAG 0x1E
#define CATEGORY_DRAW_1F 0x1F
#define CATEGORY_DRAW_20 0x20
#define CATEGORY_DRAW_WOOD_LOG_BRIDGE 0x21
#define CATEGORY_DRAW_HIP_DROP_STAR_MOVE 0x22
#define CATEGORY_DRAW_DYNAMIC_MAP_OBJ 0x23
#define CATEGORY_DRAW_24 0x24
#define CATEGORY_DRAW_PLAYER 0x25
#define CATEGORY_DRAW_26 0x26
#define CATEGORY_DRAW_27 0x27
#define CATEGORY_DRAW_MII_FACE_PARTS 0x28
#define CATEGORY_DRAW_29 0x29
#define CATEGORY_DRAW_SHADOW_SURFACE 0x2A
#define CATEGORY_DRAW_SHADOW_VOLUME 0x2B
#define CATEGORY_DRAW_SILHOUETTE 0x2C
#define CATEGORY_DRAW_2D 0x2D
#define CATEGORY_DRAW_CLIP_AREA 0x2E
#define CATEGORY_DRAW_FALL_OUT_FIELD_DRAW 0x2F
#define CATEGORY_DRAW_CLIP_FIELD_FILL_DRAW 0x30
#define CATEGORY_DRAW_CAPTURE_SCREEN_INDIRECT 0x31
#define CATEGORY_DRAW_CAPTURE_SCREEN_CAMERA 0x32
#define CATEGORY_DRAW_33 0x33
#define CATEGORY_DRAW_CENTER_SCREEN_BLUR 0x34
#define CATEGORY_DRAW_35 0x35
#define CATEGORY_DRAW_FUR_DRAW 0x36
#define CATEGORY_DRAW_37 0x37
#define CATEGORY_DRAW_38 0x38
#define CATEGORY_DRAW_BLOOM_EFFECT_PRE_DRAW 0x39
#define CATEGORY_DRAW_BLOOM_EFFECT_POST_DRAW 0x3A
#define CATEGORY_DRAW_3B 0x3B
#define CATEGORY_DRAW_IMAGE_EFFECT 0x3C
#define CATEGORY_DRAW_DASH_RING 0x3D
#define CATEGORY_DRAW_BRIGHT_OBJ 0x3E
#define CATEGORY_DRAW_WATER_CAMERA_FILTER 0x3F
#define CATEGORY_DRAW_40 0x40
#define CATEGORY_DRAW_TIME_STOP_SCREEN_EFFECT 0x41
#define CATEGORY_DRAW_PAUSE_BLUR 0x42
#define CATEGORY_DRAW_43 0x43
#define CATEGORY_DRAW_44 0x44
#define CATEGORY_DRAW_45 0x45
#define CATEGORY_DRAW_LAYOUT 0x46
#define CATEGORY_DRAW_LAYOUT_DECORATION 0x47
#define CATEGORY_DRAW_LAYOUT_ON_PAUSE 0x48
#define CATEGORY_DRAW_COMET_SCREEN_FILTER 0x49
#define CATEGORY_DRAW_WIPE_LAYOUT 0x4A
#define CATEGORY_DRAW_TALK_LAYOUT 0x4B
#define CATEGORY_DRAW_4C 0x4C
#define CATEGORY_DRAW_CINEMA_FRAME 0x4D
#define CATEGORY_DRAW_GALAXY_NAME_PLATE 0x4E
#define CATEGORY_DRAW_WORLD_MAP_INFO 0x4F
#define CATEGORY_DRAW_50 0x50
#define CATEGORY_DRAW_FILE_SELECT 0x51
#define CATEGORY_DRAW_PARTICLE_3D 0x52
#define CATEGORY_DRAW_PARTICLE_INDIRECT 0x53
#define CATEGORY_DRAW_PARTICLE_AFTER_INDIRECT 0x54
#define CATEGORY_DRAW_PARTICLE_WORLD_MAP_MINI_ICON 0x55
#define CATEGORY_DRAW_PARTICLE_2D 0x56
#define CATEGORY_DRAW_PARTICLE_FOR_2D_MODEL 0x57
#define CATEGORY_DRAW_PARTICLE_BLOOM_EFFECT 0x58
#define CATEGORY_DRAW_PARTICLE_AFTER_IMAGE_EFFECT 0x59
#define CATEGORY_DRAW_5A 0x5A
#define CATEGORY_DRAW_5B 0x5B
#define CATEGORY_DRAW_CAMERA_COVER 0x5C
#define CATEGORY_DRAW_MAX_VALUE 0x5D

#define CATEGORY_AUTO -2
#define CATEGORY_NULL -1

class NameObjDelegator {
public:
    virtual void operator()(NameObj *) = 0;
};

namespace {
    template<typename T>
    class NameObjRealDelegator : public NameObjDelegator {
    public:
        inline NameObjRealDelegator(T pFunc) {
            mFunctionPtr = pFunc;
        }

        void operator()(NameObj *pObj) {
            (pObj->*mFunctionPtr)(pObj, this);
        }

        T mFunctionPtr; // _4
    };
};

typedef void (NameObj::*TNameObjFunc)(const void *, void *);
typedef void (NameObj::*TNameObjConstFunc)(const void *, const void *);

struct CategoryListInitialTable {
    s32 mIndex; // _0
    s32 mCount; // _4
};

class NameObjCategoryList {
public:
    class CategoryInfo {
    public:
        CategoryInfo();
        ~CategoryInfo();

        MR::AssignableArray<NameObj*> mObjs; // _0
        u32 _8;
        MR::FunctorBase* _C;
        s32 mChecks;                        // _10
    };

    NameObjCategoryList(u32, const CategoryListInitialTable *, TNameObjFunc, bool, const char *);
    NameObjCategoryList(u32, const CategoryListInitialTable *, TNameObjConstFunc, bool, const char *);

    ~NameObjCategoryList();

    void execute(s32);
    void incrementCheck(NameObj *, s32);
    void allocateBuffer();
    void add(NameObj *, s32);
    void remove(NameObj *, s32);
    void registerExecuteBeforeFunction(const MR::FunctorBase &, int);
    // one missing boolean function between here
    void initTable(u32, const CategoryListInitialTable *);

    MR::AssignableArray<NameObjCategoryList::CategoryInfo*> mCategoryInfo; // _0
    NameObjDelegator* mDelegator; // _8
    u8 _C;
    u8 _D;
};