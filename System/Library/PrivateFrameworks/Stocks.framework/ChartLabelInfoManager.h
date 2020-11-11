/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Stocks/Stocks-Structs.h>
@class ChartLabelInfo, NSMutableArray;

@interface ChartLabelInfoManager : NSObject {

	ChartLabelInfo* _yAxisLabelInfo;
	NSMutableArray* _monthLabelInfoArrays;
	NSMutableArray* _integerLabelInfoArray;
	BOOL _use24hrTime;

}
+(void)clearSharedManager;
+(id)sharedLabelInfoManager;
+(CFStringRef)_CFDateFormatterPropertyForMonthLabelLength:(long long)arg1 ;
+(id)chartLabelFont;
-(id)init;
-(id)labelInfoForYAxis;
-(BOOL)use24hrTime;
-(id)labelInfoWithUnsignedInteger:(unsigned long long)arg1 ;
-(void)resetLocale;
-(void)dealloc;
-(id)monthLabelInfoArrayForLabelLength:(long long)arg1 ;
-(id)labelInfoWithString:(id)arg1 ;
@end
