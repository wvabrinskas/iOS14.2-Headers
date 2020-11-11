/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSOutputStream.h>

@interface NSCFOutputStream : NSOutputStream
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)open;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(void)close;
-(id)initToBuffer:(char*)arg1 capacity:(unsigned long long)arg2 ;
-(oneway void)release;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)initWithURL:(id)arg1 append:(BOOL)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)delegate;
-(id)propertyForKey:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)allowsWeakReference;
-(id)retain;
-(BOOL)retainWeakReference;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initToFileAtPath:(id)arg1 append:(BOOL)arg2 ;
-(unsigned long long)retainCount;
-(unsigned long long)streamStatus;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(id)streamError;
-(id)initToMemory;
-(BOOL)_setCFClientFlags:(unsigned long long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_NS58*)arg3 ;
-(BOOL)hasSpaceAvailable;
@end
