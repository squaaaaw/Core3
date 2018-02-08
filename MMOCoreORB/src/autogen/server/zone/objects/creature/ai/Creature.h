/*
 *	autogen/server/zone/objects/creature/ai/Creature.h generated by engine3 IDL compiler 0.60
 */

#ifndef CREATURE_H_
#define CREATURE_H_

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

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace ai {

class CreatureTemplate;

} // namespace ai
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::ai;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/creature/ai/AiAgent.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace ai {

class Creature : public AiAgent {
public:
	Creature();

	/**
	 * Initializes the transient members of SceneObject, must call the inherited object method first.
	 * @pre {transient members are not initialized }
	 * @post { transient members are initialized }
	 */
	void initializeTransientMembers();

	bool isCreature();

	short getDnaState() const;

	short getDnaSampleCount() const;

	void incDnaSampleCount();

	bool isCamouflaged(CreatureObject* target);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	/**
	 * Handles the radial selection sent by the client, must be overriden by inherited objects
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player CreatureObject that selected the option
	 * @param selectedID selected menu id
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void loadTemplateDataForBaby(CreatureTemplate* templateData);

	void scheduleDespawn();

	bool hasOrganics();

	bool hasMilk();

	bool hasDNA();

	bool canHarvestMe(CreatureObject* player);

	bool canDroidHarvestMe(CreatureObject* player, CreatureObject* droid);

	bool hasSkillToHarvestMe(CreatureObject* player);

	bool canTameMe(CreatureObject* player);

	float getChanceToTame(CreatureObject* player);

	bool canMilkMe(CreatureObject* player);

	bool canCollectDna(CreatureObject* player);

	bool hasSkillToSampleMe(CreatureObject* player);

	void addAlreadyHarvested(CreatureObject* player);

	void setMilkState(short milkState);

	void setDnaState(short dnaState);

	void notifyDespawn(Zone* zone);

	void setPetLevel(int newLevel);

	bool isVicious();

	bool isBaby();

	void setBaby(bool bab);

	float getTame();

	String getMeatType();

	String getBoneType();

	String getHideType();

	String getMilkType();

	float getMilk();

	float getHideMax();

	float getBoneMax();

	float getMeatMax();

	int getBaseXp();

	String getControlDeviceTemplate();

	bool isMount();

	int getAdultLevel();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	Creature(DummyConstructorParameter* param);

	virtual ~Creature();

	friend class CreatureHelper;
};

} // namespace ai
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::ai;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace ai {

class CreatureImplementation : public AiAgentImplementation {
	SortedVector<unsigned long long> alreadyHarvested;

	short milkState;

	short dnaState;

	short dnaSampleCount;

protected:
	bool baby;

public:
	CreatureImplementation();

	CreatureImplementation(DummyConstructorParameter* param);

	/**
	 * Initializes the transient members of SceneObject, must call the inherited object method first.
	 * @pre {transient members are not initialized }
	 * @post { transient members are initialized }
	 */
	void initializeTransientMembers();

	bool isCreature();

	short getDnaState() const;

	short getDnaSampleCount() const;

	void incDnaSampleCount();

	bool isCamouflaged(CreatureObject* target);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	/**
	 * Handles the radial selection sent by the client, must be overriden by inherited objects
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player CreatureObject that selected the option
	 * @param selectedID selected menu id
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void loadTemplateDataForBaby(CreatureTemplate* templateData);

	void scheduleDespawn();

	bool hasOrganics();

	bool hasMilk();

	bool hasDNA();

	bool canHarvestMe(CreatureObject* player);

	bool canDroidHarvestMe(CreatureObject* player, CreatureObject* droid);

	bool hasSkillToHarvestMe(CreatureObject* player);

	bool canTameMe(CreatureObject* player);

	float getChanceToTame(CreatureObject* player);

	bool canMilkMe(CreatureObject* player);

	bool canCollectDna(CreatureObject* player);

	bool hasSkillToSampleMe(CreatureObject* player);

	void addAlreadyHarvested(CreatureObject* player);

	void setMilkState(short milkState);

	void setDnaState(short dnaState);

	void notifyDespawn(Zone* zone);

	void setPetLevel(int newLevel);

	bool isVicious();

	bool isBaby();

	void setBaby(bool bab);

	float getTame();

	String getMeatType();

	String getBoneType();

	String getHideType();

	String getMilkType();

	float getMilk();

	float getHideMax();

	float getBoneMax();

	float getMeatMax();

	int getBaseXp();

	String getControlDeviceTemplate();

	bool isMount();

	int getAdultLevel();

	WeakReference<Creature*> _this;

	operator const Creature*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~CreatureImplementation();

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

	friend class Creature;
};

class CreatureAdapter : public AiAgentAdapter {
public:
	CreatureAdapter(Creature* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	bool isCreature();

	short getDnaState() const;

	short getDnaSampleCount() const;

	void incDnaSampleCount();

	bool isCamouflaged(CreatureObject* target);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void scheduleDespawn();

	bool hasOrganics();

	bool hasMilk();

	bool hasDNA();

	bool canHarvestMe(CreatureObject* player);

	bool canDroidHarvestMe(CreatureObject* player, CreatureObject* droid);

	bool hasSkillToHarvestMe(CreatureObject* player);

	bool canTameMe(CreatureObject* player);

	float getChanceToTame(CreatureObject* player);

	bool canMilkMe(CreatureObject* player);

	bool canCollectDna(CreatureObject* player);

	bool hasSkillToSampleMe(CreatureObject* player);

	void addAlreadyHarvested(CreatureObject* player);

	void setMilkState(short milkState);

	void setDnaState(short dnaState);

	void notifyDespawn(Zone* zone);

	void setPetLevel(int newLevel);

	bool isVicious();

	bool isBaby();

	void setBaby(bool bab);

	float getTame();

	String getMeatType();

	String getBoneType();

	String getHideType();

	String getMilkType();

	float getMilk();

	float getHideMax();

	float getBoneMax();

	float getMeatMax();

	int getBaseXp();

	String getControlDeviceTemplate();

	bool isMount();

	int getAdultLevel();

};

class CreatureHelper : public DistributedObjectClassHelper, public Singleton<CreatureHelper> {
	static CreatureHelper* staticInitializer;

public:
	CreatureHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CreatureHelper>;
};

} // namespace ai
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::ai;

#endif /*CREATURE_H_*/
