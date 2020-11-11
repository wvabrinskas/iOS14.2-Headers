/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKitUI/EKEventDetailCell.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/EKEventDetailPredictedLocationCellDelegate.h>

@protocol EKEventDetailTitleCellDelegate;
@class UILabel, NSMutableArray, EKEventDetailPredictedLocationCell, UIButton, NSObject, UIView, NSString;

@interface EKEventDetailTitleCell : EKEventDetailCell <UITextViewDelegate, EKEventDetailPredictedLocationCellDelegate> {

	UILabel* _titleView;
	NSMutableArray* _locationItems;
	EKEventDetailPredictedLocationCell* _predictedLocationView;
	UILabel* _travelTimeView;
	NSMutableArray* _dateTimeViews;
	UILabel* _recurrenceView;
	UILabel* _statusView;
	UIButton* _editButton;
	unsigned _visibleItems;
	BOOL _observingLocaleChanges;
	BOOL _rejectionReasonCell;
	BOOL _hideCellSeparator;
	int _lastPosition;
	BOOL _hasMapItemLaunchOptionFromTimeToLeaveNotification;
	BOOL _showingInlineDayView;
	NSObject*<EKEventDetailTitleCellDelegate> _delegate;
	unsigned long long _numberOfTitleLines;

}

@property (assign,nonatomic,__weak) NSObject*<EKEventDetailTitleCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;                 //@synthesize hasMapItemLaunchOptionFromTimeToLeaveNotification=_hasMapItemLaunchOptionFromTimeToLeaveNotification - In the implementation block
@property (assign,nonatomic) BOOL showingInlineDayView;                                              //@synthesize showingInlineDayView=_showingInlineDayView - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTitleLines;                                  //@synthesize numberOfTitleLines=_numberOfTitleLines - In the implementation block
@property (nonatomic,readonly) UIView * sourceViewForPopover; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_invalidateCachedFonts;
+(id)_titleFont;
+(void)_registerForInvalidation;
+(id)_largeTitleFont;
+(id)_locationFont;
-(void)layoutMarginsDidChange;
-(double)titleHeight;
-(void)addLocation:(id)arg1 ;
-(unsigned long long)numberOfTitleLines;
-(void)_promptForSpanWithSourceView:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(BOOL)arg1 ;
-(void)_updateSeparatorInsets;
-(NSObject*<EKEventDetailTitleCellDelegate>)delegate;
-(double)_layoutForWidth:(double)arg1 ;
-(void)eventDetailPredictedLocationCellAcceptedPrediction:(id)arg1 disambiguatedLocation:(id)arg2 ;
-(void)setColor:(id)arg1 ;
-(id)_dateTimeViewForLine:(unsigned long long)arg1 ;
-(BOOL)showingInlineDayView;
-(void)setNumberOfTitleLines:(unsigned long long)arg1 ;
-(id)_editButton;
-(void)setLocation:(id)arg1 ;
-(void)setTravelTimeString:(id)arg1 ;
-(void)setDelegate:(NSObject*<EKEventDetailTitleCellDelegate>)arg1 ;
-(BOOL)update;
-(id)_travelTimeView;
-(id)_predictedLocationView;
-(void)layoutSubviews;
-(BOOL)hasMapItemLaunchOptionFromTimeToLeaveNotification;
-(void)setShowingInlineDayView:(BOOL)arg1 ;
-(id)_statusView;
-(UIView *)sourceViewForPopover;
-(id)_recurrenceView;
-(id)_titleView;
-(void)contentSizeCategoryChanged:(id)arg1 ;
-(void)eventDetailPredictedLocationCellRejectedPrediction:(id)arg1 ;
-(BOOL)_useLargeFonts;
-(id)initAsRejectionReasonCellWithEvent:(id)arg1 ;
-(void)setStatusString:(id)arg1 ;
-(void)setRecurrenceString:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)_setDateTimeString:(id)arg1 line:(unsigned long long)arg2 ;
-(void)_saveEventWithSpan:(long long)arg1 ;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 style:(long long)arg3 ;
-(void)editButtonTapped;
-(void)setHideCellSeparator:(BOOL)arg1 ;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(void)setPrimaryTextColor:(id)arg1 ;
-(void)dealloc;
@end
