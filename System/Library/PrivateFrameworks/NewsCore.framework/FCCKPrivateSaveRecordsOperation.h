/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray;

@interface FCCKPrivateSaveRecordsOperation : FCCKPrivateDatabaseOperation {

	NSArray* _recordsToSave;
	long long _savePolicy;
	/*^block*/id _saveRecordsCompletionBlock;
	NSArray* _resultSavedRecords;

}

@property (nonatomic,retain) NSArray * resultSavedRecords;              //@synthesize resultSavedRecords=_resultSavedRecords - In the implementation block
@property (nonatomic,copy) NSArray * recordsToSave;                     //@synthesize recordsToSave=_recordsToSave - In the implementation block
@property (assign,nonatomic) long long savePolicy;                      //@synthesize savePolicy=_savePolicy - In the implementation block
@property (nonatomic,copy) id saveRecordsCompletionBlock;               //@synthesize saveRecordsCompletionBlock=_saveRecordsCompletionBlock - In the implementation block
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setSavePolicy:(long long)arg1 ;
-(NSArray *)recordsToSave;
-(NSArray *)resultSavedRecords;
-(id)saveRecordsCompletionBlock;
-(void)setResultSavedRecords:(NSArray *)arg1 ;
-(void)setSaveRecordsCompletionBlock:(id)arg1 ;
-(long long)savePolicy;
-(void)setRecordsToSave:(NSArray *)arg1 ;
@end
