/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface HKSpokenLanguage : NSObject {

	NSString* _identifier;
	NSString* _languageInCurrentLocale;
	NSString* _languageInLanguageLocale;
	unsigned long long _languageCategoryType;

}

@property (nonatomic,retain) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * languageInCurrentLocale;               //@synthesize languageInCurrentLocale=_languageInCurrentLocale - In the implementation block
@property (nonatomic,retain) NSString * languageInLanguageLocale;              //@synthesize languageInLanguageLocale=_languageInLanguageLocale - In the implementation block
@property (assign) unsigned long long languageCategoryType;                    //@synthesize languageCategoryType=_languageCategoryType - In the implementation block
-(unsigned long long)hash;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)languageCategoryType;
-(NSString *)languageInCurrentLocale;
-(NSString *)languageInLanguageLocale;
-(id)initWithLanguageIdentifier:(id)arg1 forCategory:(unsigned long long)arg2 ;
-(id)localizedStringForDisplay;
-(void)setLanguageInCurrentLocale:(NSString *)arg1 ;
-(void)setLanguageInLanguageLocale:(NSString *)arg1 ;
-(void)setLanguageCategoryType:(unsigned long long)arg1 ;
@end

