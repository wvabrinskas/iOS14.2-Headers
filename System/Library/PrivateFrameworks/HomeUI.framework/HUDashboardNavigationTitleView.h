/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UINavigationBarTitleView.h>

@protocol HUDashboardNavigationTitleViewDelegate;
@interface HUDashboardNavigationTitleView : _UINavigationBarTitleView {

	id<HUDashboardNavigationTitleViewDelegate> _delegate;
	double _previousLargeTitleHeight;

}

@property (assign,nonatomic,__weak) id<HUDashboardNavigationTitleViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double previousLargeTitleHeight;                                         //@synthesize previousLargeTitleHeight=_previousLargeTitleHeight - In the implementation block
-(id<HUDashboardNavigationTitleViewDelegate>)delegate;
-(void)setDelegate:(id<HUDashboardNavigationTitleViewDelegate>)arg1 ;
-(void)setPreviousLargeTitleHeight:(double)arg1 ;
-(void)contentDidChange;
-(double)previousLargeTitleHeight;
-(id)initWithDelegate:(id)arg1 ;
@end

