/*
 *	autogen/server/zone/objects/tangible/component/genetic/GeneticComponent.h generated by engine3 IDL compiler 0.60
 */

#ifndef GENETICCOMPONENT_H_
#define GENETICCOMPONENT_H_

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
#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "server/zone/objects/tangible/component/Component.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace component {
namespace genetic {

class GeneticComponent : public Component {
public:
	GeneticComponent();

	void setSpecialResist(int type);

	bool isSpecialResist(int type);

	void setStats(int cle, int end, int fie, int pow, int ite, int cou, int dep, int dex, int frt, int har);

	int getCleverness();

	int getEndurance();

	int getFierceness();

	int getPower();

	int getIntelligence();

	int getCourage();

	int getDependency();

	int getDexterity();

	int getFortitude();

	int getHardiness();

	void setLevel(int value);

	float getKinetic();

	float getEnergy();

	float getBlast();

	float getCold();

	float getHeat();

	float getElectrical();

	float getAcid();

	float getStun();

	float getSaber();

	String getSpecial1();

	String getSpecial2();

	int getArmor();

	float getHit();

	float getSpeed();

	int getMinDamage();

	int getMaxDamage();

	int getHealth();

	int getMind();

	int getAction();

	int getLevel();

	bool getRanged();

	int getFocus();

	int getWillPower();

	int getStrength();

	int getConstitution();

	int getQuickness();

	int getStamina();

	void setWillPower(int value);

	void setFocus(int value);

	void setStamina(int value);

	void setStrength(int value);

	void setQuickness(int value);

	void setConstitution(int value);

	void setCleverness(int value);

	void setEndurance(int value);

	void setFierceness(int value);

	void setPower(int value);

	void setIntellect(int value);

	void setCourage(int value);

	void setDependency(int value);

	void setDexterity(int value);

	void setFortitude(int value);

	void setHardiness(int value);

	void setEnergy(float value);

	void setBlast(float value);

	void setCold(float value);

	void setHeat(float value);

	void setElectric(float value);

	void setAcid(float value);

	void setStun(float value);

	void setSaber(float value);

	void setArmorRating(int rating);

	void setKinetic(float value);

	void setSpecialAttackOne(const String& atk);

	void setSpecialAttackTwo(const String& atk);

	void setRanged(bool b);

	void setQuality(int qual);

	int getQuality();

	/**
	 * Initializes the transient members of SceneObject, must call the inherited object method first.
	 * @pre {transient members are not initialized }
	 * @post { transient members are initialized }
	 */
	void initializeTransientMembers();

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	String convertSpecialAttack(String& attackName);

	String resistValue(float input);

	void resetResists(CraftingValues* values);

	int getEffectiveArmor();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	GeneticComponent(DummyConstructorParameter* param);

	virtual ~GeneticComponent();

