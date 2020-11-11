/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface NEDNSSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	BOOL _matchDomainsNoSearch;
	NSArray* _servers;
	NSArray* _searchDomains;
	NSString* _domainName;
	NSArray* _matchDomains;

}

@property (readonly) long long dnsProtocol; 
@property (readonly) NSArray * servers;                    //@synthesize servers=_servers - In the implementation block
@property (copy) NSArray * searchDomains;                  //@synthesize searchDomains=_searchDomains - In the implementation block
@property (copy) NSString * domainName;                    //@synthesize domainName=_domainName - In the implementation block
@property (copy) NSArray * matchDomains;                   //@synthesize matchDomains=_matchDomains - In the implementation block
@property (assign) BOOL matchDomainsNoSearch;              //@synthesize matchDomainsNoSearch=_matchDomainsNoSearch - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createDNSSettingsFromLegacyDictionary:(id)arg1 ;
-(NSArray *)matchDomains;
-(id)copyLegacyDictionary;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(NSString *)domainName;
-(long long)dnsProtocol;
-(void)setDomainName:(NSString *)arg1 ;
-(void)setMatchDomains:(NSArray *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)searchDomains;
-(NSArray *)servers;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)overlapsWithSettings:(id)arg1 ;
-(BOOL)matchDomainsNoSearch;
-(id)initWithServers:(id)arg1 ;
-(void)setMatchDomainsNoSearch:(BOOL)arg1 ;
-(void)setSearchDomains:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
