/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PBBridgeCAReporter : NSObject
+(void)sendEvent:(id)arg1 with:(id)arg2 ;
+(id)descriptionForSuccessType:(unsigned long long)arg1 ;
+(id)descriptionForTimingType:(unsigned long long)arg1 ;
+(void)pushTimingForTypeNamed:(id)arg1 withValue:(double)arg2 ;
+(id)descriptionForCommTimingType:(unsigned long long)arg1 ;
+(id)stringForSigninPair:(unsigned long long)arg1 ;
+(id)stringForSigninFollowup:(unsigned long long)arg1 ;
+(id)stringForSigninEventDaily:(unsigned long long)arg1 ;
+(id)stringForSigninEventPostPair:(unsigned long long)arg1 ;
+(void)activationServerRespondedAtPage:(unsigned long long)arg1 ;
+(void)incrementSuccessType:(unsigned long long)arg1 ;
+(void)pushTimingType:(unsigned long long)arg1 withValue:(double)arg2 ;
+(void)pushCommunicationTimingType:(unsigned long long)arg1 withValue:(double)arg2 ;
+(void)recordSigninEventPair:(unsigned long long)arg1 ;
+(void)recordSigninEventFollowup:(unsigned long long)arg1 ;
+(void)recordSigninEventDaily:(unsigned long long)arg1 ;
+(void)recordSigninEventPostPair:(unsigned long long)arg1 ;
+(void)recordAlreadyPairedAlertFired:(BOOL)arg1 afterDuration:(double)arg2 hasFiredBefore:(BOOL)arg3 ;
+(void)recordAlreadyPairedAlertLearnedMore:(BOOL)arg1 ;
+(void)recordAlreadyPairedAlertFiredAndWatchRecovered:(double)arg1 ;
+(void)recordEndOfLifePhoneAlertPresented:(BOOL)arg1 ;
+(void)recordEndOfLifePhoneAlertUserResponse:(BOOL)arg1 ;
@end

