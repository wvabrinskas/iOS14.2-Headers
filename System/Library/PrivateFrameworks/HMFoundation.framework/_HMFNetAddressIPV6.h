/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFNetAddressInternal.h>

@interface _HMFNetAddressIPV6 : HMFNetAddressInternal {

	sockaddr_in6* _internal;

}

@property (nonatomic,readonly) sockaddr_in6* internal;              //@synthesize internal=_internal - In the implementation block
-(sockaddr_in6*)internal;
-(id)dataUsingEncoding:(unsigned long long)arg1 ;
-(id)init;
-(id)addressString;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)addressFamily;
-(void)dealloc;
-(id)initWithSocketAddress:(const sockaddr*)arg1 ;
@end

