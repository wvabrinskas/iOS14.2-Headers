/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface MLObjectBoundingBoxOutputDescription : NSObject {

	int _format;
	NSString* _confidenceFeatureName;
	NSString* _coordinatesFeatureName;
	NSArray* _labelNames;

}

@property (assign) int format;                                     //@synthesize format=_format - In the implementation block
@property (retain) NSString * confidenceFeatureName;               //@synthesize confidenceFeatureName=_confidenceFeatureName - In the implementation block
@property (retain) NSString * coordinatesFeatureName;              //@synthesize coordinatesFeatureName=_coordinatesFeatureName - In the implementation block
@property (retain) NSArray * labelNames;                           //@synthesize labelNames=_labelNames - In the implementation block
-(void)setFormat:(int)arg1 ;
-(NSString *)confidenceFeatureName;
-(void)setConfidenceFeatureName:(NSString *)arg1 ;
-(NSString *)coordinatesFeatureName;
-(void)setCoordinatesFeatureName:(NSString *)arg1 ;
-(int)format;
-(NSArray *)labelNames;
-(void)setLabelNames:(NSArray *)arg1 ;
@end

