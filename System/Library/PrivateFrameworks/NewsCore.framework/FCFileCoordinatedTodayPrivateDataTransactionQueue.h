/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPrivateDataTransactionQueue : NSObject {

	FCFileCoordinatedDictionary* _fileCoordinatedDictionary;

}

@property (nonatomic,retain) FCFileCoordinatedDictionary * fileCoordinatedDictionary;              //@synthesize fileCoordinatedDictionary=_fileCoordinatedDictionary - In the implementation block
-(void)setFileCoordinatedDictionary:(FCFileCoordinatedDictionary *)arg1 ;
-(id)init;
-(id)initWithFileURL:(id)arg1 ;
-(void)peekAtTransactionsWithCompletion:(/*^block*/id)arg1 ;
-(void)enqueueTransaction:(id)arg1 withMaxTransactionCount:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(FCFileCoordinatedDictionary *)fileCoordinatedDictionary;
-(void)dequeueTransactionsWithCompletion:(/*^block*/id)arg1 ;
@end
