/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, UIImage;


@protocol _UIMenuLeaf <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSString * discoverabilityTitle; 
@property (assign,nonatomic) unsigned long long attributes; 
@property (assign,nonatomic) long long state; 
@property (nonatomic,readonly) BOOL requiresAuthenticatedInput; 
@required
-(void)setDiscoverabilityTitle:(id)arg1;
-(long long)_leafKeyModifierFlags;
-(NSString *)discoverabilityTitle;
-(id)_leafAlternates;
-(id)_leafKeyInput;
-(void)setState:(long long)arg1;
-(void)setAttributes:(unsigned long long)arg1;
-(id)_resolvedTargetFromFirstTarget:(id)arg1;
-(void)setImage:(id)arg1;
-(long long)state;
-(UIImage *)image;
-(BOOL)requiresAuthenticatedInput;
-(void)_performWithTarget:(id)arg1;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3;
-(unsigned long long)attributes;
-(BOOL)_isDefaultCommand;

@end

