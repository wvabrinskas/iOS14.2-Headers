/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVRemoteCore/TVRMSBonjourServiceProvider.h>

@class NSMutableDictionary, NSArray;

@interface TVRMSPairingServiceProvider : TVRMSBonjourServiceProvider {

	NSMutableDictionary* _unmonitoredServices;
	NSMutableDictionary* _monitoredServices;
	NSArray* _pairedNetworkNames;

}

@property (nonatomic,retain) NSArray * pairedNetworkNames;              //@synthesize pairedNetworkNames=_pairedNetworkNames - In the implementation block
-(id)init;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(id)searchType;
-(void)dealloc;
-(NSArray *)pairedNetworkNames;
-(void)setPairedNetworkNames:(NSArray *)arg1 ;
-(long long)serviceDiscoverySource;
-(long long)serviceLegacyFlagsFromTXTDictionary:(id)arg1 ;
@end
