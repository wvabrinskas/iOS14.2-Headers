/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NFLFeedTileInfo.h>

@class NSString, NSArray, NFLHeadlineTileInfo;

@interface NFLAdTileInfo : NSObject <NFLFeedTileInfo> {

	BOOL _isDisplayingAd;
	BOOL _isOnScreen;
	BOOL _appearedOnScreen;
	BOOL _appearedWithAd;
	NSString* _groupIdentifier;
	long long _adType;
	NSString* _adUnitIdentifier;

}

@property (nonatomic,retain) NSString * adUnitIdentifier;                                     //@synthesize adUnitIdentifier=_adUnitIdentifier - In the implementation block
@property (assign,nonatomic) long long adType;                                                //@synthesize adType=_adType - In the implementation block
@property (assign,nonatomic) BOOL isDisplayingAd;                                             //@synthesize isDisplayingAd=_isDisplayingAd - In the implementation block
@property (assign,nonatomic) BOOL isOnScreen;                                                 //@synthesize isOnScreen=_isOnScreen - In the implementation block
@property (assign,nonatomic) BOOL appearedOnScreen;                                           //@synthesize appearedOnScreen=_appearedOnScreen - In the implementation block
@property (assign,nonatomic) BOOL appearedWithAd;                                             //@synthesize appearedWithAd=_appearedWithAd - In the implementation block
@property (nonatomic,readonly) unsigned long long tileInfoType; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL pageable; 
@property (getter=isSelectable,nonatomic,readonly) BOOL selectable; 
@property (nonatomic,readonly) unsigned long long bookmarkOffsetType; 
@property (nonatomic,readonly) NSArray * underlyingFeedElements; 
@property (nonatomic,readonly) NFLHeadlineTileInfo * feedTileInfoForBookmarking; 
@property (nonatomic,copy,readonly) NSString * groupIdentifier;                               //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifierPrefix;
+(id)identifierForAdType:(long long)arg1 ;
+(long long)adTypeForIdentifier:(id)arg1 ;
-(BOOL)pageable;
-(BOOL)isSelectable;
-(BOOL)isOnScreen;
-(unsigned long long)tileInfoType;
-(NSString *)groupIdentifier;
-(id)init;
-(void)commonInit;
-(unsigned long long)hash;
-(long long)adType;
-(NSString *)identifier;
-(NSArray *)underlyingFeedElements;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)updatedTileInfoWithNewHeadline:(id)arg1 ;
-(void)setAdType:(long long)arg1 ;
-(unsigned long long)bookmarkOffsetType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NFLHeadlineTileInfo *)feedTileInfoForBookmarking;
-(id)initWithAdType:(long long)arg1 ;
-(void)setIsOnScreen:(BOOL)arg1 ;
-(BOOL)isDisplayingAd;
-(void)setIsDisplayingAd:(BOOL)arg1 ;
-(BOOL)appearedOnScreen;
-(void)setAppearedOnScreen:(BOOL)arg1 ;
-(BOOL)appearedWithAd;
-(void)setAppearedWithAd:(BOOL)arg1 ;
-(NSString *)adUnitIdentifier;
-(void)setAdUnitIdentifier:(NSString *)arg1 ;
@end
