/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class PKPaymentPassActionWidgetView;

@interface PKPassDetailButtonsCell : PKTableViewCell {

	PKPaymentPassActionWidgetView* _widgetView;

}
-(void)setCurrentUser:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 widgetViewStyle:(unsigned long long)arg2 ;
-(void)setPeerPaymentAccount:(id)arg1 ;
-(void)setPaymentPass:(id)arg1 ;
@end
