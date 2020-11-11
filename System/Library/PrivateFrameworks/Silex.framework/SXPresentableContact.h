/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SXPresentableContact : NSObject {

	NSString* _email;
	NSString* _phoneNumber;

}

@property (nonatomic,readonly) NSString * email;                    //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
-(id)initWithPhoneNumber:(id)arg1 ;
-(NSString *)phoneNumber;
-(NSString *)email;
-(id)initWithEmail:(id)arg1 ;
@end
