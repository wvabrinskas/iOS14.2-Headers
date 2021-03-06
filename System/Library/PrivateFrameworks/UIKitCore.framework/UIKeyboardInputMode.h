/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextInputMode.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSExtension, NSBundle;

@interface UIKeyboardInputMode : UITextInputMode <NSCopying> {

	BOOL isDisplayed;
	BOOL _extensionInputModeHasDictation;
	NSString* _primaryLanguage;
	NSString* _languageWithRegion;
	NSString* identifier;
	NSString* normalizedIdentifier;
	NSString* softwareLayout;
	NSString* hardwareLayout;
	NSArray* _multilingualLanguages;

}

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * normalizedIdentifier; 
@property (nonatomic,retain) NSString * languageWithRegion;                              //@synthesize languageWithRegion=_languageWithRegion - In the implementation block
@property (nonatomic,retain) NSString * softwareLayout; 
@property (nonatomic,retain) NSString * hardwareLayout; 
@property (nonatomic,retain) NSArray * multilingualLanguages;                            //@synthesize multilingualLanguages=_multilingualLanguages - In the implementation block
@property (nonatomic,readonly) NSString * identifierWithLayouts; 
@property (nonatomic,retain) NSString * primaryLanguage;                                 //@synthesize primaryLanguage=_primaryLanguage - In the implementation block
@property (nonatomic,readonly) NSString * automaticHardwareLayout; 
@property (nonatomic,retain,readonly) NSArray * normalizedIdentifierLevels; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * extendedDisplayName; 
@property (nonatomic,readonly) BOOL isDefaultRightToLeft; 
@property (nonatomic,readonly) BOOL defaultLayoutIsASCIICapable; 
@property (nonatomic,readonly) BOOL isExtensionInputMode; 
@property (nonatomic,readonly) BOOL isStalledExtensionInputMode; 
@property (assign,nonatomic) BOOL extensionInputModeHasDictation;                        //@synthesize extensionInputModeHasDictation=_extensionInputModeHasDictation - In the implementation block
@property (nonatomic,readonly) NSExtension * extension; 
@property (nonatomic,readonly) NSBundle * containingBundle; 
@property (nonatomic,readonly) NSString * containingBundleDisplayName; 
@property (assign,nonatomic) BOOL isDisplayed; 
@property (nonatomic,readonly) BOOL isSpecializedInputMode; 
@property (nonatomic,readonly) BOOL isEmojiInputMode; 
@property (nonatomic,readonly) BOOL supportsEmojiSearch; 
@property (nonatomic,retain) NSString * dictationLanguage; 
@property (nonatomic,readonly) NSString * dictationDisplayName; 
+(id)dictationInputMode;
+(BOOL)supportsSecureCoding;
+(id)canonicalLanguageIdentifierFromIdentifier:(id)arg1 ;
+(id)softwareLayoutFromIdentifier:(id)arg1 ;
+(id)keyboardInputModeWithIdentifier:(id)arg1 ;
+(id)autofillSignupInputMode;
+(id)intlInputMode;
+(id)hardwareLayoutFromIdentifier:(id)arg1 ;
-(NSBundle *)containingBundle;
-(NSString *)languageWithRegion;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setMultilingualLanguages:(NSArray *)arg1 ;
-(NSString *)softwareLayout;
-(NSString *)primaryLanguage;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)includeBarHeight;
-(BOOL)isExtensionInputMode;
-(BOOL)isEmojiInputMode;
-(BOOL)isSpecializedInputMode;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)supportsEmojiSearch;
-(NSString *)normalizedIdentifier;
-(BOOL)isAllowedForTraits:(id)arg1 ;
-(NSString *)hardwareLayout;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)automaticHardwareLayout;
-(BOOL)defaultLayoutIsASCIICapable;
-(BOOL)isStalledExtensionInputMode;
-(NSString *)dictationLanguage;
-(void)setSoftwareLayout:(NSString *)arg1 ;
-(void)setNormalizedIdentifier:(NSString *)arg1 ;
-(void)setLanguageWithRegion:(NSString *)arg1 ;
-(void)setHardwareLayout:(NSString *)arg1 ;
-(NSString *)extendedDisplayName;
-(NSArray *)normalizedIdentifierLevels;
-(BOOL)isDefaultRightToLeft;
-(NSString *)containingBundleDisplayName;
-(BOOL)isDesiredForTraits:(id)arg1 ;
-(NSString *)dictationDisplayName;
-(void)setIsDisplayed:(BOOL)arg1 ;
-(void)setDictationLanguage:(NSString *)arg1 ;
-(void)setLastUsedDictationLanguage;
-(BOOL)extensionInputModeHasDictation;
-(void)setExtensionInputModeHasDictation:(BOOL)arg1 ;
-(BOOL)isDisplayed;
-(NSArray *)multilingualLanguages;
-(NSExtension *)extension;
-(NSString *)identifierWithLayouts;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPrimaryLanguage:(NSString *)arg1 ;
-(void)dealloc;
@end

