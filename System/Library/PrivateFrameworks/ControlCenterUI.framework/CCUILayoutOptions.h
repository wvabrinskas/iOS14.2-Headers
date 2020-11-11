/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface CCUILayoutOptions : NSObject <NSCopying, NSMutableCopying> {

	double _itemEdgeSize;
	double _itemSpacing;

}

@property (nonatomic,readonly) double itemEdgeSize;              //@synthesize itemEdgeSize=_itemEdgeSize - In the implementation block
@property (nonatomic,readonly) double itemSpacing;               //@synthesize itemSpacing=_itemSpacing - In the implementation block
-(id)_initWithLayoutOptions:(id)arg1 ;
-(double)itemSpacing;
-(id)init;
-(unsigned long long)hash;
-(double)itemEdgeSize;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
