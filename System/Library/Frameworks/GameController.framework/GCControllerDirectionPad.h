/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/GCControllerElement.h>

@class GCControllerAxisInput, GCControllerButtonInput;

@interface GCControllerDirectionPad : GCControllerElement {

	BOOL _wasZeroed;
	int _timesPressed;
	BOOL _nonAnalog;
	/*^block*/id _valueChangedHandler;
	GCControllerAxisInput* _xAxis;
	GCControllerAxisInput* _yAxis;

}

@property (nonatomic,retain) GCControllerAxisInput * xAxis;                  //@synthesize xAxis=_xAxis - In the implementation block
@property (nonatomic,retain) GCControllerAxisInput * yAxis;                  //@synthesize yAxis=_yAxis - In the implementation block
@property (assign) BOOL nonAnalog;                                           //@synthesize nonAnalog=_nonAnalog - In the implementation block
@property (nonatomic,copy) id valueChangedHandler;                           //@synthesize valueChangedHandler=_valueChangedHandler - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * up; 
@property (nonatomic,readonly) GCControllerButtonInput * down; 
@property (nonatomic,readonly) GCControllerButtonInput * left; 
@property (nonatomic,readonly) GCControllerButtonInput * right; 
-(GCControllerButtonInput *)down;
-(GCControllerAxisInput *)xAxis;
-(GCControllerAxisInput *)yAxis;
-(id)description;
-(void)setYAxis:(GCControllerAxisInput *)arg1 ;
-(GCControllerButtonInput *)right;
-(void)setValueChangedHandler:(id)arg1 ;
-(GCControllerButtonInput *)left;
-(GCControllerButtonInput *)up;
-(void)setXAxis:(GCControllerAxisInput *)arg1 ;
-(BOOL)isAnalog;
-(id)valueChangedHandler;
-(int)getAndResetTimesPressed;
-(BOOL)_commitPendingValueOnQueue:(id)arg1 ;
-(id)initWithDigital:(BOOL)arg1 descriptionName:(id)arg2 ;
-(void)setNonAnalog:(BOOL)arg1 ;
-(void)_fireValueChangedWithQueue:(id)arg1 ;
-(BOOL)nonAnalog;
-(id)initWithDigital:(BOOL)arg1 ;
-(void)_fireValueChanged;
-(void)setValueForXAxis:(float)arg1 yAxis:(float)arg2 ;
@end

