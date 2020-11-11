/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISIcon.h>

@class ISBundle, ISImageCache;

@interface ISBundleIcon : ISIcon {

	ISBundle* _bundle;
	ISImageCache* _imageCache;

}

@property (readonly) ISBundle * bundle;                    //@synthesize bundle=_bundle - In the implementation block
@property (retain) ISImageCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
-(void)getImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithURL:(id)arg1 ;
-(id)imageForImageDescriptor:(id)arg1 ;
-(void)getCGImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setImageCache:(ISImageCache *)arg1 ;
-(CGImageRef)CGImageForImageDescriptor:(id)arg1 ;
-(ISBundle *)bundle;
-(void)prepareImagesForImageDescriptors:(id)arg1 ;
-(ISImageCache *)imageCache;
@end
