/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ASFriend, _HKFitnessFriendActivitySnapshot;

@interface ASFriendListRow : NSObject {

	ASFriend* _friend;
	_HKFitnessFriendActivitySnapshot* _snapshot;

}

@property (nonatomic,retain) ASFriend * friend;                                        //@synthesize friend=_friend - In the implementation block
@property (nonatomic,retain) _HKFitnessFriendActivitySnapshot * snapshot;              //@synthesize snapshot=_snapshot - In the implementation block
-(void)setSnapshot:(_HKFitnessFriendActivitySnapshot *)arg1 ;
-(ASFriend *)friend;
-(void)setFriend:(ASFriend *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(_HKFitnessFriendActivitySnapshot *)snapshot;
@end
