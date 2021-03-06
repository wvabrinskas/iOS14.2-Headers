/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreMotion/CoreMotion-Structs.h>
@interface CMMotionUtils : NSObject
+(BOOL)hasEntitlement:(id)arg1 ;
+(long long)authorizationStatus;
+(id)getExecutablePathFromPid:(int)arg1 ;
+(id)logDirectory;
+(BOOL)featureAvailability:(const char*)arg1 ;
+(void)tccServiceMotionAccessWithBlock:(/*^block*/id)arg1 ;
+(void)tccServiceMotionAccessWithLabel:(id)arg1 ;
+(id)fileHandleForWritingToURL:(id)arg1 ;
+(BOOL)isMotionActivityEntitled;
+(id)sendMessage:(shared_ptr<CLConnectionMessage>*)arg1 withReplyClassesSync:(id)arg2 ;
+(shared_ptr<CLConnectionMessage>*)sendMessageSync:(shared_ptr<CLConnectionMessage>*)arg1 ;
+(unsigned long long)copyDataFrom:(id)arg1 to:(id)arg2 ;
+(long long)isAuthorizedForEntitlement:(id)arg1 ;
+(void)sendMessage:(shared_ptr<CLConnectionMessage>*)arg1 withReplyClasses:(id)arg2 callback:(/*^block*/id)arg3 ;
@end

