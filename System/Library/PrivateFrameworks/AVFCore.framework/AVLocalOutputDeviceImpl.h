/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVOutputDeviceImpl.h>

@protocol AVOutputDeviceImplSupport;
@class NSString, NSData, NSArray, NSNumber, NSDictionary;

@interface AVLocalOutputDeviceImpl : NSObject <AVOutputDeviceImpl> {

	id<AVOutputDeviceImplSupport> _implSupportEventListener;

}

@property (__weak) id<AVOutputDeviceImplSupport> implEventListener;                                                    //@synthesize implSupportEventListener=_implSupportEventListener - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * ID; 
@property (nonatomic,readonly) long long deviceType; 
@property (nonatomic,readonly) long long deviceSubType; 
@property (nonatomic,readonly) long long clusterType; 
@property (nonatomic,readonly) long long configuredClusterSize; 
@property (nonatomic,readonly) NSString * manufacturer; 
@property (nonatomic,copy,readonly) NSString * modelID; 
@property (nonatomic,readonly) NSString * serialNumber; 
@property (nonatomic,readonly) NSString * firmwareVersion; 
@property (nonatomic,copy,readonly) NSData * identifyingMACAddress; 
@property (nonatomic,readonly) NSArray * clusteredDeviceDescriptions; 
@property (nonatomic,readonly) BOOL isClusterLeader; 
@property (nonatomic,readonly) NSString * clusterID; 
@property (nonatomic,readonly) NSNumber * batteryLevel; 
@property (nonatomic,readonly) NSNumber * caseBatteryLevel; 
@property (nonatomic,readonly) NSNumber * leftBatteryLevel; 
@property (nonatomic,readonly) NSNumber * rightBatteryLevel; 
@property (nonatomic,readonly) NSNumber * supportsDataOverACLProtocol; 
@property (nonatomic,readonly) NSNumber * isInEar; 
@property (nonatomic,readonly) NSDictionary * airPlayProperties; 
@property (getter=isInUseByPairedDevice,nonatomic,readonly) BOOL inUseByPairedDevice; 
@property (nonatomic,copy,readonly) NSArray * connectedPairedDevices; 
@property (nonatomic,readonly) unsigned long long deviceFeatures; 
@property (nonatomic,readonly) BOOL requiresAuthorization; 
@property (nonatomic,readonly) BOOL automaticallyAllowsConnectionsFromPeersInHomeGroup; 
@property (nonatomic,readonly) BOOL onlyAllowsConnectionsFromPeersInHomeGroup; 
@property (nonatomic,readonly) BOOL canAccessRemoteAssets; 
@property (nonatomic,readonly) BOOL canAccessAppleMusic; 
@property (nonatomic,readonly) BOOL canAccessiCloudMusicLibrary; 
@property (nonatomic,readonly) BOOL supportsBufferedAirPlay; 
@property (readonly) float volume; 
@property (readonly) BOOL canSetVolume; 
@property (readonly) long long volumeControlType; 
@property (nonatomic,readonly) BOOL canBeGrouped; 
@property (nonatomic,copy,readonly) NSString * groupID; 
@property (nonatomic,copy,readonly) NSString * proposedGroupID; 
@property (nonatomic,readonly) BOOL canBeGroupLeader; 
@property (nonatomic,readonly) BOOL isGroupLeader; 
@property (nonatomic,readonly) BOOL participatesInGroupPlayback; 
@property (nonatomic,readonly) BOOL groupContainsGroupLeader; 
@property (nonatomic,readonly) NSString * logicalDeviceID; 
@property (nonatomic,readonly) BOOL isLogicalDeviceLeader; 
@property (nonatomic,readonly) BOOL canCommunicateWithAllLogicalDeviceMembers; 
@property (nonatomic,readonly) BOOL canRelayCommunicationChannel; 
@property (nonatomic,readonly) BOOL canPlayEncryptedProgressiveDownloadAssets; 
@property (nonatomic,readonly) BOOL canFetchMediaDataFromSender; 
@property (nonatomic,readonly) BOOL presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets; 
@property (nonatomic,readonly) BOOL supportsBluetoothSharing; 
@property (nonatomic,readonly) long long HAPConformance; 
@property (nonatomic,readonly) BOOL supportsHeadTrackedSpatialAudio; 
@property (getter=isHeadTrackedSpatialAudioActive,nonatomic,readonly) BOOL headTrackedSpatialAudioActive; 
@property (nonatomic,readonly) NSArray * availableBluetoothListeningModes; 
@property (nonatomic,readonly) NSString * currentBluetoothListeningMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canCommunicateWithAllLogicalDeviceMembers;
-(NSNumber *)caseBatteryLevel;
-(BOOL)isClusterLeader;
-(BOOL)setCurrentBluetoothListeningMode:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)deviceFeatures;
-(BOOL)canBeGroupLeader;
-(BOOL)supportsBluetoothSharing;
-(NSString *)ID;
-(BOOL)canSetVolume;
-(NSData *)identifyingMACAddress;
-(NSArray *)connectedPairedDevices;
-(NSNumber *)leftBatteryLevel;
-(BOOL)automaticallyAllowsConnectionsFromPeersInHomeGroup;
-(NSNumber *)rightBatteryLevel;
-(long long)deviceType;
-(NSArray *)clusteredDeviceDescriptions;
-(void)configureUsingBlock:(/*^block*/id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isHeadTrackedSpatialAudioActive;
-(BOOL)isInUseByPairedDevice;
-(NSString *)serialNumber;
-(NSString *)currentBluetoothListeningMode;
-(NSNumber *)isInEar;
-(void)setSecondDisplayEnabled:(BOOL)arg1 ;
-(BOOL)supportsHeadTrackedSpatialAudio;
-(BOOL)onlyAllowsConnectionsFromPeersInHomeGroup;
-(long long)deviceSubType;
-(NSString *)proposedGroupID;
-(BOOL)groupContainsGroupLeader;
-(BOOL)canFetchMediaDataFromSender;
-(NSString *)manufacturer;
-(NSNumber *)supportsDataOverACLProtocol;
-(void)setImplEventListener:(id<AVOutputDeviceImplSupport>)arg1 ;
-(BOOL)participatesInGroupPlayback;
-(long long)volumeControlType;
-(BOOL)isLogicalDeviceLeader;
-(NSDictionary *)airPlayProperties;
-(long long)HAPConformance;
-(id<AVOutputDeviceImplSupport>)implEventListener;
-(BOOL)canBeGrouped;
-(BOOL)canAccessAppleMusic;
-(void)setSecondDisplayMode:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setVolume:(float)arg1 ;
-(NSArray *)availableBluetoothListeningModes;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)requiresAuthorization;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)canRelayCommunicationChannel;
-(float)volume;
-(unsigned long long)hash;
-(NSNumber *)batteryLevel;
-(BOOL)isGroupLeader;
-(BOOL)canAccessRemoteAssets;
-(NSString *)logicalDeviceID;
-(long long)clusterType;
-(BOOL)supportsBufferedAirPlay;
-(BOOL)canAccessiCloudMusicLibrary;
-(NSString *)firmwareVersion;
-(long long)configuredClusterSize;
-(NSString *)modelID;
-(NSString *)name;
-(NSString *)clusterID;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)groupID;
@end

