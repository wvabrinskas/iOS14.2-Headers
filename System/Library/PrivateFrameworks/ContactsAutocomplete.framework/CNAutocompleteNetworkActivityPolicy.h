/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNAutocompleteNetworkActivityPolicy.h>

@protocol CNAutocompleteNetworkActivityPolicy <NSObject>
@required
-(BOOL)shouldSearchServers;
-(double)delayBeforeBeginningNetworkActivity;

@end


@class NSString;

@interface CNAutocompleteNetworkActivityPolicy : NSObject <CNAutocompleteNetworkActivityPolicy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)policyWithNoDelay;
+(id)policyWithThrottlingDelayForString:(id)arg1 ;
-(BOOL)shouldSearchServers;
-(double)delayBeforeBeginningNetworkActivity;
@end

