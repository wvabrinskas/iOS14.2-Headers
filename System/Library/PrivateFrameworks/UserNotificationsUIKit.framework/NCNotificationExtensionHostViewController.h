/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>

@protocol NSCopying;
@class NSExtension, NSString;

@interface NCNotificationExtensionHostViewController : _UIRemoteViewController {

	NSExtension* _extension;
	id<NSCopying> _extensionRequestIdentifier;
	NSString* _notificationRequestIdentifier;

}

@property (assign,nonatomic,__weak) NSExtension * extension;                      //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy) id<NSCopying> extensionRequestIdentifier;              //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (nonatomic,copy) NSString * notificationRequestIdentifier;              //@synthesize notificationRequestIdentifier=_notificationRequestIdentifier - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)__shouldRemoteViewControllerFenceOperations;
-(void)setExtensionRequestIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)extensionRequestIdentifier;
-(NSExtension *)extension;
-(NSString *)notificationRequestIdentifier;
-(void)setNotificationRequestIdentifier:(NSString *)arg1 ;
@end

