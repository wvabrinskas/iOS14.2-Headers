/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDDevice, NSDate, NSNumber;

@interface HMDUserManagementOperationTimestamp : HMFObject <NSSecureCoding> {

	HMDDevice* _device;
	NSDate* _timestamp;
	NSNumber* _state;

}

@property (readonly) HMDDevice * device;              //@synthesize device=_device - In the implementation block
@property (readonly) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) NSNumber * state;                //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)attributeDescriptions;
-(HMDDevice *)device;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)state;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(id)shortDescription;
-(id)initWithDevice:(id)arg1 state:(unsigned long long)arg2 ;
@end

