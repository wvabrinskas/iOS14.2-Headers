/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AVTStickerPagingControllerDelegate.h>
#import <libobjc.A.dylib/AVTStickerPagingControllerDelegate.h>
#import <libobjc.A.dylib/AVTAvatarPickerDelegate.h>
#import <libobjc.A.dylib/AVTAvatarRecordDataSourceObserver.h>
#import <libobjc.A.dylib/AVTPresenterDelegate.h>
#import <libobjc.A.dylib/AVTPaddleViewDelegate.h>
#import <libobjc.A.dylib/AVTObjectViewController.h>
#import <libobjc.A.dylib/AVTUIViewSnapshotProvider.h>

@protocol AVTPresenterDelegate, AVTStickerDisclosureValidationDelegate, AVTAvatarStore, AVTUILogger;
@class AVTAvatarRecordDataSource, AVTUIEnvironment, AVTAvatarPickerDataSource, AVTSimpleAvatarPicker, AVTStickerPagingController, NSString, AVTPaddleView, AVTStickerTaskScheduler, UIView;

@interface AVTStickerViewController : UIViewController <AVTStickerPagingControllerDelegate, AVTStickerPagingControllerDelegate, AVTAvatarPickerDelegate, AVTAvatarRecordDataSourceObserver, AVTPresenterDelegate, AVTPaddleViewDelegate, AVTObjectViewController, AVTUIViewSnapshotProvider> {

	BOOL _allowEditing;
	BOOL _allowPeel;
	id<AVTPresenterDelegate> presenterDelegate;
	id<AVTStickerDisclosureValidationDelegate> _disclosureValidationDelegate;
	id<AVTAvatarStore> _store;
	AVTAvatarRecordDataSource* _recordDataSource;
	AVTUIEnvironment* _environment;
	id<AVTUILogger> _logger;
	AVTAvatarPickerDataSource* _avatarPickerDataSource;
	AVTSimpleAvatarPicker* _avatarPicker;
	AVTStickerPagingController* _pagingController;
	NSString* _selectedRecordIdentifier;
	AVTPaddleView* _paddleView;
	AVTStickerTaskScheduler* _taskScheduler;

}

