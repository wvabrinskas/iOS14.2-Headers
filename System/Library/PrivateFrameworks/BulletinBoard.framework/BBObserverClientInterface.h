/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BBObserverClientInterface
@required
-(void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;
-(void)updateBulletin:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)noteBulletinsLoadedForSectionID:(id)arg1;
-(void)updateGlobalSettings:(id)arg1;
-(void)updateSectionInfo:(id)arg1;
-(void)noteServerReceivedResponseForBulletin:(id)arg1;
-(void)removeSection:(id)arg1;
-(void)getObserverDebugInfo:(/*^block*/id)arg1;

@end

