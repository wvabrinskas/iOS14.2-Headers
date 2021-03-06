/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSKeyedUnarchiver.h>

@class PHPhotoLibrary;

@interface PHMemoryFeatureDecoder : NSKeyedUnarchiver {

	PHPhotoLibrary* _photoLibrary;

}

@property (retain) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
@end

