/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/MTLBVHGeometryDescriptor.h>

@protocol MTLBuffer;
@interface MTLBVHPolygonGeometryDescriptor : MTLBVHGeometryDescriptor {

	unsigned long long _polygonType;
	id<MTLBuffer> _vertexBuffer;
	unsigned long long _vertexBufferOffset;
	unsigned long long _vertexStride;
	id<MTLBuffer> _indexBuffer;
	unsigned long long _indexBufferOffset;
	unsigned long long _indexType;

}

@property (assign,nonatomic) unsigned long long polygonType;                     //@synthesize polygonType=_polygonType - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> vertexBuffer;                         //@synthesize vertexBuffer=_vertexBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long vertexBufferOffset;              //@synthesize vertexBufferOffset=_vertexBufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long vertexStride;                    //@synthesize vertexStride=_vertexStride - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> indexBuffer;                          //@synthesize indexBuffer=_indexBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long indexBufferOffset;               //@synthesize indexBufferOffset=_indexBufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long indexType;                       //@synthesize indexType=_indexType - In the implementation block
-(id<MTLBuffer>)indexBuffer;
-(void)setIndexType:(unsigned long long)arg1 ;
-(unsigned long long)primitiveType;
-(unsigned long long)polygonType;
-(void)setPolygonType:(unsigned long long)arg1 ;
-(id<MTLBuffer>)vertexBuffer;
-(void)setVertexBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)vertexBufferOffset;
-(void)setVertexBufferOffset:(unsigned long long)arg1 ;
-(unsigned long long)vertexStride;
-(void)setVertexStride:(unsigned long long)arg1 ;
-(void)setIndexBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)indexBufferOffset;
-(void)setIndexBufferOffset:(unsigned long long)arg1 ;
-(unsigned long long)indexType;
-(void)dealloc;
@end

