/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSManagedObjectContext;

@interface _NSMemoryStorePredicateRemapper : NSObject <NSPredicateVisitor> {

	NSManagedObjectContext* _context;

}
+(id)defaultInstance;
-(id)init;
-(id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2 ;
-(void)visitPredicate:(id)arg1 ;
-(id)createPredicateForFetchFromPredicate:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(void)dealloc;
-(void)visitPredicateExpression:(id)arg1 ;
@end
