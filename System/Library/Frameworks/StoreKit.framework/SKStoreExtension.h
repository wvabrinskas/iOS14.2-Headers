/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKStoreExtensionServiceInterface.h>

@class NSString;

@interface SKStoreExtension : UIViewController <SKStoreExtensionServiceInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterface;
+(id)serviceInterface;
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)setupWithParameters:(id)arg1 ;
-(void)setRequestedIdentifier:(id)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 ;
-(void)presentRequestedViewControllerWithIdentifier:(id)arg1 ;
-(void)setTabIdentifier:(id)arg1 ;
-(void)openURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 ;
@end

