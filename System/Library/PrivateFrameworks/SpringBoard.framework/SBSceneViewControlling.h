/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class SBSceneHandle, UIView;


@protocol SBSceneViewControlling <NSObject>
@property (nonatomic,readonly) SBSceneHandle * sceneHandle; 
@property (nonatomic,readonly) long long displayMode; 
@property (nonatomic,retain) id<SBScenePlaceholderContentContext> placeholderContentContext; 
@property (nonatomic,retain) UIView * customContentView; 
@property (nonatomic,readonly) CGSize contentReferenceSize; 
@property (nonatomic,readonly) long long contentInterfaceOrientation; 
@required
-(CGSize)contentReferenceSize;
-(void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1;
-(void)setPlaceholderContentContext:(id)arg1;
-(void)setCustomContentView:(id)arg1;
-(id<SBScenePlaceholderContentContext>)placeholderContentContext;
-(SBSceneHandle *)sceneHandle;
-(id)newSnapshot;
-(void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(long long)displayMode;
-(void)setContentReferenceSize:(CGSize)arg1 withInterfaceOrientation:(long long)arg2;
-(void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(/*^block*/id)arg3;
-(id)newSnapshotView;
-(UIView *)customContentView;
-(long long)contentInterfaceOrientation;
-(void)invalidate;

@end

