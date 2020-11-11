/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DEDSecureArchiving.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DEDExtensionIdentifier : NSObject <DEDSecureArchiving, NSSecureCoding> {

	NSString* _extensionIdentifier;
	long long _invocationNumber;

}

@property (retain) NSString * extensionIdentifier;                  //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (assign) long long invocationNumber;                      //@synthesize invocationNumber=_invocationNumber - In the implementation block
@property (readonly) NSString * stringValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)log;
+(id)archivedClasses;
+(id)parseDEDIdentifierString:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)stringValue;
-(NSString *)extensionIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setExtensionIdentifier:(NSString *)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)invocationNumber;
-(id)initWithExtensionIdentifier:(id)arg1 invocationNumber:(long long)arg2 ;
-(void)setInvocationNumber:(long long)arg1 ;
@end
