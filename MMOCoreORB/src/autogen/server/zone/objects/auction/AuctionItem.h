/*
 *	autogen/server/zone/objects/auction/AuctionItem.h generated by engine3 IDL compiler 0.60
 */

#ifndef AUCTIONITEM_H_
#define AUCTIONITEM_H_

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

#include "server/zone/objects/scene/variables/StringId.h"

#include "engine/core/ManagedObject.h"

namespace server {
namespace zone {
namespace objects {
namespace auction {

class AuctionItem : public ManagedObject {
public:
	static const int OPTION_PREMIUM = 0x400;

	static const int OPTION_WITHDRAW = 0x800;

	static const int FORSALE = 1;

	static const int SOLD = 2;

	static const int EXPIRED = 4;

	static const int OFFERED = 5;

	static const int RETRIEVED = 6;

	AuctionItem(unsigned long long objectid);

	/**
	 * Compares object ids of this object with obj
	 * @pre { this object is locked, obj is not null }
	 * @post {this object is locked }
	 * @param obj SceneObject that will be compared to
	 * @return returns 1 if this < obj, -1 if this > obj and 0 if this == obj
	 */
	int compareTo(AuctionItem* obj);

	void notifyLoadFromDatabase();

	void setVendorID(unsigned long long val);

	void setItemName(const String& name);

	void setItemDescription(const String& descr);

	void setPrice(int newPrice);

	void setProxy(int newProxy);

	void setAuctionedItemObjectID(unsigned long long objectID);

	void setItemType(int type);

	void setOwnerID(unsigned long long ownerObjectID);

	void setOfferToID(unsigned long long vendorOwnerID);

	void setBidderName(const String& name);

	void setOwnerName(const String& name);

	void setAuction(bool isAuction);

	void setAuctionPremium();

	void clearAuctionWithdraw();

	void setOnBazaar(bool val);

	void setExpireTime(int time);

	void setBuyerID(unsigned long long id);

	void setStatus(int value);

	bool isOnBazaar() const;

	bool isAuction() const;

	int getStatus() const;

	unsigned long long getVendorID() const;

	unsigned long long getAuctionedItemObjectID() const;

	unsigned long long getOwnerID() const;

	unsigned long long getOfferToID() const;

	void setVendorUID(const String& uid);

	const String getVendorUID() const;

	String getOwnerName() const;

	String getItemName() const;

	int getExpireTime() const;

	int getPrice() const;

	int getProxy() const;

	int getItemType() const;

	unsigned long long getBuyerID() const;

	String getBidderName() const;

	String getItemDescription() const;

	int getAuctionOptions() const;

	bool isPremiumAuction() const;

	bool isOwner(SceneObject* player) const;

	bool isAuctionObject() const;

	void setSize(int s);

	int getSize() const;

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	AuctionItem(DummyConstructorParameter* param);

	virtual ~AuctionItem();

	friend class AuctionItemHelper;
};

} // namespace auction
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::auction;

namespace server {
namespace zone {
namespace objects {
namespace auction {

class AuctionItemImplementation : public ManagedObjectImplementation {
protected:
	unsigned long long vendorID;

	unsigned long long auctionedItemObjectID;

	int itemType;

	int size;

	unsigned long long ownerID;

	String ownerName;

	String bidderName;

	unsigned long long offerToID;

	String vuid;

	String itemName;

	String itemDescription;

	int price;

	int proxyBid;

	bool auction;

	int status;

	bool onBazaar;

	unsigned long long buyerID;

	unsigned int expireTime;

	bool updated;

	int auctionOptions;

public:
	static const int OPTION_PREMIUM = 0x400;

	static const int OPTION_WITHDRAW = 0x800;

	static const int FORSALE = 1;

	static const int SOLD = 2;

	static const int EXPIRED = 4;

	static const int OFFERED = 5;

	static const int RETRIEVED = 6;

	AuctionItemImplementation(unsigned long long objectid);

	AuctionItemImplementation(DummyConstructorParameter* param);

