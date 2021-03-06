/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate, NSString, FCAssetHandle, FCColor, NSArray, NTPBPublisherPaidDescriptionStrings, FCPaywallConfiguration, NSData;


@protocol FCTagProviding <NSObject,NFCopying>
@property (nonatomic,readonly) unsigned long long tagType; 
@property (nonatomic,readonly) unsigned long long userFacingTagType; 
@property (nonatomic,readonly) BOOL hideAccessoryText; 
@property (nonatomic,readonly) id<FCChannelProviding> asChannel; 
@property (nonatomic,readonly) id<FCSectionProviding> asSection; 
@property (nonatomic,readonly) id<FCTopicProviding> asTopic; 
@property (nonatomic,readonly) NSDate * loadDate; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * nameCompact; 
@property (nonatomic,copy,readonly) NSString * versionKey; 
@property (nonatomic,copy,readonly) NSString * language; 
@property (nonatomic,readonly) long long contentProvider; 
@property (nonatomic,readonly) BOOL isPublic; 
@property (nonatomic,readonly) BOOL isDeprecated; 
@property (nonatomic,readonly) BOOL isExplicitContent; 
@property (nonatomic,copy,readonly) NSString * replacementID; 
@property (nonatomic,copy,readonly) NSString * primaryAudience; 
@property (nonatomic,readonly) BOOL isSubscribable; 
@property (nonatomic,readonly) FCAssetHandle * coverImageAssetHandle; 
@property (nonatomic,readonly) FCAssetHandle * feedNavImageAssetHandle; 
@property (nonatomic,copy,readonly) id<FCFeedTheming> theme; 
@property (nonatomic,copy,readonly) FCColor * groupTitleColor; 
@property (nonatomic,copy,readonly) FCColor * groupDarkStyleTitleColor; 
@property (nonatomic,readonly) NSArray * iAdCategories; 
@property (nonatomic,readonly) NSArray * iAdKeywords; 
@property (nonatomic,readonly) NSArray * blockedStorefrontIDs; 
@property (nonatomic,readonly) NSArray * allowedStorefrontIDs; 
@property (nonatomic,readonly) long long score; 
@property (nonatomic,readonly) long long minimumNewsVersion; 
@property (nonatomic,readonly) BOOL isNotificationEnabled; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * magazineGenre; 
@property (nonatomic,copy,readonly) NSString * publisherPaidAuthorizationURL; 
@property (nonatomic,copy,readonly) NSString * publisherPaidVerificationURL; 
@property (nonatomic,copy,readonly) NSString * publisherPaidWebAccessURL; 
@property (nonatomic,readonly) NSArray * publisherPaidFeldsparablePurchaseIDs; 
@property (nonatomic,readonly) NSArray * publisherPaidBundlePurchaseIDs; 
@property (nonatomic,readonly) NSArray * publisherPaidOfferableConfigurations; 
@property (nonatomic,readonly) BOOL publisherPaidLeakyPaywallOptOut; 
@property (nonatomic,readonly) BOOL publisherPaidWebAccessOptIn; 
@property (nonatomic,readonly) FCAssetHandle * nameImageMaskWidgetLQAssetHandle; 
@property (nonatomic,readonly) FCAssetHandle * nameImageMaskWidgetHQAssetHandle; 
@property (nonatomic,readonly) FCAssetHandle * nameImageCompactAssetHandle; 
@property (nonatomic,readonly) BOOL isBlockedExplicitContent; 
@property (nonatomic,readonly) NTPBPublisherPaidDescriptionStrings * publisherPaidDescriptionStrings; 
@property (nonatomic,readonly) unsigned long long groupingEligibility; 
@property (nonatomic,readonly) BOOL isHidden; 
@property (nonatomic,readonly) BOOL isRealTimeTrackingEnabled; 
@property (nonatomic,readonly) BOOL isArticleReadCountReportingEnabled; 
@property (nonatomic,readonly) BOOL isAutoDarkModeEnabled; 
@property (nonatomic,readonly) BOOL isInternal; 
@property (nonatomic,readonly) BOOL isSandbox; 
@property (nonatomic,readonly) BOOL isLocal; 
@property (nonatomic,readonly) NSString * articleRecirculationConfigJSON; 
@property (nonatomic,readonly) NSArray * publisherSpecifiedArticleIDs; 
@property (nonatomic,readonly) NSDate * publisherSpecifiedArticleIDsModifiedDate; 
@property (nonatomic,readonly) id<FCTagStocksFields> stocksFields; 
@property (nonatomic,copy,readonly) FCPaywallConfiguration * paidBundlePaywallConfiguration; 
@property (nonatomic,readonly) NSData * backingTagRecordData; 
@optional
-(NSData *)backingTagRecordData;

