/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKPaymentBackgroundDownloadRecord : NSObject <NSSecureCoding> {

	long long _taskType;
	long long _retryCount;

}

@property (assign,nonatomic) long long taskType;                //@synthesize taskType=_taskType - In the implementation block
@property (assign,nonatomic) long long retryCount;              //@synthesize retryCount=_retryCount - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)taskWithType:(long long)arg1 ;
-(void)setRetryCount:(long long)arg1 ;
-(long long)retryCount;
-(void)setTaskType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)taskType;
-(id)initWithCoder:(id)arg1 ;
@end

