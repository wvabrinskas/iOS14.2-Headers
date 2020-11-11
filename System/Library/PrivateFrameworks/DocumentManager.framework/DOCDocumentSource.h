/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DocumentManager/DocumentManager-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage, NSArray, FPProviderDomain;

@interface DOCDocumentSource : NSObject <NSSecureCoding, NSCopying> {

	BOOL _hasTemplateIcon;
	BOOL _hidden;
	NSString* _displayName;
	NSString* _providerName;
	NSString* _domainName;
	UIImage* _icon;
	NSString* _promptText;
	NSString* _identifier;
	NSArray* _documentTypes;
	FPProviderDomain* _searching_fileProviderDomain;

}

@property (copy) NSArray * documentTypes;                                        //@synthesize documentTypes=_documentTypes - In the implementation block
@property (copy) NSString * displayName;                                         //@synthesize displayName=_displayName - In the implementation block
@property (copy) NSString * providerName;                                        //@synthesize providerName=_providerName - In the implementation block
@property (copy) NSString * domainName;                                          //@synthesize domainName=_domainName - In the implementation block
@property (retain) UIImage * icon;                                               //@synthesize icon=_icon - In the implementation block
@property (copy) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * promptText;                                          //@synthesize promptText=_promptText - In the implementation block
@property (assign) BOOL hasTemplateIcon;                                         //@synthesize hasTemplateIcon=_hasTemplateIcon - In the implementation block
@property (assign) BOOL hidden;                                                  //@synthesize hidden=_hidden - In the implementation block
@property (assign) FPProviderDomain * searching_fileProviderDomain;              //@synthesize searching_fileProviderDomain=_searching_fileProviderDomain - In the implementation block
@property (nonatomic,readonly) NSArray * supportedSearchFilters; 
@property (readonly) BOOL isAvailableSystemWide; 
@property (readonly) unsigned long long status; 
@property (readonly) BOOL appearsInMoveUI; 
@property (readonly) BOOL isiCloudBased; 
+(BOOL)supportsSecureCoding;
+(void)endSearchingSources:(id)arg1 ;
+(id)startSearchingSourcesForBundleIdentifier:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
+(void)defaultSourceForBundleIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)setDefaultSource:(id)arg1 forBundleIdentifier:(id)arg2 ;
+(id)defaultSourceIdentifierForBundleIdentifier:(id)arg1 ;
+(void)defaultSourceForBundleIdentifier:(id)arg1 selectedSourceIdentifier:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(void)setDefaultSourceIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 ;
+(id)defaultSourceForBundleIdentifier:(id)arg1 defaultSourceIdentifier:(id)arg2 sources:(id)arg3 ;
+(id)sourceIdentifierOrderWithDefault:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)domainName;
-(void)setDomainName:(NSString *)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(void)setProviderName:(NSString *)arg1 ;
-(unsigned long long)status;
-(NSString *)promptText;
-(UIImage *)icon;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(BOOL)hidden;
-(NSString *)identifier;
-(NSString *)displayName;
-(BOOL)isAvailableSystemWide;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(NSArray *)supportedSearchFilters;
-(NSArray *)documentTypes;
-(void)setDocumentTypes:(NSArray *)arg1 ;
-(void)setPromptText:(NSString *)arg1 ;
-(NSString *)providerName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSearching_fileProviderDomain:(FPProviderDomain *)arg1 ;
-(FPProviderDomain *)searching_fileProviderDomain;
-(id)sanitizedSource;
-(BOOL)usesEnumeration;
-(BOOL)isValidForConfiguration:(id)arg1 ;
-(BOOL)appearsInMoveUI;
-(BOOL)isiCloudBased;
-(BOOL)hasTemplateIcon;
-(void)setHasTemplateIcon:(BOOL)arg1 ;
@end
