/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIDragFeedbackGenerator.h>

@class _UIDragSnappingFeedbackGeneratorConfiguration;

@interface _UIDragSnappingFeedbackGenerator : _UIDragFeedbackGenerator

@property (getter=_dragSnappingConfiguration,nonatomic,readonly) _UIDragSnappingFeedbackGeneratorConfiguration * dragSnappingConfiguration; 
+(Class)_configurationClass;
-(void)userInteractionEnded;
-(void)userInteractionStarted;
-(void)draggedObjectLifted;
-(void)_startLanding;
-(void)draggedObjectLanded;
-(void)_stopLanding;
-(id)_dragSnappingConfiguration;
-(void)objectSnapped;
@end

