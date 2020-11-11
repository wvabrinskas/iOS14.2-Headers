/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEORoutingSettingsCyclingPrefs, GEORoutingSettingsDrivingPrefs, GEORoutingSettingsVirtualGarageSetttings;

@interface GEOLogMsgStateRoutingSettings : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEORoutingSettingsCyclingPrefs* _cyclingPrefs;
	GEORoutingSettingsDrivingPrefs* _drivingPrefs;
	GEORoutingSettingsVirtualGarageSetttings* _virtualGarageSettings;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_cyclingPrefs : 1;
		unsigned read_drivingPrefs : 1;
		unsigned read_virtualGarageSettings : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasVirtualGarageSettings; 
@property (nonatomic,retain) GEORoutingSettingsVirtualGarageSetttings * virtualGarageSettings; 
@property (nonatomic,readonly) BOOL hasCyclingPrefs; 
@property (nonatomic,retain) GEORoutingSettingsCyclingPrefs * cyclingPrefs; 
@property (nonatomic,readonly) BOOL hasDrivingPrefs; 
@property (nonatomic,retain) GEORoutingSettingsDrivingPrefs * drivingPrefs; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(GEORoutingSettingsVirtualGarageSetttings *)virtualGarageSettings;
-(GEORoutingSettingsCyclingPrefs *)cyclingPrefs;
-(GEORoutingSettingsDrivingPrefs *)drivingPrefs;
-(void)setVirtualGarageSettings:(GEORoutingSettingsVirtualGarageSetttings *)arg1 ;
-(void)setCyclingPrefs:(GEORoutingSettingsCyclingPrefs *)arg1 ;
-(void)setDrivingPrefs:(GEORoutingSettingsDrivingPrefs *)arg1 ;
-(BOOL)hasVirtualGarageSettings;
-(BOOL)hasCyclingPrefs;
-(BOOL)hasDrivingPrefs;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
