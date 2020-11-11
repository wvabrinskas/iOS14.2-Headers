/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol HMDBackingStoreObjectProtocol;
@class NSMutableDictionary, NSUUID, NSString, HMFVersion, CKRecord, NSSet;

@interface HMDBackingStoreModelObject : HMFObject <HMFLogging, NSCopying> {

	NSMutableDictionary* _reserved;
	BOOL _bsoDataVersionOverride;
	NSUUID* _uuid;
	NSUUID* _parentUUID;
	id<HMDBackingStoreObjectProtocol> _bsoDelegate;
	NSString* _bsoType;
	unsigned long long _bsoLogRowID;
	HMFVersion* _bsoDataVersion;
	unsigned long long _objectChangeType;
	CKRecord* _bsoRecord;

}

@property (nonatomic,retain) NSUUID * uuid;                                                              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSUUID * parentUUID;                                                        //@synthesize parentUUID=_parentUUID - In the implementation block
@property (nonatomic,retain) NSString * bsoType;                                                         //@synthesize bsoType=_bsoType - In the implementation block
@property (nonatomic,retain) CKRecord * bsoRecord;                                                       //@synthesize bsoRecord=_bsoRecord - In the implementation block
@property (assign) BOOL bsoDataVersionOverride;                                                          //@synthesize bsoDataVersionOverride=_bsoDataVersionOverride - In the implementation block
@property (assign,nonatomic) unsigned long long objectChangeType;                                        //@synthesize objectChangeType=_objectChangeType - In the implementation block
@property (nonatomic,readonly) NSSet * dependentUUIDs; 
@property (assign,nonatomic,__weak) id<HMDBackingStoreObjectProtocol> bsoDelegate;                       //@synthesize bsoDelegate=_bsoDelegate - In the implementation block
@property (readonly) unsigned long long bsoLogRowID;                                                     //@synthesize bsoLogRowID=_bsoLogRowID - In the implementation block
@property (nonatomic,readonly) HMFVersion * bsoDataVersion;                                              //@synthesize bsoDataVersion=_bsoDataVersion - In the implementation block
@property (getter=isReadOnly,nonatomic,readonly) BOOL isReadOnly; 
@property (getter=isGenericRepresentation,nonatomic,readonly) BOOL isGenericRepresentation; 
@property (getter=isReplayable,nonatomic,readonly) BOOL replayable; 
@property (nonatomic,retain) HMFVersion * bsoIgnoredBefore; 
@property (nonatomic,readonly) BOOL bsoIgnoreModel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(id)logCategory;
+(id)properties;
+(id)schemaHashRoot;
+(id)objectFromData:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)objectFromData:(id)arg1 encoding:(unsigned long long)arg2 record:(id)arg3 error:(id*)arg4 ;
+(Class)backedObjectClass;
+(id)objectFromData:(id)arg1 encoding:(unsigned long long)arg2 rowID:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)objectFromDictionaryData:(id)arg1 type:(id)arg2 error:(id*)arg3 ;
+(Class)genericRepresentation;
+(id)readonlyBefore;
+(id)formatValue:(id)arg1 ;
+(id)bsoSchemaHash;
+(id)objectFromDictionaryData:(id)arg1 error:(id*)arg2 ;
+(id)objectFromCloud:(id)arg1 error:(id*)arg2 ;
-(id)merge:(id)arg1 ;
-(void)setParentUUID:(NSUUID *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(BOOL)isReadOnly;
-(unsigned long long)hash;
-(NSString *)description;
-(NSUUID *)parentUUID;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)uuid;
-(id)initWithUUID:(id)arg1 ;
-(BOOL)isReplayable;
-(NSString *)bsoType;
-(id)debugString:(BOOL)arg1 ;
-(id)encodeWithError:(id*)arg1 ;
-(id)logIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)setProperties;
-(BOOL)_validateType:(id)arg1 error:(id*)arg2 ;
-(id)validateType:(id)arg1 path:(id)arg2 ;
-(void)dumpDebug:(id)arg1 ;
-(void)dumpDebug;
-(id)initWithObjectChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3 ;
-(NSSet *)dependentUUIDs;
-(void)setObjectChangeType:(unsigned long long)arg1 ;
-(BOOL)diff:(id)arg1 differingFields:(id*)arg2 ;
-(unsigned long long)bsoLogRowID;
-(unsigned long long)objectChangeType;
-(id)initWithUUID:(id)arg1 parentUUID:(id)arg2 ;
-(id)backedObjectWithParent:(id)arg1 error:(id*)arg2 ;
-(void)setPropertyIfNotNil:(id)arg1 named:(id)arg2 ;
-(BOOL)propertyWasSet:(id)arg1 ;
-(id)initWithVersion:(id)arg1 changeType:(unsigned long long)arg2 uuid:(id)arg3 parentUUID:(id)arg4 ;
-(id)encodeWithEncoding:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)clearVersionOverride;
-(HMFVersion *)bsoIgnoredBefore;
-(id)prepareFor:(unsigned long long)arg1 ;
-(HMFVersion *)bsoDataVersion;
-(id)encodeFor:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)encodeWithEncoding:(unsigned long long)arg1 for:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)encodeAsNSDictionaryFor:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)isGenericRepresentation;
-(BOOL)propertyIsAvailable:(id)arg1 ;
-(BOOL)bsoDataVersionOverride;
-(BOOL)bsoIgnoreModel;
-(BOOL)propertyIsReadOnly:(id)arg1 ;
-(id)merge:(id)arg1 from:(unsigned long long)arg2 ;
-(id)typeNameForDebug;
-(void)setBsoDataVersionOverride:(BOOL)arg1 ;
-(void)setBsoIgnoredBefore:(HMFVersion *)arg1 ;
-(id)encodeForCloud:(id*)arg1 ;
-(void)setParentUUIDIfNotNil:(id)arg1 ;
-(BOOL)validForStorage;
-(BOOL)merge:(id)arg1 error:(id*)arg2 ;
-(id)defaultValueForPropertyNamed:(id)arg1 isSet:(BOOL*)arg2 ;
-(id<HMDBackingStoreObjectProtocol>)bsoDelegate;
-(void)setBsoDelegate:(id<HMDBackingStoreObjectProtocol>)arg1 ;
-(void)setBsoType:(NSString *)arg1 ;
-(CKRecord *)bsoRecord;
-(void)setBsoRecord:(CKRecord *)arg1 ;
@end
