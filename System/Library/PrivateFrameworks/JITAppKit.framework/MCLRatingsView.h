/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <JITAppKit/JITAppKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UIImage;

@interface MCLRatingsView : UIView {

	double _imageaspect;
	NSLayoutConstraint* _widthConstraint;
	BOOL _actionVariant;
	double _spacing;
	double _value;
	UIImage* _emptyImage;
	UIImage* _fullImage;

}

@property (assign,nonatomic) double spacing;                    //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) double value;                      //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) UIImage * emptyImage;              //@synthesize emptyImage=_emptyImage - In the implementation block
@property (nonatomic,retain) UIImage * fullImage;               //@synthesize fullImage=_fullImage - In the implementation block
@property (assign,nonatomic) BOOL actionVariant;                //@synthesize actionVariant=_actionVariant - In the implementation block
-(double)spacing;
-(void)setSpacing:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(UIImage *)emptyImage;
-(double)value;
-(void)setValue:(double)arg1 ;
-(void)updateConstraints;
-(BOOL)actionVariant;
-(void)setActionVariant:(BOOL)arg1 ;
-(void)setEmptyImage:(UIImage *)arg1 ;
-(void)setFullImage:(UIImage *)arg1 ;
-(UIImage *)fullImage;
@end
