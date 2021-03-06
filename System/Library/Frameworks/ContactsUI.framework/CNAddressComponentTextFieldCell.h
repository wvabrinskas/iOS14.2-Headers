/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppSupportUI/NUITableViewContainerCell.h>

@class UITextField, UIImageView, NSArray, NSDictionary;

@interface CNAddressComponentTextFieldCell : NUITableViewContainerCell {

	BOOL _showsChevron;
	UITextField* _textField;
	UIImageView* _chevron;

}

@property (nonatomic,retain) UITextField * textField;                  //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UIImageView * chevron;                    //@synthesize chevron=_chevron - In the implementation block
@property (nonatomic,readonly) NSArray * textFields; 
@property (assign,nonatomic) BOOL showsChevron;                        //@synthesize showsChevron=_showsChevron - In the implementation block
@property (nonatomic,copy) NSDictionary * textAttributes; 
+(Class)containerViewClass;
+(id)cellIdentifier;
-(NSArray *)textFields;
-(void)setupTextFields;
-(NSDictionary *)textAttributes;
-(UIImageView *)chevron;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(id)newTextField;
-(void)updateMargins;
-(void)setShowsChevron:(BOOL)arg1 ;
-(BOOL)showsChevron;
-(UITextField *)textField;
-(void)setTextField:(UITextField *)arg1 ;
-(void)setChevron:(UIImageView *)arg1 ;
-(void)prepareForReuse;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
@end

