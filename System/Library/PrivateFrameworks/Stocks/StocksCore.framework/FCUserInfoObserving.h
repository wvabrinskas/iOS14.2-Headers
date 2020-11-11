/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FCUserInfoObserving <NSObject>
@optional
-(void)userInfoDidChangeFeldsparID:(id)arg1 fromCloud:(BOOL)arg2;
-(void)userInfoDidChangeNotificationsUserID:(id)arg1;
-(void)userInfoDidChangeOnboardingStatus:(id)arg1;
-(void)userInfoDidChangeAdsUserID:(id)arg1 fromCloud:(BOOL)arg2;
-(void)userInfoDidChangeDateLastViewedSaved:(id)arg1 fromCloud:(BOOL)arg2;
-(void)userInfoDidChangeEditorialArticleVersion:(id)arg1;
-(void)userInfo:(id)arg1 didChangeAccessTokenForTagID:(id)arg2;
-(void)userInfo:(id)arg1 didRemoveAccessTokenForTagID:(id)arg2 userInitiated:(BOOL)arg3;
-(void)userInfoDidChangeMarketingNotificationsEnabled:(id)arg1 fromCloud:(BOOL)arg2;
-(void)userInfoDidChangeNewIssueNotificationsEnabled:(id)arg1 fromCloud:(BOOL)arg2;
-(void)userInfoDidChangeEndOfAudioTrackNotificationsEnabled:(id)arg1 fromCloud:(BOOL)arg2;

@end
