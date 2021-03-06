/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStore/ISOperation.h>

@class AKAppleIDAuthenticationInAppContext, UIViewController, NSString;

@interface SUScriptAppleIdAuthenticationOperation : ISOperation {

	AKAppleIDAuthenticationInAppContext* _authenticationContext;
	UIViewController* _viewController;
	NSString* _status;

}

@property (nonatomic,retain) NSString * status;              //@synthesize status=_status - In the implementation block
-(void)run;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(id)initWithUsername:(id)arg1 password:(id)arg2 viewController:(id)arg3 ;
-(void)sendCompletionCallback:(id)arg1 ;
@end

