/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCell.h>
#import <libobjc.A.dylib/HUAccessoryViewCellProtocol.h>

@class HFItem, UIView, HUGridStatusCellLayoutOptions, HUIconView, HUGridStatusCellTextView, UIStackView, NSArray, UILabel, NSString;

@interface HUGridStatusCell : HUGridCell <HUAccessoryViewCellProtocol> {

	HFItem* _item;
	UIView* _accessoryView;
	HUGridStatusCellLayoutOptions* _statusCellLayoutOptions;
	HUIconView* _iconView;
	HUGridStatusCellTextView* _titleTextView;
	UIStackView* _descriptionStackView;
	NSArray* _layoutConstraints;
	UILabel* _largeDescriptionLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) HUIconView * iconView;                                                       //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) HUGridStatusCellTextView * titleTextView;                                    //@synthesize titleTextView=_titleTextView - In the implementation block
@property (nonatomic,retain) UIStackView * descriptionStackView;                                          //@synthesize descriptionStackView=_descriptionStackView - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                                                 //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (nonatomic,retain) UILabel * largeDescriptionLabel;                                             //@synthesize largeDescriptionLabel=_largeDescriptionLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                                  //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                                                      //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic,__weak) HUGridStatusCellLayoutOptions * statusCellLayoutOptions;              //@synthesize statusCellLayoutOptions=_statusCellLayoutOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
+(Class)layoutOptionsClass;
+(BOOL)shouldUseOutlineStyleForCategory:(unsigned long long)arg1 ;
+(id)outlineStyleBackgroundEffect;
-(HUIconView *)iconView;
-(UIView *)accessoryView;
-(void)setAccessoryView:(UIView *)arg1 ;
-(void)_updateStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)_updateLabels;
-(void)_updateBadge;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setItem:(id)arg1 ;
-(void)setIconView:(HUIconView *)arg1 ;
-(void)_invalidateConstraints;
-(id)initWithCoder:(id)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)prepareForReuse;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(HUGridStatusCellTextView *)titleTextView;
-(void)setTitleTextView:(HUGridStatusCellTextView *)arg1 ;
-(void)updateConstraints;
-(void)_updateIconAnimated:(BOOL)arg1 ;
-(unsigned long long)iconDisplayStyle;
-(void)layoutOptionsDidChange;
-(BOOL)managesOwnBackgroundViewLayout;
-(void)_setupStatusCell;
-(UILabel *)largeDescriptionLabel;
-(HUGridStatusCellLayoutOptions *)statusCellLayoutOptions;
-(void)setDescriptionStackView:(UIStackView *)arg1 ;
-(UIStackView *)descriptionStackView;
-(void)setLargeDescriptionLabel:(UILabel *)arg1 ;
-(id)_iconBadgeViewWithImage:(id)arg1 ;
-(id)_numberedBadgeViewWithValue:(long long)arg1 ;
-(void)_updateMask;
-(void)setStatusCellLayoutOptions:(HUGridStatusCellLayoutOptions *)arg1 ;
@end

