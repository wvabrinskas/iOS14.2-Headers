/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CHDChart, CHDFormula, EDString, OADGraphicProperties;

@interface CHDTitle : NSObject {

	CHDChart* mChart;
	BOOL mIsAutoGenerated;
	BOOL mPositionAutoGenerated;
	BOOL mSizeAutoGenerated;
	BOOL mIsOverlay;
	CHDFormula* mName;
	EDString* mLastCachedName;
	OADGraphicProperties* mGraphicProperties;
	double mRotation;

}
-(id)name;
-(id)description;
-(void)setIsOverlay:(BOOL)arg1 ;
-(BOOL)isOverlay;
-(void)setName:(id)arg1 ;
-(id)graphicProperties;
-(id)lastCachedName;
-(id)initWithChart:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setIsAutoGenerated:(BOOL)arg1 ;
-(void)setLastCachedName:(id)arg1 ;
-(void)setIsPositionAutoGenerated:(BOOL)arg1 ;
-(void)setTitleRotationAngle:(double)arg1 ;
-(BOOL)isAutoSizeAndPosition;
-(BOOL)isSizeAutoGenerated;
-(BOOL)isCachedTitleEmpty;
-(BOOL)isPositionAutoGenerated;
-(BOOL)isTitleVisible;
-(double)titleRotationAngle;
-(BOOL)isAutoGenerated;
-(void)setIsSizeAutoGenerated:(BOOL)arg1 ;
@end

