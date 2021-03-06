/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PMLMultiLabelClassifierModelProtocol.h>
#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@class NSArray, NSString;

@interface PMLMultiLabelLogisticRegressionModel : NSObject <PMLMultiLabelClassifierModelProtocol, PMLPlistAndChunksSerializableProtocol> {

	NSArray* _models;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)serialize;
-(id)initWithModels:(id)arg1 ;
-(id)predict:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(unsigned long long)outputDimension;
-(id)initWithWeightsArray:(id)arg1 andIntercept:(BOOL)arg2 ;
@end

