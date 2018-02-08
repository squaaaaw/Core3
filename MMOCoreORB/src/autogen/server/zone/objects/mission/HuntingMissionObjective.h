/*
 *	autogen/server/zone/objects/mission/HuntingMissionObjective.h generated by engine3 IDL compiler 0.60
 */

#ifndef HUNTINGMISSIONOBJECTIVE_H_
#define HUNTINGMISSIONOBJECTIVE_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

#ifndef likely
#ifdef __GNUC__
#define likely(x)       __builtin_expect(!!(x), 1)
#define unlikely(x)     __builtin_expect(!!(x), 0)
#else
#define likely(x)       (x)
#define unlikely(x)     (x)
#endif
#endif
namespace server {
namespace zone {
namespace objects {
namespace mission {

class MissionObject;

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace objects {
namespace mission {

class MissionObserver;

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

#include "engine/util/Observable.h"

#include "server/zone/objects/mission/MissionObjective.h"

namespace server {
namespace zone {
namespace objects {
namespace mission {

class HuntingMissionObjective : public MissionObjective {
public:
	HuntingMissionObjective(MissionObject* mission);

	void initializeTransientMembers();

	void activate();

	void abort();

	void complete();

	int notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	Vector3 getEndPosition();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	HuntingMissionObjective(DummyConstructorParameter* param);

	virtual ~HuntingMissionObjective();

	friend class HuntingMissionObjectiveHelper;
};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace objects {
namespace mission {

class HuntingMissionObjectiveImplementation : public MissionObjectiveImplementation {
	int targetsKilled;

public:
	HuntingMissionObjectiveImplementation(MissionObject* mission);

	HuntingMissionObjectiveImplementation(DummyConstructorParameter* param);

	void finalize();

	void initializeTransientMembers();

	void activate();

	void abort();

	void complete();

	int notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	Vector3 getEndPosition();

	WeakReference<HuntingMissionObjective*> _this;

	operator const HuntingMissionObjective*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~HuntingMissionObjectiveImplementation();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class HuntingMissionObjective;
};

class HuntingMissionObjectiveAdapter : public MissionObjectiveAdapter {
public:
	HuntingMissionObjectiveAdapter(HuntingMissionObjective* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void finalize();

	void initializeTransientMembers();

	void activate();

	void abort();

	void complete();

	int notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

};

class HuntingMissionObjectiveHelper : public DistributedObjectClassHelper, public Singleton<HuntingMissionObjectiveHelper> {
	static HuntingMissionObjectiveHelper* staticInitializer;

public:
	HuntingMissionObjectiveHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<HuntingMissionObjectiveHelper>;
};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

#endif /*HUNTINGMISSIONOBJECTIVE_H_*/
