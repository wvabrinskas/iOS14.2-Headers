/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class NSArray, NSDate, UITextView, UIActivityIndicatorView, OSLogEventStreamBase, NSMutableAttributedString, NSMutableArray, NSMutableIndexSet, NSMutableDictionary, NSDateFormatter;

@interface PXLogsViewController : UIViewController {

	NSArray* _subsystemsAndCategories;
	NSDate* _startDate;
	UITextView* _textView;
	UIActivityIndicatorView* _spinnerView;
	OSLogEventStreamBase* _eventStream;
	NSMutableAttributedString* _fullAttributedString;
	BOOL _hasScheduledTextViewUpdate;
	NSMutableArray* _compactLogs;
	NSMutableArray* _expandedLogs;
	NSMutableIndexSet* _isExpanded;
	NSMutableDictionary* _substitutionByObjectRepresentation;
	NSMutableDictionary* _nextAvailableIndexByClassName;
	NSDateFormatter* _dateFormatter;

}

@property (nonatomic,retain) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
-(NSDateFormatter *)dateFormatter;
-(void)tapped:(id)arg1 ;
-(id)initWithSubsystemsAndCategories:(id)arg1 startDate:(id)arg2 ;
-(id)initWithSubsystem:(id)arg1 category:(id)arg2 startDate:(id)arg3 ;
-(id)initLiveWithSubsystemsAndCategories:(id)arg1 ;
-(id)initLiveWithSubsystem:(id)arg1 category:(id)arg2 ;
-(void)prepareDiskStore;
-(void)prepareLiveStore;
-(id)subsystemsAndCategoriesPredicateWithSubsystemsAndCategories:(id)arg1 ;
-(void)setupEventStream:(id)arg1 ;
-(void)removeSpinner;
-(void)logAttributedString:(id)arg1 ;
-(void)toggleModeForStringIndex:(unsigned long long)arg1 ;
-(id)substitutionForObjectRepresentation:(id)arg1 ;
-(BOOL)isCollectionRepresentation:(id)arg1 ;
-(id)substitutionForCollectionRepresentation:(id)arg1 attributes:(id)arg2 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end
