/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/WFWorkflowWizardNameCellDelegate.h>
#import <libobjc.A.dylib/WFWorkflowWizardNameCellDataSource.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIDocumentPickerDelegate.h>

@protocol WFAddToHomeScreenViewControllerDelegate;
@class WFWorkflow, WFHomeScreenIcon, WFAddToHomeIconPreviewCell, WFWorkflowWizardNameCell, NSString;

@interface WFAddToHomeScreenViewController : UITableViewController <WFWorkflowWizardNameCellDelegate, WFWorkflowWizardNameCellDataSource, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDocumentPickerDelegate> {

	id<WFAddToHomeScreenViewControllerDelegate> _delegate;
	WFWorkflow* _workflow;
	WFHomeScreenIcon* _icon;
	WFAddToHomeIconPreviewCell* _previewCell;
	WFWorkflowWizardNameCell* _editorCell;

}

@property (nonatomic,retain) WFWorkflow * workflow;                                                    //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,retain) WFHomeScreenIcon * icon;                                                  //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) WFAddToHomeIconPreviewCell * previewCell;                                 //@synthesize previewCell=_previewCell - In the implementation block
@property (nonatomic,retain) WFWorkflowWizardNameCell * editorCell;                                    //@synthesize editorCell=_editorCell - In the implementation block
@property (assign,nonatomic,__weak) id<WFAddToHomeScreenViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFAddToHomeScreenViewControllerDelegate>)delegate;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(WFHomeScreenIcon *)icon;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(WFWorkflow *)workflow;
-(void)setIcon:(WFHomeScreenIcon *)arg1 ;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(void)setDelegate:(id<WFAddToHomeScreenViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithWorkflow:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(id)iconButtonDropdownMenuInWorkflowWizardNameCell:(id)arg1 ;
-(void)workflowWizardNameCell:(id)arg1 didUpdateName:(id)arg2 ;
-(void)registerCells;
-(void)presentPickerControllerWithSourceType:(long long)arg1 ;
-(void)didTapAdd;
-(WFAddToHomeIconPreviewCell *)previewCell;
-(void)setPreviewCell:(WFAddToHomeIconPreviewCell *)arg1 ;
-(WFWorkflowWizardNameCell *)editorCell;
-(void)setEditorCell:(WFWorkflowWizardNameCell *)arg1 ;
@end

