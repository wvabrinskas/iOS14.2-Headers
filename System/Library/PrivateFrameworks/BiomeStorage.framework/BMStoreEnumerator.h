/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BMStreamDatastore, BMFrameStore, BMStoreBookmark;

@interface BMStoreEnumerator : NSObject {

	BMStreamDatastore* _ds;
	BMFrameStore* _currentFrameStore;
	unsigned long long _frameStoreOffset;
	double _iterationStartTime;

}

@property (nonatomic,readonly) BMFrameStore * currentFrameStore;              //@synthesize currentFrameStore=_currentFrameStore - In the implementation block
@property (nonatomic,readonly) BMStoreBookmark * bookmark; 
-(BMStoreBookmark *)bookmark;
-(void)nextEventWithContext:(/*^block*/id)arg1 ;
-(id)copyPeekUntypedEvent;
-(id)initWithStreamDatastore:(id)arg1 currentFrameStore:(id)arg2 frameStoreOffset:(unsigned long long)arg3 iterationStartTime:(double)arg4 ;
-(id)copyNextEvent;
-(id)initWithStreamDatastore:(id)arg1 startTime:(double)arg2 ;
-(id)copyNextUntypedEvent;
-(id)copyNextEventAndMoveBookmark:(BOOL)arg1 ;
-(BMFrameStore *)currentFrameStore;
-(id)copyPeekEvent;
-(void)dealloc;
-(id)initWithStreamDatastore:(id)arg1 bookmark:(id)arg2 ;
@end

