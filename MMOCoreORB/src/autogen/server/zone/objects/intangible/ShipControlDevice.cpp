/*
 *	autogen/server/zone/objects/intangible/ShipControlDevice.cpp generated by engine3 IDL compiler 0.60
 */

#include "ShipControlDevice.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

/*
 *	ShipControlDeviceStub
 */

enum {RPC_STOREOBJECT__CREATUREOBJECT_BOOL_ = 294561104,RPC_GENERATEOBJECT__CREATUREOBJECT_,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_CANBETRADEDTO__CREATUREOBJECT_CREATUREOBJECT_INT_,RPC_ISSHIPCONTROLDEVICE__};

ShipControlDevice::ShipControlDevice() : ControlDevice(DummyConstructorParameter::instance()) {
	ShipControlDeviceImplementation* _implementation = new ShipControlDeviceImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("ShipControlDevice");
}

ShipControlDevice::ShipControlDevice(DummyConstructorParameter* param) : ControlDevice(param) {
	_setClassName("ShipControlDevice");
}

ShipControlDevice::~ShipControlDevice() {
}



void ShipControlDevice::storeObject(CreatureObject* player, bool force) {
	ShipControlDeviceImplementation* _implementation = static_cast<ShipControlDeviceImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_STOREOBJECT__CREATUREOBJECT_BOOL_);
		method.addObjectParameter(player);
		method.addBooleanParameter(force);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		assert((player == NULL) || player->isLockedByCurrentThread());
		_implementation->storeObject(player, force);
	}
}

void ShipControlDevice::generateObject(CreatureObject* player) {
	ShipControlDeviceImplementation* _implementation = static_cast<ShipControlDeviceImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GENERATEOBJECT__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		assert((player == NULL) || player->isLockedByCurrentThread());
		_implementation->generateObject(player);
	}
}

int ShipControlDevice::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	ShipControlDeviceImplementation* _implementation = static_cast<ShipControlDeviceImplementation*>(_getImplementation());
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

void ShipControlDevice::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	ShipControlDeviceImplementation* _implementation = static_cast<ShipControlDeviceImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillObjectMenuResponse(menuResponse, player);
	}
}

bool ShipControlDevice::canBeTradedTo(CreatureObject* player, CreatureObject* receiver, int numberInTrade) {
	ShipControlDeviceImplementation* _implementation = static_cast<ShipControlDeviceImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANBETRADEDTO__CREATUREOBJECT_CREATUREOBJECT_INT_);
		method.addObjectParameter(player);
		method.addObjectParameter(receiver);
		method.addSignedIntParameter(numberInTrade);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->canBeTradedTo(player, receiver, numberInTrade);
	}
}

bool ShipControlDevice::isShipControlDevice() {
	ShipControlDeviceImplementation* _implementation = static_cast<ShipControlDeviceImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISSHIPCONTROLDEVICE__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isShipControlDevice();
	}
}

DistributedObjectServant* ShipControlDevice::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* ShipControlDevice::_getImplementationForRead() const {
	return _impl;
}

void ShipControlDevice::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ShipControlDeviceImplementation
 */

ShipControlDeviceImplementation::ShipControlDeviceImplementation(DummyConstructorParameter* param) : ControlDeviceImplementation(param) {
	_initializeImplementation();
}


ShipControlDeviceImplementation::~ShipControlDeviceImplementation() {
}


void ShipControlDeviceImplementation::finalize() {
}

