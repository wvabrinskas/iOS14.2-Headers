/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface FCAccessChecker : NSObject
-(BOOL)canSynchronouslyCheckAccessToItem:(id)arg1 ;
-(id)init;
-(BOOL)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long*)arg2 error:(id*)arg3 ;
-(void)checkAccessToItem:(id)arg1 withQualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end

