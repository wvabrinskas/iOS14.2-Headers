/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EDTableUpgradeStep.h>

@class NSString;

@interface EDRemoveUnusedSchemaTableUpgradeStep : NSObject <EFLoggable, EDTableUpgradeStep>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(int)runWithConnection:(id)arg1 ;
+(int)_recreateMessagesIndices:(id)arg1 ;
+(int)_dropTable:(id)arg1 connection:(id)arg2 ;
+(int)_dropThreadCategoriesIndex:(id)arg1 ;
+(int)_createTempMessagesTable:(id)arg1 ;
+(int)_copyMessagesData:(id)arg1 ;
+(int)_swapMessagesTables:(id)arg1 ;
+(int)_truncateTable:(id)arg1 connection:(id)arg2 ;
+(int)_recreateThreadsTable:(id)arg1 ;
+(int)_recreateThreadsIndices:(id)arg1 ;
@end
