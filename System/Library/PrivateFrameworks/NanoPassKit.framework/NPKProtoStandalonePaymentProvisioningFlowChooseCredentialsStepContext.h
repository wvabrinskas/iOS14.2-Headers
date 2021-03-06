/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsStepContext : PBCodable <NSCopying> {

	NSMutableArray* _credentials;
	NSMutableArray* _remoteCredentials;
	BOOL _allowsManualEntry;
	SCD_Struct_NP2 _has;

}

@property (nonatomic,retain) NSMutableArray * remoteCredentials;              //@synthesize remoteCredentials=_remoteCredentials - In the implementation block
@property (nonatomic,retain) NSMutableArray * credentials;                    //@synthesize credentials=_credentials - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsManualEntry; 
@property (assign,nonatomic) BOOL allowsManualEntry;                          //@synthesize allowsManualEntry=_allowsManualEntry - In the implementation block
+(Class)remoteCredentialsType;
+(Class)credentialsType;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)setAllowsManualEntry:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)credentials;
-(BOOL)allowsManualEntry;
-(void)setCredentials:(NSMutableArray *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addCredentials:(id)arg1 ;
-(void)addRemoteCredentials:(id)arg1 ;
-(unsigned long long)remoteCredentialsCount;
-(void)clearRemoteCredentials;
-(id)remoteCredentialsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)credentialsCount;
-(void)clearCredentials;
-(id)credentialsAtIndex:(unsigned long long)arg1 ;
-(void)setHasAllowsManualEntry:(BOOL)arg1 ;
-(BOOL)hasAllowsManualEntry;
-(NSMutableArray *)remoteCredentials;
-(void)setRemoteCredentials:(NSMutableArray *)arg1 ;
@end

