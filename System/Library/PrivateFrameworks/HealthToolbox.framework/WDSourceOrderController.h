/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HKSourceStore, NSHashTable;

@interface WDSourceOrderController : NSObject {

	HKSourceStore* _sourceStore;
	NSHashTable* _observers;

}
-(void)removeObserver:(id)arg1 ;
-(id)init;
-(id)initWithHealthStore:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)getOrderedSourcesForDataType:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setOrderedSources:(id)arg1 dataType:(id)arg2 ;
-(void)_notifyObserversForDataType:(id)arg1 withProviders:(id)arg2 ;
@end

