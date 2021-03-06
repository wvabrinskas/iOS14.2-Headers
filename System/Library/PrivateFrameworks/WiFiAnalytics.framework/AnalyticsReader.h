/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AnalyticsStoreMOHandler;

@interface AnalyticsReader : NSObject {

	AnalyticsStoreMOHandler* _managedObjectHandler;

}

@property (nonatomic,retain) AnalyticsStoreMOHandler * managedObjectHandler;              //@synthesize managedObjectHandler=_managedObjectHandler - In the implementation block
-(id)neighborsForBSS:(id)arg1 ssid:(id)arg2 ;
-(id)init;
-(void)setManagedObjectHandler:(AnalyticsStoreMOHandler *)arg1 ;
-(AnalyticsStoreMOHandler *)managedObjectHandler;
-(unsigned long long)manualLeaveCountForBss:(id)arg1 ssid:(id)arg2 ;
-(long long)rssiRoamTriggerForBSS:(id)arg1 ssid:(id)arg2 ;
-(BOOL)parsedBeaconInfoIsStored:(id)arg1 ssid:(id)arg2 ;
-(id)neighborChannelsForBSS:(id)arg1 ssid:(id)arg2 ;
-(long long)autoLeaveRssiForBss:(id)arg1 ssid:(id)arg2 ;
@end

