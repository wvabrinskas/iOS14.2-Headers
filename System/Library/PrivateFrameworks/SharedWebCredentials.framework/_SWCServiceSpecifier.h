/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
#import <libobjc.A.dylib/SWCRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _SWCApplicationIdentifier, _SWCDomain, NSString, NSNumber;

@interface _SWCServiceSpecifier : NSObject <SWCRedactedDescription, NSSecureCoding, NSCopying> {

	_SWCApplicationIdentifier* _applicationIdentifier;
	_SWCDomain* _domain;
	NSString* _serviceType;

}

@property (readonly) NSString * bundleIdentifier; 
@property (readonly) NSString * applicationIdentifierPrefix; 
@property (getter=isDomainWildcard,readonly) BOOL domainWildcard; 
@property (readonly) NSString * domainHost; 
@property (readonly) NSNumber * domainPort; 
@property (readonly) char domainModeOfOperation; 
@property (getter=isValid,readonly) BOOL valid; 
@property (readonly) _SWCApplicationIdentifier * SWCApplicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (readonly) _SWCDomain * SWCDomain;                                            //@synthesize domain=_domain - In the implementation block
@property (getter=isFullySpecified,readonly) BOOL fullySpecified; 
@property (readonly) NSString * serviceType;                                            //@synthesize serviceType=_serviceType - In the implementation block
@property (readonly) NSString * applicationIdentifier; 
@property (readonly) NSString * domain; 
+(id)serviceSpecifiersWithEntitlementValue:(id)arg1 serviceType:(id)arg2 error:(id*)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)_serviceSpecifiersWithEntitlementValue:(id)arg1 serviceType:(id)arg2 error:(id*)arg3 ;
+(id)serviceSpecifiersWithEntitlementValue:(id)arg1 error:(id*)arg2 ;
-(id)redactedDescription;
-(id)initWithServiceType:(id)arg1 applicationIdentifier:(id)arg2 domain:(id)arg3 ;
-(NSString *)applicationIdentifierPrefix;
-(id)init;
-(NSString *)applicationIdentifier;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(_SWCDomain *)SWCDomain;
-(id)debugDescription;
-(NSString *)serviceType;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithServiceType:(id)arg1 applicationIdentifier:(id)arg2 domain:(id)arg3 ;
-(BOOL)isFullySpecified;
-(_SWCApplicationIdentifier *)SWCApplicationIdentifier;
-(NSString *)domainHost;
-(BOOL)isDomainWildcard;
-(NSNumber *)domainPort;
-(char)domainModeOfOperation;
-(BOOL)domainEncompassesDomain:(id)arg1 ;
-(BOOL)domainEncompassesDomainOfServiceSpecifier:(id)arg1 ;
-(NSString *)domain;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
@end

