/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIDragInteractionDelegate_Private.h>

@protocol MFDragSourceDelegate;
@class UIView, UIDragInteraction, NSString;

@interface MFDragSource : NSObject <UIDragInteractionDelegate_Private> {

	struct {
		BOOL respondsToTeamDataForItem;
		BOOL respondsToTargetedPreviewForItem;
		BOOL respondsToPreviewForItem;
		BOOL respondsToSuggestedNameForItem;
		BOOL respondsToLocalObjectForItem;
		BOOL respondsToDragWillEnd;
		BOOL respondsToAllowsMoveOperation;
		BOOL respondsToIsRestrictedToMail;
		BOOL respondsToDataOwner;
	}  _delegateFlags;
	BOOL _allowsDragOverridingMasterSwitch;
	UIView* _sourceView;
	id<MFDragSourceDelegate> _delegate;
	UIDragInteraction* _dragInteraction;

}

@property (assign,nonatomic,__weak) id<MFDragSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIDragInteraction * dragInteraction;                   //@synthesize dragInteraction=_dragInteraction - In the implementation block
@property (nonatomic,__weak,readonly) UIView * sourceView;                          //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) BOOL allowsDragOverridingMasterSwitch;                 //@synthesize allowsDragOverridingMasterSwitch=_allowsDragOverridingMasterSwitch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)setDragInteraction:(UIDragInteraction *)arg1 ;
-(UIView *)sourceView;
-(id)initWithView:(id)arg1 delegate:(id)arg2 ;
-(UIDragInteraction *)dragInteraction;
-(id<MFDragSourceDelegate>)delegate;
-(BOOL)_dragInteractionAllowsDragOverridingMasterSwitch:(id)arg1 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3 ;
-(void)setDelegate:(id<MFDragSourceDelegate>)arg1 ;
-(void)setAllowsDragOverridingMasterSwitch:(BOOL)arg1 ;
-(BOOL)allowsDragOverridingMasterSwitch;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(BOOL)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2 ;
@end

