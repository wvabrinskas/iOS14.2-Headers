/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, NSNumber;

@interface SUScriptApplication : SUScriptObject

@property (getter=isDelayingTerminate,readonly) id delayingTerminate; 
@property (getter=isRunningInStoreDemoMode,readonly) id runningInStoreDemoMode; 
@property (retain) id iconBadgeNumber; 
@property (readonly) NSString * identifier; 
@property (readonly) id screenHeight; 
@property (readonly) id screenWidth; 
@property (assign) id statusBarHidden; 
@property (assign) long long statusBarStyle; 
@property (readonly) NSString * version; 
@property (getter=wasLaunchedFromLibrary,readonly) id launchedFromLibrary; 
@property (readonly) NSNumber * exitStoreReasonButton; 
@property (readonly) NSNumber * exitStoreReasonDownloadComplete; 
@property (readonly) NSNumber * exitStoreReasonFatalError; 
@property (readonly) NSNumber * exitStoreReasonGotoMainStore; 
@property (readonly) NSNumber * exitStoreReasonOther; 
@property (readonly) NSNumber * exitStoreReasonPurchase; 
@property (readonly) long long statusBarAnimationFade; 
@property (readonly) long long statusBarAnimationNone; 
@property (readonly) long long statusBarAnimationSlide; 
@property (readonly) long long statusBarStyleDefault; 
@property (readonly) long long statusBarStyleBlackOpaque; 
@property (readonly) long long statusBarStyleBlackTranslucent; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)hostIdentifier;
-(id)statusBarHidden;
-(void)setVersion:(NSString *)arg1 ;
-(void)setStatusBarHidden:(id)arg1 ;
-(NSString *)version;
-(void)setStatusBarStyle:(long long)arg1 ;
-(NSString *)identifier;
-(void)setStatusBarStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(id)screenWidth;
-(id)isRunningInStoreDemoMode;
-(long long)statusBarStyle;
-(id)screenHeight;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)attributeKeys;
-(void)setStatusBarHidden:(BOOL)arg1 withAnimation:(long long)arg2 ;
-(id)scriptAttributeKeys;
-(id)wasLaunchedFromLibrary;
-(void)beginDelayingTerminate;
-(void)endDelayingTerminate;
-(void)exitStoreWithReason:(id)arg1 ;
-(void)returnToLibrary;
-(void)scrollIconToVisible:(id)arg1 shouldSuspend:(BOOL)arg2 ;
-(void)showNewsstand;
-(id)iconBadgeNumber;
-(id)isDelayingTerminate;
-(void)setIconBadgeNumber:(id)arg1 ;
-(NSNumber *)exitStoreReasonButton;
-(NSNumber *)exitStoreReasonDownloadComplete;
-(NSNumber *)exitStoreReasonFatalError;
-(NSNumber *)exitStoreReasonGotoMainStore;
-(NSNumber *)exitStoreReasonOther;
-(NSNumber *)exitStoreReasonPurchase;
-(long long)statusBarAnimationFade;
-(long long)statusBarAnimationNone;
-(long long)statusBarAnimationSlide;
-(long long)statusBarStyleDefault;
-(long long)statusBarStyleBlackOpaque;
-(long long)statusBarStyleBlackTranslucent;
@end
