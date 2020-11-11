/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCuratedLibraryActionViewController.h>

@class UILabel, UISegmentedControl;

@interface PXCuratedLibraryToggleAspectFitActionViewController : PXCuratedLibraryActionViewController {

	UILabel* _label;
	UISegmentedControl* _segmentedControl;
	double _spacing;

}
-(void)viewWillLayoutSubviews;
-(void)_handleSegmentedControl:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)loadView;
@end
