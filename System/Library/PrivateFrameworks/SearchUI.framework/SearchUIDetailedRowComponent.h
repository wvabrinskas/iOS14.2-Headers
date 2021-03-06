/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIView, SearchUIDetailedRowModel;


@protocol SearchUIDetailedRowComponent <NSObject>
@property (nonatomic,retain) UIView * view; 
@property (nonatomic,retain) SearchUIDetailedRowModel * rowModel; 
@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegate> feedbackDelegate; 
@required
+(BOOL)supportsRowModel:(id)arg1;
-(void)updateWithRowModel:(id)arg1;
-(UIView *)view;
-(id)setupView;
-(void)setView:(id)arg1;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(void)updateWithContacts:(id)arg1;
-(SearchUIDetailedRowModel *)rowModel;
-(void)setRowModel:(id)arg1;
-(void)setFeedbackDelegate:(id)arg1;
-(BOOL)shouldVerticallyCenter;

@end

