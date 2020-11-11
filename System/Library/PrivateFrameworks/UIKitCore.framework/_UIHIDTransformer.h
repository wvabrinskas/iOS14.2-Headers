/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIHIDContext, NSMutableArray, NSMutableDictionary;

@interface _UIHIDTransformer : NSObject {

	_UIHIDContext* _hidContext;
	NSMutableArray* _hidEvents;
	NSMutableDictionary* _hidContextByContextId;
	unsigned _contextId;
	IOHIDEventRef _hidEvent;
	CGSize _canvasSize;
	CGAffineTransform _eventTransform;

}

@property (assign,nonatomic) CGSize canvasSize;               //@synthesize canvasSize=_canvasSize - In the implementation block
@property (assign,nonatomic) unsigned contextId;              //@synthesize contextId=_contextId - In the implementation block
-(id)handleHIDEvent:(IOHIDEventRef)arg1 ;
-(void)setContextId:(unsigned)arg1 ;
-(id)_inputEventsForHIDEvent:(IOHIDEventRef)arg1 ;
-(unsigned)contextId;
-(void)setCanvasSize:(CGSize)arg1 ;
-(id)initWithRunLoop:(CFRunLoopRef)arg1 ;
-(id)drainOutputHIDEvents;
-(void)addOutputHIDEvent:(id)arg1 ;
-(CGSize)canvasSize;
@end
