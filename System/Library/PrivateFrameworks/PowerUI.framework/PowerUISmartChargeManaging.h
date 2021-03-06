/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PowerUISmartChargeManaging <NSObject>
@required
-(void)isSmartChargingCurrentlyEnabledWithHandler:(/*^block*/id)arg1;
-(void)resetDevelopmentMode;
-(void)simulateCurrentOutputAsOfDate:(id)arg1 overrideAllSignals:(BOOL)arg2 withHandler:(/*^block*/id)arg3;
-(void)powerLogStatusWithHandler:(/*^block*/id)arg1;
-(void)fullChargeDeadlineWithHandler:(/*^block*/id)arg1;
-(void)isOBCEngagedWithHandler:(/*^block*/id)arg1;
-(void)enterDevelopmentMode;
-(void)isOBCSupportedWithHandler:(/*^block*/id)arg1;
-(void)client:(id)arg1 setState:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3;
-(void)statusWithHandler:(/*^block*/id)arg1;

@end

