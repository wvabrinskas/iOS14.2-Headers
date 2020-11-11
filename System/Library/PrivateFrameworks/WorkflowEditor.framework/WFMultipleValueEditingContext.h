/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WFVariableEditingContext, WFListEditorUpdateItem;

@interface WFMultipleValueEditingContext : NSObject {

	WFVariableEditingContext* _variableContext;
	WFListEditorUpdateItem* _updateItem;

}

@property (nonatomic,retain) WFVariableEditingContext * variableContext;              //@synthesize variableContext=_variableContext - In the implementation block
@property (nonatomic,retain) WFListEditorUpdateItem * updateItem;                     //@synthesize updateItem=_updateItem - In the implementation block
-(WFListEditorUpdateItem *)updateItem;
-(WFVariableEditingContext *)variableContext;
-(void)setVariableContext:(WFVariableEditingContext *)arg1 ;
-(void)setUpdateItem:(WFListEditorUpdateItem *)arg1 ;
@end
