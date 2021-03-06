/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBArticleIDsTodaySectionSpecificConfig, NTPBArticleListTodaySectionSpecificConfig, NSString, NTPBForYouTodaySectionSpecificConfig, NTPBItemsTodaySectionSpecificConfig, NTPBPersonalizedSectionPresenceConfig, NTPBPersonalizedTodaySectionSpecificConfig, NTPBTagTodaySectionSpecificConfig;

@interface NTPBTodaySectionConfig : PBCodable <NSCopying> {

	SCD_Struct_NT25* _queueMemberships;
	unsigned long long _cachedResultCutoffTime;
	unsigned long long _fallbackOrder;
	unsigned long long _interSectionFilteringOptions;
	unsigned long long _intraSectionFilteringOptions;
	unsigned long long _maximumStoriesAllocation;
	unsigned long long _minimumStoriesAllocation;
	unsigned long long _personalizedPresenceFeatureClickPrior;
	unsigned long long _personalizedPresenceFeatureImpressionPrior;
	unsigned long long _seenArticlesMinimumTimeSinceFirstSeenToFilter;
	NTPBArticleIDsTodaySectionSpecificConfig* _articleIDsTodaySectionConfig;
	NTPBArticleListTodaySectionSpecificConfig* _articleListTodaySectionConfig;
	NSString* _backgroundColorDark;
	NSString* _backgroundColorLight;
	NSString* _backgroundGradientColor;
	NSString* _compactName;
	NTPBForYouTodaySectionSpecificConfig* _forYouTodaySectionConfig;
	NSString* _groupActionTitle;
	NSString* _groupActionUrl;
	NSString* _groupNameActionUrl;
	NSString* _identifier;
	NTPBItemsTodaySectionSpecificConfig* _itemsTodaySectionConfig;
	NSString* _mutingTagID;
	NSString* _name;
	NSString* _nameColorDark;
	NSString* _nameColorLight;
	NSString* _personalizationFeatureID;
	NTPBPersonalizedSectionPresenceConfig* _personalizedPresenceConfig;
	NSString* _personalizedPresenceFeatureID;
	NTPBPersonalizedTodaySectionSpecificConfig* _personalizedTodaySectionConfig;
	int _promotionCriterion;
	int _readArticlesFilterMethod;
	NSString* _referralBarName;
	int _sectionType;
	int _seenArticlesFilterMethod;
	NTPBTagTodaySectionSpecificConfig* _tagTodaySectionConfig;
	BOOL _glanceable;
	BOOL _presenceDeterminedByPersonalization;
	BOOL _shownInFavoritesOnlyMode;
	SCD_Struct_NT8 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasFallbackOrder; 
@property (assign,nonatomic) unsigned long long fallbackOrder;                                                         //@synthesize fallbackOrder=_fallbackOrder - In the implementation block
@property (assign,nonatomic) BOOL hasSectionType; 
@property (assign,nonatomic) int sectionType;                                                                          //@synthesize sectionType=_sectionType - In the implementation block
@property (assign,nonatomic) BOOL hasCachedResultCutoffTime; 
@property (assign,nonatomic) unsigned long long cachedResultCutoffTime;                                                //@synthesize cachedResultCutoffTime=_cachedResultCutoffTime - In the implementation block
@property (assign,nonatomic) BOOL hasReadArticlesFilterMethod; 
@property (assign,nonatomic) int readArticlesFilterMethod;                                                             //@synthesize readArticlesFilterMethod=_readArticlesFilterMethod - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleListTodaySectionConfig; 
@property (nonatomic,retain) NTPBArticleListTodaySectionSpecificConfig * articleListTodaySectionConfig;                //@synthesize articleListTodaySectionConfig=_articleListTodaySectionConfig - In the implementation block
@property (nonatomic,readonly) BOOL hasForYouTodaySectionConfig; 
@property (nonatomic,retain) NTPBForYouTodaySectionSpecificConfig * forYouTodaySectionConfig;                          //@synthesize forYouTodaySectionConfig=_forYouTodaySectionConfig - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumStoriesAllocation; 
@property (assign,nonatomic) unsigned long long minimumStoriesAllocation;                                              //@synthesize minimumStoriesAllocation=_minimumStoriesAllocation - In the implementation block
@property (assign,nonatomic) BOOL hasMaximumStoriesAllocation; 
@property (assign,nonatomic) unsigned long long maximumStoriesAllocation;                                              //@synthesize maximumStoriesAllocation=_maximumStoriesAllocation - In the implementation block
@property (assign,nonatomic) BOOL hasIntraSectionFilteringOptions; 
@property (assign,nonatomic) unsigned long long intraSectionFilteringOptions;                                          //@synthesize intraSectionFilteringOptions=_intraSectionFilteringOptions - In the implementation block
@property (assign,nonatomic) BOOL hasInterSectionFilteringOptions; 
@property (assign,nonatomic) unsigned long long interSectionFilteringOptions;                                          //@synthesize interSectionFilteringOptions=_interSectionFilteringOptions - In the implementation block
@property (assign,nonatomic) BOOL hasSeenArticlesFilterMethod; 
@property (assign,nonatomic) int seenArticlesFilterMethod;                                                             //@synthesize seenArticlesFilterMethod=_seenArticlesFilterMethod - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleIDsTodaySectionConfig; 
@property (nonatomic,retain) NTPBArticleIDsTodaySectionSpecificConfig * articleIDsTodaySectionConfig;                  //@synthesize articleIDsTodaySectionConfig=_articleIDsTodaySectionConfig - In the implementation block
@property (assign,nonatomic) BOOL hasShownInFavoritesOnlyMode; 
@property (assign,nonatomic) BOOL shownInFavoritesOnlyMode;                                                            //@synthesize shownInFavoritesOnlyMode=_shownInFavoritesOnlyMode - In the implementation block
@property (nonatomic,readonly) BOOL hasNameColorLight; 
@property (nonatomic,retain) NSString * nameColorLight;                                                                //@synthesize nameColorLight=_nameColorLight - In the implementation block
@property (nonatomic,readonly) BOOL hasPersonalizedTodaySectionConfig; 
@property (nonatomic,retain) NTPBPersonalizedTodaySectionSpecificConfig * personalizedTodaySectionConfig;              //@synthesize personalizedTodaySectionConfig=_personalizedTodaySectionConfig - In the implementation block
@property (assign,nonatomic) BOOL hasSeenArticlesMinimumTimeSinceFirstSeenToFilter; 
@property (assign,nonatomic) unsigned long long seenArticlesMinimumTimeSinceFirstSeenToFilter;                         //@synthesize seenArticlesMinimumTimeSinceFirstSeenToFilter=_seenArticlesMinimumTimeSinceFirstSeenToFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasPersonalizationFeatureID; 
@property (nonatomic,retain) NSString * personalizationFeatureID;                                                      //@synthesize personalizationFeatureID=_personalizationFeatureID - In the implementation block
@property (assign,nonatomic) BOOL hasPresenceDeterminedByPersonalization; 
@property (assign,nonatomic) BOOL presenceDeterminedByPersonalization;                                                 //@synthesize presenceDeterminedByPersonalization=_presenceDeterminedByPersonalization - In the implementation block
@property (nonatomic,readonly) BOOL hasPersonalizedPresenceConfig; 
@property (nonatomic,retain) NTPBPersonalizedSectionPresenceConfig * personalizedPresenceConfig;                       //@synthesize personalizedPresenceConfig=_personalizedPresenceConfig - In the implementation block
@property (nonatomic,readonly) unsigned long long queueMembershipsCount; 
@property (nonatomic,readonly) unsigned long long* queueMemberships; 
@property (nonatomic,readonly) BOOL hasBackgroundGradientColor; 
@property (nonatomic,retain) NSString * backgroundGradientColor;                                                       //@synthesize backgroundGradientColor=_backgroundGradientColor - In the implementation block
@property (assign,nonatomic) BOOL hasGlanceable; 
@property (assign,nonatomic) BOOL glanceable;                                                                          //@synthesize glanceable=_glanceable - In the implementation block
@property (nonatomic,readonly) BOOL hasCompactName; 
@property (nonatomic,retain) NSString * compactName;                                                                   //@synthesize compactName=_compactName - In the implementation block
@property (nonatomic,readonly) BOOL hasPersonalizedPresenceFeatureID; 
@property (nonatomic,retain) NSString * personalizedPresenceFeatureID;                                                 //@synthesize personalizedPresenceFeatureID=_personalizedPresenceFeatureID - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalizedPresenceFeatureImpressionPrior; 
@property (assign,nonatomic) unsigned long long personalizedPresenceFeatureImpressionPrior;                            //@synthesize personalizedPresenceFeatureImpressionPrior=_personalizedPresenceFeatureImpressionPrior - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalizedPresenceFeatureClickPrior; 
@property (assign,nonatomic) unsigned long long personalizedPresenceFeatureClickPrior;                                 //@synthesize personalizedPresenceFeatureClickPrior=_personalizedPresenceFeatureClickPrior - In the implementation block
@property (nonatomic,readonly) BOOL hasReferralBarName; 
@property (nonatomic,retain) NSString * referralBarName;                                                               //@synthesize referralBarName=_referralBarName - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupActionTitle; 
@property (nonatomic,retain) NSString * groupActionTitle;                                                              //@synthesize groupActionTitle=_groupActionTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupActionUrl; 
@property (nonatomic,retain) NSString * groupActionUrl;                                                                //@synthesize groupActionUrl=_groupActionUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasItemsTodaySectionConfig; 
@property (nonatomic,retain) NTPBItemsTodaySectionSpecificConfig * itemsTodaySectionConfig;                            //@synthesize itemsTodaySectionConfig=_itemsTodaySectionConfig - In the implementation block
@property (assign,nonatomic) BOOL hasPromotionCriterion; 
@property (assign,nonatomic) int promotionCriterion;                                                                   //@synthesize promotionCriterion=_promotionCriterion - In the implementation block
@property (nonatomic,readonly) BOOL hasNameColorDark; 
@property (nonatomic,retain) NSString * nameColorDark;                                                                 //@synthesize nameColorDark=_nameColorDark - In the implementation block
@property (nonatomic,readonly) BOOL hasTagTodaySectionConfig; 
@property (nonatomic,retain) NTPBTagTodaySectionSpecificConfig * tagTodaySectionConfig;                                //@synthesize tagTodaySectionConfig=_tagTodaySectionConfig - In the implementation block
@property (nonatomic,readonly) BOOL hasMutingTagID; 
@property (nonatomic,retain) NSString * mutingTagID;                                                                   //@synthesize mutingTagID=_mutingTagID - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupNameActionUrl; 
@property (nonatomic,retain) NSString * groupNameActionUrl;                                                            //@synthesize groupNameActionUrl=_groupNameActionUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasBackgroundColorLight; 
@property (nonatomic,retain) NSString * backgroundColorLight;                                                          //@synthesize backgroundColorLight=_backgroundColorLight - In the implementation block
@property (nonatomic,readonly) BOOL hasBackgroundColorDark; 
@property (nonatomic,retain) NSString * backgroundColorDark;                                                           //@synthesize backgroundColorDark=_backgroundColorDark - In the implementation block
+(id)sectionConfigWithJSONDictionary:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(BOOL)hasSeenArticlesFilterMethod;
-(BOOL)hasArticleIDsTodaySectionConfig;
-(void)setHasShownInFavoritesOnlyMode:(BOOL)arg1 ;
-(BOOL)hasShownInFavoritesOnlyMode;
-(BOOL)hasPersonalizedTodaySectionConfig;
-(void)setHasSeenArticlesMinimumTimeSinceFirstSeenToFilter:(BOOL)arg1 ;
-(BOOL)hasSeenArticlesMinimumTimeSinceFirstSeenToFilter;
-(BOOL)hasPersonalizationFeatureID;
-(void)setHasPresenceDeterminedByPersonalization:(BOOL)arg1 ;
-(NSString *)mutingTagID;
-(unsigned long long)hash;
-(void)setCompactName:(NSString *)arg1 ;
-(void)setReferralBarName:(NSString *)arg1 ;
-(void)setNameColorLight:(NSString *)arg1 ;
-(void)setNameColorDark:(NSString *)arg1 ;
-(void)setFallbackOrder:(unsigned long long)arg1 ;
-(void)setCachedResultCutoffTime:(unsigned long long)arg1 ;
-(void)setMinimumStoriesAllocation:(unsigned long long)arg1 ;
-(unsigned long long)minimumStoriesAllocation;
-(void)setMaximumStoriesAllocation:(unsigned long long)arg1 ;
-(void)setReadArticlesFilterMethod:(int)arg1 ;
-(void)setSeenArticlesFilterMethod:(int)arg1 ;
-(void)setSeenArticlesMinimumTimeSinceFirstSeenToFilter:(unsigned long long)arg1 ;
-(void)setIntraSectionFilteringOptions:(unsigned long long)arg1 ;
-(void)setInterSectionFilteringOptions:(unsigned long long)arg1 ;
-(void)setShownInFavoritesOnlyMode:(BOOL)arg1 ;
-(void)setPersonalizationFeatureID:(NSString *)arg1 ;
-(void)setPersonalizedPresenceFeatureImpressionPrior:(unsigned long long)arg1 ;
-(void)setPersonalizedPresenceFeatureClickPrior:(unsigned long long)arg1 ;
-(void)setPersonalizedPresenceFeatureID:(NSString *)arg1 ;
-(void)setPresenceDeterminedByPersonalization:(BOOL)arg1 ;
-(void)setPersonalizedPresenceConfig:(NTPBPersonalizedSectionPresenceConfig *)arg1 ;
-(void)addQueueMembership:(unsigned long long)arg1 ;
-(BOOL)hasPresenceDeterminedByPersonalization;
-(BOOL)hasPersonalizedPresenceConfig;
-(unsigned long long*)queueMemberships;
-(void)clearQueueMemberships;
-(void)setQueueMemberships:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasBackgroundGradientColor;
-(void)setHasGlanceable:(BOOL)arg1 ;
-(BOOL)hasPersonalizedPresenceFeatureID;
-(void)setHasPersonalizedPresenceFeatureImpressionPrior:(BOOL)arg1 ;
-(BOOL)hasPersonalizedPresenceFeatureImpressionPrior;
-(BOOL)hasReferralBarName;
-(BOOL)glanceable;
-(void)setGlanceable:(BOOL)arg1 ;
-(void)setGroupActionTitle:(NSString *)arg1 ;
-(void)setGroupActionUrl:(NSString *)arg1 ;
-(void)setGroupNameActionUrl:(NSString *)arg1 ;
-(void)setPromotionCriterion:(int)arg1 ;
-(void)setMutingTagID:(NSString *)arg1 ;
-(void)setForYouTodaySectionConfig:(NTPBForYouTodaySectionSpecificConfig *)arg1 ;
-(void)setTagTodaySectionConfig:(NTPBTagTodaySectionSpecificConfig *)arg1 ;
-(void)setHasPersonalizedPresenceFeatureClickPrior:(BOOL)arg1 ;
-(BOOL)hasPersonalizedPresenceFeatureClickPrior;
-(BOOL)hasGroupActionTitle;
-(BOOL)hasGroupActionUrl;
-(BOOL)hasItemsTodaySectionConfig;
-(int)promotionCriterion;
-(void)setHasPromotionCriterion:(BOOL)arg1 ;
-(BOOL)hasPromotionCriterion;
-(BOOL)hasNameColorDark;
-(BOOL)hasTagTodaySectionConfig;
-(BOOL)hasMutingTagID;
-(BOOL)hasGroupNameActionUrl;
-(unsigned long long)fallbackOrder;
-(NTPBForYouTodaySectionSpecificConfig *)forYouTodaySectionConfig;
-(void)setArticleListTodaySectionConfig:(NTPBArticleListTodaySectionSpecificConfig *)arg1 ;
-(void)setArticleIDsTodaySectionConfig:(NTPBArticleIDsTodaySectionSpecificConfig *)arg1 ;
-(unsigned long long)maximumStoriesAllocation;
-(unsigned long long)intraSectionFilteringOptions;
-(unsigned long long)interSectionFilteringOptions;
-(BOOL)shownInFavoritesOnlyMode;
-(NSString *)nameColorLight;
-(unsigned long long)seenArticlesMinimumTimeSinceFirstSeenToFilter;
-(NSString *)personalizationFeatureID;
-(BOOL)presenceDeterminedByPersonalization;
-(NTPBPersonalizedSectionPresenceConfig *)personalizedPresenceConfig;
-(NSString *)backgroundGradientColor;
-(NSString *)personalizedPresenceFeatureID;
-(NSString *)referralBarName;
-(void)setPersonalizedTodaySectionConfig:(NTPBPersonalizedTodaySectionSpecificConfig *)arg1 ;
-(void)setItemsTodaySectionConfig:(NTPBItemsTodaySectionSpecificConfig *)arg1 ;
-(BOOL)hasName;
-(NSString *)groupActionTitle;
-(unsigned long long)queueMembershipsCount;
-(unsigned long long)queueMembershipAtIndex:(unsigned long long)arg1 ;
-(NTPBArticleListTodaySectionSpecificConfig *)articleListTodaySectionConfig;
-(NTPBArticleIDsTodaySectionSpecificConfig *)articleIDsTodaySectionConfig;
-(NTPBPersonalizedTodaySectionSpecificConfig *)personalizedTodaySectionConfig;
-(NTPBItemsTodaySectionSpecificConfig *)itemsTodaySectionConfig;
-(unsigned long long)personalizedPresenceFeatureImpressionPrior;
-(unsigned long long)personalizedPresenceFeatureClickPrior;
-(NSString *)groupActionUrl;
-(NSString *)nameColorDark;
-(NTPBTagTodaySectionSpecificConfig *)tagTodaySectionConfig;
-(NSString *)groupNameActionUrl;
-(id)dictionaryRepresentation;
-(NSString *)identifier;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)name;
-(void)setSectionType:(int)arg1 ;
-(void)setHasSectionType:(BOOL)arg1 ;
-(BOOL)hasSectionType;
-(id)description;
-(void)setBackgroundColorDark:(NSString *)arg1 ;
-(int)sectionType;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBackgroundColorLight:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)hasBackgroundColorLight;
-(BOOL)hasBackgroundColorDark;
-(NSString *)backgroundColorLight;
-(NSString *)backgroundColorDark;
-(NSString *)compactName;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasGlanceable;
-(BOOL)hasCompactName;
-(void)setBackgroundGradientColor:(NSString *)arg1 ;
-(void)setHasFallbackOrder:(BOOL)arg1 ;
-(BOOL)hasFallbackOrder;
-(unsigned long long)cachedResultCutoffTime;
-(void)setHasCachedResultCutoffTime:(BOOL)arg1 ;
-(BOOL)hasCachedResultCutoffTime;
-(int)readArticlesFilterMethod;
-(void)setHasReadArticlesFilterMethod:(BOOL)arg1 ;
-(BOOL)hasReadArticlesFilterMethod;
-(BOOL)hasArticleListTodaySectionConfig;
-(BOOL)hasForYouTodaySectionConfig;
-(void)dealloc;
-(void)setHasMinimumStoriesAllocation:(BOOL)arg1 ;
-(BOOL)hasMinimumStoriesAllocation;
-(void)setHasMaximumStoriesAllocation:(BOOL)arg1 ;
-(BOOL)hasMaximumStoriesAllocation;
-(void)setHasIntraSectionFilteringOptions:(BOOL)arg1 ;
-(BOOL)hasIntraSectionFilteringOptions;
-(void)setHasInterSectionFilteringOptions:(BOOL)arg1 ;
-(BOOL)hasInterSectionFilteringOptions;
-(int)seenArticlesFilterMethod;
-(void)setHasSeenArticlesFilterMethod:(BOOL)arg1 ;
-(BOOL)hasNameColorLight;
-(void)setName:(NSString *)arg1 ;
@end

