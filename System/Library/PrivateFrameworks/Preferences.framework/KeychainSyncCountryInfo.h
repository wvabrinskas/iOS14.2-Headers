/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface KeychainSyncCountryInfo : NSObject <NSCopying> {

	NSString* _countryCode;
	NSString* _countryName;
	NSString* _localizedCountryName;
	NSString* _dialingPrefix;

}

@property (nonatomic,retain) NSString * countryCode;                       //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSString * countryName;                       //@synthesize countryName=_countryName - In the implementation block
@property (nonatomic,retain) NSString * dialingPrefix;                     //@synthesize dialingPrefix=_dialingPrefix - In the implementation block
@property (nonatomic,retain) NSString * localizedCountryName;              //@synthesize localizedCountryName=_localizedCountryName - In the implementation block
+(id)allCountries;
+(id)countryInfoWithDictionary:(id)arg1 ;
+(void)_loadCountriesIfNeeded;
+(id)countryInfoForCountryCode:(id)arg1 dialingPrefix:(id)arg2 ;
-(NSString *)countryName;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setCountryName:(NSString *)arg1 ;
-(NSString *)countryCode;
-(id)description;
-(NSString *)dialingPrefix;
-(void)setLocalizedCountryName:(NSString *)arg1 ;
-(NSString *)localizedCountryName;
-(void)setDialingPrefix:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

