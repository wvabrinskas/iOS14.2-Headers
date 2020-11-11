/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARConfiguration.h>

@interface ARInternalFaceTrackingConfiguration : ARConfiguration {

	BOOL _useAlternativeResources;
	long long _maximumNumberOfTrackedFaces;

}

@property (assign,nonatomic) long long maximumNumberOfTrackedFaces;              //@synthesize maximumNumberOfTrackedFaces=_maximumNumberOfTrackedFaces - In the implementation block
@property (assign,nonatomic) BOOL useAlternativeResources;                       //@synthesize useAlternativeResources=_useAlternativeResources - In the implementation block
+(BOOL)isSupported;
+(id)new;
+(id)supportedVideoFormats;
-(id)init;
-(void)setLightEstimationEnabled:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCameraPosition:(long long)arg1 ;
-(long long)maximumNumberOfTrackedFaces;
-(void)setMaximumNumberOfTrackedFaces:(long long)arg1 ;
-(void)createTechniques:(id)arg1 ;
-(id)imageSensorSettings;
-(void)setMirroredFrameOutput:(BOOL)arg1 ;
-(id)renderingTechnique;
-(BOOL)useAlternativeResources;
-(void)setUseAlternativeResources:(BOOL)arg1 ;
@end
