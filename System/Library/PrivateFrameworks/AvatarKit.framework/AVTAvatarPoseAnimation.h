/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVTAvatarPose, NSDictionary, NSMutableArray, NSString;

@interface AVTAvatarPoseAnimation : NSObject {

	AVTAvatarPose* _staticPose;
	NSDictionary* _staticPhysicsStates;
	NSDictionary* _blendshapeAnimations;
	NSDictionary* _perNodeAnimations;
	NSMutableArray* _animationKeys;
	NSString* _animationBaseKey;

}

@property (nonatomic,readonly) AVTAvatarPose * staticPose;              //@synthesize staticPose=_staticPose - In the implementation block
@property (nonatomic,readonly) double duration; 
+(id)animationFromRepresentation:(id)arg1 keyPath:(id)arg2 ;
+(void)enumerateRepresentationsForAnimation:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)optimizeAnimation:(id)arg1 target:(id)arg2 ;
-(void)commonInit;
-(id)physicalizedPose;
-(AVTAvatarPose *)staticPose;
-(id)initWithScene:(id)arg1 ;
-(double)duration;
-(void)addToAvatar:(id)arg1 options:(unsigned long long)arg2 transitionDuration:(double)arg3 ;
-(id)animationsForAvatar:(id)arg1 ;
-(id)initWithSceneAtURL:(id)arg1 ;
-(id)initWithStaticPose:(id)arg1 staticPhysicsStates:(id)arg2 ;
-(id)initWithStaticPoseRepresentation:(id)arg1 animatedPoseRepresentation:(id)arg2 staticPhysicsStatesRepresentation:(id)arg3 ;
-(id)staticPoseRepresentation;
-(id)animatedPoseRepresentation;
-(void)addToAvatar:(id)arg1 useStaticPhysicsState:(BOOL)arg2 ;
-(void)addToAvatar:(id)arg1 useStaticPhysicsState:(BOOL)arg2 transitionDuration:(double)arg3 ;
-(void)addToAvatar:(id)arg1 options:(unsigned long long)arg2 ;
-(void)removeFromAvatar:(id)arg1 transitionDuration:(double)arg2 ;
@end
