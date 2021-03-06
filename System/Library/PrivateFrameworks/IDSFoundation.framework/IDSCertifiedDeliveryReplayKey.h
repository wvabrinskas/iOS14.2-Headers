/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface IDSCertifiedDeliveryReplayKey : NSObject <NSCopying, NSSecureCoding> {

	NSData* _payloadHash;

}

@property (nonatomic,retain) NSData * payloadHash;              //@synthesize payloadHash=_payloadHash - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithHash:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)payloadHash;
-(BOOL)isEqualToReplayKey:(id)arg1 ;
-(id)initWithPayload:(id)arg1 legacyIdentity:(id)arg2 ;
-(void)setPayloadHash:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

