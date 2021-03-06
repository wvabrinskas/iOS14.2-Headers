/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol SymptomAdditionalProtocol;
@class NSString, NSMutableArray;

@interface SimpleSymptomEvaluator : NSObject <ConfigurableObjectProtocol> {

	NSString* symptomName;
	NSString* symptomKey;
	unsigned symptomSaveFlags;
	unsigned symptomSaveAdditionalId;
	unsigned symptomMaxRetainTime;
	id<SymptomAdditionalProtocol> symptomAdditionalHandlers[4];
	NSMutableArray* symptomRules;

}

@property (nonatomic,retain) NSString * symptomName; 
@property (nonatomic,retain) NSString * symptomKey; 
@property (assign,nonatomic) unsigned symptomSaveFlags; 
@property (assign,nonatomic) unsigned symptomSaveAdditionalId; 
@property (assign,nonatomic) unsigned symptomMaxRetainTime; 
@property (nonatomic,retain) NSMutableArray * symptomRules; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_defaultEvaluator;
+(id)configureClass:(id)arg1 ;
+(id)objectWithName:(id)arg1 ;
+(void)postIncomingEvent:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(NSString *)symptomName;
-(unsigned)symptomSaveAdditionalId;
-(int)configureInstance:(id)arg1 ;
-(void)setSymptomRules:(NSMutableArray *)arg1 ;
-(void)setSymptomName:(NSString *)arg1 ;
-(void)setSymptomKey:(NSString *)arg1 ;
-(unsigned)symptomMaxRetainTime;
-(void)evaluateIncomingEvent:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSString *)description;
-(unsigned)symptomSaveFlags;
-(NSString *)symptomKey;
-(NSMutableArray *)symptomRules;
-(void)setSymptomSaveAdditionalId:(unsigned)arg1 ;
-(void)setSymptomSaveFlags:(unsigned)arg1 ;
-(void)setSymptomMaxRetainTime:(unsigned)arg1 ;
@end

