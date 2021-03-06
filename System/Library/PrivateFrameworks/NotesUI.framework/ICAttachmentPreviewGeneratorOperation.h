/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class NSManagedObjectID, NSManagedObjectContext, ICAttachmentModel;

@interface ICAttachmentPreviewGeneratorOperation : NSOperation {

	NSManagedObjectID* _attachmentID;
	NSManagedObjectContext* _managedObjectContext;
	ICAttachmentModel* _attachmentModel;

}

@property (retain) NSManagedObjectID * attachmentID;                           //@synthesize attachmentID=_attachmentID - In the implementation block
@property (retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (retain) ICAttachmentModel * attachmentModel;                        //@synthesize attachmentModel=_attachmentModel - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(void)main;
-(unsigned long long)type;
-(ICAttachmentModel *)attachmentModel;
-(void)cancel;
-(NSManagedObjectID *)attachmentID;
-(void)setAttachmentID:(NSManagedObjectID *)arg1 ;
-(void)setAttachmentModel:(ICAttachmentModel *)arg1 ;
-(id)initWithAttachmentManagedObjectID:(id)arg1 ;
@end

