/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <Translation/FTKeyword.h>

@class NSString;

@interface FTMutableKeyword : FTKeyword

@property (nonatomic,copy) NSString * keyword_orthography; 
@property (assign,nonatomic) double posterior; 
-(id)init;
-(NSString *)keyword_orthography;
-(void)setKeyword_orthography:(NSString *)arg1 ;
-(double)posterior;
-(void)setPosterior:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

