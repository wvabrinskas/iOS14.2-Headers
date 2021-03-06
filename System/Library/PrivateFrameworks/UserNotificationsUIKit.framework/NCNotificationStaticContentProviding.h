/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSString, NSDate, NSTimeZone, UIImage;


@protocol NCNotificationStaticContentProviding <NSObject>
@property (assign,nonatomic,__weak) id<NCNotificationStaticContentProvidingDelegate> delegate; 
@property (nonatomic,readonly) NSArray * icons; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSDate * date; 
@property (getter=isDateAllDay,nonatomic,readonly) BOOL dateAllDay; 
@property (nonatomic,copy,readonly) NSTimeZone * timeZone; 
@property (nonatomic,copy,readonly) NSString * primaryText; 
@property (nonatomic,copy,readonly) NSString * primarySubtitleText; 
@property (nonatomic,copy,readonly) NSString * secondaryText; 
@property (nonatomic,copy,readonly) NSString * summaryText; 
@property (nonatomic,readonly) UIImage * thumbnail; 
@property (nonatomic,copy,readonly) id cancelAction; 
@property (nonatomic,copy,readonly) id clearAction; 
@property (nonatomic,copy,readonly) id closeAction; 
@property (nonatomic,copy,readonly) id defaultAction; 
@property (nonatomic,copy,readonly) id nilAction; 
@property (nonatomic,readonly) NSArray * interfaceActions; 
@property (getter=isNumberOfLinesInfinite,nonatomic,readonly) BOOL numberOfLinesInfinite; 
@property (nonatomic,readonly) BOOL showsTextInputOnAppearance; 
@property (nonatomic,readonly) unsigned long long coalesceCount; 
@property (nonatomic,copy) NSArray * overriddenActions; 
@property (nonatomic,copy,readonly) NSArray * currentActions; 
@required
-(NSArray *)icons;
-(id<NCNotificationStaticContentProvidingDelegate>)delegate;
-(NSArray *)currentActions;
-(NSString *)secondaryText;
-(NSString *)primaryText;
-(UIImage *)thumbnail;
-(NSDate *)date;
-(void)setDelegate:(id)arg1;
-(id)cancelAction;
-(NSTimeZone *)timeZone;
-(id)defaultAction;
-(NSString *)title;
-(NSArray *)interfaceActions;
-(NSString *)summaryText;
-(id)clearAction;
-(BOOL)isDateAllDay;
-(NSString *)primarySubtitleText;
-(id)closeAction;
-(id)nilAction;
-(BOOL)showsTextInputOnAppearance;
-(BOOL)isNumberOfLinesInfinite;
-(NSArray *)overriddenActions;
-(unsigned long long)coalesceCount;
-(void)setOverriddenActions:(id)arg1;

@end

