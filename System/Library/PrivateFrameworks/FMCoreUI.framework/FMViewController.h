/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface FMViewController : UIViewController {

	NSMutableDictionary* _kvoObservationTokens;
	NSMutableSet* _notificationTokens;

}

@property (nonatomic,retain) NSMutableDictionary * kvoObservationTokens;              //@synthesize kvoObservationTokens=_kvoObservationTokens - In the implementation block
@property (nonatomic,retain) NSMutableSet * notificationTokens;                       //@synthesize notificationTokens=_notificationTokens - In the implementation block
@property (copy,readonly) NSString * controllerNibName; 
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)setNotificationTokens:(NSMutableSet *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSMutableSet *)notificationTokens;
-(void)performSegueWithIdentifier:(id)arg1 sender:(id)arg2 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)awakeFromNib;
-(void)dealloc;
-(void)removeKVOObservationTokens;
-(void)removeNotificationTokens;
-(NSMutableDictionary *)kvoObservationTokens;
-(void)setKvoObservationTokens:(NSMutableDictionary *)arg1 ;
-(void)addKVOObservationToken:(id)arg1 forObject:(id)arg2 ;
-(void)addNotificationToken:(id)arg1 ;
-(NSString *)controllerNibName;
-(id)actualNibNameForName:(id)arg1 ;
@end
