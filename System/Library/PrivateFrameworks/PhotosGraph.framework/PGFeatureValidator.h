/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSPredicate, PGFeatureExtractor, NSString;

@interface PGFeatureValidator : NSObject {

	NSPredicate* _predicate;
	PGFeatureExtractor* _featureExtractor;
	NSString* _featureName;

}

@property (nonatomic,readonly) NSPredicate * predicate;                            //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) PGFeatureExtractor * featureExtractor;              //@synthesize featureExtractor=_featureExtractor - In the implementation block
@property (nonatomic,readonly) NSString * featureName;                             //@synthesize featureName=_featureName - In the implementation block
-(NSPredicate *)predicate;
-(NSString *)featureName;
-(PGFeatureExtractor *)featureExtractor;
-(id)initWithPredicate:(id)arg1 featureExtractor:(id)arg2 featureName:(id)arg3 ;
-(long long)isValidEntity:(id)arg1 error:(id*)arg2 ;
-(long long)_isValidEntity:(id)arg1 featureExtractor:(id)arg2 error:(id*)arg3 ;
-(BOOL)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 ;
-(long long)featureValidatorType;
@end
