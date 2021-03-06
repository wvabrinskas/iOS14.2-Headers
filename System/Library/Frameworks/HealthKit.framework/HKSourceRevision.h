/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKSource, NSString;

@interface HKSourceRevision : NSObject <NSSecureCoding, NSCopying> {

	HKSource* _source;
	NSString* _version;
	NSString* _productType;
	SCD_Struct_HK3 _operatingSystemVersion;

}

@property (readonly) HKSource * source;                                  //@synthesize source=_source - In the implementation block
@property (readonly) NSString * version;                                 //@synthesize version=_version - In the implementation block
@property (copy,readonly) NSString * productType;                        //@synthesize productType=_productType - In the implementation block
@property (readonly) SCD_Struct_HK3 operatingSystemVersion;              //@synthesize operatingSystemVersion=_operatingSystemVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(unsigned long long)hash;
-(SCD_Struct_HK3)operatingSystemVersion;
-(NSString *)version;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSource:(id)arg1 version:(id)arg2 productType:(id)arg3 operatingSystemVersion:(SCD_Struct_HK3)arg4 ;
-(id)initWithSource:(id)arg1 version:(id)arg2 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(HKSource *)source;
-(id)initWithCoder:(id)arg1 ;
-(void)_setVersion:(id)arg1 ;
-(id)_initWithSource:(id)arg1 ;
-(void)_setSource:(id)arg1 ;
-(NSString *)productType;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

