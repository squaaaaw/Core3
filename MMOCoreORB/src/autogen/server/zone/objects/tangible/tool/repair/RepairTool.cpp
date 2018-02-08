/*
 *	autogen/server/zone/objects/tangible/tool/repair/RepairTool.cpp generated by engine3 IDL compiler 0.60
 */

#include "RepairTool.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	RepairToolStub
 */

enum {RPC_GETQUALITY__};

RepairTool::RepairTool() : TangibleObject(DummyConstructorParameter::instance()) {
	RepairToolImplementation* _implementation = new RepairToolImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("RepairTool");
}

RepairTool::RepairTool(DummyConstructorParameter* param) : TangibleObject(param) {
	_setClassName("RepairTool");
}

RepairTool::~RepairTool() {
}



void RepairTool::loadTemplateData(SharedObjectTemplate* templateData) {
	RepairToolImplementation* _implementation = static_cast<RepairToolImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->loadTemplateData(templateData);
	}
}

void RepairTool::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	RepairToolImplementation* _implementation = static_cast<RepairToolImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillAttributeList(msg, object);
	}
}

void RepairTool::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	RepairToolImplementation* _implementation = static_cast<RepairToolImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->updateCraftingValues(values, firstUpdate);
	}
}

float RepairTool::getQuality() {
	RepairToolImplementation* _implementation = static_cast<RepairToolImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETQUALITY__);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->getQuality();
	}
}

DistributedObjectServant* RepairTool::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* RepairTool::_getImplementationForRead() const {
	return _impl;
}

void RepairTool::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	RepairToolImplementation
 */

RepairToolImplementation::RepairToolImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


RepairToolImplementation::~RepairToolImplementation() {
}


void RepairToolImplementation::finalize() {
}

void RepairToolImplementation::_initializeImplementation() {
	_setClassHelper(RepairToolHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void RepairToolImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<RepairTool*>(stub);
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* RepairToolImplementation::_getStub() {
	return _this.get();
}

RepairToolImplementation::operator const RepairTool*() {
	return _this.get();
}

void RepairToolImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void RepairToolImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void RepairToolImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void RepairToolImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void RepairToolImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void RepairToolImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void RepairToolImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void RepairToolImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("RepairTool");

}

void RepairToolImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(RepairToolImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool RepairToolImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TangibleObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xeebde27: //RepairTool.quality
		TypeInfo<float >::parseFromBinaryStream(&quality, stream);
		return true;

	}

	return false;
}

void RepairToolImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = RepairToolImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int RepairToolImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xeebde27; //RepairTool.quality
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&quality, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 1;
}

RepairToolImplementation::RepairToolImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/tool/repair/RepairTool.idl():  		setLoggingName("RepairTool");
	setLoggingName("RepairTool");
}

float RepairToolImplementation::getQuality() {
	// server/zone/objects/tangible/tool/repair/RepairTool.idl():  		return quality;
	return quality;
}

/*
 *	RepairToolAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


RepairToolAdapter::RepairToolAdapter(RepairTool* obj) : TangibleObjectAdapter(obj) {
}

void RepairToolAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_GETQUALITY__:
		{
			
			float _m_res = getQuality();
			resp->insertFloat(_m_res);
		}
		break;
	default:
		TangibleObjectAdapter::invokeMethod(methid, inv);
	}
}

float RepairToolAdapter::getQuality() {
	return (static_cast<RepairTool*>(stub))->getQuality();
}

/*
 *	RepairToolHelper
 */

RepairToolHelper* RepairToolHelper::staticInitializer = RepairToolHelper::instance();

RepairToolHelper::RepairToolHelper() {
	className = "RepairTool";

	Core::getObjectBroker()->registerClass(className, this);
}

void RepairToolHelper::finalizeHelper() {
	RepairToolHelper::finalize();
}

DistributedObject* RepairToolHelper::instantiateObject() {
	return new RepairTool(DummyConstructorParameter::instance());
}

DistributedObjectServant* RepairToolHelper::instantiateServant() {
	return new RepairToolImplementation();
}

DistributedObjectAdapter* RepairToolHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new RepairToolAdapter(static_cast<RepairTool*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

