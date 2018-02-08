/*
 *	autogen/server/zone/objects/draftschematic/DraftSchematic.h generated by engine3 IDL compiler 0.60
 */

#ifndef DRAFTSCHEMATIC_H_
#define DRAFTSCHEMATIC_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

#ifndef likely
#ifdef __GNUC__
#define likely(x)       __builtin_expect(!!(x), 1)
#define unlikely(x)     __builtin_expect(!!(x), 0)
#else
#define likely(x)       (x)
#define unlikely(x)     (x)
#endif
#endif
namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

#include "server/zone/packets/object/ObjectControllerMessage.h"

#include "templates/intangible/DraftSchematicObjectTemplate.h"

#include "templates/crafting/draftslot/DraftSlot.h"

#include "templates/crafting/resourceweight/ResourceWeight.h"

#include "templates/SharedObjectTemplate.h"

#include "server/zone/objects/intangible/IntangibleObject.h"

namespace server {
namespace zone {
namespace objects {
namespace draftschematic {

class DraftSchematic : public IntangibleObject {
public:
	DraftSchematic();

	/**
	 * Initializes the transient members of SceneObject, must call the inherited object method first.
	 * @pre {transient members are not initialized }
	 * @post { transient members are initialized }
	 */
	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	/**
	 * Sends the baseline messages of this object to the specified player
	 * @pre { this object is locked }
	 * @post { this object is locked, player received the baseline messages }
	 * @param player SceneObject that will receive the baselines
	 */
	void sendBaselinesTo(SceneObject* player);

	/**
	 * Sends the ingredients of this object to the specified player
	 * @pre { this object is locked }
	 * @post { this object is locked, player received the baseline messages }
	 * @param player SceneObject that will receive the ingredients
	 */
	void sendDraftSlotsTo(CreatureObject* player);

	/**
	 * Sends the resource weights of this object to the specified player
	 * @pre { this object is locked }
	 * @post { this object is locked, player received the baseline messages }
	 * @param player SceneObject that will receive the ingredients
	 */
	void sendResourceWeightsTo(CreatureObject* player);

	Reference<SceneObject* > createManufactureSchematic(SceneObject* craftingTool = NULL);

	void setGroupName(const String& name);

	String getGroupName();

	int getDraftSlotCount();

	bool isValidDraftSchematic();

	DraftSlot* getDraftSlot(int i);

	int getResourceWeightCount();

	ResourceWeight* getResourceWeight(int i);

	/**
	 * Getter for complexity
	 * \return complexity
	 */
	float getComplexity();

	/**
	 * Getter for the crafting tool tab mask
	 * \return toolTab
	 */
	unsigned int getToolTab();

	/**
	 * getter for the schematic size
	 * \return size
	 */
	float getSize();

	/**
	 * getter for xpType
	 * \return size
	 */
	String getXpType();

	/**
	 * getter for the xpAmount
	 * \return xpAmount
	 */
	int getXpAmount();

	/**
	 * getter for the isMagic
	 * \return isMagic
	 */
	bool getIsMagic();

	/**
	 * getter for assemblyMod
	 * \return assemblyMod
	 */
	String getAssemblySkill();

	/**
	 * getter for experiementationMod
	 * \return experiementationMod
	 */
	String getExperimentationSkill();

	String getCustomizationSkill();

	String getCustomName();

	unsigned int getTanoCRC();

	int getTemplateListSize();

	String getTemplate(int i);

	String getAppearance(int i);

	DraftSchematicObjectTemplate* getDraftSchematicTemplate();

	int getLabratory();

	int getFactoryCrateSize();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	DraftSchematic(DummyConstructorParameter* param);

	virtual ~DraftSchematic();

	friend class DraftSchematicHelper;
};

} // namespace draftschematic
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::draftschematic;

namespace server {
namespace zone {
namespace objects {
namespace draftschematic {

class DraftSchematicImplementation : public IntangibleObjectImplementation {
	String groupName;

	Reference<DraftSchematicObjectTemplate* > schematicTemplate;

public:
	DraftSchematicImplementation();

