/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUIArtworkProviding.h>

@class NSString, NSMutableSet, SKUIArtwork, NSMutableDictionary;

@interface SKUIArtworkTemplate : NSObject <SKUIArtworkProviding> {

	long long _height;
	long long _width;
	NSString* _urlTemplateString;
	NSMutableSet* _servedArtworks;

}

@property (nonatomic,readonly) long long height;                                       //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) long long width;                                        //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) NSString * urlTemplateString;                           //@synthesize urlTemplateString=_urlTemplateString - In the implementation block
@property (nonatomic,readonly) NSMutableSet * servedArtworks;                          //@synthesize servedArtworks=_servedArtworks - In the implementation block
@property (nonatomic,readonly) SKUIArtwork * largestArtwork; 
@property (nonatomic,readonly) SKUIArtwork * smallestArtwork; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
+(BOOL)supportsSecureCoding;
+(BOOL)canHandleArtworkFormat:(id)arg1 ;
-(long long)height;
-(long long)width;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)artworkURLForSize:(long long)arg1 ;
-(id)_lookupDictionary;
-(BOOL)hasArtwork;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)artworkForSize:(long long)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(SKUIArtwork *)largestArtwork;
-(NSString *)urlTemplateString;
-(id)bestArtworkForSize:(CGSize)arg1 ;
-(id)artworkWithWidth:(long long)arg1 ;
-(id)bestArtworkForScaledSize:(CGSize)arg1 ;
-(id)preferredExactArtworkForSize:(CGSize)arg1 ;
-(SKUIArtwork *)smallestArtwork;
-(id)initWithTemplateDictionary:(id)arg1 ;
-(NSMutableSet *)servedArtworks;
-(id)_artworkWithWidth:(long long)arg1 ;
-(id)_urlStringWithTargetSize:(CGSize)arg1 ;
-(CGSize)_sizeForWidth:(long long)arg1 ;
-(id)_artworkURLWithWidth:(long long)arg1 ;
@end

