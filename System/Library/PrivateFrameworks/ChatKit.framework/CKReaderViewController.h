/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol CKReaderViewControllerDelegate;
@class NSString, UITextView, NSAttributedString;

@interface CKReaderViewController : UIViewController <UIWebViewDelegate> {

	id<CKReaderViewControllerDelegate> _delegate;
	NSString* _messageGUID;
	UITextView* _textView;

}

@property (nonatomic,retain) UITextView * textView;                                           //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic,__weak) id<CKReaderViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * messageGUID;                                            //@synthesize messageGUID=_messageGUID - In the implementation block
@property (nonatomic,copy) NSAttributedString * text; 
@property (assign,nonatomic) NSRange visibleRange; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)readerViewControllerForChatItem:(id)arg1 ;
+(id)readerScrollPositionCache;
-(UITextView *)textView;
-(void)setText:(NSAttributedString *)arg1 ;
-(id)init;
-(id<CKReaderViewControllerDelegate>)delegate;
-(NSAttributedString *)text;
-(void)setTextView:(UITextView *)arg1 ;
-(NSRange)visibleRange;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setDelegate:(id<CKReaderViewControllerDelegate>)arg1 ;
-(BOOL)shouldAutorotate;
-(NSString *)messageGUID;
-(void)setMessageGUID:(NSString *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)setVisibleRange:(NSRange)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)dealloc;
@end

