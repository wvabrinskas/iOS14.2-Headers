/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCollectionLayoutItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSCollectionLayoutAnchor;

@interface NSCollectionLayoutSupplementaryItem : NSCollectionLayoutItem <NSCopying> {

	long long _zIndex;
	NSString* _elementKind;
	NSCollectionLayoutAnchor* _containerAnchor;
	NSCollectionLayoutAnchor* _itemAnchor;

}

@property (nonatomic,retain) NSString * elementKind;                                  //@synthesize elementKind=_elementKind - In the implementation block
@property (nonatomic,retain) NSCollectionLayoutAnchor * containerAnchor;              //@synthesize containerAnchor=_containerAnchor - In the implementation block
@property (nonatomic,retain) NSCollectionLayoutAnchor * itemAnchor;                   //@synthesize itemAnchor=_itemAnchor - In the implementation block
@property (assign,nonatomic) long long zIndex;                                        //@synthesize zIndex=_zIndex - In the implementation block
+(id)supplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 itemAnchor:(id)arg4 ;
+(id)supplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 ;
-(id)boundarySupplementaryItem;
-(void)setZIndex:(long long)arg1 ;
-(void)setItemAnchor:(NSCollectionLayoutAnchor *)arg1 ;
-(long long)zIndex;
-(void)setContainerAnchor:(NSCollectionLayoutAnchor *)arg1 ;
-(id)supplementaryItem;
-(id)initWithSize:(id)arg1 contentInsets:(NSDirectionalEdgeInsets)arg2 elementKind:(id)arg3 containerAnchor:(id)arg4 itemAnchor:(id)arg5 zIndex:(long long)arg6 ;
-(void)setElementKind:(NSString *)arg1 ;
-(NSCollectionLayoutAnchor *)itemAnchor;
-(NSString *)elementKind;
-(id)item;
-(NSCollectionLayoutAnchor *)containerAnchor;
-(id)decorationItem;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

