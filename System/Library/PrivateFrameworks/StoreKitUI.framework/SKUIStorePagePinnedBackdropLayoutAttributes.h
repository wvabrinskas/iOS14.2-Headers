/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSString;

@interface SKUIStorePagePinnedBackdropLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying> {

	UIColor* _backdropColor;
	NSString* _backdropGroupName;
	long long _backdropStyle;
	BOOL _hidesBackdropView;
	double _transitionProgress;

}

@property (nonatomic,retain) UIColor * backdropColor;                 //@synthesize backdropColor=_backdropColor - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName;              //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) long long backdropStyle;                 //@synthesize backdropStyle=_backdropStyle - In the implementation block
@property (assign,nonatomic) BOOL hidesBackdropView;                  //@synthesize hidesBackdropView=_hidesBackdropView - In the implementation block
@property (assign,nonatomic) double transitionProgress;               //@synthesize transitionProgress=_transitionProgress - In the implementation block
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setBackdropStyle:(long long)arg1 ;
-(double)transitionProgress;
-(void)setTransitionProgress:(double)arg1 ;
-(NSString *)backdropGroupName;
-(BOOL)isEqual:(id)arg1 ;
-(long long)backdropStyle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHidesBackdropView:(BOOL)arg1 ;
-(void)setBackdropColor:(UIColor *)arg1 ;
-(BOOL)hidesBackdropView;
-(UIColor *)backdropColor;
@end
