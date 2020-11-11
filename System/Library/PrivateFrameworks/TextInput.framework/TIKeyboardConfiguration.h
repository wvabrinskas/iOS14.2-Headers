/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIKeyboardInputManagerState, TIKeyboardIntermediateText, NSString, NSArray;

@interface TIKeyboardConfiguration : NSObject <NSSecureCoding> {

	BOOL _assertDefaultKeyPlane;
	TIKeyboardInputManagerState* _inputManagerState;
	TIKeyboardIntermediateText* _intermediateText;
	NSString* _layoutTag;
	NSString* _accentKeyString;
	NSArray* _multilingualLanguages;

}

@property (nonatomic,copy) TIKeyboardInputManagerState * inputManagerState;              //@synthesize inputManagerState=_inputManagerState - In the implementation block
@property (nonatomic,retain) TIKeyboardIntermediateText * intermediateText;              //@synthesize intermediateText=_intermediateText - In the implementation block
@property (nonatomic,copy) NSString * layoutTag;                                         //@synthesize layoutTag=_layoutTag - In the implementation block
@property (nonatomic,copy) NSString * accentKeyString;                                   //@synthesize accentKeyString=_accentKeyString - In the implementation block
@property (assign,nonatomic) BOOL assertDefaultKeyPlane;                                 //@synthesize assertDefaultKeyPlane=_assertDefaultKeyPlane - In the implementation block
@property (nonatomic,retain) NSArray * multilingualLanguages;                            //@synthesize multilingualLanguages=_multilingualLanguages - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)layoutTag;
-(void)setInputManagerState:(TIKeyboardInputManagerState *)arg1 ;
-(TIKeyboardInputManagerState *)inputManagerState;
-(void)setAssertDefaultKeyPlane:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMultilingualLanguages:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TIKeyboardIntermediateText *)intermediateText;
-(NSArray *)multilingualLanguages;
-(void)setAccentKeyString:(NSString *)arg1 ;
-(NSString *)accentKeyString;
-(void)setLayoutTag:(NSString *)arg1 ;
-(void)setIntermediateText:(TIKeyboardIntermediateText *)arg1 ;
-(BOOL)assertDefaultKeyPlane;
@end
