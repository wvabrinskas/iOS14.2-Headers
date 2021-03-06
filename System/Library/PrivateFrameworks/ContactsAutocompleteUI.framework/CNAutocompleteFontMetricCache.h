/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableDictionary;

@interface CNAutocompleteFontMetricCache : NSObject {

	NSString* _preferredSizeValidationKey;
	NSMutableDictionary* _metricCacheDictionary;

}
+(id)sharedFontMetricCache;
-(id)init;
-(void)_invalidateCache;
-(id)cachedFont:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)_didReceivePreferredFontChangedNotification:(id)arg1 ;
-(id)cachedPreferredFontForStyle:(id)arg1 ;
-(double)cachedFloat:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(double)cachedScaledFloatWithValue:(double)arg1 forKey:(id)arg2 ;
-(double)cachedScaledFloatWithValue:(double)arg1 fontStyle:(id)arg2 ;
-(BOOL)ensureCacheIsValid;
-(id)metricCacheDictionary;
@end

