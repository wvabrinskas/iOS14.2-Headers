/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFDialogRequest.h>
#import <libobjc.A.dylib/WFDialogRequestViewControllerSupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INInteraction, WFDialogButton, NSString;

@interface WFHandleInteractionDialogRequest : WFDialogRequest <WFDialogRequestViewControllerSupport, NSSecureCoding> {

	INInteraction* _interaction;
	WFDialogButton* _doneButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) INInteraction * interaction;              //@synthesize interaction=_interaction - In the implementation block
@property (nonatomic,copy,readonly) WFDialogButton * doneButton;              //@synthesize doneButton=_doneButton - In the implementation block
+(BOOL)supportsSecureCoding;
-(Class)wf_dialogViewControllerClass;
-(WFDialogButton *)doneButton;
-(INInteraction *)interaction;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInteraction:(id)arg1 prompt:(id)arg2 ;
-(id)initWithInteraction:(id)arg1 attribution:(id)arg2 ;
@end

