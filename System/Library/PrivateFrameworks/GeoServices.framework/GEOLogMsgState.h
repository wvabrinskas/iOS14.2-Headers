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

@class PBDataReader, GEOLogMsgStateApplicationIdentifier, GEOLogMsgStateCarPlay, GEOLogMsgStateCuratedCollection, GEOLogMsgStateDetailLookAroundLog, GEOLogMsgStateDeviceBase, GEOLogMsgStateDeviceConnection, GEOLogMsgStateDeviceIdentifier, GEOLogMsgStateDeviceLocale, GEOLogMsgStateDeviceSettings, GEOLogMsgStateDirectionsDetail, GEOLogMsgStateExperiments, GEOLogMsgStateExtension, GEOLogMsgStateLookAroundView, GEOLogMsgStateMapLaunch, GEOLogMsgStateMapRestore, GEOLogMsgStateMapSettings, GEOLogMsgStateMapUIShown, GEOLogMsgStateMapUI, GEOLogMsgStateMapViewLocation, GEOLogMsgStateMapView, GEOLogMsgStateMapsFeatures, GEOLogMsgStateMapsServer, GEOLogMsgStateMapsUserSettings, GEOLogMsgStateMarket, GEOLogMsgStateMuninResource, GEOLogMsgStateNavigation, GEOLogMsgStatePairedDevice, GEOLogMsgStatePlaceCard, GEOLogMsgStatePlaceRequest, GEOLogMsgStateRealtimeTrafficProbe, GEOLogMsgStateRoute, GEOLogMsgStateRoutingSettings, NSString, GEOLogMsgStateSuggestions, GEOLogMsgStateSummaryLookAroundLog, GEOLogMsgStateTileSet, GEOLogMsgStateTransit, GEOLogMsgStateUGCPhoto, GEOLogMsgStateUserSession, GEOLogMsgStateUser;

