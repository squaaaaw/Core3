/*
 *	autogen/server/zone/objects/player/sui/fireworkdelaybox/SuiFireworkDelayBox.h generated by engine3 IDL compiler 0.60
 */

#ifndef SUIFIREWORKDELAYBOX_H_
#define SUIFIREWORKDELAYBOX_H_

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

#include "server/zone/objects/player/sui/transferbox/SuiTransferBox.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace transferbox {

class SuiFireworkDelayBox : public SuiTransferBox {
public:
	SuiFireworkDelayBox(CreatureObject* player, unsigned int windowType, unsigned int index);

	unsigned int getFireworkIndex();

	bool isFireworkDelayBox();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SuiFireworkDelayBox(DummyConstructorParameter* param);

	virtual ~SuiFireworkDelayBox();

	friend class SuiFireworkDelayBoxHelper;
};

} // namespace transferbox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::transferbox;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace transferbox {

class SuiFireworkDelayBoxImplementation : public SuiTransferBoxImplementation {
protected:
	unsigned int fireworkIndex;

public:
	SuiFireworkDelayBoxImplementation(CreatureObject* player, unsigned int windowType, unsigned int index);

	SuiFireworkDelayBoxImplementation(DummyConstructorParameter* param);

	unsigned int getFireworkIndex();

	bool isFireworkDelayBox();

	WeakReference<SuiFireworkDelayBox*> _this;

	operator const SuiFireworkDelayBox*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~SuiFireworkDelayBoxImplementation();

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

	friend class SuiFireworkDelayBox;
};

class SuiFireworkDelayBoxAdapter : public SuiTransferBoxAdapter {
public:
	SuiFireworkDelayBoxAdapter(SuiFireworkDelayBox* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	unsigned int getFireworkIndex();

	bool isFireworkDelayBox();

};

class SuiFireworkDelayBoxHelper : public DistributedObjectClassHelper, public Singleton<SuiFireworkDelayBoxHelper> {
	static SuiFireworkDelayBoxHelper* staticInitializer;

public:
	SuiFireworkDelayBoxHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SuiFireworkDelayBoxHelper>;
};

} // namespace transferbox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::transferbox;

#endif /*SUIFIREWORKDELAYBOX_H_*/
