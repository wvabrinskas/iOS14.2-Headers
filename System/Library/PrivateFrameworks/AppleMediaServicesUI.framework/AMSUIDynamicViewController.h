/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <AppleMediaServicesUI/AMSUICommonViewController.h>
#import <libobjc.A.dylib/AMSUIDynamicViewControllerDelegate.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@class AMSUIDynamicViewControllerDelegateProxy, NSDictionary, ACAccount, AMSProcessInfo, NSString;

@interface AMSUIDynamicViewController : AMSUICommonViewController <AMSUIDynamicViewControllerDelegate, AMSBagConsumer> {

	AMSUIDynamicViewControllerDelegateProxy* _delegateProxy;
	AMSUIDynamicViewController* _dynamicViewController;

}

@property (nonatomic,readonly) AMSUIDynamicViewControllerDelegateProxy * delegateProxy;              //@synthesize delegateProxy=_delegateProxy - In the implementation block
@property (nonatomic,readonly) AMSUIDynamicViewController * dynamicViewController;                   //@synthesize dynamicViewController=_dynamicViewController - In the implementation block
@property (nonatomic,retain) NSDictionary * internalClientOptions; 
@property (nonatomic,retain) ACAccount * account; 
@property (assign,nonatomic) BOOL anonymousMetrics; 
@property (nonatomic,retain) id<AMSBagProtocol> bag; 
@property (nonatomic,retain) AMSProcessInfo * clientInfo; 
@property (nonatomic,retain) NSDictionary * clientOptions; 
@property (assign,nonatomic,__weak) id<AMSUIDynamicViewControllerDelegate> delegate; 
@property (nonatomic,retain) NSDictionary * metricsOverlay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createBagForSubProfile;
+(id)bagSubProfile;
+(id)bagKeySet;
+(id)bagSubProfileVersion;
-(void)_setup;
-(void)viewWillLayoutSubviews;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(ACAccount *)account;
-(id<AMSUIDynamicViewControllerDelegate>)delegate;
-(void)setAccount:(ACAccount *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(id)navigationItem;
-(void)setDelegate:(id<AMSUIDynamicViewControllerDelegate>)arg1 ;
-(void)setClientOptions:(NSDictionary *)arg1 ;
-(BOOL)isMovingFromParentViewController;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(NSDictionary *)metricsOverlay;
-(void)setMetricsOverlay:(NSDictionary *)arg1 ;
-(id)title;
-(AMSUIDynamicViewControllerDelegateProxy *)delegateProxy;
-(BOOL)isBeingDismissed;
-(void)setTitle:(id)arg1 ;
-(void)setAnonymousMetrics:(BOOL)arg1 ;
-(id)initWithBag:(id)arg1 URL:(id)arg2 ;
-(id)initWithBag:(id)arg1 bagValue:(id)arg2 ;
-(AMSUIDynamicViewController *)dynamicViewController;
-(BOOL)anonymousMetrics;
-(NSDictionary *)clientOptions;
-(NSDictionary *)internalClientOptions;
-(void)setInternalClientOptions:(NSDictionary *)arg1 ;
-(void)reloadContentViewImpressionItems;
-(id)initWithBag:(id)arg1 javaScriptBagValue:(id)arg2 ;
-(id)initWithBag:(id)arg1 javaScriptURL:(id)arg2 ;
-(void)_setupContentSize;
@end
