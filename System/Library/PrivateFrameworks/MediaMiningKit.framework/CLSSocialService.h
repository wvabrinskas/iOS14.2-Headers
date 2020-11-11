/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSURL;

@interface CLSSocialService : NSObject {

	NSMutableDictionary* _proxy;
	unsigned long long _intent;
	NSURL* _proxyURL;

}

@property (readonly) unsigned long long intent;              //@synthesize intent=_intent - In the implementation block
@property (copy) NSURL * proxyURL;                           //@synthesize proxyURL=_proxyURL - In the implementation block
+(id)defaultFileName;
+(id)socialService;
-(id)init;
-(unsigned long long)intent;
-(void)invalidateMemoryCaches;
-(void)updateProxy;
-(NSURL *)proxyURL;
-(id)initWithProxyAtURL:(id)arg1 andIntent:(unsigned long long)arg2 ;
-(void)setProxyURL:(NSURL *)arg1 ;
-(id)proxiedValueForKey:(id)arg1 ;
-(void)setProxiedValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)flushProxy;
@end
