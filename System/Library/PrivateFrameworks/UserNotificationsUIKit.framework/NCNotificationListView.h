/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIScrollView.h>

@protocol NCNotificationListViewDataSource;
@class NSMutableDictionary, NSMutableSet, UILabel, UIView;

@interface NCNotificationListView : UIScrollView {

	BOOL _grouped;
	BOOL _subviewPerformingGroupingAnimation;
	BOOL _performingContentRevealAnimation;
	BOOL _revealed;
	BOOL _leadingRevealView;
	BOOL _activeRevealTransitioning;
	BOOL _performingGroupingAnimation;
	BOOL _performingRevealAnimation;
	BOOL _performingHeaderReloadAnimation;
	BOOL _performingVisibleRectAdjustment;
	BOOL _performedFirstLayout;
	BOOL _cachedSizeValid;
	id<NCNotificationListViewDataSource> _dataSource;
	double _groupedTranslation;
	double _revealPercentage;
	unsigned long long _revealIndexOffset;
	NSMutableDictionary* _visibleViews;
	NSMutableSet* _insertedViewIndices;
	NSMutableSet* _reloadedViewIndices;
	unsigned long long _removedViewIndex;
	NSMutableSet* _viewsPerformingAnimation;
	UILabel* _titleLabel;
	UIView* _headerView;
	UIView* _footerView;
	CGSize _cachedSize;
	CGRect _visibleRect;

}

