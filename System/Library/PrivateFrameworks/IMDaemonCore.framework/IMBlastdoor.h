/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IMBlastdoor : NSObject
+(void)sendBlastDoorError:(id)arg1 guid:(id)arg2 command:(id)arg3 senderURI:(id)arg4 senderToken:(id)arg5 messageContext:(id)arg6 payloadAttachmentURL:(id)arg7 ;
+(void)sendDictionary:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
+(long long)_convertErrorToBlastdoorError:(id)arg1 ;
+(void)_askToTapToRadarForGUID:(id)arg1 command:(id)arg2 sender:(id)arg3 errorString:(id)arg4 payloadAttachmentURL:(id)arg5 ;
+(id)blastdoorInterface;
+(BOOL)supportsFeature:(id)arg1 ;
+(BOOL)_commandReadyForBlastdoor:(long long)arg1 ;
+(BOOL)_messageBlastdoorMetricsEnabled;
+(id)logger;
@end

