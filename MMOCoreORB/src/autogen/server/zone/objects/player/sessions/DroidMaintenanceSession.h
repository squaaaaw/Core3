/*
 *	autogen/server/zone/objects/player/sessions/DroidMaintenanceSession.h generated by engine3 IDL compiler 0.60
 */

#ifndef DROIDMAINTENANCESESSION_H_
#define DROIDMAINTENANCESESSION_H_

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
namespace components {
namespace droid {

class DroidMaintenanceModuleDataComponent;

} // namespace droid
} // namespace components
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::components::droid;

#include "engine/util/Facade.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class DroidMaintenanceSession : public Facade {
public:
	DroidMaintenanceSession(DroidMaintenanceModuleDataComponent* module, CreatureObject* creature);

	void initialize();

	/**
	 * Send the main window.
	 */
	void sendMaintanceRunBox();

	void setSelectedStructure(StructureObject* structure);

	/**
	 * send the tranfer box
	 */
	void sendMaintenanceTransferBox();

	/**
	 * fire the task off
	 */
	void performMaintenanceRun();

	int cancelSession();

	long long getAvailableCredits();

	void addCreditsToCurrentStructure(int amount);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	DroidMaintenanceSession(DummyConstructorParameter* param);

	virtual ~DroidMaintenanceSession();

	friend class DroidMaintenanceSessionHelper;
};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class DroidMaintenanceSessionImplementation : public FacadeImplementation {
protected:
	WeakReference<DroidMaintenanceModuleDataComponent* > maintModule;

	ManagedWeakReference<CreatureObject* > player;

	Vector<ManagedReference<StructureObject* > > structures;

	VectorMap<unsigned long long, int> maintenance;

	Vector<int> fees;

	ManagedReference<StructureObject* > selectedStructure;

	int selectedFees;

	long long availableCredits;

public:
	DroidMaintenanceSessionImplementation(DroidMaintenanceModuleDataComponent* module, CreatureObject* creature);

	DroidMaintenanceSessionImplementation(DummyConstructorParameter* param);

	void initialize();

	/**
	 * Send the main window.
	 */
	void sendMaintanceRunBox();

	void setSelectedStructure(StructureObject* structure);

	/**
	 * send the tranfer box
	 */
	void sendMaintenanceTransferBox();

	/**
	 * fire the task off
	 */
	void performMaintenanceRun();

	int cancelSession();

	long long getAvailableCredits();

	void addCreditsToCurrentStructure(int amount);

	WeakReference<DroidMaintenanceSession*> _this;

	operator const DroidMaintenanceSession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~DroidMaintenanceSessionImplementation();

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

	friend class DroidMaintenanceSession;
};

class DroidMaintenanceSessionAdapter : public FacadeAdapter {
public:
	DroidMaintenanceSessionAdapter(DroidMaintenanceSession* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initialize();

	void sendMaintanceRunBox();

	void setSelectedStructure(StructureObject* structure);

	void sendMaintenanceTransferBox();

	void performMaintenanceRun();

	int cancelSession();

	long long getAvailableCredits();

	void addCreditsToCurrentStructure(int amount);

};

class DroidMaintenanceSessionHelper : public DistributedObjectClassHelper, public Singleton<DroidMaintenanceSessionHelper> {
	static DroidMaintenanceSessionHelper* staticInitializer;

public:
	DroidMaintenanceSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<DroidMaintenanceSessionHelper>;
};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

#endif /*DROIDMAINTENANCESESSION_H_*/
