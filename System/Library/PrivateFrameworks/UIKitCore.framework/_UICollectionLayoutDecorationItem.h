/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionLayoutItem.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting.h>

@class NSString, _UICollectionLayoutAnchor;

@interface _UICollectionLayoutDecorationItem : _UICollectionLayoutItem <NSCopying, _UICollectionLayoutAPIRespresenting> {

	NSString* _elementKind;
	_UICollectionLayoutAnchor* _containerAnchor;
	long long _zIndex;
	Class _registrationViewClass;
	BOOL _isBackgroundDecoration;

}

@property (assign,nonatomic) long long zIndex;                                                            //@synthesize zIndex=_zIndex - In the implementation block
@property (setter=_setRegistrationViewClass:,nonatomic,retain) Class _registrationViewClass; 
+(id)backgroundDecorationItemWithElementKind:(id)arg1 ;
+(id)decorationItemWithSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 ;
-(id)initWithSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 zIndex:(long long)arg4 contentInsets:(NSDirectionalEdgeInsets)arg5 edgeSpacing:(id)arg6 name:(id)arg7 registrationViewClass:(Class)arg8 isBackgroundDecoration:(BOOL)arg9 ;
-(void)setZIndex:(long long)arg1 ;
-(long long)zIndex;
-(Class)_registrationViewClass;
-(id)_apiRepresentation;
-(void)_setRegistrationViewClass:(Class)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

