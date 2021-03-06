/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface DNDDevice : NSObject <NSCopying> {

	unsigned long long _deviceClass;
	unsigned long long _deviceCapabilities;

}

@property (nonatomic,readonly) unsigned long long deviceClass;                     //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceCapabilities;              //@synthesize deviceCapabilities=_deviceCapabilities - In the implementation block
+(id)currentDevice;
+(id)deviceWithClass:(unsigned long long)arg1 deviceCapabilities:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(unsigned long long)deviceClass;
-(unsigned long long)deviceCapabilities;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithClass:(unsigned long long)arg1 deviceCapabilities:(unsigned long long)arg2 ;
@end

