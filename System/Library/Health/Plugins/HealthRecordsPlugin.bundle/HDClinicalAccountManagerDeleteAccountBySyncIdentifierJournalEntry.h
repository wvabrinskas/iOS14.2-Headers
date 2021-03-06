/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDJournalEntry.h>

@class NSUUID;

@interface HDClinicalAccountManagerDeleteAccountBySyncIdentifierJournalEntry : HDJournalEntry {

	NSUUID* _accountSyncIdentifier;

}

@property (nonatomic,copy,readonly) NSUUID * accountSyncIdentifier;              //@synthesize accountSyncIdentifier=_accountSyncIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAccountSyncIdentifier:(id)arg1 ;
-(NSUUID *)accountSyncIdentifier;
@end