	/**
	 * Compares object ids of this object with obj
	 * @pre { this object is locked, obj is not null }
	 * @post {this object is locked }
	 * @param obj SceneObject that will be compared to
	 * @return returns 1 if this < obj, -1 if this > obj and 0 if this == obj
	 */
	int compareTo(AuctionItem* obj);

	void notifyLoadFromDatabase();

	void setVendorID(unsigned long long val);

	void setItemName(const String& name);

	void setItemDescription(const String& descr);

	void setPrice(int newPrice);

	void setProxy(int newProxy);

	void setAuctionedItemObjectID(unsigned long long objectID);

	void setItemType(int type);

	void setOwnerID(unsigned long long ownerObjectID);

	void setOfferToID(unsigned long long vendorOwnerID);

	void setBidderName(const String& name);

	void setOwnerName(const String& name);

	void setAuction(bool isAuction);

	void setAuctionPremium();

	void clearAuctionWithdraw();

	void setOnBazaar(bool val);

	void setExpireTime(int time);

	void setBuyerID(unsigned long long id);

	void setStatus(int value);

	bool isOnBazaar() const;

	bool isAuction() const;

	int getStatus() const;

	unsigned long long getVendorID() const;

	unsigned long long getAuctionedItemObjectID() const;

	unsigned long long getOwnerID() const;

	unsigned long long getOfferToID() const;

	void setVendorUID(const String& uid);

	const String getVendorUID() const;

	String getOwnerName() const;

	String getItemName() const;

	int getExpireTime() const;

	int getPrice() const;

	int getProxy() const;

	int getItemType() const;

	unsigned long long getBuyerID() const;

	String getBidderName() const;

	String getItemDescription() const;

	int getAuctionOptions() const;

	bool isPremiumAuction() const;

	bool isOwner(SceneObject* player) const;

	bool isAuctionObject() const;

	void setSize(int s);

	int getSize() const;

	WeakReference<AuctionItem*> _this;

	operator const AuctionItem*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~AuctionItemImplementation();

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

	friend class AuctionItem;
};

class AuctionItemAdapter : public ManagedObjectAdapter {
public:
	AuctionItemAdapter(AuctionItem* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int compareTo(AuctionItem* obj);

	void notifyLoadFromDatabase();

	void setVendorID(unsigned long long val);

	void setItemName(const String& name);

	void setItemDescription(const String& descr);

	void setPrice(int newPrice);

	void setProxy(int newProxy);

	void setAuctionedItemObjectID(unsigned long long objectID);

	void setItemType(int type);

	void setOwnerID(unsigned long long ownerObjectID);

	void setOfferToID(unsigned long long vendorOwnerID);

	void setBidderName(const String& name);

	void setOwnerName(const String& name);

	void setAuction(bool isAuction);

	void setAuctionPremium();

	void clearAuctionWithdraw();

	void setOnBazaar(bool val);

	void setExpireTime(int time);

	void setBuyerID(unsigned long long id);

	void setStatus(int value);

	bool isOnBazaar() const;

	bool isAuction() const;

	int getStatus() const;

	unsigned long long getVendorID() const;

	unsigned long long getAuctionedItemObjectID() const;

	unsigned long long getOwnerID() const;

	unsigned long long getOfferToID() const;

	void setVendorUID(const String& uid);

	const String getVendorUID() const;

	String getOwnerName() const;

	String getItemName() const;

	int getExpireTime() const;

	int getPrice() const;

	int getProxy() const;

	int getItemType() const;

	unsigned long long getBuyerID() const;

	String getBidderName() const;

	String getItemDescription() const;

	int getAuctionOptions() const;

	bool isPremiumAuction() const;

	bool isOwner(SceneObject* player) const;

	bool isAuctionObject() const;

	void setSize(int s);

	int getSize() const;

};

class AuctionItemHelper : public DistributedObjectClassHelper, public Singleton<AuctionItemHelper> {
	static AuctionItemHelper* staticInitializer;

public:
	AuctionItemHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<AuctionItemHelper>;
};

} // namespace auction
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::auction;

#endif /*AUCTIONITEM_H_*/
