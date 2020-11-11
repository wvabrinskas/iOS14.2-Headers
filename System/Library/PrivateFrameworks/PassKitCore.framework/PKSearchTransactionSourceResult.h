/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKSearchAutocompleteToken.h>

@class NSString;

@interface PKSearchTransactionSourceResult : NSObject <PKSearchAutocompleteToken> {

	unsigned long long _transactionSource;

}

@property (assign,nonatomic) unsigned long long transactionSource;              //@synthesize transactionSource=_transactionSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)tokenType;
-(unsigned long long)transactionSource;
-(void)setTransactionSource:(unsigned long long)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
