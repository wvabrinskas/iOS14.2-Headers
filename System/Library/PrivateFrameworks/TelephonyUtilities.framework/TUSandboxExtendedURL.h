/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface TUSandboxExtendedURL : NSObject <NSSecureCoding> {

	NSString* _sandboxExtensionClass;
	NSURL* _URL;
	NSString* _sandboxExtensionToken;
	long long _sandboxExtensionHandle;

}

@property (nonatomic,retain) NSURL * URL;                                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * sandboxExtensionToken;                //@synthesize sandboxExtensionToken=_sandboxExtensionToken - In the implementation block
@property (assign,nonatomic) long long sandboxExtensionHandle;              //@synthesize sandboxExtensionHandle=_sandboxExtensionHandle - In the implementation block
@property (nonatomic,copy) NSString * sandboxExtensionClass;                //@synthesize sandboxExtensionClass=_sandboxExtensionClass - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithURL:(id)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(long long)sandboxExtensionHandle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSandboxExtensionHandle:(long long)arg1 ;
-(NSString *)sandboxExtensionClass;
-(BOOL)isEqualToSandboxExtendedURL:(id)arg1 ;
-(void)setSandboxExtensionClass:(NSString *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSandboxExtensionToken:(NSString *)arg1 ;
-(NSString *)sandboxExtensionToken;
-(NSURL *)URL;
-(void)dealloc;
@end

