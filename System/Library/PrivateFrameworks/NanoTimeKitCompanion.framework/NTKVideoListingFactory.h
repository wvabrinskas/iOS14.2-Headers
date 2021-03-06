/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CLKDevice, NSArray, NSMutableSet;

@interface NTKVideoListingFactory : NSObject {

	CLKDevice* _device;
	NSArray* _butterflyListings;
	NSArray* _jellyfishListings;
	NSArray* _flowerListings;
	NSMutableSet* _assetListings;

}
+(id)sharedInstanceForDevice:(id)arg1 ;
-(void)discardAssets;
-(id)posterImageWithTheme:(unsigned long long)arg1 ;
-(id)defaultListingWithTheme:(unsigned long long)arg1 ;
-(id)anyListingWithTheme:(unsigned long long)arg1 variant:(long long)arg2 tag:(unsigned long long)arg3 ;
-(long long)behaviorForTheme:(unsigned long long)arg1 ;
-(id)anyListingWithTheme:(unsigned long long)arg1 notMatchingVariant:(long long)arg2 matchingTag:(unsigned long long)arg3 ;
-(id)anyListingWithTheme:(unsigned long long)arg1 variant:(long long)arg2 tag:(unsigned long long)arg3 notMatchingClip:(long long)arg4 ;
-(id)_initLibraryForDevice:(id)arg1 ;
-(id)_listingsWithTheme:(unsigned long long)arg1 ;
-(id)_listingWithTheme:(unsigned long long)arg1 variant:(long long)arg2 tag:(unsigned long long)arg3 ;
-(id)_listingsWithTheme:(unsigned long long)arg1 variant:(long long)arg2 tag:(unsigned long long)arg3 notMatchingClip:(long long)arg4 ;
-(id)_listingsWithTheme:(unsigned long long)arg1 notMatchingVariant:(long long)arg2 matchingTag:(unsigned long long)arg3 ;
-(id)_listingsWithTheme:(unsigned long long)arg1 variant:(long long)arg2 ;
-(id)_listingsWithTheme:(unsigned long long)arg1 notMatchingVariant:(long long)arg2 ;
-(void)setVideoListingHasAssets:(id)arg1 ;
@end

