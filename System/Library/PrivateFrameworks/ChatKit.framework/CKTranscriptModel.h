/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKTranscriptModelDelegate;
@class CKConversation, NSArray, NSDictionary, NSDiffableDataSourceSnapshot;

@interface CKTranscriptModel : NSObject {

	id<CKTranscriptModelDelegate> _delegate;
	CKConversation* _conversation;
	NSArray* _chatItems;
	NSDictionary* _supplementaryKindToChatItemMap;

}

@property (nonatomic,retain) CKConversation * conversation;                               //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) NSArray * chatItems;                                         //@synthesize chatItems=_chatItems - In the implementation block
@property (nonatomic,retain) NSDictionary * supplementaryKindToChatItemMap;               //@synthesize supplementaryKindToChatItemMap=_supplementaryKindToChatItemMap - In the implementation block
@property (assign,nonatomic,__weak) id<CKTranscriptModelDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSDiffableDataSourceSnapshot * snapshot; 
+(id)transcriptSectionIdentifier;
-(void)reload;
-(id<CKTranscriptModelDelegate>)delegate;
-(CKConversation *)conversation;
-(id)initWithConversation:(id)arg1 delegate:(id)arg2 ;
-(void)setChatItems:(NSArray *)arg1 ;
-(id)chatItemsWithIMChatItems:(id)arg1 ;
-(id)chatItemWithIMChatItem:(id)arg1 traitCollection:(id)arg2 ;
-(void)setDelegate:(id<CKTranscriptModelDelegate>)arg1 ;
-(NSDiffableDataSourceSnapshot *)snapshot;
-(void)setSupplementaryKindToChatItemMap:(NSDictionary *)arg1 ;
-(NSDictionary *)supplementaryKindToChatItemMap;
-(NSArray *)chatItems;
-(void)setConversation:(CKConversation *)arg1 ;
@end

