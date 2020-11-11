/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXLayouter.h>

@protocol SXLayouterDelegate, SXColumnCalculator, SXLayoutContextFactory, SXUnitConverterFactory;
@class SXContainerComponentBlueprint, SXLayouterFactory, NSString;

@interface SXHorizontalStackLayouter : NSObject <SXLayouter> {

	id<SXLayouterDelegate> delegate;
	SXContainerComponentBlueprint* _containerComponentBlueprint;
	SXLayouterFactory* _layouterFactory;
	id<SXColumnCalculator> _columnCalculator;
	id<SXLayoutContextFactory> _layoutContextFactory;
	id<SXUnitConverterFactory> _unitConverterFactory;

}

@property (assign,nonatomic,__weak) id<SXLayouterDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXLayouterDelegate>)delegate;
-(void)setDelegate:(id<SXLayouterDelegate>)arg1 ;
-(void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 description:(id)arg3 shouldContinue:(BOOL*)arg4 ;
@end
