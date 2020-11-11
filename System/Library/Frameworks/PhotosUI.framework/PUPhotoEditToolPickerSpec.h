/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUViewControllerSpec.h>

@interface PUPhotoEditToolPickerSpec : PUViewControllerSpec {

	double _toolParentViewEdgeSpacing;
	double _horizontalToolTopSpacing;
	double _horizontalToolBottomSpacing;
	double _dotSelectionIndicatorDistance;
	double _dashSelectionIndicatorDistance;

}

@property (assign,nonatomic) double toolParentViewEdgeSpacing;                   //@synthesize toolParentViewEdgeSpacing=_toolParentViewEdgeSpacing - In the implementation block
@property (nonatomic,readonly) double interToolSpacing; 
@property (assign,nonatomic) double horizontalToolTopSpacing;                    //@synthesize horizontalToolTopSpacing=_horizontalToolTopSpacing - In the implementation block
@property (assign,nonatomic) double horizontalToolBottomSpacing;                 //@synthesize horizontalToolBottomSpacing=_horizontalToolBottomSpacing - In the implementation block
@property (assign,nonatomic) double dotSelectionIndicatorDistance;               //@synthesize dotSelectionIndicatorDistance=_dotSelectionIndicatorDistance - In the implementation block
@property (assign,nonatomic) double dashSelectionIndicatorDistance;              //@synthesize dashSelectionIndicatorDistance=_dashSelectionIndicatorDistance - In the implementation block
-(id)init;
-(double)interToolSpacing;
-(double)dashSelectionIndicatorDistance;
-(double)dotSelectionIndicatorDistance;
-(double)toolParentViewEdgeSpacing;
-(void)setToolParentViewEdgeSpacing:(double)arg1 ;
-(double)horizontalToolTopSpacing;
-(void)setHorizontalToolTopSpacing:(double)arg1 ;
-(double)horizontalToolBottomSpacing;
-(void)setHorizontalToolBottomSpacing:(double)arg1 ;
-(void)setDotSelectionIndicatorDistance:(double)arg1 ;
-(void)setDashSelectionIndicatorDistance:(double)arg1 ;
@end
