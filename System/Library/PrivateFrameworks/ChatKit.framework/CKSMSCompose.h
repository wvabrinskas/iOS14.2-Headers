/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKSMSCompose <NSObject>
@required
+(BOOL)acceptsMIMEType:(id)arg1;
+(double)maxTrimDurationForAudio;
+(double)maxTrimDurationForVideo;
+(BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
-(void)setUTIs:(id)arg1;
-(void)forceMMS;
-(void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2;
-(void)setContentText:(id)arg1;
-(BOOL)insertMessage:(id)arg1;
-(BOOL)insertRichLinkWithURL:(id)arg1 andData:(id)arg2;
-(void)setPhotoIDs:(id)arg1;
-(void)setCanEditRecipients:(BOOL)arg1;
-(BOOL)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
-(void)setCloudPhotoIDs:(id)arg1;
-(BOOL)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;
-(void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3 chatGUID:(id)arg4 groupName:(id)arg5;
-(void)setPendingAddresses:(id)arg1;
-(void)setContentURLs:(id)arg1;
-(void)setShouldDisableEntryField:(BOOL)arg1;
-(void)disableCameraAttachments;
-(void)setTextEntryContentsVisible:(BOOL)arg1;
-(void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3;
-(void)setUICustomizationData:(id)arg1;
-(void)setShareSheetSessionID:(id)arg1;
-(BOOL)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
-(void)forceCancelComposition;
-(void)setGameCenterModeWithPickerBlock:(/*^block*/id)arg1;

@end

