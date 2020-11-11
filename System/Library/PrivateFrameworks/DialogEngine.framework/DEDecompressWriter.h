/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DialogEngine/DialogEngine-Structs.h>
#import <libobjc.A.dylib/DEWriter.h>

@protocol DEWriter;
@class NSObject;

@interface DEDecompressWriter : NSObject <DEWriter> {

	BOOL _streamInitialized;
	BOOL _streamEnded;
	NSObject*<DEWriter> _writer;
	z_stream_s* _stream;

}

@property (nonatomic,retain) NSObject*<DEWriter> writer;              //@synthesize writer=_writer - In the implementation block
@property (assign,nonatomic) z_stream_s* stream;                      //@synthesize stream=_stream - In the implementation block
@property (assign,nonatomic) BOOL streamInitialized;                  //@synthesize streamInitialized=_streamInitialized - In the implementation block
@property (assign,nonatomic) BOOL streamEnded;                        //@synthesize streamEnded=_streamEnded - In the implementation block
-(void)close;
-(z_stream_s*)stream;
-(NSObject*<DEWriter>)writer;
-(id)init;
-(id)decompress:(id)arg1 ;
-(id)initWithWriter:(id)arg1 ;
-(BOOL)streamInitialized;
-(void)setStreamInitialized:(BOOL)arg1 ;
-(BOOL)streamEnded;
-(void)setStreamEnded:(BOOL)arg1 ;
-(void)setStream:(z_stream_s*)arg1 ;
-(void)setWriter:(NSObject*<DEWriter>)arg1 ;
-(void)writeData:(id)arg1 ;
-(void)dealloc;
@end
