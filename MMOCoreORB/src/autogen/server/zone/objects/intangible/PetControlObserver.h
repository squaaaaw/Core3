/*
 *	autogen/server/zone/objects/intangible/PetControlObserver.h generated by engine3 IDL compiler 0.60
 */

#ifndef PETCONTROLOBSERVER_H_
#define PETCONTROLOBSERVER_H_

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
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace intangible {

class PetControlDevice;

} // namespace intangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::intangible;

#include "engine/core/ManagedObject.h"

#include "templates/params/ObserverEventType.h"

#include "engine/util/Observer.h"

#include "engine/util/Observable.h"

namespace server {
namespace zone {
namespace objects {
namespace intangible {

class PetControlObserver : public Observer {
public:
	PetControlObserver(PetControlDevice* device);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	PetControlObserver(DummyConstructorParameter* param);

	virtual ~PetControlObserver();

	friend class PetControlObserverHelper;
};

} // namespace intangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::intangible;

namespace server {
namespace zone {
namespace objects {
namespace intangible {

class PetControlObserverImplementation : public ObserverImplementation {
	ManagedWeakReference<PetControlDevice* > petControlDevice;

public:
	PetControlObserverImplementation(PetControlDevice* device);

	PetControlObserverImplementation(DummyConstructorParameter* param);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	WeakReference<PetControlObserver*> _this;

	operator const PetControlObserver*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~PetControlObserverImplementation();

	void finalize();

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

	friend class PetControlObserver;
};

class PetControlObserverAdapter : public ObserverAdapter {
public:
	PetControlObserverAdapter(PetControlObserver* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

};

class PetControlObserverHelper : public DistributedObjectClassHelper, public Singleton<PetControlObserverHelper> {
	static PetControlObserverHelper* staticInitializer;

public:
	PetControlObserverHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PetControlObserverHelper>;
};

} // namespace intangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::intangible;

#endif /*PETCONTROLOBSERVER_H_*/
