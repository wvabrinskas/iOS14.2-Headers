/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIApplicationRotationFollowingWindow.h>

@class UIAlertController;

@interface _UIAlertControllerShimPresenterWindow : UIApplicationRotationFollowingWindow {

	UIAlertController* _alertController;

}

@property (nonatomic,retain,readonly) UIAlertController * alertController; 
-(UIAlertController *)alertController;
-(id)init;
-(void)presentAlertController:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithWindowScene:(id)arg1 ;
-(id)_presentationViewController;
@end

