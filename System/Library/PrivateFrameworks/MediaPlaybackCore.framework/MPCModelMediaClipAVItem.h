/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAVItem.h>
#import <libobjc.A.dylib/MPRTCReportingItemSessionCreating.h>

@class MPModelGenericObject, MPModelMediaClip, NSString;

@interface MPCModelMediaClipAVItem : MPAVItem <MPRTCReportingItemSessionCreating> {

	MPModelGenericObject* _modelGenericObject;
	MPModelMediaClip* _mediaClip;

}

@property (nonatomic,readonly) MPModelMediaClip * mediaClip;                               //@synthesize mediaClip=_mediaClip - In the implementation block
@property (nonatomic,readonly) id rtcReportingParentHierarchyToken; 
@property (nonatomic,copy,readonly) NSString * rtcReportingServiceIdentifier; 
@property (nonatomic,readonly) long long rtcReportingAssetType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requiredMediaClipProperties;
-(id)mainTitle;
-(void)loadAssetAndPlayerItem;
-(void)notePlaybackFinishedByHittingEnd;
-(void)setPlaybackFinishedTime:(double)arg1 ;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg1 ;
-(BOOL)isAssetURLValid;
-(BOOL)isStreamable;
-(double)durationFromExternalMetadata;
-(void)reevaluateType;
-(void)_applyLoudnessInfo;
-(id)rtcReportingParentHierarchyToken;
-(BOOL)prefersSeekOverSkip;
-(id)modelGenericObject;
-(BOOL)allowsAirPlayFromCloud;
-(MPModelMediaClip *)mediaClip;
-(/*^block*/id)artworkCatalogBlock;
-(NSString *)description;
-(NSString *)rtcReportingServiceIdentifier;
-(long long)rtcReportingAssetType;
-(BOOL)allowsExternalPlayback;
-(BOOL)_allowsCellularPlayback;
-(id)_currentPreferredStaticAsset;
-(BOOL)_isVideoAsset;
-(id)initWithMediaClip:(id)arg1 ;
@end
