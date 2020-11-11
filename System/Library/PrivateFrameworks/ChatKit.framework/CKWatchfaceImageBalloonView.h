/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKImageBalloonView.h>
#import <libobjc.A.dylib/LPLinkViewDelegate.h>

@class LPLinkMetadata, LPLinkView, NSString;

@interface CKWatchfaceImageBalloonView : CKImageBalloonView <LPLinkViewDelegate> {

	BOOL _isIrisAsset;
	LPLinkMetadata* _metadata;
	LPLinkView* _linkView;

}

@property (nonatomic,retain) LPLinkView * linkView;                  //@synthesize linkView=_linkView - In the implementation block
@property (nonatomic,retain) LPLinkMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForDisplay;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(void)tapGestureRecognized:(id)arg1 ;
-(LPLinkMetadata *)metadata;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(void)layoutSubviews;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 hasInvisibleInkEffect:(BOOL)arg4 ;
-(void)setLinkView:(LPLinkView *)arg1 ;
-(void)prepareForReuse;
-(void)linkViewNeedsResize:(id)arg1 ;
-(void)_linkViewMetadataDidBecomeComplete:(id)arg1 ;
-(BOOL)isIrisAsset;
-(LPLinkView *)linkView;
-(void)setIsIrisAsset:(BOOL)arg1 ;
@end
