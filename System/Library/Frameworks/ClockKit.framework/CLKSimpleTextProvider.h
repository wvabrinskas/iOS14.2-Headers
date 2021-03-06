/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKTextProvider.h>

@class NSString;

@interface CLKSimpleTextProvider : CLKTextProvider {

	BOOL _useNoContentDashFormatting;
	BOOL _useAllSmallCaps;
	BOOL _useLowercaseSmallCaps;
	NSString* _text;
	NSString* _shortText;

}

@property (assign,nonatomic) BOOL useNoContentDashFormatting;              //@synthesize useNoContentDashFormatting=_useNoContentDashFormatting - In the implementation block
@property (assign,nonatomic) BOOL useAllSmallCaps;                         //@synthesize useAllSmallCaps=_useAllSmallCaps - In the implementation block
@property (assign,nonatomic) BOOL useLowercaseSmallCaps;                   //@synthesize useLowercaseSmallCaps=_useLowercaseSmallCaps - In the implementation block
@property (nonatomic,copy) NSString * text;                                //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * shortText;                           //@synthesize shortText=_shortText - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)textProviderWithText:(id)arg1 ;
+(id)textProviderWithText:(id)arg1 shortText:(id)arg2 ;
+(id)finalizedTextProviderWithText:(id)arg1 ;
+(id)textProviderWithText:(id)arg1 shortText:(id)arg2 accessibilityLabel:(id)arg3 ;
+(id)finalizedTextProviderWithText:(id)arg1 monospaceNumbers:(BOOL)arg2 ;
-(void)setText:(NSString *)arg1 ;
-(id)attributedString;
-(unsigned long long)hash;
-(id)initWithText:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)text;
-(BOOL)_validate;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)shortText;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(id)JSONObjectRepresentation;
-(void)setUseLowercaseSmallCaps:(BOOL)arg1 ;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(id)initWithText:(id)arg1 shortText:(id)arg2 accessibilityLabel:(id)arg3 ;
-(void)setShortText:(NSString *)arg1 ;
-(BOOL)useLowercaseSmallCaps;
-(id)initWithText:(id)arg1 shortText:(id)arg2 ;
-(BOOL)useNoContentDashFormatting;
-(void)setUseNoContentDashFormatting:(BOOL)arg1 ;
-(BOOL)useAllSmallCaps;
-(void)setUseAllSmallCaps:(BOOL)arg1 ;
@end

