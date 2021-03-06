/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBEmailSubscriptionRequest : PBRequest <NSCopying> {

	long long _dsId;
	NSString* _languageCode;
	NSString* _userStorefrontId;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasDsId; 
@property (assign,nonatomic) long long dsId;                           //@synthesize dsId=_dsId - In the implementation block
@property (nonatomic,readonly) BOOL hasUserStorefrontId; 
@property (nonatomic,retain) NSString * userStorefrontId;              //@synthesize userStorefrontId=_userStorefrontId - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;                  //@synthesize languageCode=_languageCode - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)languageCode;
-(BOOL)hasLanguageCode;
-(void)setUserStorefrontId:(NSString *)arg1 ;
-(NSString *)userStorefrontId;
-(BOOL)hasUserStorefrontId;
-(long long)dsId;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDsId;
-(void)setDsId:(long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasDsId:(BOOL)arg1 ;
@end

