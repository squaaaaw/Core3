/*
 *	autogen/server/zone/objects/tangible/eventperk/FlagGame.cpp generated by engine3 IDL compiler 0.60
 */

#include "FlagGame.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/tangible/tasks/FlagGamePulseTask.h"

/*
 *	FlagGameStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 4164117474,RPC_NOTIFYINSERTTOZONE__ZONE_,RPC_GETFLAGTEMPLATE__INT_,RPC_DOVICTORYEFFECTS__INT_,RPC_CHANGEFLAG__INT_,RPC_TRYFLAGCHANGE__CREATUREOBJECT_,RPC_SHOWSCORES__CREATUREOBJECT_,RPC_REMOVECURFLAG__,RPC_CANUSEFLAG__CREATUREOBJECT_,RPC_STARTGAME__,RPC_ACTIVATEGAMEPULSE__,RPC_ENDGAME__,RPC_ANNOUNCETOPLAYERS__STRING_,RPC_DESTROYOBJECTFROMWORLD__BOOL_,RPC_SETTIMELIMIT__LONG_,RPC_GETTIMELIMIT__,RPC_ISGAMESTARTED__,RPC_ISGAMEENDED__,RPC_INCREASEREBELSCORE__,RPC_INCREASEIMPERIALSCORE__,RPC_GETFACTIONCONTROL__,};

FlagGame::FlagGame() : TangibleObject(DummyConstructorParameter::instance()) {
	FlagGameImplementation* _implementation = new FlagGameImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("FlagGame");
}

FlagGame::FlagGame(DummyConstructorParameter* param) : TangibleObject(param) {
	_setClassName("FlagGame");
}

FlagGame::~FlagGame() {
}



void FlagGame::initializeTransientMembers() {
	FlagGameImplementation* _implementation = static_cast<FlagGameImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

void FlagGame::notifyInsertToZone(Zone* zone) {
	FlagGameImplementation* _implementation = static_cast<FlagGameImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYINSERTTOZONE__ZONE_);
		method.addObjectParameter(zone);

		method.executeWithVoidReturn();
	} else {
		_implementation->notifyInsertToZone(zone);
	}
}

unsigned int FlagGame::getFlagTemplate(unsigned int faction) {
	FlagGameImplementation* _implementation = static_cast<FlagGameImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETFLAGTEMPLATE__INT_);
		method.addUnsignedIntParameter(faction);

		return method.executeWithUnsignedIntReturn();
	} else {
		return _implementation->getFlagTemplate(faction);
	}
}

void FlagGame::doVictoryEffects(unsigned int faction) {
	FlagGameImplementation* _implementation = static_cast<FlagGameImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DOVICTORYEFFECTS__INT_);
		method.addUnsignedIntParameter(faction);

		method.executeWithVoidReturn();
	} else {
		_implementation->doVictoryEffects(faction);
	}
}

void FlagGame::changeFlag(unsigned int faction) {
	FlagGameImplementation* _implementation = static_cast<FlagGameImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CHANGEFLAG__INT_);
		method.addUnsignedIntParameter(faction);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->changeFlag(faction);
	}
}

void FlagGame::tryFlagChange(CreatureObject* player) {
	FlagGameImplementation* _implementation = static_cast<FlagGameImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_TRYFLAGCHANGE__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->tryFlagChange(player);
	}
}

void FlagGame::showScores(CreatureObject* player) {
	FlagGameImplementation* _implementation = static_cast<FlagGameImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SHOWSCORES__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->showScores(player);
	}
}

void FlagGame::removeCurFlag() {
	FlagGameImplementation* _implementation = static_cast<FlagGameImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REMOVECURFLAG__);

		method.executeWithVoidReturn();
	} else {
		_implementation->removeCurFlag();
	}
}

bool FlagGame::canUseFlag(CreatureObject* player) {
	FlagGameImplementation* _implementation = static_cast<FlagGameImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANUSEFLAG__CREATUREOBJECT_);
		method.addObjectParameter(player);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->canUseFlag(player);
	}
}

void FlagGame::startGame() {
	FlagGameImplementation* _implementation = static_cast<FlagGameImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_STARTGAME__);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->startGame();
	}
}

void FlagGame::activateGamePulse() {
	FlagGameImplementation* _implementation = static_cast<FlagGameImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATEGAMEPULSE__);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->activateGamePulse();
	}
}

void FlagGame::endGame() {
	FlagGameImplementation* _implementation = static_cast<FlagGameImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ENDGAME__);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->endGame();
	}
}

void FlagGame::announceToPlayers(const String& message) {
	FlagGameImplementation* _implementation = static_cast<FlagGameImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ANNOUNCETOPLAYERS__STRING_);
		method.addAsciiParameter(message);

		method.executeWithVoidReturn();
	} else {
		_implementation->announceToPlayers(message);
	}
}

void FlagGame::destroyObjectFromWorld(bool sendSelfDestroy) {
	FlagGameImplementation* _implementation = static_cast<FlagGameImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYOBJECTFROMWORLD__BOOL_);
		method.addBooleanParameter(sendSelfDestroy);

		method.executeWithVoidReturn();
	} else {
		_implementation->destroyObjectFromWorld(sendSelfDestroy);
	}
}

void FlagGame::setTimeLimit(unsigned long long limit) {
	FlagGameImplementation* _implementation = static_cast<FlagGameImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETTIMELIMIT__LONG_);
		method.addUnsignedLongParameter(limit);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setTimeLimit(limit);
	}
}

unsigned long long FlagGame::getTimeLimit() const {
	FlagGameImplementation* _implementation = static_cast<FlagGameImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTIMELIMIT__);

		return method.executeWithUnsignedLongReturn();
	} else {
		return _implementation->getTimeLimit();
	}
}

bool FlagGame::isGameStarted() {
	FlagGameImplementation* _implementation = static_cast<FlagGameImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISGAMESTARTED__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isGameStarted();
	}
}

bool FlagGame::isGameEnded() {
	FlagGameImplementation* _implementation = static_cast<FlagGameImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISGAMEENDED__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isGameEnded();
	}
}

void FlagGame::increaseRebelScore() {
	FlagGameImplementation* _implementation = static_cast<FlagGameImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INCREASEREBELSCORE__);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->increaseRebelScore();
	}
}

void FlagGame::increaseImperialScore() {
	FlagGameImplementation* _implementation = static_cast<FlagGameImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INCREASEIMPERIALSCORE__);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->increaseImperialScore();
	}
}

unsigned int FlagGame::getFactionControl() const {
	FlagGameImplementation* _implementation = static_cast<FlagGameImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETFACTIONCONTROL__);

		return method.executeWithUnsignedIntReturn();
	} else {
		return _implementation->getFactionControl();
	}
}

Time* FlagGame::getGameStartTime() {
	FlagGameImplementation* _implementation = static_cast<FlagGameImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getGameStartTime();
	}
}

DistributedObjectServant* FlagGame::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* FlagGame::_getImplementationForRead() const {
	return _impl;
}

void FlagGame::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	FlagGameImplementation
 */

