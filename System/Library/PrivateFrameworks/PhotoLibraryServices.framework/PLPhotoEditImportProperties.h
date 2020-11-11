/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PLPhotoEditImportProperties : NSObject {

	long long _baseEXIFOrientation;
	double _baseDuration;

}

@property (nonatomic,readonly) long long baseEXIFOrientation;              //@synthesize baseEXIFOrientation=_baseEXIFOrientation - In the implementation block
@property (nonatomic,readonly) double baseDuration;                        //@synthesize baseDuration=_baseDuration - In the implementation block
+(id)importPropertiesWithEXIFOrientation:(long long)arg1 ;
+(id)importPropertiesWithEXIFOrientation:(long long)arg1 duration:(double)arg2 ;
-(long long)baseEXIFOrientation;
-(double)baseDuration;
@end
