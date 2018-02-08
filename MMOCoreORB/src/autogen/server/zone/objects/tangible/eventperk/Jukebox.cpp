/*
 *	autogen/server/zone/objects/tangible/eventperk/Jukebox.cpp generated by engine3 IDL compiler 0.60
 */

#include "Jukebox.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/tangible/tasks/RemoveEventPerkItemTask.h"

#include "server/zone/Zone.h"

/*
 *	JukeboxStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 780721685,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_CREATECHILDOBJECTS__,RPC_SETRADIUS__FLOAT_,RPC_NOTIFYINSERTTOZONE__ZONE_,RPC_DOMUSICSELECTION__CREATUREOBJECT_,RPC_PLAYMUSICTOPLAYER__CREATUREOBJECT_STRING_,RPC_CHANGEMUSIC__STRING_,RPC_STARTPLAYING__STRING_,RPC_STOPPLAYING__,RPC_DESTROYOBJECTFROMDATABASE__BOOL_,RPC_ACTIVATEREMOVEEVENT__BOOL_,RPC_ISSONGPLAYING__,RPC_GETCURSONG__,RPC_ISEVENTPERKITEM__,RPC_SETOWNER__CREATUREOBJECT_,};

Jukebox::Jukebox() : Terminal(DummyConstructorParameter::instance()) {
	JukeboxImplementation* _implementation = new JukeboxImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("Jukebox");
}

Jukebox::Jukebox(DummyConstructorParameter* param) : Terminal(param) {
	_setClassName("Jukebox");
}

Jukebox::~Jukebox() {
}



void Jukebox::initializeTransientMembers() {
	JukeboxImplementation* _implementation = static_cast<JukeboxImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

int Jukebox::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	JukeboxImplementation* _implementation = static_cast<JukeboxImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		assert((player == NULL) || player->isLockedByCurrentThread());
		return _implementation->handleObjectMenuSelect(player, selectedID);
	}
}

void Jukebox::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	JukeboxImplementation* _implementation = static_cast<JukeboxImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillObjectMenuResponse(menuResponse, player);
	}
}

void Jukebox::createChildObjects() {
	JukeboxImplementation* _implementation = static_cast<JukeboxImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATECHILDOBJECTS__);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->createChildObjects();
	}
}

void Jukebox::setRadius(float radius) {
	JukeboxImplementation* _implementation = static_cast<JukeboxImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETRADIUS__FLOAT_);
		method.addFloatParameter(radius);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setRadius(radius);
	}
}

void Jukebox::notifyInsertToZone(Zone* zone) {
	JukeboxImplementation* _implementation = static_cast<JukeboxImplementation*>(_getImplementation());
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

void Jukebox::doMusicSelection(CreatureObject* player) {
	JukeboxImplementation* _implementation = static_cast<JukeboxImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DOMUSICSELECTION__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		assert((player == NULL) || player->isLockedByCurrentThread());
		_implementation->doMusicSelection(player);
	}
}

void Jukebox::playMusicToPlayer(CreatureObject* player, const String& song) {
	JukeboxImplementation* _implementation = static_cast<JukeboxImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_PLAYMUSICTOPLAYER__CREATUREOBJECT_STRING_);
		method.addObjectParameter(player);
		method.addAsciiParameter(song);

		method.executeWithVoidReturn();
	} else {
		_implementation->playMusicToPlayer(player, song);
	}
}

void Jukebox::changeMusic(const String& song) {
	JukeboxImplementation* _implementation = static_cast<JukeboxImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CHANGEMUSIC__STRING_);
		method.addAsciiParameter(song);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->changeMusic(song);
	}
}

void Jukebox::startPlaying(const String& song) {
	JukeboxImplementation* _implementation = static_cast<JukeboxImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_STARTPLAYING__STRING_);
		method.addAsciiParameter(song);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->startPlaying(song);
	}
}

void Jukebox::stopPlaying() {
	JukeboxImplementation* _implementation = static_cast<JukeboxImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_STOPPLAYING__);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->stopPlaying();
	}
}

void Jukebox::destroyObjectFromDatabase(bool destroyContainedObjects) {
	JukeboxImplementation* _implementation = static_cast<JukeboxImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYOBJECTFROMDATABASE__BOOL_);
		method.addBooleanParameter(destroyContainedObjects);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->destroyObjectFromDatabase(destroyContainedObjects);
	}
}

void Jukebox::activateRemoveEvent(bool immediate) {
	JukeboxImplementation* _implementation = static_cast<JukeboxImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATEREMOVEEVENT__BOOL_);
		method.addBooleanParameter(immediate);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->activateRemoveEvent(immediate);
	}
}

bool Jukebox::isSongPlaying() const {
	JukeboxImplementation* _implementation = static_cast<JukeboxImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISSONGPLAYING__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isSongPlaying();
	}
}

String Jukebox::getCurSong() const {
	JukeboxImplementation* _implementation = static_cast<JukeboxImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCURSONG__);

		String _return_getCurSong;
		method.executeWithAsciiReturn(_return_getCurSong);
		return _return_getCurSong;
	} else {
		return _implementation->getCurSong();
	}
}

bool Jukebox::isEventPerkItem() {
	JukeboxImplementation* _implementation = static_cast<JukeboxImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISEVENTPERKITEM__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isEventPerkItem();
	}
}

void Jukebox::setOwner(CreatureObject* player) {
	JukeboxImplementation* _implementation = static_cast<JukeboxImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETOWNER__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setOwner(player);
	}
}

Time* Jukebox::getPurchaseTime() {
	JukeboxImplementation* _implementation = static_cast<JukeboxImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getPurchaseTime();
	}
}

DistributedObjectServant* Jukebox::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* Jukebox::_getImplementationForRead() const {
	return _impl;
}

void Jukebox::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	JukeboxImplementation
 */

