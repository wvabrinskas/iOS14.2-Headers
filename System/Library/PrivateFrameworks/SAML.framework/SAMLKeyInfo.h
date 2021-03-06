/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAML/SAMLBaseElement.h>

@class NSString, SAMLSignatureKeyValue, SAMLKeyRetrievalMethod, SAMLX509Data, SAMLPGPData, NSData;

@interface SAMLKeyInfo : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * keyName; 
@property (nonatomic,readonly) SAMLSignatureKeyValue * keyValue; 
@property (nonatomic,readonly) SAMLKeyRetrievalMethod * retrievalMethod; 
@property (nonatomic,readonly) SAMLX509Data * x509Data; 
@property (nonatomic,readonly) SAMLPGPData * pgpData; 
@property (nonatomic,readonly) NSData * spkiSexpData; 
@property (nonatomic,readonly) NSString * mgmtData; 
+(id)createElement:(id*)arg1 ;
-(NSString *)identifier;
-(NSString *)keyName;
-(SAMLSignatureKeyValue *)keyValue;
-(SAMLPGPData *)pgpData;
-(SAMLKeyRetrievalMethod *)retrievalMethod;
-(SAMLX509Data *)x509Data;
-(NSData *)spkiSexpData;
-(NSString *)mgmtData;
@end

