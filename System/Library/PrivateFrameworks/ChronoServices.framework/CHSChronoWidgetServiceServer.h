/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CHSChronoWidgetServiceServer <NSObject>
@required
-(void)removeClient:(id)arg1;
-(void)reloadTimelineForAvocadoWithIdentifier:(id)arg1 inBundleWithIdentifier:(id)arg2 error:(id*)arg3;
-(oneway void)setMetricsSpecification:(id)arg1;
-(oneway void)applicationWithBundleIdentifierEnteredForeground:(id)arg1;
-(oneway void)expireLocationGracePeriods;
-(oneway void)flushPowerlog;
-(id)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)arg1 info:(id)arg2;
-(id)widgetEnvironmentDataForBundleIdentifier:(id)arg1;
-(oneway void)setConfiguredWidgetContainerDescriptors:(id)arg1;
-(void)addClient:(id)arg1;

@end
