/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AssistantSettingsSupport/AssistantSettingsSupport-Structs.h>
@interface ASTNetworkReachability : NSObject
+(SCNetworkReachabilityRef)createReachabilityForVoiceDownload;
+(BOOL)reachabilityHasNetworkConnection:(SCNetworkReachabilityRef)arg1 ;
+(BOOL)reachabilityHasNonWWANNetworkConnection:(SCNetworkReachabilityRef)arg1 ;
+(BOOL)hasNetworkConnection;
+(BOOL)hasNonWWANNetworkConnection;
@end
