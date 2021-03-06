/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AssetsLibrary/AssetsLibrary-Structs.h>
@class ALAssetPrivate;

@interface ALAsset : NSObject {

	id _internal;

}

@property (nonatomic,retain) ALAssetPrivate * internal;                      //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) ALAsset * originalAsset; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
+(CGSize)largePreviewImageSizeForSize:(CGSize)arg1 ;
-(void)setInternal:(ALAssetPrivate *)arg1 ;
-(BOOL)isEditable;
-(ALAssetPrivate *)internal;
-(id)_uuid;
-(CGImageRef)thumbnail;
-(BOOL)isDeletable;
-(ALAsset *)originalAsset;
-(id)description;
-(id)defaultRepresentation;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)isValid;
-(void)dealloc;
-(CGImageRef)aspectRatioThumbnail;
-(id)initWithManagedAsset:(id)arg1 library:(id)arg2 ;
-(id)_typeAsString;
-(id)representationForUTI:(id)arg1 ;
-(void)writeModifiedImageDataToSavedPhotosAlbum:(id)arg1 metadata:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)writeModifiedVideoAtPathToSavedPhotosAlbum:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_newContentEditingOutputWithType:(long long)arg1 ;
-(void)setImageData:(id)arg1 metadata:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setVideoAtPath:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)requestDefaultRepresentation;
@end

