/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKDataMetadataSection.h>
#import <libobjc.A.dylib/HKDataMetadataViewControllerDelegate.h>

@protocol HKDataMetadataSubsampleDelegate;
@class HKHealthStore, HKSample, HKDisplayTypeController, HKUnitPreferenceController, HKDataMetadataSimpleTableViewCell, HKQuantitySample, NSString;

@interface HKDataMetadataOxygenSaturationSection : HKDataMetadataSection <HKDataMetadataViewControllerDelegate> {

	HKSample* _sample;
	HKHealthStore* _healthStore;
	HKDisplayTypeController* _displayTypeController;
	HKUnitPreferenceController* _unitController;
	id<HKDataMetadataSubsampleDelegate> _subsampleDelegate;
	HKDataMetadataSimpleTableViewCell* _cell;
	HKQuantitySample* _heartRateSample;

}

@property (nonatomic,readonly) HKHealthStore * healthStore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)unitController;
-(id)displayTypeController;
-(id)sectionTitle;
-(HKHealthStore *)healthStore;
-(unsigned long long)numberOfRowsInSection;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
-(id)displayNameForSampleType:(id)arg1 displayTypeController:(id)arg2 ;
-(id)formattedHeartRateFromSample:(id)arg1 ;
-(void)queryForData;
-(id)heartRateFromSample:(id)arg1 ;
-(id)initWithSample:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4 subsampleDelegate:(id)arg5 ;
@end

