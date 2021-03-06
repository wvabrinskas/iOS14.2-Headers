/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXObservable.h>

@class NSString, UIView;

@interface PXFooterViewModel : PXObservable {

	BOOL _isPaused;
	float _progress;
	long long _animatedIconMode;
	NSString* _title;
	NSString* _extendedTitle;
	NSString* _subtitle1;
	NSString* _subtitle2;
	long long _actionStyle;
	NSString* _actionTitle;
	NSString* _actionConfirmationAlertTitle;
	NSString* _actionConfirmationAlertSubtitle;
	NSString* _actionConfirmationAlertButtonTitle;
	/*^block*/id _action;
	UIView* _accessoryView;
	UIView* _filterView;

}

@property (nonatomic,readonly) long long animatedIconMode;                                 //@synthesize animatedIconMode=_animatedIconMode - In the implementation block
@property (nonatomic,readonly) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * extendedTitle;                                   //@synthesize extendedTitle=_extendedTitle - In the implementation block
@property (nonatomic,readonly) NSString * subtitle1;                                       //@synthesize subtitle1=_subtitle1 - In the implementation block
@property (nonatomic,readonly) NSString * subtitle2;                                       //@synthesize subtitle2=_subtitle2 - In the implementation block
@property (nonatomic,readonly) BOOL isPaused;                                              //@synthesize isPaused=_isPaused - In the implementation block
@property (nonatomic,readonly) float progress;                                             //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) long long actionStyle;                                      //@synthesize actionStyle=_actionStyle - In the implementation block
@property (nonatomic,readonly) NSString * actionTitle;                                     //@synthesize actionTitle=_actionTitle - In the implementation block
@property (nonatomic,readonly) NSString * actionConfirmationAlertTitle;                    //@synthesize actionConfirmationAlertTitle=_actionConfirmationAlertTitle - In the implementation block
@property (nonatomic,readonly) NSString * actionConfirmationAlertSubtitle;                 //@synthesize actionConfirmationAlertSubtitle=_actionConfirmationAlertSubtitle - In the implementation block
@property (nonatomic,readonly) NSString * actionConfirmationAlertButtonTitle;              //@synthesize actionConfirmationAlertButtonTitle=_actionConfirmationAlertButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) id action;                                             //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) UIView * accessoryView;                                     //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,readonly) UIView * filterView;                                        //@synthesize filterView=_filterView - In the implementation block
-(UIView *)accessoryView;
-(void)setAccessoryView:(UIView *)arg1 ;
-(void)setActionConfirmationAlertButtonTitle:(NSString *)arg1 ;
-(id)init;
-(void)setIsPaused:(BOOL)arg1 ;
-(long long)actionStyle;
-(NSString *)subtitle2;
-(void)setExtendedTitle:(NSString *)arg1 ;
-(long long)animatedIconMode;
-(void)setActionTitle:(NSString *)arg1 ;
-(void)setActionConfirmationAlertSubtitle:(NSString *)arg1 ;
-(void)setSubtitle1:(NSString *)arg1 ;
-(float)progress;
-(NSString *)actionTitle;
-(BOOL)isPaused;
-(void)footerAnimationCrossedGridCycleBoundary;
-(NSString *)actionConfirmationAlertTitle;
-(void)setAction:(id)arg1 ;
-(NSString *)actionConfirmationAlertButtonTitle;
-(void)setFilterView:(UIView *)arg1 ;
-(NSString *)actionConfirmationAlertSubtitle;
-(NSString *)title;
-(id)mutableChangeObject;
-(UIView *)filterView;
-(NSString *)subtitle1;
-(NSString *)extendedTitle;
-(void)setSubtitle2:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setProgress:(float)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setActionConfirmationAlertTitle:(NSString *)arg1 ;
-(void)setAnimatedIconMode:(long long)arg1 ;
-(id)action;
@end

