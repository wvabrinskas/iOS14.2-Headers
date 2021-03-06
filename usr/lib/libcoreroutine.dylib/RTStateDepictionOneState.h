/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GEOMapItem;
@class RTStateModelLocation, RTMapItem, NSDate, NSMutableArray, NSString;

@interface RTStateDepictionOneState : NSObject <NSSecureCoding> {

	RTStateModelLocation* _location;
	long long _type;
	unsigned long long _typeSource;
	RTMapItem* _mapItem;
	unsigned long long _mapItemSource;
	NSDate* _geocodeDate;
	NSMutableArray* _histEntryExit_s;
	NSString* _customLabel;
	id<GEOMapItem> _geoMapItem;

}

@property (nonatomic,retain) RTStateModelLocation * location;               //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) long long type;                                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long typeSource;                 //@synthesize typeSource=_typeSource - In the implementation block
@property (nonatomic,retain) RTMapItem * mapItem;                           //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic) unsigned long long mapItemSource;              //@synthesize mapItemSource=_mapItemSource - In the implementation block
@property (nonatomic,retain) NSDate * geocodeDate;                          //@synthesize geocodeDate=_geocodeDate - In the implementation block
@property (nonatomic,retain) NSMutableArray * histEntryExit_s;              //@synthesize histEntryExit_s=_histEntryExit_s - In the implementation block
@property (nonatomic,retain) NSString * customLabel;                        //@synthesize customLabel=_customLabel - In the implementation block
@property (nonatomic,retain) id<GEOMapItem> geoMapItem;                     //@synthesize geoMapItem=_geoMapItem - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)customLabel;
-(void)setCustomLabel:(NSString *)arg1 ;
-(id)init;
-(RTStateModelLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setMapItem:(RTMapItem *)arg1 ;
-(void)setLocation:(RTStateModelLocation *)arg1 ;
-(id)description;
-(RTMapItem *)mapItem;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)typeSource;
-(void)setGeoMapItem:(id<GEOMapItem>)arg1 ;
-(id<GEOMapItem>)geoMapItem;
-(unsigned long long)mapItemSource;
-(void)setMapItemSource:(unsigned long long)arg1 ;
-(void)setTypeSource:(unsigned long long)arg1 ;
-(id)initWithLocation:(id)arg1 type:(long long)arg2 typeSource:(unsigned long long)arg3 customLabel:(id)arg4 mapItem:(id)arg5 ;
-(NSDate *)geocodeDate;
-(NSMutableArray *)histEntryExit_s;
-(void)setGeocodeDate:(NSDate *)arg1 ;
-(void)setHistEntryExit_s:(NSMutableArray *)arg1 ;
@end

