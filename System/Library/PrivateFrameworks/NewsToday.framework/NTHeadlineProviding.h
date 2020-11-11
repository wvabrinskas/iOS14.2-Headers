/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDate, NSURL, NSArray, SFSearchResult;


@protocol NTHeadlineProviding <NSObject,NFCopying,NSSecureCoding,NTTodayItem>
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * titleCompact; 
@property (nonatomic,copy,readonly) NSString * shortExcerpt; 
@property (nonatomic,copy,readonly) NSDate * ageDisplayDate; 
@property (nonatomic,copy,readonly) NSString * sourceName; 
@property (nonatomic,copy,readonly) NSString * compactSourceName; 
@property (nonatomic,copy,readonly) NSString * sourceTagID; 
@property (nonatomic,copy,readonly) NSString * language; 
@property (nonatomic,copy,readonly) NSURL * sourceNameImageRemoteURL; 
@property (nonatomic,readonly) double sourceNameImageScale; 
@property (nonatomic,copy,readonly) NSURL * compactSourceNameImageRemoteURL; 
@property (nonatomic,copy,readonly) NSURL * thumbnailRemoteURL; 
@property (nonatomic,copy) NSString * thumbnailIdentifier; 
@property (nonatomic,readonly) unsigned long long thumbnailSizePreset; 
@property (nonatomic,readonly) CGRect thumbnailFocalFrame; 
@property (nonatomic,readonly) BOOL needsPlaceholderThumbnail; 
@property (nonatomic,copy,readonly) NSURL * webURL; 
@property (nonatomic,copy,readonly) NSURL * NewsURL; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * storyType; 
@property (nonatomic,copy,readonly) NSArray * topicIDs; 
@property (nonatomic,copy,readonly) SFSearchResult * searchResult; 
@property (nonatomic,readonly) BOOL supportsSavingForLater; 
@property (getter=isHiddenFromAutoFavorites,nonatomic,readonly) BOOL hiddenFromAutoFavorites; 
@property (nonatomic,copy,readonly) NSObject*<NTHeadlineAnalyticsElementProviding> analyticsElement; 
@property (nonatomic,copy,readonly) NSObject*<NTHeadlineAdElement> adElement; 
@property (nonatomic,copy,readonly) NSObject*<NTHeadlinePersonalizationMetadata> personalizationMetadata; 
@property (nonatomic,copy,readonly) NSObject*<NTHeadlineBackingElement> backingElement; 
@property (nonatomic,copy,readonly) NSURL * flintDocumentURL; 
@required
-(NSURL *)webURL;
-(NSString *)titleCompact;
-(SFSearchResult *)searchResult;
-(NSArray *)topicIDs;
-(BOOL)isHiddenFromAutoFavorites;
-(NSString *)sourceName;
-(NSString *)storyType;
-(NSString *)identifier;
-(NSString *)language;
-(CGRect)thumbnailFocalFrame;
-(NSString *)shortExcerpt;
-(void)setThumbnailIdentifier:(id)arg1;
-(NSURL *)NewsURL;
-(NSString *)thumbnailIdentifier;
-(NSString *)title;
-(unsigned long long)thumbnailSizePreset;
-(NSURL *)flintDocumentURL;
-(NSString *)sourceTagID;
-(NSObject*<NTHeadlinePersonalizationMetadata>)personalizationMetadata;
-(NSURL *)sourceNameImageRemoteURL;
-(NSDate *)ageDisplayDate;
-(NSString *)compactSourceName;
-(double)sourceNameImageScale;
-(NSURL *)compactSourceNameImageRemoteURL;
-(NSURL *)thumbnailRemoteURL;
-(NSObject*<NTHeadlineAnalyticsElementProviding>)analyticsElement;
-(NSObject*<NTHeadlineAdElement>)adElement;
-(BOOL)supportsSavingForLater;
-(NSObject*<NTHeadlineBackingElement>)backingElement;
-(BOOL)needsPlaceholderThumbnail;

@end
