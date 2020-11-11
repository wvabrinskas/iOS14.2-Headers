/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDiagramShapeMapper.h>

@interface CMDiagramListMapper : CMDiagramShapeMapper {

	float mMaxLineCount;

}
-(CGSize)textSize;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(void)mapChildrenAt:(id)arg1 withState:(id)arg2 ;
-(float)setFonSizeForChildNode:(id)arg1 atIndex:(unsigned long long)arg2 level:(int)arg3 ;
-(CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDefaultFonSize;
-(void)mapListItemAt:(id)arg1 index:(unsigned long long)arg2 withState:(id)arg3 ;
-(id)suggestedBoundsForHListItemWithIndex:(unsigned long long)arg1 ;
@end
