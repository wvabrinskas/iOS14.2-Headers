/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>
#import <libobjc.A.dylib/PKPaymentTransactionCellResponder.h>

@class NSString, PKPaymentTransactionView, UIColor;

@interface PKPaymentTransactionTableCell : PKTableViewCell <PKPaymentTransactionCellResponder> {

	NSString* _identifier;
	PKPaymentTransactionView* _transactionView;

}

@property (nonatomic,retain) UIColor * primaryColor; 
@property (nonatomic,retain) UIColor * secondaryColor; 
@property (nonatomic,copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) PKPaymentTransactionView * transactionView;              //@synthesize transactionView=_transactionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)identifier;
-(UIColor *)primaryColor;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(UIColor *)secondaryColor;
-(void)prepareForReuse;
-(PKPaymentTransactionView *)transactionView;
@end
