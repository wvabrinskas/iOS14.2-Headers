/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TXRBufferMap.h>

@class TXRDefaultBuffer, NSString;

@interface TXRDefaultBufferMap : NSObject <TXRBufferMap> {

	void* _bytes;
	TXRDefaultBuffer* _buffer;

}

@property (nonatomic,readonly) void* bytes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void*)bytes;
-(id)initForBuffer:(id)arg1 withBytes:(void*)arg2 ;
@end

