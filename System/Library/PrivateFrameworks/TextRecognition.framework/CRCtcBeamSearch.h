/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TextRecognition/TextRecognition-Structs.h>
@class NSLocale;

@interface CRCtcBeamSearch : NSObject {

	LXLexiconRef _dynamicLexicon;
	NSLocale* _locale;

}

@property (assign,nonatomic) LXLexiconRef dynamicLexicon;              //@synthesize dynamicLexicon=_dynamicLexicon - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                      //@synthesize locale=_locale - In the implementation block
-(NSLocale *)locale;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(LXLexiconRef)dynamicLexicon;
-(void)setDynamicLexicon:(LXLexiconRef)arg1 ;
-(id)kBestPathsForInput:(id)arg1 k:(unsigned long long)arg2 beamWidth:(unsigned long long)arg3 outputProbs:(id*)arg4 outputWhitespaceRanges:(id*)arg5 error:(id*)arg6 ;
@end

