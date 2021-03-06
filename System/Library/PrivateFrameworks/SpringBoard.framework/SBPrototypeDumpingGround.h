/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@class SBBiometricMonitorUI, NSString;

@interface SBPrototypeDumpingGround : NSObject <PTSettingsKeyObserver> {

	SBBiometricMonitorUI* _pearlMonitorUI;
	id _appLaunchedNotificationToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)dealloc;
-(void)_updatePearlDebugUI;
@end

