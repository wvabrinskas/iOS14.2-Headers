/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <Photos/PHCompositeMediaResult.h>

@class NSNumber, NSString;

@interface PHImageResult : PHCompositeMediaResult {

	CGImageRef _imageRef;
	BOOL _isPlaceholder;
	BOOL _degraded;
	NSNumber* _exifOrientation;
	NSString* _uniformTypeIdentifier;

}

@property (nonatomic,copy) NSNumber * exifOrientation;                    //@synthesize exifOrientation=_exifOrientation - In the implementation block
@property (nonatomic,copy) NSString * uniformTypeIdentifier;              //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
-(BOOL)isPlaceholder;
-(id)sanitizedInfoDictionary;
-(long long)uiOrientation;
-(id)imageURL;
-(BOOL)containsValidData;
-(void)setImageURL:(id)arg1 ;
-(void)setImageRef:(CGImageRef)arg1 ;
-(CGImageRef)imageRef;
-(NSNumber *)exifOrientation;
-(void)setExifOrientation:(NSNumber *)arg1 ;
-(id)allowedInfoKeys;
-(void)setDegraded:(BOOL)arg1 ;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(id)imageData;
-(void)setUniformTypeIdentifier:(NSString *)arg1 ;
-(void)setHighDynamicRangeGainMap:(CVBufferRef)arg1 orientation:(unsigned)arg2 averagePixelLuminance:(id)arg3 ;
-(BOOL)isDegraded;
-(void)setImageData:(id)arg1 ;
-(void)dealloc;
-(NSString *)uniformTypeIdentifier;
@end

