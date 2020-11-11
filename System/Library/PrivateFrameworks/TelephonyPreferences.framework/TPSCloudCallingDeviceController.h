/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TUCallCapabilitiesDelegatePrivate.h>

@protocol TPSCloudCallingDeviceControllerDelegate;
@class NSArray, NSString;

@interface TPSCloudCallingDeviceController : NSObject <TUCallCapabilitiesDelegatePrivate> {

	BOOL _enabled;
	id<TPSCloudCallingDeviceControllerDelegate> _delegate;
	NSArray* _devices;

}

@property (nonatomic,copy) NSArray * devices;                                                          //@synthesize devices=_devices - In the implementation block
@property (assign,nonatomic,__weak) id<TPSCloudCallingDeviceControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                             //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)enabled;
-(id)init;
-(id<TPSCloudCallingDeviceControllerDelegate>)delegate;
-(void)didChangeCloudCallingDevices;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<TPSCloudCallingDeviceControllerDelegate>)arg1 ;
-(void)setDevices:(NSArray *)arg1 ;
-(NSArray *)devices;
@end
