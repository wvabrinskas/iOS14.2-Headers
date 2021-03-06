/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TSUBasicProgressStorage : NSObject {

	double mValue;
	double mMaxValue;
	BOOL mIndeterminate;

}

@property (assign) double value; 
@property (assign) double maxValue; 
@property (getter=isIndeterminate) BOOL indeterminate; 
-(double)value;
-(double)maxValue;
-(void)setValue:(double)arg1 ;
-(void)setIndeterminate:(BOOL)arg1 ;
-(void)setMaxValue:(double)arg1 ;
-(BOOL)isIndeterminate;
@end

