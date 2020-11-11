/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSNumber;

@interface IMMessageNotificationTimer : NSObject {

	NSDate* _date;
	NSNumber* _numberDingsLeft;

}

@property (nonatomic,retain) NSDate * date;                             //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSNumber * numberDingsLeft;              //@synthesize numberDingsLeft=_numberDingsLeft - In the implementation block
@property (nonatomic,readonly) BOOL areDingsRemaining; 
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(NSDate *)date;
-(BOOL)areDingsRemaining;
-(void)reduceNumberDingsLeft;
-(NSNumber *)numberDingsLeft;
-(void)dealloc;
@end
