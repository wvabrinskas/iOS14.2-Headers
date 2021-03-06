/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <KnowledgeGraphKit/KGElementCollection.h>

@class KGElementIdentifierSet, NSMutableArray, KGDegasGraphStore;

@interface KGDegasElementCollection : KGElementCollection {

	KGElementIdentifierSet* _identifiers;
	NSMutableArray* _arrayPages;
	os_unfair_lock_s _pageFillLock;
	KGDegasGraphStore* _store;

}

@property (nonatomic,readonly) KGDegasGraphStore * store;              //@synthesize store=_store - In the implementation block
-(unsigned long long)pageOffsetForIndex:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)lastObject;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)allObjects;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(KGDegasGraphStore *)store;
-(id)firstObject;
-(id)initWithIdentifiers:(id)arg1 store:(id)arg2 ;
-(unsigned long long)pageNumberForIndex:(unsigned long long)arg1 ;
-(id)elementsForIdentifiers:(id)arg1 ;
-(id)fillPage:(unsigned long long)arg1 ;
-(id)getPage:(unsigned long long)arg1 ;
@end

