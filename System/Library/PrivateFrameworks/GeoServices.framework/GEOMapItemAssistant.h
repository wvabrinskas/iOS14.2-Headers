/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOBaseMapItem.h>

@class GEOLocation, NSDictionary, NSString, NSURL, GEOPlace, GEOAddressObject;

@interface GEOMapItemAssistant : GEOBaseMapItem {

	GEOLocation* _location;
	NSDictionary* _addressDictionary;
	NSString* _name;
	NSURL* _businessURL;
	NSString* _phoneNumber;
	unsigned long long _muid;
	NSString* _attributionID;
	unsigned _sampleSizeForUserRatingScore;
	float _normalizedUserRatingScore;
	GEOPlace* _place;
	GEOAddressObject* _addressObject;

}
-(unsigned long long)_muid;
-(id)addressObject;
-(BOOL)_hasResolvablePartialInformation;
-(float)_normalizedUserRatingScore;
-(BOOL)_responseStatusIsIncomplete;
-(id)weatherDisplayName;
-(id)initWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned)arg9 normalizedUserRatingScore:(float)arg10 ;
-(id)_place;
-(id)addressDictionary;
-(BOOL)_hasMUID;
-(id)_businessURL;
-(id)geoAddress;
-(BOOL)_hasUserRatingScore;
-(unsigned)_sampleSizeForUserRatingScore;
-(GEOCoarseLocationLatLng)coordinate;
-(id)name;
-(id)description;
-(BOOL)isValid;
@end

