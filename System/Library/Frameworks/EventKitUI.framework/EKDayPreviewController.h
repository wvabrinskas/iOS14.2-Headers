/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/EKDayViewDataSource.h>
#import <libobjc.A.dylib/EKEditItemViewControllerProtocol.h>

@class NSArray, UIView, EKDayView, NSDate, UIViewController, EKEvent, NSString;

@interface EKDayPreviewController : UIViewController <EKDayViewDataSource, EKEditItemViewControllerProtocol> {

	BOOL _firstshow;
	BOOL _userHasTappedToExpand;
	BOOL _isAnimating;
	NSArray* _cachedTimedEvents;
	UIView* _roundedView;
	EKDayView* _dayView;
	NSDate* _date;
	NSDate* _originalEventStartDate;
	NSDate* _originalEventEndDate;
	BOOL _hasOverriddenEventDates;
	NSDate* _overriddenEventStartDate;
	NSDate* _overriddenEventEndDate;
	long long _overriddenParticipantStatus;
	BOOL _hasOverriddenStatus;
	BOOL _requireScrollPositionCorrection;
	BOOL _hidesAllDayEvents;
	BOOL _respectsSelectedCalendarsFilter;
	unsigned long long _style;
	UIViewController* _hostingViewController;
	EKEvent* _event;

}

@property (assign,nonatomic) unsigned long long style;                                              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * hostingViewController;                       //@synthesize hostingViewController=_hostingViewController - In the implementation block
@property (assign,nonatomic) BOOL hidesAllDayEvents;                                                //@synthesize hidesAllDayEvents=_hidesAllDayEvents - In the implementation block
@property (assign,nonatomic) BOOL respectsSelectedCalendarsFilter;                                  //@synthesize respectsSelectedCalendarsFilter=_respectsSelectedCalendarsFilter - In the implementation block
@property (assign,nonatomic) long long overriddenParticipantStatus;                                 //@synthesize overriddenParticipantStatus=_overriddenParticipantStatus - In the implementation block
@property (nonatomic,retain) EKEvent * event;                                                       //@synthesize event=_event - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
@property (assign,nonatomic) BOOL useCustomBackButton; 
-(void)reload;
-(void)reloadWithNewDate:(id)arg1 overriddenEventStartDate:(id)arg2 overriddenEventEndDate:(id)arg3 ;
-(BOOL)hidesAllDayEvents;
-(EKEvent *)event;
-(id)_dateForFirstHourMarker;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setHostingViewController:(UIViewController *)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)_anchorEvent;
-(id)_hourMaskForEvents:(id)arg1 ;
-(void)setRespectsSelectedCalendarsFilter:(BOOL)arg1 ;
-(BOOL)_shouldShowAllVisibleEvents;
-(unsigned long long)supportedInterfaceOrientations;
-(id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHidesAllDayEvents:(BOOL)arg1 ;
-(void)toggleExpandedState;
-(void)viewDidLoad;
-(void)_setNewVisibleHourLabels;
-(long long)overriddenParticipantStatus;
-(NSRange)_displayedHoursRange;
-(unsigned long long)style;
-(void)setOverriddenParticipantStatus:(long long)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_setupAutoLayout;
-(BOOL)_eventOccursOnThisDay:(id)arg1 ;
-(id)initWithDate:(id)arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4 ;
-(void)_setupDayView;
-(CGSize)preferredContentSize;
-(void)loadView;
-(void)renderPressHighlight:(BOOL)arg1 ;
-(double)_dayViewHeight;
-(BOOL)respectsSelectedCalendarsFilter;
-(void)setEvent:(EKEvent *)arg1 ;
-(void)_scrollDayViewToCorrectOffsetAnimated:(BOOL)arg1 ;
-(UIViewController *)hostingViewController;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)_eventsForStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_selectedCalendars;
@end
