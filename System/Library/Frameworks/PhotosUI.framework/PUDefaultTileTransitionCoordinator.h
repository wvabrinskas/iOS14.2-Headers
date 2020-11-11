/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileTransitionCoordinator.h>

@class NSNumber;

@interface PUDefaultTileTransitionCoordinator : PUTileTransitionCoordinator {

	NSNumber* _animationDuration;

}

@property (nonatomic,copy) NSNumber * animationDuration;              //@synthesize animationDuration=_animationDuration - In the implementation block
-(NSNumber *)animationDuration;
-(void)setAnimationDuration:(NSNumber *)arg1 ;
-(id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3 ;
-(id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2 ;
-(void)configureOptions:(id)arg1 forSpringAnimationsZommingIn:(BOOL)arg2 ;
-(id)_layoutInfoWithDefaultDisappearance:(id)arg1 ;
-(CGAffineTransform)_adjustDefaultDisappearanceTransform:(CGAffineTransform)arg1 ;
-(id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2 ;
@end
