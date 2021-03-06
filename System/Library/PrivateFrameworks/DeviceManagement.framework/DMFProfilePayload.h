/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DMFProfilePayload : NSObject <NSCopying, NSSecureCoding> {

	NSString* _type;
	NSString* _identifier;
	long long _payloadVersion;
	NSString* _displayName;
	NSString* _organization;
	NSString* _payloadDescription;

}

@property (nonatomic,copy,readonly) NSString * type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long payloadVersion;                        //@synthesize payloadVersion=_payloadVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * organization;                    //@synthesize organization=_organization - In the implementation block
@property (nonatomic,copy,readonly) NSString * payloadDescription;              //@synthesize payloadDescription=_payloadDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)payloadDescription;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(long long)payloadVersion;
-(id)initWithType:(id)arg1 identifier:(id)arg2 payloadVersion:(long long)arg3 displayName:(id)arg4 organization:(id)arg5 payloadDescription:(id)arg6 ;
-(NSString *)displayName;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)organization;
-(NSString *)type;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

