/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDictionary;


@protocol TUConversationManagerDataSource <NSObject>
@property (nonatomic,copy,readonly) NSDictionary * conversationsByGroupUUID; 
@property (assign,nonatomic,__weak) id<TUConversationManagerDataSourceDelegate> delegate; 
@property (assign,nonatomic,__weak) id<TUConversationMediaControllerDataSourceDelegate> mediaDelegate; 
@required
-(void)setDownlinkMuted:(BOOL)arg1 forRemoteParticipantsInConversation:(id)arg2;
-(id<TUConversationManagerDataSourceDelegate>)delegate;
-(id<TUConversationMediaControllerDataSourceDelegate>)mediaDelegate;
-(void)updateConversationWithUUID:(id)arg1 participantPresentationContexts:(id)arg2;
-(void)buzzMember:(id)arg1 conversation:(id)arg2;
-(void)setDelegate:(id)arg1;
-(NSDictionary *)conversationsByGroupUUID;
-(void)registerWithCompletionHandler:(/*^block*/id)arg1;
-(void)setMediaDelegate:(id)arg1;
-(void)addRemoteMembers:(id)arg1 toConversation:(id)arg2;
-(void)invalidate;

@end

