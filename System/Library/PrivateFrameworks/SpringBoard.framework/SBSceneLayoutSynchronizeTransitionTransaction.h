/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSTransaction.h>

@class NSString;

@interface SBSceneLayoutSynchronizeTransitionTransaction : BSTransaction {

	NSString* _debugName;

}
-(id)init;
-(void)synchronize;
-(BOOL)_canBeInterrupted;
-(id)initWithDebugName:(id)arg1 ;
-(id)_graphNodeDebugName;
@end

