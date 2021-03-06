/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class _PFResultArray;

@interface _PFResultObject : NSDictionary {

	_PFResultArray* _parent_buffer;
	int _cd_rc;
	unsigned _count;
	unsigned long long _sql_entity_id;
	unsigned long long _primary_key;

}
+(Class)classForKeyedUnarchiver;
-(id)objectForKey:(id)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(oneway void)release;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)_setParentBuffer:(id)arg1 ;
-(id)retain;
-(unsigned long long)count;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(id)keyEnumerator;
-(unsigned long long)retainCount;
-(Class)classForCoder;
-(void)dealloc;
@end

