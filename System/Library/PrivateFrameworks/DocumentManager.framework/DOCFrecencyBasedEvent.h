/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface DOCFrecencyBasedEvent : NSObject {

	NSDate* _lastUsedDate;
	double _frecency;

}

@property (nonatomic,retain) NSDate * lastUsedDate;              //@synthesize lastUsedDate=_lastUsedDate - In the implementation block
@property (assign,nonatomic) double frecency;                    //@synthesize frecency=_frecency - In the implementation block
-(NSDate *)lastUsedDate;
-(void)setLastUsedDate:(NSDate *)arg1 ;
-(double)frecency;
-(double)frecencyScoreAtDate:(id)arg1 ;
-(void)setFrecency:(double)arg1 ;
-(void)updateFrecencyAtDate:(id)arg1 ;
@end
