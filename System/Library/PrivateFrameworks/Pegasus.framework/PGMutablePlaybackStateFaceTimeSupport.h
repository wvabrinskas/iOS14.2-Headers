/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PGMutablePlaybackStateFaceTimeSupport <NSObject>
@property (assign,nonatomic) BOOL supportsFaceTimeActions; 
@property (assign,getter=isCameraActive,nonatomic) BOOL cameraActive; 
@property (assign,nonatomic) BOOL canSwitchCamera; 
@property (assign,getter=isMicrophoneMuted,nonatomic) BOOL microphoneMuted; 
@required
-(BOOL)isMicrophoneMuted;
-(void)setMicrophoneMuted:(BOOL)arg1;
-(BOOL)supportsFaceTimeActions;
-(void)setSupportsFaceTimeActions:(BOOL)arg1;
-(BOOL)isCameraActive;
-(void)setCameraActive:(BOOL)arg1;
-(BOOL)canSwitchCamera;
-(void)setCanSwitchCamera:(BOOL)arg1;

@end
