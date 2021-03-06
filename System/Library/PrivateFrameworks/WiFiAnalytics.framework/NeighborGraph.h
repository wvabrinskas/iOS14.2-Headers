/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSMutableArray;

@interface NeighborGraph : NSObject {

	NSArray* _bssids;
	NSMutableArray* _graph;

}

@property (nonatomic,retain) NSArray * bssids;                    //@synthesize bssids=_bssids - In the implementation block
@property (nonatomic,retain) NSMutableArray * graph;              //@synthesize graph=_graph - In the implementation block
-(NSMutableArray *)graph;
-(void)setGraph:(NSMutableArray *)arg1 ;
-(NSArray *)bssids;
-(BOOL)doesPathExist:(id)arg1 target:(id)arg2 ;
-(id)initWithBssidArray:(id)arg1 ;
-(void)setNeighborsForBssid:(id)arg1 neighbors:(id)arg2 ;
-(unsigned long long)graphDensity;
-(void)setBssids:(NSArray *)arg1 ;
@end

