/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <Translation/FTBatchTranslationResponse.h>

@class NSString, NSArray;

@interface FTMutableBatchTranslationResponse : FTBatchTranslationResponse

@property (nonatomic,copy) NSString * request_id; 
@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_string; 
@property (nonatomic,copy) NSString * paragraph_id; 
@property (nonatomic,copy) NSString * translated_text; 
@property (nonatomic,copy) NSArray * span; 
-(NSArray *)span;
-(id)init;
-(void)setSpan:(NSArray *)arg1 ;
-(void)setTranslated_text:(NSString *)arg1 ;
-(void)setReturn_code:(int)arg1 ;
-(void)setReturn_string:(NSString *)arg1 ;
-(NSString *)request_id;
-(NSString *)paragraph_id;
-(int)return_code;
-(NSString *)return_string;
-(NSString *)translated_text;
-(void)setRequest_id:(NSString *)arg1 ;
-(void)setParagraph_id:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
