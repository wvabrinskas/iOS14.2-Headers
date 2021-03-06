/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CPUINowPlayingObserving.h>

@protocol CPTemplateProviding;
@class NSXPCConnection, NSString, NSSet, CARObserverHashTable;

@interface CPSTemplateEnvironment : NSObject <CPUINowPlayingObserving> {

	BOOL _isNowPlayingApp;
	BOOL _hasNavigationEntitlement;
	BOOL _hasAudioEntitlement;
	BOOL _hasCommunicationEntitlement;
	BOOL _hasChargingEntitlement;
	BOOL _hasParkingEntitlement;
	BOOL _hasQuickOrderingEntitlement;
	BOOL _hasPublicSafetyEntitlement;
	BOOL _isUserApplication;
	NSXPCConnection* _connection;
	id<CPTemplateProviding> _templateProvider;
	NSString* _bundleIdentifier;
	NSSet* _allowedTemplateClasses;
	CARObserverHashTable* _environmentObservers;

}

@property (nonatomic,retain) CARObserverHashTable * environmentObservers;                    //@synthesize environmentObservers=_environmentObservers - In the implementation block
@property (nonatomic,__weak,readonly) NSXPCConnection * connection;                          //@synthesize connection=_connection - In the implementation block
@property (nonatomic,__weak,readonly) id<CPTemplateProviding> templateProvider;              //@synthesize templateProvider=_templateProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                             //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isNowPlayingApp;                                         //@synthesize isNowPlayingApp=_isNowPlayingApp - In the implementation block
@property (nonatomic,readonly) BOOL hasAnyTemplateEntitlement; 
@property (nonatomic,readonly) BOOL hasNavigationEntitlement;                                //@synthesize hasNavigationEntitlement=_hasNavigationEntitlement - In the implementation block
@property (nonatomic,readonly) BOOL hasAudioEntitlement;                                     //@synthesize hasAudioEntitlement=_hasAudioEntitlement - In the implementation block
@property (nonatomic,readonly) BOOL hasCommunicationEntitlement;                             //@synthesize hasCommunicationEntitlement=_hasCommunicationEntitlement - In the implementation block
@property (nonatomic,readonly) BOOL hasChargingEntitlement;                                  //@synthesize hasChargingEntitlement=_hasChargingEntitlement - In the implementation block
@property (nonatomic,readonly) BOOL hasParkingEntitlement;                                   //@synthesize hasParkingEntitlement=_hasParkingEntitlement - In the implementation block
@property (nonatomic,readonly) BOOL hasQuickOrderingEntitlement;                             //@synthesize hasQuickOrderingEntitlement=_hasQuickOrderingEntitlement - In the implementation block
@property (nonatomic,readonly) BOOL hasPublicSafetyEntitlement;                              //@synthesize hasPublicSafetyEntitlement=_hasPublicSafetyEntitlement - In the implementation block
@property (nonatomic,readonly) NSSet * allowedTemplateClasses;                               //@synthesize allowedTemplateClasses=_allowedTemplateClasses - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumTabs; 
@property (nonatomic,readonly) unsigned long long maximumClientHierarchyDepth; 
@property (nonatomic,readonly) BOOL isUserApplication;                                       //@synthesize isUserApplication=_isUserApplication - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)bundleIdentifier;
-(NSXPCConnection *)connection;
-(id<CPTemplateProviding>)templateProvider;
-(BOOL)hasNavigationEntitlement;
-(BOOL)hasAudioEntitlement;
-(BOOL)hasCommunicationEntitlement;
-(BOOL)hasChargingEntitlement;
-(BOOL)hasParkingEntitlement;
-(BOOL)hasQuickOrderingEntitlement;
-(BOOL)hasPublicSafetyEntitlement;
-(CARObserverHashTable *)environmentObservers;
-(BOOL)isNowPlayingApp;
-(void)nowPlayingManager:(id)arg1 didUpdateSnapshot:(id)arg2 ;
-(id)initWithConnection:(id)arg1 templateProvider:(id)arg2 ;
-(BOOL)hasAnyTemplateEntitlement;
-(unsigned long long)maximumTabs;
-(unsigned long long)maximumClientHierarchyDepth;
-(void)addTemplateEnvironmentDelegate:(id)arg1 ;
-(NSSet *)allowedTemplateClasses;
-(BOOL)isUserApplication;
-(void)setEnvironmentObservers:(CARObserverHashTable *)arg1 ;
@end

