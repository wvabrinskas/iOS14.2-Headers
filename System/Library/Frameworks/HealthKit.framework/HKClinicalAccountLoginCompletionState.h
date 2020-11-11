/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKClinicalAccount, NSNumber;

@interface HKClinicalAccountLoginCompletionState : NSObject <NSSecureCoding> {

	BOOL _wasRelogin;
	HKClinicalAccount* _account;
	NSNumber* _alternateCredentialPersistentID;

}

@property (nonatomic,readonly) HKClinicalAccount * account;                         //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSNumber * alternateCredentialPersistentID;              //@synthesize alternateCredentialPersistentID=_alternateCredentialPersistentID - In the implementation block
@property (nonatomic,readonly) BOOL wasRelogin;                                     //@synthesize wasRelogin=_wasRelogin - In the implementation block
+(BOOL)supportsSecureCoding;
-(HKClinicalAccount *)account;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)wasRelogin;
-(id)initWithAccount:(id)arg1 wasRelogin:(BOOL)arg2 ;
-(NSNumber *)alternateCredentialPersistentID;
-(void)setAlternateCredentialPersistentID:(NSNumber *)arg1 ;
@end
