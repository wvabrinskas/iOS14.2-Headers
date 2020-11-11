/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet;

@interface CLSCalendarEventsCacheMonth : NSObject {

	long long _month;
	NSMutableSet* _days;

}

@property (assign,nonatomic) long long month;                    //@synthesize month=_month - In the implementation block
@property (nonatomic,readonly) NSMutableSet * days;              //@synthesize days=_days - In the implementation block
-(NSMutableSet *)days;
-(long long)month;
-(void)setMonth:(long long)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMonth:(long long)arg1 ;
@end
