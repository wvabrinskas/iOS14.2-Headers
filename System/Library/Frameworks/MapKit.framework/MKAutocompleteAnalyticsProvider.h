/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MKAutocompleteAnalyticsState.h>
#import <libobjc.A.dylib/MKAutocompleteAnalyticsProvider.h>

@protocol MKAutocompleteAnalyticsProvider
@required
-(id)captureNewMetrics;

@end


@protocol OS_dispatch_queue;
@class NSObject, MKAutocompleteAnalyticsState;

@interface MKAutocompleteAnalyticsProvider : NSObject <MKAutocompleteAnalyticsState, MKAutocompleteAnalyticsProvider> {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	MKAutocompleteAnalyticsState* _currentState;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> isolationQueue;              //@synthesize isolationQueue=_isolationQueue - In the implementation block
@property (nonatomic,retain) MKAutocompleteAnalyticsState * currentState;              //@synthesize currentState=_currentState - In the implementation block
-(MKAutocompleteAnalyticsState *)currentState;
-(void)setCurrentState:(MKAutocompleteAnalyticsState *)arg1 ;
-(void)setIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)isolationQueue;
-(void)updateStateWithQuery:(id)arg1 queryTokens:(id)arg2 visibleSuggestionEntries:(id)arg3 ;
-(id)captureNewMetrics;
@end

