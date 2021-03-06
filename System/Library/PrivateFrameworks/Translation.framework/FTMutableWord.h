/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <Translation/FTWord.h>

@class NSString, NSData;

@interface FTMutableWord : FTWord

@property (nonatomic,copy) NSString * orthography; 
@property (nonatomic,copy) NSData * pronunciations; 
@property (assign,nonatomic) int frequency; 
@property (nonatomic,copy) NSString * tag; 
-(void)setTag:(NSString *)arg1 ;
-(int)frequency;
-(id)init;
-(void)setFrequency:(int)arg1 ;
-(NSString *)orthography;
-(NSData *)pronunciations;
-(void)setPronunciations:(NSData *)arg1 ;
-(NSString *)tag;
-(void)setOrthography:(NSString *)arg1 ;
-(void)pronunciations:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

