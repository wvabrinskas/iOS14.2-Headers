/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class WFWorkflow, WFEditorHostingViewController;

@interface WFEditorViewController : UIViewController {

	WFWorkflow* _workflow;
	WFEditorHostingViewController* _hostingViewController;

}

@property (nonatomic,readonly) WFWorkflow * workflow;                                              //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,readonly) WFEditorHostingViewController * hostingViewController;              //@synthesize hostingViewController=_hostingViewController - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
-(BOOL)isEditable;
-(WFWorkflow *)workflow;
-(id)initWithWorkflow:(id)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(void)loadView;
-(WFEditorHostingViewController *)hostingViewController;
@end

