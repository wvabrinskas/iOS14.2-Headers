/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPointerFunctions;

@interface NSPointerArray : NSObject <NSFastEnumeration, NSCopying, NSSecureCoding>

@property (copy,readonly) NSPointerFunctions * pointerFunctions; 
@property (assign) unsigned long long count; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)pointerArrayWithWeakObjects;
+(id)strongObjectsPointerArray;
+(id)pointerArrayWithPointerFunctions:(id)arg1 ;
+(id)weakObjectsPointerArray;
+(id)pointerArrayWithOptions:(unsigned long long)arg1 ;
+(id)pointerArrayWithStrongObjects;
-(void)setCount:(unsigned long long)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(void)removePointerAtIndex:(unsigned long long)arg1 ;
-(void)compact;
-(NSPointerFunctions *)pointerFunctions;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)mutableArray;
-(id)allObjects;
-(id)initWithPointerFunctions:(id)arg1 ;
-(void)addPointer:(void*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)insertPointer:(void*)arg1 atIndex:(unsigned long long)arg2 ;
-(void*)pointerAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void*)arg2 ;
-(Class)classForCoder;
@end
