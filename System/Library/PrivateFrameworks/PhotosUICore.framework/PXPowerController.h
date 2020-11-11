/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, BKSProcessAssertion;

@interface PXPowerController : NSObject {

	AI _assertionIdentifierGenerator;
	BOOL _backgrounded;
	unsigned _assertionID;
	NSMutableDictionary* _assertionReasonsByIdentifier;
	NSObject*<OS_dispatch_queue> _powerControllerQueue;
	BKSProcessAssertion* _backgroundProcessAssertion;
	double _powerAssertionStartTime;

}

@property (nonatomic,readonly) NSMutableDictionary * assertionReasonsByIdentifier;              //@synthesize assertionReasonsByIdentifier=_assertionReasonsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> powerControllerQueue;               //@synthesize powerControllerQueue=_powerControllerQueue - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * backgroundProcessAssertion;                  //@synthesize backgroundProcessAssertion=_backgroundProcessAssertion - In the implementation block
@property (assign,nonatomic) unsigned assertionID;                                              //@synthesize assertionID=_assertionID - In the implementation block
@property (assign,nonatomic) double powerAssertionStartTime;                                    //@synthesize powerAssertionStartTime=_powerAssertionStartTime - In the implementation block
@property (assign,getter=isBackgrounded,nonatomic) BOOL backgrounded;                           //@synthesize backgrounded=_backgrounded - In the implementation block
@property (nonatomic,readonly) BOOL hasPowerAssertion; 
@property (nonatomic,readonly) BOOL hasBackgroundAssertion; 
+(id)sharedController;
-(void)releasePowerAssertion;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(unsigned)assertionID;
-(id)init;
-(void)setBackgrounded:(BOOL)arg1 ;
-(void)removePowerAssertionForIdentifier:(unsigned)arg1 withReason:(unsigned)arg2 ;
-(void)addPowerAssertionForIdentifier:(unsigned)arg1 withReason:(unsigned)arg2 ;
-(void)takePowerAssertionIfNeeded;
-(void)takePowerAssertion;
-(void)releasePowerAssertionIfNeeded;
-(BOOL)hasPowerAssertion;
-(void)handleEnteringForeground;
-(void)handleEnteringBackground;
-(void)invalidateBackgroundAssertionIfNeeded;
-(void)acquireBackgroundAssertionIfNeeded;
-(void)invalidateBackgroundAssertion;
-(void)acquireBackgroundAssertion;
-(BOOL)hasBackgroundAssertion;
-(NSMutableDictionary *)assertionReasonsByIdentifier;
-(NSObject*<OS_dispatch_queue>)powerControllerQueue;
-(BKSProcessAssertion *)backgroundProcessAssertion;
-(void)setBackgroundProcessAssertion:(BKSProcessAssertion *)arg1 ;
-(double)powerAssertionStartTime;
-(void)setPowerAssertionStartTime:(double)arg1 ;
-(id)description;
-(void)setAssertionID:(unsigned)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(BOOL)isBackgrounded;
-(unsigned)generateAssertionIdentifier;
-(void)dealloc;
@end
