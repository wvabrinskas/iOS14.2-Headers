/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, WFPBError, NSString;

@interface WFPBAceCommandRequestResponse : PBCodable <NSCopying> {

	NSData* _aceCommandResponseData;
	WFPBError* _error;
	NSString* _originatingRequestIdentifier;

}

@property (nonatomic,retain) NSString * originatingRequestIdentifier;              //@synthesize originatingRequestIdentifier=_originatingRequestIdentifier - In the implementation block
@property (nonatomic,retain) NSData * aceCommandResponseData;                      //@synthesize aceCommandResponseData=_aceCommandResponseData - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) WFPBError * error;                                    //@synthesize error=_error - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(WFPBError *)error;
-(id)dictionaryRepresentation;
-(void)setError:(WFPBError *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasError;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)originatingRequestIdentifier;
-(void)setOriginatingRequestIdentifier:(NSString *)arg1 ;
-(NSData *)aceCommandResponseData;
-(void)setAceCommandResponseData:(NSData *)arg1 ;
@end

