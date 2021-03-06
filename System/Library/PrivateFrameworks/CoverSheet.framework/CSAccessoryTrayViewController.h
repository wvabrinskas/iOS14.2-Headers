/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoverSheet/CSAccessoryViewController.h>

@class CSAccessoryTrayView;

@interface CSAccessoryTrayViewController : CSAccessoryViewController {

	CSAccessoryTrayView* _trayView;

}

@property (nonatomic,retain) CSAccessoryTrayView * trayView;              //@synthesize trayView=_trayView - In the implementation block
-(id)accessoryView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithAccessory:(id)arg1 ;
-(CSAccessoryTrayView *)trayView;
-(double)animationDurationBeforeDismissal;
-(id)_trayColorForAccessory:(id)arg1 ;
-(void)setTrayView:(CSAccessoryTrayView *)arg1 ;
@end

