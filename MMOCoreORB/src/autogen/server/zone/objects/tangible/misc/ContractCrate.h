/*
 *	autogen/server/zone/objects/tangible/misc/ContractCrate.h generated by engine3 IDL compiler 0.60
 */

#ifndef CONTRACTCRATE_H_
#define CONTRACTCRATE_H_

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
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

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

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "engine/lua/Luna.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace misc {

class ContractCrate : public TangibleObject {
public:
	ContractCrate();

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* player);

	int canAddObject(SceneObject* object, int containmentType, String& errorDescription);

	int notifyObjectInserted(SceneObject* object);

	int notifyObjectRemoved(SceneObject* object);

	byte checkContainerPermission(CreatureObject* player, unsigned short permission);

	void parseDraftSchematic(const String& schematic);

	void setRequiredItem(const String& item);

	void setAmountNeeded(int amt);

	int getCrateDifficulty() const;

	int getAmountNeeded() const;

	void setCrateDifficulty(int diff);

	void setXpType(const String& type);

	String getXpType() const;

	int getXpAmount() const;

	bool isCompleted();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ContractCrate(DummyConstructorParameter* param);

	virtual ~ContractCrate();

	friend class ContractCrateHelper;
};

} // namespace misc
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::misc;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace misc {

class ContractCrateImplementation : public TangibleObjectImplementation {
protected:
	String requiredItem;

	String xpType;

	String itemName;

	int amountNeeded;

	int currentAmount;

	int xpAmount;

	int crateDifficulty;

public:
	ContractCrateImplementation();

	ContractCrateImplementation(DummyConstructorParameter* param);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* player);

	int canAddObject(SceneObject* object, int containmentType, String& errorDescription);

	int notifyObjectInserted(SceneObject* object);

	int notifyObjectRemoved(SceneObject* object);

	byte checkContainerPermission(CreatureObject* player, unsigned short permission);

	void parseDraftSchematic(const String& schematic);

	void setRequiredItem(const String& item);

	void setAmountNeeded(int amt);

	int getCrateDifficulty() const;

	int getAmountNeeded() const;

	void setCrateDifficulty(int diff);

	void setXpType(const String& type);

	String getXpType() const;

	int getXpAmount() const;

	bool isCompleted();

	WeakReference<ContractCrate*> _this;

	operator const ContractCrate*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ContractCrateImplementation();

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

	friend class ContractCrate;
};

class ContractCrateAdapter : public TangibleObjectAdapter {
public:
	ContractCrateAdapter(ContractCrate* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int canAddObject(SceneObject* object, int containmentType, String& errorDescription);

	int notifyObjectInserted(SceneObject* object);

	int notifyObjectRemoved(SceneObject* object);

	byte checkContainerPermission(CreatureObject* player, unsigned short permission);

	void parseDraftSchematic(const String& schematic);

	void setRequiredItem(const String& item);

	void setAmountNeeded(int amt);

	int getCrateDifficulty() const;

	int getAmountNeeded() const;

	void setCrateDifficulty(int diff);

	void setXpType(const String& type);

	String getXpType() const;

	int getXpAmount() const;

	bool isCompleted();

};

class ContractCrateHelper : public DistributedObjectClassHelper, public Singleton<ContractCrateHelper> {
	static ContractCrateHelper* staticInitializer;

public:
	ContractCrateHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ContractCrateHelper>;
};

class LuaContractCrate {
public:
	static const char className[];
	static Luna<LuaContractCrate>::RegType Register[];

	LuaContractCrate(lua_State *L);
	virtual ~LuaContractCrate();

	int _setObject(lua_State *L);
	int _getObject(lua_State *L);
	int fillAttributeList(lua_State *L);
	int canAddObject(lua_State *L);
	int notifyObjectInserted(lua_State *L);
	int notifyObjectRemoved(lua_State *L);
	int checkContainerPermission(lua_State *L);
	int parseDraftSchematic(lua_State *L);
	int setRequiredItem(lua_State *L);
	int setAmountNeeded(lua_State *L);
	int getCrateDifficulty(lua_State *L);
	int getAmountNeeded(lua_State *L);
	int setCrateDifficulty(lua_State *L);
	int setXpType(lua_State *L);
	int getXpType(lua_State *L);
	int getXpAmount(lua_State *L);
	int isCompleted(lua_State *L);

	Reference<ContractCrate*> realObject;
};

} // namespace misc
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::misc;

#endif /*CONTRACTCRATE_H_*/
