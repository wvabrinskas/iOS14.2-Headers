/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, UITextInputMode, NSUUID;


@protocol UITextDocumentProxy <UIKeyInput>
@property (nonatomic,readonly) NSString * documentContextBeforeInput; 
@property (nonatomic,readonly) NSString * documentContextAfterInput; 
@property (nonatomic,readonly) NSString * selectedText; 
@property (nonatomic,readonly) UITextInputMode * documentInputMode; 
@property (nonatomic,copy,readonly) NSUUID * documentIdentifier; 
@required
-(void)unmarkText;
-(NSString *)selectedText;
-(UITextInputMode *)documentInputMode;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2;
-(void)adjustTextPositionByCharacterOffset:(long long)arg1;
-(NSString *)documentContextBeforeInput;
-(NSString *)documentContextAfterInput;
-(NSUUID *)documentIdentifier;

@end