@interface GEOLogMsgState : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOLogMsgStateApplicationIdentifier* _applicationIdentifier;
	GEOLogMsgStateCarPlay* _carPlay;
	GEOLogMsgStateCuratedCollection* _curatedCollection;
	GEOLogMsgStateDetailLookAroundLog* _detailLookAroundLog;
	GEOLogMsgStateDeviceBase* _deviceBase;
	GEOLogMsgStateDeviceConnection* _deviceConnection;
	GEOLogMsgStateDeviceIdentifier* _deviceIdentifier;
	GEOLogMsgStateDeviceLocale* _deviceLocale;
	GEOLogMsgStateDeviceSettings* _deviceSettings;
	GEOLogMsgStateDirectionsDetail* _directionsDetail;
	GEOLogMsgStateExperiments* _experiments;
	GEOLogMsgStateExtension* _extension;
	GEOLogMsgStateLookAroundView* _lookAroundView;
	GEOLogMsgStateMapLaunch* _mapLaunch;
	GEOLogMsgStateMapRestore* _mapRestore;
	GEOLogMsgStateMapSettings* _mapSettings;
	GEOLogMsgStateMapUIShown* _mapUiShown;
	GEOLogMsgStateMapUI* _mapUi;
	GEOLogMsgStateMapViewLocation* _mapViewLocation;
	GEOLogMsgStateMapView* _mapView;
	GEOLogMsgStateMapsFeatures* _mapsFeatures;
	GEOLogMsgStateMapsServer* _mapsServer;
	GEOLogMsgStateMapsUserSettings* _mapsUserSettings;
	GEOLogMsgStateMarket* _market;
	GEOLogMsgStateMuninResource* _muninResource;
	GEOLogMsgStateNavigation* _navigation;
	GEOLogMsgStatePairedDevice* _pairedDevice;
	GEOLogMsgStatePlaceCard* _placeCard;
	GEOLogMsgStatePlaceRequest* _placeRequest;
	GEOLogMsgStateRealtimeTrafficProbe* _realtimeTrafficProbe;
	GEOLogMsgStateRoute* _route;
	GEOLogMsgStateRoutingSettings* _routingSettings;
	NSString* _stateOrigin;
	GEOLogMsgStateSuggestions* _suggestions;
	GEOLogMsgStateSummaryLookAroundLog* _summaryLookAroundLog;
	GEOLogMsgStateTileSet* _tileSet;
	GEOLogMsgStateTransit* _transit;
	GEOLogMsgStateUGCPhoto* _ugcPhoto;
	GEOLogMsgStateUserSession* _userSession;
	GEOLogMsgStateUser* _user;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _stateType;
	struct {
		unsigned has_stateType : 1;
		unsigned read_applicationIdentifier : 1;
		unsigned read_carPlay : 1;
		unsigned read_curatedCollection : 1;
		unsigned read_detailLookAroundLog : 1;
		unsigned read_deviceBase : 1;
		unsigned read_deviceConnection : 1;
		unsigned read_deviceIdentifier : 1;
		unsigned read_deviceLocale : 1;
		unsigned read_deviceSettings : 1;
		unsigned read_directionsDetail : 1;
		unsigned read_experiments : 1;
		unsigned read_extension : 1;
		unsigned read_lookAroundView : 1;
		unsigned read_mapLaunch : 1;
		unsigned read_mapRestore : 1;
		unsigned read_mapSettings : 1;
		unsigned read_mapUiShown : 1;
		unsigned read_mapUi : 1;
		unsigned read_mapViewLocation : 1;
		unsigned read_mapView : 1;
		unsigned read_mapsFeatures : 1;
		unsigned read_mapsServer : 1;
		unsigned read_mapsUserSettings : 1;
		unsigned read_market : 1;
		unsigned read_muninResource : 1;
		unsigned read_navigation : 1;
		unsigned read_pairedDevice : 1;
		unsigned read_placeCard : 1;
		unsigned read_placeRequest : 1;
		unsigned read_realtimeTrafficProbe : 1;
		unsigned read_route : 1;
		unsigned read_routingSettings : 1;
		unsigned read_stateOrigin : 1;
		unsigned read_suggestions : 1;
		unsigned read_summaryLookAroundLog : 1;
		unsigned read_tileSet : 1;
		unsigned read_transit : 1;
		unsigned read_ugcPhoto : 1;
		unsigned read_userSession : 1;
		unsigned read_user : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasStateOrigin; 
@property (nonatomic,retain) NSString * stateOrigin; 
@property (nonatomic,readonly) BOOL hasUser; 
@property (nonatomic,retain) GEOLogMsgStateUser * user; 
@property (assign,nonatomic) BOOL hasStateType; 
@property (assign,nonatomic) int stateType; 
@property (nonatomic,readonly) BOOL hasDeviceIdentifier; 
@property (nonatomic,retain) GEOLogMsgStateDeviceIdentifier * deviceIdentifier; 
@property (nonatomic,readonly) BOOL hasApplicationIdentifier; 
@property (nonatomic,retain) GEOLogMsgStateApplicationIdentifier * applicationIdentifier; 
@property (nonatomic,readonly) BOOL hasDeviceBase; 
@property (nonatomic,retain) GEOLogMsgStateDeviceBase * deviceBase; 
@property (nonatomic,readonly) BOOL hasDeviceLocale; 
@property (nonatomic,retain) GEOLogMsgStateDeviceLocale * deviceLocale; 
@property (nonatomic,readonly) BOOL hasDeviceConnection; 
@property (nonatomic,retain) GEOLogMsgStateDeviceConnection * deviceConnection; 
@property (nonatomic,readonly) BOOL hasCarPlay; 
@property (nonatomic,retain) GEOLogMsgStateCarPlay * carPlay; 
@property (nonatomic,readonly) BOOL hasPairedDevice; 
@property (nonatomic,retain) GEOLogMsgStatePairedDevice * pairedDevice; 
@property (nonatomic,readonly) BOOL hasExtension; 
@property (nonatomic,retain) GEOLogMsgStateExtension * extension; 
@property (nonatomic,readonly) BOOL hasDeviceSettings; 
@property (nonatomic,retain) GEOLogMsgStateDeviceSettings * deviceSettings; 
@property (nonatomic,readonly) BOOL hasMapView; 
@property (nonatomic,retain) GEOLogMsgStateMapView * mapView; 
@property (nonatomic,readonly) BOOL hasMapViewLocation; 
@property (nonatomic,retain) GEOLogMsgStateMapViewLocation * mapViewLocation; 
@property (nonatomic,readonly) BOOL hasTransit; 
@property (nonatomic,retain) GEOLogMsgStateTransit * transit; 
@property (nonatomic,readonly) BOOL hasMapSettings; 
@property (nonatomic,retain) GEOLogMsgStateMapSettings * mapSettings; 
@property (nonatomic,readonly) BOOL hasMapUi; 
@property (nonatomic,retain) GEOLogMsgStateMapUI * mapUi; 
@property (nonatomic,readonly) BOOL hasMapUiShown; 
@property (nonatomic,retain) GEOLogMsgStateMapUIShown * mapUiShown; 
@property (nonatomic,readonly) BOOL hasUserSession; 
@property (nonatomic,retain) GEOLogMsgStateUserSession * userSession; 
@property (nonatomic,readonly) BOOL hasExperiments; 
@property (nonatomic,retain) GEOLogMsgStateExperiments * experiments; 
@property (nonatomic,readonly) BOOL hasPlaceCard; 
@property (nonatomic,retain) GEOLogMsgStatePlaceCard * placeCard; 
@property (nonatomic,readonly) BOOL hasRoute; 
@property (nonatomic,retain) GEOLogMsgStateRoute * route; 
@property (nonatomic,readonly) BOOL hasMapsServer; 
@property (nonatomic,retain) GEOLogMsgStateMapsServer * mapsServer; 
@property (nonatomic,readonly) BOOL hasTileSet; 
@property (nonatomic,retain) GEOLogMsgStateTileSet * tileSet; 
@property (nonatomic,readonly) BOOL hasPlaceRequest; 
@property (nonatomic,retain) GEOLogMsgStatePlaceRequest * placeRequest; 
@property (nonatomic,readonly) BOOL hasNavigation; 
@property (nonatomic,retain) GEOLogMsgStateNavigation * navigation; 
@property (nonatomic,readonly) BOOL hasMapRestore; 
@property (nonatomic,retain) GEOLogMsgStateMapRestore * mapRestore; 
@property (nonatomic,readonly) BOOL hasSuggestions; 
@property (nonatomic,retain) GEOLogMsgStateSuggestions * suggestions; 
@property (nonatomic,readonly) BOOL hasRealtimeTrafficProbe; 
@property (nonatomic,retain) GEOLogMsgStateRealtimeTrafficProbe * realtimeTrafficProbe; 
@property (nonatomic,readonly) BOOL hasSummaryLookAroundLog; 
@property (nonatomic,retain) GEOLogMsgStateSummaryLookAroundLog * summaryLookAroundLog; 
@property (nonatomic,readonly) BOOL hasDetailLookAroundLog; 
@property (nonatomic,retain) GEOLogMsgStateDetailLookAroundLog * detailLookAroundLog; 
@property (nonatomic,readonly) BOOL hasLookAroundView; 
@property (nonatomic,retain) GEOLogMsgStateLookAroundView * lookAroundView; 
@property (nonatomic,readonly) BOOL hasMuninResource; 
@property (nonatomic,retain) GEOLogMsgStateMuninResource * muninResource; 
@property (nonatomic,readonly) BOOL hasMapLaunch; 
@property (nonatomic,retain) GEOLogMsgStateMapLaunch * mapLaunch; 
@property (nonatomic,readonly) BOOL hasCuratedCollection; 
@property (nonatomic,retain) GEOLogMsgStateCuratedCollection * curatedCollection; 
@property (nonatomic,readonly) BOOL hasUgcPhoto; 
@property (nonatomic,retain) GEOLogMsgStateUGCPhoto * ugcPhoto; 
@property (nonatomic,readonly) BOOL hasDirectionsDetail; 
@property (nonatomic,retain) GEOLogMsgStateDirectionsDetail * directionsDetail; 
@property (nonatomic,readonly) BOOL hasMarket; 
@property (nonatomic,retain) GEOLogMsgStateMarket * market; 
@property (nonatomic,readonly) BOOL hasRoutingSettings; 
@property (nonatomic,retain) GEOLogMsgStateRoutingSettings * routingSettings; 
@property (nonatomic,readonly) BOOL hasMapsFeatures; 
@property (nonatomic,retain) GEOLogMsgStateMapsFeatures * mapsFeatures; 
@property (nonatomic,readonly) BOOL hasMapsUserSettings; 
@property (nonatomic,retain) GEOLogMsgStateMapsUserSettings * mapsUserSettings; 
+(BOOL)isValid:(id)arg1 ;
-(GEOLogMsgStateCarPlay *)carPlay;
-(GEOLogMsgStateMapsServer *)mapsServer;
-(GEOLogMsgStateUGCPhoto *)ugcPhoto;
-(BOOL)hasUserSession;
-(GEOLogMsgStateTransit *)transit;
-(GEOLogMsgStateDeviceConnection *)deviceConnection;
-(GEOLogMsgStateDeviceLocale *)deviceLocale;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasPairedDevice;
-(BOOL)hasSummaryLookAroundLog;
-(GEOLogMsgStateRoute *)route;
-(GEOLogMsgStateUser *)user;
-(void)setSuggestions:(GEOLogMsgStateSuggestions *)arg1 ;
-(GEOLogMsgStatePairedDevice *)pairedDevice;
-(BOOL)hasExtension;
-(BOOL)hasSuggestions;
-(void)setMapUi:(GEOLogMsgStateMapUI *)arg1 ;
-(GEOLogMsgStateSuggestions *)suggestions;
-(void)setApplicationIdentifier:(GEOLogMsgStateApplicationIdentifier *)arg1 ;
-(void)setUser:(GEOLogMsgStateUser *)arg1 ;
-(GEOLogMsgStateRoutingSettings *)routingSettings;
-(id)init;
-(BOOL)hasMapLaunch;
-(BOOL)hasMarket;
-(void)setPlaceCard:(GEOLogMsgStatePlaceCard *)arg1 ;
-(GEOLogMsgStateApplicationIdentifier *)applicationIdentifier;
-(id)jsonRepresentation;
-(void)setTileSet:(GEOLogMsgStateTileSet *)arg1 ;
-(unsigned long long)hash;
-(GEOLogMsgStatePlaceRequest *)placeRequest;
-(GEOLogMsgStateNavigation *)navigation;
-(GEOLogMsgStatePlaceCard *)placeCard;
-(void)setRoute:(GEOLogMsgStateRoute *)arg1 ;
-(BOOL)hasStateOrigin;
-(BOOL)hasPlaceRequest;
-(void)setDeviceIdentifier:(GEOLogMsgStateDeviceIdentifier *)arg1 ;
-(BOOL)hasMapsFeatures;
-(void)setMapView:(GEOLogMsgStateMapView *)arg1 ;
-(BOOL)hasDetailLookAroundLog;
-(BOOL)hasMapRestore;
-(BOOL)hasMapsUserSettings;
-(BOOL)hasPlaceCard;
-(id)initWithDictionary:(id)arg1 ;
-(void)setMapUiShown:(GEOLogMsgStateMapUIShown *)arg1 ;
-(BOOL)hasRealtimeTrafficProbe;
-(void)setRoutingSettings:(GEOLogMsgStateRoutingSettings *)arg1 ;
-(void)setMapViewLocation:(GEOLogMsgStateMapViewLocation *)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLogMsgStateExperiments *)experiments;
-(void)setMapsFeatures:(GEOLogMsgStateMapsFeatures *)arg1 ;
-(GEOLogMsgStateMarket *)market;
-(BOOL)hasLookAroundView;
-(BOOL)hasUser;
-(BOOL)hasDeviceBase;
-(GEOLogMsgStateMapLaunch *)mapLaunch;
-(BOOL)readFrom:(id)arg1 ;
-(void)setNavigation:(GEOLogMsgStateNavigation *)arg1 ;
-(BOOL)hasNavigation;
-(void)setHasStateType:(BOOL)arg1 ;
-(void)setExtension:(GEOLogMsgStateExtension *)arg1 ;
-(void)setMapsUserSettings:(GEOLogMsgStateMapsUserSettings *)arg1 ;
-(void)setTransit:(GEOLogMsgStateTransit *)arg1 ;
-(void)setStateType:(int)arg1 ;
-(BOOL)hasDeviceSettings;
-(id)description;
-(BOOL)hasMapSettings;
-(void)setMapsServer:(GEOLogMsgStateMapsServer *)arg1 ;
-(BOOL)hasTransit;
-(void)setSummaryLookAroundLog:(GEOLogMsgStateSummaryLookAroundLog *)arg1 ;
-(void)setDeviceConnection:(GEOLogMsgStateDeviceConnection *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasMapsServer;
-(void)setCarPlay:(GEOLogMsgStateCarPlay *)arg1 ;
-(GEOLogMsgStateMapsUserSettings *)mapsUserSettings;
-(GEOLogMsgStateMapRestore *)mapRestore;
-(BOOL)hasMapUi;
-(GEOLogMsgStateCuratedCollection *)curatedCollection;
-(GEOLogMsgStateMapUIShown *)mapUiShown;
-(BOOL)hasStateType;
-(BOOL)hasApplicationIdentifier;
-(BOOL)hasMapUiShown;
-(void)setUgcPhoto:(GEOLogMsgStateUGCPhoto *)arg1 ;
-(BOOL)hasMapView;
-(void)setUserSession:(GEOLogMsgStateUserSession *)arg1 ;
-(NSString *)stateOrigin;
-(id)stateTypeAsString:(int)arg1 ;
-(BOOL)hasCarPlay;
-(void)setStateOrigin:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasRoutingSettings;
-(GEOLogMsgStateMuninResource *)muninResource;
-(int)stateType;
-(GEOLogMsgStateDeviceSettings *)deviceSettings;
-(BOOL)hasDeviceLocale;
-(BOOL)hasTileSet;
-(GEOLogMsgStateMapsFeatures *)mapsFeatures;
-(void)setMarket:(GEOLogMsgStateMarket *)arg1 ;
-(void)setDeviceBase:(GEOLogMsgStateDeviceBase *)arg1 ;
-(int)StringAsStateType:(id)arg1 ;
-(void)setPlaceRequest:(GEOLogMsgStatePlaceRequest *)arg1 ;
-(void)setExperiments:(GEOLogMsgStateExperiments *)arg1 ;
-(void)setRealtimeTrafficProbe:(GEOLogMsgStateRealtimeTrafficProbe *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(GEOLogMsgStateMapView *)mapView;
-(BOOL)hasExperiments;
-(void)setDeviceSettings:(GEOLogMsgStateDeviceSettings *)arg1 ;
-(void)setCuratedCollection:(GEOLogMsgStateCuratedCollection *)arg1 ;
-(GEOLogMsgStateMapUI *)mapUi;
-(void)setDirectionsDetail:(GEOLogMsgStateDirectionsDetail *)arg1 ;
-(BOOL)hasMapViewLocation;
-(void)setMuninResource:(GEOLogMsgStateMuninResource *)arg1 ;
-(BOOL)hasDeviceConnection;
-(void)writeTo:(id)arg1 ;
-(GEOLogMsgStateTileSet *)tileSet;
-(void)setDeviceLocale:(GEOLogMsgStateDeviceLocale *)arg1 ;
-(void)setMapLaunch:(GEOLogMsgStateMapLaunch *)arg1 ;
-(GEOLogMsgStateLookAroundView *)lookAroundView;
-(GEOLogMsgStateSummaryLookAroundLog *)summaryLookAroundLog;
-(id)initWithJSON:(id)arg1 ;
-(GEOLogMsgStateMapViewLocation *)mapViewLocation;
-(GEOLogMsgStateExtension *)extension;
-(BOOL)hasUgcPhoto;
-(void)setDetailLookAroundLog:(GEOLogMsgStateDetailLookAroundLog *)arg1 ;
-(BOOL)hasDeviceIdentifier;
-(GEOLogMsgStateMapSettings *)mapSettings;
-(GEOLogMsgStateUserSession *)userSession;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMapSettings:(GEOLogMsgStateMapSettings *)arg1 ;
-(BOOL)hasMuninResource;
-(BOOL)hasDirectionsDetail;
-(void)setLookAroundView:(GEOLogMsgStateLookAroundView *)arg1 ;
-(BOOL)hasRoute;
-(GEOLogMsgStateDeviceIdentifier *)deviceIdentifier;
-(GEOLogMsgStateDeviceBase *)deviceBase;
-(void)readAll:(BOOL)arg1 ;
-(GEOLogMsgStateRealtimeTrafficProbe *)realtimeTrafficProbe;
-(void)setPairedDevice:(GEOLogMsgStatePairedDevice *)arg1 ;
-(GEOLogMsgStateDetailLookAroundLog *)detailLookAroundLog;
-(BOOL)hasCuratedCollection;
-(void)setMapRestore:(GEOLogMsgStateMapRestore *)arg1 ;
-(GEOLogMsgStateDirectionsDetail *)directionsDetail;
@end