	friend class GeneticComponentHelper;
};

} // namespace genetic
} // namespace component
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::component::genetic;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace component {
namespace genetic {

class GeneticComponentImplementation : public ComponentImplementation {
protected:
	int cleverness;

	int endurance;

	int fierceness;

	int power;

	int intelligence;

	int courage;

	int dependency;

	int dexterity;

	int fortitude;

	int hardiness;

	String special1;

	String special2;

	bool ranged;

	int quality;

	int armorRating;

	float kinResist;

	float energyResist;

	float blastResist;

	float coldResist;

	float heatResist;

	float elecResist;

	float acidResist;

	float stunResist;

	float saberResist;

	int level;

	int health;

	int action;

	int mind;

	int willPower;

	int constitution;

	int stamina;

	int strength;

	int focus;

	int quickness;

	float hit;

	float speed;

	int minDam;

	int maxDam;

	int specialResists;

public:
	GeneticComponentImplementation();

	GeneticComponentImplementation(DummyConstructorParameter* param);

	void setSpecialResist(int type);

	bool isSpecialResist(int type);

	void setStats(int cle, int end, int fie, int pow, int ite, int cou, int dep, int dex, int frt, int har);

	int getCleverness();

	int getEndurance();

	int getFierceness();

	int getPower();

	int getIntelligence();

	int getCourage();

	int getDependency();

	int getDexterity();

	int getFortitude();

	int getHardiness();

	void setLevel(int value);

	float getKinetic();

	float getEnergy();

	float getBlast();

	float getCold();

	float getHeat();

	float getElectrical();

	float getAcid();

	float getStun();

	float getSaber();

	String getSpecial1();

	String getSpecial2();

	int getArmor();

	float getHit();

	float getSpeed();

	int getMinDamage();

	int getMaxDamage();

	int getHealth();

	int getMind();

	int getAction();

	int getLevel();

	bool getRanged();

	int getFocus();

	int getWillPower();

	int getStrength();

	int getConstitution();

	int getQuickness();

	int getStamina();

	void setWillPower(int value);

	void setFocus(int value);

	void setStamina(int value);

	void setStrength(int value);

	void setQuickness(int value);

	void setConstitution(int value);

	void setCleverness(int value);

	void setEndurance(int value);

	void setFierceness(int value);

	void setPower(int value);

	void setIntellect(int value);

	void setCourage(int value);

	void setDependency(int value);

	void setDexterity(int value);

	void setFortitude(int value);

	void setHardiness(int value);

	void setEnergy(float value);

	void setBlast(float value);

	void setCold(float value);

	void setHeat(float value);

	void setElectric(float value);

	void setAcid(float value);

	void setStun(float value);

	void setSaber(float value);

	void setArmorRating(int rating);

	void setKinetic(float value);

	void setSpecialAttackOne(const String& atk);

	void setSpecialAttackTwo(const String& atk);

	void setRanged(bool b);

	void setQuality(int qual);

	int getQuality();

	/**
	 * Initializes the transient members of SceneObject, must call the inherited object method first.
	 * @pre {transient members are not initialized }
	 * @post { transient members are initialized }
	 */
	void initializeTransientMembers();

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	String convertSpecialAttack(String& attackName);

	String resistValue(float input);

	void resetResists(CraftingValues* values);

	int getEffectiveArmor();

	WeakReference<GeneticComponent*> _this;

	operator const GeneticComponent*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~GeneticComponentImplementation();

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

	friend class GeneticComponent;
};

class GeneticComponentAdapter : public ComponentAdapter {
public:
	GeneticComponentAdapter(GeneticComponent* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void setSpecialResist(int type);

	bool isSpecialResist(int type);

	void setStats(int cle, int end, int fie, int pow, int ite, int cou, int dep, int dex, int frt, int har);

	int getCleverness();

	int getEndurance();

	int getFierceness();

	int getPower();

	int getIntelligence();

	int getCourage();

	int getDependency();

	int getDexterity();

	int getFortitude();

	int getHardiness();

	void setLevel(int value);

	float getKinetic();

	float getEnergy();

	float getBlast();

	float getCold();

	float getHeat();

	float getElectrical();

	float getAcid();

	float getStun();

	float getSaber();

	String getSpecial1();

	String getSpecial2();

	int getArmor();

	float getHit();

	float getSpeed();

	int getMinDamage();

	int getMaxDamage();

	int getHealth();

	int getMind();

	int getAction();

	int getLevel();

	bool getRanged();

	int getFocus();

	int getWillPower();

	int getStrength();

	int getConstitution();

	int getQuickness();

	int getStamina();

	void setWillPower(int value);

	void setFocus(int value);

	void setStamina(int value);

	void setStrength(int value);

	void setQuickness(int value);

	void setConstitution(int value);

	void setCleverness(int value);

	void setEndurance(int value);

	void setFierceness(int value);

	void setPower(int value);

	void setIntellect(int value);

	void setCourage(int value);

	void setDependency(int value);

	void setDexterity(int value);

	void setFortitude(int value);

	void setHardiness(int value);

	void setEnergy(float value);

	void setBlast(float value);

	void setCold(float value);

	void setHeat(float value);

	void setElectric(float value);

	void setAcid(float value);

	void setStun(float value);

	void setSaber(float value);

	void setArmorRating(int rating);

	void setKinetic(float value);

	void setSpecialAttackOne(const String& atk);

	void setSpecialAttackTwo(const String& atk);

	void setRanged(bool b);

	void setQuality(int qual);

	int getQuality();

	void initializeTransientMembers();

	String convertSpecialAttack(String& attackName);

	String resistValue(float input);

};

class GeneticComponentHelper : public DistributedObjectClassHelper, public Singleton<GeneticComponentHelper> {
	static GeneticComponentHelper* staticInitializer;

public:
	GeneticComponentHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<GeneticComponentHelper>;
};

} // namespace genetic
} // namespace component
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::component::genetic;

#endif /*GENETICCOMPONENT_H_*/
