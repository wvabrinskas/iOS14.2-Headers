/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKBacklightMonitor : _DKMonitor {

	int notifyToken;

}
+(id)entitlements;
+(void)setIsBacklit:(BOOL)arg1 ;
+(id)eventStream;
+(BOOL)shouldMergeUnchangedEvents;
+(BOOL)indicatesScreenOnWithNotificationState:(id)arg1 ;
+(id)_eventWithState:(id)arg1 ;
-(void)synchronouslyReflectCurrentValue;
-(void)start;
-(void)obtainCurrentValue;
-(void)stop;
-(void)deactivate;
-(void)dealloc;
@end
