/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIPreviewInteractionTouchForceProviding <NSObject>
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,readonly) double touchForce; 
@required
-(void)cancelInteraction;
-(CGPoint*)locationInCoordinateSpace:(id)arg1;
-(double)touchForce;
-(BOOL)isActive;

@end
