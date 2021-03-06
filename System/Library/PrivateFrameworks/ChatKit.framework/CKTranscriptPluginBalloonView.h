/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonView.h>
#import <libobjc.A.dylib/CKTranscriptPluginViewDelegate.h>

@protocol CKTranscriptPluginView;
@class UIViewController, UIView, IMBalloonPluginDataSource, CKInteractiveBalloonImageView, CKBalloonImageView, NSString;

@interface CKTranscriptPluginBalloonView : CKBalloonView <CKTranscriptPluginViewDelegate> {

	BOOL _isInteractive;
	BOOL _mayReparentPluginViews;
	BOOL _suppressMask;
	long long _userInterfaceStyle;
	long long _userInterfaceLevel;
	UIViewController* _pluginViewController;
	UIView*<CKTranscriptPluginView> _pluginView;
	IMBalloonPluginDataSource* _dataSource;
	UIView* _pluginSnapshotViewForThrowAnimation;
	CKInteractiveBalloonImageView* _tailMask;
	CKBalloonImageView* _outlineMask;
	UIView* _pluginSnapshotView;

}

@property (nonatomic,retain) CKInteractiveBalloonImageView * tailMask;                    //@synthesize tailMask=_tailMask - In the implementation block
@property (nonatomic,retain) CKBalloonImageView * outlineMask;                            //@synthesize outlineMask=_outlineMask - In the implementation block
@property (nonatomic,retain) UIView * pluginSnapshotView;                                 //@synthesize pluginSnapshotView=_pluginSnapshotView - In the implementation block
@property (assign,nonatomic) BOOL suppressMask;                                           //@synthesize suppressMask=_suppressMask - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * pluginViewController;              //@synthesize pluginViewController=_pluginViewController - In the implementation block
@property (nonatomic,retain) UIView*<CKTranscriptPluginView> pluginView;                  //@synthesize pluginView=_pluginView - In the implementation block
@property (nonatomic,retain) IMBalloonPluginDataSource * dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL isInteractive;                                          //@synthesize isInteractive=_isInteractive - In the implementation block
@property (nonatomic,retain) UIView * pluginSnapshotViewForThrowAnimation;                //@synthesize pluginSnapshotViewForThrowAnimation=_pluginSnapshotViewForThrowAnimation - In the implementation block
@property (nonatomic,readonly) CGRect maskFrame; 
@property (nonatomic,readonly) BOOL shouldMaskWhenOpaque; 
@property (assign,nonatomic) BOOL mayReparentPluginViews;                                 //@synthesize mayReparentPluginViews=_mayReparentPluginViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canUseOpaqueMask;
-(void)setCanUseOpaqueMask:(BOOL)arg1 ;
-(void)prepareForDisplay;
-(void)setTailMask:(CKInteractiveBalloonImageView *)arg1 ;
-(void)setOutlineMask:(CKBalloonImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)clearFilters;
-(BOOL)isInteractive;
-(void)willRemoveSubview:(id)arg1 ;
-(CKInteractiveBalloonImageView *)tailMask;
-(void)configureForTranscriptPlugin:(id)arg1 context:(id)arg2 ;
-(void)setPluginSnapshotViewForThrowAnimation:(UIView *)arg1 ;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(void)setPluginSnapshotView:(UIView *)arg1 ;
-(void)setDataSource:(IMBalloonPluginDataSource *)arg1 ;
-(CGRect)maskFrame;
-(UIView*<CKTranscriptPluginView>)pluginView;
-(void)layoutSubviews;
-(IMBalloonPluginDataSource *)dataSource;
-(CKBalloonImageView *)outlineMask;
-(BOOL)suppressMask;
-(UIViewController *)pluginViewController;
-(void)addFilter:(id)arg1 ;
-(void)setUserInterfaceLevel:(long long)arg1 ;
-(id)imageForInvisibleInkEffectView;
-(void)setSuppressMask:(BOOL)arg1 ;
-(BOOL)shouldMaskWhenOpaque;
-(void)setMayReparentPluginViews:(BOOL)arg1 ;
-(BOOL)mayReparentPluginViews;
-(void)configureForComposition:(id)arg1 ;
-(long long)userInterfaceLevel;
-(void)setPluginView:(UIView*<CKTranscriptPluginView>)arg1 ;
-(id)overlayColor;
-(void)prepareForReuse;
-(void)updateBalloonMasks;
-(void)setPluginViewController:(UIViewController *)arg1 ;
-(UIView *)pluginSnapshotViewForThrowAnimation;
-(void)_pluginViewReadyForSnapshot:(id)arg1 ;
-(void)pluginViewRequestsPresentationAction:(id)arg1 ;
-(void)setIsInteractive:(BOOL)arg1 ;
-(UIView *)pluginSnapshotView;
-(long long)userInterfaceStyle;
-(Class)invisibleInkEffectViewClass;
-(void)invisibleInkEffectViewWasUncovered;
-(void)attachInvisibleInkEffectView;
-(void)detachInvisibleInkEffectView;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

