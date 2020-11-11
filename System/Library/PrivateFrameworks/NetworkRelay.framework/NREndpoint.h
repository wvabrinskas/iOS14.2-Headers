/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkRelay/NetworkRelay-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_nw_endpoint;
@class NRDeviceIdentifier, NSString, NWEndpoint, NSObject;

@interface NREndpoint : NSObject <NSCopying> {

	unsigned char _dataProtectionClass;
	NRDeviceIdentifier* _deviceIdentifier;
	NSString* _portString;
	NWEndpoint* _endpoint;
	NSObject*<OS_nw_endpoint> _cEndpoint;

}

@property (nonatomic,retain) NRDeviceIdentifier * deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * portString;                              //@synthesize portString=_portString - In the implementation block
@property (assign,nonatomic) unsigned char dataProtectionClass;                  //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
@property (nonatomic,retain) NWEndpoint * endpoint;                              //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_endpoint> cEndpoint;                //@synthesize cEndpoint=_cEndpoint - In the implementation block
-(void)setDeviceIdentifier:(NRDeviceIdentifier *)arg1 ;
-(id)description;
-(NWEndpoint *)endpoint;
-(id)copyEndpoint;
-(void)setDataProtectionClass:(unsigned char)arg1 ;
-(unsigned char)dataProtectionClass;
-(void)setEndpoint:(NWEndpoint *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NRDeviceIdentifier *)deviceIdentifier;
-(id)initWithDeviceIdentifier:(id)arg1 portString:(id)arg2 dataProtectionClass:(unsigned char)arg3 ;
-(id)copyNWEndpoint;
-(NSString *)portString;
-(void)setPortString:(NSString *)arg1 ;
-(NSObject*<OS_nw_endpoint>)cEndpoint;
-(void)setCEndpoint:(NSObject*<OS_nw_endpoint>)arg1 ;
@end
