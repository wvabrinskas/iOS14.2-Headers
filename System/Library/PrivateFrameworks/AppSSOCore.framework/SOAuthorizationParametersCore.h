/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL, NSDictionary, NSData;

@interface SOAuthorizationParametersCore : NSObject {

	BOOL _useInternalExtensions;
	NSString* _operation;
	NSURL* _url;
	NSDictionary* _httpHeaders;
	NSData* _httpBody;
	NSData* _auditTokenData;
	long long _responseCode;

}

@property (nonatomic,copy) NSString * operation;                      //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) NSURL * url;                             //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSDictionary * httpHeaders;              //@synthesize httpHeaders=_httpHeaders - In the implementation block
@property (nonatomic,retain) NSData * httpBody;                       //@synthesize httpBody=_httpBody - In the implementation block
@property (nonatomic,retain) NSData * auditTokenData;                 //@synthesize auditTokenData=_auditTokenData - In the implementation block
@property (assign,nonatomic) BOOL useInternalExtensions;              //@synthesize useInternalExtensions=_useInternalExtensions - In the implementation block
@property (assign,nonatomic) long long responseCode;                  //@synthesize responseCode=_responseCode - In the implementation block
-(NSData *)auditTokenData;
-(void)setResponseCode:(long long)arg1 ;
-(void)setOperation:(NSString *)arg1 ;
-(id)init;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setHttpHeaders:(NSDictionary *)arg1 ;
-(void)setUseInternalExtensions:(BOOL)arg1 ;
-(NSString *)operation;
-(void)setAuditTokenData:(NSData *)arg1 ;
-(NSData *)httpBody;
-(BOOL)useInternalExtensions;
-(long long)responseCode;
-(NSDictionary *)httpHeaders;
-(void)setHttpBody:(NSData *)arg1 ;
@end

