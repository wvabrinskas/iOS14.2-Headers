/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSPromise.h>

@class NSString;

@interface ICAMSBagValuePromise : AMSPromise {

	NSString* _bagKey;
	unsigned long long _bagValueType;

}

@property (nonatomic,copy,readonly) NSString * bagKey;                       //@synthesize bagKey=_bagKey - In the implementation block
@property (nonatomic,readonly) unsigned long long bagValueType;              //@synthesize bagValueType=_bagValueType - In the implementation block
-(NSString *)bagKey;
-(id)initWithBagKey:(id)arg1 bagValueType:(unsigned long long)arg2 ;
-(unsigned long long)bagValueType;
@end

