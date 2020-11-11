/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSArray;

@interface _INVocabularyGenerationDocument : NSObject <NSCopying> {

	NSMutableDictionary* _itemsBySiriIDCache;
	NSMutableDictionary* _itemsByStringCache;
	BOOL _resetOnNextSync;
	BOOL _haveAssignedAllSiriIDs;
	NSString* _appBundleID;
	NSString* _intentSlot;
	NSString* _validity;
	NSString* _thisGeneration;
	NSArray* _vocabularyItems;

}

@property (assign,nonatomic) BOOL haveAssignedAllSiriIDs;              //@synthesize haveAssignedAllSiriIDs=_haveAssignedAllSiriIDs - In the implementation block
@property (assign,nonatomic) BOOL resetOnNextSync;                     //@synthesize resetOnNextSync=_resetOnNextSync - In the implementation block
@property (nonatomic,copy) NSString * appBundleID;                     //@synthesize appBundleID=_appBundleID - In the implementation block
@property (nonatomic,copy) NSString * intentSlot;                      //@synthesize intentSlot=_intentSlot - In the implementation block
@property (nonatomic,copy) NSString * validity;                        //@synthesize validity=_validity - In the implementation block
@property (nonatomic,copy) NSString * thisGeneration;                  //@synthesize thisGeneration=_thisGeneration - In the implementation block
@property (nonatomic,copy) NSArray * vocabularyItems;                  //@synthesize vocabularyItems=_vocabularyItems - In the implementation block
-(NSString *)intentSlot;
-(NSString *)appBundleID;
-(void)setResetOnNextSync:(BOOL)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_itemsBySiriID;
-(id)diffFromPreviousDocument:(id)arg1 ;
-(void)setHaveAssignedAllSiriIDs:(BOOL)arg1 ;
-(BOOL)haveAssignedAllSiriIDs;
-(id)_valueForSelector:(SEL)arg1 ofClass:(Class)arg2 from:(id)arg3 ;
-(id)_initWithDictionary:(id)arg1 ;
-(id)description;
-(NSString *)thisGeneration;
-(id)_stringForSelector:(SEL)arg1 from:(id)arg2 ;
-(NSString *)validity;
-(id)writeToFile:(id)arg1 createIntermediateDirectories:(BOOL)arg2 ;
-(void)assignMissingSiriIDsForOptimalDiffFromPreviousDocument:(id)arg1 ;
-(id)_vocabularyItemWithString:(id)arg1 ;
-(BOOL)resetOnNextSync;
-(void)_takeValuesFromDictionary:(id)arg1 ;
-(NSArray *)vocabularyItems;
-(void)_addValueForSelector:(SEL)arg1 toDictionary:(id)arg2 ;
-(void)setValidity:(NSString *)arg1 ;
-(id)_vocabularyItemForSiriID:(id)arg1 ;
-(void)setAppBundleID:(NSString *)arg1 ;
-(id)_everyVocabularyItemSiriID;
-(void)setIntentSlot:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVocabularyItems:(NSArray *)arg1 ;
-(void)setThisGeneration:(NSString *)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(void)_clearVocabularyItemCaches;
@end
