/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPAsset.h>

@class NSURL, AVURLAsset, NSDictionary, NSMutableDictionary;

@interface VCPURLAsset : VCPAsset {

	NSURL* _imageURL;
	AVURLAsset* _movie;
	long long _mediaType;
	unsigned long long _mediaSubtypes;
	unsigned long long _pixelWidth;
	unsigned long long _pixelHeight;
	BOOL _onceExif;
	NSDictionary* _cachedExif;
	BOOL _onceScenes;
	NSMutableDictionary* _cachedScenes;

}
+(id)sdofImageAssetWithURL:(id)arg1 ;
+(id)movieAssetWithURL:(id)arg1 ;
+(id)livePhotoAssetWithImageURL:(id)arg1 andMovieURL:(id)arg2 ;
+(id)imageAssetWithURL:(id)arg1 ;
-(id)movie;
-(id)exif;
-(long long)mediaType;
-(id)mainFileURL;
-(id)initWithImageURL:(id)arg1 isSDOF:(BOOL)arg2 ;
-(id)initWithImageURL:(id)arg1 andMovieURL:(id)arg2 ;
-(id)initWithMovieURL:(id)arg1 ;
-(unsigned long long)mediaSubtypes;
-(id)modificationDate;
-(unsigned long long)pixelHeight;
-(id)scenes;
-(double)duration;
-(unsigned long long)pixelWidth;
-(CVBufferRef)imageWithPreferredDimension:(unsigned long long)arg1 ;
-(float)photoOffsetSeconds;
-(float)originalPhotoOffsetSeconds;
-(float)slowmoRate;
-(id)originalMovie;
@end

