/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol AltAspect;
@class NSMutableDictionary, NSArray;

@interface AltClipCollection : NSObject <NSFastEnumeration, NSCopying> {

	NSMutableDictionary* _clips;
	id<AltAspect> _parentClip;

}

@property (nonatomic,retain) NSMutableDictionary * clips;                  //@synthesize clips=_clips - In the implementation block
@property (assign,nonatomic,__weak) id<AltAspect> parentClip;              //@synthesize parentClip=_parentClip - In the implementation block
@property (readonly) NSArray * allKeys; 
@property (readonly) NSArray * allValues; 
@property (readonly) unsigned long long count; 
+(id)recommendedAspects;
+(id)recommendedAdditionalAspects;
-(void)setClips:(NSMutableDictionary *)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_Sp29*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(NSMutableDictionary *)clips;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(unsigned long long)count;
-(NSArray *)allKeys;
-(NSArray *)allValues;
-(id)description;
-(id)initWithParent:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setParentClip:(id<AltAspect>)arg1 ;
-(id<AltAspect>)parentClip;
-(id)objectClosestToKeyedSubscript:(id)arg1 ;
@end

