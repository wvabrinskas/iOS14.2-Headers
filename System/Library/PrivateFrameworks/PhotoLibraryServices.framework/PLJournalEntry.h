/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLJournalEntryPayloadID, PLJournalEntryPayload;
@class PLJournalEntryHeader, NSPersistentHistoryToken;

@interface PLJournalEntry : NSObject {

	id<PLJournalEntryPayloadID> _payloadID;
	id<PLJournalEntryPayload> _payload;
	PLJournalEntryHeader* _header;
	NSPersistentHistoryToken* _historyToken;

}

@property (nonatomic,retain) id<PLJournalEntryPayloadID> payloadID;                //@synthesize payloadID=_payloadID - In the implementation block
@property (assign,nonatomic) unsigned payloadVersion; 
@property (nonatomic,retain) PLJournalEntryHeader * header;                        //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSPersistentHistoryToken * historyToken;              //@synthesize historyToken=_historyToken - In the implementation block
@property (nonatomic,retain) id<PLJournalEntryPayload> payload;                    //@synthesize payload=_payload - In the implementation block
-(id<PLJournalEntryPayload>)payload;
-(NSPersistentHistoryToken *)historyToken;
-(void)setPayload:(id<PLJournalEntryPayload>)arg1 ;
-(id)initWithPayloadID:(id)arg1 payload:(id)arg2 entryType:(int)arg3 ;
-(id)initForDeleteWithPayloadID:(id)arg1 ;
-(void)setPayloadVersion:(unsigned)arg1 ;
-(BOOL)_readFromFileHandle:(id)arg1 decodePayload:(BOOL)arg2 payloadClass:(Class)arg3 error:(id*)arg4 ;
-(void)writeBytes:(const void*)arg1 length:(unsigned long long)arg2 toFileHandle:(id)arg3 ;
-(id)descriptionWithBuilder:(id)arg1 ;
-(void)setHeader:(PLJournalEntryHeader *)arg1 ;
-(BOOL)readFromFileHandle:(id)arg1 decodePayload:(BOOL)arg2 payloadClass:(Class)arg3 entryOffset:(unsigned long long*)arg4 error:(id*)arg5 ;
-(void)_appendHeaderData:(id)arg1 headerCRC:(unsigned short)arg2 payloadData:(id)arg3 toFileHandle:(id)arg4 ;
-(void)appendHeaderData:(id)arg1 headerCRC:(unsigned short)arg2 payloadData:(id)arg3 toFileHandle:(id)arg4 ;
-(BOOL)writeToFileHandle:(id)arg1 error:(id*)arg2 ;
-(PLJournalEntryHeader *)header;
-(void)setPayloadID:(id<PLJournalEntryPayloadID>)arg1 ;
-(id<PLJournalEntryPayloadID>)payloadID;
-(id)init;
-(id)debugDescription;
-(unsigned)payloadVersion;
-(void)setHistoryToken:(NSPersistentHistoryToken *)arg1 ;
-(id)description;
-(id)initForUpdateWithPayload:(id)arg1 ;
-(unsigned long long)entryType;
-(id)initForInsertWithPayload:(id)arg1 ;
@end
