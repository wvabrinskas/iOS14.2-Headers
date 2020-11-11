/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MCDeviceCapabilities : NSObject {

	BOOL _supportsBlockLevelEncryption;
	BOOL _supportsFileLevelEncryption;

}

@property (nonatomic,readonly) BOOL supportsBlockLevelEncryption;              //@synthesize supportsBlockLevelEncryption=_supportsBlockLevelEncryption - In the implementation block
@property (nonatomic,readonly) BOOL supportsFileLevelEncryption;               //@synthesize supportsFileLevelEncryption=_supportsFileLevelEncryption - In the implementation block
+(id)currentDevice;
-(id)init;
-(BOOL)_mediaDiskIsEncrypted;
-(BOOL)validateCapabilitiesRequiredByRestrictions:(id)arg1 localizedIncompatibilityMessage:(id)arg2 outError:(id*)arg3 ;
-(BOOL)supportsBlockLevelEncryption;
-(BOOL)supportsFileLevelEncryption;
@end