FlagGameImplementation::FlagGameImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


FlagGameImplementation::~FlagGameImplementation() {
}


void FlagGameImplementation::finalize() {
}

void FlagGameImplementation::_initializeImplementation() {
	_setClassHelper(FlagGameHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void FlagGameImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<FlagGame*>(stub);
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* FlagGameImplementation::_getStub() {
	return _this.get();
}

FlagGameImplementation::operator const FlagGame*() {
	return _this.get();
}

void FlagGameImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void FlagGameImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void FlagGameImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void FlagGameImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void FlagGameImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void FlagGameImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void FlagGameImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void FlagGameImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("FlagGame");

}

void FlagGameImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(FlagGameImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool FlagGameImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TangibleObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xc9816e88: //FlagGame.owner
		TypeInfo<ManagedWeakReference<CreatureObject* > >::parseFromBinaryStream(&owner, stream);
		return true;

	case 0x65b0b80c: //FlagGame.curFlag
		TypeInfo<ManagedWeakReference<TangibleObject* > >::parseFromBinaryStream(&curFlag, stream);
		return true;

	case 0xe1609ea0: //FlagGame.lastFlagChange
		TypeInfo<Time >::parseFromBinaryStream(&lastFlagChange, stream);
		return true;

	case 0x47b33ab9: //FlagGame.gameStartTime
		TypeInfo<Time >::parseFromBinaryStream(&gameStartTime, stream);
		return true;

	case 0xd59fcfff: //FlagGame.timeLimit
		TypeInfo<unsigned long long >::parseFromBinaryStream(&timeLimit, stream);
		return true;

	case 0x2649788f: //FlagGame.gameStatus
		TypeInfo<int >::parseFromBinaryStream(&gameStatus, stream);
		return true;

	case 0x43a2c614: //FlagGame.impScore
		TypeInfo<int >::parseFromBinaryStream(&impScore, stream);
		return true;

	case 0x253c729e: //FlagGame.rebScore
		TypeInfo<int >::parseFromBinaryStream(&rebScore, stream);
		return true;

	case 0xd5d52cfa: //FlagGame.factionControl
		TypeInfo<unsigned int >::parseFromBinaryStream(&factionControl, stream);
		return true;

	}

	return false;
}

void FlagGameImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = FlagGameImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int FlagGameImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xc9816e88; //FlagGame.owner
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObject* > >::toBinaryStream(&owner, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x65b0b80c; //FlagGame.curFlag
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<TangibleObject* > >::toBinaryStream(&curFlag, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xe1609ea0; //FlagGame.lastFlagChange
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Time >::toBinaryStream(&lastFlagChange, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x47b33ab9; //FlagGame.gameStartTime
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Time >::toBinaryStream(&gameStartTime, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xd59fcfff; //FlagGame.timeLimit
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned long long >::toBinaryStream(&timeLimit, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x2649788f; //FlagGame.gameStatus
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&gameStatus, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x43a2c614; //FlagGame.impScore
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&impScore, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x253c729e; //FlagGame.rebScore
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&rebScore, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xd5d52cfa; //FlagGame.factionControl
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&factionControl, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 9;
}

FlagGameImplementation::FlagGameImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/eventperk/FlagGame.idl():  		Logger.setLoggingName("FlagGame");
	Logger::setLoggingName("FlagGame");
	// server/zone/objects/tangible/eventperk/FlagGame.idl():  		timeLimit = 0;
	timeLimit = 0;
	// server/zone/objects/tangible/eventperk/FlagGame.idl():  		impScore = 0;
	impScore = 0;
	// server/zone/objects/tangible/eventperk/FlagGame.idl():  		rebScore = 0;
	rebScore = 0;
	// server/zone/objects/tangible/eventperk/FlagGame.idl():  		gameStatus = 0;
	gameStatus = 0;
	// server/zone/objects/tangible/eventperk/FlagGame.idl():  		factionControl = 0;
	factionControl = 0;
	// server/zone/objects/tangible/eventperk/FlagGame.idl():  		owner = null;
	owner = NULL;
	// server/zone/objects/tangible/eventperk/FlagGame.idl():  		curFlag = null;
	curFlag = NULL;
}

void FlagGameImplementation::setTimeLimit(unsigned long long limit) {
	// server/zone/objects/tangible/eventperk/FlagGame.idl():  		timeLimit = limit;
	timeLimit = limit;
}

unsigned long long FlagGameImplementation::getTimeLimit() const{
	// server/zone/objects/tangible/eventperk/FlagGame.idl():  		return timeLimit;
	return timeLimit;
}

bool FlagGameImplementation::isGameStarted() {
	// server/zone/objects/tangible/eventperk/FlagGame.idl():  		return gameStatus == 1;
	return gameStatus == 1;
}

bool FlagGameImplementation::isGameEnded() {
	// server/zone/objects/tangible/eventperk/FlagGame.idl():  		return gameStatus == 2;
	return gameStatus == 2;
}

void FlagGameImplementation::increaseRebelScore() {
	// server/zone/objects/tangible/eventperk/FlagGame.idl():  		rebScore = rebScore + 1;
	rebScore = rebScore + 1;
}

void FlagGameImplementation::increaseImperialScore() {
	// server/zone/objects/tangible/eventperk/FlagGame.idl():  		impScore = impScore + 1;
	impScore = impScore + 1;
}

unsigned int FlagGameImplementation::getFactionControl() const{
	// server/zone/objects/tangible/eventperk/FlagGame.idl():  		return factionControl;
	return factionControl;
}

Time* FlagGameImplementation::getGameStartTime() {
	// server/zone/objects/tangible/eventperk/FlagGame.idl():  		return gameStartTime;
	return (&gameStartTime);
}

/*
 *	FlagGameAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


FlagGameAdapter::FlagGameAdapter(FlagGame* obj) : TangibleObjectAdapter(obj) {
}

void FlagGameAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	case RPC_NOTIFYINSERTTOZONE__ZONE_:
		{
			Zone* zone = static_cast<Zone*>(inv->getObjectParameter());
			
			notifyInsertToZone(zone);
			
		}
		break;
	case RPC_GETFLAGTEMPLATE__INT_:
		{
			unsigned int faction = inv->getUnsignedIntParameter();
			
			unsigned int _m_res = getFlagTemplate(faction);
			resp->insertInt(_m_res);
		}
		break;
	case RPC_DOVICTORYEFFECTS__INT_:
		{
			unsigned int faction = inv->getUnsignedIntParameter();
			
			doVictoryEffects(faction);
			
		}
		break;
	case RPC_CHANGEFLAG__INT_:
		{
			unsigned int faction = inv->getUnsignedIntParameter();
			
			changeFlag(faction);
			
		}
		break;
	case RPC_TRYFLAGCHANGE__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			tryFlagChange(player);
			
		}
		break;
	case RPC_SHOWSCORES__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			showScores(player);
			
		}
		break;
	case RPC_REMOVECURFLAG__:
		{
			
			removeCurFlag();
			
		}
		break;
	case RPC_CANUSEFLAG__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			bool _m_res = canUseFlag(player);
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_STARTGAME__:
		{
			
			startGame();
			
		}
		break;
	case RPC_ACTIVATEGAMEPULSE__:
		{
			
			activateGamePulse();
			
		}
		break;
	case RPC_ENDGAME__:
		{
			
			endGame();
			
		}
		break;
	case RPC_ANNOUNCETOPLAYERS__STRING_:
		{
			 String message; inv->getAsciiParameter(message);
			
			announceToPlayers(message);
			
		}
		break;
	case RPC_DESTROYOBJECTFROMWORLD__BOOL_:
		{
			bool sendSelfDestroy = inv->getBooleanParameter();
			
			destroyObjectFromWorld(sendSelfDestroy);
			
		}
		break;
	case RPC_SETTIMELIMIT__LONG_:
		{
			unsigned long long limit = inv->getUnsignedLongParameter();
			
			setTimeLimit(limit);
			
		}
		break;
	case RPC_GETTIMELIMIT__:
		{
			
			unsigned long long _m_res = getTimeLimit();
			resp->insertLong(_m_res);
		}
		break;
	case RPC_ISGAMESTARTED__:
		{
			
			bool _m_res = isGameStarted();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISGAMEENDED__:
		{
			
			bool _m_res = isGameEnded();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_INCREASEREBELSCORE__:
		{
			
			increaseRebelScore();
			
		}
		break;
	case RPC_INCREASEIMPERIALSCORE__:
		{
			
			increaseImperialScore();
			
		}
		break;
	case RPC_GETFACTIONCONTROL__:
		{
			
			unsigned int _m_res = getFactionControl();
			resp->insertInt(_m_res);
		}
		break;
	default:
		TangibleObjectAdapter::invokeMethod(methid, inv);
	}
}

void FlagGameAdapter::initializeTransientMembers() {
	(static_cast<FlagGame*>(stub))->initializeTransientMembers();
}

void FlagGameAdapter::notifyInsertToZone(Zone* zone) {
	(static_cast<FlagGame*>(stub))->notifyInsertToZone(zone);
}

unsigned int FlagGameAdapter::getFlagTemplate(unsigned int faction) {
	return (static_cast<FlagGame*>(stub))->getFlagTemplate(faction);
}

void FlagGameAdapter::doVictoryEffects(unsigned int faction) {
	(static_cast<FlagGame*>(stub))->doVictoryEffects(faction);
}

void FlagGameAdapter::changeFlag(unsigned int faction) {
	(static_cast<FlagGame*>(stub))->changeFlag(faction);
}

void FlagGameAdapter::tryFlagChange(CreatureObject* player) {
	(static_cast<FlagGame*>(stub))->tryFlagChange(player);
}

void FlagGameAdapter::showScores(CreatureObject* player) {
	(static_cast<FlagGame*>(stub))->showScores(player);
}

void FlagGameAdapter::removeCurFlag() {
	(static_cast<FlagGame*>(stub))->removeCurFlag();
}

bool FlagGameAdapter::canUseFlag(CreatureObject* player) {
	return (static_cast<FlagGame*>(stub))->canUseFlag(player);
}

void FlagGameAdapter::startGame() {
	(static_cast<FlagGame*>(stub))->startGame();
}

void FlagGameAdapter::activateGamePulse() {
	(static_cast<FlagGame*>(stub))->activateGamePulse();
}

void FlagGameAdapter::endGame() {
	(static_cast<FlagGame*>(stub))->endGame();
}

void FlagGameAdapter::announceToPlayers(const String& message) {
	(static_cast<FlagGame*>(stub))->announceToPlayers(message);
}

void FlagGameAdapter::destroyObjectFromWorld(bool sendSelfDestroy) {
	(static_cast<FlagGame*>(stub))->destroyObjectFromWorld(sendSelfDestroy);
}

void FlagGameAdapter::setTimeLimit(unsigned long long limit) {
	(static_cast<FlagGame*>(stub))->setTimeLimit(limit);
}

unsigned long long FlagGameAdapter::getTimeLimit() const {
	return (static_cast<FlagGame*>(stub))->getTimeLimit();
}

bool FlagGameAdapter::isGameStarted() {
	return (static_cast<FlagGame*>(stub))->isGameStarted();
}

bool FlagGameAdapter::isGameEnded() {
	return (static_cast<FlagGame*>(stub))->isGameEnded();
}

void FlagGameAdapter::increaseRebelScore() {
	(static_cast<FlagGame*>(stub))->increaseRebelScore();
}

void FlagGameAdapter::increaseImperialScore() {
	(static_cast<FlagGame*>(stub))->increaseImperialScore();
}

unsigned int FlagGameAdapter::getFactionControl() const {
	return (static_cast<FlagGame*>(stub))->getFactionControl();
}

/*
 *	FlagGameHelper
 */

FlagGameHelper* FlagGameHelper::staticInitializer = FlagGameHelper::instance();

FlagGameHelper::FlagGameHelper() {
	className = "FlagGame";

	Core::getObjectBroker()->registerClass(className, this);
}

void FlagGameHelper::finalizeHelper() {
	FlagGameHelper::finalize();
}

DistributedObject* FlagGameHelper::instantiateObject() {
	return new FlagGame(DummyConstructorParameter::instance());
}

DistributedObjectServant* FlagGameHelper::instantiateServant() {
	return new FlagGameImplementation();
}

DistributedObjectAdapter* FlagGameHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new FlagGameAdapter(static_cast<FlagGame*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