@property (nonatomic,retain) NSMutableDictionary * visibleViews;                                                                     //@synthesize visibleViews=_visibleViews - In the implementation block
@property (nonatomic,retain) NSMutableSet * insertedViewIndices;                                                                     //@synthesize insertedViewIndices=_insertedViewIndices - In the implementation block
@property (nonatomic,retain) NSMutableSet * reloadedViewIndices;                                                                     //@synthesize reloadedViewIndices=_reloadedViewIndices - In the implementation block
@property (assign,nonatomic) unsigned long long removedViewIndex;                                                                    //@synthesize removedViewIndex=_removedViewIndex - In the implementation block
@property (assign,getter=isPerformingGroupingAnimation,nonatomic) BOOL performingGroupingAnimation;                                  //@synthesize performingGroupingAnimation=_performingGroupingAnimation - In the implementation block
@property (assign,getter=isPerformingRevealAnimation,nonatomic) BOOL performingRevealAnimation;                                      //@synthesize performingRevealAnimation=_performingRevealAnimation - In the implementation block
@property (assign,getter=isPerformingHeaderReloadAnimation,nonatomic) BOOL performingHeaderReloadAnimation;                          //@synthesize performingHeaderReloadAnimation=_performingHeaderReloadAnimation - In the implementation block
@property (assign,getter=isPerformingVisibleRectAdjustment,nonatomic) BOOL performingVisibleRectAdjustment;                          //@synthesize performingVisibleRectAdjustment=_performingVisibleRectAdjustment - In the implementation block
@property (nonatomic,retain) NSMutableSet * viewsPerformingAnimation;                                                                //@synthesize viewsPerformingAnimation=_viewsPerformingAnimation - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                                                    //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                                                                    //@synthesize footerView=_footerView - In the implementation block
@property (assign,getter=hasPerformedFirstLayout,nonatomic) BOOL performedFirstLayout;                                               //@synthesize performedFirstLayout=_performedFirstLayout - In the implementation block
@property (getter=isNotificationListViewCurrentlyVisible,nonatomic,readonly) BOOL notificationListViewCurrentlyVisible; 
@property (assign,getter=isCachedSizeValid,nonatomic) BOOL cachedSizeValid;                                                          //@synthesize cachedSizeValid=_cachedSizeValid - In the implementation block
@property (assign,nonatomic) CGSize cachedSize;                                                                                      //@synthesize cachedSize=_cachedSize - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationListViewDataSource> dataSource;                                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic) CGRect visibleRect;                                                                                     //@synthesize visibleRect=_visibleRect - In the implementation block
@property (assign,getter=isGrouped,nonatomic) BOOL grouped;                                                                          //@synthesize grouped=_grouped - In the implementation block
@property (assign,nonatomic) double groupedTranslation;                                                                              //@synthesize groupedTranslation=_groupedTranslation - In the implementation block
@property (assign,getter=isSubviewPerformingGroupingAnimation,nonatomic) BOOL subviewPerformingGroupingAnimation;                    //@synthesize subviewPerformingGroupingAnimation=_subviewPerformingGroupingAnimation - In the implementation block
@property (assign,getter=isPerformingContentRevealAnimation,nonatomic) BOOL performingContentRevealAnimation;                        //@synthesize performingContentRevealAnimation=_performingContentRevealAnimation - In the implementation block
@property (assign,getter=isRevealed,nonatomic) BOOL revealed;                                                                        //@synthesize revealed=_revealed - In the implementation block
@property (assign,getter=isLeadingRevealView,nonatomic) BOOL leadingRevealView;                                                      //@synthesize leadingRevealView=_leadingRevealView - In the implementation block
@property (assign,getter=isActiveRevealTransitioning,nonatomic) BOOL activeRevealTransitioning;                                      //@synthesize activeRevealTransitioning=_activeRevealTransitioning - In the implementation block
@property (assign,nonatomic) double revealPercentage;                                                                                //@synthesize revealPercentage=_revealPercentage - In the implementation block
@property (assign,nonatomic) unsigned long long revealIndexOffset;                                                                   //@synthesize revealIndexOffset=_revealIndexOffset - In the implementation block
-(UILabel *)titleLabel;
-(CGRect)visibleRect;
-(UIView *)headerView;
-(UIView *)footerView;
-(BOOL)isPerformingHeaderReloadAnimation;
-(BOOL)isActiveRevealTransitioning;
-(void)_layoutHiddenViewsForGroupingLayoutIfNecessaryWithLeadingViewHeight:(double)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setRevealed:(BOOL)arg1 ;
-(BOOL)isPerformingVisibleRectAdjustment;
-(void)recycleVisibleViews;
-(void)setHeaderView:(UIView *)arg1 ;
-(BOOL)_shouldPerformClipping;
-(double)_positionOffsetForRevealHintingForItemAtIndex:(unsigned long long)arg1 ;
-(void)insertViewAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_setupClipping;
-(NSMutableDictionary *)visibleViews;
-(void)setFooterView:(UIView *)arg1 ;
-(double)_headerViewHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setRevealIndexOffset:(unsigned long long)arg1 ;
-(void)_layoutFooterViewForGroupingIfNecessary;
-(void)setGrouped:(BOOL)arg1 ;
-(BOOL)isGrouped;
-(void)setVisibleViews:(NSMutableDictionary *)arg1 ;
-(void)setReloadedViewIndices:(NSMutableSet *)arg1 ;
-(double)_revealAnimationDelayForObjectAtIndex:(unsigned long long)arg1 ;
-(double)groupedTranslation;
-(void)setLeadingRevealView:(BOOL)arg1 ;
-(void)revealNotificationContentBelowGroupedViewIfNecessary:(id)arg1 ;
-(void)_updateVisibleViewsForUpdatedVisibleRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)_listViewForView:(id)arg1 ;
-(double)_layoutViewIfNecessaryAtIndex:(unsigned long long)arg1 layoutOffset:(double)arg2 ;
-(void)setPerformingContentRevealAnimation:(BOOL)arg1 ;
-(void)_performInsertionAnimationForView:(id)arg1 ;
-(void)_recycleViewIfNecessary:(id)arg1 withDataSource:(id)arg2 ;
-(unsigned long long)count;
-(void)_performAnimationForView:(id)arg1 atIndex:(unsigned long long)arg2 animationBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setPerformedFirstLayout:(BOOL)arg1 ;
-(void)_layoutForList;
-(void)_configureClippingIfNecessary;
-(void)_layoutFooterViewIfNecessaryAtLayoutOffset:(double)arg1 ;
-(BOOL)_isTopSubviewHeightLessThanVisibleRect;
-(id)_footerViewFromDataSource;
-(void)_layoutHeaderViewForGroupingIfNecessary;
-(void)setDataSource:(id<NCNotificationListViewDataSource>)arg1 ;
-(void)setRevealPercentage:(double)arg1 ;
-(void)_performViewAnimationBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 withTension:(double)arg3 friction:(double)arg4 ;
-(BOOL)isNotificationListViewCurrentlyVisible;
-(void)setInsertedViewIndices:(NSMutableSet *)arg1 ;
-(void)reloadViewAtIndex:(unsigned long long)arg1 ;
-(double)_positionOffsetForRevealHintingForHeaderView;
-(NSMutableSet *)viewsPerformingAnimation;
-(CGAffineTransform)_scaleTransformForGroupingAnimationForViewAtIndex:(unsigned long long)arg1 leadingViewHeight:(double)arg2 ;
-(CGSize)cachedSize;
-(void)_updateStoredVisibleViewsForViewInsertedAtIndex:(unsigned long long)arg1 ;
-(BOOL)_isVisibleView:(id)arg1 ;
-(void)setPerformingHeaderReloadAnimation:(BOOL)arg1 ;
-(void)_adjustContentSizeHeightIfNecessaryForUpdatedHeight:(double)arg1 ;
-(void)layoutSubviews;
-(id<NCNotificationListViewDataSource>)dataSource;
-(void)_layoutGroupedViewForGroupingLayout:(id)arg1 atIndex:(unsigned long long)arg2 isExistingView:(BOOL)arg3 leadingViewHeight:(double)arg4 ;
-(id)_visibleViewAtIndex:(unsigned long long)arg1 ;
-(BOOL)isPerformingGroupingAnimation;
-(BOOL)_isGrouping;
-(void)_performViewAnimationBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSMutableSet *)reloadedViewIndices;
-(void)didMoveToSuperview;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSMutableSet *)insertedViewIndices;
-(void)invalidateData;
-(void)_performRemovalAnimationForView:(id)arg1 ;
-(void)_recycleViewIfNecessary:(id)arg1 ;
-(void)setRemovedViewIndex:(unsigned long long)arg1 ;
-(void)removeViewAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setPerformingGroupingAnimation:(BOOL)arg1 ;
-(void)_layoutLeadingViewForGroupingLayoutIfNecessary:(id)arg1 hasShadow:(BOOL)arg2 ;
-(void)_setVisibleView:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_headerViewFromDataSource;
-(CGRect)_frameForViewAtIndex:(unsigned long long)arg1 ;
-(void)_updateStoredVisibleViewsForViewRemovedAtIndex:(unsigned long long)arg1 ;
-(double)_adjustedFrictionForRevealAnimation;
-(void)setCachedSizeValid:(BOOL)arg1 ;
-(void)_adjustContentSizeWidthIfNecessary;
-(void)setVisibleRect:(CGRect)arg1 ;
-(void)_layoutHeaderViewIfNecessaryAtLayoutOffset:(double)arg1 ;
-(BOOL)isSubviewPerformingGroupingAnimation;
-(unsigned long long)revealIndexOffset;
-(void)_configureStackDimmingForGroupedView:(id)arg1 transform:(CGAffineTransform)arg2 ;
-(void)setPerformingVisibleRectAdjustment:(BOOL)arg1 ;
-(BOOL)isCachedSizeValid;
-(void)setSubviewPerformingGroupingAnimation:(BOOL)arg1 ;
-(BOOL)isRevealed;
-(double)_adjustedTensionForRevealAnimation;
-(unsigned long long)removedViewIndex;
-(BOOL)isVisibleForViewAtIndex:(unsigned long long)arg1 ;
-(void)_setContentHiddenForGroupedView:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)reloadHeaderView;
-(void)setGroupedTranslation:(double)arg1 ;
-(BOOL)isLeadingRevealView;
-(double)revealPercentage;
-(double)layoutOffsetForViewAtIndex:(unsigned long long)arg1 ;
-(void)_removeStoredVisibleViewAtIndex:(unsigned long long)arg1 ;
-(BOOL)isPerformingRevealAnimation;
-(void)_removeAllStoredVisibleViews;
-(double)_verticalVelocityForSuperview;
-(BOOL)isPerformingContentRevealAnimation;
-(void)_layoutForGrouping;
-(void)setPerformingRevealAnimation:(BOOL)arg1 ;
-(BOOL)hasPerformedFirstLayout;
-(void)setViewsPerformingAnimation:(NSMutableSet *)arg1 ;
-(BOOL)_isViewWithinVisibleRectForHeight:(double)arg1 layoutOffset:(double)arg2 ;
-(void)setActiveRevealTransitioning:(BOOL)arg1 ;
-(double)_footerViewHeight;
-(void)_resetClipping;
-(void)setCachedSize:(CGSize)arg1 ;
@end

