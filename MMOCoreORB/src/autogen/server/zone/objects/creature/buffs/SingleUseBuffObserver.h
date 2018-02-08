/*
 *	autogen/server/zone/objects/creature/buffs/SingleUseBuffObserver.h generated by engine3 IDL compiler 0.60
 */

#ifndef SINGLEUSEBUFFOBSERVER_H_
#define SINGLEUSEBUFFOBSERVER_H_

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
namespace buffs {

class SingleUseBuff;

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

#include "engine/core/ManagedObject.h"

#include "engine/util/Observer.h"

#include "engine/util/Observable.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class SingleUseBuffObserver : public Observer {
public:
	SingleUseBuffObserver(SingleUseBuff* b);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SingleUseBuffObserver(DummyConstructorParameter* param);

	virtual ~SingleUseBuffObserver();

	friend class SingleUseBuffObserverHelper;
};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class SingleUseBuffObserverImplementation : public ObserverImplementation {
protected:
	ManagedWeakReference<SingleUseBuff* > buff;

public:
	SingleUseBuffObserverImplementation(SingleUseBuff* b);

	SingleUseBuffObserverImplementation(DummyConstructorParameter* param);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	WeakReference<SingleUseBuffObserver*> _this;

	operator const SingleUseBuffObserver*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~SingleUseBuffObserverImplementation();

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

	friend class SingleUseBuffObserver;
};

class SingleUseBuffObserverAdapter : public ObserverAdapter {
public:
	SingleUseBuffObserverAdapter(SingleUseBuffObserver* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

};

class SingleUseBuffObserverHelper : public DistributedObjectClassHelper, public Singleton<SingleUseBuffObserverHelper> {
	static SingleUseBuffObserverHelper* staticInitializer;

public:
	SingleUseBuffObserverHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SingleUseBuffObserverHelper>;
};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

#endif /*SINGLEUSEBUFFOBSERVER_H_*/
