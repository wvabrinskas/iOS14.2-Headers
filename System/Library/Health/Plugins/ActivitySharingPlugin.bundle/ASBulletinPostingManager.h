/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ASBulletinPostingManager <ASActivitySharingManagerReadyObserver>
@property (assign,nonatomic,__weak) id<ASBulletinPostingManagerDelegate> delegate; 
@required
-(void)postNotificationRequest:(id)arg1;
-(id<ASBulletinPostingManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)handleNotificationResponse:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeNotificationWithIdentifier:(id)arg1;
-(void)enqueueBulletins:(id)arg1 withPostingSyle:(long long)arg2;
-(void)removeCompetitionNotificationsForFriendUUID:(id)arg1;
-(void)registerNotificationCategories:(id)arg1;
-(void)postFakeBulletins:(id)arg1;

@end

