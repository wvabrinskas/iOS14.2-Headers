/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DAEAS/DAEAS-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@class NSData, ASTrafficLogger;

@interface DAConvertCRtoCRLFStream : NSInputStream {

	NSData* _mimeData;
	NSData* _preflightData;
	NSData* _postflightData;
	unsigned long long _totalLength;
	unsigned long long _readOffset;
	BOOL _lastByteCopiedWasCR;
	BOOL _openEventSent;
	unsigned long long _streamStatus;
	BOOL _intendToStream;
	id _delegate;
	CFRunLoopSourceRef _rls;
	/*function pointer*/void* _clientCallback;
	SCD_Struct_DA2* _clientContext;
	ASTrafficLogger* _trafficLogger;

}
-(void)open;
-(void)close;
-(BOOL)hasBytesAvailable;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)delegate;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(unsigned long long)streamStatus;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(id)initWithData:(id)arg1 ;
-(id)streamError;
-(BOOL)_setCFClientFlags:(unsigned long long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_DA2*)arg3 ;
-(void)dealloc;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(void)_scheduleCallback;
-(void)_streamEventTrigger;
-(id)initWithMIMEData:(id)arg1 preflightData:(id)arg2 postflightData:(id)arg3 intendToStream:(BOOL)arg4 ;
@end
