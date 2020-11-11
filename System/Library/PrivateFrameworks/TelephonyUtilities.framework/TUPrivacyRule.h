/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCoding.h>

@class TUPhoneNumber, NSString;

@interface TUPrivacyRule : NSObject <NSCoding> {

	int _type;
	TUPhoneNumber* _phoneNumber;
	NSString* _email;
	NSString* _businessID;

}

@property (nonatomic,readonly) int type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) TUPhoneNumber * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) NSString * email;                         //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) NSString * businessID;                    //@synthesize businessID=_businessID - In the implementation block
+(id)ruleForPhoneNumber:(id)arg1 ;
+(id)ruleForEmail:(id)arg1 ;
+(id)ruleForBusinessID:(id)arg1 ;
-(TUPhoneNumber *)phoneNumber;
-(NSString *)email;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initForPhoneNumber:(id)arg1 ;
-(id)initForEmail:(id)arg1 ;
-(id)initForBusinessID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)type;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)businessID;
@end
