/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/_NTKKeylineImageView.h>
#import <libobjc.A.dylib/NTKKeylineView.h>

@protocol NTKKeylineView;
@class UIView, NTKKeylineTouchable, UIColor, NSString;

@interface _NTKCompoundKeylineImageView : _NTKKeylineImageView <NTKKeylineView> {

	UIView*<NTKKeylineView> _secondaryKeylineView;

}

@property (nonatomic,retain) UIView*<NTKKeylineView> secondaryKeylineView;              //@synthesize secondaryKeylineView=_secondaryKeylineView - In the implementation block
@property (nonatomic,retain) NTKKeylineTouchable * touchable; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) BOOL usesLegibility; 
@property (nonatomic,retain) UIColor * overrideColor; 
@property (nonatomic,readonly) UIColor * contentColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keylineWithImage:(id)arg1 secondaryKeylineView:(id)arg2 ;
-(void)setColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(void)setUsesLegibility:(BOOL)arg1 ;
-(void)setSecondaryKeylineView:(UIView*<NTKKeylineView>)arg1 ;
-(UIView*<NTKKeylineView>)secondaryKeylineView;
@end

