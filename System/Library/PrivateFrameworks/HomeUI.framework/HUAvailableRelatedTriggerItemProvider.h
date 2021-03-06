/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Home/HFItemProvider.h>

@protocol HUAvailableRelatedTriggerItemModuleContextProviding;
@class HMHome, NSArray, HURecommendationItemProvider, HUTriggerItemProvider, NSMutableSet, NSSet;

@interface HUAvailableRelatedTriggerItemProvider : HFItemProvider {

	HMHome* _home;
	NSArray* _relatedItems;
	/*^block*/id _triggerFilter;
	id<HUAvailableRelatedTriggerItemModuleContextProviding> _context;
	HURecommendationItemProvider* _recommendationItemProvider;
	HUTriggerItemProvider* _relatedActiveTriggerItemProvider;
	NSMutableSet* _triggerItems;
	NSMutableSet* _updatesDisabledReasons;

}

@property (nonatomic,retain) HURecommendationItemProvider * recommendationItemProvider;                      //@synthesize recommendationItemProvider=_recommendationItemProvider - In the implementation block
@property (nonatomic,retain) HUTriggerItemProvider * relatedActiveTriggerItemProvider;                       //@synthesize relatedActiveTriggerItemProvider=_relatedActiveTriggerItemProvider - In the implementation block
@property (nonatomic,retain) NSMutableSet * triggerItems;                                                    //@synthesize triggerItems=_triggerItems - In the implementation block
@property (nonatomic,retain) NSMutableSet * updatesDisabledReasons;                                          //@synthesize updatesDisabledReasons=_updatesDisabledReasons - In the implementation block
@property (nonatomic,readonly) NSSet * itemProviders; 
@property (nonatomic,readonly) HMHome * home;                                                                //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSArray * relatedItems;                                                       //@synthesize relatedItems=_relatedItems - In the implementation block
@property (nonatomic,copy) id recommendationsFilter; 
@property (nonatomic,copy) id triggerFilter;                                                                 //@synthesize triggerFilter=_triggerFilter - In the implementation block
@property (nonatomic,readonly) id<HUAvailableRelatedTriggerItemModuleContextProviding> context;              //@synthesize context=_context - In the implementation block
-(id<HUAvailableRelatedTriggerItemModuleContextProviding>)context;
-(id)invalidationReasons;
-(NSSet *)itemProviders;
-(NSArray *)relatedItems;
-(id)items;
-(HMHome *)home;
-(id)reloadItems;
-(void)disableUpdatesWithReason:(id)arg1 ;
-(void)endDisableUpdatesWithReason:(id)arg1 ;
-(id)itemsToHideInSet:(id)arg1 ;
-(id)initWithHome:(id)arg1 relatedItems:(id)arg2 context:(id)arg3 ;
-(void)setTriggerFilter:(id)arg1 ;
-(void)setRecommendationsFilter:(id)arg1 ;
-(void)setRecommendationItemProvider:(HURecommendationItemProvider *)arg1 ;
-(HURecommendationItemProvider *)recommendationItemProvider;
-(NSMutableSet *)updatesDisabledReasons;
-(void)setUpdatesDisabledReasons:(NSMutableSet *)arg1 ;
-(NSMutableSet *)triggerItems;
-(void)setTriggerItems:(NSMutableSet *)arg1 ;
-(void)_buildProviders;
-(void)setRelatedActiveTriggerItemProvider:(HUTriggerItemProvider *)arg1 ;
-(HUTriggerItemProvider *)relatedActiveTriggerItemProvider;
-(id)reloadAvailableTriggerItemsWithObjects:(id)arg1 ;
-(void)updateNaturalLanguageTitleOptionsWithItems:(id)arg1 ;
-(BOOL)relatedItemsAffectedByTrigger:(id)arg1 ;
-(id)recommendationsFilter;
-(id)triggerFilter;
@end

