/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Home/HFItemManager.h>
#import <libobjc.A.dylib/HUCCPredictionManagerDelegate.h>

@protocol HUCCMosaicLayoutDelegate;
@class HFStaticItemProvider, HUCCPredictionsItemProvider, NSMutableDictionary;

@interface HUCCSmartGridItemManager : HFItemManager <HUCCPredictionManagerDelegate> {

	BOOL _layoutWasChanged;
	HFStaticItemProvider* _homeItemProvider;
	HUCCPredictionsItemProvider* _predictionsItemProvider;
	id<HUCCMosaicLayoutDelegate> _mosaicLayoutDelegate;
	NSMutableDictionary* _mosaicLayoutDetails;
	unsigned long long _chosenLayoutType;

}

@property (nonatomic,retain) HFStaticItemProvider * homeItemProvider;                               //@synthesize homeItemProvider=_homeItemProvider - In the implementation block
@property (nonatomic,retain) HUCCPredictionsItemProvider * predictionsItemProvider;                 //@synthesize predictionsItemProvider=_predictionsItemProvider - In the implementation block
@property (assign,nonatomic,__weak) id<HUCCMosaicLayoutDelegate> mosaicLayoutDelegate;              //@synthesize mosaicLayoutDelegate=_mosaicLayoutDelegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mosaicLayoutDetails;                             //@synthesize mosaicLayoutDetails=_mosaicLayoutDetails - In the implementation block
@property (assign,nonatomic) unsigned long long chosenLayoutType;                                   //@synthesize chosenLayoutType=_chosenLayoutType - In the implementation block
@property (assign,nonatomic) BOOL layoutWasChanged;                                                 //@synthesize layoutWasChanged=_layoutWasChanged - In the implementation block
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(BOOL)_shouldBuildItemProvidersAndModulesForNilHome;
-(id)_itemsToHideInSet:(id)arg1 ;
-(void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1 ;
-(void)setChosenLayoutType:(unsigned long long)arg1 ;
-(unsigned long long)chosenLayoutType;
-(void)predictionManagerDidUpdatePredictions:(id)arg1 ;
-(void)setPredictionsItemProvider:(HUCCPredictionsItemProvider *)arg1 ;
-(HUCCPredictionsItemProvider *)predictionsItemProvider;
-(id<HUCCMosaicLayoutDelegate>)mosaicLayoutDelegate;
-(void)setMosaicLayoutDetails:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)mosaicLayoutDetails;
-(id)_mosaicKeyForItem:(id)arg1 ;
-(BOOL)layoutWasChanged;
-(void)setLayoutWasChanged:(BOOL)arg1 ;
-(id)mosaicDetailsForItem:(id)arg1 ;
-(id)initWithMosaicLayoutDelegate:(id)arg1 ;
-(void)loadDefaultProviderItem;
-(id)mosaicDetailsForDisplayedItemAtIndexPath:(id)arg1 ;
-(HFStaticItemProvider *)homeItemProvider;
-(void)setHomeItemProvider:(HFStaticItemProvider *)arg1 ;
-(void)setMosaicLayoutDelegate:(id<HUCCMosaicLayoutDelegate>)arg1 ;
@end

