/*
 *	autogen/server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.h generated by engine3 IDL compiler 0.60
 */

#ifndef LIGHTSABERCRYSTALCOMPONENT_H_
#define LIGHTSABERCRYSTALCOMPONENT_H_

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

#include "engine/lua/Luna.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/tangible/component/Component.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace component {
namespace lightsaber {

class LightsaberCrystalComponent : public Component {
public:
	static const int POOR = 0;

	static const int FAIR = 1;

	static const int GOOD = 2;

	static const int QUALITY = 3;

	static const int SELECT = 4;

	static const int PREMIUM = 5;

	static const int FLAWLESS = 6;

	LightsaberCrystalComponent();

	void initializeTransientMembers();

	void notifyLoadFromDatabase();

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	bool hasPlayerAsParent(CreatureObject* player);

	void tuneCrystal(CreatureObject* player);

	void updateCrystal(int value);

	int inflictDamage(TangibleObject* attacker, int damageType, float damage, bool destroy, bool notifyClient = true);

	void generateCrystalStats();

	void validateCrystalStats();

	int getRandomizedStat(int min, int max, int itemLevel);

	float getRandomizedStat(float min, float max, int itemLevel);

	int getCrystalQuality();

	int getDamage() const;

	float getForceCost() const;

	int getSacHealth() const;

	float getAttackSpeed() const;

	int getSacAction() const;

	int getSacMind() const;

	int getWoundChance() const;

	unsigned long long getOwnerID() const;

	int getQuality() const;

	void setQuality(int qual);

	int getColor() const;

	void setColor(int value);

	void setOwnerID(unsigned long long value);

	void setItemLevel(int value);

	void setMinimumDamage(int value);

	void setMaximumDamage(int value);

	void setForceCost(float value);

	void setSacHealth(int value);

	void setSacAction(int value);

	void setSacMind(int value);

	void setAttackSpeed(float value);

	void setWoundChance(int value);

	bool isLightsaberCrystalObject();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	LightsaberCrystalComponent(DummyConstructorParameter* param);

	virtual ~LightsaberCrystalComponent();

