/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSValue;

@interface _UIViewPropertyAnimationUpdate : NSObject {

	BOOL _additive;
	BOOL _implicit;
	NSString* _propertyName;
	NSValue* _fromValue;
	NSValue* _toValue;
	double _startTime;
	double _duration;
	double _delay;

}

@property (getter=isImplicit,nonatomic,readonly) BOOL implicit;              //@synthesize implicit=_implicit - In the implementation block
@property (nonatomic,readonly) NSString * propertyName;                      //@synthesize propertyName=_propertyName - In the implementation block
@property (getter=isAdditive,nonatomic,readonly) BOOL additive;              //@synthesize additive=_additive - In the implementation block
@property (nonatomic,retain) NSValue * fromValue;                            //@synthesize fromValue=_fromValue - In the implementation block
@property (nonatomic,retain) NSValue * toValue;                              //@synthesize toValue=_toValue - In the implementation block
@property (assign,nonatomic) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double duration;                                //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double delay;                                   //@synthesize delay=_delay - In the implementation block
-(NSValue *)toValue;
-(void)setDuration:(double)arg1 ;
-(id)init;
-(void)setDelay:(double)arg1 ;
-(double)delay;
-(double)startTime;
-(NSValue *)fromValue;
-(BOOL)isImplicit;
-(void)setStartTime:(double)arg1 ;
-(id)initWithPropertyName:(id)arg1 implicit:(BOOL)arg2 additive:(BOOL)arg3 ;
-(void)setToValue:(NSValue *)arg1 ;
-(void)setFromValue:(NSValue *)arg1 ;
-(double)duration;
-(BOOL)isAdditive;
-(NSString *)propertyName;
@end
