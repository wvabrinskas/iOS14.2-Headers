/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVViewElement.h>

@class NSAttributedString;

@interface TVTextElement : TVViewElement

@property (nonatomic,readonly) NSAttributedString * attributedText; 
@property (nonatomic,readonly) long long textStyle; 
-(long long)textStyle;
-(NSAttributedString *)attributedText;
-(id)attributedStringWithFont:(id)arg1 ;
-(id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 ;
@end
