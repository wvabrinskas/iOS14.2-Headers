/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class _PASLock, NSUbiquitousKeyValueStore, SGNoCloudNSUbiquitousKeyValueStore;

@interface SGSuggestHistory : NSObject {

	_PASLock* _lock;
	NSUbiquitousKeyValueStore* _backingKVStore;
	SGNoCloudNSUbiquitousKeyValueStore* _noCloudFakeBackingKVStore;

}

@property (nonatomic,readonly) NSUbiquitousKeyValueStore * kvs; 
+(id)newTestingInstanceWithSharedKVS:(id)arg1 ;
+(void)reset;
+(void)resetNoFlush;
+(id)sharedSuggestHistory;
-(NSUbiquitousKeyValueStore *)kvs;
-(void)pushRejectedEvents:(id)arg1 ;
-(void)confirmOrRejectRecordForContact:(id)arg1 ;
-(id)rejectHashesForOpaqueKey:(id)arg1 forMatching:(BOOL)arg2 ;
-(void)pushEmptyHashesForTestingKey:(id)arg1 ;
-(BOOL)isRejectedReminder:(id)arg1 ;
-(id)init;
-(id)hashesForOpaqueKey:(id)arg1 forMatching:(BOOL)arg2 ;
-(void)confirmEvent:(id)arg1 ;
-(id)hashesForPseudoEventByKey:(id)arg1 forMatching:(BOOL)arg2 ;
-(void)_setHashes:(id)arg1 forKey:(id)arg2 ;
-(BOOL)hasContactDetail:(id)arg1 forContact:(id)arg2 ;
-(BOOL)isRejectedEvent:(id)arg1 ;
-(void)confirmRealtimeContact:(id)arg1 ;
-(id)keysForContactDetail:(id)arg1 ofContact:(id)arg2 ;
-(id)confirmHashesForOpaqueKeyWithoutTimestamp:(id)arg1 forMatching:(BOOL)arg2 ;
-(id)identitySalt;
-(void)rejectStorageEvent:(id)arg1 ;
-(id)confirmHashesForRemindersOpaqueKey:(id)arg1 withCreationTime:(SGUnixTimestamp_)arg2 forMatching:(BOOL)arg3 ;
-(id)hashesForContact:(id)arg1 forMatching:(BOOL)arg2 ;
-(BOOL)isConfirmedEvent:(id)arg1 ;
-(void)writeAndPushRejectedReminderHashes:(id)arg1 ;
-(void)pushConfirmedEventsWithoutTimestamp:(id)arg1 ;
-(void)confirmOrRejectDetailHashes:(id)arg1 ;
-(void)rejectReminderFromExternalDevice:(id)arg1 ;
-(id)loadResetInfo;
-(id)keysForCuratedContactDetail:(id)arg1 ofContact:(id)arg2 ;
-(void)confirmReminder:(id)arg1 ;
-(id)keysForStorageContact:(id)arg1 ;
-(id)modernHashesForClassicHashes:(id)arg1 forMatching:(BOOL)arg2 ;
-(void)rejectRealtimeContact:(id)arg1 ;
-(void)confirmEventFromExternalDevice:(id)arg1 ;
-(id)hashesForStrings:(id)arg1 forMatching:(BOOL)arg2 ;
-(void)pushContacts:(id)arg1 ;
-(id)hashesForContactDetail:(id)arg1 fromContact:(id)arg2 forMatching:(BOOL)arg3 ;
-(BOOL)hasStorageContact:(id)arg1 ;
-(id)initWithKVS:(id)arg1 ;
-(void)writeAndPushConfirmedEventHashes:(id)arg1 ;
-(void)reset;
-(void)removeConfirmationHistoryForEntityWithOpaqueKey:(id)arg1 creationTimestamp:(SGUnixTimestamp_)arg2 ;
-(id)description;
-(BOOL)_anyHash:(id)arg1 inSet:(id)arg2 ;
-(BOOL)hasContact:(id)arg1 ;
-(id)hashesForStorageContact:(id)arg1 forMatching:(BOOL)arg2 ;
-(id)_canaryHash;
-(void)pushAll:(id)arg1 ;
-(BOOL)isUpdatableContact:(id)arg1 ;
-(id)confirmHashesForOpaqueKey:(id)arg1 withCreationTime:(SGUnixTimestamp_)arg2 forMatching:(BOOL)arg3 ;
-(BOOL)isValidCancelledEvent:(id)arg1 ;
-(id)identityBasedHashesForPseudoEvent:(id)arg1 withCreationTime:(SGUnixTimestamp_)arg2 ;
-(BOOL)isValidSuggestion:(id)arg1 ;
-(void)pushDontUpdate:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)writeAndPushConfirmedReminderHashes:(id)arg1 ;
-(BOOL)isValidNewEvent:(id)arg1 ;
-(void)confirmOrRejectContact:(id)arg1 ;
-(id)identityBasedHashesForPseudoReminder:(id)arg1 withCreationTime:(SGUnixTimestamp_)arg2 ;
-(id)hashesForCuratedContactDetail:(id)arg1 fromContact:(id)arg2 forMatching:(BOOL)arg3 ;
-(BOOL)isValidNewReminder:(id)arg1 ;
-(void)rejectEventFromExternalDevice:(id)arg1 ;
-(void)writeAndPushConfirmedEventWithoutTimestampHashes:(id)arg1 ;
-(void)pushResetInfo:(id)arg1 ;
-(void)confirmStorageEvent:(id)arg1 ;
-(void)writeAndPushRejectedEventHashes:(id)arg1 ;
-(id)setForKey:(id)arg1 ;
-(void)confirmOrRejectDetail:(id)arg1 forContact:(id)arg2 ;
-(void)handleSyncedDataChanged:(id)arg1 ;
-(void)rejectReminder:(id)arg1 ;
-(BOOL)hasConfirmedField:(id)arg1 value:(id)arg2 forStorageEvent:(id)arg3 ;
-(BOOL)isConfirmedEventWithoutTimeStamp:(id)arg1 ;
-(void)confirmReminderFromExternalDevice:(id)arg1 ;
-(id)_hashesForConfirmedField:(id)arg1 value:(id)arg2 storageEvent:(id)arg3 forMatching:(BOOL)arg4 ;
-(void)setInternalStateAccordingToKVS;
-(void)pushStorageDetails:(id)arg1 ;
-(void)pushConfirmedEventFields:(id)arg1 ;
-(void)pushRejectedReminders:(id)arg1 ;
-(void)confirmFieldValues:(id)arg1 forStorageEvent:(id)arg2 ;
-(void)removeConfirmationHistoryForEvent:(id)arg1 ;
-(id)mutableSetForKey:(id)arg1 ;
-(void)pushConfirmedEventWithoutTimestampFields:(id)arg1 ;
-(id)keysForContact:(id)arg1 ;
-(void)resetNoFlush;
-(void)pushConfirmedEvents:(id)arg1 ;
-(void)pushConfirmedReminders:(id)arg1 ;
-(void)_tellObserversHashesDidChange;
-(void)_setInternalStateAccordingToKVS:(id)arg1 ;
-(void)rejectEvent:(id)arg1 ;
-(BOOL)isConfirmedReminder:(id)arg1 ;
@end

