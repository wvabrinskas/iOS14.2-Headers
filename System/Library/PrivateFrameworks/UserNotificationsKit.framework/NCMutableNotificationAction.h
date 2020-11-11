/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotificationsKit/UserNotificationsKit-Structs.h>
#import <UserNotificationsKit/NCNotificationAction.h>

@class NSString, NSURL, NSDictionary;

@interface NCMutableNotificationAction : NCNotificationAction

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) unsigned long long activationMode; 
@property (nonatomic,copy) NSURL * launchURL; 
@property (nonatomic,copy) NSString * launchBundleID; 
@property (assign,nonatomic) unsigned long long behavior; 
@property (nonatomic,copy) NSDictionary * behaviorParameters; 
@property (nonatomic,retain) id<NCNotificationActionRunner> actionRunner; 
@property (assign,nonatomic) BOOL requiresAuthentication; 
@property (assign,getter=isDestructiveAction,nonatomic) BOOL destructiveAction; 
@property (assign,nonatomic) BOOL shouldDismissNotification; 
-(void)setBehavior:(unsigned long long)arg1 ;
-(void)setLaunchURL:(NSURL *)arg1 ;
-(void)setLaunchBundleID:(NSString *)arg1 ;
-(void)setBehaviorParameters:(NSDictionary *)arg1 ;
-(void)setActivationMode:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setRequiresAuthentication:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShouldDismissNotification:(BOOL)arg1 ;
-(void)setDestructiveAction:(BOOL)arg1 ;
-(void)setActionRunner:(id<NCNotificationActionRunner>)arg1 ;
@end
