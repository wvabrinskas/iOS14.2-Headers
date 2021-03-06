/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDSQLiteOrderingTerm : NSObject <NSCopying> {

	BOOL _ascending;
	NSString* _expression;

}

@property (nonatomic,copy,readonly) NSString * expression;              //@synthesize expression=_expression - In the implementation block
@property (nonatomic,readonly) BOOL ascending;                          //@synthesize ascending=_ascending - In the implementation block
+(id)orderingTermWithProperty:(id)arg1 entityClass:(Class)arg2 ascending:(BOOL)arg3 ;
-(id)SQL;
-(NSString *)expression;
-(id)init;
-(BOOL)ascending;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithExpression:(id)arg1 ascending:(BOOL)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

