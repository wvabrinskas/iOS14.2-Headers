/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptASTNode, REScriptToken;

@interface REScriptASTMemberExpressionNode : REScriptASTNode {

	REScriptASTNode* _expression;
	REScriptToken* _member;

}

@property (nonatomic,readonly) REScriptASTNode * expression;              //@synthesize expression=_expression - In the implementation block
@property (nonatomic,readonly) REScriptToken * member;                    //@synthesize member=_member - In the implementation block
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(REScriptToken *)member;
-(REScriptASTNode *)expression;
-(id)dependencies;
-(id)initWithMember:(id)arg1 expression:(id)arg2 ;
@end
