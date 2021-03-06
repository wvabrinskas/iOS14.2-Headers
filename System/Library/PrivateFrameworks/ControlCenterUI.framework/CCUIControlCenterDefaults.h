/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface CCUIControlCenterDefaults : BSAbstractDefaultDomain

@property (nonatomic,readonly) BOOL shouldAlwaysBeEnabled; 
@property (nonatomic,readonly) BOOL shouldExcludeControlCenterFromStatusBarOverrides; 
@property (assign,nonatomic) BOOL hasForceTouchedToExpandModule; 
@property (assign,nonatomic) BOOL hasLongPressedToExpandModule; 
+(id)standardDefaults;
-(void)setShouldAlwaysBeEnabled:(BOOL)arg1 ;
-(BOOL)shouldAlwaysBeEnabled;
-(void)setHasForceTouchedToExpandModule:(BOOL)arg1 ;
-(BOOL)hasForceTouchedToExpandModule;
-(void)setShouldExcludeControlCenterFromStatusBarOverrides:(BOOL)arg1 ;
-(BOOL)shouldExcludeControlCenterFromStatusBarOverrides;
-(void)setHasLongPressedToExpandModule:(BOOL)arg1 ;
-(BOOL)hasLongPressedToExpandModule;
-(id)init;
-(void)_bindAndRegisterDefaults;
@end

