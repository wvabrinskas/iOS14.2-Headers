/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSURL, BKSDisplayRenderOverlay;

@interface SBStartupTransitionContext : NSObject <BSDescriptionProviding> {

	NSString* _reason;
	NSString* _fromApplicationBundleID;
	NSURL* _applicationLaunchURL;
	BOOL _fromLocked;
	BOOL _isDark;
	BOOL _isLogin;
	BOOL _isLogout;
	BOOL _isLoginSession;
	BKSDisplayRenderOverlay* _overlay;
	BOOL _fromUserPowerDown;
	BOOL _hasUserSwitchOverlayMismatch;

}

@property (nonatomic,copy) NSString * reason;                                //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSURL * applicationLaunchURL;                     //@synthesize applicationLaunchURL=_applicationLaunchURL - In the implementation block
@property (nonatomic,copy) NSString * fromApplicationBundleID;               //@synthesize fromApplicationBundleID=_fromApplicationBundleID - In the implementation block
@property (assign,nonatomic) BOOL fromLocked;                                //@synthesize fromLocked=_fromLocked - In the implementation block
@property (assign,nonatomic) BOOL fromUserPowerDown;                         //@synthesize fromUserPowerDown=_fromUserPowerDown - In the implementation block
@property (assign,getter=isDark,nonatomic) BOOL dark;                        //@synthesize isDark=_isDark - In the implementation block
@property (assign,getter=isLogin,nonatomic) BOOL login;                      //@synthesize isLogin=_isLogin - In the implementation block
@property (assign,getter=isLogout,nonatomic) BOOL logout;                    //@synthesize isLogout=_isLogout - In the implementation block
@property (assign,nonatomic) BOOL hasUserSwitchOverlayMismatch;              //@synthesize hasUserSwitchOverlayMismatch=_hasUserSwitchOverlayMismatch - In the implementation block
@property (nonatomic,retain) BKSDisplayRenderOverlay * overlay;              //@synthesize overlay=_overlay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLogin:(BOOL)arg1 ;
-(BKSDisplayRenderOverlay *)overlay;
-(id)succinctDescription;
-(NSString *)reason;
-(id)_initWithShutdownContext:(id)arg1 ;
-(NSString *)fromApplicationBundleID;
-(id)_initWithRepresentation:(id)arg1 loginSession:(BOOL)arg2 ;
-(void)_parseOverlayInfo;
-(BOOL)isDark;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSURL *)applicationLaunchURL;
-(BOOL)isLogout;
-(void)setReason:(NSString *)arg1 ;
-(void)setHasUserSwitchOverlayMismatch:(BOOL)arg1 ;
-(id)_initWithRestartRequest:(id)arg1 fromLocked:(BOOL)arg2 fromApplication:(id)arg3 ;
-(void)setFromLocked:(BOOL)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)fromLocked;
-(void)setDark:(BOOL)arg1 ;
-(BOOL)fromUserPowerDown;
-(void)setLogout:(BOOL)arg1 ;
-(void)setFromUserPowerDown:(BOOL)arg1 ;
-(void)setFromApplicationBundleID:(NSString *)arg1 ;
-(void)setApplicationLaunchURL:(NSURL *)arg1 ;
-(id)_representation;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)_initWithRebootContext:(id)arg1 ;
-(void)setOverlay:(BKSDisplayRenderOverlay *)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)isLogin;
-(BOOL)hasUserSwitchOverlayMismatch;
-(void)_reallyInitFromRepresentation:(id)arg1 ;
@end
