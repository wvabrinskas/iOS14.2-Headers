/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PBBProtoDemoWirelessCredentials : PBCodable <NSCopying> {

	NSString* _password;
	NSString* _ssid;

}

@property (nonatomic,readonly) BOOL hasSsid; 
@property (nonatomic,retain) NSString * ssid;                  //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,readonly) BOOL hasPassword; 
@property (nonatomic,retain) NSString * password;              //@synthesize password=_password - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setSsid:(NSString *)arg1 ;
-(NSString *)password;
-(unsigned long long)hash;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)ssid;
-(id)dictionaryRepresentation;
-(BOOL)hasPassword;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasSsid;
@end

