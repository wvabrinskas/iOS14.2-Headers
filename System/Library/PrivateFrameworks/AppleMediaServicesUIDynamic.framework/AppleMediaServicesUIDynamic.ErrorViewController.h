/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUIDynamic.framework/AppleMediaServicesUIDynamic
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AMSUICommonViewController.h>
#import <libobjc.A.dylib/AMSUIDAirplaneModeInquiryDelegate.h>

@class UINavigationItem;

@interface AppleMediaServicesUIDynamic.ErrorViewController : AMSUICommonViewController <AMSUIDAirplaneModeInquiryDelegate> {

	 automaticRetry;
	 action;
	 button;
	 errorMessage;
	 errorTitle;
	 airplaneModeInquiry;
	 cellularDataInquiry;
	 networkInquiry;
	 networkObservation;
	 $__lazy_storage_$_contentUnavailableView;

}

@property (readonly,nonatomic) UINavigationItem * navigationItem; 
-(void)viewWillLayoutSubviews;
-(id)init;
-(UINavigationItem *)navigationItem;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(void)dealloc;
-(void)airplaneModeInquiryDidObserveChange:(id)arg1 ;
@end
