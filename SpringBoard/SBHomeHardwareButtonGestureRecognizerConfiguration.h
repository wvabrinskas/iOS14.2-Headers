//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBSystemGestureManager, UIHBClickGestureRecognizer, UIHBLongClickGestureRecognizer;

@interface SBHomeHardwareButtonGestureRecognizerConfiguration : NSObject
{
    SBSystemGestureManager *_systemGestureManager;
    UIHBClickGestureRecognizer *_initialButtonDownGestureRecognizer;
    UIHBClickGestureRecognizer *_initialButtonUpGestureRecognizer;
    UIHBClickGestureRecognizer *_singlePressUpGestureRecognizer;
    UIHBClickGestureRecognizer *_acceleratedSinglePressUpGestureRecognizer;
    UIHBLongClickGestureRecognizer *_longPressGestureRecognizer;
    UIHBClickGestureRecognizer *_doublePressDownGestureRecognizer;
    UIHBClickGestureRecognizer *_doublePressUpGestureRecognizer;
    UIHBClickGestureRecognizer *_triplePressUpGestureRecognizer;
    UIHBClickGestureRecognizer *_doubleTapUpGestureRecognizer;
}


// Remaining properties
@property(retain, nonatomic) UIHBClickGestureRecognizer *acceleratedSinglePressUpGestureRecognizer; // @synthesize acceleratedSinglePressUpGestureRecognizer=_acceleratedSinglePressUpGestureRecognizer;
@property(retain, nonatomic) UIHBClickGestureRecognizer *doublePressDownGestureRecognizer; // @synthesize doublePressDownGestureRecognizer=_doublePressDownGestureRecognizer;
@property(retain, nonatomic) UIHBClickGestureRecognizer *doublePressUpGestureRecognizer; // @synthesize doublePressUpGestureRecognizer=_doublePressUpGestureRecognizer;
@property(retain, nonatomic) UIHBClickGestureRecognizer *doubleTapUpGestureRecognizer; // @synthesize doubleTapUpGestureRecognizer=_doubleTapUpGestureRecognizer;
@property(retain, nonatomic) UIHBClickGestureRecognizer *initialButtonDownGestureRecognizer; // @synthesize initialButtonDownGestureRecognizer=_initialButtonDownGestureRecognizer;
@property(retain, nonatomic) UIHBClickGestureRecognizer *initialButtonUpGestureRecognizer; // @synthesize initialButtonUpGestureRecognizer=_initialButtonUpGestureRecognizer;
@property(retain, nonatomic) UIHBLongClickGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(readonly, nonatomic) _Bool shouldConfigureDependencies;
@property(retain, nonatomic) UIHBClickGestureRecognizer *singlePressUpGestureRecognizer; // @synthesize singlePressUpGestureRecognizer=_singlePressUpGestureRecognizer;
@property(retain, nonatomic) SBSystemGestureManager *systemGestureManager; // @synthesize systemGestureManager=_systemGestureManager;
@property(retain, nonatomic) UIHBClickGestureRecognizer *triplePressUpGestureRecognizer; // @synthesize triplePressUpGestureRecognizer=_triplePressUpGestureRecognizer;
@end
