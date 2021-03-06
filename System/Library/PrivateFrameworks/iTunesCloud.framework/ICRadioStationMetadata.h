/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, ICStoreArtworkInfo, NSString, ICRadioStationProviderResource;

@interface ICRadioStationMetadata : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) ICStoreArtworkInfo * artworkInfo; 
@property (nonatomic,copy,readonly) NSString * coreSeedName; 
@property (nonatomic,copy,readonly) NSString * descriptionText; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * stationHash; 
@property (nonatomic,readonly) long long stationID; 
@property (nonatomic,copy,readonly) NSString * stationStringID; 
@property (nonatomic,copy,readonly) NSString * attributionLabel; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long subtype; 
@property (nonatomic,readonly) BOOL allowsItemLiking; 
@property (nonatomic,readonly) BOOL allowsSharing; 
@property (getter=isSubscriptionRequired,nonatomic,readonly) BOOL subscriptionRequired; 
@property (nonatomic,copy,readonly) ICRadioStationProviderResource * providerResource; 
-(long long)subtype;
-(NSString *)stationHash;
-(NSString *)stationStringID;
-(NSString *)attributionLabel;
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSString *)name;
-(long long)type;
-(long long)stationID;
-(NSString *)coreSeedName;
-(BOOL)allowsItemLiking;
-(ICRadioStationProviderResource *)providerResource;
-(BOOL)isSubscriptionRequired;
-(NSString *)descriptionText;
-(BOOL)allowsSharing;
-(ICStoreArtworkInfo *)artworkInfo;
@end

