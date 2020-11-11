/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class PKPeerPaymentBubbleView, CKTranscriptPluginBalloonView;

@interface PKPeerPaymentMessageBalloonView : UIView {

	PKPeerPaymentBubbleView* _bubbleView;
	long long _peerPaymentType;
	CKTranscriptPluginBalloonView* _balloonView;

}

@property (nonatomic,retain) CKTranscriptPluginBalloonView * balloonView;              //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentBubbleView * bubbleView;                   //@synthesize bubbleView=_bubbleView - In the implementation block
@property (nonatomic,readonly) long long peerPaymentType;                              //@synthesize peerPaymentType=_peerPaymentType - In the implementation block
-(void)layoutSubviews;
-(void)_updateTailOrientation;
-(id)initWithBubbleView:(id)arg1 peerPaymentType:(long long)arg2 ;
-(PKPeerPaymentBubbleView *)bubbleView;
-(long long)peerPaymentType;
-(CKTranscriptPluginBalloonView *)balloonView;
-(void)setBalloonView:(CKTranscriptPluginBalloonView *)arg1 ;
@end
