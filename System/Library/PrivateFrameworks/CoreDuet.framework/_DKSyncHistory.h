/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface _DKSyncHistory : NSObject {

	NSDate* _lastSyncDate;
	unsigned long long _lastDaySyncCount;

}

@property (nonatomic,readonly) NSDate * lastSyncDate;                            //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (nonatomic,readonly) unsigned long long lastDaySyncCount;              //@synthesize lastDaySyncCount=_lastDaySyncCount - In the implementation block
-(id)init;
-(NSDate *)lastSyncDate;
-(id)initWithLastSyncDate:(id)arg1 lastDaySyncCount:(unsigned long long)arg2 ;
-(id)description;
-(unsigned long long)lastDaySyncCount;
@end
