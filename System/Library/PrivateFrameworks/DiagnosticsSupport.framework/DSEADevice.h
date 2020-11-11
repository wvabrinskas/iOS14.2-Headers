/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class EAAccessory;

@interface DSEADevice : NSObject {

	EAAccessory* _device;

}

@property (nonatomic,retain) EAAccessory * device;              //@synthesize device=_device - In the implementation block
+(id)deviceWithSerialNumber:(id)arg1 ;
+(id)deviceWithModelNumber:(id)arg1 ;
+(id)devicesWithModelNumbers:(id)arg1 ;
-(EAAccessory *)device;
-(void)setDevice:(EAAccessory *)arg1 ;
-(id)information;
-(id)initWithAccessory:(id)arg1 ;
-(id)initWithSerialNumber:(id)arg1 ;
-(id)initWithModelNumber:(id)arg1 ;
@end
