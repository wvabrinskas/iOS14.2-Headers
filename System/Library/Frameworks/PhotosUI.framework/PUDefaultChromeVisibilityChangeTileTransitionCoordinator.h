/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUDefaultTileTransitionCoordinator.h>

@class PUBrowsingViewModel;

@interface PUDefaultChromeVisibilityChangeTileTransitionCoordinator : PUDefaultTileTransitionCoordinator {

	PUBrowsingViewModel* _viewModel;

}

@property (nonatomic,retain) PUBrowsingViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(PUBrowsingViewModel *)viewModel;
-(void)setViewModel:(PUBrowsingViewModel *)arg1 ;
-(id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3 ;
@end
