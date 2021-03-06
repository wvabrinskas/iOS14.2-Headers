/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSAttributedString;

@interface UIAccessibilityElementDescription : NSObject <NSSecureCoding> {

	BOOL _isAccessibleElement;
	unsigned long long _traits;
	NSString* _label;
	NSAttributedString* _attributedLabel;
	NSString* _value;
	NSAttributedString* _attributedValue;
	CGRect _frameInContainerSpace;
	CGRect _frame;

}

@property (assign,nonatomic) BOOL isAccessibleElement;                          //@synthesize isAccessibleElement=_isAccessibleElement - In the implementation block
@property (assign,nonatomic) unsigned long long traits;                         //@synthesize traits=_traits - In the implementation block
@property (nonatomic,retain) NSString * label;                                  //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedLabel;              //@synthesize attributedLabel=_attributedLabel - In the implementation block
@property (nonatomic,retain) NSString * value;                                  //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedValue;              //@synthesize attributedValue=_attributedValue - In the implementation block
@property (assign,nonatomic) CGRect frameInContainerSpace;                      //@synthesize frameInContainerSpace=_frameInContainerSpace - In the implementation block
@property (assign,nonatomic) CGRect frame;                                      //@synthesize frame=_frame - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_descriptionWithAXElement:(id)arg1 ;
+(id)_descriptionWithLocalElement:(id)arg1 ;
+(id)descriptionWithElement:(id)arg1 frameInContainerSpaceOrNil:(CGRect)arg2 ;
-(unsigned long long)traits;
-(NSString *)label;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTraits:(unsigned long long)arg1 ;
-(id)description;
-(CGRect)frame;
-(NSString *)value;
-(id)initWithCoder:(id)arg1 ;
-(id)convertToAccessibilityElementWithContainer:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setFrameInContainerSpace:(CGRect)arg1 ;
-(void)setIsAccessibleElement:(BOOL)arg1 ;
-(void)setAttributedLabel:(NSAttributedString *)arg1 ;
-(void)setAttributedValue:(NSAttributedString *)arg1 ;
-(BOOL)isAccessibleElement;
-(NSAttributedString *)attributedLabel;
-(NSAttributedString *)attributedValue;
-(CGRect)frameInContainerSpace;
-(void)setValue:(NSString *)arg1 ;
@end

