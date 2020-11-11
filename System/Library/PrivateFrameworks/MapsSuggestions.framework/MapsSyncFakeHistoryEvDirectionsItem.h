/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSuggestions/MapsSyncFakeHistoryDirectionsItem.h>
#import <MapsSuggestions/MapsSyncHistoryEvDirectionsItem.h>

@class NSString, GEOStorageRouteRequestStorage, NSUUID, NSDate;

@interface MapsSyncFakeHistoryEvDirectionsItem : MapsSyncFakeHistoryDirectionsItem <MapsSyncHistoryEvDirectionsItem> {

	double _requiredCharge;
	NSString* _vehicleIdentifier;

}

@property (nonatomic,readonly) double requiredCharge;                                            //@synthesize requiredCharge=_requiredCharge - In the implementation block
@property (nonatomic,copy,readonly) NSString * vehicleIdentifier;                                //@synthesize vehicleIdentifier=_vehicleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL navigationInterrupted; 
@property (nonatomic,readonly) GEOStorageRouteRequestStorage * routeRequestStorage; 
@property (nonatomic,copy,readonly) NSUUID * identifier; 
@property (nonatomic,copy,readonly) NSDate * createTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)requiredCharge;
-(NSString *)vehicleIdentifier;
-(id)initWithIdentifier:(id)arg1 createTime:(id)arg2 routeRequestStorage:(id)arg3 navigationInterrupted:(BOOL)arg4 requiredCharge:(double)arg5 vehicleIdentifier:(id)arg6 ;
@end
