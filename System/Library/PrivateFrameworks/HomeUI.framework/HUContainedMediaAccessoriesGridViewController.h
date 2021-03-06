/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUServiceGridViewController.h>
#import <libobjc.A.dylib/HUPresentationDelegate.h>
#import <libobjc.A.dylib/HUServiceGridItemManagerDelegate.h>
#import <libobjc.A.dylib/HUDetailsPresentationDelegateHost.h>

@protocol HUPresentationDelegate, HUContainedMediaAccessoriesGridViewControllerDelegate;
@class HFMediaAccessoryItem, NSString;

@interface HUContainedMediaAccessoriesGridViewController : HUServiceGridViewController <HUPresentationDelegate, HUServiceGridItemManagerDelegate, HUDetailsPresentationDelegateHost> {

	BOOL _requiresPresentingViewControllerDismissal;
	BOOL _presentedModally;
	id<HUPresentationDelegate> _presentationDelegate;
	HFMediaAccessoryItem* _mediaAccessoryItem;
	id<HUContainedMediaAccessoriesGridViewControllerDelegate> _mediaAccessoryGridDelegate;

}

@property (assign,getter=isPresentedModally,nonatomic) BOOL presentedModally;                                                          //@synthesize presentedModally=_presentedModally - In the implementation block
@property (nonatomic,copy,readonly) HFMediaAccessoryItem * mediaAccessoryItem;                                                         //@synthesize mediaAccessoryItem=_mediaAccessoryItem - In the implementation block
@property (assign,nonatomic,__weak) id<HUContainedMediaAccessoriesGridViewControllerDelegate> mediaAccessoryGridDelegate;              //@synthesize mediaAccessoryGridDelegate=_mediaAccessoryGridDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL requiresPresentingViewControllerDismissal;                                                           //@synthesize requiresPresentingViewControllerDismissal=_requiresPresentingViewControllerDismissal - In the implementation block
@property (assign,nonatomic,__weak) id<HUPresentationDelegate> presentationDelegate;                                                   //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(void)_done:(id)arg1 ;
-(void)_edit:(id)arg1 ;
-(void)viewDidLoad;
-(id<HUPresentationDelegate>)presentationDelegate;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(BOOL)isPresentedModally;
-(void)setPresentedModally:(BOOL)arg1 ;
-(void)setPresentationDelegate:(id<HUPresentationDelegate>)arg1 ;
-(void)_updateRightBarButtons;
-(id)finishPresentation:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(id)layoutOptionsForSection:(long long)arg1 ;
-(BOOL)requiresPresentingViewControllerDismissal;
-(void)setRequiresPresentingViewControllerDismissal:(BOOL)arg1 ;
-(id)initWithAccessoryContainerItem:(id)arg1 ;
-(void)setMediaAccessoryGridDelegate:(id<HUContainedMediaAccessoriesGridViewControllerDelegate>)arg1 ;
-(id)initWithMediaAccessoryContainerItem:(id)arg1 isPresentedModally:(BOOL)arg2 valueSource:(id)arg3 ;
-(HFMediaAccessoryItem *)mediaAccessoryItem;
-(id<HUContainedMediaAccessoriesGridViewControllerDelegate>)mediaAccessoryGridDelegate;
@end

