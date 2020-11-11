/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
@class NSMutableArray;

@interface BLTSimpleCache : NSObject {

	NSMutableArray* _objects;
	unsigned long long _capacity;
	os_unfair_lock_s _lock;

}
-(id)objects;
-(void)cacheObject:(id)arg1 ;
-(id)description;
-(id)initWithCapacity:(unsigned long long)arg1 ;
@end