@property (nonatomic,readonly) id<AVTAvatarStore> store;                                                                  //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) AVTAvatarRecordDataSource * recordDataSource;                                              //@synthesize recordDataSource=_recordDataSource - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                                                            //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                                                    //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) BOOL allowPeel;                                                                            //@synthesize allowPeel=_allowPeel - In the implementation block
@property (nonatomic,retain) AVTAvatarPickerDataSource * avatarPickerDataSource;                                          //@synthesize avatarPickerDataSource=_avatarPickerDataSource - In the implementation block
@property (nonatomic,retain) AVTSimpleAvatarPicker * avatarPicker;                                                        //@synthesize avatarPicker=_avatarPicker - In the implementation block
@property (nonatomic,retain) AVTStickerPagingController * pagingController;                                               //@synthesize pagingController=_pagingController - In the implementation block
@property (nonatomic,retain) NSString * selectedRecordIdentifier;                                                         //@synthesize selectedRecordIdentifier=_selectedRecordIdentifier - In the implementation block
@property (nonatomic,retain) AVTPaddleView * paddleView;                                                                  //@synthesize paddleView=_paddleView - In the implementation block
@property (nonatomic,retain) AVTStickerTaskScheduler * taskScheduler;                                                     //@synthesize taskScheduler=_taskScheduler - In the implementation block
@property (assign,nonatomic,__weak) id<AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate;              //@synthesize disclosureValidationDelegate=_disclosureValidationDelegate - In the implementation block
@property (assign,nonatomic) BOOL allowEditing;                                                                           //@synthesize allowEditing=_allowEditing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic,__weak) id<AVTPresenterDelegate> presenterDelegate; 
+(id)inUseStickerPack;
+(unsigned long long)minimumNumberOfVisibleItemForWidth:(double)arg1 environment:(id)arg2 ;
+(double)headerEdgeMarginForEnvironment:(id)arg1 ;
+(id)stickersAvatarsFetchRequest;
+(double)headerHeightForWidth:(double)arg1 interitemSpacing:(double)arg2 environment:(id)arg3 ;
+(id)stickerViewControllerForStore:(id)arg1 allowEditing:(BOOL)arg2 allowPeel:(BOOL)arg3 ;
-(void)viewWillLayoutSubviews;
-(void)snapshotInBlock:(/*^block*/id)arg1 ;
-(BOOL)allowPeel;
-(void)viewDidLayoutSubviews;
-(id<AVTStickerDisclosureValidationDelegate>)disclosureValidationDelegate;
-(void)setDisclosureValidationDelegate:(id<AVTStickerDisclosureValidationDelegate>)arg1 ;
-(BOOL)allowEditing;
-(void)setTaskScheduler:(AVTStickerTaskScheduler *)arg1 ;
-(void)presentMemojiEditorForCreation;
-(void)setAllowEditing:(BOOL)arg1 ;
-(void)setPresenterDelegate:(id<AVTPresenterDelegate>)arg1 ;
-(id<AVTPresenterDelegate>)presenterDelegate;
-(id)initWithStore:(id)arg1 selectedRecordIdentifier:(id)arg2 allowEditing:(BOOL)arg3 allowPeel:(BOOL)arg4 environment:(id)arg5 ;
-(void)setAvatarPickerDataSource:(AVTAvatarPickerDataSource *)arg1 ;
-(AVTAvatarPickerDataSource *)avatarPickerDataSource;
-(void)setPagingController:(AVTStickerPagingController *)arg1 ;
-(void)setAvatarPicker:(AVTSimpleAvatarPicker *)arg1 ;
-(void)updatePagingControllerInsets;
-(BOOL)shouldPresentPaddleView;
-(void)selectAvatarRecordAtIndex:(long long)arg1 hideHeader:(BOOL)arg2 ;
-(void)selectDefaultAvatarIfNeeded;
-(void)presentPaddleViewIfNeeded;
-(AVTSimpleAvatarPicker *)avatarPicker;
-(AVTStickerPagingController *)pagingController;
-(void)updateHeaderPositionWithContentOffset:(CGPoint)arg1 ;
-(double)headerMaxY;
-(void)updatePaddleViewLayoutIfNecessary;
-(NSString *)selectedRecordIdentifier;
-(void)selectRecordForIdentifier:(id)arg1 ;
-(void)updateScrollToShowAvatarPicker:(BOOL)arg1 ;
-(void)setSelectedRecordIdentifier:(NSString *)arg1 ;
-(void)reloadPickerView;
-(BOOL)allowAvatarCreation;
-(void)avatarPicker:(id)arg1 didSelectAvatarRecord:(id)arg2 ;
-(void)presentAvatarUIController:(id)arg1 animated:(BOOL)arg2 ;
-(void)stickerPagingController:(id)arg1 pageDidScrollToOffset:(CGPoint)arg2 ;
-(void)dismissAvatarUIControllerAnimated:(BOOL)arg1 ;
-(void)dismissPaddleViewIfNecessary;
-(void)stickerControllerDidEnterBackground;
-(void)stickerControllerWillEnterForeground;
-(void)editCurrentMemoji;
-(void)swipeRightWithDelay:(long long)arg1 forCompletionHandler:(/*^block*/id)arg2 ;
-(void)swipeLeftWithDelay:(long long)arg1 forCompletionHandler:(/*^block*/id)arg2 ;
-(void)dataSource:(id)arg1 didAddRecord:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)dataSource:(id)arg1 didEditRecord:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)dataSource:(id)arg1 didRemoveRecord:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)significantRecordChangeInDataSource:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(AVTAvatarRecordDataSource *)recordDataSource;
-(AVTUIEnvironment *)environment;
-(id<AVTAvatarStore>)store;
-(void)updateHeaderSize;
-(AVTStickerTaskScheduler *)taskScheduler;
-(void)avatarPickerDidEndCameraSession:(id)arg1 ;
-(void)avatarPickerWillStartCameraSession:(id)arg1 ;
-(void)setPaddleView:(AVTPaddleView *)arg1 ;
-(void)reloadData;
-(AVTPaddleView *)paddleView;
-(void)paddleViewTapped:(id)arg1 ;
-(void)paddleViewWantsToBeDismissed:(id)arg1 ;
-(id<AVTUILogger>)logger;
@end
