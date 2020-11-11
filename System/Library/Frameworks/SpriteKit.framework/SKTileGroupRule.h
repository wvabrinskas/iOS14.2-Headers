/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSString, SKTileGroup, NSArray;

@interface SKTileGroupRule : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _tileDefinitions;
	NSMutableArray* _tileDefinitionIDs;
	unsigned char _adjacency;
	NSString* _name;
	SKTileGroup* _parentGroup;

}

@property (nonatomic,readonly) NSArray * tileDefinitionIDs; 
@property (assign,nonatomic,__weak) SKTileGroup * parentGroup;              //@synthesize parentGroup=_parentGroup - In the implementation block
@property (assign,nonatomic) unsigned long long adjacency; 
@property (nonatomic,copy) NSArray * tileDefinitions; 
@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)tileGroupRuleWithAdjacency:(unsigned long long)arg1 tileDefinitions:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqualToNode:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SKTileGroup *)parentGroup;
-(void)setParentGroup:(SKTileGroup *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)adjacency;
-(void)setAdjacency:(unsigned long long)arg1 ;
-(void)setTileDefinitionParentPointers;
-(NSArray *)tileDefinitions;
-(void)setTileDefinitions:(NSArray *)arg1 ;
-(NSArray *)tileDefinitionIDs;
-(void)setTileDefinitionIDs:(NSArray *)arg1 ;
-(id)initWithAdjacency:(unsigned long long)arg1 tileDefinitions:(id)arg2 ;
-(void)calcTileDefinitionIDsWithTileSet:(id)arg1 ;
-(void)setTileDefinitionsFromIDsWithTileSet:(id)arg1 ;
@end
