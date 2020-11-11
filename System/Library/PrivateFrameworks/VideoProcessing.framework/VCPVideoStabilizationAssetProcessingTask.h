/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPMADTaskProtocol.h>

@class NSArray, PHPhotoLibrary, VCPDatabaseReader;

@interface VCPVideoStabilizationAssetProcessingTask : NSObject <VCPMADTaskProtocol> {

	/*^block*/id _completionHandler;
	NSArray* _assets;
	PHPhotoLibrary* _photoLibrary;
	VCPDatabaseReader* _database;
	atomic<bool> _cancel;
	atomic<bool> _started;
	unsigned long long _stabilizationType;
	BOOL _onDemandPixel;
	BOOL _onDemandGyro;

}
+(id)taskWithAssets:(id)arg1 andOptions:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
-(int)run;
-(int)main;
-(id)initWithAssets:(id)arg1 andOptions:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
-(float)resourceRequirement;
-(void)cancel;
-(void)dealloc;
@end
