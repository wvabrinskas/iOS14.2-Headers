/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATTaskResultObject.h>

@class NSString, NSError;

@interface DMFScheduleOSUpdateResultObject : CATTaskResultObject {

	unsigned long long _action;
	NSString* _productKey;
	NSError* _error;

}

@property (nonatomic,readonly) unsigned long long action;               //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * productKey;              //@synthesize productKey=_productKey - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                    //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)productKey;
-(NSError *)error;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAction:(unsigned long long)arg1 productKey:(id)arg2 error:(id)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)action;
@end

