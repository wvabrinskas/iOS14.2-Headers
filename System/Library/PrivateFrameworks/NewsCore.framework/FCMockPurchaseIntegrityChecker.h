/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCPurchaseIntegrityChecker.h>

@interface FCMockPurchaseIntegrityChecker : NSObject <FCPurchaseIntegrityChecker> {

	unsigned long long _mockedCheckResult;

}

@property (assign,nonatomic) unsigned long long mockedCheckResult;              //@synthesize mockedCheckResult=_mockedCheckResult - In the implementation block
+(id)mockPurchaseIntegrityCheckForSuccess;
+(id)mockPurchaseIntegrityCheckForFailure;
-(void)isUserEntitledToSubscriptionForPurchaseID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMockedCheckResult:(unsigned long long)arg1 ;
-(unsigned long long)mockedCheckResult;
@end

