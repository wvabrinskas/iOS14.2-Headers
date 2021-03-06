/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <Translation/FTCorrectionsValidatorRequest.h>

@class NSString, FTRecognitionResult;

@interface FTMutableCorrectionsValidatorRequest : FTCorrectionsValidatorRequest

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) FTRecognitionResult * recognition_result; 
@property (nonatomic,copy) NSString * original_utterance; 
@property (nonatomic,copy) NSString * corrected_utterance; 
-(id)init;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)language;
-(FTRecognitionResult *)recognition_result;
-(void)setRecognition_result:(FTRecognitionResult *)arg1 ;
-(NSString *)speech_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(NSString *)original_utterance;
-(void)setOriginal_utterance:(NSString *)arg1 ;
-(NSString *)corrected_utterance;
-(void)setCorrected_utterance:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

