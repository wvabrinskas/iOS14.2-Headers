/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>

@interface HMDRecordChangedLogEvent : HMDLogEvent {

	BOOL _legacy;
	unsigned long long _size;

}

@property (nonatomic,readonly) unsigned long long size;                  //@synthesize size=_size - In the implementation block
@property (getter=isLegacy,nonatomic,readonly) BOOL legacy;              //@synthesize legacy=_legacy - In the implementation block
+(id)uuid;
-(BOOL)isLegacy;
-(unsigned long long)size;
-(id)initWithChangedRecord:(id)arg1 isLegacy:(BOOL)arg2 ;
@end
