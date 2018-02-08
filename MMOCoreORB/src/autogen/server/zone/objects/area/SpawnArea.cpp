/*
 *	autogen/server/zone/objects/area/SpawnArea.cpp generated by engine3 IDL compiler 0.60
 */

#include "SpawnArea.h"

#include "server/zone/managers/creature/LairSpawn.h"

#include "server/zone/objects/area/SpawnAreaObserver.h"

#include "server/zone/objects/scene/SceneObject.h"

/*
 *	SpawnAreaStub
 */

enum {RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_,RPC_SETTIER__INT_,RPC_GETTIER__,RPC_GETTOTALWEIGHTING__,RPC_SETMAXSPAWNLIMIT__INT_,RPC_ADDNOSPAWNAREA__SPAWNAREA_,RPC_TRYTOSPAWN__SCENEOBJECT_};

SpawnArea::SpawnArea() : ActiveArea(DummyConstructorParameter::instance()) {
	SpawnAreaImplementation* _implementation = new SpawnAreaImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("SpawnArea");
}

SpawnArea::SpawnArea(DummyConstructorParameter* param) : ActiveArea(param) {
	_setClassName("SpawnArea");
}

SpawnArea::~SpawnArea() {
}



Vector3 SpawnArea::getRandomPosition(SceneObject* player) {
	SpawnAreaImplementation* _implementation = static_cast<SpawnAreaImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getRandomPosition(player);
	}
}

int SpawnArea::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	SpawnAreaImplementation* _implementation = static_cast<SpawnAreaImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->notifyObserverEvent(eventType, observable, arg1, arg2);
	}
}

void SpawnArea::buildSpawnList(Vector<unsigned int>* groupCRCs) {
	SpawnAreaImplementation* _implementation = static_cast<SpawnAreaImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->buildSpawnList(groupCRCs);
	}
}

Vector<Reference<LairSpawn*> >* SpawnArea::getSpawnList() {
	SpawnAreaImplementation* _implementation = static_cast<SpawnAreaImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getSpawnList();
	}
}

void SpawnArea::setTier(int n) {
	SpawnAreaImplementation* _implementation = static_cast<SpawnAreaImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETTIER__INT_);
		method.addSignedIntParameter(n);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setTier(n);
	}
}

int SpawnArea::getTier() const {
	SpawnAreaImplementation* _implementation = static_cast<SpawnAreaImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTIER__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getTier();
	}
}

int SpawnArea::getTotalWeighting() const {
	SpawnAreaImplementation* _implementation = static_cast<SpawnAreaImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTOTALWEIGHTING__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getTotalWeighting();
	}
}

void SpawnArea::setMaxSpawnLimit(int n) {
	SpawnAreaImplementation* _implementation = static_cast<SpawnAreaImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETMAXSPAWNLIMIT__INT_);
		method.addSignedIntParameter(n);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setMaxSpawnLimit(n);
	}
}

void SpawnArea::addNoSpawnArea(SpawnArea* area) {
	SpawnAreaImplementation* _implementation = static_cast<SpawnAreaImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDNOSPAWNAREA__SPAWNAREA_);
		method.addObjectParameter(area);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->addNoSpawnArea(area);
	}
}

void SpawnArea::tryToSpawn(SceneObject* object) {
	SpawnAreaImplementation* _implementation = static_cast<SpawnAreaImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_TRYTOSPAWN__SCENEOBJECT_);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else {
		_implementation->tryToSpawn(object);
	}
}

DistributedObjectServant* SpawnArea::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* SpawnArea::_getImplementationForRead() const {
	return _impl;
}

void SpawnArea::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SpawnAreaImplementation
 */

SpawnAreaImplementation::SpawnAreaImplementation(DummyConstructorParameter* param) : ActiveAreaImplementation(param) {
	_initializeImplementation();
}


SpawnAreaImplementation::~SpawnAreaImplementation() {
}


void SpawnAreaImplementation::finalize() {
}

