/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, BMItem;

@interface BMEvent : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	BMItem* _item;

}

@property (nonatomic,copy,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) BMItem * item;                        //@synthesize item=_item - In the implementation block
-(BMItem *)item;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(id)description;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 item:(id)arg3 ;
@end

