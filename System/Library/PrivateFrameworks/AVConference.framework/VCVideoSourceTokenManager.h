/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary, NSObject;

@interface VCVideoSourceTokenManager : NSObject {

	VCVideoSourceTokenManager* _tokenManager;
	NSMutableDictionary* _videoSourceTokens;
	NSMutableDictionary* _sourceNames;
	unsigned long long _identifierSeeds[4];
	NSObject*<OS_dispatch_queue> _tokenManagerQueue;

}
+(id)sharedManager;
-(id)init;
-(id)deviceNameForToken:(VCVideoSourceToken)arg1 ;
-(VCVideoSourceToken)tokenForDeviceName:(id)arg1 sourceType:(int)arg2 ;
-(VCVideoSourceToken)createtokenForDeviceName:(id)arg1 sourceType:(int)arg2 ;
-(void)dealloc;
@end

