/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIFeedbackGenerator.h>
#import <UIKit/UIFeedbackGeneratorUserInteractionDriven.h>

@interface _UIClickPresentationFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>
+(Class)_configurationClass;
-(void)userInteractionEnded;
-(void)popped;
-(void)userInteractionStarted;
-(void)userInteractionCancelled;
-(void)dragged;
-(id)initWithCoordinateSpace:(id)arg1 ;
-(void)previewed;
-(id)_clickConfiguration;
@end

