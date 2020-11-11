/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HDSyncMessageHandler;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class HDProfile, HDDataProvenanceCache, HDEntityEncoder, NSArray;

@interface _HDDataEntitySyncMessageBuilder : NSObject {

	HDProfile* _profile;
	Class _entityClass;
	HDDataProvenanceCache* _provenanceCache;
	HDEntityEncoder* _entityEncoder;
	id<HDSyncMessageHandler> _messageHandler;
	long long _maxEncodedBytesPerChangeSet;
	long long _maxEncodedBytesPerChange;
	long long _totalEncodedBytes;
	long long _currentEncodedBytes;
	long long _lastEntityAnchor;
	long long _sequence;
	BOOL _hasEncodedAnyObject;
	BOOL _didSendFinal;

}

@property (nonatomic,copy,readonly) NSArray * orderedProperties; 
-(id)init;
-(id)description;
-(NSArray *)orderedProperties;
-(id)initWithProfile:(id)arg1 transaction:(id)arg2 entityClass:(Class)arg3 provenanceCache:(id)arg4 encodingOptions:(id)arg5 messageHandler:(id)arg6 bytesPerChangeSet:(long long)arg7 bytesPerChange:(long long)arg8 ;
-(long long)addEntity:(id)arg1 row:(HDSQLiteRowRef)arg2 anchor:(long long)arg3 error:(id*)arg4 ;
-(BOOL)finishAndFlushWithError:(id*)arg1 ;
-(long long)_addEntity:(id)arg1 row:(HDSQLiteRowRef)arg2 anchor:(long long)arg3 provenance:(id)arg4 ;
-(BOOL)_sendCurrentCollectionIsFinal:(BOOL)arg1 error:(id*)arg2 ;
-(long long)_addCodableRepresentation:(id)arg1 encodedSize:(long long)arg2 anchor:(long long)arg3 provenance:(id)arg4 error:(id*)arg5 ;
@end
