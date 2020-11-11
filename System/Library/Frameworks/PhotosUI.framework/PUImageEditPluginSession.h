/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUEditPluginSession.h>

@interface PUImageEditPluginSession : PUEditPluginSession {

	BOOL _allowLivePhotoExtensions;

}

@property (assign,nonatomic) BOOL allowLivePhotoExtensions;              //@synthesize allowLivePhotoExtensions=_allowLivePhotoExtensions - In the implementation block
-(unsigned long long)pluginManagerMediaType;
-(void)loadItemProviderWithSupportedAdjustmentData:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
-(void)shouldLaunchPlugin:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAllowLivePhotoExtensions:(BOOL)arg1 ;
-(id)imageDataSource;
-(BOOL)allowLivePhotoExtensions;
@end
