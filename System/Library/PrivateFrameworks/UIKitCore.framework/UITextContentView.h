/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WebPolicyDelegate.h>
#import <libobjc.A.dylib/WebEditingDelegate.h>
#import <UIKit/UIWebDraggingDelegate.h>
#import <UIKit/UIDragInteractionDelegate_Private.h>
#import <UIKit/UIDropInteractionDelegate_Private.h>
#import <UIKit/UITextInput.h>
#import <UIKit/UITextLinkInteraction.h>
#import <UIKit/UITextInputTraits.h>

@class WebFrame, DOMHTMLElement, UITextInteractionAssistant, UIWebDocumentView, UIFont, UIColor, UIDragInteraction, UIDropInteraction, NSString, NSAttributedString, UITextRange, NSDictionary, UITextPosition, UIView, UITextInputPasswordRules;

@interface UITextContentView : UIView <WebPolicyDelegate, WebEditingDelegate, UIWebDraggingDelegate, UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private, UITextInput, UITextLinkInteraction, UITextInputTraits> {

	id m_delegate;
	WebFrame* m_frame;
	DOMHTMLElement* m_body;
	int m_marginTop;
	UIEdgeInsets m_selectionInset;
	double m_bottomBufferHeight;
	BOOL m_editable;
	BOOL m_editing;
	BOOL m_becomesEditableWithGestures;
	BOOL m_becomingFirstResponder;
	BOOL m_reentrancyGuard;
	BOOL m_scrollsSelectionOnWebDocumentChanges;
	BOOL m_hasExplicitTextAlignment;
	BOOL m_allowsEditingTextAttributes;
	BOOL m_usesAttributedText;
	UITextInteractionAssistant* m_interactionAssistant;
	UIWebDocumentView* m_webView;
	UIFont* m_font;
	UIColor* m_textColor;
	long long m_textAlignment;
	UIDragInteraction* m_dragInteraction;
	UIDropInteraction* m_dropInteraction;
	BOOL _dragInteractionEnabled;

}

