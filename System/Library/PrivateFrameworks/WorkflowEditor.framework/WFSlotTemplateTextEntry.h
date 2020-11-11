/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIFont, UIView;


@protocol WFSlotTemplateTextEntry <WFInputViewMutable,WFInputHintProvider,UITextInput>
@property (assign,nonatomic) BOOL clearsZeroWhenTyping; 
@property (nonatomic,readonly) UIFont * font; 
@property (nonatomic,retain) UIView * inputHintView; 
@required
-(void)insertAttributedText:(id)arg1;
-(UIFont *)font;
-(void)setInputHintView:(id)arg1;
-(BOOL)clearsZeroWhenTyping;
-(void)setClearsZeroWhenTyping:(BOOL)arg1;
-(UIView *)inputHintView;

@end
