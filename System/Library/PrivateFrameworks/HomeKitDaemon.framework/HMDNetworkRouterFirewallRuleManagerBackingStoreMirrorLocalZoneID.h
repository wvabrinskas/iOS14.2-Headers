/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMBLocalZoneID.h>

@class NSData, NSString, NSArray;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorLocalZoneID : HMFObject <HMBLocalZoneID> {

	NSData* _token;

}

@property (nonatomic,readonly) NSData * token;                      //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * labels; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)attributeDescriptions;
-(NSArray *)labels;
-(NSData *)token;
-(NSString *)name;
-(id)initWithToken:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

