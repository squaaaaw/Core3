/*
 *	autogen/server/zone/objects/tangible/wearables/RobeObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "RobeObject.h"

/*
 *	RobeObjectStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 2257510045,RPC_GETSKILLREQUIRED__,RPC_ISROBEOBJECT__};

RobeObject::RobeObject() : WearableObject(DummyConstructorParameter::instance()) {
	RobeObjectImplementation* _implementation = new RobeObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("RobeObject");
}

RobeObject::RobeObject(DummyConstructorParameter* param) : WearableObject(param) {
	_setClassName("RobeObject");
}

RobeObject::~RobeObject() {
}



void RobeObject::initializeTransientMembers() {
	RobeObjectImplementation* _implementation = static_cast<RobeObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

String RobeObject::getSkillRequired() {
	RobeObjectImplementation* _implementation = static_cast<RobeObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSKILLREQUIRED__);

		String _return_getSkillRequired;
		method.executeWithAsciiReturn(_return_getSkillRequired);
		return _return_getSkillRequired;
	} else {
		return _implementation->getSkillRequired();
	}
}

bool RobeObject::isRobeObject() {
	RobeObjectImplementation* _implementation = static_cast<RobeObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISROBEOBJECT__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isRobeObject();
	}
}

DistributedObjectServant* RobeObject::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* RobeObject::_getImplementationForRead() const {
	return _impl;
}

void RobeObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	RobeObjectImplementation
 */

RobeObjectImplementation::RobeObjectImplementation(DummyConstructorParameter* param) : WearableObjectImplementation(param) {
	_initializeImplementation();
}


RobeObjectImplementation::~RobeObjectImplementation() {
}


void RobeObjectImplementation::finalize() {
}

void RobeObjectImplementation::_initializeImplementation() {
	_setClassHelper(RobeObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void RobeObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<RobeObject*>(stub);
	WearableObjectImplementation::_setStub(stub);
}

DistributedObjectStub* RobeObjectImplementation::_getStub() {
	return _this.get();
}

RobeObjectImplementation::operator const RobeObject*() {
	return _this.get();
}

void RobeObjectImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void RobeObjectImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void RobeObjectImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void RobeObjectImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void RobeObjectImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void RobeObjectImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void RobeObjectImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void RobeObjectImplementation::_serializationHelperMethod() {
	WearableObjectImplementation::_serializationHelperMethod();

	_setClassName("RobeObject");

}

void RobeObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(RobeObjectImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool RobeObjectImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (WearableObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void RobeObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = RobeObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int RobeObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = WearableObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

RobeObjectImplementation::RobeObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/wearables/RobeObject.idl():  		Logger.setLoggingName("RobeObject");
	Logger::setLoggingName("RobeObject");
}

void RobeObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/wearables/RobeObject.idl():  		super.initializeTransientMembers();
	WearableObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/wearables/RobeObject.idl():  		Logger.setLoggingName("RobeObject");
	Logger::setLoggingName("RobeObject");
}

bool RobeObjectImplementation::isRobeObject() {
	// server/zone/objects/tangible/wearables/RobeObject.idl():  		return true;
	return true;
}

/*
 *	RobeObjectAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


RobeObjectAdapter::RobeObjectAdapter(RobeObject* obj) : WearableObjectAdapter(obj) {
}

void RobeObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	case RPC_GETSKILLREQUIRED__:
		{
			
			String _m_res = getSkillRequired();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_ISROBEOBJECT__:
		{
			
			bool _m_res = isRobeObject();
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		WearableObjectAdapter::invokeMethod(methid, inv);
	}
}

void RobeObjectAdapter::initializeTransientMembers() {
	(static_cast<RobeObject*>(stub))->initializeTransientMembers();
}

String RobeObjectAdapter::getSkillRequired() {
	return (static_cast<RobeObject*>(stub))->getSkillRequired();
}

bool RobeObjectAdapter::isRobeObject() {
	return (static_cast<RobeObject*>(stub))->isRobeObject();
}

/*
 *	RobeObjectHelper
 */

RobeObjectHelper* RobeObjectHelper::staticInitializer = RobeObjectHelper::instance();

RobeObjectHelper::RobeObjectHelper() {
	className = "RobeObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void RobeObjectHelper::finalizeHelper() {
	RobeObjectHelper::finalize();
}

DistributedObject* RobeObjectHelper::instantiateObject() {
	return new RobeObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* RobeObjectHelper::instantiateServant() {
	return new RobeObjectImplementation();
}

DistributedObjectAdapter* RobeObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new RobeObjectAdapter(static_cast<RobeObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

