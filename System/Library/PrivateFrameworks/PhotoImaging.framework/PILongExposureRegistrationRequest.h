/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@class NSDictionary;

@interface PILongExposureRegistrationRequest : NURenderRequest {

	NSDictionary* _recipe;
	SCD_Struct_PI6 _cleanAperture;

}

@property (nonatomic,copy) NSDictionary * recipe;                       //@synthesize recipe=_recipe - In the implementation block
@property (assign,nonatomic) SCD_Struct_PI6 cleanAperture;              //@synthesize cleanAperture=_cleanAperture - In the implementation block
-(NSDictionary *)recipe;
-(void)setRecipe:(NSDictionary *)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
-(SCD_Struct_PI6)cleanAperture;
-(void)setCleanAperture:(SCD_Struct_PI6)arg1 ;
@end

