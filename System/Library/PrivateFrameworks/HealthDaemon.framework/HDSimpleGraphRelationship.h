/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDSimpleGraphObject.h>

@class NSString, HDSimpleGraphNode;

@interface HDSimpleGraphRelationship : HDSimpleGraphObject {

	BOOL _isReverseRelationship;
	NSString* _name;
	long long _nameID;
	long long _subjectID;
	long long _objectID;
	HDSimpleGraphNode* _subject;
	HDSimpleGraphNode* _object;

}

@property (assign,nonatomic,__weak) HDSimpleGraphNode * subject;              //@synthesize subject=_subject - In the implementation block
@property (assign,nonatomic,__weak) HDSimpleGraphNode * object;               //@synthesize object=_object - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long nameID;                              //@synthesize nameID=_nameID - In the implementation block
@property (nonatomic,readonly) BOOL isReverseRelationship;                    //@synthesize isReverseRelationship=_isReverseRelationship - In the implementation block
@property (nonatomic,readonly) long long subjectID;                           //@synthesize subjectID=_subjectID - In the implementation block
@property (nonatomic,readonly) long long objectID;                            //@synthesize objectID=_objectID - In the implementation block
-(long long)objectID;
-(HDSimpleGraphNode *)subject;
-(void)setSubject:(HDSimpleGraphNode *)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(id)debugDescription;
-(long long)nameID;
-(void)setObject:(HDSimpleGraphNode *)arg1 ;
-(NSString *)name;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)subjectID;
-(HDSimpleGraphNode *)object;
-(BOOL)isReverseRelationship;
-(id)initWithDatabase:(id)arg1 rowID:(long long)arg2 name:(id)arg3 nameID:(long long)arg4 isReverse:(BOOL)arg5 subjectID:(long long)arg6 subject:(id)arg7 objectID:(long long)arg8 object:(id)arg9 ;
-(id)work_subjectWithError:(id*)arg1 ;
-(id)work_databaseObjectWithError:(id*)arg1 ;
@end
