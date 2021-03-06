/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DRSProtoFileDescription : PBCodable <NSCopying> {

	unsigned long long _logSize;
	NSString* _fileName;
	NSString* _logType;
	SCD_Struct_DR1 _has;

}

@property (nonatomic,readonly) BOOL hasLogType; 
@property (nonatomic,retain) NSString * logType;                      //@synthesize logType=_logType - In the implementation block
@property (assign,nonatomic) BOOL hasLogSize; 
@property (assign,nonatomic) unsigned long long logSize;              //@synthesize logSize=_logSize - In the implementation block
@property (nonatomic,readonly) BOOL hasFileName; 
@property (nonatomic,retain) NSString * fileName;                     //@synthesize fileName=_fileName - In the implementation block
-(NSString *)logType;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasLogType;
-(unsigned long long)logSize;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)fileName;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLogSize:(unsigned long long)arg1 ;
-(void)setFileName:(NSString *)arg1 ;
-(BOOL)hasFileName;
-(void)setLogType:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasLogSize:(BOOL)arg1 ;
-(BOOL)hasLogSize;
@end

