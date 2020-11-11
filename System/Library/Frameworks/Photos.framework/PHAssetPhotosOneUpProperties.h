/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHAssetPropertySet.h>

@class NSData, NSString;

@interface PHAssetPhotosOneUpProperties : PHAssetPropertySet {

	BOOL _reverseLocationDataIsValid;
	NSData* _reverseLocationData;
	unsigned long long _variationSuggestionStates;

}

@property (nonatomic,readonly) BOOL reverseLocationDataIsValid;                           //@synthesize reverseLocationDataIsValid=_reverseLocationDataIsValid - In the implementation block
@property (nonatomic,readonly) NSData * reverseLocationData;                              //@synthesize reverseLocationData=_reverseLocationData - In the implementation block
@property (nonatomic,readonly) NSString * addressString; 
@property (nonatomic,readonly) unsigned long long variationSuggestionStates;              //@synthesize variationSuggestionStates=_variationSuggestionStates - In the implementation block
+(id)propertySetName;
+(id)propertiesToFetch;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(NSString *)addressString;
-(NSData *)reverseLocationData;
-(id)localizedGeoDescriptionIsHome:(BOOL*)arg1 ;
-(unsigned long long)variationSuggestionStates;
-(id)placeNamesForLocalizedDetailedDescriptionIsHome:(BOOL*)arg1 ;
-(id)_locationInfo;
-(BOOL)reverseLocationDataIsValid;
@end
