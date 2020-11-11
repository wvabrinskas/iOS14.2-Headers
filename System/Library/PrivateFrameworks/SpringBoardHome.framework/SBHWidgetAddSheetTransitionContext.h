/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class SBHAddWidgetSheetGalleryCollectionViewCell, SBHWidgetAddSheetAnimationController, NSString;

@interface SBHWidgetAddSheetTransitionContext : NSObject <UIViewControllerTransitioningDelegate> {

	SBHAddWidgetSheetGalleryCollectionViewCell* _sourceCell;
	SBHWidgetAddSheetAnimationController* _animationController;

}

@property (nonatomic,retain) SBHAddWidgetSheetGalleryCollectionViewCell * sourceCell;                 //@synthesize sourceCell=_sourceCell - In the implementation block
@property (nonatomic,retain) SBHWidgetAddSheetAnimationController * animationController;              //@synthesize animationController=_animationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(SBHWidgetAddSheetAnimationController *)animationController;
-(SBHAddWidgetSheetGalleryCollectionViewCell *)sourceCell;
-(void)setAnimationController:(SBHWidgetAddSheetAnimationController *)arg1 ;
-(void)setSourceCell:(SBHAddWidgetSheetGalleryCollectionViewCell *)arg1 ;
-(void)interruptAnimation;
-(id)initWithSourceCell:(id)arg1 ;
@end
