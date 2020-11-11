/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface WKApplicationStateTrackingView : UIView {

	WeakObjCPtr<WKWebView> _webViewToTrack;
	unique_ptr<WebKit::ApplicationStateTracker, std::__1::default_delete<WebKit::ApplicationStateTracker> >* _applicationStateTracker;

}

@property (nonatomic,readonly) BOOL isBackground; 
@property (nonatomic,readonly) UIView * _contentView; 
-(void)_applicationDidEnterBackground;
-(BOOL)isBackground;
-(void)willMoveToWindow:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 webView:(id)arg2 ;
-(void)_applicationWillEnterForeground;
-(void)_willBeginSnapshotSequence;
-(void)_applicationDidFinishSnapshottingAfterEnteringBackground;
-(void)_didCompleteSnapshotSequence;
-(void)didMoveToWindow;
-(UIView *)_contentView;
@end
