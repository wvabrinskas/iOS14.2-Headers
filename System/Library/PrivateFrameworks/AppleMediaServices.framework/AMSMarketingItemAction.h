/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, AMSBuyParams, NSString, NSNumber, NSArray, NSURL;

@interface AMSMarketingItemAction : NSObject {

	NSDictionary* _rawValues;

}

@property (nonatomic,retain) NSDictionary * rawValues;                      //@synthesize rawValues=_rawValues - In the implementation block
@property (nonatomic,readonly) AMSBuyParams * buyParams; 
@property (nonatomic,readonly) NSString * callToActionLabel; 
@property (nonatomic,readonly) NSString * disclaimerText; 
@property (nonatomic,readonly) BOOL isDefault; 
@property (nonatomic,readonly) BOOL isFamily; 
@property (nonatomic,readonly) BOOL isRecommended; 
@property (nonatomic,readonly) NSString * offerID; 
@property (nonatomic,readonly) NSNumber * price; 
@property (nonatomic,readonly) NSString * priceForDisplay; 
@property (nonatomic,readonly) NSNumber * priceDiff; 
@property (nonatomic,readonly) NSString * priceDiffForDisplay; 
@property (nonatomic,readonly) NSString * valuePropDetail; 
@property (nonatomic,readonly) NSString * valuePropInfo; 
@property (nonatomic,readonly) NSArray * serviceComponents; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSURL * url; 
-(NSDictionary *)rawValues;
-(id)_serviceComponentsFromMap:(id)arg1 withNames:(id)arg2 ;
-(id)recurringSubscriptionPeriod;
-(NSNumber *)price;
-(BOOL)isYearly;
-(NSURL *)url;
-(id)initWithDictionary:(id)arg1 ;
-(id)freeTrialPeriod;
-(NSString *)offerID;
-(BOOL)isFamily;
-(id)introOfferPrice;
-(NSArray *)serviceComponents;
-(NSString *)callToActionLabel;
-(id)name;
-(NSString *)valuePropDetail;
-(id)description;
-(void)setRawValues:(NSDictionary *)arg1 ;
-(id)_serviceNames;
-(BOOL)isDefault;
-(id)priceFormatted;
-(NSString *)valuePropInfo;
-(id)_servicesData;
-(id)dismissLabel;
-(id)introOfferPeriod;
-(NSString *)type;
-(id)introOfferPriceForDisplay;
-(NSString *)priceDiffForDisplay;
-(BOOL)isRecommended;
-(AMSBuyParams *)buyParams;
-(NSString *)disclaimerText;
-(NSNumber *)priceDiff;
-(NSString *)priceForDisplay;
-(id)priceString;
-(id)inAppID;
@end

