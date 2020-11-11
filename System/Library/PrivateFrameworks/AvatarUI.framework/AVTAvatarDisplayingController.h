/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVTAvatarDisplayingController <AVTObjectViewController>
@property (assign,nonatomic,__weak) id<AVTAvatarDisplayingControllerDelegate> delegate; 
@required
-(id<AVTAvatarDisplayingControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)prepareViewWithLayout:(id)arg1;
-(void)useAVTViewFromSession:(id)arg1 withLayout:(id)arg2;
-(void)stopUsingAVTViewSessionSynchronously:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)prepareToTransitionToVisible:(BOOL)arg1 completionHandler:(/*^block*/id*)arg2;
-(void)displayAvatarForRecord:(id)arg1 animated:(BOOL)arg2;
-(void)reloadData;
-(id)initWithDataSource:(id)arg1 environment:(id)arg2;

@end
