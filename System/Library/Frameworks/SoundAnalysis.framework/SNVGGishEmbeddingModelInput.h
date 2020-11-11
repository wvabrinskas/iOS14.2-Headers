/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface SNVGGishEmbeddingModelInput : NSObject <MLFeatureProvider> {

	MLMultiArray* _input1;

}

@property (nonatomic,retain) MLMultiArray * input1;               //@synthesize input1=_input1 - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(MLMultiArray *)input1;
-(id)initWithInput1:(id)arg1 ;
-(void)setInput1:(MLMultiArray *)arg1 ;
@end
