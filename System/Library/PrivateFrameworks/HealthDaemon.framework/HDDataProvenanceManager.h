/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HDDiagnosticObject.h>

@class HDProfile, NSString, NSLock, NSNumber, HDContributorReference, HDDatabaseValueCache;

@interface HDDataProvenanceManager : NSObject <HDDiagnosticObject> {

	HDProfile* _profile;
	NSString* _localSourceVersion;
	NSLock* _propertyLock;
	NSNumber* _propertyLock_localSourceID;
	NSNumber* _propertyLock_localDeviceID;
	NSNumber* _propertyLock_deviceNoneID;
	HDContributorReference* _propertyLock_noneContributorReference;
	HDContributorReference* _propertyLock_primaryUserContributorReference;
	AB _defaultsLoaded;
	HDDatabaseValueCache* _persistentIDsByProvenanceKey;
	HDDatabaseValueCache* _originProvenanceByPersistentID;
	NSString* _localSystemBuild;
	NSString* _localProductType;

}

@property (nonatomic,retain) HDDatabaseValueCache * persistentIDsByProvenanceKey;                          //@synthesize persistentIDsByProvenanceKey=_persistentIDsByProvenanceKey - In the implementation block
@property (nonatomic,retain) HDDatabaseValueCache * originProvenanceByPersistentID;                        //@synthesize originProvenanceByPersistentID=_originProvenanceByPersistentID - In the implementation block
@property (nonatomic,copy) NSString * localSystemBuild;                                                    //@synthesize localSystemBuild=_localSystemBuild - In the implementation block
@property (nonatomic,copy) NSString * localProductType;                                                    //@synthesize localProductType=_localProductType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * localSourceID; 
@property (nonatomic,copy,readonly) NSNumber * localDeviceID; 
@property (nonatomic,copy,readonly) NSNumber * deviceNoneID; 
@property (nonatomic,copy,readonly) HDContributorReference * noneContributorReference; 
@property (nonatomic,copy,readonly) HDContributorReference * primaryUserContributorReference; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLocalDeviceID:(NSNumber *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)setDeviceNoneID:(NSNumber *)arg1 ;
-(void)setPersistentIDsByProvenanceKey:(HDDatabaseValueCache *)arg1 ;
-(id)_localDataProvenanceWithSourceID:(id)arg1 sourceVersion:(id)arg2 deviceID:(id)arg3 contributorReference:(id)arg4 ;
-(void)setOriginProvenanceByPersistentID:(HDDatabaseValueCache *)arg1 ;
-(NSString *)localSystemBuild;
-(NSNumber *)localDeviceID;
-(HDContributorReference *)primaryUserContributorReference;
-(void)setLocalSourceID:(NSNumber *)arg1 ;
-(HDDatabaseValueCache *)persistentIDsByProvenanceKey;
-(id)_lookupOrInsertProvenance:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(NSString *)description;
-(id)_localTimeZoneName;
-(NSString *)localProductType;
-(HDDatabaseValueCache *)originProvenanceByPersistentID;
-(id)localDataProvenanceForSourceEntity:(id)arg1 version:(id)arg2 deviceEntity:(id)arg3 ;
-(id)originProvenanceForPersistentID:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)defaultLocalDataProvenance;
-(HDContributorReference *)noneContributorReference;
-(void)setLocalSystemBuild:(NSString *)arg1 ;
-(NSNumber *)deviceNoneID;
-(void)checkDefaultsLoaded;
-(NSNumber *)localSourceID;
-(id)provenanceEntityForProvenance:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(void)_loadDefaults;
-(id)provenanceEntityForProvenance:(id)arg1 error:(id*)arg2 ;
-(void)setPrimaryUserContributorReference:(HDContributorReference *)arg1 ;
-(void)setLocalProductType:(NSString *)arg1 ;
-(void)setNoneContributorReference:(HDContributorReference *)arg1 ;
-(id)diagnosticDescription;
-(id)defaultLocalDataProvenanceWithDeviceEntity:(id)arg1 ;
@end

