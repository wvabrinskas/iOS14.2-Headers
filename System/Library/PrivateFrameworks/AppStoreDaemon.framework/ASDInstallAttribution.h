/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ASDServiceBroker;

@interface ASDInstallAttribution : NSObject {

	ASDServiceBroker* _serviceBroker;

}
+(id)sharedInstance;
+(id)interface;
-(id)init;
-(id)_initWithServiceBroker:(id)arg1 ;
-(void)addInstallAttributionParamsWithConfig:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addInstallAttributionParamsWithConfig:(id)arg1 ;
@end

