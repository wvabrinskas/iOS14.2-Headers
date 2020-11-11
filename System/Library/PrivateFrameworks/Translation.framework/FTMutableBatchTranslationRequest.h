/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <Translation/FTBatchTranslationRequest.h>

@class NSString, NSArray;

@interface FTMutableBatchTranslationRequest : FTBatchTranslationRequest

@property (nonatomic,copy) NSString * request_id; 
@property (nonatomic,copy) NSString * task; 
@property (nonatomic,copy) NSString * source_language; 
@property (nonatomic,copy) NSString * target_language; 
@property (nonatomic,copy) NSArray * paragraphs; 
@property (nonatomic,copy) NSString * app_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) long long opt_in_status; 
-(id)init;
-(NSString *)url;
-(NSString *)app_id;
-(NSString *)task;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)source_language;
-(NSString *)target_language;
-(long long)opt_in_status;
-(void)setOpt_in_status:(long long)arg1 ;
-(NSString *)request_id;
-(void)setRequest_id:(NSString *)arg1 ;
-(void)setSource_language:(NSString *)arg1 ;
-(void)setTarget_language:(NSString *)arg1 ;
-(void)setApp_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(void)setParagraphs:(NSArray *)arg1 ;
-(NSString *)session_id;
-(NSArray *)paragraphs;
-(void)setTask:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
