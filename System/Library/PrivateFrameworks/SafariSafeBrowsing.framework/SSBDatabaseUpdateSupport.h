/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CTCarrierSpaceClient;

@interface SSBDatabaseUpdateSupport : NSObject {

	CTCarrierSpaceClient* _carrierSpaceClient;
	BOOL _onHighCellularDataPlan;

}

@property (nonatomic,readonly) BOOL onHighCellularDataPlan;              //@synthesize onHighCellularDataPlan=_onHighCellularDataPlan - In the implementation block
-(id)init;
-(void)_fetchCellularDataPlan;
-(void)_fetchCellularDataPlanWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)fetchCellularDataPlanSynchronously;
-(BOOL)onHighCellularDataPlan;
@end

