/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class NSString, NSAttributedString, UIColor;

@interface SKLabelNode : SKNode {

	SKCLabelNode* _skcLabelNode;

}

@property (assign,nonatomic) long long verticalAlignmentMode; 
@property (assign,nonatomic) long long horizontalAlignmentMode; 
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) double preferredMaxLayoutWidth; 
@property (nonatomic,copy) NSString * fontName; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (assign,nonatomic) double fontSize; 
@property (nonatomic,retain) UIColor * fontColor; 
@property (assign,nonatomic) double colorBlendFactor; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) long long blendMode; 
+(BOOL)supportsSecureCoding;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4 ;
+(id)labelNodeWithFontNamed:(id)arg1 ;
+(id)labelNodeWithText:(id)arg1 ;
+(id)labelNodeWithAttributedText:(id)arg1 ;
+(id)_labelNodeWithFontNamed:(id)arg1 ;
+(id)_labelNodeWithFontTexture:(id)arg1 fontDataString:(id)arg2 ;
-(void)setFont:(CTFontRef)arg1 ;
-(long long)lineBreakMode;
-(void)setText:(NSString *)arg1 ;
-(void)setFontName:(NSString *)arg1 ;
-(id)attributedString;
-(NSString *)fontName;
-(void)setLineBreakMode:(long long)arg1 ;
-(id)init;
-(void)setNumberOfLines:(long long)arg1 ;
-(long long)numberOfLines;
-(void)setBlendMode:(long long)arg1 ;
-(double)fontSize;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)text;
-(void)setColor:(UIColor *)arg1 ;
-(void)setFontSize:(double)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(id)description;
-(CGRect)frame;
-(void)setFontColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)color;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(double)preferredMaxLayoutWidth;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)blendMode;
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(UIColor *)fontColor;
-(id)copy;
-(void)_initialize;
-(void)setColorBlendFactor:(double)arg1 ;
-(void)setHorizontalAlignmentMode:(long long)arg1 ;
-(void)setVerticalAlignmentMode:(long long)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(double)colorBlendFactor;
-(id)_getTextSprites;
-(void)setUIFont:(id)arg1 ;
-(long long)horizontalAlignmentMode;
-(long long)verticalAlignmentMode;
-(id)initWithFontNamed:(id)arg1 ;
@end

