/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVTStickerBackend;
@class AVTCoreEnvironment, AVTImageStore;

@interface AVTStickerChangeObserver : NSObject {

	AVTCoreEnvironment* _environment;
	id<AVTStickerBackend> _stickerBackend;
	AVTImageStore* _imageStore;

}

@property (nonatomic,readonly) AVTCoreEnvironment * environment;                  //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) id<AVTStickerBackend> stickerBackend;              //@synthesize stickerBackend=_stickerBackend - In the implementation block
@property (nonatomic,readonly) AVTImageStore * imageStore;                        //@synthesize imageStore=_imageStore - In the implementation block
-(AVTCoreEnvironment *)environment;
-(id<AVTStickerBackend>)stickerBackend;
-(id)initWithStickerBackend:(id)arg1 environment:(id)arg2 ;
-(void)processChangesForChangeTracker:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(AVTImageStore *)imageStore;
-(id)initWithStickerBackend:(id)arg1 imageStore:(id)arg2 environment:(id)arg3 ;
@end

