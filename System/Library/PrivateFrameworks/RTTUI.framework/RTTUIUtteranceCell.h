/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RTTUI/RTTUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@protocol RTTUIUtteranceCellDelegate;
@class UITextView, CALayer, RTTUtterance, NSString;

@interface RTTUIUtteranceCell : UITableViewCell <UITextViewDelegate> {

	UITextView* _textView;
	CALayer* _bubbleLayer;
	BOOL _editingUtterance;
	BOOL _accessibilityIsUnread;
	RTTUtterance* _utterance;
	id<RTTUIUtteranceCellDelegate> _delegate;

}

@property (assign,setter=_accessibilitySetIsUnread:,getter=_accessibilityIsUnread,nonatomic) BOOL accessibilityIsUnread;              //@synthesize accessibilityIsUnread=_accessibilityIsUnread - In the implementation block
@property (nonatomic,retain) RTTUtterance * utterance;                                                                                //@synthesize utterance=_utterance - In the implementation block
@property (assign,getter=isEditingUtterance,nonatomic) BOOL editingUtterance;                                                         //@synthesize editingUtterance=_editingUtterance - In the implementation block
@property (assign,nonatomic,__weak) id<RTTUIUtteranceCellDelegate> delegate;                                                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightForUtterance:(id)arg1 andWidth:(double)arg2 ;
-(void)updateLayout;
-(id)accessibilityLabel;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id<RTTUIUtteranceCellDelegate>)delegate;
-(RTTUtterance *)utterance;
-(NSRange)selectedTextRange;
-(BOOL)isAccessibilityElement;
-(BOOL)_accessibilityRealtimeCompleted;
-(BOOL)_accessibilityRealtimeHasUnread;
-(void)_accessibilityHandleATFocused:(BOOL)arg1 assistiveTech:(id)arg2 ;
-(void)setUtterance:(RTTUtterance *)arg1 ;
-(void)setDelegate:(id<RTTUIUtteranceCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)dealloc;
-(void)setSendProgressIndex:(unsigned long long)arg1 ;
-(void)updateUtterance:(id)arg1 ;
-(void)setEditingUtterance:(BOOL)arg1 ;
-(void)updateUtterance:(id)arg1 postNotifications:(BOOL)arg2 ;
-(void)_accessibilitySetIsUnread:(BOOL)arg1 ;
-(id)utteranceTextColor;
-(void)adjustTextViewSize;
-(BOOL)_accessibilityIsUnread;
-(BOOL)isEditingUtterance;
@end
