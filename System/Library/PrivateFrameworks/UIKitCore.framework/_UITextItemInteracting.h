/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UITextItemInteracting <UITextInput,_UITextContent>
@optional
-(BOOL)_delegatesAllowingTextItemInteractions;
-(BOOL)_allowHighlightForTextInteractableItem:(id)arg1;

@required
-(BOOL)_mightHaveInteractableItems;
-(id)_anyTextItemConstrainedToLineAtPoint:(CGPoint)arg1;
-(id)_textInteractableItemAtPoint:(CGPoint)arg1 precision:(unsigned long long)arg2;
-(id)_targetedPreviewForTextInteractableItem:(id)arg1 dismissing:(BOOL)arg2;
-(BOOL)_allowInteraction:(long long)arg1 forTextInteractableItem:(id)arg2;

@end
