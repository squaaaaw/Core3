/*
 *	autogen/server/zone/objects/tangible/deed/resource/ResourceDeed.cpp generated by engine3 IDL compiler 0.60
 */

#include "ResourceDeed.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

/*
 *	ResourceDeedStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 3768260266,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_USEOBJECT__CREATUREOBJECT_,RPC_DESTROYDEED__};

ResourceDeed::ResourceDeed() : Deed(DummyConstructorParameter::instance()) {
	ResourceDeedImplementation* _implementation = new ResourceDeedImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("ResourceDeed");
}

ResourceDeed::ResourceDeed(DummyConstructorParameter* param) : Deed(param) {
	_setClassName("ResourceDeed");
}

ResourceDeed::~ResourceDeed() {
}



void ResourceDeed::initializeTransientMembers() {
	ResourceDeedImplementation* _implementation = static_cast<ResourceDeedImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

void ResourceDeed::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	ResourceDeedImplementation* _implementation = static_cast<ResourceDeedImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillObjectMenuResponse(menuResponse, player);
	}
}

int ResourceDeed::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	ResourceDeedImplementation* _implementation = static_cast<ResourceDeedImplementation*>(_getImplementation());
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

int ResourceDeed::useObject(CreatureObject* player) {
	ResourceDeedImplementation* _implementation = static_cast<ResourceDeedImplementation*>(_getImplementation());
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

void ResourceDeed::destroyDeed() {
	ResourceDeedImplementation* _implementation = static_cast<ResourceDeedImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYDEED__);

		method.executeWithVoidReturn();
	} else {
		_implementation->destroyDeed();
	}
}

DistributedObjectServant* ResourceDeed::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* ResourceDeed::_getImplementationForRead() const {
	return _impl;
}

void ResourceDeed::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ResourceDeedImplementation
 */

ResourceDeedImplementation::ResourceDeedImplementation(DummyConstructorParameter* param) : DeedImplementation(param) {
	_initializeImplementation();
}


ResourceDeedImplementation::~ResourceDeedImplementation() {
}


void ResourceDeedImplementation::finalize() {
}

void ResourceDeedImplementation::_initializeImplementation() {
	_setClassHelper(ResourceDeedHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ResourceDeedImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<ResourceDeed*>(stub);
	DeedImplementation::_setStub(stub);
}

DistributedObjectStub* ResourceDeedImplementation::_getStub() {
	return _this.get();
}

ResourceDeedImplementation::operator const ResourceDeed*() {
	return _this.get();
}

void ResourceDeedImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void ResourceDeedImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void ResourceDeedImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void ResourceDeedImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void ResourceDeedImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void ResourceDeedImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void ResourceDeedImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void ResourceDeedImplementation::_serializationHelperMethod() {
	DeedImplementation::_serializationHelperMethod();

	_setClassName("ResourceDeed");

}

void ResourceDeedImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ResourceDeedImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ResourceDeedImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (DeedImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void ResourceDeedImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ResourceDeedImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ResourceDeedImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = DeedImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

ResourceDeedImplementation::ResourceDeedImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/deed/resource/ResourceDeed.idl():  		Logger.setLoggingName("ResourceDeed");
	Logger::setLoggingName("ResourceDeed");
}

/*
 *	ResourceDeedAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


ResourceDeedAdapter::ResourceDeedAdapter(ResourceDeed* obj) : DeedAdapter(obj) {
}

void ResourceDeedAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
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

void ResourceDeedAdapter::initializeTransientMembers() {
	(static_cast<ResourceDeed*>(stub))->initializeTransientMembers();
}

int ResourceDeedAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<ResourceDeed*>(stub))->handleObjectMenuSelect(player, selectedID);
}

int ResourceDeedAdapter::useObject(CreatureObject* player) {
	return (static_cast<ResourceDeed*>(stub))->useObject(player);
}

void ResourceDeedAdapter::destroyDeed() {
	(static_cast<ResourceDeed*>(stub))->destroyDeed();
}

/*
 *	ResourceDeedHelper
 */

ResourceDeedHelper* ResourceDeedHelper::staticInitializer = ResourceDeedHelper::instance();

ResourceDeedHelper::ResourceDeedHelper() {
	className = "ResourceDeed";

	Core::getObjectBroker()->registerClass(className, this);
}

void ResourceDeedHelper::finalizeHelper() {
	ResourceDeedHelper::finalize();
}

DistributedObject* ResourceDeedHelper::instantiateObject() {
	return new ResourceDeed(DummyConstructorParameter::instance());
}

DistributedObjectServant* ResourceDeedHelper::instantiateServant() {
	return new ResourceDeedImplementation();
}

DistributedObjectAdapter* ResourceDeedHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ResourceDeedAdapter(static_cast<ResourceDeed*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

