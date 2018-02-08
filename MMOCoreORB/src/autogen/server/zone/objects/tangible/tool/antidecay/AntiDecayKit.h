/*
 *	autogen/server/zone/objects/tangible/tool/antidecay/AntiDecayKit.h generated by engine3 IDL compiler 0.60
 */

#ifndef ANTIDECAYKIT_H_
#define ANTIDECAYKIT_H_

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
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

#include "engine/log/Logger.h"

#include "server/zone/objects/tangible/Container.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tool {
namespace antidecay {

class AntiDecayKit : public Container {
public:
	AntiDecayKit();

	void initializeTransientMembers();

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	int canAddObject(SceneObject* object, int containmentType, String& errorDescription);

	void doApplyAntiDecay(CreatureObject* player);

	void doRetrieveItem(CreatureObject* player);

	bool isUsed() const;

	void setUsed(bool use);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	AntiDecayKit(DummyConstructorParameter* param);

	virtual ~AntiDecayKit();

	friend class AntiDecayKitHelper;
};

} // namespace antidecay
} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool::antidecay;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tool {
namespace antidecay {

class AntiDecayKitImplementation : public ContainerImplementation {
	bool used;

public:
	AntiDecayKitImplementation();

	AntiDecayKitImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	int canAddObject(SceneObject* object, int containmentType, String& errorDescription);

	void doApplyAntiDecay(CreatureObject* player);

	void doRetrieveItem(CreatureObject* player);

	bool isUsed() const;

	void setUsed(bool use);

	WeakReference<AntiDecayKit*> _this;

	operator const AntiDecayKit*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~AntiDecayKitImplementation();

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

	friend class AntiDecayKit;
};

class AntiDecayKitAdapter : public ContainerAdapter {
public:
	AntiDecayKitAdapter(AntiDecayKit* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	int canAddObject(SceneObject* object, int containmentType, String& errorDescription);

	void doApplyAntiDecay(CreatureObject* player);

	void doRetrieveItem(CreatureObject* player);

	bool isUsed() const;

	void setUsed(bool use);

};

class AntiDecayKitHelper : public DistributedObjectClassHelper, public Singleton<AntiDecayKitHelper> {
	static AntiDecayKitHelper* staticInitializer;

public:
	AntiDecayKitHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<AntiDecayKitHelper>;
};

} // namespace antidecay
} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool::antidecay;

#endif /*ANTIDECAYKIT_H_*/
