/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARResultData.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface ARCoreRESkeletonResults : NSObject <ARResultData, NSCopying> {

	NSArray* _retargetedSkeletons;
	double _timestamp;
	CGSize _imageResolution;
	SCD_Struct_AR25 _cameraIntrinsics;

}

@property (assign,nonatomic) SCD_Struct_AR25 cameraIntrinsics;              //@synthesize cameraIntrinsics=_cameraIntrinsics - In the implementation block
@property (assign,nonatomic) CGSize imageResolution;                        //@synthesize imageResolution=_imageResolution - In the implementation block
@property (nonatomic,copy) NSArray * retargetedSkeletons;                   //@synthesize retargetedSkeletons=_retargetedSkeletons - In the implementation block
@property (assign,nonatomic) double timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCD_Struct_AR25)cameraIntrinsics;
-(void)setCameraIntrinsics:(SCD_Struct_AR25)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRetargetedSkeletons:(NSArray *)arg1 ;
-(CGSize)imageResolution;
-(void)setImageResolution:(CGSize)arg1 ;
-(NSArray *)retargetedSkeletons;
-(id)anchorsForCameraWithTransform:(SCD_Struct_AR1)arg1 referenceOriginTransform:(SCD_Struct_AR1)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4 ;
@end

