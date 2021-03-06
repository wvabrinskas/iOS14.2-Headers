/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BlastDoor/BlastDoor-Structs.h>
#import <BlastDoor/_BlastDoorLPSpecializationMetadata.h>

@class NSString, NSDate, _BlastDoorLPImage, _BlastDoorLPArtworkMetadata, NSArray;

@interface _BlastDoorLPiTunesMediaPodcastEpisodeMetadata : _BlastDoorLPSpecializationMetadata {

	NSString* _storeFrontIdentifier;
	NSString* _storeIdentifier;
	NSString* _episodeName;
	NSString* _podcastName;
	NSString* _artist;
	NSDate* _releaseDate;
	_BlastDoorLPImage* _artwork;
	_BlastDoorLPArtworkMetadata* _artworkMetadata;
	NSArray* _offers;

}

@property (nonatomic,copy) NSString * storeFrontIdentifier;                            //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                                 //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * episodeName;                                     //@synthesize episodeName=_episodeName - In the implementation block
@property (nonatomic,copy) NSString * podcastName;                                     //@synthesize podcastName=_podcastName - In the implementation block
@property (nonatomic,copy) NSString * artist;                                          //@synthesize artist=_artist - In the implementation block
@property (nonatomic,copy) NSDate * releaseDate;                                       //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * artwork;                              //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,copy) _BlastDoorLPArtworkMetadata * artworkMetadata;              //@synthesize artworkMetadata=_artworkMetadata - In the implementation block
@property (nonatomic,copy) NSArray * offers;                                           //@synthesize offers=_offers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(NSDate *)releaseDate;
-(void)setArtwork:(_BlastDoorLPImage *)arg1 ;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(NSString *)storeFrontIdentifier;
-(NSString *)storeIdentifier;
-(unsigned long long)hash;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)podcastName;
-(void)setPodcastName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)offers;
-(_BlastDoorLPImage *)artwork;
-(id)initWithCoder:(id)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(_BlastDoorLPArtworkMetadata *)artworkMetadata;
-(void)setArtworkMetadata:(_BlastDoorLPArtworkMetadata *)arg1 ;
-(NSString *)artist;
-(NSString *)episodeName;
-(void)setEpisodeName:(NSString *)arg1 ;
-(void)setOffers:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
@end

