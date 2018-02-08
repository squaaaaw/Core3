/*
 *	autogen/server/zone/objects/player/sui/SuiBox.h generated by engine3 IDL compiler 0.60
 */

#ifndef SUIBOX_H_
#define SUIBOX_H_

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
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerObject;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

#include "server/zone/packets/ui/SuiCreatePageMessage.h"

#include "server/zone/objects/player/sui/SuiWindowType.h"

#include "server/zone/objects/player/sui/SuiCallback.h"

#include "engine/service/proto/BaseMessage.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {

class SuiBox : public ManagedObject {
public:
	static const int INPUTBOX = 0;

	static const int LISTBOX = 1;

	static const int MESSAGEBOX = 2;

	static const int TRANSFERBOX = 3;

	static const int COLORPICKER = 4;

	static const int BANKTRANSFERBOX = 5;

	static const int BANKTIPCONFIRMBOX = 10;

	static const int SLICINGBOX = 20;

	static const int KEYPAD = 21;

	static const int QUESTPOPUP = 30;

	SuiBox(CreatureObject* play, unsigned int windowtype, unsigned int boxtype);

	void initialize();

	void initializeTransientMembers();

	/**
	 * Call after all Header settings have been added with addHeader()
	 * Generates the UI-Header of the packet, SuiCreatePageMessage, based on the headerSets vector.
	 * If you are reusing the SuiBox and rebuilding with different variables, make sure you reset
	 * the object with clearOptions()
	 * \sa addHeader(), clearOptions()
	 */
	void generateHeader(SuiCreatePageMessage* message);

	/**
	 * Call after all Body Settings have been added with addSetting() and the header has been generated
	 * Generates the UI-Body of the packet, SuiCreatePageMessage, based on the optionSets vector.
	 * If you are reusing the SuiBox and rebuilding with different variables, make sure you
	 * reset the object with clearOptions()
	 * \sa addSetting(), clearOptions()
	 */
	void generateBody(SuiCreatePageMessage* message);

	/**
	 * Call after generating both the header and body.
	 * Footer of SuiCreatePageMessage is largely unknown. Subject to change based on research. See trac
	 * \param type Type of footer to place into packet
	 */
	void generateFooter(SuiCreatePageMessage* message, int type = 0);

	BaseMessage* generateMessage();

	/**
	 * Use to close the UI object on the client.
	 * Sends the SuiForceClosePage packet to the client.
	 */
	BaseMessage* generateCloseMessage();

	/**
	 * Use to add a UI-body option that will be included in UI generation
	 * See trac documentation of SuiCreatePageMessage for when to use
	 * Variables are concated into a string and placed in a vector (optionSets) of all the body settings
	 * for the SuiBoxImplementation object. Each string separates variables with a tilde (~) character.
	 * \param optType Type of setting to add. See packet docs for info
	 * \param variable UI Classpath in the script to access
	 * \param setting SWG UI setting to modify
	 * \param value The value of the setting being modified
	 */
	void addSetting(const String& optType, const String& variable, const String& setting, const String& value);

	/**
	 * Use to add a UI-Header that will eventually be included in the UI generation.
	 * See trac documentation of SuiCreatePageMessage for when to use
	 * Variables are concated into a string and placed in a vector (headerSets) of all the header settings
	 * for the SuiBoxImplementation object. Each string separates variables with a tilde (~) character.
	 * \param variable UI Variable to declare header for
	 * \param type Data type of the UI variable being declared
	 */
	void addHeader(const String& variable, const String& type);

	void clearOptions();

	int compareTo(SuiBox* obj);

	bool hasGeneratedMessage();

	void setPromptTitle(const String& name);

	void setPromptText(const String& name);

	String getPromptTitle();

	void setHandlerText(const String& text);

	void setWindowType(unsigned int type);

	void setBoxType(int type);

	bool isInputBox();

	bool isListBox();

	bool isFireworkDelayBox();

	bool isMessageBox();

	bool isTransferBox();

