/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDecimalNumber, NSDate, PKCurrencyAmount;

@interface PKPaymentBalance : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isPrimary;
	NSString* _identifier;
	NSDecimalNumber* _value;
	NSString* _currencyCode;
	long long _exponent;
	NSString* _localizedTitle;
	NSString* _localizedDescription;
	NSDate* _lastUpdateDate;
	NSString* _preformattedString;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * value;                           //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                           //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,readonly) PKCurrencyAmount * currencyValue; 
@property (nonatomic,readonly) BOOL isCurrency; 
@property (assign,nonatomic) long long exponent;                              //@synthesize exponent=_exponent - In the implementation block
@property (nonatomic,readonly) NSString * formattedValue; 
@property (nonatomic,copy) NSString * localizedTitle;                         //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;                   //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (assign,nonatomic) BOOL isPrimary;                                  //@synthesize isPrimary=_isPrimary - In the implementation block
@property (nonatomic,copy) NSDate * lastUpdateDate;                           //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
@property (nonatomic,copy) NSString * preformattedString;                     //@synthesize preformattedString=_preformattedString - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isPrimary;
-(NSString *)currencyCode;
-(NSDate *)lastUpdateDate;
-(NSString *)localizedTitle;
-(NSString *)localizedDescription;
-(unsigned long long)hash;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(BOOL)isCurrency;
-(NSString *)preformattedString;
-(void)_setValueWithRounding:(id)arg1 ;
-(PKCurrencyAmount *)currencyValue;
-(id)initWithIdentifier:(id)arg1 forCurrencyAmount:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 forValue:(id)arg2 roundingToExponent:(long long)arg3 ;
-(void)setPreformattedString:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(NSString *)identifier;
-(void)setIsPrimary:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)exponent;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDecimalNumber *)value;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSString *)formattedValue;
-(void)setValue:(NSDecimalNumber *)arg1 ;
-(void)setExponent:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