JukeboxImplementation::JukeboxImplementation(DummyConstructorParameter* param) : TerminalImplementation(param) {
	_initializeImplementation();
}


JukeboxImplementation::~JukeboxImplementation() {
}


void JukeboxImplementation::finalize() {
}

void JukeboxImplementation::_initializeImplementation() {
	_setClassHelper(JukeboxHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void JukeboxImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<Jukebox*>(stub);
	TerminalImplementation::_setStub(stub);
}

DistributedObjectStub* JukeboxImplementation::_getStub() {
	return _this.get();
}

JukeboxImplementation::operator const Jukebox*() {
	return _this.get();
}

void JukeboxImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void JukeboxImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void JukeboxImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void JukeboxImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void JukeboxImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void JukeboxImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void JukeboxImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void JukeboxImplementation::_serializationHelperMethod() {
	TerminalImplementation::_serializationHelperMethod();

	_setClassName("Jukebox");

}

void JukeboxImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(JukeboxImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool JukeboxImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TerminalImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x1c2361f2: //Jukebox.owner
		TypeInfo<ManagedWeakReference<CreatureObject* > >::parseFromBinaryStream(&owner, stream);
		return true;

	case 0x54510a16: //Jukebox.radius
		TypeInfo<float >::parseFromBinaryStream(&radius, stream);
		return true;

	case 0x3ea3296e: //Jukebox.curSong
		TypeInfo<String >::parseFromBinaryStream(&curSong, stream);
		return true;

	case 0x78ae28eb: //Jukebox.isPlaying
		TypeInfo<bool >::parseFromBinaryStream(&isPlaying, stream);
		return true;

	case 0xf680be03: //Jukebox.purchaseTime
		TypeInfo<Time >::parseFromBinaryStream(&purchaseTime, stream);
		return true;

	}

	return false;
}

void JukeboxImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = JukeboxImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int JukeboxImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TerminalImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x1c2361f2; //Jukebox.owner
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObject* > >::toBinaryStream(&owner, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x54510a16; //Jukebox.radius
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&radius, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x3ea3296e; //Jukebox.curSong
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&curSong, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x78ae28eb; //Jukebox.isPlaying
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&isPlaying, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xf680be03; //Jukebox.purchaseTime
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Time >::toBinaryStream(&purchaseTime, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 5;
}

JukeboxImplementation::JukeboxImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/eventperk/Jukebox.idl():  		Logger.setLoggingName("Jukebox");
	Logger::setLoggingName("Jukebox");
	// server/zone/objects/tangible/eventperk/Jukebox.idl():  		isPlaying = false;
	isPlaying = false;
	// server/zone/objects/tangible/eventperk/Jukebox.idl():  		purchaseTime.updateToCurrentTime();
	(&purchaseTime)->updateToCurrentTime();
	// server/zone/objects/tangible/eventperk/Jukebox.idl():  		curSong = "";
	curSong = "";
	// server/zone/objects/tangible/eventperk/Jukebox.idl():  		radius = 0;
	radius = 0;
	// server/zone/objects/tangible/eventperk/Jukebox.idl():  		owner = null;
	owner = NULL;
}

void JukeboxImplementation::createChildObjects() {
	// server/zone/objects/tangible/eventperk/Jukebox.idl():  		super.createChildObjects();
	TerminalImplementation::createChildObjects();
}

bool JukeboxImplementation::isSongPlaying() const{
	// server/zone/objects/tangible/eventperk/Jukebox.idl():  		return isPlaying;
	return isPlaying;
}

String JukeboxImplementation::getCurSong() const{
	// server/zone/objects/tangible/eventperk/Jukebox.idl():  		return curSong;
	return curSong;
}

bool JukeboxImplementation::isEventPerkItem() {
	// server/zone/objects/tangible/eventperk/Jukebox.idl():  		return true;
	return true;
}

void JukeboxImplementation::setOwner(CreatureObject* player) {
	// server/zone/objects/tangible/eventperk/Jukebox.idl():  		owner = player;
	owner = player;
}

Time* JukeboxImplementation::getPurchaseTime() {
	// server/zone/objects/tangible/eventperk/Jukebox.idl():  		return purchaseTime;
	return (&purchaseTime);
}

