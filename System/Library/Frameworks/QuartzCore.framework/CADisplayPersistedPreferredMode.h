/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface CADisplayPersistedPreferredMode : NSObject <NSSecureCoding> {

	NSString* _uuid;
	NSDictionary* _mode;

}

@property (nonatomic,copy) NSString * uuid;                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSDictionary * mode;              //@synthesize mode=_mode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUuid:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)mode;
-(void)setMode:(NSDictionary *)arg1 ;
-(id)description;
-(NSString *)uuid;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end
