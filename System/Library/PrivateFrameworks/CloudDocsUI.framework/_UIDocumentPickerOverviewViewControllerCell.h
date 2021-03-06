/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UIImageView;

@interface _UIDocumentPickerOverviewViewControllerCell : UITableViewCell {

	UIImageView* _iconView;
	UIImageView* _newlyAddedView;

}

@property (nonatomic,retain) UIImageView * iconView;                    //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UIImageView * newlyAddedView;              //@synthesize newlyAddedView=_newlyAddedView - In the implementation block
@property (assign,nonatomic) BOOL showNewlyAdded; 
-(UIImageView *)iconView;
-(id)_dotImage;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)prepareForReuse;
-(void)setShowNewlyAdded:(BOOL)arg1 ;
-(void)setNewlyAddedView:(UIImageView *)arg1 ;
-(UIImageView *)newlyAddedView;
-(BOOL)showNewlyAdded;
@end

