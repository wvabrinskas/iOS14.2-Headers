/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface REBlockSentinel : NSObject {

	BOOL _completed;
	/*^block*/id _failureBlock;

}

@property (getter=isCompleted) BOOL completed;               //@synthesize completed=_completed - In the implementation block
@property (nonatomic,readonly) id failureBlock;              //@synthesize failureBlock=_failureBlock - In the implementation block
-(id)init;
-(void)complete;
-(BOOL)isCompleted;
-(void)setCompleted:(BOOL)arg1 ;
-(id)failureBlock;
-(void)dealloc;
-(id)initWithFailureBlock:(/*^block*/id)arg1 ;
@end
