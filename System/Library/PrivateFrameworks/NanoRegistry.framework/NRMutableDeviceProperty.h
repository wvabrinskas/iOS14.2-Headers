/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRMutableStateBase.h>

@protocol NSObjectNSCopying;
@class NRPBMutableDeviceProperty;

@interface NRMutableDeviceProperty : NRMutableStateBase {

	id<NSObject><NSCopying> _value;
	NRPBMutableDeviceProperty* _protobuf;

}

@property (nonatomic,retain,readonly) id<NSObject><NSCopying> value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NRPBMutableDeviceProperty * protobuf;                //@synthesize protobuf=_protobuf - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)enclosedClassTypes;
+(id)diffFrom:(id)arg1 to:(id)arg2 ;
-(id)init;
-(unsigned long long)hash;
-(id)initWithValue:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NRPBMutableDeviceProperty *)protobuf;
-(id<NSObject><NSCopying>)value;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setProtobuf:(NRPBMutableDeviceProperty *)arg1 ;
-(void)setValue:(id<NSObject><NSCopying>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

