/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIStatusBarServerClient;
#import <UIKitCore/UIKitCore-Structs.h>
@interface UIStatusBarServer : NSObject {

	id<UIStatusBarServerClient> _statusBar;
	CFRunLoopSourceRef _source;

}

@property (nonatomic,retain) id<UIStatusBarServerClient> statusBar;              //@synthesize statusBar=_statusBar - In the implementation block
+(const SCD_Struct_UI121*)getStatusBarData;
+(void)runServer;
+(unsigned)_publisherPort;
+(id)getDoubleHeightStatusStringForStyle:(long long)arg1 ;
+(void)removeStatusBarItem:(int)arg1 ;
+(void)postDoubleHeightStatusString:(id)arg1 forStyle:(long long)arg2 ;
+(void)permanentizeStatusBarOverrideData;
+(void)postStatusBarData:(const SCD_Struct_UI121*)arg1 withActions:(int)arg2 ;
+(void)removeStyleOverrides:(int)arg1 ;
+(void)addStyleOverrides:(int)arg1 ;
+(BOOL)getGlowAnimationStateForStyle:(long long)arg1 ;
+(unsigned)_serverPort;
+(void)postStatusBarOverrideData:(SCD_Struct_UI124*)arg1 ;
+(void)postGlowAnimationState:(BOOL)arg1 forStyle:(long long)arg2 ;
+(double)getGlowAnimationEndTimeForStyle:(long long)arg1 ;
+(const char*)serviceName;
+(id)_cachedTimeStringFromData:(SCD_Struct_UI121*)arg1 ;
+(void)addStatusBarItem:(int)arg1 ;
+(int)getStyleOverrides;
+(SCD_Struct_UI124*)getStatusBarOverrideData;
-(void)setStatusBar:(id<UIStatusBarServerClient>)arg1 ;
-(void)_receivedGlowAnimationState:(BOOL)arg1 forStyle:(long long)arg2 ;
-(id<UIStatusBarServerClient>)statusBar;
-(void)_receivedDoubleHeightStatus:(const char*)arg1 forStyle:(long long)arg2 ;
-(void)_receivedStatusBarData:(SCD_Struct_UI121*)arg1 actions:(int)arg2 animated:(BOOL)arg3 ;
-(void)_receivedStyleOverrides:(int)arg1 ;
-(void)dealloc;
-(id)initWithStatusBar:(id)arg1 ;
@end
