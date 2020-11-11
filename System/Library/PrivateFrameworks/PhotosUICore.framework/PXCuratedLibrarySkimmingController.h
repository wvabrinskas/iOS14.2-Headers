/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXCuratedLibrarySkimmingControllerDelegate;
@class UISelectionFeedbackGenerator, PXCuratedLibraryAssetCollectionSkimmingModel, PXAssetCollectionReference, NSArray, NSTimer, NSString;

@interface PXCuratedLibrarySkimmingController : NSObject <PXChangeObserver> {

	UISelectionFeedbackGenerator* _skimmingFeedbackGenerator;
	double _slideshowTriggerDelay;
	double _slideshowIntervalDelay;
	BOOL _skimmingSlideshowEnabled;
	PXCuratedLibraryAssetCollectionSkimmingModel* _skimmingModel;
	id<PXCuratedLibrarySkimmingControllerDelegate> _delegate;
	long long _state;
	PXAssetCollectionReference* _preSkimmedAssetCollectionReference;
	double _lastPanningTranslation;
	long long _currentSkimmingIndex;
	NSArray* _skimmingIndexes;
	unsigned long long _skimmingDataSourceIdentifier;
	NSTimer* _slideshowTimer;

}

@property (nonatomic,retain) PXAssetCollectionReference * preSkimmedAssetCollectionReference;              //@synthesize preSkimmedAssetCollectionReference=_preSkimmedAssetCollectionReference - In the implementation block
@property (assign,nonatomic) long long state;                                                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double lastPanningTranslation;                                                //@synthesize lastPanningTranslation=_lastPanningTranslation - In the implementation block
@property (assign,nonatomic) long long currentSkimmingIndex;                                               //@synthesize currentSkimmingIndex=_currentSkimmingIndex - In the implementation block
@property (nonatomic,retain) NSArray * skimmingIndexes;                                                    //@synthesize skimmingIndexes=_skimmingIndexes - In the implementation block
@property (assign,nonatomic) unsigned long long skimmingDataSourceIdentifier;                              //@synthesize skimmingDataSourceIdentifier=_skimmingDataSourceIdentifier - In the implementation block
@property (nonatomic,retain) NSTimer * slideshowTimer;                                                     //@synthesize slideshowTimer=_slideshowTimer - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryAssetCollectionSkimmingModel * skimmingModel;               //@synthesize skimmingModel=_skimmingModel - In the implementation block
@property (assign,nonatomic,__weak) id<PXCuratedLibrarySkimmingControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL skimmingSlideshowEnabled;                                                //@synthesize skimmingSlideshowEnabled=_skimmingSlideshowEnabled - In the implementation block
@property (nonatomic,readonly) BOOL canStartSkimming; 
@property (nonatomic,readonly) BOOL isTouching; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(long long)currentSkimmingIndex;
-(void)setSkimmingIndexes:(NSArray *)arg1 ;
-(void)_cleanupFeedbackGenerator;
-(void)setCurrentSkimmingIndex:(long long)arg1 ;
-(void)_enterIdleStatePersistSkimmingState:(BOOL)arg1 ;
-(id)init;
-(void)_startOrResumeSlideshowTouchesEnded:(BOOL)arg1 ;
-(void)setState:(long long)arg1 ;
-(BOOL)canStartSkimming;
-(id<PXCuratedLibrarySkimmingControllerDelegate>)delegate;
-(unsigned long long)skimmingDataSourceIdentifier;
-(BOOL)endTouchingGestureEnded:(BOOL)arg1 ;
-(PXCuratedLibraryAssetCollectionSkimmingModel *)skimmingModel;
-(long long)state;
-(double)lastPanningTranslation;
-(void)updatePanningWithTranslation:(CGPoint)arg1 ;
-(void)startPanningForAssetCollectionReference:(id)arg1 ;
-(void)contentViewDidScroll;
-(void)setSkimmingDataSourceIdentifier:(unsigned long long)arg1 ;
-(void)setDelegate:(id<PXCuratedLibrarySkimmingControllerDelegate>)arg1 ;
-(BOOL)isTouching;
-(void)_slideshowTimerTick:(id)arg1 ;
-(void)endPanning;
-(void)setLastPanningTranslation:(double)arg1 ;
-(void)setPreSkimmedAssetCollectionReference:(PXAssetCollectionReference *)arg1 ;
-(void)setSkimmingSlideshowEnabled:(BOOL)arg1 ;
-(void)_stopSlideshow;
-(BOOL)skimmingSlideshowEnabled;
-(id)initWithSkimmingModel:(id)arg1 ;
-(void)_cancelEnteringTouchingState;
-(NSArray *)skimmingIndexes;
-(void)_generateFeedbackForSkimmingGesture;
-(PXAssetCollectionReference *)preSkimmedAssetCollectionReference;
-(void)startTouchingForAssetCollectionReference:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_ensureFeedbackGenerator;
-(void)setSlideshowTimer:(NSTimer *)arg1 ;
-(void)_enterTouchingStateForAssetCollectionReference:(id)arg1 ;
-(void)contentViewWillScroll;
-(void)_updateSlideshow;
-(void)_enterSlideshowStateForAssetCollectionReference:(id)arg1 ;
-(NSTimer *)slideshowTimer;
-(void)_adoptIndexesFromSkimmingModel;
@end
