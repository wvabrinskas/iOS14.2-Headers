/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HDCodableAuthorizationCompleteMessage : PBCodable <NSCopying> {

	NSString* _appBundleIdentifier;
	NSString* _errorDescription;
	NSData* _requestIdentifier;

}

@property (nonatomic,readonly) BOOL hasAppBundleIdentifier; 
@property (nonatomic,retain) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestIdentifier; 
@property (nonatomic,retain) NSData * requestIdentifier;                  //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDescription; 
@property (nonatomic,retain) NSString * errorDescription;                 //@synthesize errorDescription=_errorDescription - In the implementation block
-(void)setRequestIdentifier:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setErrorDescription:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(NSString *)errorDescription;
-(NSData *)requestIdentifier;
-(BOOL)hasErrorDescription;
-(BOOL)readFrom:(id)arg1 ;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasAppBundleIdentifier;
-(void)writeTo:(id)arg1 ;
-(NSString *)appBundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasRequestIdentifier;
@end
