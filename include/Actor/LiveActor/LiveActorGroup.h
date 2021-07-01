#pragma once

#include "Actor/NameObj/NameObjGroup.h"
#include "Actor/LiveActor/LiveActor.h"
#include "Util/JMapIdInfo.h"

class LiveActorGroup : public NameObjGroup
{
public:
	LiveActorGroup(const char *, int);

	virtual ~LiveActorGroup();

	void registerActor(LiveActor *);

	LiveActor* getActor(int) const;
	LiveActor* getDeadActor() const;
	s32 getLivingActorNum() const;

	void killAll();
	void appearAll();
	void makeAllDead();
};

class MsgSharedGroup : public LiveActorGroup
{
public:
	MsgSharedGroup(const char *, s32, const JMapInfoIter &);
	
	virtual ~MsgSharedGroup();
	virtual void init(const JMapInfoIter &);
	virtual void movement();

	void sendMsgToGroupMember(u32, HitSensor *, const char *);

	JMapIdInfo* mGroupId; // _20;
	u32 mMessage; // _24
	HitSensor* mSender; // _28
	const char* mReceiverName; // _2C
};

class LiveActorGroupArray : public NameObj
{
public:
	LiveActorGroupArray(const char *);

	virtual ~LiveActorGroupArray();
	virtual void init(const JMapInfoIter &);

	LiveActorGroup* tryCreateGroupForLiveActor(LiveActor *, const JMapInfoIter &);
	LiveActorGroup* getLiveActorGroup(const LiveActor *) const;
	MsgSharedGroup* createGroup(const JMapInfoIter &, const char *, s32);
	LiveActorGroup* findGroup(const JMapInfoIter &) const;
	LiveActorGroup* findGroup(const LiveActor *) const;

	LiveActorGroup* mGroups[32]; // _14
	s32 mNumGroups; // _94
};
