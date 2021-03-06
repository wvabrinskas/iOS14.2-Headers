/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSIndexPath, NSString;

@interface UICollectionViewPlaceholder : NSObject {

	NSIndexPath* _insertionIndexPath;
	NSString* _cellReuseIdentifier;
	/*^block*/id _cellUpdateHandler;

}

@property (nonatomic,retain) NSIndexPath * insertionIndexPath;              //@synthesize insertionIndexPath=_insertionIndexPath - In the implementation block
@property (nonatomic,copy) NSString * cellReuseIdentifier;                  //@synthesize cellReuseIdentifier=_cellReuseIdentifier - In the implementation block
@property (nonatomic,copy) id cellUpdateHandler;                            //@synthesize cellUpdateHandler=_cellUpdateHandler - In the implementation block
-(id)cellUpdateHandler;
-(id)initWithInsertionIndexPath:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setCellUpdateHandler:(id)arg1 ;
-(void)setInsertionIndexPath:(NSIndexPath *)arg1 ;
-(void)setCellReuseIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)cellReuseIdentifier;
-(NSIndexPath *)insertionIndexPath;
@end

