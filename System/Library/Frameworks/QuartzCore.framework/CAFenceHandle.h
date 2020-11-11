/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CAFenceHandle : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _handle_name;
	unsigned long long _fence_name;
	unsigned _port;
	Mutex _invalidation_mutex;
	SpinLock _lock;
	BOOL _invalidated;

}

@property (readonly) unsigned long long _name; 
@property (getter=isUsable,readonly) BOOL usable; 
@property (getter=isInvalidated,readonly) BOOL invalidated; 
+(BOOL)supportsSecureCoding;
+(id)_newFenceFromServer:(unsigned)arg1 isObservable:(BOOL)arg2 ;
+(id)newFenceFromServer:(unsigned)arg1 ;
+(id)newObservableFenceFromServer:(unsigned)arg1 ;
+(id)handleFromXPCRepresentation:(id)arg1 ;
+(id)_newFenceWithPort:(unsigned)arg1 name:(unsigned long long)arg2 ;
+(id)newFenceFromDefaultServer;
+(id)handleForPort:(unsigned)arg1 fenceId:(unsigned long long)arg2 ;
-(BOOL)isUsable;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithXPCRepresentation:(id)arg1 ;
-(unsigned)_copyPort;
-(unsigned long long)_name;
-(unsigned)copyPort;
-(id)createXPCRepresentation;
-(id)description;
-(void)_accessMachPort:(/*^block*/id)arg1 ;
-(void)accessMachPort:(/*^block*/id)arg1 ;
-(BOOL)isInvalidated;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithPort:(unsigned)arg1 name:(unsigned long long)arg2 ;
-(unsigned long long)fenceId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(unsigned)_copyUntrackedPort;
@end
