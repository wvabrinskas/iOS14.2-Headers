/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAsset.h>

@class AVAssetProxyInternal;

@interface AVAssetProxy : AVAsset {

	AVAssetProxyInternal* _assetProxy;

}
+(id)assetProxyWithPropertyList:(id)arg1 ;
+(id)makePropertyListForMovieProxyHeader:(id)arg1 name:(id)arg2 ;
-(OpaqueFigAssetRef)_figAsset;
-(id)tracks;
-(BOOL)isProxy;
-(id)_assetInspector;
-(id)_assetInspectorLoader;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(Class)_classForTrackInspectors;
-(OpaqueFigFormatReaderRef)_formatReader;
-(id)initWithPropertyList:(id)arg1 ;
-(void)dealloc;
@end

