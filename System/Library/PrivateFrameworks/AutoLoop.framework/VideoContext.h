/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AutoLoop/AutoLoop-Structs.h>
@class CIContext, VideoWriter, NSDictionary;

@interface VideoContext : NSObject {

	BOOL _colorManagement;
	unsigned pixelFormatFlags;
	unsigned pixelFormat;
	CIContext* ciCtx;
	VideoWriter* writer;
	NSDictionary* pixelAttrs;

}

@property (readonly) NSDictionary * pixelAttrs; 
@property (readonly) unsigned pixelFormat; 
@property (assign) BOOL colorManagement;                     //@synthesize colorManagement=_colorManagement - In the implementation block
@property (readonly) CIContext * ciCtx; 
@property (readonly) VideoWriter * writer; 
@property (readonly) unsigned pixelFormatFlags; 
-(VideoWriter *)writer;
-(unsigned)pixelFormat;
-(CIContext *)ciCtx;
-(id)initWithWriter:(id)arg1 pixelFormatFlags:(unsigned)arg2 colorManagement:(BOOL)arg3 ;
-(int)appendFrame:(id)arg1 frameTime:(SCD_Struct_Au1)arg2 srcPixBuf:(CVBufferRef)arg3 ;
-(id)initWithWriter:(id)arg1 pixelFormatFlags:(unsigned)arg2 ;
-(CVBufferRef)createPixelBuffer;
-(CVBufferRef)createPixelBuffer:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(CVBufferRef)pixelBufferFromImage:(id)arg1 withAttachFrom:(CVBufferRef)arg2 ;
-(CVBufferRef)pixelBufferFromImage:(id)arg1 ;
-(BOOL)pixelBuffer:(CVBufferRef)arg1 conformsToImage:(id)arg2 ;
-(unsigned)pixelFormatFlags;
-(NSDictionary *)pixelAttrs;
-(BOOL)colorManagement;
-(void)setColorManagement:(BOOL)arg1 ;
@end