/*
 *	JukeboxAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


JukeboxAdapter::JukeboxAdapter(Jukebox* obj) : TerminalAdapter(obj) {
}

void JukeboxAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			byte selectedID = inv->getByteParameter();
			
			int _m_res = handleObjectMenuSelect(player, selectedID);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_CREATECHILDOBJECTS__:
		{
			
			createChildObjects();
			
		}
		break;
	case RPC_SETRADIUS__FLOAT_:
		{
			float radius = inv->getFloatParameter();
			
			setRadius(radius);
			
		}
		break;
	case RPC_NOTIFYINSERTTOZONE__ZONE_:
		{
			Zone* zone = static_cast<Zone*>(inv->getObjectParameter());
			
			notifyInsertToZone(zone);
			
		}
		break;
	case RPC_DOMUSICSELECTION__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			doMusicSelection(player);
			
		}
		break;
	case RPC_PLAYMUSICTOPLAYER__CREATUREOBJECT_STRING_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			 String song; inv->getAsciiParameter(song);
			
			playMusicToPlayer(player, song);
			
		}
		break;
	case RPC_CHANGEMUSIC__STRING_:
		{
			 String song; inv->getAsciiParameter(song);
			
			changeMusic(song);
			
		}
		break;
	case RPC_STARTPLAYING__STRING_:
		{
			 String song; inv->getAsciiParameter(song);
			
			startPlaying(song);
			
		}
		break;
	case RPC_STOPPLAYING__:
		{
			
			stopPlaying();
			
		}
		break;
	case RPC_DESTROYOBJECTFROMDATABASE__BOOL_:
		{
			bool destroyContainedObjects = inv->getBooleanParameter();
			
			destroyObjectFromDatabase(destroyContainedObjects);
			
		}
		break;
	case RPC_ACTIVATEREMOVEEVENT__BOOL_:
		{
			bool immediate = inv->getBooleanParameter();
			
			activateRemoveEvent(immediate);
			
		}
		break;
	case RPC_ISSONGPLAYING__:
		{
			
			bool _m_res = isSongPlaying();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_GETCURSONG__:
		{
			
			String _m_res = getCurSong();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_ISEVENTPERKITEM__:
		{
			
			bool _m_res = isEventPerkItem();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_SETOWNER__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			setOwner(player);
			
		}
		break;
	default:
		TerminalAdapter::invokeMethod(methid, inv);
	}
}

void JukeboxAdapter::initializeTransientMembers() {
	(static_cast<Jukebox*>(stub))->initializeTransientMembers();
}

int JukeboxAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<Jukebox*>(stub))->handleObjectMenuSelect(player, selectedID);
}

void JukeboxAdapter::createChildObjects() {
	(static_cast<Jukebox*>(stub))->createChildObjects();
}

void JukeboxAdapter::setRadius(float radius) {
	(static_cast<Jukebox*>(stub))->setRadius(radius);
}

void JukeboxAdapter::notifyInsertToZone(Zone* zone) {
	(static_cast<Jukebox*>(stub))->notifyInsertToZone(zone);
}

void JukeboxAdapter::doMusicSelection(CreatureObject* player) {
	(static_cast<Jukebox*>(stub))->doMusicSelection(player);
}

void JukeboxAdapter::playMusicToPlayer(CreatureObject* player, const String& song) {
	(static_cast<Jukebox*>(stub))->playMusicToPlayer(player, song);
}

void JukeboxAdapter::changeMusic(const String& song) {
	(static_cast<Jukebox*>(stub))->changeMusic(song);
}

void JukeboxAdapter::startPlaying(const String& song) {
	(static_cast<Jukebox*>(stub))->startPlaying(song);
}

void JukeboxAdapter::stopPlaying() {
	(static_cast<Jukebox*>(stub))->stopPlaying();
}

void JukeboxAdapter::destroyObjectFromDatabase(bool destroyContainedObjects) {
	(static_cast<Jukebox*>(stub))->destroyObjectFromDatabase(destroyContainedObjects);
}

void JukeboxAdapter::activateRemoveEvent(bool immediate) {
	(static_cast<Jukebox*>(stub))->activateRemoveEvent(immediate);
}

bool JukeboxAdapter::isSongPlaying() const {
	return (static_cast<Jukebox*>(stub))->isSongPlaying();
}

String JukeboxAdapter::getCurSong() const {
	return (static_cast<Jukebox*>(stub))->getCurSong();
}

bool JukeboxAdapter::isEventPerkItem() {
	return (static_cast<Jukebox*>(stub))->isEventPerkItem();
}

void JukeboxAdapter::setOwner(CreatureObject* player) {
	(static_cast<Jukebox*>(stub))->setOwner(player);
}

/*
 *	JukeboxHelper
 */

JukeboxHelper* JukeboxHelper::staticInitializer = JukeboxHelper::instance();

JukeboxHelper::JukeboxHelper() {
	className = "Jukebox";

	Core::getObjectBroker()->registerClass(className, this);
}

void JukeboxHelper::finalizeHelper() {
	JukeboxHelper::finalize();
}

DistributedObject* JukeboxHelper::instantiateObject() {
	return new Jukebox(DummyConstructorParameter::instance());
}

DistributedObjectServant* JukeboxHelper::instantiateServant() {
	return new JukeboxImplementation();
}

DistributedObjectAdapter* JukeboxHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new JukeboxAdapter(static_cast<Jukebox*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

