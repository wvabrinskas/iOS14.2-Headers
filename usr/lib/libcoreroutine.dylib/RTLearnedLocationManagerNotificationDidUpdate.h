/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTLearnedLocationManagerNotificationDidUpdate : RTNotification {

	double _intervalSinceLastUpdate;

}

@property (assign,nonatomic) double intervalSinceLastUpdate;              //@synthesize intervalSinceLastUpdate=_intervalSinceLastUpdate - In the implementation block
-(id)description;
-(double)intervalSinceLastUpdate;
-(id)initWithIntervalSinceLastUpdate:(double)arg1 ;
-(void)setIntervalSinceLastUpdate:(double)arg1 ;
@end

