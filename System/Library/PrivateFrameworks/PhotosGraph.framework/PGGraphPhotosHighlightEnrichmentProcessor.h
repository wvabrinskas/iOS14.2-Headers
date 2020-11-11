/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PGGraphDataModelEnrichmentProcessor.h>
#import <libobjc.A.dylib/PGGraphDataModelEnrichmentHealthRecording.h>

@class NSString;

@interface PGGraphPhotosHighlightEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor, PGGraphDataModelEnrichmentHealthRecording> {

	unsigned long long _highlightTailorOptions;

}

@property (assign,nonatomic) unsigned long long highlightTailorOptions;              //@synthesize highlightTailorOptions=_highlightTailorOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBackgroundJob;
+(id)backgroundJobName;
+(double)backgroundJobTimeout;
-(id)init;
-(void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)recordCurrentProcessingDate:(id)arg1 lastProcessingDate:(id)arg2 graphHealthRecorder:(id)arg3 ;
-(void)recordProcessingWasCancelledWithGraphHealthRecorder:(id)arg1 ;
-(unsigned long long)highlightTailorOptions;
-(void)_logFirstTimeExperienceMetricsIfNeededWithManager:(id)arg1 ;
-(id)initWithHighlightTailorOptions:(unsigned long long)arg1 ;
-(void)setHighlightTailorOptions:(unsigned long long)arg1 ;
@end
