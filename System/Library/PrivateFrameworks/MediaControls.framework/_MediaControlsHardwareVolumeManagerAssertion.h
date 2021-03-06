/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaControls/MediaControlsInvalidatable.h>

@class MediaControlsHardwareVolumeManager, NSString;

@interface _MediaControlsHardwareVolumeManagerAssertion : NSObject <MediaControlsInvalidatable> {

	MediaControlsHardwareVolumeManager* _volumeManager;
	NSString* _reason;

}

@property (assign,nonatomic,__weak) MediaControlsHardwareVolumeManager * volumeManager;              //@synthesize volumeManager=_volumeManager - In the implementation block
@property (nonatomic,copy) NSString * reason;                                                        //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(MediaControlsHardwareVolumeManager *)volumeManager;
-(void)setVolumeManager:(MediaControlsHardwareVolumeManager *)arg1 ;
@end

