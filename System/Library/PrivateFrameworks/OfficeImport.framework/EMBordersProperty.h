/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMProperty.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OITSUColor;

@interface EMBordersProperty : CMProperty <NSCopying> {

	OITSUColor* mBorderColor;
	OITSUColor* mBorderTopColor;
	OITSUColor* mBorderLeftColor;
	OITSUColor* mBorderBottomColor;
	OITSUColor* mBorderRightColor;
	int mBorderStyle[5];
	int mBorderWidth[5];

}
-(id)borderColor;
-(id)colorString;
-(BOOL)isEqual:(id)arg1 ;
-(id)styleString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int*)borderWidths;
-(id)cssStringForName:(id)arg1 ;
-(id)initWithOADStroke:(id)arg1 ;
-(id)cssString;
-(id)widthString;
-(id)stringFromStyleEnum:(int)arg1 ;
-(id)stringFromWidthEnum:(int)arg1 ;
-(id)stringFromColor:(id)arg1 ;
-(BOOL)isNoneAtLocation:(int)arg1 ;
-(void)setNoneAtLocation:(int)arg1 ;
-(BOOL)hasSameColorsAs:(id)arg1 ;
-(BOOL)hasSameStylesAs:(id)arg1 ;
-(BOOL)hasSameWidthsAs:(id)arg1 ;
-(void)setBorderStyleAndWidth:(int)arg1 location:(unsigned)arg2 ;
-(id)initWithEDBorders:(id)arg1 ;
-(int*)borderStyles;
-(id)styleHashNumber;
-(id)widthHashNumber;
@end

