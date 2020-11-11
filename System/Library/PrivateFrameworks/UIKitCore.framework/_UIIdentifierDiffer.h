/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIIdentifierDiffer.h>
@class NSIndexSet, NSSet, NSOrderedCollectionDifference;


@protocol _UIIdentifierDiffer <NSObject>
@property (nonatomic,readonly) NSIndexSet * insertedIndexes; 
@property (nonatomic,readonly) NSIndexSet * deletedIndexes; 
@property (nonatomic,readonly) NSSet * movePairs; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,readonly) NSOrderedCollectionDifference * collectionDifference; 
@required
-(BOOL)hasChanges;
-(NSIndexSet *)insertedIndexes;
-(NSSet *)movePairs;
-(NSOrderedCollectionDifference *)collectionDifference;
-(NSIndexSet *)deletedIndexes;

@end


@class NSIndexSet, NSSet, NSOrderedCollectionDifference, NSOrderedSet, NSString;

@interface _UIIdentifierDiffer : NSObject <_UIIdentifierDiffer> {

	NSOrderedSet* _beforeIdentifiers;
	NSOrderedSet* _afterIdentifiers;
	NSIndexSet* _insertedIndexes;
	NSIndexSet* _deletedIndexes;
	NSSet* _movePairs;
	BOOL _identifiersAreUnique;
	NSOrderedCollectionDifference* _collectionDifference;

}

@property (nonatomic,readonly) NSOrderedSet * beforeIdentifiers; 
@property (nonatomic,readonly) NSOrderedSet * afterIdentifiers; 
@property (nonatomic,readonly) NSOrderedCollectionDifference * collectionDifference; 
@property (nonatomic,readonly) NSIndexSet * insertedIndexes; 
@property (nonatomic,readonly) NSIndexSet * deletedIndexes; 
@property (nonatomic,readonly) NSSet * movePairs; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasChanges;
-(void)_prepareDiffResultsFromCollectionDifference:(id)arg1 ;
-(void)performDiffWithOptions:(long long)arg1 ;
-(NSIndexSet *)insertedIndexes;
-(NSOrderedSet *)afterIdentifiers;
-(id)initWithBeforeIdentifiers:(id)arg1 afterIdentifiers:(id)arg2 collectionDifference:(id)arg3 ;
-(NSSet *)movePairs;
-(void)_performHeckelDiffWithOptions:(long long)arg1 ;
-(void)_performFoundationDiffWithOptions:(long long)arg1 ;
-(void)_performDiffWithOptions:(long long)arg1 ;
-(NSString *)description;
-(NSOrderedCollectionDifference *)collectionDifference;
-(NSIndexSet *)deletedIndexes;
-(NSOrderedSet *)beforeIdentifiers;
-(void)performDiff;
-(id)initWithBeforeIdentifiers:(id)arg1 afterIdentifiers:(id)arg2 ;
@end
