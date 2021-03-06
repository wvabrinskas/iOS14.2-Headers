/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue, AFInterstitialProviderDelegate;
@class NSObject, AFInterstitialConfiguration, NSMutableArray, NSString;

@interface AFInterstitialProvider : NSObject <AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	AFInterstitialConfiguration* _configuration;
	NSMutableArray* _pendingActions;
	id _context;
	id<AFInterstitialProviderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_performNextActionWithExpectedDelay:(double)arg1 ;
-(void)_invalidate;
-(id)initWithStyle:(long long)arg1 recordRoute:(id)arg2 isVoiceTrigger:(BOOL)arg3 isDucking:(BOOL)arg4 isTwoShot:(BOOL)arg5 speechEndHostTime:(unsigned long long)arg6 context:(id)arg7 delegate:(id)arg8 ;
-(void)invalidate;
-(void)dealloc;
@end

