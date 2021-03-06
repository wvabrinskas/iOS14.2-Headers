/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ILMessageFilterQueryResponse : NSObject <NSSecureCoding> {

	long long _action;
	NSString* _version;

}

@property (nonatomic,copy) NSString * version;              //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long action;              //@synthesize action=_action - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setVersion:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)version;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAction:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)action;
-(BOOL)isEqualToQueryResponse:(id)arg1 ;
@end

