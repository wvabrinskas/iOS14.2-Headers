/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKColor;

@interface SKUIGridViewGradientLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying> {

	IKColor* _gradientColor;

}

@property (nonatomic,retain) IKColor * gradientColor;              //@synthesize gradientColor=_gradientColor - In the implementation block
-(unsigned long long)hash;
-(IKColor *)gradientColor;
-(void)setGradientColor:(IKColor *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
