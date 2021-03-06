/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Transparency/GPBMessage.h>

@class NSString, NSMutableArray, GPBFloatArray, Metrics;

@interface PFLDeviceModelUpdate : GPBMessage

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) int modelVersion; 
@property (nonatomic,retain) NSMutableArray * shapesArray; 
@property (nonatomic,readonly) unsigned long long shapesArray_Count; 
@property (nonatomic,retain) GPBFloatArray * flattenedPrivatizedWeightDiffsArray; 
@property (nonatomic,readonly) unsigned long long flattenedPrivatizedWeightDiffsArray_Count; 
@property (nonatomic,retain) Metrics * evaluationMetrics; 
@property (assign,nonatomic) BOOL hasEvaluationMetrics; 
@property (assign,nonatomic) int numSamples; 
+(id)descriptor;
@end

