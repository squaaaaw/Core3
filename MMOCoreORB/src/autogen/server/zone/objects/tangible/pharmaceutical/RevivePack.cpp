/*
 *	autogen/server/zone/objects/tangible/pharmaceutical/RevivePack.cpp generated by engine3 IDL compiler 0.60
 */

#include "RevivePack.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	RevivePackStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_GETHEALTHWOUNDHEALED__,RPC_GETHEALTHHEALED__,RPC_GETACTIONWOUNDHEALED__,RPC_GETACTIONHEALED__,RPC_GETMINDWOUNDHEALED__,RPC_GETMINDHEALED__,RPC_ISREVIVEPACK__};

RevivePack::RevivePack() : PharmaceuticalObject(DummyConstructorParameter::instance()) {
	RevivePackImplementation* _implementation = new RevivePackImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("RevivePack");
}

RevivePack::RevivePack(DummyConstructorParameter* param) : PharmaceuticalObject(param) {
	_setClassName("RevivePack");
}

RevivePack::~RevivePack() {
}



void RevivePack::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	RevivePackImplementation* _implementation = static_cast<RevivePackImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->updateCraftingValues(values, firstUpdate);
	}
}

void RevivePack::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	RevivePackImplementation* _implementation = static_cast<RevivePackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillAttributeList(msg, object);
	}
}

int RevivePack::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	RevivePackImplementation* _implementation = static_cast<RevivePackImplementation*>(_getImplementation());
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

float RevivePack::getHealthWoundHealed() {
	RevivePackImplementation* _implementation = static_cast<RevivePackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETHEALTHWOUNDHEALED__);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->getHealthWoundHealed();
	}
}

float RevivePack::getHealthHealed() {
	RevivePackImplementation* _implementation = static_cast<RevivePackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETHEALTHHEALED__);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->getHealthHealed();
	}
}

float RevivePack::getActionWoundHealed() {
	RevivePackImplementation* _implementation = static_cast<RevivePackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETACTIONWOUNDHEALED__);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->getActionWoundHealed();
	}
}

float RevivePack::getActionHealed() {
	RevivePackImplementation* _implementation = static_cast<RevivePackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETACTIONHEALED__);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->getActionHealed();
	}
}

float RevivePack::getMindWoundHealed() {
	RevivePackImplementation* _implementation = static_cast<RevivePackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMINDWOUNDHEALED__);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->getMindWoundHealed();
	}
}

float RevivePack::getMindHealed() {
	RevivePackImplementation* _implementation = static_cast<RevivePackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMINDHEALED__);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->getMindHealed();
	}
}

bool RevivePack::isRevivePack() {
	RevivePackImplementation* _implementation = static_cast<RevivePackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISREVIVEPACK__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isRevivePack();
	}
}

DistributedObjectServant* RevivePack::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* RevivePack::_getImplementationForRead() const {
	return _impl;
}

void RevivePack::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	RevivePackImplementation
 */

RevivePackImplementation::RevivePackImplementation(DummyConstructorParameter* param) : PharmaceuticalObjectImplementation(param) {
	_initializeImplementation();
}


RevivePackImplementation::~RevivePackImplementation() {
}


void RevivePackImplementation::finalize() {
}

void RevivePackImplementation::_initializeImplementation() {
	_setClassHelper(RevivePackHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void RevivePackImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<RevivePack*>(stub);
	PharmaceuticalObjectImplementation::_setStub(stub);
}

DistributedObjectStub* RevivePackImplementation::_getStub() {
	return _this.get();
}

RevivePackImplementation::operator const RevivePack*() {
	return _this.get();
}

void RevivePackImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void RevivePackImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void RevivePackImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void RevivePackImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void RevivePackImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void RevivePackImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void RevivePackImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void RevivePackImplementation::_serializationHelperMethod() {
	PharmaceuticalObjectImplementation::_serializationHelperMethod();

	_setClassName("RevivePack");

}

void RevivePackImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(RevivePackImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool RevivePackImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (PharmaceuticalObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x6bea834f: //RevivePack.healthWoundHealed
		TypeInfo<float >::parseFromBinaryStream(&healthWoundHealed, stream);
		return true;

	case 0x44c4ee1f: //RevivePack.healthHealed
		TypeInfo<float >::parseFromBinaryStream(&healthHealed, stream);
		return true;

	case 0xfa0d0c5f: //RevivePack.actionWoundHealed
		TypeInfo<float >::parseFromBinaryStream(&actionWoundHealed, stream);
		return true;

	case 0xc17b9823: //RevivePack.actionHealed
		TypeInfo<float >::parseFromBinaryStream(&actionHealed, stream);
		return true;

	case 0x91de63bb: //RevivePack.mindWoundHealed
		TypeInfo<float >::parseFromBinaryStream(&mindWoundHealed, stream);
		return true;

	case 0x28e52490: //RevivePack.mindHealed
		TypeInfo<float >::parseFromBinaryStream(&mindHealed, stream);
		return true;

	}

	return false;
}

void RevivePackImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = RevivePackImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int RevivePackImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = PharmaceuticalObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x6bea834f; //RevivePack.healthWoundHealed
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&healthWoundHealed, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x44c4ee1f; //RevivePack.healthHealed
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&healthHealed, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xfa0d0c5f; //RevivePack.actionWoundHealed
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&actionWoundHealed, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xc17b9823; //RevivePack.actionHealed
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&actionHealed, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x91de63bb; //RevivePack.mindWoundHealed
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&mindWoundHealed, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x28e52490; //RevivePack.mindHealed
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&mindHealed, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 6;
}

