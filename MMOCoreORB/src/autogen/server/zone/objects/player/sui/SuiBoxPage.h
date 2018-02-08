/*
 *	autogen/server/zone/objects/player/sui/SuiBoxPage.h generated by engine3 IDL compiler 0.60
 */

#ifndef SUIBOXPAGE_H_
#define SUIBOXPAGE_H_

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

#include "engine/lua/Luna.h"

#include "server/zone/objects/player/sui/SuiPageData.h"

#include "engine/service/proto/BaseMessage.h"

#include "server/zone/objects/player/sui/SuiBox.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {

class SuiBoxPage : public SuiBox {
public:
	SuiBoxPage(CreatureObject* player, SuiPageData* data, unsigned int windowType = 0);

	BaseMessage* generateMessage();

	bool isSuiBoxPage();

	SuiPageData* getSuiPageData();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SuiBoxPage(DummyConstructorParameter* param);

	virtual ~SuiBoxPage();

	friend class SuiBoxPageHelper;
};

} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {

class SuiBoxPageImplementation : public SuiBoxImplementation {
protected:
	Reference<SuiPageData* > pageData;

public:
	SuiBoxPageImplementation(CreatureObject* player, SuiPageData* data, unsigned int windowType = 0);

	SuiBoxPageImplementation(DummyConstructorParameter* param);

	BaseMessage* generateMessage();

	bool isSuiBoxPage();

	SuiPageData* getSuiPageData();

	WeakReference<SuiBoxPage*> _this;

	operator const SuiBoxPage*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~SuiBoxPageImplementation();

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

	friend class SuiBoxPage;
};

class SuiBoxPageAdapter : public SuiBoxAdapter {
public:
	SuiBoxPageAdapter(SuiBoxPage* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	BaseMessage* generateMessage();

	bool isSuiBoxPage();

};

class SuiBoxPageHelper : public DistributedObjectClassHelper, public Singleton<SuiBoxPageHelper> {
	static SuiBoxPageHelper* staticInitializer;

public:
	SuiBoxPageHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SuiBoxPageHelper>;
};

class LuaSuiBoxPage {
public:
	static const char className[];
	static Luna<LuaSuiBoxPage>::RegType Register[];

	LuaSuiBoxPage(lua_State *L);
	virtual ~LuaSuiBoxPage();

	int _setObject(lua_State *L);
	int _getObject(lua_State *L);
	int generateMessage(lua_State *L);
	int isSuiBoxPage(lua_State *L);
	int getSuiPageData(lua_State *L);

	Reference<SuiBoxPage*> realObject;
};

} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui;

#endif /*SUIBOXPAGE_H_*/
