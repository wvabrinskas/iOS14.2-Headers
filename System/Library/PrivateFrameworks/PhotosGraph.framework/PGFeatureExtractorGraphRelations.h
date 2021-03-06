/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGAssetFeatureExtractor.h>

@class PGGraph, MAFeatureExtractor;

@interface PGFeatureExtractorGraphRelations : PGAssetFeatureExtractor {

	PGGraph* _graph;
	MAFeatureExtractor* _featureExtractor;

}

@property (nonatomic,readonly) PGGraph * graph;                                    //@synthesize graph=_graph - In the implementation block
@property (nonatomic,readonly) MAFeatureExtractor * featureExtractor;              //@synthesize featureExtractor=_featureExtractor - In the implementation block
-(PGGraph *)graph;
-(id)featureNames;
-(id)name;
-(long long)featureLength;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(BOOL)_generateError:(id*)arg1 withCode:(long long)arg2 andMessage:(id)arg3 ;
-(id)initWithGraph:(id)arg1 featureExtractor:(id)arg2 ;
-(id)floatVectorWithMoment:(id)arg1 error:(id*)arg2 ;
-(MAFeatureExtractor *)featureExtractor;
@end

