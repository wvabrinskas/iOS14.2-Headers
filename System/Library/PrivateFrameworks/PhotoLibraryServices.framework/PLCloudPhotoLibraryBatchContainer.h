/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CPLChangeBatch;

@interface PLCloudPhotoLibraryBatchContainer : NSObject {

	BOOL _wasSplit;
	BOOL _reachedMinSplit;
	BOOL _wasFixed;
	CPLChangeBatch* _batch;
	unsigned long long _retryCount;

}

@property (nonatomic,retain) CPLChangeBatch * batch;                     //@synthesize batch=_batch - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;              //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) BOOL wasSplit;                              //@synthesize wasSplit=_wasSplit - In the implementation block
@property (assign,nonatomic) BOOL reachedMinSplit;                       //@synthesize reachedMinSplit=_reachedMinSplit - In the implementation block
@property (assign,nonatomic) BOOL wasFixed;                              //@synthesize wasFixed=_wasFixed - In the implementation block
-(CPLChangeBatch *)batch;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)retryCount;
-(id)init;
-(void)setWasFixed:(BOOL)arg1 ;
-(id)batchesSplitForError;
-(void)incrementRetryCount;
-(unsigned long long)count;
-(id)description;
-(void)addRecord:(id)arg1 ;
-(void)setBatch:(CPLChangeBatch *)arg1 ;
-(BOOL)wasSplit;
-(BOOL)wasFixed;
-(id)lastAddedRecord;
-(void)setWasSplit:(BOOL)arg1 ;
-(BOOL)reachedMinSplit;
-(void)setReachedMinSplit:(BOOL)arg1 ;
@end
