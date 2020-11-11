/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOTransitRouteUpdaterDelegate <NSObject>
@optional
-(void)transitRouteUpdater:(id)arg1 willSendRequests:(id)arg2;
-(void)transitRouteUpdater:(id)arg1 willUpdateTransitForRouteIDs:(id)arg2;
-(void)transitRouteUpdater:(id)arg1 didFailUpdateForRouteIDs:(id)arg2 withError:(id)arg3;
-(void)transitRouteUpdater:(id)arg1 didTimeoutForRouteIDs:(id)arg2;
-(void)transitRouteUpdater:(id)arg1 didReceiveResponse:(id)arg2;
-(void)transitRouteUpdater:(id)arg1 didUpdateTransitRoutes:(id)arg2;

@end
