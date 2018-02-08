/*
 *	autogen/server/zone/objects/area/MissionReconActiveArea.cpp generated by engine3 IDL compiler 0.60
 */

#include "MissionReconActiveArea.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/mission/ReconMissionObjective.h"

/*
 *	MissionReconActiveAreaStub
 */

enum {RPC_NOTIFYENTER__SCENEOBJECT_ = 3835253602,RPC_NOTIFYEXIT__SCENEOBJECT_,RPC_SETMISSIONOBJECTIVE__RECONMISSIONOBJECTIVE_};

MissionReconActiveArea::MissionReconActiveArea() : ActiveArea(DummyConstructorParameter::instance()) {
	MissionReconActiveAreaImplementation* _implementation = new MissionReconActiveAreaImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("MissionReconActiveArea");
}

MissionReconActiveArea::MissionReconActiveArea(DummyConstructorParameter* param) : ActiveArea(param) {
	_setClassName("MissionReconActiveArea");
}

MissionReconActiveArea::~MissionReconActiveArea() {
}



void MissionReconActiveArea::notifyEnter(SceneObject* player) {
	MissionReconActiveAreaImplementation* _implementation = static_cast<MissionReconActiveAreaImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYENTER__SCENEOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->notifyEnter(player);
	}
}

void MissionReconActiveArea::notifyExit(SceneObject* player) {
	MissionReconActiveAreaImplementation* _implementation = static_cast<MissionReconActiveAreaImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYEXIT__SCENEOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->notifyExit(player);
	}
}

void MissionReconActiveArea::setMissionObjective(ReconMissionObjective* mission) {
	MissionReconActiveAreaImplementation* _implementation = static_cast<MissionReconActiveAreaImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETMISSIONOBJECTIVE__RECONMISSIONOBJECTIVE_);
		method.addObjectParameter(mission);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setMissionObjective(mission);
	}
}

DistributedObjectServant* MissionReconActiveArea::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* MissionReconActiveArea::_getImplementationForRead() const {
	return _impl;
}

void MissionReconActiveArea::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	MissionReconActiveAreaImplementation
 */

MissionReconActiveAreaImplementation::MissionReconActiveAreaImplementation(DummyConstructorParameter* param) : ActiveAreaImplementation(param) {
	_initializeImplementation();
}


MissionReconActiveAreaImplementation::~MissionReconActiveAreaImplementation() {
}


void MissionReconActiveAreaImplementation::finalize() {
}

void MissionReconActiveAreaImplementation::_initializeImplementation() {
	_setClassHelper(MissionReconActiveAreaHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void MissionReconActiveAreaImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<MissionReconActiveArea*>(stub);
	ActiveAreaImplementation::_setStub(stub);
}

DistributedObjectStub* MissionReconActiveAreaImplementation::_getStub() {
	return _this.get();
}

MissionReconActiveAreaImplementation::operator const MissionReconActiveArea*() {
	return _this.get();
}

void MissionReconActiveAreaImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void MissionReconActiveAreaImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void MissionReconActiveAreaImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void MissionReconActiveAreaImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void MissionReconActiveAreaImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void MissionReconActiveAreaImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void MissionReconActiveAreaImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void MissionReconActiveAreaImplementation::_serializationHelperMethod() {
	ActiveAreaImplementation::_serializationHelperMethod();

	_setClassName("MissionReconActiveArea");

}

void MissionReconActiveAreaImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(MissionReconActiveAreaImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool MissionReconActiveAreaImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ActiveAreaImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xbc7e36f0: //MissionReconActiveArea.missionObjective
		TypeInfo<ManagedWeakReference<ReconMissionObjective* > >::parseFromBinaryStream(&missionObjective, stream);
		return true;

	case 0xe082c35d: //MissionReconActiveArea.completeTask
		TypeInfo<Reference<CompleteMissionAfterCertainTimeTask* > >::parseFromBinaryStream(&completeTask, stream);
		return true;

	}

	return false;
}

void MissionReconActiveAreaImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = MissionReconActiveAreaImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int MissionReconActiveAreaImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ActiveAreaImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xbc7e36f0; //MissionReconActiveArea.missionObjective
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<ReconMissionObjective* > >::toBinaryStream(&missionObjective, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xe082c35d; //MissionReconActiveArea.completeTask
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Reference<CompleteMissionAfterCertainTimeTask* > >::toBinaryStream(&completeTask, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 2;
}

MissionReconActiveAreaImplementation::MissionReconActiveAreaImplementation() {
	_initializeImplementation();
	// server/zone/objects/area/MissionReconActiveArea.idl():  		missionObjective = null;
	missionObjective = NULL;
	// server/zone/objects/area/MissionReconActiveArea.idl():  		completeTask = null;
	completeTask = NULL;
	// server/zone/objects/area/MissionReconActiveArea.idl():  		Logger.setLoggingName("MissionReconActiveArea");
	Logger::setLoggingName("MissionReconActiveArea");
}

void MissionReconActiveAreaImplementation::notifyEnter(SceneObject* player) {
	// server/zone/objects/area/MissionReconActiveArea.idl():  		Logger.info("notifyEnter mission recon");
	Logger::info("notifyEnter mission recon");
	// server/zone/objects/area/MissionReconActiveArea.idl():  		}
	if (!player->isPlayerCreature()){
	// server/zone/objects/area/MissionReconActiveArea.idl():  			return;
	return;
}

	else {
	// server/zone/objects/area/MissionReconActiveArea.idl():  			ReconMissionObjective strongReference = missionObjective;
	ManagedReference<ReconMissionObjective* > strongReference = missionObjective;
	// server/zone/objects/area/MissionReconActiveArea.idl():  			}
	if (strongReference != NULL){
	// server/zone/objects/area/MissionReconActiveArea.idl():  				CreatureObject missionOwner = strongReference.getPlayerOwner();
	ManagedReference<CreatureObject* > missionOwner = strongReference->getPlayerOwner();
	// server/zone/objects/area/MissionReconActiveArea.idl():  			}
	if (dynamic_cast<CreatureObject*>(player) == missionOwner){
	// server/zone/objects/area/MissionReconActiveArea.idl():  					if 
	if (completeTask == NULL){
	Reference<CompleteMissionAfterCertainTimeTask*> _ref0;
	// server/zone/objects/area/MissionReconActiveArea.idl():  						completeTask = new CompleteMissionAfterCertainTimeTask(strongReference);
	completeTask = _ref0 = new CompleteMissionAfterCertainTimeTask(strongReference);
}
	// server/zone/objects/area/MissionReconActiveArea.idl():  				}
	if (!completeTask->isScheduled()){
	// server/zone/objects/area/MissionReconActiveArea.idl():  						missionOwner.sendSystemMessage("Reconnaisance target reached. Stay at the target to do a full inspection.");
	missionOwner->sendSystemMessage("Reconnaisance target reached. Stay at the target to do a full inspection.");
	// server/zone/objects/area/MissionReconActiveArea.idl():  						completeTask.schedule(30 * 1000);
	completeTask->schedule(30 * 1000);
}
}
}

	else {
	// server/zone/objects/area/MissionReconActiveArea.idl():  				super.destroyObjectFromWorld(false);
	ActiveAreaImplementation::destroyObjectFromWorld(false);
	// server/zone/objects/area/MissionReconActiveArea.idl():  			}
	if (ActiveAreaImplementation::isPersistent()){
	// server/zone/objects/area/MissionReconActiveArea.idl():  					super.destroyObjectFromDatabase(true);
	ActiveAreaImplementation::destroyObjectFromDatabase(true);
}
}
}
}

void MissionReconActiveAreaImplementation::notifyExit(SceneObject* player) {
	// server/zone/objects/area/MissionReconActiveArea.idl():  		Logger.info("notifyExit mission recon");
	Logger::info("notifyExit mission recon");
	// server/zone/objects/area/MissionReconActiveArea.idl():  		}
	if (!player->isPlayerCreature()){
	// server/zone/objects/area/MissionReconActiveArea.idl():  			return;
	return;
}

	else {
	// server/zone/objects/area/MissionReconActiveArea.idl():  			ReconMissionObjective strongReference = missionObjective;
	ManagedReference<ReconMissionObjective* > strongReference = missionObjective;
	// server/zone/objects/area/MissionReconActiveArea.idl():  			}
	if (strongReference != NULL){
	// server/zone/objects/area/MissionReconActiveArea.idl():  				CreatureObject missionOwner = strongReference.getPlayerOwner();
	ManagedReference<CreatureObject* > missionOwner = strongReference->getPlayerOwner();
	// server/zone/objects/area/MissionReconActiveArea.idl():  			}
	if (dynamic_cast<CreatureObject*>(player) == missionOwner){
	// server/zone/objects/area/MissionReconActiveArea.idl():  				}
	if (completeTask != NULL){
	// server/zone/objects/area/MissionReconActiveArea.idl():  						missionOwner.sendSystemMessage("Reconnaissance aborted.");
	missionOwner->sendSystemMessage("Reconnaissance aborted.");
	// server/zone/objects/area/MissionReconActiveArea.idl():  						completeTask.cancel();
	completeTask->cancel();
}
}
}

	else {
	// server/zone/objects/area/MissionReconActiveArea.idl():  				super.destroyObjectFromWorld(false);
	ActiveAreaImplementation::destroyObjectFromWorld(false);
	// server/zone/objects/area/MissionReconActiveArea.idl():  			}
	if (ActiveAreaImplementation::isPersistent()){
	// server/zone/objects/area/MissionReconActiveArea.idl():  					super.destroyObjectFromDatabase(true);
	ActiveAreaImplementation::destroyObjectFromDatabase(true);
}
}
}
}

void MissionReconActiveAreaImplementation::setMissionObjective(ReconMissionObjective* mission) {
	// server/zone/objects/area/MissionReconActiveArea.idl():  		missionObjective = mission;
	missionObjective = mission;
}

/*
 *	MissionReconActiveAreaAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


MissionReconActiveAreaAdapter::MissionReconActiveAreaAdapter(MissionReconActiveArea* obj) : ActiveAreaAdapter(obj) {
}

void MissionReconActiveAreaAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_NOTIFYENTER__SCENEOBJECT_:
		{
			SceneObject* player = static_cast<SceneObject*>(inv->getObjectParameter());
			
			notifyEnter(player);
			
		}
		break;
	case RPC_NOTIFYEXIT__SCENEOBJECT_:
		{
			SceneObject* player = static_cast<SceneObject*>(inv->getObjectParameter());
			
			notifyExit(player);
			
		}
		break;
	case RPC_SETMISSIONOBJECTIVE__RECONMISSIONOBJECTIVE_:
		{
			ReconMissionObjective* mission = static_cast<ReconMissionObjective*>(inv->getObjectParameter());
			
			setMissionObjective(mission);
			
		}
		break;
	default:
		ActiveAreaAdapter::invokeMethod(methid, inv);
	}
}

void MissionReconActiveAreaAdapter::notifyEnter(SceneObject* player) {
	(static_cast<MissionReconActiveArea*>(stub))->notifyEnter(player);
}

void MissionReconActiveAreaAdapter::notifyExit(SceneObject* player) {
	(static_cast<MissionReconActiveArea*>(stub))->notifyExit(player);
}

void MissionReconActiveAreaAdapter::setMissionObjective(ReconMissionObjective* mission) {
	(static_cast<MissionReconActiveArea*>(stub))->setMissionObjective(mission);
}

/*
 *	MissionReconActiveAreaHelper
 */

MissionReconActiveAreaHelper* MissionReconActiveAreaHelper::staticInitializer = MissionReconActiveAreaHelper::instance();

MissionReconActiveAreaHelper::MissionReconActiveAreaHelper() {
	className = "MissionReconActiveArea";

	Core::getObjectBroker()->registerClass(className, this);
}

void MissionReconActiveAreaHelper::finalizeHelper() {
	MissionReconActiveAreaHelper::finalize();
}

DistributedObject* MissionReconActiveAreaHelper::instantiateObject() {
	return new MissionReconActiveArea(DummyConstructorParameter::instance());
}

DistributedObjectServant* MissionReconActiveAreaHelper::instantiateServant() {
	return new MissionReconActiveAreaImplementation();
}

DistributedObjectAdapter* MissionReconActiveAreaHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new MissionReconActiveAreaAdapter(static_cast<MissionReconActiveArea*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