	DraftSchematicImplementation(DummyConstructorParameter* param);

	/**
	 * Initializes the transient members of SceneObject, must call the inherited object method first.
	 * @pre {transient members are not initialized }
	 * @post { transient members are initialized }
	 */
	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	/**
	 * Sends the baseline messages of this object to the specified player
	 * @pre { this object is locked }
	 * @post { this object is locked, player received the baseline messages }
	 * @param player SceneObject that will receive the baselines
	 */
	void sendBaselinesTo(SceneObject* player);

	/**
	 * Sends the ingredients of this object to the specified player
	 * @pre { this object is locked }
	 * @post { this object is locked, player received the baseline messages }
	 * @param player SceneObject that will receive the ingredients
	 */
	void sendDraftSlotsTo(CreatureObject* player);

private:
	void insertIngredients(ObjectControllerMessage* msg);

public:
	/**
	 * Sends the resource weights of this object to the specified player
	 * @pre { this object is locked }
	 * @post { this object is locked, player received the baseline messages }
	 * @param player SceneObject that will receive the ingredients
	 */
	void sendResourceWeightsTo(CreatureObject* player);

	Reference<SceneObject* > createManufactureSchematic(SceneObject* craftingTool = NULL);

	void setGroupName(const String& name);

	String getGroupName();

	int getDraftSlotCount();

	bool isValidDraftSchematic();

	DraftSlot* getDraftSlot(int i);

	int getResourceWeightCount();

	ResourceWeight* getResourceWeight(int i);

	/**
	 * Getter for complexity
	 * \return complexity
	 */
	float getComplexity();

	/**
	 * Getter for the crafting tool tab mask
	 * \return toolTab
	 */
	unsigned int getToolTab();

	/**
	 * getter for the schematic size
	 * \return size
	 */
	float getSize();

	/**
	 * getter for xpType
	 * \return size
	 */
	String getXpType();

	/**
	 * getter for the xpAmount
	 * \return xpAmount
	 */
	int getXpAmount();

	/**
	 * getter for the isMagic
	 * \return isMagic
	 */
	bool getIsMagic();

	/**
	 * getter for assemblyMod
	 * \return assemblyMod
	 */
	String getAssemblySkill();

	/**
	 * getter for experiementationMod
	 * \return experiementationMod
	 */
	String getExperimentationSkill();

	String getCustomizationSkill();

	String getCustomName();

	unsigned int getTanoCRC();

	int getTemplateListSize();

	String getTemplate(int i);

	String getAppearance(int i);

	DraftSchematicObjectTemplate* getDraftSchematicTemplate();

	int getLabratory();

	int getFactoryCrateSize();

	WeakReference<DraftSchematic*> _this;

	operator const DraftSchematic*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~DraftSchematicImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class DraftSchematic;
};

class DraftSchematicAdapter : public IntangibleObjectAdapter {
public:
	DraftSchematicAdapter(DraftSchematic* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	void sendDraftSlotsTo(CreatureObject* player);

	void sendResourceWeightsTo(CreatureObject* player);

	Reference<SceneObject* > createManufactureSchematic(SceneObject* craftingTool);

	void setGroupName(const String& name);

	String getGroupName();

	int getDraftSlotCount();

	bool isValidDraftSchematic();

	int getResourceWeightCount();

	float getComplexity();

	unsigned int getToolTab();

	float getSize();

	String getXpType();

	int getXpAmount();

	bool getIsMagic();

	String getAssemblySkill();

	String getExperimentationSkill();

	String getCustomizationSkill();

	String getCustomName();

	unsigned int getTanoCRC();

	int getTemplateListSize();

	String getTemplate(int i);

	String getAppearance(int i);

	int getLabratory();

	int getFactoryCrateSize();

};

class DraftSchematicHelper : public DistributedObjectClassHelper, public Singleton<DraftSchematicHelper> {
	static DraftSchematicHelper* staticInitializer;

public:
	DraftSchematicHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<DraftSchematicHelper>;
};

} // namespace draftschematic
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::draftschematic;

#endif /*DRAFTSCHEMATIC_H_*/
