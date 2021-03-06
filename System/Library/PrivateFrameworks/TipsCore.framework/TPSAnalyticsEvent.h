/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TPSAnalyticsDataProvider, NSDate, NSString;

@interface TPSAnalyticsEvent : NSObject <NSSecureCoding> {

	TPSAnalyticsDataProvider* _dataProvider;
	NSDate* _date;
	NSString* _deliveryInfoVersion;

}

@property (assign,nonatomic,__weak) TPSAnalyticsDataProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,copy) NSDate * date;                                                 //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * deliveryInfoVersion;                                //@synthesize deliveryInfoVersion=_deliveryInfoVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(id)eventName;
-(void)setDate:(NSDate *)arg1 ;
-(void)setDataProvider:(TPSAnalyticsDataProvider *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(id)_discoverabilityStream;
-(NSDate *)date;
-(void)log;
-(TPSAnalyticsDataProvider *)dataProvider;
-(void)persistKeys;
-(id)duetEvent;
-(id)mutableAnalyticsEventRepresentation;
-(id)analyticsEventRepresentation;
-(void)setDeliveryInfoVersion:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)deliveryInfoVersion;
@end

