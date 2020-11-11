/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItemProvider.h>

@class HMAccessoryNetworkProtectionGroup, NSMutableSet;

@interface HUNetworkProtectionModeOptionItemProvider : HFItemProvider {

	HMAccessoryNetworkProtectionGroup* _group;
	NSMutableSet* _networkProtectionModeOptionItems;

}

@property (nonatomic,retain) NSMutableSet * networkProtectionModeOptionItems;               //@synthesize networkProtectionModeOptionItems=_networkProtectionModeOptionItems - In the implementation block
@property (nonatomic,copy,readonly) HMAccessoryNetworkProtectionGroup * group;              //@synthesize group=_group - In the implementation block
-(id)init;
-(HMAccessoryNetworkProtectionGroup *)group;
-(id)initWithGroup:(id)arg1 ;
-(id)items;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)reloadItems;
-(NSMutableSet *)networkProtectionModeOptionItems;
-(void)setNetworkProtectionModeOptionItems:(NSMutableSet *)arg1 ;
@end
