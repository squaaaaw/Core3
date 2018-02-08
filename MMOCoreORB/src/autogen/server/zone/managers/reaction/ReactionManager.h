/*
 *	autogen/server/zone/managers/reaction/ReactionManager.h generated by engine3 IDL compiler 0.60
 */

#ifndef REACTIONMANAGER_H_
#define REACTIONMANAGER_H_

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

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

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
namespace creature {
namespace ai {

class AiAgent;

} // namespace ai
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::ai;

#include "server/zone/managers/reaction/EmoteReactionFine.h"

#include "server/zone/managers/reaction/ReactionRankData.h"

#include "system/lang/ref/Reference.h"

#include "engine/core/ManagedService.h"

#include "engine/log/Logger.h"

#include "system/util/VectorMap.h"

#include "system/util/Vector.h"

namespace server {
namespace zone {
namespace managers {
namespace reaction {

class ReactionManager : public ManagedService {
public:
	static const int ALERT = 0;

	static const int ALLY = 1;

	static const int ASSIST = 2;

	static const int ATTACKED = 3;

	static const int BYE = 4;

	static const int CALM = 5;

	static const int DEATH = 6;

	static const int FLEE = 7;

	static const int GLOAT = 8;

	static const int HELP = 9;

	static const int HI = 10;

	static const int HIT = 11;

	static const int HITTARGET = 12;

	static const int THREAT = 13;

	static const int NONE = 0;

	static const int NICE = 1;

	static const int MID = 2;

	static const int MEAN = 3;

	ReactionManager(ZoneServer* zserv);

	int getReactionLevel(const String& emote);

	void loadLuaConfig();

	/**
	 * Sends a chat message
	 * @pre { npc is locked }
	 * @post { npc is locked }
	 * @param npc: the npc that sends the message
	 * @param type: the type of reaction the message is in response to
	 * @param state: the state of the reaction
	 * @param force: if true, 100% chance to send the chat
	 */
	void sendChatReaction(AiAgent* npc, int type, int state = 0, bool force = false);

	EmoteReactionFine* getEmoteReactionFine(CreatureObject* emoteUser, AiAgent* emoteTarget, int reactionLevel);

	ReactionRankData* getReactionRankData(const String& name);

	String getReactionQuip(int num);

	void emoteReaction(CreatureObject* emoteUser, AiAgent* emoteTarget, int emoteid);

	void doKnockdown(CreatureObject* victim, AiAgent* attacker);

	void doReactionFineMailCheck(CreatureObject* player);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ReactionManager(DummyConstructorParameter* param);

	virtual ~ReactionManager();

	friend class ReactionManagerHelper;
};

} // namespace reaction
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::reaction;

namespace server {
namespace zone {
namespace managers {
namespace reaction {

class ReactionManagerImplementation : public ManagedServiceImplementation, public Logger {
	ManagedReference<ZoneServer* > zoneServer;

protected:
	Vector<Reference<EmoteReactionFine*> > emoteReactionFines;

	Vector<Reference<ReactionRankData*> > reactionRankData;

private:
	VectorMap<String, int> reactionEmotes;

public:
	static const int ALERT = 0;

	static const int ALLY = 1;

	static const int ASSIST = 2;

	static const int ATTACKED = 3;

	static const int BYE = 4;

	static const int CALM = 5;

	static const int DEATH = 6;

	static const int FLEE = 7;

	static const int GLOAT = 8;

	static const int HELP = 9;

	static const int HI = 10;

	static const int HIT = 11;

	static const int HITTARGET = 12;

	static const int THREAT = 13;

	static const int NONE = 0;

	static const int NICE = 1;

	static const int MID = 2;

	static const int MEAN = 3;

	ReactionManagerImplementation(ZoneServer* zserv);

	ReactionManagerImplementation(DummyConstructorParameter* param);

	int getReactionLevel(const String& emote);

	void loadLuaConfig();

	/**
	 * Sends a chat message
	 * @pre { npc is locked }
	 * @post { npc is locked }
	 * @param npc: the npc that sends the message
	 * @param type: the type of reaction the message is in response to
	 * @param state: the state of the reaction
	 * @param force: if true, 100% chance to send the chat
	 */
	void sendChatReaction(AiAgent* npc, int type, int state = 0, bool force = false);

	EmoteReactionFine* getEmoteReactionFine(CreatureObject* emoteUser, AiAgent* emoteTarget, int reactionLevel);

	ReactionRankData* getReactionRankData(const String& name);

	String getReactionQuip(int num);

	void emoteReaction(CreatureObject* emoteUser, AiAgent* emoteTarget, int emoteid);

	void doKnockdown(CreatureObject* victim, AiAgent* attacker);

	void doReactionFineMailCheck(CreatureObject* player);

	WeakReference<ReactionManager*> _this;

	operator const ReactionManager*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ReactionManagerImplementation();

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

	friend class ReactionManager;
};

class ReactionManagerAdapter : public ManagedServiceAdapter {
public:
	ReactionManagerAdapter(ReactionManager* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int getReactionLevel(const String& emote);

	void loadLuaConfig();

	void sendChatReaction(AiAgent* npc, int type, int state, bool force);

	String getReactionQuip(int num);

	void emoteReaction(CreatureObject* emoteUser, AiAgent* emoteTarget, int emoteid);

	void doKnockdown(CreatureObject* victim, AiAgent* attacker);

	void doReactionFineMailCheck(CreatureObject* player);

};

class ReactionManagerHelper : public DistributedObjectClassHelper, public Singleton<ReactionManagerHelper> {
	static ReactionManagerHelper* staticInitializer;

public:
	ReactionManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ReactionManagerHelper>;
};

} // namespace reaction
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::reaction;

#endif /*REACTIONMANAGER_H_*/
