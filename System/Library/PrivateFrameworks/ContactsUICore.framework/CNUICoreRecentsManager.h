/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNScheduler;
@class CRRecentContactsLibrary;

@interface CNUICoreRecentsManager : NSObject {

	CRRecentContactsLibrary* _recentsLibrary;
	id<CNScheduler> _workQueue;

}

@property (nonatomic,readonly) CRRecentContactsLibrary * recentsLibrary;              //@synthesize recentsLibrary=_recentsLibrary - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> workQueue;                             //@synthesize workQueue=_workQueue - In the implementation block
+(id)descriptorForRequiredKeys;
+(id)supportedPropertyDescriptions;
+(id)allHandlesToSearchForFromContact:(id)arg1 ;
+(/*^block*/id)transformForPropertyDescription:(id)arg1 ;
+(id)handlesForContactProperties:(id)arg1 ;
+(id)queryForHandles:(id)arg1 ;
+(id)predicateForSearchingHandlesForAllSupportedKinds:(id)arg1 ;
+(id)supportedRecentsDomains;
+(id)supportedRecentsKinds;
-(id<CNScheduler>)workQueue;
-(id)initWithRecentsLibrary:(id)arg1 schedulerProvider:(id)arg2 ;
-(void)removeRecents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)recentContactsMatchingAllPropertiesOfContact:(id)arg1 ;
-(id)recentContactsMatchingContactProperties:(id)arg1 ;
-(void)removeRecentsWithIdentifiers:(id)arg1 domain:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)recentsContactsMatchingHandles:(id)arg1 ;
-(CRRecentContactsLibrary *)recentsLibrary;
@end
