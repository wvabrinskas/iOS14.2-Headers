/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptToken, REScriptASTNode;

@interface REScriptASTBinaryExpressionNode : REScriptASTNode {

	REScriptToken* _binaryOperator;
	REScriptASTNode* _expression;

}

@property (nonatomic,readonly) REScriptToken * binaryOperator;              //@synthesize binaryOperator=_binaryOperator - In the implementation block
@property (nonatomic,readonly) REScriptASTNode * expression;                //@synthesize expression=_expression - In the implementation block
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(REScriptASTNode *)expression;
-(REScriptToken *)binaryOperator;
-(id)dependencies;
-(id)initWithOperator:(id)arg1 expression:(id)arg2 ;
@end

