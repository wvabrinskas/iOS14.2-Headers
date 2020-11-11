/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>

@class PXDisplayLink, NSArray;

@interface PXZoomablePhotosAlphaAnimator : PXObservable {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	PXDisplayLink* _displayLink;
	double _lastTickTime;
	double _currentDirection;
	double _directionAnchorColumnIndex;
	double _columnIndexDelta;
	double _columnIndexVelocity;
	long long _layerCount;
	PXAlphaLayer* _layers[10];
	PXAlphaTransitionInfo* _transitionInfos[9];
	BOOL _isPerformingChangesWithoutAnimation;
	BOOL _isAnimating;
	BOOL _isBeingMutated;
	NSArray* _allowedColumns;
	double _columnIndex;
	double _targetColumnIndex;
	double _presentationColumnIndex;
	long long _maxColumnsForAspectFit;
	double _autoFadeAmount;
	double _presentationAutoFadeAmount;
	double _autoFadeColumnIndex;

}

@property (assign,nonatomic) double presentationColumnIndex;                  //@synthesize presentationColumnIndex=_presentationColumnIndex - In the implementation block
@property (assign,nonatomic) double presentationAutoFadeAmount;               //@synthesize presentationAutoFadeAmount=_presentationAutoFadeAmount - In the implementation block
@property (assign,nonatomic) double autoFadeColumnIndex;                      //@synthesize autoFadeColumnIndex=_autoFadeColumnIndex - In the implementation block
@property (assign,nonatomic) BOOL isAnimating;                                //@synthesize isAnimating=_isAnimating - In the implementation block
@property (nonatomic,readonly) NSArray * allowedColumns;                      //@synthesize allowedColumns=_allowedColumns - In the implementation block
@property (nonatomic,readonly) double columnIndex;                            //@synthesize columnIndex=_columnIndex - In the implementation block
@property (nonatomic,readonly) double targetColumnIndex;                      //@synthesize targetColumnIndex=_targetColumnIndex - In the implementation block
@property (nonatomic,readonly) long long maxColumnsForAspectFit;              //@synthesize maxColumnsForAspectFit=_maxColumnsForAspectFit - In the implementation block
@property (nonatomic,readonly) double autoFadeAmount;                         //@synthesize autoFadeAmount=_autoFadeAmount - In the implementation block
@property (nonatomic,readonly) BOOL isBeingMutated;                           //@synthesize isBeingMutated=_isBeingMutated - In the implementation block
-(void)_updateTransitionInfo;
-(void)_updatePresentationValue;
-(void)setAutoFadeAmount:(double)arg1 ;
-(id)init;
-(double)autoFadeAmount;
-(double)presentationColumnIndex;
-(long long)maxColumnsForAspectFit;
-(void)setAutoFadeColumnIndex:(double)arg1 ;
-(void)setAllowedColumns:(NSArray *)arg1 ;
-(void)performChangesWithAnimation:(BOOL)arg1 changeBlock:(/*^block*/id)arg2 ;
-(void)setPresentationColumnIndex:(double)arg1 ;
-(PXAlphaTransitionInfo*)_transitionInfoForValue:(double)arg1 ;
-(double)columnIndex;
-(id)description;
-(void)_invalidatePresentationValue;
-(void)setMaxColumnsForAspectFit:(long long)arg1 ;
-(void)setIsAnimating:(BOOL)arg1 ;
-(double)targetColumnIndex;
-(void)setColumnIndex:(double)arg1 ;
-(void)setPresentationAutoFadeAmount:(double)arg1 ;
-(void)didPerformChanges;
-(void)_resetAnimatedValues;
-(double)_targetColumnIndex;
-(BOOL)isAnimating;
-(void)setTargetColumnIndex:(double)arg1 ;
-(NSArray *)allowedColumns;
-(void)performChanges:(/*^block*/id)arg1 ;
-(double)presentationAutoFadeAmount;
-(double)autoFadeColumnIndex;
-(BOOL)isBeingMutated;
-(void)_tick:(id)arg1 ;
-(void)dealloc;
@end
