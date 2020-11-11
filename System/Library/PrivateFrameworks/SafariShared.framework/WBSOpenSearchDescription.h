/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, WBSOpenSearchURLTemplate;

@interface WBSOpenSearchDescription : NSObject {

	NSString* _descriptionDocumentURLString;
	WBSOpenSearchURLTemplate* _searchURLTemplate;
	WBSOpenSearchURLTemplate* _urlTemplateForSuggestionsInJSON;
	WBSOpenSearchURLTemplate* _urlTemplateForSuggestionsInXML;

}

@property (nonatomic,readonly) NSString * descriptionDocumentURLString;                                 //@synthesize descriptionDocumentURLString=_descriptionDocumentURLString - In the implementation block
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * searchURLTemplate;                            //@synthesize searchURLTemplate=_searchURLTemplate - In the implementation block
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * urlTemplateForSuggestionsInJSON;              //@synthesize urlTemplateForSuggestionsInJSON=_urlTemplateForSuggestionsInJSON - In the implementation block
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * urlTemplateForSuggestionsInXML;               //@synthesize urlTemplateForSuggestionsInXML=_urlTemplateForSuggestionsInXML - In the implementation block
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned long long)hash;
-(WBSOpenSearchURLTemplate *)searchURLTemplate;
-(id)dictionaryRepresentation;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)descriptionDocumentURLString;
-(WBSOpenSearchURLTemplate *)urlTemplateForSuggestionsInXML;
-(id)initWithDescriptionDocumentURLString:(id)arg1 searchURLTemplate:(id)arg2 urlTemplateForSuggestionsInJSON:(id)arg3 urlTemplateForSuggestionsInXML:(id)arg4 ;
-(WBSOpenSearchURLTemplate *)urlTemplateForSuggestionsInJSON;
@end
