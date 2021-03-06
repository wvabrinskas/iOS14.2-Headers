/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSStoreMapping.h>

@class NSString, NSManagedObjectModel, NSKnownKeysDictionary, NSMutableArray;

@interface NSSQLModel : NSStoreMapping {

	NSString* _configuration;
	NSManagedObjectModel* _mom;
	NSKnownKeysDictionary* _entitiesByName;
	NSMutableArray* _entities;
	id* _entityDescriptionToSQLMap;
	unsigned long long _brokenHashVersion;
	BOOL _retainLeopardStyleDictionaries;
	BOOL _modelHasPrecomputedKeyOrder;
	BOOL _hasVirtualToOnes;
	unsigned _entityIDOffset;
	unsigned _lastEntityID;

}
-(id)configurationName;
-(id)managedObjectModel;
-(id)entities;
-(BOOL)_useLeopardStyleHashing;
-(BOOL)_useSnowLeopardStyleHashing;
-(void)finalize;
-(id)_entityMapping;
-(BOOL)_modelHasPrecomputedKeyOrder;
-(id)_sqlEntityWithRenamingIdentifier:(id)arg1 ;
-(void)_addIndexedEntity:(id)arg1 ;
-(BOOL)_retainHashHack;
-(id)entityForID:(unsigned long long)arg1 ;
-(id)entityNamed:(id)arg1 ;
-(id)entitiesByName;
-(unsigned)_entityOffset;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 brokenHashVersion:(unsigned long long)arg3 ;
-(unsigned long long)entityIDForName:(id)arg1 ;
-(id)_precomputedKeyOrderForEntity:(id)arg1 ;
-(BOOL)_generateModel:(id)arg1 error:(id*)arg2 ;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(BOOL)arg3 ;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(BOOL)arg3 brokenHashVersion:(unsigned long long)arg4 ;
-(void)_recordHasVirtualToOnes;
-(unsigned)_lastEntityID;
-(void)dealloc;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 ;
@end

