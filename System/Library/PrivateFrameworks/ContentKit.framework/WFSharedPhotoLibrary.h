/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PHPhotoLibraryAvailabilityObserver.h>

@class PHPhotoLibrary, NSString;

@interface WFSharedPhotoLibrary : NSObject <PHPhotoLibraryAvailabilityObserver> {

	PHPhotoLibrary* _systemPhotoLibrary;

}

@property (nonatomic,retain) PHPhotoLibrary * systemPhotoLibrary;              //@synthesize systemPhotoLibrary=_systemPhotoLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLibrary;
-(PHPhotoLibrary *)systemPhotoLibrary;
-(void)photoLibraryDidBecomeUnavailable:(id)arg1 ;
-(id)systemPhotoLibraryWithError:(id*)arg1 ;
-(id)fetchOptionsWithError:(id*)arg1 ;
-(void)setSystemPhotoLibrary:(PHPhotoLibrary *)arg1 ;
@end

