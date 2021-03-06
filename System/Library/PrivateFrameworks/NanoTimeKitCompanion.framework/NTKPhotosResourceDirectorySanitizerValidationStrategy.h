/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface NTKPhotosResourceDirectorySanitizerValidationStrategy : NSObject {

	BOOL _shouldExpectCropValues;
	unsigned long long _maxNumberOfPhotos;

}

@property (assign,nonatomic) unsigned long long maxNumberOfPhotos;              //@synthesize maxNumberOfPhotos=_maxNumberOfPhotos - In the implementation block
@property (assign,nonatomic) BOOL shouldExpectCropValues;                       //@synthesize shouldExpectCropValues=_shouldExpectCropValues - In the implementation block
-(unsigned long long)maxNumberOfPhotos;
-(void)setMaxNumberOfPhotos:(unsigned long long)arg1 ;
-(BOOL)shouldExpectCropValues;
-(void)setShouldExpectCropValues:(BOOL)arg1 ;
@end

