/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDecimalNumber, NSString;


@protocol INCurrencyAmountExport <NSObject,JSExport>
@property (nonatomic,copy) NSDecimalNumber * amount; 
@property (nonatomic,copy) NSString * currencyCode; 
@required
-(NSString *)currencyCode;
-(id)init;
-(NSDecimalNumber *)amount;
-(void)setCurrencyCode:(id)arg1;
-(void)setAmount:(id)arg1;

@end
