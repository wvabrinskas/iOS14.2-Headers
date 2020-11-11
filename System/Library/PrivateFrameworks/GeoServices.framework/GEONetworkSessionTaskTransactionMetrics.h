/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEONetworkSessionTaskTransactionMetrics : PBCodable <NSCopying> {

	double _connectEnd;
	double _connectStart;
	double _domainLookupEnd;
	double _domainLookupStart;
	double _fetchStart;
	double _requestEnd;
	double _requestStart;
	double _responseEnd;
	double _responseStart;
	double _secureConnectEnd;
	double _secureConnectStart;
	int _protocolName;
	int _resourceFetchType;
	BOOL _proxyConnection;
	BOOL _reusedConnection;
	struct {
		unsigned has_connectEnd : 1;
		unsigned has_connectStart : 1;
		unsigned has_domainLookupEnd : 1;
		unsigned has_domainLookupStart : 1;
		unsigned has_fetchStart : 1;
		unsigned has_requestEnd : 1;
		unsigned has_requestStart : 1;
		unsigned has_responseEnd : 1;
		unsigned has_responseStart : 1;
		unsigned has_secureConnectEnd : 1;
		unsigned has_secureConnectStart : 1;
		unsigned has_protocolName : 1;
		unsigned has_resourceFetchType : 1;
		unsigned has_proxyConnection : 1;
		unsigned has_reusedConnection : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasFetchStart; 
@property (assign,nonatomic) double fetchStart; 
@property (assign,nonatomic) BOOL hasDomainLookupStart; 
@property (assign,nonatomic) double domainLookupStart; 
@property (assign,nonatomic) BOOL hasDomainLookupEnd; 
@property (assign,nonatomic) double domainLookupEnd; 
@property (assign,nonatomic) BOOL hasConnectStart; 
@property (assign,nonatomic) double connectStart; 
@property (assign,nonatomic) BOOL hasSecureConnectStart; 
@property (assign,nonatomic) double secureConnectStart; 
@property (assign,nonatomic) BOOL hasSecureConnectEnd; 
@property (assign,nonatomic) double secureConnectEnd; 
@property (assign,nonatomic) BOOL hasConnectEnd; 
@property (assign,nonatomic) double connectEnd; 
@property (assign,nonatomic) BOOL hasRequestStart; 
@property (assign,nonatomic) double requestStart; 
@property (assign,nonatomic) BOOL hasRequestEnd; 
@property (assign,nonatomic) double requestEnd; 
@property (assign,nonatomic) BOOL hasResponseStart; 
@property (assign,nonatomic) double responseStart; 
@property (assign,nonatomic) BOOL hasResponseEnd; 
@property (assign,nonatomic) double responseEnd; 
@property (assign,nonatomic) BOOL hasProtocolName; 
@property (assign,nonatomic) int protocolName; 
@property (assign,nonatomic) BOOL hasProxyConnection; 
@property (assign,nonatomic) BOOL proxyConnection; 
@property (assign,nonatomic) BOOL hasReusedConnection; 
@property (assign,nonatomic) BOOL reusedConnection; 
@property (assign,nonatomic) BOOL hasResourceFetchType; 
@property (assign,nonatomic) int resourceFetchType; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRequestStart:(double)arg1 ;
-(void)setSecureConnectStart:(double)arg1 ;
-(double)requestEnd;
-(void)setHasRequestStart:(BOOL)arg1 ;
-(BOOL)hasRequestStart;
-(BOOL)hasReusedConnection;
-(double)requestStart;
-(BOOL)hasRequestEnd;
-(void)setHasRequestEnd:(BOOL)arg1 ;
-(void)setRequestEnd:(double)arg1 ;
-(BOOL)proxyConnection;
-(id)jsonRepresentation;
-(void)setHasReusedConnection:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasDomainLookupEnd;
-(BOOL)hasResourceFetchType;
-(int)protocolName;
-(id)initWithDictionary:(id)arg1 ;
-(id)resourceFetchTypeAsString:(int)arg1 ;
-(double)fetchStart;
-(int)StringAsProtocolName:(id)arg1 ;
-(id)dictionaryRepresentation;
-(double)domainLookupStart;
-(int)resourceFetchType;
-(BOOL)hasConnectEnd;
-(BOOL)readFrom:(id)arg1 ;
-(double)connectStart;
-(BOOL)reusedConnection;
-(void)setHasResponseStart:(BOOL)arg1 ;
-(void)setProtocolName:(int)arg1 ;
-(void)setHasConnectStart:(BOOL)arg1 ;
-(void)setHasProxyConnection:(BOOL)arg1 ;
-(id)description;
-(id)protocolNameAsString:(int)arg1 ;
-(double)secureConnectEnd;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasResourceFetchType:(BOOL)arg1 ;
-(void)setHasResponseEnd:(BOOL)arg1 ;
-(double)responseEnd;
-(void)copyTo:(id)arg1 ;
-(void)setSecureConnectEnd:(double)arg1 ;
-(double)responseStart;
-(double)connectEnd;
-(void)setProxyConnection:(BOOL)arg1 ;
-(void)setHasProtocolName:(BOOL)arg1 ;
-(BOOL)hasDomainLookupStart;
-(void)setDomainLookupEnd:(double)arg1 ;
-(double)domainLookupEnd;
-(void)setFetchStart:(double)arg1 ;
-(void)setResourceFetchType:(int)arg1 ;
-(BOOL)hasFetchStart;
-(BOOL)hasSecureConnectStart;
-(void)setConnectEnd:(double)arg1 ;
-(void)setHasConnectEnd:(BOOL)arg1 ;
-(void)setHasDomainLookupEnd:(BOOL)arg1 ;
-(void)setHasSecureConnectEnd:(BOOL)arg1 ;
-(BOOL)hasProtocolName;
-(void)setDomainLookupStart:(double)arg1 ;
-(void)setResponseStart:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasConnectStart;
-(BOOL)hasResponseStart;
-(double)secureConnectStart;
-(void)setHasDomainLookupStart:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasSecureConnectEnd;
-(void)setConnectStart:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setResponseEnd:(double)arg1 ;
-(void)setReusedConnection:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasSecureConnectStart:(BOOL)arg1 ;
-(int)StringAsResourceFetchType:(id)arg1 ;
-(BOOL)hasProxyConnection;
-(void)setHasFetchStart:(BOOL)arg1 ;
-(BOOL)hasResponseEnd;
@end
