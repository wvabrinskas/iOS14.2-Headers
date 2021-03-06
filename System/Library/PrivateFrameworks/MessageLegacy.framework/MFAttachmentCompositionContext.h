/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSString, NSURL, MFAttachmentManager, NSArray;

@interface MFAttachmentCompositionContext : NSObject {

	NSMutableDictionary* _hostIdentifierToAttachmentContentIDMap;
	NSString* _contextID;
	NSURL* _attachmentsBaseURL;
	MFAttachmentManager* _attachmentsManager;

}

@property (nonatomic,readonly) NSString * contextID;                                //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,retain) NSURL * attachmentsBaseURL;                            //@synthesize attachmentsBaseURL=_attachmentsBaseURL - In the implementation block
@property (nonatomic,retain) MFAttachmentManager * attachmentsManager;              //@synthesize attachmentsManager=_attachmentsManager - In the implementation block
@property (nonatomic,readonly) NSArray * attachments; 
-(id)init;
-(id)initWithContextID:(id)arg1 ;
-(MFAttachmentManager *)attachmentsManager;
-(NSURL *)attachmentsBaseURL;
-(void)setHostIdentifier:(id)arg1 forAttachment:(id)arg2 ;
-(id)attachmentForHostIdentifier:(id)arg1 ;
-(void)setAttachmentsBaseURL:(NSURL *)arg1 ;
-(void)setAttachmentsManager:(MFAttachmentManager *)arg1 ;
-(void)dealloc;
-(NSArray *)attachments;
-(NSString *)contextID;
@end