	friend class LightsaberCrystalComponentHelper;
};

} // namespace lightsaber
} // namespace component
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::component::lightsaber;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace component {
namespace lightsaber {

class LightsaberCrystalComponentImplementation : public ComponentImplementation {
public:
	static const int POOR = 0;

	static const int FAIR = 1;

	static const int GOOD = 2;

	static const int QUALITY = 3;

	static const int SELECT = 4;

	static const int PREMIUM = 5;

	static const int FLAWLESS = 6;

protected:
	int damage;

	int color;

	int quality;

	float attackSpeed;

	int sacHealth;

	int sacAction;

	int sacMind;

	int woundChance;

	int itemLevel;

	float floatForceCost;

	unsigned long long ownerID;

	String ownerName;

	int forceCost;

	int minimumDamage;

	int maximumDamage;

	String postTuneName;

public:
	LightsaberCrystalComponentImplementation();

	LightsaberCrystalComponentImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void notifyLoadFromDatabase();

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	bool hasPlayerAsParent(CreatureObject* player);

	void tuneCrystal(CreatureObject* player);

	void updateCrystal(int value);

	int inflictDamage(TangibleObject* attacker, int damageType, float damage, bool destroy, bool notifyClient = true);

	void generateCrystalStats();

	void validateCrystalStats();

	int getRandomizedStat(int min, int max, int itemLevel);

	float getRandomizedStat(float min, float max, int itemLevel);

	int getCrystalQuality();

	int getDamage() const;

	float getForceCost() const;

	int getSacHealth() const;

	float getAttackSpeed() const;

	int getSacAction() const;

	int getSacMind() const;

	int getWoundChance() const;

	unsigned long long getOwnerID() const;

	int getQuality() const;

	void setQuality(int qual);

	int getColor() const;

	void setColor(int value);

	void setOwnerID(unsigned long long value);

	void setItemLevel(int value);

	void setMinimumDamage(int value);

	void setMaximumDamage(int value);

	void setForceCost(float value);

	void setSacHealth(int value);

	void setSacAction(int value);

	void setSacMind(int value);

	void setAttackSpeed(float value);

	void setWoundChance(int value);

	bool isLightsaberCrystalObject();

	WeakReference<LightsaberCrystalComponent*> _this;

	operator const LightsaberCrystalComponent*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~LightsaberCrystalComponentImplementation();

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

	friend class LightsaberCrystalComponent;
};

class LightsaberCrystalComponentAdapter : public ComponentAdapter {
public:
	LightsaberCrystalComponentAdapter(LightsaberCrystalComponent* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void notifyLoadFromDatabase();

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	bool hasPlayerAsParent(CreatureObject* player);

	void tuneCrystal(CreatureObject* player);

	void updateCrystal(int value);

	int inflictDamage(TangibleObject* attacker, int damageType, float damage, bool destroy, bool notifyClient);

	void generateCrystalStats();

	void validateCrystalStats();

	int getRandomizedStat(int min, int max, int itemLevel);

	float getRandomizedStat(float min, float max, int itemLevel);

	int getCrystalQuality();

	int getDamage() const;

	float getForceCost() const;

	int getSacHealth() const;

	float getAttackSpeed() const;

	int getSacAction() const;

	int getSacMind() const;

	int getWoundChance() const;

	unsigned long long getOwnerID() const;

	int getQuality() const;

	void setQuality(int qual);

	int getColor() const;

	void setColor(int value);

	void setOwnerID(unsigned long long value);

	void setItemLevel(int value);

	void setMinimumDamage(int value);

	void setMaximumDamage(int value);

	void setForceCost(float value);

	void setSacHealth(int value);

	void setSacAction(int value);

	void setSacMind(int value);

	void setAttackSpeed(float value);

	void setWoundChance(int value);

	bool isLightsaberCrystalObject();

};

class LightsaberCrystalComponentHelper : public DistributedObjectClassHelper, public Singleton<LightsaberCrystalComponentHelper> {
	static LightsaberCrystalComponentHelper* staticInitializer;

public:
	LightsaberCrystalComponentHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<LightsaberCrystalComponentHelper>;
};

class LuaLightsaberCrystalComponent : public LuaComponent {
public:
	static const char className[];
	static Luna<LuaLightsaberCrystalComponent>::RegType Register[];

	LuaLightsaberCrystalComponent(lua_State *L);
	virtual ~LuaLightsaberCrystalComponent();

	int _setObject(lua_State *L);
	int _getObject(lua_State *L);
	int initializeTransientMembers(lua_State *L);
	int notifyLoadFromDatabase(lua_State *L);
	int updateCraftingValues(lua_State *L);
	int fillAttributeList(lua_State *L);
	int fillObjectMenuResponse(lua_State *L);
	int handleObjectMenuSelect(lua_State *L);
	int hasPlayerAsParent(lua_State *L);
	int tuneCrystal(lua_State *L);
	int updateCrystal(lua_State *L);
	int inflictDamage(lua_State *L);
	int generateCrystalStats(lua_State *L);
	int validateCrystalStats(lua_State *L);
	int getRandomizedStat(lua_State *L);
	int getCrystalQuality(lua_State *L);
	int getDamage(lua_State *L);
	int getForceCost(lua_State *L);
	int getSacHealth(lua_State *L);
	int getAttackSpeed(lua_State *L);
	int getSacAction(lua_State *L);
	int getSacMind(lua_State *L);
	int getWoundChance(lua_State *L);
	int getOwnerID(lua_State *L);
	int getQuality(lua_State *L);
	int setQuality(lua_State *L);
	int getColor(lua_State *L);
	int setColor(lua_State *L);
	int setOwnerID(lua_State *L);
	int setItemLevel(lua_State *L);
	int setMinimumDamage(lua_State *L);
	int setMaximumDamage(lua_State *L);
	int setForceCost(lua_State *L);
	int setSacHealth(lua_State *L);
	int setSacAction(lua_State *L);
	int setSacMind(lua_State *L);
	int setAttackSpeed(lua_State *L);
	int setWoundChance(lua_State *L);
	int isLightsaberCrystalObject(lua_State *L);

	Reference<LightsaberCrystalComponent*> realObject;
};

} // namespace lightsaber
} // namespace component
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::component::lightsaber;

#endif /*LIGHTSABERCRYSTALCOMPONENT_H_*/
