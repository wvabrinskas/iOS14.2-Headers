/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MPSCore/MPSCore-Structs.h>
@interface MPSMatrix : NSObject {

	MPSDevice* _device;
	unsigned long long _rows;
	unsigned long long _columns;
	unsigned long long _matrices;
	unsigned long long _rowBytes;
	unsigned long long _matrixBytes;
	unsigned long long _offset;
	unsigned _dataType;
	MPSAutoBuffer* _buffer;

}

@property (nonatomic,retain,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) unsigned long long rows;                     //@synthesize rows=_rows - In the implementation block
@property (nonatomic,readonly) unsigned long long columns;                  //@synthesize columns=_columns - In the implementation block
@property (nonatomic,readonly) unsigned long long matrices;                 //@synthesize matrices=_matrices - In the implementation block
@property (nonatomic,readonly) unsigned dataType;                           //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) unsigned long long rowBytes;                 //@synthesize rowBytes=_rowBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long matrixBytes;              //@synthesize matrixBytes=_matrixBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;                   //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> data; 
-(void)incrementReadCount;
-(void)resetReadCount;
-(void)decrementReadCount;
-(unsigned long long)rows;
-(unsigned)dataType;
-(unsigned long long)columns;
-(id)ndArrayWithCommandBuffer:(id)arg1 descriptor:(id)arg2 aliasing:(unsigned long long)arg3 ;
-(id<MTLDevice>)device;
-(id)init;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 ;
-(unsigned long long)offset;
-(id)debugDescription;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)resourceSize;
-(id<MTLBuffer>)data;
-(id)initPrivateWithDescriptor:(id)arg1 device:(MPSDevice*)arg2 ;
-(BOOL)canAliasWithNDArrayDescriptor:(id)arg1 ;
-(id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 descriptor:(id)arg3 ;
-(BOOL)doesAliasWithNDArray:(id)arg1 ;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(unsigned long long)rowBytes;
-(unsigned long long)matrices;
-(id)initWithBuffer:(id)arg1 descriptor:(id)arg2 ;
-(unsigned long long)matrixBytes;
@end

