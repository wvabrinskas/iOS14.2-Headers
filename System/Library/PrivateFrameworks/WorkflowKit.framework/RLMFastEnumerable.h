/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class RLMRealm;


@protocol RLMFastEnumerable
@property (nonatomic,readonly) RLMRealm * realm; 
@property (nonatomic,readonly) RLMClassInfo* objectInfo; 
@property (nonatomic,readonly) unsigned long long count; 
@required
-(TableView*)tableView;
-(unsigned long long)count;
-(id)fastEnumerator;
-(RLMClassInfo*)objectInfo;
-(RLMRealm *)realm;

@end

