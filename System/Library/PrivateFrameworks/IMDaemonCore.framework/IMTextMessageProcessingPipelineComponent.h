/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMCorePipeline/IMPipelineComponent.h>

@class IMDAccount, IMDMessageStore;

@interface IMTextMessageProcessingPipelineComponent : IMPipelineComponent {

	IMDAccount* _account;
	IMDMessageStore* _messageStore;

}
-(id)runIndividuallyWithInput:(id)arg1 ;
-(unsigned long long)computeFlagsForInput:(id)arg1 ;
-(id)createMessageItemWithInput:(id)arg1 ;
-(id)initWithAccount:(id)arg1 messageStore:(id)arg2 ;
-(BOOL)canSuppressMessageWithInput:(id)arg1 ;
@end

