/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PromotedContentSupport.framework/PromotedContentSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID, NSDate;

@interface PCStatusConditionRateLimitedObject : NSObject {

	NSUUID* _statusCondition;
	NSDate* _setTime;
	long long _operation;

}

@property (nonatomic,readonly) NSUUID * statusCondition;              //@synthesize statusCondition=_statusCondition - In the implementation block
@property (nonatomic,readonly) NSDate * setTime;                      //@synthesize setTime=_setTime - In the implementation block
@property (nonatomic,readonly) long long operation;                   //@synthesize operation=_operation - In the implementation block
-(NSDate *)setTime;
-(long long)operation;
-(id)init:(id)arg1 at:(id)arg2 kind:(long long)arg3 ;
-(NSUUID *)statusCondition;
@end
