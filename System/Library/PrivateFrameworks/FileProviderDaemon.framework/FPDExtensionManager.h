/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSMutableDictionary, NSObject, NSMapTable, FPDPushConnection, FPDServer;

@interface FPDExtensionManager : NSObject {

	NSMutableDictionary* _providersByIdentifier;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_group> _providersLoadedGroup;
	id _matchingContext;
	NSMutableDictionary* _alternateContentsURLDictionary;
	NSMapTable* _sessionQueueForExtensionIdentifier;
	FPDPushConnection* _pushConnection;
	FPDServer* _server;

}

@property (assign,nonatomic,__weak) FPDServer * server;                         //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) FPDPushConnection * pushConnection;              //@synthesize pushConnection=_pushConnection - In the implementation block
-(id)initWithServer:(id)arg1 ;
-(FPDServer *)server;
-(id)xattrForName:(id)arg1 url:(id)arg2 ;
-(id)alternateContentsURLForItemID:(id)arg1 ;
-(id)nonEvictableSizeByProviderDomain;
-(void)_updateProviderListForMatchingExtensions:(id)arg1 allExtensionStartedHandler:(/*^block*/id)arg2 ;
-(void)_garbageCollectRemovedProvidersForInstalledProviderIdentifiers:(id)arg1 ;
-(void)_loadAlternateContentsDictionary;
-(void)setServer:(FPDServer *)arg1 ;
-(void)migrateEnabledStateIfNecessary:(id)arg1 ;
-(id)uniquedExtensions:(id)arg1 ;
-(id)providerWithIdentifier:(id)arg1 ;
-(id)providerDomainsByIDFromExtensionsByID:(id)arg1 ;
-(id)providerWithTopLevelBundleIdentifier:(id)arg1 ;
-(id)alternateContentsDictionaryForProviderIdentifier:(id)arg1 ;
-(id)domainForActionOperationLocator:(id)arg1 ;
-(id)allProviders;
-(id)providerDomainsByID;
-(FPDPushConnection *)pushConnection;
-(id)domainForURL:(id)arg1 ;
-(void)garbageCollectDomainOwnedDirectoriesAtURL:(id)arg1 isUserData:(BOOL)arg2 installedProviderIdentifiers:(id)arg3 ;
-(void)dropLegacyDaemonCoreSpotlightIndexIfNeeded;
-(void)_serializeAlternateContentsURLDictionary:(id)arg1 ;
-(id)_domainForURL:(id)arg1 ;
-(void)afterFirstDiscovery;
-(id)domainFromItemID:(id)arg1 ;
-(id)clouddocsExtensionIdentifier;
-(void)loadProvidersAndMonitorWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)setAlternateContentsURL:(id)arg1 forItemID:(id)arg2 ;
-(id)extensionsByID:(id)arg1 ;
-(id)_deserializedAlternateContentsDictionary;
@end
