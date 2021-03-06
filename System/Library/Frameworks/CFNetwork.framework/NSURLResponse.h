/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLResponseInternal, NSDictionary, NSURL, NSString;

@interface NSURLResponse : NSObject <NSSecureCoding, NSCopying> {

	NSURLResponseInternal* _internal;
	URLResponse* __cf_resp_data;

}

@property (assign) URLResponse* _cf_resp_data;                         //@synthesize _cf_resp_data=__cf_resp_data - In the implementation block
@property (readonly) long long statusCode; 
@property (copy,readonly) NSDictionary * allHeaderFields; 
@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * MIMEType; 
@property (readonly) long long expectedContentLength; 
@property (copy,readonly) NSString * textEncodingName; 
@property (copy,readonly) NSString * suggestedFilename; 
+(BOOL)supportsSecureCoding;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)_responseWithCFURLResponse:(CFURLResponseRef)arg1 ;
-(id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(long long)arg3 textEncodingName:(id)arg4 ;
-(URLResponse*)_cf_resp_data;
-(void)_setMIMEType:(id)arg1 ;
-(void)_setExpectedContentLength:(long long)arg1 ;
-(id)init;
-(CFURLResponseRef)_CFURLResponse;
-(long long)statusCode;
-(void)set_cf_resp_data:(URLResponse*)arg1 ;
-(id)_lastModifiedDate;
-(BOOL)_mustRevalidate;
-(id)_peerCertificateChain;
-(id)_initWithInternal:(id)arg1 ;
-(double)_freshnessLifetime;
-(id)_initWithCFURLResponse:(CFURLResponseRef)arg1 ;
-(double)_calculatedExpiration;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)allHeaderFields;
-(URLResponse*)_inner;
-(NSString *)MIMEType;
-(NSString *)textEncodingName;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(NSString *)suggestedFilename;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(long long)expectedContentLength;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)dealloc;
@end

