/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVTouchIgnoringView.h>

@protocol AVContentOverlayViewDelegate;
@interface AVContentOverlayView : AVTouchIgnoringView {

	id<AVContentOverlayViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AVContentOverlayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didRemoveSubview:(id)arg1 ;
-(id<AVContentOverlayViewDelegate>)delegate;
-(void)didAddSubview:(id)arg1 ;
-(void)setDelegate:(id<AVContentOverlayViewDelegate>)arg1 ;
@end

