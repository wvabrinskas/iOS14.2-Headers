/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSDictionary, NSSQLSavePlan, NSFaultHandler, NSArray, NSSet, NSMutableDictionary, NSString, NSSQLRowCache, NSSQLModel, NSSaveChangesRequest;

@interface NSSQLSaveChangesRequestContext : NSSQLStoreRequestContext {

	NSDictionary* _metadataToWrite;
	NSSQLSavePlan* _savePlan;
	NSFaultHandler* _faultHandler;
	NSArray* _objectIDsInsertUpdatedToPruneDATrigger;
	NSArray* _objectIDsUpdatedToPruneDATrigger;
	NSSet* _objectIDsToPruneTrigger;
	NSMutableDictionary* _originalCachedRows;
	NSMutableDictionary* _updateMasksForHistoryTracking;
	NSString* _externalDataReferencesDirectory;
	NSString* _externalDataLinksDirectory;
	NSString* _fileBackedFuturesDirectory;
	NSSQLRowCache* _primaryRowCache;
	NSSQLRowCache* _contextGenerationRowCache;

}

@property (nonatomic,readonly) NSDictionary * metadataToWrite;                          //@synthesize metadataToWrite=_metadataToWrite - In the implementation block
@property (nonatomic,readonly) NSSQLSavePlan * savePlan;                                //@synthesize savePlan=_savePlan - In the implementation block
@property (nonatomic,readonly) NSSQLModel * model; 
@property (nonatomic,readonly) NSSaveChangesRequest * request; 
@property (nonatomic,readonly) NSFaultHandler * faultHandler;                           //@synthesize faultHandler=_faultHandler - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * originalCachedRows;                //@synthesize originalCachedRows=_originalCachedRows - In the implementation block
@property (nonatomic,readonly) NSString * externalDataReferencesDirectory;              //@synthesize externalDataReferencesDirectory=_externalDataReferencesDirectory - In the implementation block
@property (nonatomic,readonly) NSString * externalDataLinksDirectory;                   //@synthesize externalDataLinksDirectory=_externalDataLinksDirectory - In the implementation block
@property (nonatomic,readonly) NSString * fileBackedFuturesDirectory;                   //@synthesize fileBackedFuturesDirectory=_fileBackedFuturesDirectory - In the implementation block
-(NSFaultHandler *)faultHandler;
-(NSString *)fileBackedFuturesDirectory;
-(NSSQLModel *)model;
-(NSSaveChangesRequest *)request;
-(void)addDataMask:(id)arg1 forEntityKey:(id)arg2 ;
-(NSDictionary *)metadataToWrite;
-(NSString *)externalDataLinksDirectory;
-(id)contextRowCache;
-(NSSQLSavePlan *)savePlan;
-(BOOL)hasChangesForWriting;
-(id)rowCache;
-(id)originalRowForObjectID:(id)arg1 ;
-(void)executeEpilogue;
-(id)dataMaskForKey:(id)arg1 ;
-(NSMutableDictionary *)originalCachedRows;
-(void)executePrologue;
-(BOOL)isWritingRequest;
-(void)setOriginalRow:(id)arg1 forObjectID:(id)arg2 ;
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(NSString *)externalDataReferencesDirectory;
-(void)dealloc;
@end

