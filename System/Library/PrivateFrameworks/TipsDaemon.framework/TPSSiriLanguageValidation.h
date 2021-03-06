/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TipsDaemon/TPSInclusivityValidation.h>

@class NSArray;

@interface TPSSiriLanguageValidation : TPSInclusivityValidation

@property (nonatomic,readonly) NSArray * targetLanguages; 
@property (nonatomic,readonly) NSArray * excludeLanguages; 
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)targetLanguages;
-(NSArray *)excludeLanguages;
-(id)initWithTargetLanguages:(id)arg1 excludeLanguages:(id)arg2 ;
@end

