/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SPAdvertisementCache;

@interface SPFinderInterface : NSObject {

	SPAdvertisementCache* _advertisementCache;

}

@property (nonatomic,retain) SPAdvertisementCache * advertisementCache;              //@synthesize advertisementCache=_advertisementCache - In the implementation block
-(id)stateManager;
-(void)setAdvertisementCache:(SPAdvertisementCache *)arg1 ;
-(id)finderStateManager;
-(id)beaconPayloadCache;
-(SPAdvertisementCache *)advertisementCache;
@end

