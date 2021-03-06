/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowUI/WFCompactThumbnailViewController.h>

@class NSString, UITextView;

@interface WFCompactTextThumbnailViewController : WFCompactThumbnailViewController {

	NSString* _string;
	UITextView* _textView;

}

@property (nonatomic,readonly) NSString * string;                       //@synthesize string=_string - In the implementation block
@property (assign,nonatomic,__weak) UITextView * textView;              //@synthesize textView=_textView - In the implementation block
-(UITextView *)textView;
-(id)initWithString:(id)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)loadView;
-(double)contentHeightForWidth:(double)arg1 ;
-(NSString *)string;
-(unsigned long long)preferredContentMode;
@end

