/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceShortcuts/VoiceShortcuts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/VCShortcutSyncService.h>

@class NSString, NSURL, VCCompanionSyncService;

@interface VCNRDeviceSyncService : NSObject <NSCopying, VCShortcutSyncService> {

	NSString* _syncServiceIdentifier;
	NSURL* _directoryURL;
	long long _protocolVersion;
	VCCompanionSyncService* _service;

}

@property (nonatomic,__weak,readonly) VCCompanionSyncService * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) long long protocolVersion;                            //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * syncServiceIdentifier;                //@synthesize syncServiceIdentifier=_syncServiceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * directoryURL;                            //@synthesize directoryURL=_directoryURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)hash;
-(NSURL *)directoryURL;
-(BOOL)isEqual:(id)arg1 ;
-(void)requestFullResync;
-(long long)protocolVersion;
-(void)requestSync;
-(VCCompanionSyncService *)service;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)syncServiceIdentifier;
-(id)initWithCompanionSyncService:(id)arg1 device:(id)arg2 ;
@end

