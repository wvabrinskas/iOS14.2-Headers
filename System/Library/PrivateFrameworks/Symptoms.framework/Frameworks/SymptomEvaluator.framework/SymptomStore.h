/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableArray;

@interface SymptomStore : NSObject {

	unsigned symptomIdent;
	NSString* symptomName;
	NSString* symptomKey;
	NSMutableArray* symptomHistory;
	unsigned symptomMinRetainTime;
	unsigned symptomMinSavedCount;
	double* symptomArrivalTimes;
	unsigned symptomArrivalTimeNextIdx;
	NSString* _symptomDescription;

}

@property (assign,nonatomic) unsigned symptomIdent; 
@property (nonatomic,retain) NSString * symptomKey; 
@property (nonatomic,retain) NSString * symptomName; 
@property (nonatomic,retain) NSString * symptomDescription;                //@synthesize symptomDescription=_symptomDescription - In the implementation block
@property (nonatomic,retain) NSMutableArray * symptomHistory; 
+(int)configure:(id)arg1 ;
+(void)_createForName:(id)arg1 key:(id)arg2 id:(unsigned)arg3 symptomDescription:(id)arg4 ;
+(void)initialize;
+(id)idFromSymptomName:(id)arg1 ;
+(id)nameFromSymptomId:(unsigned)arg1 ;
+(id)storeFromSymptomKey:(id)arg1 ;
+(id)storeFromSymptomName:(id)arg1 ;
+(id)descriptionFromSymptomName:(id)arg1 ;
+(id)nameFromSymptomKey:(id)arg1 ;
+(id)keyFromSymptomName:(id)arg1 ;
+(id)description;
+(unsigned)numSymptomsWithKey:(id)arg1 retainTime:(unsigned)arg2 ;
+(void)resetSymptomsWithKey:(id)arg1 ;
+(void)pruneSymptomsWithKey:(id)arg1 ;
+(id)keyFromSymptomId:(unsigned)arg1 ;
+(id)nameFromReporterId:(unsigned)arg1 ;
+(int)addFromReporter:(id)arg1 ;
+(id)idFromReporterName:(id)arg1 ;
+(void)noteReceivedSymptom:(id)arg1 ;
+(void)setRetainTime:(unsigned)arg1 forSymptom:(id)arg2 ;
+(void)setRetainCount:(unsigned)arg1 forSymptom:(id)arg2 ;
+(id)storedSymptomsWithKey:(id)arg1 ;
-(NSString *)symptomDescription;
-(NSString *)symptomName;
-(unsigned)numSymptomsWithRetainTime:(unsigned)arg1 ;
-(NSMutableArray *)symptomHistory;
-(void)setSymptomDescription:(NSString *)arg1 ;
-(void)setSymptomName:(NSString *)arg1 ;
-(void)setSymptomKey:(NSString *)arg1 ;
-(id)description;
-(NSString *)symptomKey;
-(void)setRetainTime:(unsigned)arg1 ;
-(void)_pruneSymptomsForDate:(id)arg1 ;
-(void)setSymptomIdent:(unsigned)arg1 ;
-(void)noteReceivedSymptom:(id)arg1 ;
-(void)setRetainCount:(unsigned)arg1 ;
-(unsigned)symptomIdent;
-(void)setSymptomHistory:(NSMutableArray *)arg1 ;
@end

