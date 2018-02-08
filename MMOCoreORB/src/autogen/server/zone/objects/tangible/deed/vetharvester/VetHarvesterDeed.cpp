/*
 *	autogen/server/zone/objects/tangible/deed/vetharvester/VetHarvesterDeed.cpp generated by engine3 IDL compiler 0.60
 */

#include "VetHarvesterDeed.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

/*
 *	VetHarvesterDeedStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 1647177094,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_USEOBJECT__CREATUREOBJECT_,RPC_DESTROYDEED__};

VetHarvesterDeed::VetHarvesterDeed() : Deed(DummyConstructorParameter::instance()) {
	VetHarvesterDeedImplementation* _implementation = new VetHarvesterDeedImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("VetHarvesterDeed");
}

VetHarvesterDeed::VetHarvesterDeed(DummyConstructorParameter* param) : Deed(param) {
	_setClassName("VetHarvesterDeed");
}

VetHarvesterDeed::~VetHarvesterDeed() {
}



void VetHarvesterDeed::initializeTransientMembers() {
	VetHarvesterDeedImplementation* _implementation = static_cast<VetHarvesterDeedImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

void VetHarvesterDeed::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	VetHarvesterDeedImplementation* _implementation = static_cast<VetHarvesterDeedImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillObjectMenuResponse(menuResponse, player);
	}
}

int VetHarvesterDeed::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	VetHarvesterDeedImplementation* _implementation = static_cast<VetHarvesterDeedImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->handleObjectMenuSelect(player, selectedID);
	}
}

int VetHarvesterDeed::useObject(CreatureObject* player) {
	VetHarvesterDeedImplementation* _implementation = static_cast<VetHarvesterDeedImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_USEOBJECT__CREATUREOBJECT_);
		method.addObjectParameter(player);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->useObject(player);
	}
}

void VetHarvesterDeed::destroyDeed() {
	VetHarvesterDeedImplementation* _implementation = static_cast<VetHarvesterDeedImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYDEED__);

		method.executeWithVoidReturn();
	} else {
		_implementation->destroyDeed();
	}
}

DistributedObjectServant* VetHarvesterDeed::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* VetHarvesterDeed::_getImplementationForRead() const {
	return _impl;
}

void VetHarvesterDeed::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	VetHarvesterDeedImplementation
 */

VetHarvesterDeedImplementation::VetHarvesterDeedImplementation(DummyConstructorParameter* param) : DeedImplementation(param) {
	_initializeImplementation();
}


VetHarvesterDeedImplementation::~VetHarvesterDeedImplementation() {
}


void VetHarvesterDeedImplementation::finalize() {
}

void VetHarvesterDeedImplementation::_initializeImplementation() {
	_setClassHelper(VetHarvesterDeedHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void VetHarvesterDeedImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<VetHarvesterDeed*>(stub);
	DeedImplementation::_setStub(stub);
}

DistributedObjectStub* VetHarvesterDeedImplementation::_getStub() {
	return _this.get();
}

VetHarvesterDeedImplementation::operator const VetHarvesterDeed*() {
	return _this.get();
}

void VetHarvesterDeedImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void VetHarvesterDeedImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void VetHarvesterDeedImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void VetHarvesterDeedImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void VetHarvesterDeedImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void VetHarvesterDeedImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void VetHarvesterDeedImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void VetHarvesterDeedImplementation::_serializationHelperMethod() {
	DeedImplementation::_serializationHelperMethod();

	_setClassName("VetHarvesterDeed");

}

void VetHarvesterDeedImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(VetHarvesterDeedImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool VetHarvesterDeedImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (DeedImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void VetHarvesterDeedImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = VetHarvesterDeedImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int VetHarvesterDeedImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = DeedImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

VetHarvesterDeedImplementation::VetHarvesterDeedImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/deed/vetharvester/VetHarvesterDeed.idl():  		Logger.setLoggingName("VetHarvesterDeed");
	Logger::setLoggingName("VetHarvesterDeed");
}

/*
 *	VetHarvesterDeedAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


VetHarvesterDeedAdapter::VetHarvesterDeedAdapter(VetHarvesterDeed* obj) : DeedAdapter(obj) {
}

void VetHarvesterDeedAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
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
	case RPC_USEOBJECT__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			int _m_res = useObject(player);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_DESTROYDEED__:
		{
			
			destroyDeed();
			
		}
		break;
	default:
		DeedAdapter::invokeMethod(methid, inv);
	}
}

void VetHarvesterDeedAdapter::initializeTransientMembers() {
	(static_cast<VetHarvesterDeed*>(stub))->initializeTransientMembers();
}

int VetHarvesterDeedAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<VetHarvesterDeed*>(stub))->handleObjectMenuSelect(player, selectedID);
}

int VetHarvesterDeedAdapter::useObject(CreatureObject* player) {
	return (static_cast<VetHarvesterDeed*>(stub))->useObject(player);
}

void VetHarvesterDeedAdapter::destroyDeed() {
	(static_cast<VetHarvesterDeed*>(stub))->destroyDeed();
}

/*
 *	VetHarvesterDeedHelper
 */

VetHarvesterDeedHelper* VetHarvesterDeedHelper::staticInitializer = VetHarvesterDeedHelper::instance();

VetHarvesterDeedHelper::VetHarvesterDeedHelper() {
	className = "VetHarvesterDeed";

	Core::getObjectBroker()->registerClass(className, this);
}

void VetHarvesterDeedHelper::finalizeHelper() {
	VetHarvesterDeedHelper::finalize();
}

DistributedObject* VetHarvesterDeedHelper::instantiateObject() {
	return new VetHarvesterDeed(DummyConstructorParameter::instance());
}

DistributedObjectServant* VetHarvesterDeedHelper::instantiateServant() {
	return new VetHarvesterDeedImplementation();
}

DistributedObjectAdapter* VetHarvesterDeedHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new VetHarvesterDeedAdapter(static_cast<VetHarvesterDeed*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

