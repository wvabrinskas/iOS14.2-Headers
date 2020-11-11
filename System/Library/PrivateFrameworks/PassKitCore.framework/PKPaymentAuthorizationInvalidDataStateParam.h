/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSArray, NSError;

@interface PKPaymentAuthorizationInvalidDataStateParam : PKPaymentAuthorizationStateParam {

	long long _dataType;
	long long _status;
	NSArray* _clientErrors;
	NSError* _error;

}

@property (assign,nonatomic) long long dataType;                  //@synthesize dataType=_dataType - In the implementation block
@property (assign,nonatomic) long long status;                    //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSArray * clientErrors;              //@synthesize clientErrors=_clientErrors - In the implementation block
@property (nonatomic,retain) NSError * error;                     //@synthesize error=_error - In the implementation block
+(id)paramWithDataType:(long long)arg1 status:(long long)arg2 error:(id)arg3 clientErrors:(id)arg4 ;
-(long long)dataType;
-(long long)status;
-(NSError *)error;
-(void)setStatus:(long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setDataType:(long long)arg1 ;
-(id)description;
-(void)setClientErrors:(NSArray *)arg1 ;
-(NSArray *)clientErrors;
@end
