/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class UIFont, NSString, UIColor;

@interface SBIconLabelImageParameters : NSObject <NSCopying, NSMutableCopying> {

	UIFont* _font;
	NSString* _text;
	BOOL _containsEmoji;
	BOOL _canTruncate;
	BOOL _canTighten;
	BOOL _recalculateHash;
	BOOL _accessibilityReduceTransparencyEnabled;
	BOOL _colorspaceGrayscale;
	BOOL _colorspaceGrayscaleSet;
	NSString* _contentSizeCategory;
	double _scale;
	CGSize _maxSize;
	long long _legibilityStyle;
	UIColor* _textColor;
	UIColor* _focusHighlightColor;
	UIEdgeInsets _textInsets;
	UIEdgeInsets _fontLanguageInsets;
	NSString* _iconLocation;
	unsigned long long _hash;

}

@property (nonatomic,copy,readonly) NSString * text;                                                                                     //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) CGSize maxSize;                                                                                           //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,readonly) UIFont * font;                                                                                            //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) double scale;                                                                                             //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) BOOL canTruncate;                                                                                         //@synthesize canTruncate=_canTruncate - In the implementation block
@property (nonatomic,readonly) BOOL canTighten;                                                                                          //@synthesize canTighten=_canTighten - In the implementation block
@property (nonatomic,readonly) BOOL containsEmoji;                                                                                       //@synthesize containsEmoji=_containsEmoji - In the implementation block
@property (nonatomic,readonly) long long legibilityStyle;                                                                                //@synthesize legibilityStyle=_legibilityStyle - In the implementation block
@property (nonatomic,readonly) UIColor * textColor;                                                                                      //@synthesize textColor=_textColor - In the implementation block
@property (getter=isAccessibilityReduceTransparencyEnabled,nonatomic,readonly) BOOL accessibilityReduceTransparencyEnabled;              //@synthesize accessibilityReduceTransparencyEnabled=_accessibilityReduceTransparencyEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentSizeCategory;                                                                      //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (nonatomic,readonly) UIColor * focusHighlightColor;                                                                            //@synthesize focusHighlightColor=_focusHighlightColor - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets textInsets;                                                                                  //@synthesize textInsets=_textInsets - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets fontLanguageInsets;                                                                          //@synthesize fontLanguageInsets=_fontLanguageInsets - In the implementation block
@property (nonatomic,copy,readonly) NSString * iconLocation;                                                                             //@synthesize iconLocation=_iconLocation - In the implementation block
@property (getter=isColorspaceGrayscale,nonatomic,readonly) BOOL colorspaceGrayscale; 
-(BOOL)containsEmoji;
-(UIEdgeInsets)fontLanguageInsets;
-(void)_noteNeedsHashRecalculation;
-(CGSize)maxSize;
-(long long)legibilityStyle;
-(id)init;
-(NSString *)contentSizeCategory;
-(BOOL)canTruncate;
-(UIColor *)focusHighlightColor;
-(BOOL)isAccessibilityReduceTransparencyEnabled;
-(unsigned long long)hash;
-(BOOL)canTighten;
-(UIFont *)font;
-(NSString *)text;
-(BOOL)isColorspaceGrayscale;
-(id)initWithParameters:(id)arg1 ;
-(UIEdgeInsets)textInsets;
-(UIColor *)textColor;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)iconLocation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scale;
@end

