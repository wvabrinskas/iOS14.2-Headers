/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSupport/MSPSenderStrategy.h>

@interface MSPSenderLiveStrategy : MSPSenderStrategy {

	BOOL _needToSendRoute;

}
-(void)setState:(id)arg1 ;
-(void)addParticipants:(id)arg1 ;
-(void)etaUpdated:(id)arg1 ;
-(void)destinationUpdated:(id)arg1 ;
-(void)routeUpdated:(id)arg1 ;
-(void)trafficUpdated:(id)arg1 ;
-(BOOL)_needToSendEtaRefreshFor:(id)arg1 ;
@end

