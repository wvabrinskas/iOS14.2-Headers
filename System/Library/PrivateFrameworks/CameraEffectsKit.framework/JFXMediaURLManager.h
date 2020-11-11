/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol JTFileURLSource;
@interface JFXMediaURLManager : NSObject {

	id<JTFileURLSource> _urlSource;

}

@property (assign,nonatomic,__weak) id<JTFileURLSource> urlSource;              //@synthesize urlSource=_urlSource - In the implementation block
+(id)sharedInstance;
+(id)videoRecordingFolderURL:(id*)arg1 ;
+(id)photoExportURL:(id*)arg1 isHEIF:(BOOL)arg2 ;
+(id)videoExportURL:(id*)arg1 ;
+(id)capturedPhotoURL:(id*)arg1 isHEIF:(BOOL)arg2 ;
+(id)_tempFileURLWithDirectory:(id)arg1 file:(id)arg2 error:(id*)arg3 ;
+(BOOL)_createDirectoryAtURL:(id)arg1 error:(id*)arg2 ;
+(id)_videoExportURL:(id*)arg1 ;
+(id)_capturedPhotoURL:(id*)arg1 isHEIF:(BOOL)arg2 ;
+(id)_photoExportURL:(id*)arg1 isHEIF:(BOOL)arg2 ;
+(id)_temporaryPhotoURL:(id*)arg1 fileName:(id)arg2 ;
+(id)_audioRecordingURL:(id*)arg1 ;
+(id)cachedExportFileURLWithError:(id*)arg1 ;
+(void)_cleanupDirectory:(id)arg1 ;
+(void)jfx_cleanupOldProjects;
+(id)temporaryPhotoURL:(id*)arg1 fileName:(id)arg2 ;
+(id)audioRecordingURL:(id*)arg1 ;
+(void)cleanupTemporaryDirectories;
+(BOOL)ODRAssetsAreEmbedded;
-(id<JTFileURLSource>)urlSource;
-(void)setUrlSource:(id<JTFileURLSource>)arg1 ;
@end
