/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/CTCarrierSpaceClientDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, RemoteUIController, CTCarrierSpaceClient, NSString;

@interface PSUICarrierSpacePlansController : PSListController <CTCarrierSpaceClientDelegate, RemoteUIControllerDelegate> {

	NSObject*<OS_dispatch_queue> _carrierSpaceQueue;
	RemoteUIController* _remoteUIController;
	CTCarrierSpaceClient* _carrierSpaceClient;

}

@property (nonatomic,retain) CTCarrierSpaceClient * carrierSpaceClient;              //@synthesize carrierSpaceClient=_carrierSpaceClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)simStatusChanged;
-(void)carrierSpaceChanged;
-(CTCarrierSpaceClient *)carrierSpaceClient;
-(void)setCarrierSpaceClient:(CTCarrierSpaceClient *)arg1 ;
-(id)stringFromGroupCategory:(long long)arg1 ;
-(id)detailForPlanOption:(id)arg1 ;
-(void)moreDetailsButtonTapped:(id)arg1 ;
-(void)dismissPlanDetail;
@end