void SpawnAreaImplementation::_initializeImplementation() {
	_setClassHelper(SpawnAreaHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void SpawnAreaImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<SpawnArea*>(stub);
	ActiveAreaImplementation::_setStub(stub);
}

DistributedObjectStub* SpawnAreaImplementation::_getStub() {
	return _this.get();
}

SpawnAreaImplementation::operator const SpawnArea*() {
	return _this.get();
}

void SpawnAreaImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void SpawnAreaImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void SpawnAreaImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void SpawnAreaImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void SpawnAreaImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void SpawnAreaImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void SpawnAreaImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void SpawnAreaImplementation::_serializationHelperMethod() {
	ActiveAreaImplementation::_serializationHelperMethod();

	_setClassName("SpawnArea");

}

void SpawnAreaImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(SpawnAreaImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SpawnAreaImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ActiveAreaImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xc77f639e: //SpawnArea.totalWeighting
		TypeInfo<int >::parseFromBinaryStream(&totalWeighting, stream);
		return true;

	case 0xc0ef6f22: //SpawnArea.totalSpawnCount
		TypeInfo<int >::parseFromBinaryStream(&totalSpawnCount, stream);
		return true;

	case 0x8447aee5: //SpawnArea.maxSpawnLimit
		TypeInfo<int >::parseFromBinaryStream(&maxSpawnLimit, stream);
		return true;

	case 0x2d6ada20: //SpawnArea.spawnCountByType
		TypeInfo<HashTable<unsigned int, int> >::parseFromBinaryStream(&spawnCountByType, stream);
		return true;

	case 0x144dfca3: //SpawnArea.spawnTypes
		TypeInfo<HashTable<unsigned long long, unsigned int> >::parseFromBinaryStream(&spawnTypes, stream);
		return true;

	case 0xd94c078e: //SpawnArea.lastSpawn
		TypeInfo<Time >::parseFromBinaryStream(&lastSpawn, stream);
		return true;

	case 0x90a3784a: //SpawnArea.exitObserver
		TypeInfo<ManagedReference<SpawnAreaObserver* > >::parseFromBinaryStream(&exitObserver, stream);
		return true;

	case 0xe534d1d3: //SpawnArea.noSpawnAreas
		TypeInfo<Vector<ManagedWeakReference<SpawnArea*> > >::parseFromBinaryStream(&noSpawnAreas, stream);
		return true;

	case 0x7d230e7e: //SpawnArea.tier
		TypeInfo<int >::parseFromBinaryStream(&tier, stream);
		return true;

	}

	return false;
}

void SpawnAreaImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SpawnAreaImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SpawnAreaImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ActiveAreaImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xc77f639e; //SpawnArea.totalWeighting
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&totalWeighting, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xc0ef6f22; //SpawnArea.totalSpawnCount
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&totalSpawnCount, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x8447aee5; //SpawnArea.maxSpawnLimit
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&maxSpawnLimit, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x2d6ada20; //SpawnArea.spawnCountByType
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<HashTable<unsigned int, int> >::toBinaryStream(&spawnCountByType, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x144dfca3; //SpawnArea.spawnTypes
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<HashTable<unsigned long long, unsigned int> >::toBinaryStream(&spawnTypes, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xd94c078e; //SpawnArea.lastSpawn
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Time >::toBinaryStream(&lastSpawn, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x90a3784a; //SpawnArea.exitObserver
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<SpawnAreaObserver* > >::toBinaryStream(&exitObserver, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xe534d1d3; //SpawnArea.noSpawnAreas
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Vector<ManagedWeakReference<SpawnArea*> > >::toBinaryStream(&noSpawnAreas, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x7d230e7e; //SpawnArea.tier
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&tier, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 9;
}

SpawnAreaImplementation::SpawnAreaImplementation() {
	_initializeImplementation();
	// server/zone/objects/area/SpawnArea.idl():  		totalWeighting = 0;
	totalWeighting = 0;
	// server/zone/objects/area/SpawnArea.idl():  		totalSpawnCount = 0;
	totalSpawnCount = 0;
	// server/zone/objects/area/SpawnArea.idl():  		maxSpawnLimit = 0;
	maxSpawnLimit = 0;
	// server/zone/objects/area/SpawnArea.idl():  		spawnTypes.setNullValue(0);
	(&spawnTypes)->setNullValue(0);
	// server/zone/objects/area/SpawnArea.idl():  		exitObserver = null;
	exitObserver = NULL;
	// server/zone/objects/area/SpawnArea.idl():  		Logger.setLoggingName("SpawnArea");
	Logger::setLoggingName("SpawnArea");
}

Vector<Reference<LairSpawn*> >* SpawnAreaImplementation::getSpawnList() {
	// server/zone/objects/area/SpawnArea.idl():  		return possibleSpawns;
	return (&possibleSpawns);
}

void SpawnAreaImplementation::setTier(int n) {
	// server/zone/objects/area/SpawnArea.idl():  		tier = n;
	tier = n;
}

int SpawnAreaImplementation::getTier() const{
	// server/zone/objects/area/SpawnArea.idl():  		return tier;
	return tier;
}

int SpawnAreaImplementation::getTotalWeighting() const{
	// server/zone/objects/area/SpawnArea.idl():  		return totalWeighting;
	return totalWeighting;
}

void SpawnAreaImplementation::setMaxSpawnLimit(int n) {
	// server/zone/objects/area/SpawnArea.idl():  		maxSpawnLimit = n;
	maxSpawnLimit = n;
}

void SpawnAreaImplementation::addNoSpawnArea(SpawnArea* area) {
	// server/zone/objects/area/SpawnArea.idl():  		noSpawnAreas.add(area);
	(&noSpawnAreas)->add(area);
}

/*
 *	SpawnAreaAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


SpawnAreaAdapter::SpawnAreaAdapter(SpawnArea* obj) : ActiveAreaAdapter(obj) {
}

void SpawnAreaAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_:
		{
			unsigned int eventType = inv->getUnsignedIntParameter();
			Observable* observable = static_cast<Observable*>(inv->getObjectParameter());
			ManagedObject* arg1 = static_cast<ManagedObject*>(inv->getObjectParameter());
			long long arg2 = inv->getSignedLongParameter();
			
			int _m_res = notifyObserverEvent(eventType, observable, arg1, arg2);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_SETTIER__INT_:
		{
			int n = inv->getSignedIntParameter();
			
			setTier(n);
			
		}
		break;
	case RPC_GETTIER__:
		{
			
			int _m_res = getTier();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETTOTALWEIGHTING__:
		{
			
			int _m_res = getTotalWeighting();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_SETMAXSPAWNLIMIT__INT_:
		{
			int n = inv->getSignedIntParameter();
			
			setMaxSpawnLimit(n);
			
		}
		break;
	case RPC_ADDNOSPAWNAREA__SPAWNAREA_:
		{
			SpawnArea* area = static_cast<SpawnArea*>(inv->getObjectParameter());
			
			addNoSpawnArea(area);
			
		}
		break;
	case RPC_TRYTOSPAWN__SCENEOBJECT_:
		{
			SceneObject* object = static_cast<SceneObject*>(inv->getObjectParameter());
			
			tryToSpawn(object);
			
		}
		break;
	default:
		ActiveAreaAdapter::invokeMethod(methid, inv);
	}
}

int SpawnAreaAdapter::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return (static_cast<SpawnArea*>(stub))->notifyObserverEvent(eventType, observable, arg1, arg2);
}

void SpawnAreaAdapter::setTier(int n) {
	(static_cast<SpawnArea*>(stub))->setTier(n);
}

int SpawnAreaAdapter::getTier() const {
	return (static_cast<SpawnArea*>(stub))->getTier();
}

int SpawnAreaAdapter::getTotalWeighting() const {
	return (static_cast<SpawnArea*>(stub))->getTotalWeighting();
}

void SpawnAreaAdapter::setMaxSpawnLimit(int n) {
	(static_cast<SpawnArea*>(stub))->setMaxSpawnLimit(n);
}

void SpawnAreaAdapter::addNoSpawnArea(SpawnArea* area) {
	(static_cast<SpawnArea*>(stub))->addNoSpawnArea(area);
}

void SpawnAreaAdapter::tryToSpawn(SceneObject* object) {
	(static_cast<SpawnArea*>(stub))->tryToSpawn(object);
}

/*
 *	SpawnAreaHelper
 */

SpawnAreaHelper* SpawnAreaHelper::staticInitializer = SpawnAreaHelper::instance();

SpawnAreaHelper::SpawnAreaHelper() {
	className = "SpawnArea";

	Core::getObjectBroker()->registerClass(className, this);
}

void SpawnAreaHelper::finalizeHelper() {
	SpawnAreaHelper::finalize();
}

DistributedObject* SpawnAreaHelper::instantiateObject() {
	return new SpawnArea(DummyConstructorParameter::instance());
}

DistributedObjectServant* SpawnAreaHelper::instantiateServant() {
	return new SpawnAreaImplementation();
}

DistributedObjectAdapter* SpawnAreaHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SpawnAreaAdapter(static_cast<SpawnArea*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

