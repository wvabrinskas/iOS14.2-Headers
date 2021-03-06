/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVAssetReaderOutput.h>

@class AVAssetReaderVideoCompositionOutputInternal, NSArray, NSDictionary, AVVideoComposition;

@interface AVAssetReaderVideoCompositionOutput : AVAssetReaderOutput {

	AVAssetReaderVideoCompositionOutputInternal* _videoCompositionOutputInternal;

}

@property (nonatomic,readonly) NSArray * videoTracks; 
@property (nonatomic,readonly) NSDictionary * videoSettings; 
@property (nonatomic,copy) AVVideoComposition * videoComposition; 
@property (nonatomic,readonly) id<AVVideoCompositing> customVideoCompositor; 
+(id)assetReaderVideoCompositionOutputWithVideoTracks:(id)arg1 videoSettings:(id)arg2 ;
-(id)_asset;
-(id)init;
-(id)mediaType;
-(AVVideoComposition *)videoComposition;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(void)_setVideoComposition:(id)arg1 customVideoCompositorSession:(id)arg2 ;
-(id<AVVideoCompositing>)customVideoCompositor;
-(id)description;
-(NSArray *)videoTracks;
-(id)_errorForOSStatus:(int)arg1 ;
-(BOOL)_prepareForReadingReturningError:(id*)arg1 ;
-(BOOL)alwaysCopiesSampleData;
-(BOOL)_enableTrackExtractionReturningError:(id*)arg1 ;
-(id)_formatDescriptions;
-(NSDictionary *)videoSettings;
-(id)initWithVideoTracks:(id)arg1 videoSettings:(id)arg2 ;
-(void)_setVideoComposition:(id)arg1 ;
-(id)_videoCompositionProcessorColorProperties;
-(void)dealloc;
@end

