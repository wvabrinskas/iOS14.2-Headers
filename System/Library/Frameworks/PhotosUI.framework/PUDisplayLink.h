/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CADisplayLink;

@interface PUDisplayLink : NSObject {

	/*^block*/id _updateHandler;
	/*^block*/id _completionHandler;
	CADisplayLink* _displayLink;

}

@property (nonatomic,copy) id updateHandler;                           //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
-(void)start;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(id)completionHandler;
-(id)updateHandler;
-(CADisplayLink *)displayLink;
-(void)setUpdateHandler:(id)arg1 ;
-(void)_update:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)stop;
-(id)initWithUpdateHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
