/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSDictionary, NSString, NSArray;

@interface ICStorePlatformMetadata : NSObject {

	NSDate* _expirationDate;
	NSDictionary* _metadataDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * metadataDictionary;               //@synthesize metadataDictionary=_metadataDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * artistName; 
@property (nonatomic,readonly) long long artistStoreAdamID; 
@property (nonatomic,copy,readonly) NSString * cloudUniversalLibraryID; 
@property (nonatomic,copy,readonly) NSString * collectionName; 
@property (nonatomic,readonly) long long collectionStoreAdamID; 
@property (nonatomic,copy,readonly) NSString * composerName; 
@property (nonatomic,copy,readonly) NSString * copyrightText; 
@property (nonatomic,readonly) long long discNumber; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,copy,readonly) NSDate * expirationDate;                         //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) long long explicitRating; 
@property (nonatomic,readonly) BOOL isExplicit; 
@property (nonatomic,copy,readonly) NSArray * genreNames; 
@property (nonatomic,readonly) BOOL hasLyrics; 
@property (nonatomic,readonly) BOOL hasTimeSyncedLyrics; 
@property (nonatomic,copy,readonly) NSString * kind; 
@property (nonatomic,readonly) long long movementCount; 
@property (nonatomic,copy,readonly) NSString * movementName; 
@property (nonatomic,readonly) long long movementNumber; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSArray * offers; 
@property (nonatomic,copy,readonly) NSString * playlistGlobalID; 
@property (nonatomic,copy,readonly) NSString * radioStationStringID; 
@property (nonatomic,copy,readonly) NSDate * releaseDate; 
@property (nonatomic,readonly) BOOL shouldShowComposer; 
@property (nonatomic,readonly) long long storeAdamID; 
@property (nonatomic,copy,readonly) NSArray * formerStoreAdamIDs; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) long long trackNumber; 
@property (nonatomic,readonly) long long trackCount; 
@property (nonatomic,copy,readonly) NSString * workName; 
@property (nonatomic,copy,readonly) NSArray * artworkInfos; 
+(id)storeServerCalendar;
-(long long)discNumber;
-(NSDate *)releaseDate;
-(NSString *)composerName;
-(NSString *)cloudUniversalLibraryID;
-(NSString *)kind;
-(NSString *)artistName;
-(BOOL)shouldShowComposer;
-(id)_storePlatformReleaseDateFormatter;
-(long long)explicitRating;
-(NSString *)workName;
-(long long)trackNumber;
-(NSString *)radioStationStringID;
-(NSArray *)formerStoreAdamIDs;
-(NSArray *)genreNames;
-(NSArray *)artworkInfos;
-(id)offerWithType:(id)arg1 ;
-(NSString *)movementName;
-(NSString *)name;
-(long long)artistStoreAdamID;
-(NSString *)copyrightText;
-(NSDictionary *)metadataDictionary;
-(long long)movementCount;
-(BOOL)isExplicit;
-(NSArray *)offers;
-(BOOL)hasLyrics;
-(long long)movementNumber;
-(NSString *)title;
-(BOOL)hasTimeSyncedLyrics;
-(NSString *)collectionName;
-(id)initWithMetadataDictionary:(id)arg1 expirationDate:(id)arg2 ;
-(long long)storeAdamID;
-(id)initWithMetadataDictionary:(id)arg1 ;
-(double)duration;
-(NSString *)playlistGlobalID;
-(long long)collectionStoreAdamID;
-(NSDate *)expirationDate;
-(long long)trackCount;
@end

