/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBIdleTimerActivation.h>
#import <libobjc.A.dylib/SBIdleTimer.h>

@class NSHashTable, NSString;

@interface SBIdleTimerBase : NSObject <SBIdleTimerActivation, SBIdleTimer> {

	NSHashTable* _observers;

}

@property (nonatomic,readonly) NSHashTable * observers;                      //@synthesize observers=_observers - In the implementation block
@property (assign,getter=isActivated,nonatomic) BOOL activated; 
@property (getter=isDisabled,nonatomic,readonly) BOOL disabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isActivated;
-(void)setActivated:(BOOL)arg1 ;
-(id)succinctDescription;
-(BOOL)isEqualToTimer:(id)arg1 ;
-(BOOL)isDisabled;
-(unsigned long long)hash;
-(NSHashTable *)observers;
-(void)removeIdleTimerObserver:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_logExpirationTimeout:(double)arg1 ;
-(void)reset;
-(void)removeAllIdleTimerObservers;
-(void)_makeObserversPerformSelector:(SEL)arg1 ;
-(NSString *)description;
-(void)addIdleTimerObserver:(id)arg1 ;
-(void)conformsToSBIdleTimerActivation;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
