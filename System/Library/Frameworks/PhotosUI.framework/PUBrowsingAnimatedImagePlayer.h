/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUViewModel.h>

@protocol PUDisplayAsset;
@class PUMediaProvider, PHAnimatedImage, NSMutableSet;

@interface PUBrowsingAnimatedImagePlayer : PUViewModel {

	SCD_Struct_PU17 _isValid;
	BOOL _isAnimatedImageLoadingAllowed;
	int __animatedImageRequestID;
	id<PUDisplayAsset> _asset;
	PUMediaProvider* _mediaProvider;
	PHAnimatedImage* _animatedImage;
	NSMutableSet* __animatedImageLoadingDisablingReasons;

}

@property (setter=_setAnimatedImage:,nonatomic,retain) PHAnimatedImage * animatedImage;                               //@synthesize animatedImage=_animatedImage - In the implementation block
@property (assign,setter=_setAnimatedImageLoadingAllowed:,nonatomic) BOOL isAnimatedImageLoadingAllowed;              //@synthesize isAnimatedImageLoadingAllowed=_isAnimatedImageLoadingAllowed - In the implementation block
@property (nonatomic,retain) NSMutableSet * _animatedImageLoadingDisablingReasons;                                    //@synthesize _animatedImageLoadingDisablingReasons=__animatedImageLoadingDisablingReasons - In the implementation block
@property (assign,setter=_setAnimatedImageRequestID:,nonatomic) int _animatedImageRequestID;                          //@synthesize _animatedImageRequestID=__animatedImageRequestID - In the implementation block
@property (nonatomic,retain) id<PUDisplayAsset> asset;                                                                //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) PUMediaProvider * mediaProvider;                                                       //@synthesize mediaProvider=_mediaProvider - In the implementation block
-(id)debugDetailedDescription;
-(id<PUDisplayAsset>)asset;
-(PUMediaProvider *)mediaProvider;
-(void)setAsset:(id<PUDisplayAsset>)arg1 ;
-(id)newViewModelChange;
-(id)init;
-(void)_invalidateAnimatedImage;
-(void)_updateIfNeeded;
-(void)didPerformChanges;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(void)unloadAnimatedImage;
-(void)setAnimatedImageLoadingDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(PHAnimatedImage *)animatedImage;
-(BOOL)_needsUpdate;
-(void)_cancelLoading;
-(void)_setAnimatedImage:(id)arg1 ;
-(void)_setAnimatedImageLoadingAllowed:(BOOL)arg1 ;
-(void)_updateAnimatedImage;
-(void)_handleAnimatedImageRequestComplete:(id)arg1 ;
-(BOOL)isAnimatedImageLoadingAllowed;
-(int)_animatedImageRequestID;
-(NSMutableSet *)_animatedImageLoadingDisablingReasons;
-(void)set_animatedImageLoadingDisablingReasons:(NSMutableSet *)arg1 ;
-(void)_setAnimatedImageRequestID:(int)arg1 ;
-(void)dealloc;
@end

