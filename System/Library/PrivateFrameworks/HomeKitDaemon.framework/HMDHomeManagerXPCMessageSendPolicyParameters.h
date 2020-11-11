/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDXPCMessageSendPolicyParameters.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface HMDHomeManagerXPCMessageSendPolicyParameters : HMDXPCMessageSendPolicyParameters <NSCopying, NSMutableCopying> {

	BOOL _active;
	unsigned long long _options;

}

@property (nonatomic,readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (getter=isActive,readonly) BOOL active;                       //@synthesize active=_active - In the implementation block
-(id)signature;
-(unsigned long long)options;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isActive;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithEntitlements:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
@end
