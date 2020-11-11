/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <Translation/FTContextWithPronHints.h>

@class NSString, NSArray;

@interface FTMutableContextWithPronHints : FTContextWithPronHints

@property (nonatomic,copy) NSString * contextual_text; 
@property (nonatomic,copy) NSArray * pron_hints; 
-(id)init;
-(NSString *)contextual_text;
-(void)setContextual_text:(NSString *)arg1 ;
-(NSArray *)pron_hints;
-(void)setPron_hints:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