RevivePackImplementation::RevivePackImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		setLoggingName("RevivePack");
	setLoggingName("RevivePack");
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		healthWoundHealed = 100;
	healthWoundHealed = 100;
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		healthHealed = 100;
	healthHealed = 100;
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		actionWoundHealed = 100;
	actionWoundHealed = 100;
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		actionHealed = 100;
	actionHealed = 100;
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		mindWoundHealed = 100;
	mindWoundHealed = 100;
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		mindHealed = 100;
	mindHealed = 100;
}

void RevivePackImplementation::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		float effectiveness = values.getCurrentValue("power");
	float effectiveness = values->getCurrentValue("power");
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		super.medicineUseRequired = values.getCurrentValue("skillmodmin");
	PharmaceuticalObjectImplementation::medicineUseRequired = values->getCurrentValue("skillmodmin");
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		setUseCount(values.getCurrentValue("charges"));
	setUseCount(values->getCurrentValue("charges"));
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		values.setHidden("power");
	values->setHidden("power");
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		float health = 2 * effectiveness;
	float health = 2 * effectiveness;
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		healthWoundHealed = health;
	healthWoundHealed = health;
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		healthHealed = 2 * effectiveness - health;
	healthHealed = 2 * effectiveness - health;
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		float action = 2 * effectiveness;
	float action = 2 * effectiveness;
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		action = System.random(action / 4);
	action = System::random(action / 4);
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		action = action + effectiveness / 2;
	action = action + effectiveness / 2;
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		actionWoundHealed = action;
	actionWoundHealed = action;
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		actionHealed = 2 * effectiveness - action;
	actionHealed = 2 * effectiveness - action;
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		float mind = 1.5 * effectiveness;
	float mind = 1.5 * effectiveness;
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		mind = System.random(mind / 4);
	mind = System::random(mind / 4);
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		mind = mind + effectiveness / 2;
	mind = mind + effectiveness / 2;
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		mindWoundHealed = mind;
	mindWoundHealed = mind;
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		mindHealed = 1.5 * effectiveness - mind;
	mindHealed = 1.5 * effectiveness - mind;
}

void RevivePackImplementation::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		super.fillAttributeList(msg, object);
	PharmaceuticalObjectImplementation::fillAttributeList(msg, object);
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		msg.insertAttribute("examine_heal_wound_health", Math.getPrecision(healthWoundHealed, 0));
	msg->insertAttribute("examine_heal_wound_health", Math::getPrecision(healthWoundHealed, 0));
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		msg.insertAttribute("examine_heal_damage_health", Math.getPrecision(healthHealed, 0));
	msg->insertAttribute("examine_heal_damage_health", Math::getPrecision(healthHealed, 0));
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		msg.insertAttribute("examine_heal_wound_mind", Math.getPrecision(mindWoundHealed, 0));
	msg->insertAttribute("examine_heal_wound_mind", Math::getPrecision(mindWoundHealed, 0));
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		msg.insertAttribute("examine_heal_damage_mind", Math.getPrecision(mindHealed, 0));
	msg->insertAttribute("examine_heal_damage_mind", Math::getPrecision(mindHealed, 0));
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		msg.insertAttribute("examine_heal_wound_action", Math.getPrecision(actionWoundHealed, 0));
	msg->insertAttribute("examine_heal_wound_action", Math::getPrecision(actionWoundHealed, 0));
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		msg.insertAttribute("examine_heal_damage_action", Math.getPrecision(actionHealed, 0));
	msg->insertAttribute("examine_heal_damage_action", Math::getPrecision(actionHealed, 0));
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		msg.insertAttribute("healing_ability", super.medicineUseRequired);
	msg->insertAttribute("healing_ability", PharmaceuticalObjectImplementation::medicineUseRequired);
}

