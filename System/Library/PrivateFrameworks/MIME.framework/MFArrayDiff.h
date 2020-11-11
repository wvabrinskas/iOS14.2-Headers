/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSIndexSet;

@interface MFArrayDiff : NSObject {

	NSIndexSet* _commonIndexes;
	NSIndexSet* _addedIndexes;
	NSIndexSet* _removedIndexes;

}

@property (nonatomic,retain) NSIndexSet * commonIndexes;               //@synthesize commonIndexes=_commonIndexes - In the implementation block
@property (nonatomic,retain) NSIndexSet * addedIndexes;                //@synthesize addedIndexes=_addedIndexes - In the implementation block
@property (nonatomic,retain) NSIndexSet * removedIndexes;              //@synthesize removedIndexes=_removedIndexes - In the implementation block
-(id)debugDescription;
-(NSIndexSet *)removedIndexes;
-(NSIndexSet *)addedIndexes;
-(NSIndexSet *)commonIndexes;
-(void)setCommonIndexes:(NSIndexSet *)arg1 ;
-(void)setAddedIndexes:(NSIndexSet *)arg1 ;
-(void)setRemovedIndexes:(NSIndexSet *)arg1 ;
@end
