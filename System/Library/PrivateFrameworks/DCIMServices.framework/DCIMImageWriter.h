/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <DCIMServices/DCIMServices-Structs.h>
@interface DCIMImageWriter : NSObject
+(void)writeableDataForImageData:(id)arg1 imageUTIType:(CFStringRef)arg2 thumbnailDataOut:(id*)arg3 imageUTITypeOut:(id*)arg4 exifPropertiesOut:(id*)arg5 isJPEGOut:(BOOL*)arg6 imageDataOut:(id*)arg7 ;
+(id)incomingDirectoryPathForPhotoStream;
+(id)uniqueIncomingPathForAssetWithUUID:(id)arg1 andExtension:(id)arg2 isPhotoStream:(BOOL)arg3 ;
+(id)preferredFileExtensionForType:(id)arg1 ;
+(id)recordedVideoPathForFilteredLivePhotoVideoPath:(id)arg1 ;
+(BOOL)isLivePhotoFilteredVideoPath:(id)arg1 ;
+(id)filteredVideoPathForRecordedLivePhotoVideoPath:(id)arg1 ;
+(id)incomingDirectoryPath;
+(id)sharedDCIMWriter;
+(id)defaultFileExtensionForAssetType:(short)arg1 ;
+(void)writeableDataForImage:(id)arg1 previewImage:(id)arg2 imageData:(id)arg3 imageUTIType:(CFStringRef)arg4 exifProperties:(id)arg5 imageOrientation:(long long)arg6 thumbnailDataOut:(id*)arg7 imageUTITypeOut:(id*)arg8 exifPropertiesOut:(id*)arg9 isJPEGOut:(BOOL*)arg10 imageDataOut:(id*)arg11 ;
-(int)copyPrimaryFormatImageData:(id)arg1 toURL:(id)arg2 properties:(id)arg3 ;
-(BOOL)writeJPEGToURL:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4 ;
-(BOOL)saveImageJobToDisk:(id)arg1 ;
-(id)_cameraAssetExtensionForType:(short)arg1 ;
-(BOOL)_writeJPEGToURL:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4 duringBurst:(BOOL)arg5 ;
-(void)_writeJPEGFromIOSurface:(IOSurfaceRef)arg1 toPath:(id)arg2 orientation:(long long)arg3 ;
@end

