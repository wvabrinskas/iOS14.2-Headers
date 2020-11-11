/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthToolbox/WDSampleListDataProvider.h>

@class NSMutableDictionary, NSMutableArray;

@interface WDSleepListDataProvider : WDSampleListDataProvider {

	NSMutableDictionary* _sleepData;
	NSMutableArray* _orderedKeys;

}
-(unsigned long long)numberOfSections;
-(id)_durationFormatter;
-(id)titleForSection:(unsigned long long)arg1 ;
-(long long)cellStyle;
-(id)sampleTypes;
-(void)deleteAllData;
-(void)_callUpdateHandler;
-(id)textForObject:(id)arg1 ;
-(id)secondaryTextForObject:(id)arg1 ;
-(id)viewControllerForItemAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(BOOL*)arg3 ;
-(id)_sleepDataDictionaryFromSamples:(id)arg1 ;
-(id)_sleepSampleAtIndex:(unsigned long long)arg1 section:(unsigned long long)arg2 ;
@end
