/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVWeakReference, AVAssetResourceLoader;

@interface AVAssetClientURLRequestHelper : NSObject {

	AVWeakReference* _weakReferenceToSelf;
	AVWeakReference* _weakReferenceToAsset;
	/*^block*/id _figAssetProvider;
	AVWeakReference* _weakReferenceToResourceLoader;

}

@property (nonatomic,copy) id figAssetProvider;                                          //@synthesize figAssetProvider=_figAssetProvider - In the implementation block
@property (assign,nonatomic,__weak) AVAssetResourceLoader * resourceLoader; 
@property (nonatomic,readonly) const OpaqueFigAssetRef figAsset; 
-(id)initWithAsset:(id)arg1 ;
-(id)URLAsset;
-(void)setFigAssetProvider:(id)arg1 ;
-(void)setResourceLoader:(AVAssetResourceLoader *)arg1 ;
-(AVAssetResourceLoader *)resourceLoader;
-(id)figAssetProvider;
-(void)dealloc;
-(const OpaqueFigAssetRef)figAsset;
@end