	bool isBankTransferBox();

	bool isSlicingBox();

	bool isCharacterBuilderBox();

	bool isColorPicker();

	void setCancelButton(bool value, const String& cancelText);

	void setOtherButton(bool value, const String& backText);

	void setOkButton(bool value, const String& okText);

	void setForceCloseDistance(float dist);

	void setForceCloseDisabled();

	ManagedWeakReference<CreatureObject* > getPlayer();

	unsigned int getBoxID();

	int getWindowType();

	ManagedWeakReference<SceneObject* > getUsingObject();

	void setUsingObject(SceneObject* object);

	void setCallback(SuiCallback* callback);

	SuiCallback* getCallback();

	bool isSuiBoxPage();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SuiBox(DummyConstructorParameter* param);

	virtual ~SuiBox();

	friend class SuiBoxHelper;
};

} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {

class SuiBoxImplementation : public ManagedObjectImplementation, public Logger {
protected:
	ManagedWeakReference<CreatureObject* > player;

	Reference<SuiCallback* > suiCallback;

	unsigned int boxID;

	ManagedWeakReference<SceneObject* > usingObject;

	String handlerStr;

	String cancelButtonText;

	bool cancelButton;

	String okButtonText;

	bool okButton;

	String otherButtonText;

	bool otherButton;

	String promptTitle;

	String promptText;

	int boxType;

	unsigned int windowType;

	float forceCloseDistance;

	Vector<String> headerSets;

	Vector<String> optionSets;

	int hdrOptCount;

	bool hasGenerated;

public:
	static const int INPUTBOX = 0;

	static const int LISTBOX = 1;

	static const int MESSAGEBOX = 2;

	static const int TRANSFERBOX = 3;

	static const int COLORPICKER = 4;

	static const int BANKTRANSFERBOX = 5;

	static const int BANKTIPCONFIRMBOX = 10;

	static const int SLICINGBOX = 20;

	static const int KEYPAD = 21;

	static const int QUESTPOPUP = 30;

	SuiBoxImplementation(CreatureObject* play, unsigned int windowtype, unsigned int boxtype);

	SuiBoxImplementation(DummyConstructorParameter* param);

	void initialize();

	void finalize();

	void initializeTransientMembers();

	/**
	 * Call after all Header settings have been added with addHeader()
	 * Generates the UI-Header of the packet, SuiCreatePageMessage, based on the headerSets vector.
	 * If you are reusing the SuiBox and rebuilding with different variables, make sure you reset
	 * the object with clearOptions()
	 * \sa addHeader(), clearOptions()
	 */
	void generateHeader(SuiCreatePageMessage* message);

	/**
	 * Call after all Body Settings have been added with addSetting() and the header has been generated
	 * Generates the UI-Body of the packet, SuiCreatePageMessage, based on the optionSets vector.
	 * If you are reusing the SuiBox and rebuilding with different variables, make sure you
	 * reset the object with clearOptions()
	 * \sa addSetting(), clearOptions()
	 */
	void generateBody(SuiCreatePageMessage* message);

	/**
	 * Call after generating both the header and body.
	 * Footer of SuiCreatePageMessage is largely unknown. Subject to change based on research. See trac
	 * \param type Type of footer to place into packet
	 */
	void generateFooter(SuiCreatePageMessage* message, int type = 0);

	virtual BaseMessage* generateMessage();

	/**
	 * Use to close the UI object on the client.
	 * Sends the SuiForceClosePage packet to the client.
	 */
	BaseMessage* generateCloseMessage();

	/**
	 * Use to add a UI-body option that will be included in UI generation
	 * See trac documentation of SuiCreatePageMessage for when to use
	 * Variables are concated into a string and placed in a vector (optionSets) of all the body settings
	 * for the SuiBoxImplementation object. Each string separates variables with a tilde (~) character.
	 * \param optType Type of setting to add. See packet docs for info
	 * \param variable UI Classpath in the script to access
	 * \param setting SWG UI setting to modify
	 * \param value The value of the setting being modified
	 */
	void addSetting(const String& optType, const String& variable, const String& setting, const String& value);

	/**
	 * Use to add a UI-Header that will eventually be included in the UI generation.
	 * See trac documentation of SuiCreatePageMessage for when to use
	 * Variables are concated into a string and placed in a vector (headerSets) of all the header settings
	 * for the SuiBoxImplementation object. Each string separates variables with a tilde (~) character.
	 * \param variable UI Variable to declare header for
	 * \param type Data type of the UI variable being declared
	 */
	void addHeader(const String& variable, const String& type);

	void clearOptions();

	int compareTo(SuiBox* obj);

	bool hasGeneratedMessage();

	void setPromptTitle(const String& name);

	void setPromptText(const String& name);

	String getPromptTitle();

	void setHandlerText(const String& text);

	void setWindowType(unsigned int type);

	void setBoxType(int type);

	virtual bool isInputBox();

	virtual bool isListBox();

	virtual bool isFireworkDelayBox();

	virtual bool isMessageBox();

	virtual bool isTransferBox();

	virtual bool isBankTransferBox();

	virtual bool isSlicingBox();

	virtual bool isCharacterBuilderBox();

	virtual bool isColorPicker();

	void setCancelButton(bool value, const String& cancelText);

	void setOtherButton(bool value, const String& backText);

	void setOkButton(bool value, const String& okText);

	void setForceCloseDistance(float dist);

	void setForceCloseDisabled();

	ManagedWeakReference<CreatureObject* > getPlayer();

	unsigned int getBoxID();

	int getWindowType();

	ManagedWeakReference<SceneObject* > getUsingObject();

	void setUsingObject(SceneObject* object);

	void setCallback(SuiCallback* callback);

	SuiCallback* getCallback();

	virtual bool isSuiBoxPage();

	WeakReference<SuiBox*> _this;

	operator const SuiBox*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~SuiBoxImplementation();

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

	friend class SuiBox;
};

class SuiBoxAdapter : public ManagedObjectAdapter {
public:
	SuiBoxAdapter(SuiBox* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initialize();

	void finalize();

	void initializeTransientMembers();

	void generateHeader(SuiCreatePageMessage* message);

	void generateBody(SuiCreatePageMessage* message);

	void generateFooter(SuiCreatePageMessage* message, int type);

	BaseMessage* generateMessage();

	BaseMessage* generateCloseMessage();

	void addSetting(const String& optType, const String& variable, const String& setting, const String& value);

	void addHeader(const String& variable, const String& type);

	void clearOptions();

	int compareTo(SuiBox* obj);

	bool hasGeneratedMessage();

	void setPromptTitle(const String& name);

	void setPromptText(const String& name);

	String getPromptTitle();

	void setHandlerText(const String& text);

	void setWindowType(unsigned int type);

	void setBoxType(int type);

	bool isInputBox();

	bool isListBox();

	bool isFireworkDelayBox();

	bool isMessageBox();

	bool isTransferBox();

	bool isBankTransferBox();

	bool isSlicingBox();

	bool isCharacterBuilderBox();

	bool isColorPicker();

	void setCancelButton(bool value, const String& cancelText);

	void setOtherButton(bool value, const String& backText);

	void setOkButton(bool value, const String& okText);

	void setForceCloseDistance(float dist);

	void setForceCloseDisabled();

	ManagedWeakReference<CreatureObject* > getPlayer();

	unsigned int getBoxID();

	int getWindowType();

	ManagedWeakReference<SceneObject* > getUsingObject();

	void setUsingObject(SceneObject* object);

	bool isSuiBoxPage();

};

class SuiBoxHelper : public DistributedObjectClassHelper, public Singleton<SuiBoxHelper> {
	static SuiBoxHelper* staticInitializer;

public:
	SuiBoxHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SuiBoxHelper>;
};

} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui;

#endif /*SUIBOX_H_*/
