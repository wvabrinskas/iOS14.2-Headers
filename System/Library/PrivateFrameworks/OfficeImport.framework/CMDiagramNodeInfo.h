/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@interface CMDiagramNodeInfo : NSObject {

	int mTreeDepth;
	int mRow;
	ODIHRange mXRange;
	BOOL mConnectToVerticalSide;
	int mExtraRowsBetweenParentAndSelf;
	float mXOffsetRelativeToParent;
	ODIHRangeVector* mXRanges;

}
-(id)init;
-(void)setRow:(int)arg1 ;
-(ODIHRange)xRange;
-(int)row;
-(ODIHRangeVector*)xRanges;
-(void)dealloc;
-(void)setXRange:(ODIHRange)arg1 ;
-(int)treeDepth;
-(void)setTreeDepth:(int)arg1 ;
-(BOOL)connectToVerticalSide;
-(void)setConnectToVerticalSide:(BOOL)arg1 ;
-(int)extraRowsBetweenParentAndSelf;
-(void)setExtraRowsBetweenParentAndSelf:(int)arg1 ;
-(float)xOffsetRelativeToParent;
-(void)setXOffsetRelativeToParent:(float)arg1 ;
-(void)addToXOffsetRelativeToParent:(float)arg1 ;
@end

