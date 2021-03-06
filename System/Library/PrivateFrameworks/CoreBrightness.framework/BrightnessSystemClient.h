/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_log;
@class BrightnessSystemClientInternal, NSObject;

@interface BrightnessSystemClient : NSObject {

	BrightnessSystemClientInternal* bsci;
	NSObject*<OS_os_log> _logHandle;
	/*^block*/id _displayNotificationBlock;
	/*^block*/id _keyboardNotificationBlock;
	/*^block*/id _propertyNotificationBlock;

}
-(void)unregisterNotificationForKeys:(id)arg1 ;
-(id)copyPropertyForKey:(id)arg1 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)registerNotificationForKeys:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(void)registerNotificationForKeys:(id)arg1 andDisplay:(unsigned long long)arg2 ;
-(void)unregisterNotificationForKeys:(id)arg1 andDisplay:(unsigned long long)arg2 ;
-(id)copyPropertyForKey:(id)arg1 andDisplay:(unsigned long long)arg2 ;
-(id)copyPropertyForKey:(id)arg1 keyboardID:(unsigned long long)arg2 ;
-(void)unregisterKeyboardNotificationBlock;
-(void)registerNotificationForKey:(id)arg1 ;
-(void)registerKeyboardNotificationCallbackBlock:(/*^block*/id)arg1 ;
-(void)registerNotificationForKey:(id)arg1 andDisplay:(unsigned long long)arg2 ;
-(void)registerNotificationForKeys:(id)arg1 keyboardID:(unsigned long long)arg2 ;
-(void)unregisterDisplayNotificationBlock;
-(void)unregisterNotificationForKey:(id)arg1 ;
-(void)unregisterNotificationForKeys:(id)arg1 keyboardID:(unsigned long long)arg2 ;
-(void)unregisterPropertyNotificationBlock;
-(BOOL)isAlsSupported;
-(BOOL)setProperty:(id)arg1 withKey:(id)arg2 keyboardID:(unsigned long long)arg3 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 forProperties:(id)arg2 ;
-(void)unregisterNotificationForKey:(id)arg1 andDisplay:(unsigned long long)arg2 ;
-(void)registerDisplayNotificationCallbackBlock:(/*^block*/id)arg1 ;
-(BOOL)setProperty:(id)arg1 withKey:(id)arg2 andDisplay:(unsigned long long)arg3 ;
-(void)dealloc;
@end

