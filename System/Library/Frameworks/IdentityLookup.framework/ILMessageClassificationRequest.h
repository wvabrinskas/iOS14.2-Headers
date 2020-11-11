/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IdentityLookup/ILClassificationRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface ILMessageClassificationRequest : ILClassificationRequest <NSSecureCoding> {

	NSArray* _messageCommunications;

}

@property (nonatomic,copy,readonly) NSArray * messageCommunications;              //@synthesize messageCommunications=_messageCommunications - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMessageCommunications:(id)arg1 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(NSArray *)messageCommunications;
@end
