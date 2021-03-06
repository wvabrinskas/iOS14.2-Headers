/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/STKAlertSessionResponseProvider.h>

@protocol OS_os_log;
@class NSObject, NSString;

@interface _STKClass0SMSResponseProvider : NSObject <STKAlertSessionResponseProvider> {

	NSObject*<OS_os_log> _logger;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> logger; 
@property (nonatomic,readonly) BOOL hasSentResponse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendResponse:(long long)arg1 ;
-(id)initWithLogger:(id)arg1 ;
-(BOOL)hasSentResponse;
-(void)sendResponse:(long long)arg1 withStringResult:(id)arg2 ;
-(NSObject*<OS_os_log>)logger;
@end

