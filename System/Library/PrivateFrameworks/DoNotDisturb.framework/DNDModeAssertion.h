/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate, DNDModeAssertionDetails, DNDModeAssertionSource;

@interface DNDModeAssertion : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSDate* _startDate;
	DNDModeAssertionDetails* _details;
	DNDModeAssertionSource* _source;

}

@property (nonatomic,copy,readonly) NSUUID * UUID;                                  //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) DNDModeAssertionDetails * details;              //@synthesize details=_details - In the implementation block
@property (nonatomic,copy,readonly) DNDModeAssertionSource * source;                //@synthesize source=_source - In the implementation block
+(BOOL)supportsSecureCoding;
-(DNDModeAssertionDetails *)details;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(DNDModeAssertionSource *)source;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithUUID:(id)arg1 startDate:(id)arg2 details:(id)arg3 source:(id)arg4 ;
@end

