/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/_LSBundleQuery.h>

@interface _LSApplicationProxiesWithFlagsQuery : _LSBundleQuery {

	unsigned _plistFlags;
	unsigned long long _bundleFlags;

}

@property (nonatomic,readonly) unsigned plistFlags;                         //@synthesize plistFlags=_plistFlags - In the implementation block
@property (nonatomic,readonly) unsigned long long bundleFlags;              //@synthesize bundleFlags=_bundleFlags - In the implementation block
+(id)queryWithPlistFlags:(unsigned)arg1 bundleFlags:(unsigned long long)arg2 ;
+(BOOL)supportsSecureCoding;
-(BOOL)_requiresDatabaseMappingEntitlement;
-(unsigned long long)hash;
-(unsigned)plistFlags;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)bundleFlags;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

