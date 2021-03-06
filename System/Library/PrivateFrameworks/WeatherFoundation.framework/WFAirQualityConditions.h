/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFLocation, NSDate, NSString, WFAirQualityProviderAttribution, WFAQIScaleCategory, NSURL, WFAQIScale, NSArray, WFAirPollutant, NSLocale;

@interface WFAirQualityConditions : NSObject <NSSecureCoding, NSCopying> {

	BOOL _temporarilyUnavailable;
	WFLocation* _location;
	NSDate* _date;
	NSDate* _expirationDate;
	NSString* _provider;
	WFAirQualityProviderAttribution* _providerAttribution;
	NSString* _localizedDisclaimer;
	unsigned long long _localizedAirQualityIndex;
	WFAQIScaleCategory* _localizedAirQualityScaleCategory;
	unsigned long long _significance;
	NSString* _localizedRecommendation;
	NSURL* _providerURL;
	WFAQIScale* _scale;
	NSArray* _pollutants;
	WFAirPollutant* _primaryPollutant;
	unsigned long long _category;
	NSLocale* _locale;
	NSString* _localizedAirQualityCategory;
	NSString* _airQualityScale;

}

@property (nonatomic,retain) WFLocation * location;                                              //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSDate * date;                                                        //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL temporarilyUnavailable;                                        //@synthesize temporarilyUnavailable=_temporarilyUnavailable - In the implementation block
@property (nonatomic,copy) NSString * provider;                                                  //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) WFAirQualityProviderAttribution * providerAttribution;              //@synthesize providerAttribution=_providerAttribution - In the implementation block
@property (nonatomic,copy) NSString * localizedDisclaimer;                                       //@synthesize localizedDisclaimer=_localizedDisclaimer - In the implementation block
@property (nonatomic,retain) NSArray * pollutants;                                               //@synthesize pollutants=_pollutants - In the implementation block
@property (nonatomic,retain) WFAirPollutant * primaryPollutant;                                  //@synthesize primaryPollutant=_primaryPollutant - In the implementation block
@property (assign,nonatomic) unsigned long long localizedAirQualityIndex;                        //@synthesize localizedAirQualityIndex=_localizedAirQualityIndex - In the implementation block
@property (nonatomic,retain) WFAQIScaleCategory * localizedAirQualityScaleCategory;              //@synthesize localizedAirQualityScaleCategory=_localizedAirQualityScaleCategory - In the implementation block
@property (assign,nonatomic) unsigned long long significance;                                    //@synthesize significance=_significance - In the implementation block
@property (nonatomic,copy) NSString * localizedRecommendation;                                   //@synthesize localizedRecommendation=_localizedRecommendation - In the implementation block
@property (nonatomic,copy) NSURL * providerURL;                                                  //@synthesize providerURL=_providerURL - In the implementation block
@property (nonatomic,retain) WFAQIScale * scale;                                                 //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) unsigned long long category;                                        //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSLocale * locale;                                                    //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSString * localizedAirQualityCategory;                               //@synthesize localizedAirQualityCategory=_localizedAirQualityCategory - In the implementation block
@property (nonatomic,copy) NSString * airQualityScale;                                           //@synthesize airQualityScale=_airQualityScale - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
+(BOOL)supportsSecureCoding;
-(BOOL)temporarilyUnavailable;
-(NSArray *)pollutants;
-(void)setProviderAttribution:(WFAirQualityProviderAttribution *)arg1 ;
-(void)setLocalizedDisclaimer:(NSString *)arg1 ;
-(NSString *)airQualityScale;
-(void)setAirQualityScale:(NSString *)arg1 ;
-(void)setLocalizedAirQualityIndex:(unsigned long long)arg1 ;
-(NSLocale *)locale;
-(BOOL)isExpired;
-(unsigned long long)category;
-(void)setProvider:(NSString *)arg1 ;
-(void)setPollutants:(NSArray *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setSignificance:(unsigned long long)arg1 ;
-(WFLocation *)location;
-(void)setCategory:(unsigned long long)arg1 ;
-(WFAQIScaleCategory *)localizedAirQualityScaleCategory;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setProviderURL:(NSURL *)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSURL *)providerURL;
-(NSString *)localizedAirQualityCategory;
-(NSDate *)date;
-(void)setScale:(WFAQIScale *)arg1 ;
-(void)setLocation:(WFLocation *)arg1 ;
-(NSString *)localizedRecommendation;
-(WFAirQualityProviderAttribution *)providerAttribution;
-(void)setPrimaryPollutant:(WFAirPollutant *)arg1 ;
-(WFAirPollutant *)primaryPollutant;
-(void)setLocalizedAirQualityCategory:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)significance;
-(NSString *)provider;
-(NSString *)localizedDisclaimer;
-(void)setLocalizedRecommendation:(NSString *)arg1 ;
-(NSDate *)expirationDate;
-(void)setTemporarilyUnavailable:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)localizedAirQualityIndex;
-(long long)airQualityIndex;
-(void)setLocalizedAirQualityScaleCategory:(WFAQIScaleCategory *)arg1 ;
-(WFAQIScale *)scale;
@end

