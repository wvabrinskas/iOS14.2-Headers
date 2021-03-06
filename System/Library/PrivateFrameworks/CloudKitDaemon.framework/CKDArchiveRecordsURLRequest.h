/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSMutableDictionary;

@interface CKDArchiveRecordsURLRequest : CKDURLRequest {

	/*^block*/id _recordArchivedBlock;
	NSMutableDictionary* _zoneIDToRecordIDs;
	NSMutableDictionary* _recordZoneIDByRequestID;

}

@property (nonatomic,retain) NSMutableDictionary * zoneIDToRecordIDs;                    //@synthesize zoneIDToRecordIDs=_zoneIDToRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZoneIDByRequestID;              //@synthesize recordZoneIDByRequestID=_recordZoneIDByRequestID - In the implementation block
@property (nonatomic,copy) id recordArchivedBlock;                                       //@synthesize recordArchivedBlock=_recordArchivedBlock - In the implementation block
-(id)recordArchivedBlock;
-(void)setRecordArchivedBlock:(id)arg1 ;
-(id)zoneIDsToLock;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)generateRequestOperations;
-(id)requestOperationClasses;
-(NSMutableDictionary *)zoneIDToRecordIDs;
-(NSMutableDictionary *)recordZoneIDByRequestID;
-(id)initWithOperation:(id)arg1 recordIDsToArchive:(id)arg2 ;
-(void)setZoneIDToRecordIDs:(NSMutableDictionary *)arg1 ;
-(void)setRecordZoneIDByRequestID:(NSMutableDictionary *)arg1 ;
@end

