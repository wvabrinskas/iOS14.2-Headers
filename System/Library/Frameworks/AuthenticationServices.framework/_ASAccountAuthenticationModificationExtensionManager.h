/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSArray, NSMutableOrderedSet, NSUserDefaults;

@interface _ASAccountAuthenticationModificationExtensionManager : NSObject {

	NSObject*<OS_dispatch_queue> _dataConstructionQueue;
	NSObject*<OS_dispatch_queue> _readOnlyQueue;
	id _extensionMatchingToken;
	NSDictionary* _domainToExtension;
	NSArray* _extensions;
	NSMutableOrderedSet* _observers;
	BOOL _errorEncounteredDuringLastExtensionDiscovery;
	NSUserDefaults* _mobileSafariUserDefaults;

}
+(id)sharedManager;
-(void)removeObserver:(id)arg1 ;
-(id)init;
-(void)_endExtensionDiscovery;
-(void)_beginExtensionDiscovery;
-(void)_notifyObservers:(id)arg1 ;
-(void)extensionForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)dealloc;
-(void)_buildDomainToExtensionDictionaryWithSharedWebCredentialsDatabaseEntries:(id)arg1 ;
@end

