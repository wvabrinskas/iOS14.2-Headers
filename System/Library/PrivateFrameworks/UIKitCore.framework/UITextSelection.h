/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UITextInputPrivate;
#import <UIKitCore/UIKitCore-Structs.h>
@class UIResponder, UITextRange, DOMRange;

@interface UITextSelection : NSObject {

	UIResponder*<UITextInputPrivate> _document;
	long long _granularity;
	UITextRange* _selectedRange;
	UITextRange* _base;
	UITextRange* _initialExtent;
	BOOL _isCommitting;

}

@property (nonatomic,__weak,readonly) UIResponder*<UITextInputPrivate> document;              //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) UITextRange * selectedRange;                                     //@synthesize selectedRange=_selectedRange - In the implementation block
@property (assign,nonatomic) long long granularity;                                           //@synthesize granularity=_granularity - In the implementation block
@property (nonatomic,readonly) BOOL isCommitting;                                             //@synthesize isCommitting=_isCommitting - In the implementation block
@property (nonatomic,readonly) BOOL willSelectionChange; 
@property (nonatomic,retain) UITextRange * base;                                              //@synthesize base=_base - In the implementation block
@property (nonatomic,retain) UITextRange * initialExtent;                                     //@synthesize initialExtent=_initialExtent - In the implementation block
@property (getter=_domRange,nonatomic,readonly) DOMRange * domRange; 
-(id)wordContainingCaretSelection;
-(UITextRange *)selectedRange;
-(id)selectedText;
-(void)selectAll;
-(UITextRange *)base;
-(void)commit;
-(void)setBase:(UITextRange *)arg1 ;
-(unsigned long long)offsetInMarkedText;
-(void)setRangedSelectionBaseToCurrentSelection;
-(void)setHybridSelectionWithPoint:(CGPoint)arg1 ;
-(UIResponder*<UITextInputPrivate>)document;
-(void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
-(BOOL)isRangedSelectionSpanningDocument;
-(void)extendSelectionToPoint:(CGPoint)arg1 ;
-(BOOL)willSelectionChange;
-(BOOL)setRangedSelectionExtentPoint:(CGPoint)arg1 baseIsStart:(BOOL)arg2 ;
-(CGRect)caretRect;
-(void)alterSelection:(CGPoint)arg1 granularity:(long long)arg2 ;
-(id)selectionRects;
-(id)_domRange;
-(BOOL)hasEditableSelection;
-(UITextRange *)initialExtent;
-(CGRect)caretRectAtEndOfDocument;
-(CGPoint)clipPoint:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(void)smartExtendRangedSelection:(int)arg1 downstream:(BOOL)arg2 ;
-(void)setSelectionWithFirstPoint:(CGPoint)arg1 secondPoint:(CGPoint)arg2 ;
-(CGRect)closestCaretRectForPoint:(CGPoint)arg1 inSelection:(BOOL)arg2 ;
-(void)setRangedSelectionInitialExtentToCurrentSelectionStart;
-(id)initWithDocument:(id)arg1 ;
-(void)increaseSelectionGranularity;
-(BOOL)isCommitting;
-(void)collapseSelection;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(void)clearRangedSelectionInitialExtent;
-(BOOL)pointAtStartOfLine:(CGPoint)arg1 ;
-(void)setGranularRangedSelectionWithExtentPoint:(CGPoint)arg1 ;
-(void)aggressivelyExpandSelectionToSmartSelectionContainingCaretSelection;
-(void)setInitialExtent:(UITextRange *)arg1 ;
-(void)aggressivelyExpandSelectionToWordContainingCaretSelection;
-(BOOL)setRangedSelectionExtentPoint:(CGPoint)arg1 baseIsStart:(BOOL)arg2 allowFlipping:(BOOL)arg3 ;
-(BOOL)pointAtEndOfLine:(CGPoint)arg1 ;
-(void)setRangedSelectionBaseToCurrentSelectionStart;
-(long long)granularity;
-(CGRect)caretRectAtBeginOfDocument;
-(void)selectionChanged;
-(void)setRangedSelectionWithExtentPoint:(CGPoint)arg1 ;
-(void)clearSelection;
-(void)moveCaretToBoundaryOfWhitespaceOrLine;
-(void)invalidate;
-(void)alterSelectionGranularity:(long long)arg1 ;
-(void)dealloc;
-(void)setGranularity:(long long)arg1 ;
-(void)setSelectedRange:(UITextRange *)arg1 ;
-(void)setRangedSelectionBaseToCurrentSelectionEnd;
@end

