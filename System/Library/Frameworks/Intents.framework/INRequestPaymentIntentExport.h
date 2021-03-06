/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INPerson, INCurrencyAmount, NSString;


@protocol INRequestPaymentIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INPerson * payer; 
@property (nonatomic,copy) INCurrencyAmount * currencyAmount; 
@property (nonatomic,copy) NSString * note; 
@required
-(INPerson *)payer;
-(id)init;
-(void)setNote:(id)arg1;
-(NSString *)note;
-(void)setPayer:(id)arg1;
-(INCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(id)arg1;

@end

