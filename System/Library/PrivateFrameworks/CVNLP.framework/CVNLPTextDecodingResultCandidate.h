/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface CVNLPTextDecodingResultCandidate : NSObject {

	NSArray* _tokens;
	double _score;
	double _activationScore;

}

@property (nonatomic,readonly) NSArray * tokens;                        //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullString; 
@property (assign) double score;                                        //@synthesize score=_score - In the implementation block
@property (assign) double activationScore;                              //@synthesize activationScore=_activationScore - In the implementation block
-(NSArray *)tokens;
-(void)setScore:(double)arg1 ;
-(double)score;
-(NSString *)fullString;
-(id)initWithTokens:(id)arg1 score:(double)arg2 activationScore:(double)arg3 ;
-(double)activationScore;
-(void)setActivationScore:(double)arg1 ;
@end

