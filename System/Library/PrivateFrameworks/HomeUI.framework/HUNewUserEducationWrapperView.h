/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HUNewUserEducationWrapperViewDelegate;
@class HUNewUserEducationStackView, UIToolbar, HUNewUserEducationCollectionViewController, HUNewUserEducationWrapperViewModel;

@interface HUNewUserEducationWrapperView : UIView {

	id<HUNewUserEducationWrapperViewDelegate> _delegate;
	HUNewUserEducationStackView* _verticalStackView;
	UIToolbar* _bottomToolBar;
	HUNewUserEducationCollectionViewController* _instructionsCollectionViewController;
	HUNewUserEducationWrapperViewModel* _viewModel;

}

@property (nonatomic,retain) HUNewUserEducationStackView * verticalStackView;                                                //@synthesize verticalStackView=_verticalStackView - In the implementation block
@property (nonatomic,retain) UIToolbar * bottomToolBar;                                                                      //@synthesize bottomToolBar=_bottomToolBar - In the implementation block
@property (nonatomic,retain) HUNewUserEducationCollectionViewController * instructionsCollectionViewController;              //@synthesize instructionsCollectionViewController=_instructionsCollectionViewController - In the implementation block
@property (nonatomic,retain) HUNewUserEducationWrapperViewModel * viewModel;                                                 //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<HUNewUserEducationWrapperViewDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
-(HUNewUserEducationWrapperViewModel *)viewModel;
-(void)setViewModel:(HUNewUserEducationWrapperViewModel *)arg1 ;
-(id<HUNewUserEducationWrapperViewDelegate>)delegate;
-(void)setVerticalStackView:(HUNewUserEducationStackView *)arg1 ;
-(void)setDelegate:(id<HUNewUserEducationWrapperViewDelegate>)arg1 ;
-(HUNewUserEducationStackView *)verticalStackView;
-(void)_onLearnMoreButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2 ;
-(UIToolbar *)bottomToolBar;
-(void)setBottomToolBar:(UIToolbar *)arg1 ;
-(HUNewUserEducationCollectionViewController *)instructionsCollectionViewController;
-(void)setInstructionsCollectionViewController:(HUNewUserEducationCollectionViewController *)arg1 ;
@end

