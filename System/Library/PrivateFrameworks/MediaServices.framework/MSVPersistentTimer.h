/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PCPersistentTimer, NSString, NSDate;

@interface MSVPersistentTimer : NSObject {

	PCPersistentTimer* _timer;
	NSString* _name;
	/*^block*/id _block;
	NSDate* _startDate;
	double _interval;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(void)invalidateWithReason:(id)arg1 ;
-(id)initWithInterval:(double)arg1 name:(id)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)_handleTimerElapsed:(id)arg1 ;
-(void)invalidate;
-(BOOL)isValid;
-(void)dealloc;
@end
