/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MCPersonaHelper : NSObject
+(BOOL)isCurrentPersonaEnterprise;
+(BOOL)adoptPersona:(id)arg1 error:(id*)arg2 ;
+(id)currentPersonaID;
+(void)removeExistingEnterprisePersonaAndAccountsAsynchronously;
+(id)createEnterprisePersona:(id*)arg1 passcode:(id)arg2 ;
+(void)signOutEnterpriseAccountWithPersonaID:(id)arg1 ;
+(void)trackDirtyPersona:(id)arg1 ;
+(void)removePersona:(id)arg1 ;
+(id)performBlockUnderPersona:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)appleAccountWithPersonaID:(id)arg1 ;
+(void)untrackDirtyPersona:(id)arg1 ;
+(id)fetchDirtyPersonaIDs;
+(id)managedAppleIDNameWithPersonaID:(id)arg1 ;
+(void)untrackAllDirtyPersonas;
+(void)removePersonaAndAccountsWithPersonaID:(id)arg1 ;
+(id)accountIdentifierForAppleAccountWithPersonaID:(id)arg1 ;
+(id)performBlockUnderPersonalPersona:(/*^block*/id)arg1 ;
+(id)updateAccountDescriptionName:(id)arg1 forAppleAccountWithPersonaID:(id)arg2 ;
+(BOOL)personaWithUniqueIdentifierExists:(id)arg1 ;
@end
