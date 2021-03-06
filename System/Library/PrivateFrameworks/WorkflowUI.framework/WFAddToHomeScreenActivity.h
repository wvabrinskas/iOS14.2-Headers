/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/UIActivity.h>
#import <libobjc.A.dylib/WFAddToHomeScreenViewControllerDelegate.h>

@protocol WFAddToHomeScreenActivityDelegate;
@class NSString, WFWorkflow, UINavigationController;

@interface WFAddToHomeScreenActivity : UIActivity <WFAddToHomeScreenViewControllerDelegate> {

	id<WFAddToHomeScreenActivityDelegate> _delegate;
	NSString* _source;
	WFWorkflow* _workflow;
	UINavigationController* _navigationController;

}

@property (nonatomic,copy) NSString * source;                                                    //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) WFWorkflow * workflow;                                              //@synthesize workflow=_workflow - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;               //@synthesize navigationController=_navigationController - In the implementation block
@property (assign,nonatomic,__weak) id<WFAddToHomeScreenActivityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)activityType;
-(id)init;
-(id)activityTitle;
-(id<WFAddToHomeScreenActivityDelegate>)delegate;
-(id)initWithSource:(id)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(void)setDelegate:(id<WFAddToHomeScreenActivityDelegate>)arg1 ;
-(void)activityDidFinish:(BOOL)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(NSString *)source;
-(void)prepareWithActivityItems:(id)arg1 ;
-(UINavigationController *)navigationController;
-(id)activityViewController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)cancel;
-(id)_systemImageName;
-(void)addToHomeScreenViewController:(id)arg1 didFinishWithName:(id)arg2 icon:(id)arg3 ;
-(void)addToHomeScreenWithName:(id)arg1 icon:(id)arg2 ;
@end

