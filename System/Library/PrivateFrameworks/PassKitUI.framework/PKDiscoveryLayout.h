/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSMutableDictionary;

@interface PKDiscoveryLayout : UICollectionViewLayout {

	NSMutableDictionary* _attributesPerIndexPath;
	NSMutableDictionary* _headersPerIndexPath;
	CGSize _currentSize;
	double _interimSpacing;
	double _lineSpacing;

}

@property (assign,nonatomic) double interimSpacing;              //@synthesize interimSpacing=_interimSpacing - In the implementation block
@property (assign,nonatomic) double lineSpacing;                 //@synthesize lineSpacing=_lineSpacing - In the implementation block
-(void)prepareLayout;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)init;
-(double)lineSpacing;
-(void)_adjustItems:(id)arg1 withLateralMove:(double)arg2 ;
-(void)setLineSpacing:(double)arg1 ;
-(double)interimSpacing;
-(void)setInterimSpacing:(double)arg1 ;
@end

