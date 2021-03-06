/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSManagedObjectID, NSArray;

@interface STUIUser : NSObject <NSCopying> {

	BOOL _screenTimeEnabled;
	BOOL _managed;
	BOOL _webUsageEnabled;
	BOOL _remoteUser;
	BOOL _hasAllowances;
	BOOL _hasDeviceWithoutUsageReported;
	unsigned long long _source;
	NSString* _name;
	NSNumber* _dsid;
	NSString* _altDSID;
	unsigned long long _type;
	NSString* _passcode;
	NSString* _recoveryAltDSID;
	NSManagedObjectID* _userObjectID;
	NSArray* _devices;

}

@property (nonatomic,copy) NSManagedObjectID * userObjectID;                                 //@synthesize userObjectID=_userObjectID - In the implementation block
@property (nonatomic,copy) NSArray * devices;                                                //@synthesize devices=_devices - In the implementation block
@property (assign,nonatomic) unsigned long long source;                                      //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSNumber * dsid;                                                  //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                                               //@synthesize altDSID=_altDSID - In the implementation block
@property (assign,getter=isScreenTimeEnabled,nonatomic) BOOL screenTimeEnabled;              //@synthesize screenTimeEnabled=_screenTimeEnabled - In the implementation block
@property (assign,getter=isManaged,nonatomic) BOOL managed;                                  //@synthesize managed=_managed - In the implementation block
@property (assign,getter=isWebUsageEnabled,nonatomic) BOOL webUsageEnabled;                  //@synthesize webUsageEnabled=_webUsageEnabled - In the implementation block
@property (assign,getter=isRemoteUser,nonatomic) BOOL remoteUser;                            //@synthesize remoteUser=_remoteUser - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasAllowances;                                             //@synthesize hasAllowances=_hasAllowances - In the implementation block
@property (nonatomic,readonly) BOOL hasPasscode; 
@property (nonatomic,copy) NSString * passcode;                                              //@synthesize passcode=_passcode - In the implementation block
@property (nonatomic,copy) NSString * recoveryAltDSID;                                       //@synthesize recoveryAltDSID=_recoveryAltDSID - In the implementation block
@property (nonatomic,readonly) BOOL needsRecoveryAppleID; 
@property (nonatomic,readonly) BOOL canRecoveryAuthenticate; 
@property (nonatomic,copy,readonly) NSString * givenName; 
@property (nonatomic,readonly) BOOL isParent; 
@property (nonatomic,readonly) BOOL isChild; 
@property (assign) BOOL hasDeviceWithoutUsageReported;                                       //@synthesize hasDeviceWithoutUsageReported=_hasDeviceWithoutUsageReported - In the implementation block
+(id)keyPathsForValuesAffectingGivenName;
+(id)keyPathsForValuesAffectingHasPasscode;
-(BOOL)isWebUsageEnabled;
-(void)setScreenTimeEnabled:(BOOL)arg1 ;
-(BOOL)hasDeviceWithoutUsageReported;
-(void)setPasscode:(NSString *)arg1 ;
-(NSString *)passcode;
-(void)setDsid:(NSNumber *)arg1 ;
-(BOOL)isScreenTimeEnabled;
-(NSNumber *)dsid;
-(BOOL)isChild;
-(BOOL)isManaged;
-(void)setManaged:(BOOL)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(void)setWebUsageEnabled:(BOOL)arg1 ;
-(BOOL)isParent;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(NSManagedObjectID *)userObjectID;
-(void)setHasDeviceWithoutUsageReported:(BOOL)arg1 ;
-(NSString *)name;
-(BOOL)hasPasscode;
-(unsigned long long)source;
-(void)setRemoteUser:(BOOL)arg1 ;
-(void)setDevices:(NSArray *)arg1 ;
-(unsigned long long)type;
-(BOOL)isRemoteUser;
-(NSString *)recoveryAltDSID;
-(NSString *)givenName;
-(void)setUserObjectID:(NSManagedObjectID *)arg1 ;
-(BOOL)canRecoveryAuthenticate;
-(void)setRecoveryAltDSID:(NSString *)arg1 ;
-(NSArray *)devices;
-(void)setHasAllowances:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasAllowances;
-(BOOL)needsRecoveryAppleID;
-(void)setName:(NSString *)arg1 ;
@end