@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (assign,nonatomic,__weak) id<UITextContentViewDelegate> delegate; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) NSRange selectedRange; 
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
@property (assign,nonatomic) UIEdgeInsets selectionInset; 
@property (assign,nonatomic) BOOL scrollsSelectionOnWebDocumentChanges; 
@property (assign,nonatomic) BOOL allowsEditingTextAttributes; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (assign,getter=isDragInteractionEnabled,nonatomic) BOOL dragInteractionEnabled;              //@synthesize dragInteractionEnabled=_dragInteractionEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic,__weak) id<UITextInputDelegate> inputDelegate; 
@property (nonatomic,readonly) id<UITextInputTokenizer> tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) long long selectionAffinity; 
@property (nonatomic,readonly) id insertDictationResultPlaceholder; 
@property (nonatomic,readonly) BOOL hasText; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
+(id)excludedElementsForHTML;
-(void)makeTextWritingDirectionNatural:(id)arg1 ;
-(void)replace:(id)arg1 ;
-(void)setSelectedTextRange:(UITextRange *)arg1 ;
-(id)webView;
-(CGRect)_selectionClipRect;
-(BOOL)isEditable;
-(void)unmarkText;
-(NSRange)selectionRange;
-(long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(void)increaseSize:(id)arg1 ;
-(id)metadataDictionariesForDictationResults;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(id)undoManager;
-(NSRange)selectedRange;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(void)_didScroll;
-(UITextPosition *)endOfDocument;
-(id)selectedText;
-(void)setInputDelegate:(id<UITextInputDelegate>)arg1 ;
-(id)interactionAssistant;
-(void)copy:(id)arg1 ;
-(NSDictionary *)markedTextStyle;
-(UITextRange *)markedTextRange;
-(void)selectAll;
-(CGRect)visibleRect;
-(void)_showTextStyleOptions:(id)arg1 ;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2 ;
-(id<UITextInputDelegate>)inputDelegate;
-(id)selectionRectsForRange:(id)arg1 ;
-(void)decreaseSize:(id)arg1 ;
-(void)endSelectionChange;
-(CGRect)firstRectForRange:(id)arg1 ;
-(void)pasteAndMatchStyle:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)toggleBoldface:(id)arg1 ;
-(void)startAutoscroll:(CGPoint)arg1 ;
-(id<UITextInputTokenizer>)tokenizer;
-(id)textInputTraits;
-(void)setSelectionGranularity:(long long)arg1 ;
-(BOOL)resignFirstResponder;
-(void)setFont:(UIFont *)arg1 ;
-(void)_transliterateChinese:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(id)selectionView;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(void)cut:(id)arg1 ;
-(void)beginSelectionChange;
-(BOOL)keyboardInputShouldDelete:(id)arg1 ;
-(BOOL)hasText;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(void)selectAll:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)cancelAutoscroll;
-(id)textInRange:(id)arg1 ;
-(BOOL)canResignFirstResponder;
-(void)setText:(NSString *)arg1 ;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(void)scrollSelectionToVisible:(BOOL)arg1 ;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(void)paste:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(long long)selectionGranularity;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(void)dropInteraction:(id)arg1 concludeDrop:(id)arg2 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(UIEdgeInsets)selectionInset;
-(void)select:(id)arg1 ;
-(id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3 ;
-(BOOL)isFirstResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)rectForSelection:(NSRange)arg1 ;
-(void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3 ;
-(void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3 ;
-(void)setSelectionInset:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 webView:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(void)setSelectionToStart;
-(double)bottomBufferHeight;
-(void)_hideSelectionCommands;
-(id)documentFragmentForPasteboardItemAtIndex:(long long)arg1 ;
-(void)setContentToAttributedString:(id)arg1 ;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(id)contentAsAttributedString;
-(void)displayScrollerIndicators;
-(BOOL)keyboardInputChanged:(id)arg1 ;
-(id<UITextContentViewDelegate>)delegate;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg1 ;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(CGRect)frameForDictationResultPlaceholder:(id)arg1 ;
-(void)removeTextPlaceholder:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(unsigned long long)dataDetectorTypes;
-(CGPoint)offset;
-(long long)textAlignment;
-(UIFont *)font;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)text;
-(UITextRange *)selectedTextRange;
-(void)_share:(id)arg1 ;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(UIColor *)textColor;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(void)_define:(id)arg1 ;
-(void)setMarkedTextStyle:(NSDictionary *)arg1 ;
-(id)positionFromPosition:(id)arg1 offset:(long long)arg2 ;
-(void)setAllowsEditingTextAttributes:(BOOL)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(id)automaticallySelectedOverlay;
-(id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 ;
-(void)setDelegate:(id<UITextContentViewDelegate>)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(BOOL)allowsEditingTextAttributes;
-(long long)selectionAffinity;
-(void)setOffset:(CGPoint)arg1 ;
-(void)didMoveToSuperview;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(long long)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(void)setEditable:(BOOL)arg1 ;
-(id)_keyboardResponder;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(int)marginTop;
-(id)insertTextPlaceholderWithSize:(CGSize)arg1 ;
-(BOOL)hasMarkedText;
-(BOOL)_restoreFirstResponder;
-(void)setMarginTop:(int)arg1 ;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(void)keyboardDidShow:(id)arg1 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3 ;
-(CGRect)visibleTextRect;
-(id)_proxyTextInput;
-(void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2 ;
-(id)fontForCaretSelection;
-(void)setSelectionAffinity:(long long)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setDragInteractionEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(void)_promptForReplace:(id)arg1 ;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(id)styleString;
-(void)updateSelection;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isEditing;
-(BOOL)mightHaveLinks;
-(BOOL)isInteractingWithLink;
-(void)cancelInteractionWithLink;
-(void)tapLinkAtPoint:(CGPoint)arg1 ;
-(void)startInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)updateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)validateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)startLongInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(BOOL)willInteractWithLinkAtPoint:(CGPoint)arg1 ;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(id)insertDictationResultPlaceholder;
-(void)setBottomBufferHeight:(double)arg1 ;
-(void)removeFromSuperview;
-(id)supportedPasteboardTypesForCurrentSelection;
-(void)scrollRangeToVisible:(NSRange)arg1 ;
-(void)_sizeChanged;
-(BOOL)dragInteractionEnabled;
-(UITextPosition *)beginningOfDocument;
-(NSAttributedString *)attributedText;
-(void)commonInitWithWebDocumentView:(id)arg1 isDecoding:(BOOL)arg2 ;
-(void)toggleUnderline:(id)arg1 ;
-(void)webViewDidChange:(id)arg1 ;
-(long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2 ;
-(BOOL)becomesEditableWithGestures;
-(void)setBecomesEditableWithGestures:(BOOL)arg1 ;
-(void)setSelectionChangeCallbacksDisabled:(BOOL)arg1 ;
-(void)updateContentEditableAttribute:(BOOL)arg1 ;
-(void)setScrollsSelectionOnWebDocumentChanges:(BOOL)arg1 ;
-(void)cancelDataDetectorsWithWebLock;
-(void)performBecomeEditableTasks;
-(void)setSelectionToEnd;
-(BOOL)isDragInteractionEnabled;
-(CGRect)caretRectForVisiblePosition:(id)arg1 ;
-(void)ensureSelection;
-(CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)arg1 ;
-(id)undoManagerForWebView:(id)arg1 ;
-(unsigned long long)offsetInMarkedTextForSelection:(id)arg1 ;
-(BOOL)hasSelection;
-(CGPoint)constrainedPoint:(CGPoint)arg1 ;
-(CGRect)rectForScrollToVisible;
-(BOOL)scrollsSelectionOnWebDocumentChanges;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)performScrollSelectionToVisible:(BOOL)arg1 ;
-(BOOL)shouldStartDataDetectors;
-(void)startDataDetectorsWithWebLock;
-(void)setContentToHTMLString:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)_removeTextViewPropertiesFromText:(id)arg1 ;
-(void)_removeAttribute:(id)arg1 fromString:(id)arg2 andSetPropertyWith:(SEL)arg3 usingValueClass:(Class)arg4 ;
-(void)recalculateStyle;
-(void)dealloc;
-(void)resetDataDetectorsResultsWithWebLock;
-(void)setSelectedRange:(NSRange)arg1 ;
-(unsigned long long)_allowedLinkTypes;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(id)contentAsHTMLString;
-(void)_scrollViewWillBeginDragging;
-(void)_scrollViewDidEndDecelerating;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
@end
