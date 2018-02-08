/*
 *	autogen/server/zone/objects/installation/InstallationObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef INSTALLATIONOBJECT_H_
#define INSTALLATIONOBJECT_H_

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
namespace installation {

class SyncrhonizedUiListenInstallationTask;

} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation;

namespace server {
namespace zone {
namespace objects {
namespace resource {

class ResourceSpawn;

} // namespace resource
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::resource;

namespace server {
namespace zone {
namespace objects {
namespace resource {

class ResourceContainer;

} // namespace resource
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::resource;

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
namespace objects {
namespace tangible {
namespace wearables {

class ArmorObject;

} // namespace wearables
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::wearables;

#include "templates/SharedObjectTemplate.h"

#include "server/zone/objects/installation/HopperList.h"

#include "engine/util/u3d/CloseObjectsVector.h"

#include "system/util/SortedVector.h"

#include "engine/service/proto/BasePacket.h"

#include "server/zone/objects/structure/StructureObject.h"

#include "system/lang/Time.h"

namespace server {
namespace zone {
namespace objects {
namespace installation {

class InstallationObject : public StructureObject {
public:
	InstallationObject();

	void initializeTransientMembers();

	/**
	 * Destroys this object from database
	 * @pre { this is locked }
	 * @post { this is locked }
	 * @param destroyContainedObjects if true, will destroy from database all its contained objects
	 */
	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	void fillAttributeList(AttributeListMessage* alm, CreatureObject* object);

	/**
	 * Reads and sets the template data from a SharedObjectTemplate LuaObject
	 * @pre { templateData is a valid pointer }
	 * @post { SceneObject members are initialized }
	 * @param templateData templateData points to the LuaObject that is used to initialize SceneObejct members
	 */
	void loadTemplateData(SharedObjectTemplate* templateData);

	void updateResourceContainerQuantity(ResourceContainer* container, int newQuantity, bool notifyClient = true);

	void setOperating(bool operating, bool notifyClient = true);

	void activateUiSync();

	void updateOperators();

	void verifyOperators();

	void updateInstallationWork();

	void handleStructureAddEnergy(CreatureObject* player);

	void setActiveResource(ResourceContainer* container);

	void changeActiveResourceID(unsigned long long spawnObjectID);

	void addResourceToHopper(ResourceContainer* container);

	void clearResourceHopper();

	float getHopperSize();

	/**
	 * @param workingTime Time till when the installation can work
	 * @returns true if to continue working, false to shutdown after next hopper update
	 */
	bool updateMaintenance(Time& workingTime);

	/**
	 * @param workingTime time till when harvester can work
	 */
	void updateHopper(Time& workingTime, bool shutdownAfterUpdate);

	int getHopperItemQuantity(ResourceSpawn* spawn);

	ResourceContainer* getContainerFromHopper(ResourceSpawn* spawn);

	unsigned long long getActiveResourceSpawnID();

	float getActualRate();

	void broadcastToOperators(BasePacket* packet);

	void addOperator(CreatureObject* player);

	void removeOperator(CreatureObject* player);

	void sendBaselinesTo(SceneObject* player);

	bool isInstallationObject();

	bool isOperating() const;

	int getInstallationType() const;

	float getExtractionRate() const;

	float getHopperSizeMax() const;

	void updateStructureStatus();

	HopperList* getHopperList();

	bool isHarvesterObject();

	bool isGeneratorObject();

	bool isShuttleInstallation();

	void setHopperSizeMax(float size);

	void setExtractionRate(float rate);

	bool isAggressiveTo(CreatureObject* object);

	/**
	* Evaluates if this can be attacked by object
	* @pre { }
	* @post { }
	* @return returns true if object can attack this
	*/
	bool isAttackableBy(CreatureObject* object);

	void createChildObjects();

	float getHitChance();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	InstallationObject(DummyConstructorParameter* param);

	virtual ~InstallationObject();

	friend class InstallationObjectHelper;
};

} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation;

namespace server {
namespace zone {
namespace objects {
namespace installation {

class InstallationObjectImplementation : public StructureObjectImplementation {
protected:
	Reference<SyncrhonizedUiListenInstallationTask* > syncUiTask;

	bool operating;

	SortedVector<ManagedReference<CreatureObject* > > operatorList;

	int installationType;

	Time resourceHopperTimestamp;

	Time lastStartTime;

	Time lastStopTime;

	HopperList resourceHopper;

	float hopperSizeMax;

	float extractionRate;

	float extractionRemainder;

	float spawnDensity;

	ManagedReference<ResourceSpawn* > currentSpawn;

public:
	InstallationObjectImplementation();

	InstallationObjectImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	/**
	 * Destroys this object from database
	 * @pre { this is locked }
	 * @post { this is locked }
	 * @param destroyContainedObjects if true, will destroy from database all its contained objects
	 */
	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	void fillAttributeList(AttributeListMessage* alm, CreatureObject* object);

	/**
	 * Reads and sets the template data from a SharedObjectTemplate LuaObject
	 * @pre { templateData is a valid pointer }
	 * @post { SceneObject members are initialized }
	 * @param templateData templateData points to the LuaObject that is used to initialize SceneObejct members
	 */
	void loadTemplateData(SharedObjectTemplate* templateData);

	void updateResourceContainerQuantity(ResourceContainer* container, int newQuantity, bool notifyClient = true);

	virtual void setOperating(bool operating, bool notifyClient = true);

	void activateUiSync();

	virtual void updateOperators();

	void verifyOperators();

	virtual void updateInstallationWork();

	void handleStructureAddEnergy(CreatureObject* player);

	void setActiveResource(ResourceContainer* container);

	void changeActiveResourceID(unsigned long long spawnObjectID);

	void addResourceToHopper(ResourceContainer* container);

	void clearResourceHopper();

	float getHopperSize();

	/**
	 * @param workingTime Time till when the installation can work
	 * @returns true if to continue working, false to shutdown after next hopper update
	 */
	bool updateMaintenance(Time& workingTime);

	/**
	 * @param workingTime time till when harvester can work
	 */
	void updateHopper(Time& workingTime, bool shutdownAfterUpdate);

	int getHopperItemQuantity(ResourceSpawn* spawn);

	ResourceContainer* getContainerFromHopper(ResourceSpawn* spawn);

	unsigned long long getActiveResourceSpawnID();

	float getActualRate();

	void broadcastToOperators(BasePacket* packet);

	void addOperator(CreatureObject* player);

	void removeOperator(CreatureObject* player);

	void sendBaselinesTo(SceneObject* player);

	bool isInstallationObject();

	bool isOperating() const;

	int getInstallationType() const;

	float getExtractionRate() const;

	float getHopperSizeMax() const;

	void updateStructureStatus();

	HopperList* getHopperList();

	virtual bool isHarvesterObject();

	virtual bool isGeneratorObject();

	virtual bool isShuttleInstallation();

	void setHopperSizeMax(float size);

	void setExtractionRate(float rate);

	bool isAggressiveTo(CreatureObject* object);

	/**
	* Evaluates if this can be attacked by object
	* @pre { }
	* @post { }
	* @return returns true if object can attack this
	*/
	bool isAttackableBy(CreatureObject* object);

	void createChildObjects();

	float getHitChance();

	WeakReference<InstallationObject*> _this;

	operator const InstallationObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~InstallationObjectImplementation();

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

	friend class InstallationObject;
};

class InstallationObjectAdapter : public StructureObjectAdapter {
public:
	InstallationObjectAdapter(InstallationObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void destroyObjectFromDatabase(bool destroyContainedObjects);

	void updateResourceContainerQuantity(ResourceContainer* container, int newQuantity, bool notifyClient);

	void setOperating(bool operating, bool notifyClient);

	void activateUiSync();

	void updateOperators();

	void verifyOperators();

	void updateInstallationWork();

	void handleStructureAddEnergy(CreatureObject* player);

	void setActiveResource(ResourceContainer* container);

	void changeActiveResourceID(unsigned long long spawnObjectID);

	void addResourceToHopper(ResourceContainer* container);

	void clearResourceHopper();

	float getHopperSize();

	int getHopperItemQuantity(ResourceSpawn* spawn);

	ResourceContainer* getContainerFromHopper(ResourceSpawn* spawn);

	unsigned long long getActiveResourceSpawnID();

	float getActualRate();

	void broadcastToOperators(BasePacket* packet);

	void addOperator(CreatureObject* player);

	void removeOperator(CreatureObject* player);

	void sendBaselinesTo(SceneObject* player);

	bool isInstallationObject();

	bool isOperating() const;

	int getInstallationType() const;

	float getExtractionRate() const;

	float getHopperSizeMax() const;

	void updateStructureStatus();

	bool isHarvesterObject();

	bool isGeneratorObject();

	bool isShuttleInstallation();

	bool isAggressiveTo(CreatureObject* object);

	bool isAttackableBy(CreatureObject* object);

	void createChildObjects();

	float getHitChance();

};

class InstallationObjectHelper : public DistributedObjectClassHelper, public Singleton<InstallationObjectHelper> {
	static InstallationObjectHelper* staticInitializer;

public:
	InstallationObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<InstallationObjectHelper>;
};

} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation;

#endif /*INSTALLATIONOBJECT_H_*/
