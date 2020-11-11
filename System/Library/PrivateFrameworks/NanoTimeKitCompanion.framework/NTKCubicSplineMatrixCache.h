/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSMutableDictionary, NSObject;

@interface NTKCubicSplineMatrixCache : NSObject {

	NSMutableDictionary* _openMatrixCache;
	NSMutableDictionary* _closedMatrixCache;
	NSObject*<OS_dispatch_queue> _internalQueue;

}
+(id)sharedInstance;
-(id)init;
-(SCD_Struct_NT10*)splineMatrixWithDimension:(int)arg1 cache:(id)arg2 matrixGenerator:(/*^block*/id)arg3 ;
-(SCD_Struct_NT10*)openSplineMatrixWithDimension:(int)arg1 ;
-(SCD_Struct_NT10*)closedSplineMatrixWithDimension:(int)arg1 ;
@end
