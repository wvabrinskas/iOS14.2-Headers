/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>

@protocol VUISeasonPickerButtonDelegate;
@class NSArray, VUILabel, _TVImageView, VUITextLayout, NSString;

@interface VUISeasonPickerButton : UIControl <UIContextMenuInteractionDelegate> {

	NSArray* _seasonTitles;
	id<VUISeasonPickerButtonDelegate> _delegate;
	unsigned long long _currentIndex;
	VUILabel* _currentLabel;
	VUILabel* _altLabel;
	_TVImageView* _chevronDownImageView;
	VUITextLayout* _buttonTextLayout;
	NSArray* _actions;

}

@property (assign,nonatomic) unsigned long long currentIndex;                                //@synthesize currentIndex=_currentIndex - In the implementation block
@property (nonatomic,retain) VUILabel * currentLabel;                                        //@synthesize currentLabel=_currentLabel - In the implementation block
@property (nonatomic,retain) VUILabel * altLabel;                                            //@synthesize altLabel=_altLabel - In the implementation block
@property (nonatomic,retain) _TVImageView * chevronDownImageView;                            //@synthesize chevronDownImageView=_chevronDownImageView - In the implementation block
@property (nonatomic,retain) VUITextLayout * buttonTextLayout;                               //@synthesize buttonTextLayout=_buttonTextLayout - In the implementation block
@property (nonatomic,copy) NSArray * actions;                                                //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) NSArray * seasonTitles;                                         //@synthesize seasonTitles=_seasonTitles - In the implementation block
@property (assign,nonatomic,__weak) id<VUISeasonPickerButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configureWithExistingView:(id)arg1 ;
-(unsigned long long)currentIndex;
-(void)setActions:(NSArray *)arg1 ;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(id)init;
-(id<VUISeasonPickerButtonDelegate>)delegate;
-(VUILabel *)currentLabel;
-(void)setCurrentLabel:(VUILabel *)arg1 ;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
-(void)setDelegate:(id<VUISeasonPickerButtonDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_buttonTapped:(id)arg1 ;
-(VUILabel *)altLabel;
-(NSArray *)actions;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(NSArray *)seasonTitles;
-(void)_updateLabelsWithSeasonTitles:(id)arg1 ;
-(void)setChevronDownImageView:(_TVImageView *)arg1 ;
-(BOOL)_contextMenuDropDownIsEnabled;
-(void)_setActionsWithSeasonTitles:(id)arg1 ;
-(void)setAltLabel:(VUILabel *)arg1 ;
-(void)setSeasonTitles:(NSArray *)arg1 ;
-(void)switchToIndex:(unsigned long long)arg1 ;
-(_TVImageView *)chevronDownImageView;
-(VUITextLayout *)buttonTextLayout;
-(void)setButtonTextLayout:(VUITextLayout *)arg1 ;
@end
