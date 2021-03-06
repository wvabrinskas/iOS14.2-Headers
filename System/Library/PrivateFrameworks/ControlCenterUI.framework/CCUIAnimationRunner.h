/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_group;
@class NSObject;

@interface CCUIAnimationRunner : NSObject {

	NSObject*<OS_dispatch_group> _previousAnimationGroup;

}
+(id)runner;
+(void)_runC2AnimationsInBatch:(id)arg1 animationGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)_runCAAnimationsInBatch:(id)arg1 animationGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)additivelyRunAnimationBatch:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)runAnimationBatch:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end

