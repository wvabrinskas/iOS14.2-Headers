/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPPBLabeledPostalAddress : PBCodable <NSCopying> {

	NSString* _city;
	NSString* _country;
	NSString* _isoCountryCode;
	NSString* _label;
	NSString* _postalCode;
	NSString* _state;
	NSString* _street;
	NSString* _subAdministrativeArea;
	NSString* _subLocality;

}

@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) NSString * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL hasStreet; 
@property (nonatomic,retain) NSString * street;                             //@synthesize street=_street - In the implementation block
@property (nonatomic,readonly) BOOL hasSubLocality; 
@property (nonatomic,retain) NSString * subLocality;                        //@synthesize subLocality=_subLocality - In the implementation block
@property (nonatomic,readonly) BOOL hasCity; 
@property (nonatomic,retain) NSString * city;                               //@synthesize city=_city - In the implementation block
@property (nonatomic,readonly) BOOL hasSubAdministrativeArea; 
@property (nonatomic,retain) NSString * subAdministrativeArea;              //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (nonatomic,readonly) BOOL hasState; 
@property (nonatomic,retain) NSString * state;                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL hasPostalCode; 
@property (nonatomic,retain) NSString * postalCode;                         //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,readonly) BOOL hasCountry; 
@property (nonatomic,retain) NSString * country;                            //@synthesize country=_country - In the implementation block
@property (nonatomic,readonly) BOOL hasIsoCountryCode; 
@property (nonatomic,retain) NSString * isoCountryCode;                     //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
-(BOOL)hasState;
-(void)mergeFrom:(id)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(BOOL)hasIsoCountryCode;
-(BOOL)hasStreet;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(NSString *)postalCode;
-(NSString *)subLocality;
-(NSString *)label;
-(NSString *)subAdministrativeArea;
-(NSString *)city;
-(NSString *)isoCountryCode;
-(void)setSubLocality:(NSString *)arg1 ;
-(void)setState:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasSubLocality;
-(BOOL)hasCity;
-(id)dictionaryRepresentation;
-(NSString *)state;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)country;
-(void)setStreet:(NSString *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasPostalCode;
-(BOOL)hasCountry;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasLabel;
-(void)setLabel:(NSString *)arg1 ;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(BOOL)hasSubAdministrativeArea;
-(void)writeTo:(id)arg1 ;
-(NSString *)street;
-(void)setCountry:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

