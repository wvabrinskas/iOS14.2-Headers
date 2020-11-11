/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _LTAlignment : NSObject <NSSecureCoding> {

	BOOL _shouldTranslate;
	NSString* _identifier;
	NSString* _text;
	NSRange _sourceRange;
	NSRange _targetRange;

}

@property (assign,nonatomic) NSRange sourceRange;               //@synthesize sourceRange=_sourceRange - In the implementation block
@property (assign,nonatomic) NSRange targetRange;               //@synthesize targetRange=_targetRange - In the implementation block
@property (nonatomic,copy) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * text;                     //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL shouldTranslate;              //@synthesize shouldTranslate=_shouldTranslate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setText:(NSString *)arg1 ;
-(id)jsonRepresentation;
-(NSRange)sourceRange;
-(void)setSourceRange:(NSRange)arg1 ;
-(void)setShouldTranslate:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)text;
-(NSString *)identifier;
-(NSRange)targetRange;
-(void)setTargetRange:(NSRange)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldTranslate;
@end
