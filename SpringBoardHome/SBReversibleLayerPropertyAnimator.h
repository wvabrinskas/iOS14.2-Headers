//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSInvalidatable-Protocol.h>
#import <SpringBoardHome/CAAnimationDelegate-Protocol.h>

@class BSAnimationSettings, CALayer, NSMutableArray, NSString;

@interface SBReversibleLayerPropertyAnimator : NSObject <CAAnimationDelegate, BSInvalidatable>
{
    _Bool _started;
    _Bool _invalidated;
    _Bool _reversedWithNewSettings;
    CALayer *_layer;
    NSString *_keyPath;
    double _initialValue;
    double _targetValue;
    BSAnimationSettings *_currentAnimationSettings;
    CDUnknownBlockType _completion;
    unsigned long long _reversalCount;
    unsigned long long _outstandingCAAnimationCompletionCount;
    NSString *_forwardAnimationKey;
    NSString *_forwardOffsetAnimationKey;
    NSMutableArray *_reversalAnimationKeys;
}


// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) BSAnimationSettings *currentAnimationSettings; // @synthesize currentAnimationSettings=_currentAnimationSettings;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *forwardAnimationKey; // @synthesize forwardAnimationKey=_forwardAnimationKey;
@property(copy, nonatomic) NSString *forwardOffsetAnimationKey; // @synthesize forwardOffsetAnimationKey=_forwardOffsetAnimationKey;
@property(readonly, nonatomic, getter=isGoingForward) _Bool goingForward;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double initialValue; // @synthesize initialValue=_initialValue;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(nonatomic) unsigned long long outstandingCAAnimationCompletionCount; // @synthesize outstandingCAAnimationCompletionCount=_outstandingCAAnimationCompletionCount;
@property(retain, nonatomic) NSMutableArray *reversalAnimationKeys; // @synthesize reversalAnimationKeys=_reversalAnimationKeys;
@property(nonatomic) unsigned long long reversalCount; // @synthesize reversalCount=_reversalCount;
@property(readonly, nonatomic, getter=hasReversed) _Bool reversed;
@property(nonatomic, getter=hasReversedWithNewSettings) _Bool reversedWithNewSettings; // @synthesize reversedWithNewSettings=_reversedWithNewSettings;
@property(nonatomic, getter=hasStarted) _Bool started; // @synthesize started=_started;
@property(readonly) Class superclass;
@property(readonly, nonatomic) double targetValue; // @synthesize targetValue=_targetValue;
@end
