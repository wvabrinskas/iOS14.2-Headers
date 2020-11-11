/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Memories/Memories-Structs.h>
@interface RangeObject : NSObject {

	SCD_Struct_Ra28 _range;

}

@property (nonatomic,readonly) SCD_Struct_Ra28 range;              //@synthesize range=_range - In the implementation block
+(id)rangeObjectWithRange:(SCD_Struct_Ra28)arg1 ;
+(id)rangesFromIndexSet:(id)arg1 ;
-(id)initWithRange:(SCD_Struct_Ra28)arg1 ;
-(SCD_Struct_Ra28)range;
-(void)setRange:(SCD_Struct_Ra28)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
