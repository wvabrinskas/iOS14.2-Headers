/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSObject;
@class PXTilingController;

@interface PXTilingControllerCompositionInvalidationContext : NSObject {

	id<NSObject> _animationOptions;
	PXTilingController* _originatingTilingController;

}

@property (nonatomic,retain) id<NSObject> animationOptions;                                 //@synthesize animationOptions=_animationOptions - In the implementation block
@property (nonatomic,retain) PXTilingController * originatingTilingController;              //@synthesize originatingTilingController=_originatingTilingController - In the implementation block
+(id)defaultAnimationOptionsForTilingController:(id)arg1 withInvalidationContexts:(id)arg2 ;
-(id<NSObject>)animationOptions;
-(void)setAnimationOptions:(id<NSObject>)arg1 ;
-(id)description;
-(PXTilingController *)originatingTilingController;
-(void)setOriginatingTilingController:(PXTilingController *)arg1 ;
@end