@required
-(unsigned long long)tagType;
-(BOOL)isLocal;
-(id<FCTopicProviding>)asTopic;
-(NSArray *)iAdKeywords;
-(id)paidFeedIDForBin:(long long)arg1;
-(BOOL)isExplicitContent;
-(id<FCSectionProviding>)asSection;
-(FCAssetHandle *)coverImageAssetHandle;
-(NSString *)publisherPaidAuthorizationURL;
-(BOOL)isHidden;
-(id)authorizationURL;
-(NSDate *)publisherSpecifiedArticleIDsModifiedDate;
-(long long)contentProvider;
-(id)feedIDForBin:(long long)arg1;
-(NSString *)publisherPaidWebAccessURL;
-(FCPaywallConfiguration *)paidBundlePaywallConfiguration;
-(BOOL)isSandbox;
-(BOOL)isRealTimeTrackingEnabled;
-(NSDate *)loadDate;
-(NSString *)primaryAudience;
-(id)freeFeedIDForBin:(long long)arg1;
-(long long)minimumNewsVersion;
-(NSArray *)allowedStorefrontIDs;
-(NSString *)subtitle;
-(unsigned long long)groupingEligibility;
-(id<FCFeedTheming>)theme;
-(void)ppt_overrideFeedID:(id)arg1;
-(BOOL)isEqualToTag:(id)arg1;
-(long long)score;
-(NSString *)identifier;
-(BOOL)isBlockedExplicitContent;
-(NSString *)language;
-(FCAssetHandle *)nameImageMaskWidgetLQAssetHandle;
-(NSString *)articleRecirculationConfigJSON;
-(NSArray *)blockedStorefrontIDs;
-(NSArray *)publisherPaidOfferableConfigurations;
-(NSString *)name;
-(NSArray *)publisherSpecifiedArticleIDs;
-(BOOL)isDeprecated;
-(id<FCTagStocksFields>)stocksFields;
-(FCAssetHandle *)nameImageMaskWidgetHQAssetHandle;
-(id)prefetchPurchaseOffer;
-(NSString *)publisherPaidVerificationURL;
-(NSArray *)iAdCategories;
-(NSString *)versionKey;
-(NTPBPublisherPaidDescriptionStrings *)publisherPaidDescriptionStrings;
-(unsigned long long)userFacingTagType;
-(BOOL)isArticleReadCountReportingEnabled;
-(FCColor *)groupDarkStyleTitleColor;
-(id<FCChannelProviding>)asChannel;
-(BOOL)isAutoDarkModeEnabled;
-(NSString *)replacementID;
-(FCColor *)groupTitleColor;
-(BOOL)hideAccessoryText;
-(NSString *)magazineGenre;
-(FCAssetHandle *)nameImageCompactAssetHandle;
-(BOOL)isPublic;
-(NSArray *)publisherPaidFeldsparablePurchaseIDs;
-(NSString *)nameCompact;
-(BOOL)isSubscribable;
-(BOOL)isInternal;
-(BOOL)isPurchaseSetup;
-(BOOL)publisherPaidWebAccessOptIn;
-(BOOL)isNotificationEnabled;
-(NSArray *)publisherPaidBundlePurchaseIDs;
-(BOOL)publisherPaidLeakyPaywallOptOut;
-(FCAssetHandle *)feedNavImageAssetHandle;
-(BOOL)isNoLongerAvailable;
-(BOOL)isAuthenticationSetup;

@end

