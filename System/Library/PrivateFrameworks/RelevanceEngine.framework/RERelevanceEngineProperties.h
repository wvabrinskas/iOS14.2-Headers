/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, RERelevanceEngineConfiguration, REFeatureSet, NSArray, RELiveElementCoordinator, REDataSourceManager, REMLModelManager;


@protocol RERelevanceEngineProperties <REExportedInterface>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) RERelevanceEngineConfiguration * configuration; 
@property (nonatomic,readonly) REFeatureSet * rootFeatures; 
@property (nonatomic,readonly) REFeatureSet * mlFeatures; 
@property (nonatomic,readonly) NSArray * subsystems; 
@property (nonatomic,readonly) RELiveElementCoordinator * coordinator; 
@property (nonatomic,readonly) REDataSourceManager * dataSourceManager; 
@property (nonatomic,readonly) REMLModelManager * modelManager; 
@required
-(REDataSourceManager *)dataSourceManager;
-(NSArray *)subsystems;
-(REMLModelManager *)modelManager;
-(NSString *)name;
-(RELiveElementCoordinator *)coordinator;
-(RERelevanceEngineConfiguration *)configuration;
-(REFeatureSet *)mlFeatures;
-(REFeatureSet *)rootFeatures;

@end

