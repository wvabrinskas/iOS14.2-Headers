/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalPerformanceShadersGraph/MetalPerformanceShadersGraph-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MPSGraphShapedType : NSObject <NSCopying> {

	unsigned _dataType;
	NSArray* _shape;

}

@property (copy) NSArray * shape;                  //@synthesize shape=_shape - In the implementation block
@property (assign) unsigned dataType;              //@synthesize dataType=_dataType - In the implementation block
-(unsigned)dataType;
-(NSArray *)shape;
-(void)setDataType:(unsigned)arg1 ;
-(BOOL)isEqualTo:(id)arg1 ;
-(void)setShape:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithShape:(id)arg1 dataType:(unsigned)arg2 ;
@end
