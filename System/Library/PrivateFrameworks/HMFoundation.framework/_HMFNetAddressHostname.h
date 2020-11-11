/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFNetAddressInternal.h>

@class NSString;

@interface _HMFNetAddressHostname : HMFNetAddressInternal {

	NSString* _hostname;

}

@property (nonatomic,copy,readonly) NSString * hostname;              //@synthesize hostname=_hostname - In the implementation block
+(id)normalizedHostname:(id)arg1 ;
-(id)initWithHostname:(id)arg1 ;
-(id)init;
-(id)addressString;
-(unsigned long long)hash;
-(NSString *)hostname;
-(BOOL)isEqual:(id)arg1 ;
@end
