/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProxCardKit/PRXCardContentViewController.h>

@class NSString, PRXAction, PRXDisclaimerContentView;

@interface PRXDisclaimerContentViewController : PRXCardContentViewController {

	NSString* _disclaimer;
	PRXAction* _moreInfoAction;

}

@property (nonatomic,readonly) PRXDisclaimerContentView * contentView; 
@property (nonatomic,copy) NSString * disclaimer;                                   //@synthesize disclaimer=_disclaimer - In the implementation block
@property (nonatomic,retain) PRXAction * moreInfoAction;                            //@synthesize moreInfoAction=_moreInfoAction - In the implementation block
+(Class)contentViewClass;
-(void)viewDidLoad;
-(void)_updateDisclaimerLabel;
-(void)_updateMoreInfoButton;
-(void)setDisclaimer:(NSString *)arg1 ;
-(void)setMoreInfoAction:(PRXAction *)arg1 ;
-(NSString *)disclaimer;
-(PRXAction *)moreInfoAction;
@end
