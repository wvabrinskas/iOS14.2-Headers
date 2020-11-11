/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BBBulletin;

@interface BLTBulletinDistributorBulletinUpdate : NSObject {

	unsigned long long _updateType;
	BBBulletin* _bulletin;
	unsigned long long _feed;

}

@property (assign,nonatomic) unsigned long long updateType;              //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,retain) BBBulletin * bulletin;                      //@synthesize bulletin=_bulletin - In the implementation block
@property (assign,nonatomic) unsigned long long feed;                    //@synthesize feed=_feed - In the implementation block
+(id)bulletinUpdateWithType:(unsigned long long)arg1 bulletin:(id)arg2 feed:(unsigned long long)arg3 ;
-(unsigned long long)updateType;
-(void)setUpdateType:(unsigned long long)arg1 ;
-(void)setFeed:(unsigned long long)arg1 ;
-(BBBulletin *)bulletin;
-(void)setBulletin:(BBBulletin *)arg1 ;
-(unsigned long long)feed;
@end
