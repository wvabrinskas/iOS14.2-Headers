/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NPKProtoSetExpressPassRequest : PBRequest <NSCopying> {

	NSString* _applicationIdentifier;
	NSData* _expressPassInformation;
	NSString* _uniqueID;
	BOOL _cancelOutstandingRequests;
	BOOL _requestAuthorization;
	SCD_Struct_NP1 _has;

}

@property (nonatomic,readonly) BOOL hasUniqueID; 
@property (nonatomic,retain) NSString * uniqueID;                            //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign,nonatomic) BOOL hasCancelOutstandingRequests; 
@property (assign,nonatomic) BOOL cancelOutstandingRequests;                 //@synthesize cancelOutstandingRequests=_cancelOutstandingRequests - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationIdentifier; 
@property (nonatomic,retain) NSString * applicationIdentifier;               //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasRequestAuthorization; 
@property (assign,nonatomic) BOOL requestAuthorization;                      //@synthesize requestAuthorization=_requestAuthorization - In the implementation block
@property (nonatomic,readonly) BOOL hasExpressPassInformation; 
@property (nonatomic,retain) NSData * expressPassInformation;                //@synthesize expressPassInformation=_expressPassInformation - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)applicationIdentifier;
-(unsigned long long)hash;
-(void)setUniqueID:(NSString *)arg1 ;
-(BOOL)cancelOutstandingRequests;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasUniqueID;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasApplicationIdentifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)uniqueID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)requestAuthorization;
-(void)setRequestAuthorization:(BOOL)arg1 ;
-(void)setHasRequestAuthorization:(BOOL)arg1 ;
-(BOOL)hasRequestAuthorization;
-(void)setExpressPassInformation:(NSData *)arg1 ;
-(BOOL)hasExpressPassInformation;
-(NSData *)expressPassInformation;
-(void)setCancelOutstandingRequests:(BOOL)arg1 ;
-(void)setHasCancelOutstandingRequests:(BOOL)arg1 ;
-(BOOL)hasCancelOutstandingRequests;
@end