void ShipControlDeviceImplementation::_initializeImplementation() {
	_setClassHelper(ShipControlDeviceHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ShipControlDeviceImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<ShipControlDevice*>(stub);
	ControlDeviceImplementation::_setStub(stub);
}

DistributedObjectStub* ShipControlDeviceImplementation::_getStub() {
	return _this.get();
}

ShipControlDeviceImplementation::operator const ShipControlDevice*() {
	return _this.get();
}

void ShipControlDeviceImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void ShipControlDeviceImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void ShipControlDeviceImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void ShipControlDeviceImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void ShipControlDeviceImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void ShipControlDeviceImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void ShipControlDeviceImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void ShipControlDeviceImplementation::_serializationHelperMethod() {
	ControlDeviceImplementation::_serializationHelperMethod();

	_setClassName("ShipControlDevice");

}

void ShipControlDeviceImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ShipControlDeviceImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ShipControlDeviceImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ControlDeviceImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void ShipControlDeviceImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ShipControlDeviceImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ShipControlDeviceImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ControlDeviceImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

ShipControlDeviceImplementation::ShipControlDeviceImplementation() {
	_initializeImplementation();
	// server/zone/objects/intangible/ShipControlDevice.idl():  		Logger.setLoggingName("ShipControlDevice");
	Logger::setLoggingName("ShipControlDevice");
}

int ShipControlDeviceImplementation::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	// server/zone/objects/intangible/ShipControlDevice.idl():  		Logger.info("selected call");
	Logger::info("selected call");
	// server/zone/objects/intangible/ShipControlDevice.idl():  		return 
	if (selectedID == RadialOptions::VEHICLE_GENERATE){
	// server/zone/objects/intangible/ShipControlDevice.idl():  		}
	if (ControlDeviceImplementation::controlledObject.getForUpdate() == NULL){
	// server/zone/objects/intangible/ShipControlDevice.idl():  				Logger.error("null controlled object in vehicle control device");
	Logger::error("null controlled object in vehicle control device");
	// server/zone/objects/intangible/ShipControlDevice.idl():  				return 1;
	return 1;
}

	else 	// server/zone/objects/intangible/ShipControlDevice.idl():  		}
	if (player->getParent() == NULL){
	// server/zone/objects/intangible/ShipControlDevice.idl():  				this.generateObject(player);
	_this.get()->generateObject(player);
}
}

	else 	// server/zone/objects/intangible/ShipControlDevice.idl():  		return 
	if (selectedID == RadialOptions::VEHICLE_STORE){
	// server/zone/objects/intangible/ShipControlDevice.idl():  			}
	if (ControlDeviceImplementation::controlledObject.getForUpdate() == NULL){
	// server/zone/objects/intangible/ShipControlDevice.idl():  				Logger.error("null controlled object in vehicle control device");
	Logger::error("null controlled object in vehicle control device");
	// server/zone/objects/intangible/ShipControlDevice.idl():  				return 1;
	return 1;
}

	else {
	// server/zone/objects/intangible/ShipControlDevice.idl():  				}
	if (ControlDeviceImplementation::status == 1 && !ControlDeviceImplementation::controlledObject.getForUpdate().get()->isInQuadTree()){
	// server/zone/objects/intangible/ShipControlDevice.idl():  					this.generateObject(player);
	_this.get()->generateObject(player);
}

	else {
	// server/zone/objects/intangible/ShipControlDevice.idl():  					this.storeObject(player);
	_this.get()->storeObject(player);
}
}
}
	// server/zone/objects/intangible/ShipControlDevice.idl():  		return 0;
	return 0;
}

bool ShipControlDeviceImplementation::isShipControlDevice() {
	// server/zone/objects/intangible/ShipControlDevice.idl():  		return true;
	return true;
}

/*
 *	ShipControlDeviceAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


ShipControlDeviceAdapter::ShipControlDeviceAdapter(ShipControlDevice* obj) : ControlDeviceAdapter(obj) {
}

void ShipControlDeviceAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_STOREOBJECT__CREATUREOBJECT_BOOL_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			bool force = inv->getBooleanParameter();
			
			storeObject(player, force);
			
		}
		break;
	case RPC_GENERATEOBJECT__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			generateObject(player);
			
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
	case RPC_CANBETRADEDTO__CREATUREOBJECT_CREATUREOBJECT_INT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			CreatureObject* receiver = static_cast<CreatureObject*>(inv->getObjectParameter());
			int numberInTrade = inv->getSignedIntParameter();
			
			bool _m_res = canBeTradedTo(player, receiver, numberInTrade);
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISSHIPCONTROLDEVICE__:
		{
			
			bool _m_res = isShipControlDevice();
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		ControlDeviceAdapter::invokeMethod(methid, inv);
	}
}

void ShipControlDeviceAdapter::storeObject(CreatureObject* player, bool force) {
	(static_cast<ShipControlDevice*>(stub))->storeObject(player, force);
}

void ShipControlDeviceAdapter::generateObject(CreatureObject* player) {
	(static_cast<ShipControlDevice*>(stub))->generateObject(player);
}

int ShipControlDeviceAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<ShipControlDevice*>(stub))->handleObjectMenuSelect(player, selectedID);
}

bool ShipControlDeviceAdapter::canBeTradedTo(CreatureObject* player, CreatureObject* receiver, int numberInTrade) {
	return (static_cast<ShipControlDevice*>(stub))->canBeTradedTo(player, receiver, numberInTrade);
}

bool ShipControlDeviceAdapter::isShipControlDevice() {
	return (static_cast<ShipControlDevice*>(stub))->isShipControlDevice();
}

/*
 *	ShipControlDeviceHelper
 */

ShipControlDeviceHelper* ShipControlDeviceHelper::staticInitializer = ShipControlDeviceHelper::instance();

ShipControlDeviceHelper::ShipControlDeviceHelper() {
	className = "ShipControlDevice";

	Core::getObjectBroker()->registerClass(className, this);
}

void ShipControlDeviceHelper::finalizeHelper() {
	ShipControlDeviceHelper::finalize();
}

DistributedObject* ShipControlDeviceHelper::instantiateObject() {
	return new ShipControlDevice(DummyConstructorParameter::instance());
}

DistributedObjectServant* ShipControlDeviceHelper::instantiateServant() {
	return new ShipControlDeviceImplementation();
}

DistributedObjectAdapter* ShipControlDeviceHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ShipControlDeviceAdapter(static_cast<ShipControlDevice*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

