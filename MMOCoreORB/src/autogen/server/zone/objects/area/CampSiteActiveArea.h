/*
 *	autogen/server/zone/objects/area/CampSiteActiveArea.h generated by engine3 IDL compiler 0.60
 */

#ifndef CAMPSITEACTIVEAREA_H_
#define CAMPSITEACTIVEAREA_H_

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
namespace objects {
namespace staticobject {

class StaticObject;

} // namespace staticobject
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::staticobject;

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
namespace structure {

class StructureObject;

} // namespace structure
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::structure;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {

class Terminal;

} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal;

namespace server {
namespace zone {
namespace objects {
namespace area {

class CampSiteObserver;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

namespace server {
namespace zone {
namespace objects {
namespace area {
namespace events {

class CampDespawnTask;

} // namespace events
} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area::events;

namespace server {
namespace zone {
namespace objects {
namespace area {
namespace events {

class CampAbandonTask;

} // namespace events
} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area::events;

#include "templates/building/CampStructureTemplate.h"

#include "system/thread/Mutex.h"

#include "templates/TemplateReference.h"

#include "system/lang/System.h"

#include "system/util/Vector.h"

#include "server/zone/objects/area/ActiveArea.h"

#include "system/lang/Time.h"

namespace server {
namespace zone {
namespace objects {
namespace area {

class CampSiteActiveArea : public ActiveArea {
public:
	static const int DESPAWNTIME = 6000000;

	static const int ABANDONTIME = 60000;

	CampSiteActiveArea();

	void initializeTransientMembers();

	void init(CampStructureTemplate* campData);

	void notifyEnter(SceneObject* player);

	void notifyExit(SceneObject* player);

	void setTerminal(Terminal* term);

	void setOwner(CreatureObject* player);

	void setCamp(StructureObject* c);

	StructureObject* getCamp() const;

	int getMedicalRating();

	int getHealthWoundRegenRate();

	int getActionWoundRegenRate();

	int getMindWoundRegenRate();

	float getAggroMod();

	bool isCampArea();

	int getVisitorCount() const;

	unsigned int getUptime();

	bool isAbandoned() const;

	int notifyHealEvent(long long quantity);

	int notifyCombatEvent();

	void abandonCamp();

	void setAbandoned(bool isAbandoned);

	bool despawnCamp();

	void assumeOwnership(CreatureObject* player);

	CreatureObject* getOwner() const;

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	CampSiteActiveArea(DummyConstructorParameter* param);

	virtual ~CampSiteActiveArea();

	friend class CampSiteActiveAreaHelper;
};

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

namespace server {
namespace zone {
namespace objects {
namespace area {

class CampSiteActiveAreaImplementation : public ActiveAreaImplementation {
protected:
	ManagedReference<StructureObject* > camp;

	ManagedReference<Terminal* > terminal;

	ManagedReference<StaticObject* > campFire;

	Mutex taskMutex;

	Vector<unsigned long long> visitors;

	ManagedReference<CampSiteObserver* > campObserver;

	Reference<CampAbandonTask* > abandonTask;

	Reference<CampDespawnTask* > despawnTask;

	ManagedReference<CreatureObject* > campOwner;

	unsigned int timeCreated;

	bool abandoned;

	int currentXp;

	TemplateReference<CampStructureTemplate*> campStructureData;

public:
	static const int DESPAWNTIME = 6000000;

	static const int ABANDONTIME = 60000;

	CampSiteActiveAreaImplementation();

	CampSiteActiveAreaImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void init(CampStructureTemplate* campData);

private:
	void startTasks();

public:
	void notifyEnter(SceneObject* player);

	void notifyExit(SceneObject* player);

	void setTerminal(Terminal* term);

	void setOwner(CreatureObject* player);

	void setCamp(StructureObject* c);

	StructureObject* getCamp() const;

	int getMedicalRating();

	int getHealthWoundRegenRate();

	int getActionWoundRegenRate();

	int getMindWoundRegenRate();

	float getAggroMod();

	virtual bool isCampArea();

	int getVisitorCount() const;

	unsigned int getUptime();

	bool isAbandoned() const;

	int notifyHealEvent(long long quantity);

	int notifyCombatEvent();

	void abandonCamp();

	void setAbandoned(bool isAbandoned);

	bool despawnCamp();

	void assumeOwnership(CreatureObject* player);

	CreatureObject* getOwner() const;

	WeakReference<CampSiteActiveArea*> _this;

	operator const CampSiteActiveArea*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~CampSiteActiveAreaImplementation();

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

	friend class CampSiteActiveArea;
};

class CampSiteActiveAreaAdapter : public ActiveAreaAdapter {
public:
	CampSiteActiveAreaAdapter(CampSiteActiveArea* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void notifyEnter(SceneObject* player);

	void notifyExit(SceneObject* player);

	void setTerminal(Terminal* term);

	void setOwner(CreatureObject* player);

	void setCamp(StructureObject* c);

	StructureObject* getCamp() const;

	int getMedicalRating();

	int getHealthWoundRegenRate();

	int getActionWoundRegenRate();

	int getMindWoundRegenRate();

	float getAggroMod();

	bool isCampArea();

	int getVisitorCount() const;

	unsigned int getUptime();

	bool isAbandoned() const;

	int notifyHealEvent(long long quantity);

	int notifyCombatEvent();

	void abandonCamp();

	void setAbandoned(bool isAbandoned);

	bool despawnCamp();

	void assumeOwnership(CreatureObject* player);

	CreatureObject* getOwner() const;

};

class CampSiteActiveAreaHelper : public DistributedObjectClassHelper, public Singleton<CampSiteActiveAreaHelper> {
	static CampSiteActiveAreaHelper* staticInitializer;

public:
	CampSiteActiveAreaHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CampSiteActiveAreaHelper>;
};

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

#endif /*CAMPSITEACTIVEAREA_H_*/
