/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSSQLStatementIntermediate.h>

@class NSSQLSelectIntermediate, NSSQLGroupByIntermediate, NSSQLHavingIntermediate, NSSQLOffsetIntermediate, NSMutableArray, NSMutableDictionary;

@interface NSSQLFetchIntermediate : NSSQLStatementIntermediate {

	NSSQLSelectIntermediate* _selectClause;
	NSSQLGroupByIntermediate* _groupByClause;
	NSSQLHavingIntermediate* _havingClause;
	NSSQLOffsetIntermediate* _offsetClause;
	NSMutableArray* _groupByKeypaths;
	BOOL _isDictionaryCountFetch;
	NSMutableArray* _joinIntermediates;
	NSMutableDictionary* _joinKeypaths;

}
-(id)joinIntermediates;
-(void)addGroupByKeypath:(id)arg1 ;
-(void)promoteToOuterJoinsAlongKeypathWithComponents:(id)arg1 ;
-(BOOL)groupByClauseContainsKeypath:(id)arg1 ;
-(void)setDictionaryCountFetch:(BOOL)arg1 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)fetchIntermediateForKeypathExpression:(id)arg1 ;
-(void)setGroupByIntermediate:(id)arg1 ;
-(id)finalJoinForKeypathWithComponents:(id)arg1 ;
-(void)setOffsetIntermediate:(id)arg1 ;
-(id)_generateJoinSQLStringInContext:(id)arg1 ;
-(void)setSelectIntermediate:(id)arg1 ;
-(void)setHavingIntermediate:(id)arg1 ;
-(id)groupByIntermediate;
-(id)selectIntermediate;
-(id)initWithScope:(id)arg1 ;
-(BOOL)isDictionaryCountFetch;
-(void)selectDistinct;
-(id)fetchIntermediate;
-(id)havingIntermediate;
-(BOOL)isFunctionScoped;
-(void)dealloc;
-(void)addJoinIntermediate:(id)arg1 atKeypathWithComponents:(id)arg2 ;
-(void)promoteToOuterJoinAtKeypathWithComponents:(id)arg1 ;
@end