int RevivePackImplementation::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		if 
	if (!isASubChildOf(player))	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  			return 0;
	return 0;
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		if 
	if (selectedID != 20)	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  			return 1;
	return 1;
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		}
	if (player->getSkillMod("healing_ability") < PharmaceuticalObjectImplementation::medicineUseRequired){
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  			player.sendSystemMessage("@error_message:insufficient_skill");
	player->sendSystemMessage("@error_message:insufficient_skill");
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  			return 0;
	return 0;
}

	else {
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  			player.sendCommand("reviveplayer", String.valueOf(super.getObjectID()), player.getTargetID());
	player->sendCommand("reviveplayer", String::valueOf(PharmaceuticalObjectImplementation::getObjectID()), player->getTargetID());
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  			return 0;
	return 0;
}
}

float RevivePackImplementation::getHealthWoundHealed() {
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		return healthWoundHealed;
	return healthWoundHealed;
}

float RevivePackImplementation::getHealthHealed() {
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		return healthHealed;
	return healthHealed;
}

float RevivePackImplementation::getActionWoundHealed() {
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		return actionWoundHealed;
	return actionWoundHealed;
}

float RevivePackImplementation::getActionHealed() {
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		return actionHealed;
	return actionHealed;
}

float RevivePackImplementation::getMindWoundHealed() {
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		return mindWoundHealed;
	return mindWoundHealed;
}

float RevivePackImplementation::getMindHealed() {
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		return mindHealed;
	return mindHealed;
}

bool RevivePackImplementation::isRevivePack() {
	// server/zone/objects/tangible/pharmaceutical/RevivePack.idl():  		return true;
	return true;
}

/*
 *	RevivePackAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


RevivePackAdapter::RevivePackAdapter(RevivePack* obj) : PharmaceuticalObjectAdapter(obj) {
}

void RevivePackAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			byte selectedID = inv->getByteParameter();
			
			int _m_res = handleObjectMenuSelect(player, selectedID);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETHEALTHWOUNDHEALED__:
		{
			
			float _m_res = getHealthWoundHealed();
			resp->insertFloat(_m_res);
		}
		break;
	case RPC_GETHEALTHHEALED__:
		{
			
			float _m_res = getHealthHealed();
			resp->insertFloat(_m_res);
		}
		break;
	case RPC_GETACTIONWOUNDHEALED__:
		{
			
			float _m_res = getActionWoundHealed();
			resp->insertFloat(_m_res);
		}
		break;
	case RPC_GETACTIONHEALED__:
		{
			
			float _m_res = getActionHealed();
			resp->insertFloat(_m_res);
		}
		break;
	case RPC_GETMINDWOUNDHEALED__:
		{
			
			float _m_res = getMindWoundHealed();
			resp->insertFloat(_m_res);
		}
		break;
	case RPC_GETMINDHEALED__:
		{
			
			float _m_res = getMindHealed();
			resp->insertFloat(_m_res);
		}
		break;
	case RPC_ISREVIVEPACK__:
		{
			
			bool _m_res = isRevivePack();
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		PharmaceuticalObjectAdapter::invokeMethod(methid, inv);
	}
}

int RevivePackAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<RevivePack*>(stub))->handleObjectMenuSelect(player, selectedID);
}

float RevivePackAdapter::getHealthWoundHealed() {
	return (static_cast<RevivePack*>(stub))->getHealthWoundHealed();
}

float RevivePackAdapter::getHealthHealed() {
	return (static_cast<RevivePack*>(stub))->getHealthHealed();
}

float RevivePackAdapter::getActionWoundHealed() {
	return (static_cast<RevivePack*>(stub))->getActionWoundHealed();
}

float RevivePackAdapter::getActionHealed() {
	return (static_cast<RevivePack*>(stub))->getActionHealed();
}

float RevivePackAdapter::getMindWoundHealed() {
	return (static_cast<RevivePack*>(stub))->getMindWoundHealed();
}

float RevivePackAdapter::getMindHealed() {
	return (static_cast<RevivePack*>(stub))->getMindHealed();
}

bool RevivePackAdapter::isRevivePack() {
	return (static_cast<RevivePack*>(stub))->isRevivePack();
}

/*
 *	RevivePackHelper
 */

RevivePackHelper* RevivePackHelper::staticInitializer = RevivePackHelper::instance();

RevivePackHelper::RevivePackHelper() {
	className = "RevivePack";

	Core::getObjectBroker()->registerClass(className, this);
}

void RevivePackHelper::finalizeHelper() {
	RevivePackHelper::finalize();
}

DistributedObject* RevivePackHelper::instantiateObject() {
	return new RevivePack(DummyConstructorParameter::instance());
}

DistributedObjectServant* RevivePackHelper::instantiateServant() {
	return new RevivePackImplementation();
}

DistributedObjectAdapter* RevivePackHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new RevivePackAdapter(static_cast<RevivePack*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

