/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@protocol WFImageContentItemCellDelegate;
@class NSMapTable, NSMutableArray, NSArray;

@interface WFImageContentItemCell : UITableViewCell {

	NSMapTable* _activityIndicators;
	NSMutableArray* _imageViews;
	NSMutableArray* _selectedImageViews;
	NSArray* _items;
	id<WFImageContentItemCellDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * items;                                                   //@synthesize items=_items - In the implementation block
@property (assign,nonatomic,__weak) id<WFImageContentItemCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(id<WFImageContentItemCellDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setItems:(NSArray *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setDelegate:(id<WFImageContentItemCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(NSArray *)items;
-(void)imageViewTapped:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 atIndex:(unsigned long long)arg2 ;
@end
