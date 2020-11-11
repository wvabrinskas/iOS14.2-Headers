/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmbeddedDataReset.framework/EmbeddedDataReset
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class DDRResetOptions, NSString;

@interface DDRResetRequest : NSObject <NSSecureCoding> {

	long long _mode;
	DDRResetOptions* _options;
	NSString* _reason;

}

@property (nonatomic,readonly) long long mode;                         //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) DDRResetOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                 //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)reason;
-(void)encodeWithCoder:(id)arg1 ;
-(DDRResetOptions *)options;
-(long long)mode;
-(id)initWithMode:(long long)arg1 options:(id)arg2 reason:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
@end
