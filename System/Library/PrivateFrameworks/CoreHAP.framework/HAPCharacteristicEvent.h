/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSString, NSNumber, NSDate;

@interface HAPCharacteristicEvent : HMFObject {

	NSString* _serverIdentifier;
	NSNumber* _accessoryInstanceID;
	NSNumber* _serviceInstanceID;
	NSNumber* _characteristicInstanceID;
	id _value;
	NSDate* _updateTime;
	NSNumber* _stateNumber;

}

@property (nonatomic,copy,readonly) NSString * serverIdentifier;                      //@synthesize serverIdentifier=_serverIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * accessoryInstanceID;                   //@synthesize accessoryInstanceID=_accessoryInstanceID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * serviceInstanceID;                     //@synthesize serviceInstanceID=_serviceInstanceID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * characteristicInstanceID;              //@synthesize characteristicInstanceID=_characteristicInstanceID - In the implementation block
@property (nonatomic,copy,readonly) id value;                                         //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSDate * updateTime;                                   //@synthesize updateTime=_updateTime - In the implementation block
@property (nonatomic,readonly) NSNumber * stateNumber;                                //@synthesize stateNumber=_stateNumber - In the implementation block
+(id)eventWithCharacteristic:(id)arg1 ;
-(id)init;
-(NSDate *)updateTime;
-(NSString *)serverIdentifier;
-(id)initWithCharacteristic:(id)arg1 ;
-(id)value;
-(NSNumber *)stateNumber;
-(NSNumber *)characteristicInstanceID;
-(NSNumber *)accessoryInstanceID;
-(NSNumber *)serviceInstanceID;
@end
