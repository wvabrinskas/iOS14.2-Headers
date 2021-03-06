/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSDate;

@interface ASDTestFlightServiceExtensionPushMessage : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _userInfo;
	NSDate* _timestamp;

}

@property (nonatomic,readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)userInfo;
-(id)initWithTimestamp:(id)arg1 userInfo:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

