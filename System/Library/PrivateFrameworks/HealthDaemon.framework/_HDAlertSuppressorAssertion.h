/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDAssertion.h>

@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface _HDAlertSuppressorAssertion : HDAssertion {

	NSString* _processBundleIdentifier;
	NSObject*<OS_dispatch_source> _keepaliveTimer;

}

@property (nonatomic,copy,readonly) NSString * processBundleIdentifier;                 //@synthesize processBundleIdentifier=_processBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> keepaliveTimer;              //@synthesize keepaliveTimer=_keepaliveTimer - In the implementation block
-(NSString *)processBundleIdentifier;
-(NSObject*<OS_dispatch_source>)keepaliveTimer;
-(id)initWithOwnerIdentifier:(id)arg1 processBundleIdentifier:(id)arg2 ;
-(void)setKeepaliveTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end

