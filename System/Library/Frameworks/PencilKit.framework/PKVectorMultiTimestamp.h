/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface PKVectorMultiTimestamp : NSObject <NSCopying> {

	NSArray* _timestamps;

}

@property (nonatomic,readonly) NSArray * timestamps;              //@synthesize timestamps=_timestamps - In the implementation block
-(id)serialize;
-(NSArray *)timestamps;
-(unsigned long long)hash;
-(void)saveToArchive:(VectorTimestamp*)arg1 ;
-(unsigned long long)compareTo:(id)arg1 ;
-(void)mergeWithTimestamp:(id)arg1 ;
-(id)sortedUUIDs;
-(id)initWithTimestamps:(id)arg1 ;
-(id)clockElementForUUID:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)clockForUUID:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setClock:(unsigned long long)arg1 forUUID:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(id)initWithData:(id)arg1 andCapacity:(unsigned long long)arg2 ;
-(id)initWithArchive:(const VectorTimestamp*)arg1 andCapacity:(unsigned long long)arg2 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

