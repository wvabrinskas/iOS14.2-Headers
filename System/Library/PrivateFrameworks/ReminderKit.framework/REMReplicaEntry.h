/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol REMReplicaManagerClient;
#import <ReminderKit/ReminderKit-Structs.h>
@class REMClockElementList;

@interface REMReplicaEntry : NSObject {

	BOOL _inUse;
	unsigned _replicaUUIDIndex;
	REMClockElementList* _clockElementList;
	id<REMReplicaManagerClient> _client;

}

@property (assign,nonatomic) unsigned replicaUUIDIndex;                           //@synthesize replicaUUIDIndex=_replicaUUIDIndex - In the implementation block
@property (nonatomic,retain) REMClockElementList * clockElementList;              //@synthesize clockElementList=_clockElementList - In the implementation block
@property (assign,nonatomic) BOOL inUse;                                          //@synthesize inUse=_inUse - In the implementation block
@property (assign,nonatomic) id<REMReplicaManagerClient> client;                  //@synthesize client=_client - In the implementation block
-(void)encodeIntoEntryArchive:(ReplicaEntry*)arg1 ;
-(id)initWithEntryArchive:(const ReplicaEntry*)arg1 ;
-(unsigned)replicaUUIDIndex;
-(REMClockElementList *)clockElementList;
-(id)initWithReplicaUUIDIndex:(unsigned)arg1 clockElementList:(id)arg2 inUse:(BOOL)arg3 forClient:(id)arg4 ;
-(id)persistenceDescription;
-(void)setReplicaUUIDIndex:(unsigned)arg1 ;
-(BOOL)hasEqualPersistedPropertiesAs:(id)arg1 ;
-(void)setClockElementList:(REMClockElementList *)arg1 ;
-(void)setClient:(id<REMReplicaManagerClient>)arg1 ;
-(id<REMReplicaManagerClient>)client;
-(BOOL)inUse;
-(id)description;
-(void)setInUse:(BOOL)arg1 ;
@end

