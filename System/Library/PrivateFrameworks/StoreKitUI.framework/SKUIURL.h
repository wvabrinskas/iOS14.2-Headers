/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSURL, NSDictionary;

@interface SKUIURL : NSObject <NSCopying> {

	NSMutableDictionary* _queryDictionary;
	NSString* _referrerApplicationName;
	NSString* _referrerURLString;
	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * underlyingURL;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * actionString; 
@property (nonatomic,copy,readonly) NSDictionary * queryStringDictionary; 
@property (nonatomic,readonly) NSString * redeemCode; 
@property (nonatomic,readonly) NSString * searchTerm; 
@property (nonatomic,readonly) NSString * URLBagKey; 
@property (nonatomic,copy) NSString * referrerApplicationName;                         //@synthesize referrerApplicationName=_referrerApplicationName - In the implementation block
@property (nonatomic,copy) NSString * referrerURLString;                               //@synthesize referrerURLString=_referrerURLString - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)actionString;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)referrerApplicationName;
-(NSString *)referrerURLString;
-(void)setReferrerApplicationName:(NSString *)arg1 ;
-(void)setReferrerURLString:(NSString *)arg1 ;
-(id)_queryDictionary;
-(NSString *)URLBagKey;
-(NSString *)searchTerm;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newURLRequest;
-(id)valueForQueryParameter:(id)arg1 ;
-(NSURL *)underlyingURL;
-(id)newURLRequestWithBaseURL:(id)arg1 ;
-(NSString *)redeemCode;
-(id)initWithURLBagKey:(id)arg1 ;
-(id)_decodedQueryParameter:(id)arg1 ;
-(id)_searchGroupForSearchKind:(id)arg1 ;
-(id)_searchURLBagKey;
-(id)_appStoreSearchURLBagKey;
-(id)initWithURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 ;
-(NSDictionary *)queryStringDictionary;
@end
