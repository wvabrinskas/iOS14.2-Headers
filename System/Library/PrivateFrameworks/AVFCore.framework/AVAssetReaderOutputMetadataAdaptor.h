/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetReaderOutputAdaptor.h>

@class AVAssetReaderOutputMetadataAdaptorInternal, AVAssetReaderTrackOutput;

@interface AVAssetReaderOutputMetadataAdaptor : NSObject <AVAssetReaderOutputAdaptor> {

	AVAssetReaderOutputMetadataAdaptorInternal* _internal;

}

@property (nonatomic,readonly) AVAssetReaderTrackOutput * assetReaderTrackOutput; 
+(id)assetReaderOutputMetadataAdaptorWithAssetReaderTrackOutput:(id)arg1 ;
-(id)init;
-(id)initWithAssetReaderTrackOutput:(id)arg1 ;
-(int)addExtractionForOutput:(id)arg1 figAssetReader:(OpaqueFigAssetReaderRef)arg2 options:(id)arg3 withOutputExtactionID:(int*)arg4 ;
-(AVAssetReaderTrackOutput *)assetReaderTrackOutput;
-(id)nextTimedMetadataGroup;
-(void)dealloc;
@end

