/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GameCenterUI/GameCenterUI-Structs.h>
@class UIColor;

@interface GKButtonStyle : NSObject {

	BOOL _clipToBounds;
	double _cornerRadius;
	UIColor* _backgroundColor;
	id _compositingFilter;
	UIEdgeInsets _titleEdgeInsets;

}

@property (assign,nonatomic) double cornerRadius;                       //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL clipToBounds;                         //@synthesize clipToBounds=_clipToBounds - In the implementation block
@property (assign,nonatomic) UIEdgeInsets titleEdgeInsets;              //@synthesize titleEdgeInsets=_titleEdgeInsets - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) id compositingFilter;                      //@synthesize compositingFilter=_compositingFilter - In the implementation block
+(id)defaultStyle;
+(id)standardStyle;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)applyToButton:(id)arg1 ;
-(id)compositingFilter;
-(double)cornerRadius;
-(id)initWithCornerRadius:(double)arg1 andBackgroundColor:(id)arg2 ;
-(BOOL)clipToBounds;
-(void)setClipToBounds:(BOOL)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setTitleEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setCompositingFilter:(id)arg1 ;
-(UIEdgeInsets)titleEdgeInsets;
@end

