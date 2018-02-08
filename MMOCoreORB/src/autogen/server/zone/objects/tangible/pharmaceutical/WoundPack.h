/*
 *	autogen/server/zone/objects/tangible/pharmaceutical/WoundPack.h generated by engine3 IDL compiler 0.60
 */

#ifndef WOUNDPACK_H_
#define WOUNDPACK_H_

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

#include "system/lang/Math.h"

#include "templates/params/creature/CreatureAttribute.h"

#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "templates/tangible/WoundPackTemplate.h"

#include "server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace pharmaceutical {

class WoundPack : public PharmaceuticalObject {
public:
	WoundPack();

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	/**
	 * Reads and sets the template data from a SharedTangibleObjectTemplate LuaObject
	 * @pre { templateData is a valid pointer }
	 * @post { TangibleObject members are initialized }
	 * @param templateData templateData points to the SharedTangibleObjectTemplate LuaObject that is used to initialize the TangibleObject members
	 */
	void loadTemplateData(SharedObjectTemplate* templateData);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	/**
	 * Handles the radial selection sent by the client, must be overriden by inherited objects
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player CreatureObject that selected the option
	 * @param selectedID selected menu id
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	unsigned int calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue = true);

	float getEffectiveness();

	bool isWoundPack();

	byte getAttribute();

	bool isDroidReconstructionKit();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	WoundPack(DummyConstructorParameter* param);

	virtual ~WoundPack();

	friend class WoundPackHelper;
};

} // namespace pharmaceutical
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::pharmaceutical;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace pharmaceutical {

class WoundPackImplementation : public PharmaceuticalObjectImplementation {
protected:
	float effectiveness;

	byte attribute;

public:
	WoundPackImplementation();

	WoundPackImplementation(DummyConstructorParameter* param);

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	/**
	 * Reads and sets the template data from a SharedTangibleObjectTemplate LuaObject
	 * @pre { templateData is a valid pointer }
	 * @post { TangibleObject members are initialized }
	 * @param templateData templateData points to the SharedTangibleObjectTemplate LuaObject that is used to initialize the TangibleObject members
	 */
	void loadTemplateData(SharedObjectTemplate* templateData);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	/**
	 * Handles the radial selection sent by the client, must be overriden by inherited objects
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player CreatureObject that selected the option
	 * @param selectedID selected menu id
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	unsigned int calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue = true);

	float getEffectiveness();

	bool isWoundPack();

	byte getAttribute();

	bool isDroidReconstructionKit();

	WeakReference<WoundPack*> _this;

	operator const WoundPack*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~WoundPackImplementation();

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

	friend class WoundPack;
};

class WoundPackAdapter : public PharmaceuticalObjectAdapter {
public:
	WoundPackAdapter(WoundPack* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	unsigned int calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue);

	float getEffectiveness();

	bool isWoundPack();

	byte getAttribute();

	bool isDroidReconstructionKit();

};

class WoundPackHelper : public DistributedObjectClassHelper, public Singleton<WoundPackHelper> {
	static WoundPackHelper* staticInitializer;

public:
	WoundPackHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<WoundPackHelper>;
};

} // namespace pharmaceutical
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::pharmaceutical;

#endif /*WOUNDPACK_H_*/
