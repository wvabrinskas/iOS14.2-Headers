/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NWMDataFormatter.h>

@class NSNumberFormatter, NSString;

@interface NWMPrecipitationFormatter : NSObject <NWMDataFormatter> {

	NSNumberFormatter* _numberFormatter;
	NSNumberFormatter* _percentageFormatter;

}

@property (nonatomic,retain) NSNumberFormatter * numberFormatter;                  //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * percentageFormatter;              //@synthesize percentageFormatter=_percentageFormatter - In the implementation block
@property (nonatomic,readonly) NSString * percentSymbol; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedFormatter;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(NSString *)percentSymbol;
-(double)value:(id)arg1 ;
-(NSNumberFormatter *)percentageFormatter;
-(void)setPercentageFormatter:(NSNumberFormatter *)arg1 ;
-(id)formattedChanceOfPrecipitation:(id)arg1 style:(unsigned long long)arg2 shouldIncludePercentSymbol:(BOOL)arg3 ;
-(id)formattedChanceOfPrecipitation:(id)arg1 shouldIncludePercentSymbol:(BOOL)arg2 ;
@end

