/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface ACDEventLedger : NSObject {

	char* _crashInfoString;
	NSMutableArray* _eventLedger;

}

@property (retain) NSMutableArray * eventLedger;              //@synthesize eventLedger=_eventLedger - In the implementation block
+(id)sharedLedger;
-(void)recordEvent:(id)arg1 ;
-(id)init;
-(void)simulateCrashWithMessage:(id)arg1 ;
-(NSMutableArray *)eventLedger;
-(id)historyDescription;
-(void)setEventLedger:(NSMutableArray *)arg1 ;
@end

