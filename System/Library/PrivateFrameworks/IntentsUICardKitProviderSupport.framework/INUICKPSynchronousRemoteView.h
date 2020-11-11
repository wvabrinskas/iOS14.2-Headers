/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IntentsUICardKitProviderSupport/IntentsUICardKitProviderSupport-Structs.h>
#import <UIKitCore/UIView.h>

@protocol INUICKPSynchronousRemoteViewDelegate;
@interface INUICKPSynchronousRemoteView : UIView {

	id<INUICKPSynchronousRemoteViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<INUICKPSynchronousRemoteViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<INUICKPSynchronousRemoteViewDelegate>)delegate;
-(void)setDelegate:(id<INUICKPSynchronousRemoteViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
