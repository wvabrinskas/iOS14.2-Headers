/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSTextCheckingResult;

@interface CKTextComponentViewControlTracker : NSObject {

	NSTextCheckingResult* _trackingTextCheckingResult;

}
-(void)endTrackingForTextComponentView:(id)arg1 withTouch:(id)arg2 withEvent:(id)arg3 ;
-(void)cancelTrackingForTextComponentView:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingForTextComponentView:(id)arg1 withTouch:(id)arg2 withEvent:(id)arg3 ;
-(BOOL)beginTrackingForTextComponentView:(id)arg1 withTouch:(id)arg2 withEvent:(id)arg3 ;
-(void)_sendActionsToControl:(id)arg1 forControlEvents:(unsigned long long)arg2 withEvent:(id)arg3 ;
@end
