/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSLocale, NSArray;

@interface _LTTranslationResult : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSLocale* _locale;
	NSArray* _translations;
	NSString* _sourceString;
	NSString* _sanitizedSourceString;
	long long _route;
	NSArray* _alignments;

}

@property (nonatomic,copy) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * translations;                        //@synthesize translations=_translations - In the implementation block
@property (nonatomic,copy) NSLocale * locale;                             //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSString * sourceString;                       //@synthesize sourceString=_sourceString - In the implementation block
@property (nonatomic,copy) NSString * sanitizedSourceString;              //@synthesize sanitizedSourceString=_sanitizedSourceString - In the implementation block
@property (assign,nonatomic) long long route;                             //@synthesize route=_route - In the implementation block
@property (nonatomic,copy) NSArray * alignments;                          //@synthesize alignments=_alignments - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)resultWithLocale:(id)arg1 translations:(id)arg2 ;
+(id)passthroughResultWithString:(id)arg1 sanitizedString:(id)arg2 locale:(id)arg3 ;
-(long long)route;
-(NSLocale *)locale;
-(void)setRoute:(long long)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSArray *)translations;
-(void)setSanitizedSourceString:(NSString *)arg1 ;
-(NSString *)sourceString;
-(void)setAlignments:(NSArray *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithOspreySpeechTranslationMTResponse:(id)arg1 ;
-(NSString *)sanitizedSourceString;
-(NSArray *)alignments;
-(id)initWithOspreyBatchResponse:(id)arg1 ;
-(void)setSourceString:(NSString *)arg1 ;
-(void)updateAlignmentWithSourceSpan:(id)arg1 targetSpan:(id)arg2 ;
-(id)initWithOspreyResponse:(id)arg1 ;
-(void)setTranslations:(NSArray *)arg1 ;
@end
