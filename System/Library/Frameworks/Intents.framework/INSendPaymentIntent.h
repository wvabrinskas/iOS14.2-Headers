/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSendPaymentIntentExport.h>

@class INPerson, INCurrencyAmount, NSString;

@interface INSendPaymentIntent : INIntent <INSendPaymentIntentExport>

@property (nonatomic,copy,readonly) INPerson * payee; 
@property (nonatomic,copy,readonly) INCurrencyAmount * currencyAmount; 
@property (nonatomic,copy,readonly) NSString * note; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(INPerson *)payee;
-(void)_setMetadata:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)initWithPayee:(id)arg1 currencyAmount:(id)arg2 note:(id)arg3 ;
-(void)setVerb:(id)arg1 ;
-(void)setNote:(NSString *)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(BOOL)_isUserConfirmationRequired;
-(void)setPayee:(INPerson *)arg1 ;
-(NSString *)note;
-(id)domain;
-(BOOL)configureAttributeSet:(id)arg1 includingData:(BOOL)arg2 ;
-(INCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(INCurrencyAmount *)arg1 ;
@end

