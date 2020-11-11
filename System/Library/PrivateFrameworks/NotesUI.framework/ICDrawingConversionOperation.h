/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class NSManagedObjectID, ICBaseTextAttachment, ICAttachment;

@interface ICDrawingConversionOperation : NSOperation {

	BOOL _isAutomatic;
	NSManagedObjectID* _attachmentID;
	NSManagedObjectID* _finalAttachmentID;
	ICBaseTextAttachment* _textAttachment;
	ICAttachment* _attachment;

}

@property (nonatomic,retain) ICAttachment * attachment;                            //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,readonly) BOOL isAutomatic;                                   //@synthesize isAutomatic=_isAutomatic - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * attachmentID;                   //@synthesize attachmentID=_attachmentID - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * finalAttachmentID;              //@synthesize finalAttachmentID=_finalAttachmentID - In the implementation block
@property (nonatomic,retain) ICBaseTextAttachment * textAttachment;                //@synthesize textAttachment=_textAttachment - In the implementation block
-(void)main;
-(ICAttachment *)attachment;
-(BOOL)isAutomatic;
-(void)setTextAttachment:(ICBaseTextAttachment *)arg1 ;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(ICBaseTextAttachment *)textAttachment;
-(NSManagedObjectID *)attachmentID;
-(id)initWithAttachment:(id)arg1 textAttachment:(id)arg2 automatic:(BOOL)arg3 ;
-(NSManagedObjectID *)finalAttachmentID;
@end
