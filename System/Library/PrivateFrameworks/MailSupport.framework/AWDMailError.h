/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDMailError : PBCodable <NSCopying> {

	long long _genericErrorCode;
	int _errorCode;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                           //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasGenericErrorCode; 
@property (assign,nonatomic) long long genericErrorCode;              //@synthesize genericErrorCode=_genericErrorCode - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)errorCode;
-(void)setErrorCode:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasErrorCode;
-(id)errorCodeAsString:(int)arg1 ;
-(int)StringAsErrorCode:(id)arg1 ;
-(void)setGenericErrorCode:(long long)arg1 ;
-(void)setHasGenericErrorCode:(BOOL)arg1 ;
-(BOOL)hasGenericErrorCode;
-(long long)genericErrorCode;
@end
