/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/HKTabBarTapObserver.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class HKProfileBarButtonItem, NSString;

@interface HKNavigationController : UINavigationController <HKTabBarTapObserver, UINavigationControllerDelegate> {

	HKProfileBarButtonItem* _commonProfileBarButtonItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(void)didTapTabBarIcon;
-(void)didChangeToAnotherTab;
-(id)initLargeTitlesNavigationControllerWithRootViewController:(id)arg1 ;
-(id)commonProfileBarButtonItem;
@end
