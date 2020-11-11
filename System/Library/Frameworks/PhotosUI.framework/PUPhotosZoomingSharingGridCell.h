/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotosSharingGridCell.h>

@class UIView;

@interface PUPhotosZoomingSharingGridCell : PUPhotosSharingGridCell {

	CGRect _defaultBounds;
	unsigned long long _badgesLayoutAnchor;
	UIView* _selectionView;
	CGPoint _selectionViewDefaultCenter;
	UIView* _optionView;
	CGPoint _optionViewDefaultCenter;

}
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 selectionView:(id)arg2 optionView:(id)arg3 layoutAnchor:(unsigned long long)arg4 ;
@end
