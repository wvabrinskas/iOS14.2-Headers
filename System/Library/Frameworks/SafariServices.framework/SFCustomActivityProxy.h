/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIImage;

@interface SFCustomActivityProxy : NSObject <NSCopying, NSSecureCoding> {

	NSString* _activityType;
	NSString* _activityTitle;
	UIImage* _activityImage;
	unsigned long long _activityProxyID;

}

@property (nonatomic,readonly) NSString * activityType;                         //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) NSString * activityTitle;                        //@synthesize activityTitle=_activityTitle - In the implementation block
@property (nonatomic,readonly) UIImage * activityImage;                         //@synthesize activityImage=_activityImage - In the implementation block
@property (nonatomic,readonly) unsigned long long activityProxyID;              //@synthesize activityProxyID=_activityProxyID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)activityType;
-(NSString *)activityTitle;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)activityTypeWithActivity:(id)arg1 ;
-(id)_initWithActivityType:(id)arg1 title:(id)arg2 image:(id)arg3 proxyID:(unsigned long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(UIImage *)activityImage;
-(unsigned long long)activityProxyID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithActivity:(id)arg1 ;
@end
