/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextureIO/TextureIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray;

@interface TXRMipmapLevel : NSObject <NSCopying> {

	NSMutableArray* _elements;
	unsigned long long _level;

}

@property (readonly) NSArray * elements; 
-(NSArray *)elements;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initAsLevel:(unsigned long long)arg1 arrayLength:(unsigned long long)arg2 cubemap:(BOOL)arg3 dataSourceProvider:(id)arg4 ;
-(id)initAsLevel:(unsigned long long)arg1 dimensions:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 alphaInfo:(unsigned long long)arg4 arrayLength:(BOOL)arg5 cubemap:(id)arg6 ;
-(void)setImage:(id)arg1 atElement:(unsigned long long)arg2 atFace:(unsigned long long)arg3 ;
@end
