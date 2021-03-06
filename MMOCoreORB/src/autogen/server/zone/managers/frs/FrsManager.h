/*
 *	autogen/server/zone/managers/frs/FrsManager.h generated by engine3 IDL compiler 0.60
 */

#ifndef FRSMANAGER_H_
#define FRSMANAGER_H_

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
namespace managers {
namespace frs {

class RankMaintenanceTask;

} // namespace frs
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::frs;

namespace server {
namespace zone {
namespace objects {
namespace building {

class BuildingObject;

} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerObject;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

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

#include "server/zone/managers/frs/FrsRankingData.h"

#include "system/lang/ref/Reference.h"

#include "engine/core/ManagedService.h"

#include "engine/log/Logger.h"

#include "system/util/VectorMap.h"

#include "system/util/Vector.h"

namespace server {
namespace zone {
namespace managers {
namespace frs {

class FrsManager : public ManagedService {
public:
	static const short COUNCIL_LIGHT = 1;

	static const short COUNCIL_DARK = 2;

	FrsManager(ZoneServer* zserv);

	void initialize();

	void loadLuaConfig();

	void setupEnclaves();

	void setupEnclaveRooms(BuildingObject* enclaveBuilding, const String& groupName);

	Vector<unsigned long long> getFullPlayerList();

	void setPlayerRank(CreatureObject* player, int rank);

	void updatePlayerSkills(CreatureObject* player);

	void demotePlayer(CreatureObject* player);

	void promotePlayer(CreatureObject* player);

	void adjustFrsExperience(CreatureObject* player, int amount);

	void deductMaintenanceXp(CreatureObject* player);

	void addExperienceDebt(CreatureObject* player, int amount);

	bool isValidFrsBattle(CreatureObject* attacker, CreatureObject* victim);

	int calculatePvpExperienceChange(CreatureObject* attacker, CreatureObject* victim, float contribution, bool isVictim);

	int getBaseExperienceGain(PlayerObject* playerGhost, PlayerObject* opponentGhost, bool playerWon);

	void deductDebtExperience(CreatureObject* player);

	int getRoomRequirement(unsigned long long cellID);

	int getMaintenanceInterval();

	ZoneServer* getZoneServer();

	void updateLastMaintenance();

	bool isFrsEnabled() const;

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	FrsManager(DummyConstructorParameter* param);

	virtual ~FrsManager();

	friend class FrsManagerHelper;
};

} // namespace frs
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::frs;

namespace server {
namespace zone {
namespace managers {
namespace frs {

class FrsManagerImplementation : public ManagedServiceImplementation, public Logger {
public:
	static const short COUNCIL_LIGHT = 1;

	static const short COUNCIL_DARK = 2;

private:
	ManagedReference<ZoneServer* > zoneServer;

protected:
	Reference<RankMaintenanceTask* > rankMaintenanceTask;

	Time lastMaintenanceTime;

	ManagedWeakReference<BuildingObject* > lightEnclave;

	ManagedWeakReference<BuildingObject* > darkEnclave;

	VectorMap<unsigned long long, int> lightRankedMembers;

	VectorMap<unsigned int, Reference<FrsRankingData*> > lightRankingData;

	VectorMap<unsigned long long, int> darkRankedMembers;

	VectorMap<unsigned int, Reference<FrsRankingData*> > darkRankingData;

	VectorMap<unsigned long long, int> experienceDebt;

	VectorMap<unsigned long long, int> roomRequirements;

	VectorMap<uint64, Vector<int> > experienceValues;

	bool frsEnabled;

	int petitionInterval;

	int votingInterval;

	int acceptanceInterval;

	int maintenanceInterval;

	int requestDemotionDuration;

	int voteChallengeDuration;

	int baseMaintCost;

	int requestDemotionCost;

	int voteChallengeCost;

	int maxPetitioners;

	int missedVotePenalty;

public:
	FrsManagerImplementation(ZoneServer* zserv);

	FrsManagerImplementation(DummyConstructorParameter* param);

	void initialize();

	void loadLuaConfig();

	void setupEnclaves();

	void setupEnclaveRooms(BuildingObject* enclaveBuilding, const String& groupName);

	Vector<unsigned long long> getFullPlayerList();

	void setPlayerRank(CreatureObject* player, int rank);

	void updatePlayerSkills(CreatureObject* player);

	void demotePlayer(CreatureObject* player);

	void promotePlayer(CreatureObject* player);

	void adjustFrsExperience(CreatureObject* player, int amount);

	void deductMaintenanceXp(CreatureObject* player);

	void addExperienceDebt(CreatureObject* player, int amount);

	bool isValidFrsBattle(CreatureObject* attacker, CreatureObject* victim);

	int calculatePvpExperienceChange(CreatureObject* attacker, CreatureObject* victim, float contribution, bool isVictim);

	int getBaseExperienceGain(PlayerObject* playerGhost, PlayerObject* opponentGhost, bool playerWon);

	void deductDebtExperience(CreatureObject* player);

	int getRoomRequirement(unsigned long long cellID);

	int getMaintenanceInterval();

	ZoneServer* getZoneServer();

	void updateLastMaintenance();

	bool isFrsEnabled() const;

	WeakReference<FrsManager*> _this;

	operator const FrsManager*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~FrsManagerImplementation();

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

	friend class FrsManager;
};

class FrsManagerAdapter : public ManagedServiceAdapter {
public:
	FrsManagerAdapter(FrsManager* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initialize();

	void loadLuaConfig();

	void setupEnclaves();

	void setupEnclaveRooms(BuildingObject* enclaveBuilding, const String& groupName);

	void setPlayerRank(CreatureObject* player, int rank);

	void updatePlayerSkills(CreatureObject* player);

	void demotePlayer(CreatureObject* player);

	void promotePlayer(CreatureObject* player);

	void adjustFrsExperience(CreatureObject* player, int amount);

	void deductMaintenanceXp(CreatureObject* player);

	void addExperienceDebt(CreatureObject* player, int amount);

	bool isValidFrsBattle(CreatureObject* attacker, CreatureObject* victim);

	int calculatePvpExperienceChange(CreatureObject* attacker, CreatureObject* victim, float contribution, bool isVictim);

	int getBaseExperienceGain(PlayerObject* playerGhost, PlayerObject* opponentGhost, bool playerWon);

	void deductDebtExperience(CreatureObject* player);

	int getRoomRequirement(unsigned long long cellID);

	int getMaintenanceInterval();

	ZoneServer* getZoneServer();

	void updateLastMaintenance();

	bool isFrsEnabled() const;

};

class FrsManagerHelper : public DistributedObjectClassHelper, public Singleton<FrsManagerHelper> {
	static FrsManagerHelper* staticInitializer;

public:
	FrsManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<FrsManagerHelper>;
};

} // namespace frs
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::frs;

#endif /*FRSMANAGER_H_*/
