/*
 *	autogen/server/zone/objects/creature/buffs/PerformanceBuff.h generated by engine3 IDL compiler 0.60
 */

#ifndef PERFORMANCEBUFF_H_
#define PERFORMANCEBUFF_H_

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

#include "server/zone/objects/creature/buffs/BuffType.h"

#include "server/zone/objects/creature/buffs/Buff.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class PerformanceBuff : public Buff {
public:
	PerformanceBuff(CreatureObject* creo, unsigned int buffCRC, float value, int duration, int typeOfBuff);

	void activate(bool applyModifiers);

	float getBuffStrength() const;

	void deactivate(bool removeModifiers);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	PerformanceBuff(DummyConstructorParameter* param);

	virtual ~PerformanceBuff();

	friend class PerformanceBuffHelper;
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

class PerformanceBuffImplementation : public BuffImplementation {
protected:
	float strength;

	int type;

public:
	PerformanceBuffImplementation(CreatureObject* creo, unsigned int buffCRC, float value, int duration, int typeOfBuff);

	PerformanceBuffImplementation(DummyConstructorParameter* param);

	void activate(bool applyModifiers);

	float getBuffStrength() const;

	void deactivate(bool removeModifiers);

	WeakReference<PerformanceBuff*> _this;

	operator const PerformanceBuff*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~PerformanceBuffImplementation();

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

	friend class PerformanceBuff;
};

class PerformanceBuffAdapter : public BuffAdapter {
public:
	PerformanceBuffAdapter(PerformanceBuff* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void activate(bool applyModifiers);

	float getBuffStrength() const;

	void deactivate(bool removeModifiers);

};

class PerformanceBuffHelper : public DistributedObjectClassHelper, public Singleton<PerformanceBuffHelper> {
	static PerformanceBuffHelper* staticInitializer;

public:
	PerformanceBuffHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PerformanceBuffHelper>;
};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

#endif /*PERFORMANCEBUFF_H_*/
