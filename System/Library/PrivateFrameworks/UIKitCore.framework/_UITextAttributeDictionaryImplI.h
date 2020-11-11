/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@protocol _UITextAttributeDefaults;
@class NSMutableDictionary, NSMutableSet;

@interface _UITextAttributeDictionaryImplI : NSMutableDictionary {

	id<_UITextAttributeDefaults> _fallback;
	NSMutableDictionary* _storage;
	NSMutableSet* _ignoring;

}
+(Class)_ignoringClass;
+(BOOL)_isMutable;
+(Class)_storageClass;
-(id)objectForKey:(id)arg1 ;
-(BOOL)isEqualToDictionary:(id)arg1 ;
-(BOOL)usesFallbackForKey:(id)arg1 ;
-(id)init;
-(id)_fullDictionary;
-(unsigned long long)hash;
-(BOOL)ignoresFallbackForKey:(id)arg1 ;
-(id)initWithFallback:(id)arg1 ;
-(id)_keysIfThereIsFallback;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)_removeFallbackFromStorage;
-(id)allKeys;
-(id)_initWithStorage:(id)arg1 fallback:(id)arg2 ignoring:(id)arg3 ;
-(id)description;
-(id)keyEnumerator;
-(id)initWithDictionary:(id)arg1 fallback:(id)arg2 ;
-(id)_initWithDictionary:(id)arg1 copyItems:(BOOL)arg2 fallback:(id)arg3 ;
-(id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
-(BOOL)isNSDictionary__;
-(id)fallback;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)sparseDictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
