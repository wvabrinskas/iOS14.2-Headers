/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UICollectionLayoutAuxillaryKey : NSObject <NSCopying> {

	BOOL _isSupplementary;
	NSString* _elementKind;
	long long _index;
	long long _auxillaryKind;

}

@property (nonatomic,readonly) NSString * elementKind;               //@synthesize elementKind=_elementKind - In the implementation block
@property (nonatomic,readonly) long long index;                      //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) long long auxillaryKind;              //@synthesize auxillaryKind=_auxillaryKind - In the implementation block
@property (nonatomic,readonly) BOOL isSupplementary;                 //@synthesize isSupplementary=_isSupplementary - In the implementation block
-(BOOL)isSupplementary;
-(NSString *)elementKind;
-(unsigned long long)hash;
-(id)initWithElementKind:(id)arg1 index:(long long)arg2 auxillaryKind:(long long)arg3 isSupplementary:(BOOL)arg4 ;
-(long long)auxillaryKind;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)index;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

