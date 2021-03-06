/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSString;

@interface CATState : NSObject {

	NSMutableDictionary* mTransitionByTriggeringEvent;
	NSString* _name;
	SEL _enterAction;
	SEL _exitAction;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) SEL enterAction;                     //@synthesize enterAction=_enterAction - In the implementation block
@property (assign,nonatomic) SEL exitAction;                      //@synthesize exitAction=_exitAction - In the implementation block
+(id)new;
-(void)setExitAction:(SEL)arg1 ;
-(id)init;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(SEL)exitAction;
-(SEL)enterAction;
-(void)addTransitionToState:(id)arg1 triggeringEvent:(id)arg2 ;
-(void)setEnterAction:(SEL)arg1 ;
-(id)transitionWithTriggeringEvent:(id)arg1 ;
-(void)addTransitionToState:(id)arg1 triggeringEvent:(id)arg2 action:(SEL)arg3 ;
@end

