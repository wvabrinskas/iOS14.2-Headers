/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVMLKit/TVMLKit-Structs.h>
@class NSAttributedString;

@interface _TVStarBar : NSObject {

	unsigned long long _numStars;
	double _value;
	NSAttributedString* _countStr;
	double _barWidth;
	double _height;
	UIEdgeInsets _barMargin;

}

@property (assign,nonatomic) unsigned long long numStars;                //@synthesize numStars=_numStars - In the implementation block
@property (assign,nonatomic) double value;                               //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSAttributedString * countStr;              //@synthesize countStr=_countStr - In the implementation block
@property (assign,nonatomic) double barWidth;                            //@synthesize barWidth=_barWidth - In the implementation block
@property (assign,nonatomic) double height;                              //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) UIEdgeInsets barMargin;                     //@synthesize barMargin=_barMargin - In the implementation block
-(double)height;
-(void)setHeight:(double)arg1 ;
-(double)barWidth;
-(double)value;
-(void)setValue:(double)arg1 ;
-(void)setBarWidth:(double)arg1 ;
-(unsigned long long)numStars;
-(void)setNumStars:(unsigned long long)arg1 ;
-(NSAttributedString *)countStr;
-(void)setCountStr:(NSAttributedString *)arg1 ;
-(UIEdgeInsets)barMargin;
-(void)setBarMargin:(UIEdgeInsets)arg1 ;
@end
