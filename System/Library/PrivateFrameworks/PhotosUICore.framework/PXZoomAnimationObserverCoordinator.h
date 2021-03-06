/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXZoomAnimationCoordinator.h>

@protocol PXZoomAnimationObserverCoordinatorDelegate;
@interface PXZoomAnimationObserverCoordinator : PXZoomAnimationCoordinator {

	SCD_Struct_PX59 _delegateRespondsTo;
	id<PXZoomAnimationObserverCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PXZoomAnimationObserverCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PXZoomAnimationObserverCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<PXZoomAnimationObserverCoordinatorDelegate>)arg1 ;
-(void)animateContentForEndPointType:(long long)arg1 withZoomAnimationContext:(id)arg2 ;
@end

