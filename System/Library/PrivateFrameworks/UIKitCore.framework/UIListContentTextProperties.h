/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIListContentTextPropertiesInternal.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIFont, UIColor, NSAttributedString;

@interface UIListContentTextProperties : NSObject <_UIListContentTextPropertiesInternal, NSCopying, NSSecureCoding> {

	struct {
		unsigned hasCustomizedFont : 1;
		unsigned hasCustomizedColor : 1;
		unsigned hasCustomizedColorTransformer : 1;
		unsigned hasCustomizedAlignment : 1;
		unsigned hasCustomizedLineBreakMode : 1;
		unsigned hasCustomizedNumberOfLines : 1;
		unsigned hasCustomizedAdjustsFontSizeToFitWidth : 1;
		unsigned hasCustomizedMinimumScaleFactor : 1;
		unsigned hasCustomizedAllowsDefaultTighteningForTruncation : 1;
		unsigned hasCustomizedAdjustsFontForContentSizeCategory : 1;
		unsigned hasCustomizedTransform : 1;
	}  _textFlags;
	BOOL _adjustsFontSizeToFitWidth;
	BOOL _allowsDefaultTighteningForTruncation;
	BOOL _adjustsFontForContentSizeCategory;
	NSString* _text;
	UIFont* _font;
	UIColor* _color;
	/*^block*/id _colorTransformer;
	long long _alignment;
	long long _lineBreakMode;
	NSAttributedString* _attributedText;
	long long _numberOfLines;
	double _minimumScaleFactor;
	long long _transform;
	long long _colorTransformerIdentifier;

}

@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * color; 
@property (nonatomic,copy) id colorTransformer; 
@property (assign,nonatomic) long long alignment; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) double minimumScaleFactor; 
@property (assign,nonatomic) BOOL allowsDefaultTighteningForTruncation; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
@property (assign,nonatomic) long long transform; 
@property (nonatomic,readonly) long long _effectiveTextAlignment; 
@property (nonatomic,readonly) BOOL _hasNonEmptyPlainTextOnly; 
+(BOOL)supportsSecureCoding;
-(void)setFont:(UIFont *)arg1 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(long long)lineBreakMode;
-(BOOL)adjustsFontForContentSizeCategory;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setTransform:(long long)arg1 ;
-(id)init;
-(void)setNumberOfLines:(long long)arg1 ;
-(long long)transform;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(unsigned long long)hash;
-(long long)numberOfLines;
-(void)setAllowsDefaultTighteningForTruncation:(BOOL)arg1 ;
-(UIFont *)font;
-(BOOL)adjustsFontSizeToFitWidth;
-(void)encodeWithCoder:(id)arg1 ;
-(double)minimumScaleFactor;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)alignment;
-(id)initWithCoder:(id)arg1 ;
-(long long)_effectiveTextAlignment;
-(id)resolvedColor;
-(void)setColorTransformer:(id)arg1 ;
-(id)colorTransformer;
-(BOOL)_hasNonEmptyPlainTextOnly;
-(BOOL)allowsDefaultTighteningForTruncation;
-(UIColor *)color;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

