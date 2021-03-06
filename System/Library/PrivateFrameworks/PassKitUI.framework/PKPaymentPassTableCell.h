/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSTableCell.h>

@protocol PKPaymentPassTableCellDelegate;
@class PKPaymentApplication, UIActivityIndicatorView, PKPassView, UIImageView, CALayer, PKPaymentPass, UILabel, UIControl, PKPassFaceViewRendererState;

@interface PKPaymentPassTableCell : PSTableCell {

	PKPaymentApplication* _paymentApplication;
	long long _settingsContext;
	unsigned _snapshotCounter;
	UIActivityIndicatorView* _snapshotSpinner;
	PKPassView* _passView;
	UIImageView* _cardSnapshotView;
	CALayer* _cardSnapshotMask;
	UIActivityIndicatorView* _spinner;
	BOOL _showState;
	BOOL _showSubTitle;
	BOOL _showAddButton;
	PKPaymentPass* _pass;
	id<PKPaymentPassTableCellDelegate> _delegate;
	UILabel* _mainLabel;
	UILabel* _subTextLabel;
	UIControl* _actionButton;

}

@property (nonatomic,retain,readonly) PKPaymentPass * pass;                                   //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic) BOOL showSubTitle;                                               //@synthesize showSubTitle=_showSubTitle - In the implementation block
@property (assign,nonatomic) BOOL showAddButton;                                              //@synthesize showAddButton=_showAddButton - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentPassTableCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UILabel * mainLabel;                                           //@synthesize mainLabel=_mainLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subTextLabel;                                        //@synthesize subTextLabel=_subTextLabel - In the implementation block
@property (nonatomic,readonly) UIControl * actionButton;                                      //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,readonly) PKPassFaceViewRendererState * rendererState; 
+(double)heightForCellWithMinimum:(double)arg1 hasSubTitle:(BOOL)arg2 ;
+(id)subTitleFont;
+(id)titleFont;
-(void)setSpecifier:(id)arg1 ;
-(void)tintColorDidChange;
-(id<PKPaymentPassTableCellDelegate>)delegate;
-(UIControl *)actionButton;
-(id)_stringForPassState:(unsigned long long)arg1 ;
-(void)_updateSubtitleColorWithSpecifier:(id)arg1 ;
-(void)_verifyButtonPressed:(id)arg1 ;
-(void)setPass:(id)arg1 passView:(id)arg2 ;
-(void)disableAddButton;
-(BOOL)showSubTitle;
-(void)setShowSubTitle:(BOOL)arg1 ;
-(BOOL)showAddButton;
-(void)setShowAddButton:(BOOL)arg1 ;
-(UILabel *)subTextLabel;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(void)setDelegate:(id<PKPaymentPassTableCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(PKPassFaceViewRendererState *)rendererState;
-(UILabel *)mainLabel;
-(void)updateSubtitleForTransitProperties;
-(void)updateSubtitle;
-(PKPaymentPass *)pass;
-(void)showActivitySpinner:(BOOL)arg1 ;
-(void)dealloc;
-(void)_addButtonPressed:(id)arg1 ;
@end

