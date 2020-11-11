/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSPredicate;

@interface NSExpression : NSObject <NSSecureCoding, NSCopying> {

	struct {
		unsigned _evaluationBlocked : 1;
		unsigned _reservedExpressionFlags : 31;
	}  _expressionFlags;
	unsigned reserved;
	unsigned long long _expressionType;

}

@property (readonly) unsigned long long expressionType; 
@property (retain,readonly) id constantValue; 
@property (copy,readonly) NSString * keyPath; 
@property (copy,readonly) NSString * function; 
@property (copy,readonly) NSString * variable; 
@property (copy,readonly) NSExpression * operand; 
@property (copy,readonly) NSArray * arguments; 
@property (retain,readonly) id collection; 
@property (copy,readonly) NSPredicate * predicate; 
@property (copy,readonly) NSExpression * leftExpression; 
@property (copy,readonly) NSExpression * rightExpression; 
@property (copy,readonly) NSExpression * trueExpression; 
@property (copy,readonly) NSExpression * falseExpression; 
@property (copy,readonly) id expressionBlock; 
+(id)expressionForTernaryWithPredicate:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3 ;
+(id)expressionForSubquery:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3 ;
+(id)expressionForConditional:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3 ;
+(id)expressionForVariableNameAssignment:(id)arg1 expression:(id)arg2 ;
+(id)expressionForFunction:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)expressionForFunction:(id)arg1 arguments:(id)arg2 ;
+(id)expressionWithFormat:(id)arg1 argumentArray:(id)arg2 ;
+(id)_newKeyPathExpressionForString:(id)arg1 ;
+(id)expressionWithFormat:(id)arg1 arguments:(char*)arg2 ;
+(id)expressionForIntersectSet:(id)arg1 with:(id)arg2 ;
+(id)expressionForEvaluatedObject;
+(id)expressionForSymbolicString:(id)arg1 ;
+(id)expressionForConstantValue:(id)arg1 ;
+(id)expressionForUnionSet:(id)arg1 with:(id)arg2 ;
+(id)expressionForMinusSet:(id)arg1 with:(id)arg2 ;
+(id)expressionForBlock:(/*^block*/id)arg1 arguments:(id)arg2 ;
+(id)expressionForVariable:(id)arg1 ;
+(id)expressionWithFormat:(id)arg1 ;
+(id)expressionForAnyKey;
+(id)expressionForKeyPath:(id)arg1 ;
+(id)expressionForAggregate:(id)arg1 ;
-(id)minimalFormInContext:(id)arg1 ;
-(id)_keypathsForDerivedPropertyValidation:(id*)arg1 ;
-(id)collection;
-(NSString *)keyPath;
-(NSString *)function;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)predicateFormat;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)variable;
-(id)subexpression;
-(BOOL)_shouldUseParensWithDescription;
-(NSPredicate *)predicate;
-(void)allowEvaluation;
-(NSExpression *)leftExpression;
-(NSExpression *)rightExpression;
-(NSArray *)arguments;
-(NSExpression *)operand;
-(unsigned long long)expressionType;
-(NSExpression *)trueExpression;
-(NSExpression *)falseExpression;
-(id)expressionBlock;
-(id)description;
-(id)initWithExpressionType:(unsigned long long)arg1 ;
-(SEL)selector;
-(id)constantValue;
-(id)initWithCoder:(id)arg1 ;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_allowsEvaluation;
@end
