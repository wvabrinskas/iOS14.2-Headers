/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FMFCore.framework/FMFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FMFCore/FMFSessionDelegate.h>

@interface FMFCore.FMFGenericResponseHandler : NSObject <FMFSessionDelegate> {

	 delegate;
	 fmfSession;
	 fences;
	 locationShifter;
	 updateQueue;
	 locationAlertsOnMeByMe;
	 locationAlertsOnMeByFriends;
	 locationAlertsOnFriendsByMe;
	 locationAlertsOnFriendsByFriends;
	 dataManager;

}
-(void)didUpdateFences:(id)arg1 ;
-(id)init;
@end
