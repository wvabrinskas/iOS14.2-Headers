/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHAssetPropertySet.h>

@class NSDate, NSData;

@interface PHAssetSceneAnalysisProperties : PHAssetPropertySet {

	unsigned long long _sceneAnalysisVersion;
	NSDate* _sceneAnalysisTimestamp;
	NSData* _distanceIdentity;

}

@property (nonatomic,readonly) unsigned long long sceneAnalysisVersion;              //@synthesize sceneAnalysisVersion=_sceneAnalysisVersion - In the implementation block
@property (nonatomic,readonly) NSDate * sceneAnalysisTimestamp;                      //@synthesize sceneAnalysisTimestamp=_sceneAnalysisTimestamp - In the implementation block
@property (nonatomic,readonly) NSData * distanceIdentity;                            //@synthesize distanceIdentity=_distanceIdentity - In the implementation block
+(id)propertySetName;
+(id)propertiesToFetch;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(NSData *)distanceIdentity;
-(unsigned long long)sceneAnalysisVersion;
-(NSDate *)sceneAnalysisTimestamp;
@end

