/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SFContinuityScanManagerObserver.h>

@protocol SFActivityScannerDelegate;
@class NSUUID, NSString;

@interface SFActivityScanner : NSObject <SFContinuityScanManagerObserver> {

	id<SFActivityScannerDelegate> _delegate;
	NSUUID* _identifier;

}

@property (retain) NSUUID * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (readonly) id<SFActivityScannerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)scanManager:(id)arg1 receivedAdvertisement:(id)arg2 ;
-(id<SFActivityScannerDelegate>)delegate;
-(NSUUID *)identifier;
-(void)scanManager:(id)arg1 pairedDevicesChanged:(id)arg2 ;
-(void)activityPayloadFromDevice:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)scanManager:(id)arg1 foundDeviceWithDevice:(id)arg2 ;
-(void)scanManager:(id)arg1 lostDeviceWithDevice:(id)arg2 ;
-(void)dealloc;
-(void)scanForTypes:(unsigned long long)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

