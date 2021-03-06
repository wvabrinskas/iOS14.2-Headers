/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>

@interface HMBCloudZoneConfiguration : HMFObject {

	BOOL _shouldRebuildOnManateeKeyLoss;
	BOOL _shouldSuppressDelegateCallbacksOnInitialFetch;

}

@property (assign) BOOL shouldRebuildOnManateeKeyLoss;                              //@synthesize shouldRebuildOnManateeKeyLoss=_shouldRebuildOnManateeKeyLoss - In the implementation block
@property (assign) BOOL shouldSuppressDelegateCallbacksOnInitialFetch;              //@synthesize shouldSuppressDelegateCallbacksOnInitialFetch=_shouldSuppressDelegateCallbacksOnInitialFetch - In the implementation block
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)shouldRebuildOnManateeKeyLoss;
-(BOOL)shouldSuppressDelegateCallbacksOnInitialFetch;
-(void)setShouldRebuildOnManateeKeyLoss:(BOOL)arg1 ;
-(void)setShouldSuppressDelegateCallbacksOnInitialFetch:(BOOL)arg1 ;
@end

