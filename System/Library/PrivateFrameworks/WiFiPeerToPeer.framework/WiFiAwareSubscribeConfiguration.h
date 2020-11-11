/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface WiFiAwareSubscribeConfiguration : NSObject <NSSecureCoding> {

	NSString* _serviceName;
	NSData* _serviceSpecificInfo;
	long long _authenticationType;

}

@property (nonatomic,readonly) NSString * serviceName;                    //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) NSData * serviceSpecificInfo;              //@synthesize serviceSpecificInfo=_serviceSpecificInfo - In the implementation block
@property (assign,nonatomic) long long authenticationType;                //@synthesize authenticationType=_authenticationType - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)authenticationType;
-(void)setAuthenticationType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSData *)serviceSpecificInfo;
-(id)initWithServiceName:(id)arg1 serviceSpecificInfo:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)serviceName;
-(BOOL)serviceSpecificInfoEqual:(id)arg1 ;
@end
