/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AADataEventType.h>

@class NSArray;

@interface WAFollowingLocationListData : NSObject <AADataEventType> {

	NSArray* _locations;

}

@property (nonatomic,readonly) NSArray * locations;              //@synthesize locations=_locations - In the implementation block
+(id)dataName;
-(id)toDict;
-(id)initWithLocations:(id)arg1 ;
-(NSArray *)locations;
@end

