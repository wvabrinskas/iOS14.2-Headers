/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface EDPivotFieldItem : NSObject {

	BOOL mChildItems;
	BOOL mExpanded;
	BOOL mCalculatedMember;
	BOOL mMissed;
	BOOL mHidden;
	BOOL mDetailsHidden;
	int mType;
	unsigned long long mItemIndex;

}
+(id)pivotFieldItem;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)childItems;
-(id)init;
-(BOOL)expanded;
-(void)setItemIndex:(unsigned long long)arg1 ;
-(BOOL)missed;
-(BOOL)hidden;
-(void)setType:(int)arg1 ;
-(void)setMissed:(BOOL)arg1 ;
-(id)description;
-(int)type;
-(void)setHidden:(BOOL)arg1 ;
-(void)setChildItems:(BOOL)arg1 ;
-(unsigned long long)itemIndex;
-(BOOL)calculatedMember;
-(void)setCalculatedMember:(BOOL)arg1 ;
-(BOOL)detailsHidden;
-(void)setDetailsHidden:(BOOL)arg1 ;
@end

