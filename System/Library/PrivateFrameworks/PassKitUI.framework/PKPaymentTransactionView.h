/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, UIColor, NSString, UIImage, CNAvatarView, NSAttributedString;

@interface PKPaymentTransactionView : UIView {

	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UILabel* _tertiaryLabel;
	UILabel* _rewardsAmountLabel;
	UILabel* _transactionValueLabel;
	UIImageView* _primaryImageView;
	UIImageView* _disclosureView;
	BOOL _isTemplateLayout;
	BOOL _hideRewardsBackground;
	BOOL _showsAvatarView;
	BOOL _showsDisclosureView;
	BOOL _allowPrimaryStringExpansion;
	BOOL _strokeImage;
	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	NSString* _primaryString;
	NSString* _secondaryString;
	NSString* _tertiaryString;
	UIImage* _primaryImage;
	CNAvatarView* _avatarView;

}

@property (nonatomic,retain) UIColor * primaryColor;                                           //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryColor;                                         //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (nonatomic,retain) NSString * primaryString;                                         //@synthesize primaryString=_primaryString - In the implementation block
@property (nonatomic,retain) NSString * secondaryString;                                       //@synthesize secondaryString=_secondaryString - In the implementation block
@property (nonatomic,retain) NSString * tertiaryString;                                        //@synthesize tertiaryString=_tertiaryString - In the implementation block
@property (nonatomic,retain) NSAttributedString * transactionValueAttributedText; 
@property (nonatomic,retain) NSString * rewardsValueString; 
@property (assign,nonatomic) BOOL hideRewardsBackground;                                       //@synthesize hideRewardsBackground=_hideRewardsBackground - In the implementation block
@property (assign,nonatomic) BOOL showsAvatarView;                                             //@synthesize showsAvatarView=_showsAvatarView - In the implementation block
@property (assign,nonatomic) BOOL showsDisclosureView;                                         //@synthesize showsDisclosureView=_showsDisclosureView - In the implementation block
@property (assign,nonatomic) BOOL allowPrimaryStringExpansion;                                 //@synthesize allowPrimaryStringExpansion=_allowPrimaryStringExpansion - In the implementation block
@property (nonatomic,retain) UIImage * primaryImage;                                           //@synthesize primaryImage=_primaryImage - In the implementation block
@property (assign,nonatomic) BOOL strokeImage;                                                 //@synthesize strokeImage=_strokeImage - In the implementation block
@property (nonatomic,readonly) CNAvatarView * avatarView;                                      //@synthesize avatarView=_avatarView - In the implementation block
+(id)defaultTertiaryLabelFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateImageViewDynamicColors;
-(BOOL)_shouldUseStackedLayout;
-(double)_defaultLayoutHeight;
-(void)_updatePrimaryLabelString;
-(void)setHideRewardsBackground:(BOOL)arg1 ;
-(NSString *)rewardsValueString;
-(NSAttributedString *)transactionValueAttributedText;
-(BOOL)shouldShowTransactionPreviewForTouchAtPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(BOOL)hideRewardsBackground;
-(BOOL)showsDisclosureView;
-(BOOL)allowPrimaryStringExpansion;
-(BOOL)strokeImage;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)createSubviews;
-(void)setPrimaryImage:(UIImage *)arg1 ;
-(UIImage *)primaryImage;
-(UIColor *)primaryColor;
-(void)setTertiaryString:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)resetFonts;
-(void)setSecondaryString:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setStrokeImage:(BOOL)arg1 ;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(CNAvatarView *)avatarView;
-(id)_disclosureView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(id)defaultPrimaryColor;
-(id)defaultSecondaryColor;
-(void)setRewardsValueString:(NSString *)arg1 ;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(void)setPrimaryString:(NSString *)arg1 ;
-(void)_updateAvatarView;
-(void)setShowsAvatarView:(BOOL)arg1 ;
-(BOOL)showsAvatarView;
-(UIColor *)secondaryColor;
-(NSString *)secondaryString;
-(NSString *)primaryString;
-(void)setPrimaryImage:(id)arg1 animated:(BOOL)arg2 ;
-(NSString *)tertiaryString;
-(void)setTransactionValueAttributedText:(NSAttributedString *)arg1 ;
-(void)setShowsDisclosureView:(BOOL)arg1 ;
-(void)setAllowPrimaryStringExpansion:(BOOL)arg1 ;
@end

