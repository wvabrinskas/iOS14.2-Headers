/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@interface __NSDictionaryI : NSDictionary {

	unsigned _used : 57;
	unsigned _copyKeys : 1;
	unsigned _szidx : 6;
	id _list[0];

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)__apply:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)mutableCopy;
-(id)_cfMutableCopy;
-(unsigned long long)count;
-(double)_clumpingFactor;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyEnumerator;
-(double)_clumpingInterestingThreshold;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)dealloc;
@end

