/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NURule.h>

@interface _NUBlockRule : NURule {

	/*^block*/id _predicate;
	/*^block*/id _action;

}
-(void)performActionWithSystem:(id)arg1 ;
-(id)initWithPredicate:(/*^block*/id)arg1 action:(/*^block*/id)arg2 ;
-(BOOL)evaluatePredicateWithSystem:(id)arg1 ;
@end
