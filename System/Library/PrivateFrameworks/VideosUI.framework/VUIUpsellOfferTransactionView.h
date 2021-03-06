/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class IKViewElement, VUIUpsellOfferTransactionViewLayout, VUILabel, NSArray;

@interface VUIUpsellOfferTransactionView : UIView {

	IKViewElement* _viewElement;
	VUIUpsellOfferTransactionViewLayout* _layout;
	VUILabel* _disclaimerLabel;
	NSArray* _buttons;

}

@property (nonatomic,retain) IKViewElement * viewElement;                               //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUIUpsellOfferTransactionViewLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * disclaimerLabel;                                //@synthesize disclaimerLabel=_disclaimerLabel - In the implementation block
@property (nonatomic,retain) NSArray * buttons;                                         //@synthesize buttons=_buttons - In the implementation block
+(id)transactionViewFromElement:(id)arg1 existingView:(id)arg2 ;
-(void)setLayout:(VUIUpsellOfferTransactionViewLayout *)arg1 ;
-(NSArray *)buttons;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(VUIUpsellOfferTransactionViewLayout *)layout;
-(void)setButtons:(NSArray *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(VUILabel *)disclaimerLabel;
-(void)setDisclaimerLabel:(VUILabel *)arg1 ;
@end

