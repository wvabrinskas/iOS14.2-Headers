/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleAccount/AAAppleIDSettingsRequest.h>

@class NSString;

@interface AAUpdateNameRequest : AAAppleIDSettingsRequest {

	NSString* _newFirstName;
	NSString* _newLastName;

}
+(Class)responseClass;
-(id)urlRequest;
-(id)urlString;
-(id)initWithGrandSlamAccount:(id)arg1 accountStore:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 ;
@end

