/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSArray;

@interface AMSThreadSafeDictionary : NSObject {

	NSMutableDictionary* _backingDictionary;
	NSObject*<OS_dispatch_queue> _backingDictionaryAccessQueue;

}

@property (nonatomic,retain) NSMutableDictionary * backingDictionary;                                //@synthesize backingDictionary=_backingDictionary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backingDictionaryAccessQueue;              //@synthesize backingDictionaryAccessQueue=_backingDictionaryAccessQueue - In the implementation block
@property (copy,readonly) NSArray * allKeys; 
@property (copy,readonly) NSArray * allValues; 
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(id)init;
-(NSObject*<OS_dispatch_queue>)backingDictionaryAccessQueue;
-(void)setBackingDictionaryAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setBackingDictionary:(NSMutableDictionary *)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(NSArray *)allKeys;
-(NSArray *)allValues;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSMutableDictionary *)backingDictionary;
@end
