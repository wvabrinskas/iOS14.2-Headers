/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TRIPaths;
@class NSString;

@interface TRITreatmentInfo : NSObject {

	id<TRIPaths> _paths;
	int _deploymentId;
	NSString* _namespaceName;
	NSString* _treatmentId;
	NSString* _experimentId;

}

@property (nonatomic,retain) NSString * namespaceName;              //@synthesize namespaceName=_namespaceName - In the implementation block
@property (nonatomic,retain) NSString * treatmentId;                //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,retain) NSString * experimentId;               //@synthesize experimentId=_experimentId - In the implementation block
@property (assign,nonatomic) int deploymentId;                      //@synthesize deploymentId=_deploymentId - In the implementation block
+(id)loadInfoForTreatment:(id)arg1 namespaceName:(id)arg2 paths:(id)arg3 ;
-(NSString *)treatmentId;
-(BOOL)load;
-(id)infoDictionary;
-(void)setExperimentId:(NSString *)arg1 ;
-(id)url;
-(NSString *)experimentId;
-(BOOL)save;
-(id)initWithPaths:(id)arg1 ;
-(void)setTreatmentId:(NSString *)arg1 ;
-(void)setNamespaceName:(NSString *)arg1 ;
-(id)baseUrlForTreatmentsWithNamespaceName:(id)arg1 ;
-(id)urlWithDir:(id)arg1 ;
-(id)_treatmentBasePath;
-(id)baseUrlForTreatment:(id)arg1 namespaceName:(id)arg2 ;
-(id)treatmentDirectory;
-(void)setDeploymentId:(int)arg1 ;
-(BOOL)loadFromUrl:(id)arg1 ;
-(BOOL)saveToUrl:(id)arg1 ;
-(int)deploymentId;
-(BOOL)saveToDir:(id)arg1 ;
-(NSString *)namespaceName;
@end

