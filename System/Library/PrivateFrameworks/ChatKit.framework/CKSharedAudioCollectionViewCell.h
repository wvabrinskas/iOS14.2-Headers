/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/CKSharedContentsCollectionViewCell.h>

@class CKAudioProgressView, UIDateLabel;

@interface CKSharedAudioCollectionViewCell : CKSharedContentsCollectionViewCell {

	CKAudioProgressView* _audioPlaybackView;

}

@property (nonatomic,retain) CKAudioProgressView * audioPlaybackView;              //@synthesize audioPlaybackView=_audioPlaybackView - In the implementation block
@property (nonatomic,retain) UIDateLabel * previewTitleLabel; 
+(id)reuseIdentifier;
-(void)configureWithAttachmentItem:(id)arg1 ;
-(id)formattedDurationTextForAsset:(id)arg1 ;
-(id)formattedCreatedDateTextFromDate:(id)arg1 ;
-(CKAudioProgressView *)audioPlaybackView;
-(void)setAudioPlaybackView:(CKAudioProgressView *)arg1 ;
-(void)layoutSubviews;
@end

