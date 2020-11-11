/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CTCarrierSpaceDataPlanMetricsItem : NSObject <NSSecureCoding> {

	BOOL _capacityValid;
	NSNumber* _capacityBytes;
	long long _units;
	unsigned long long _capacity;

}

@property (nonatomic,retain) NSNumber * capacityBytes;                 //@synthesize capacityBytes=_capacityBytes - In the implementation block
@property (assign,nonatomic) BOOL capacityValid;                       //@synthesize capacityValid=_capacityValid - In the implementation block
@property (assign,nonatomic) long long units;                          //@synthesize units=_units - In the implementation block
@property (assign,nonatomic) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)units;
-(void)setCapacity:(unsigned long long)arg1 ;
-(void)setUnits:(long long)arg1 ;
-(NSNumber *)capacityBytes;
-(void)setCapacityBytes:(NSNumber *)arg1 ;
-(id)init;
-(unsigned long long)capacity;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)capacityValid;
-(void)setCapacityValid:(BOOL)arg1 ;
@end
