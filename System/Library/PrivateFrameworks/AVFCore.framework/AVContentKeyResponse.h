/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVContentKeyResponseInternal;

@interface AVContentKeyResponse : NSObject {

	AVContentKeyResponseInternal* _keyResponse;

}
+(id)contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)arg1 ;
+(id)contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)arg1 renewalDate:(id)arg2 ;
+(id)contentKeyResponseWithClearKeyData:(id)arg1 initializationVector:(id)arg2 ;
+(id)contentKeyResponseWithAuthorizationTokenData:(id)arg1 ;
-(id)keySystem;
-(id)initWithKeySystem:(id)arg1 ;
-(void)dealloc;
@end
