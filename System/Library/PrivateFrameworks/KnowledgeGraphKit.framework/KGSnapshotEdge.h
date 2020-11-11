/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/KGEdge.h>

@protocol KGNode;
@class NSArray, NSDictionary, NSString;

@interface KGSnapshotEdge : NSObject <KGEdge> {

	float _weight;
	unsigned long long _identifier;
	NSArray* _labels;
	NSDictionary* _properties;
	id<KGNode> _sourceNode;
	id<KGNode> _targetNode;

}

@property (nonatomic,readonly) id<KGNode> targetNode;                       //@synthesize targetNode=_targetNode - In the implementation block
@property (nonatomic,readonly) id<KGNode> sourceNode;                       //@synthesize sourceNode=_sourceNode - In the implementation block
@property (nonatomic,readonly) unsigned long long identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) float weight;                                //@synthesize weight=_weight - In the implementation block
@property (nonatomic,copy,readonly) NSArray * labels;                       //@synthesize labels=_labels - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<KGNode>)targetNode;
-(float)weight;
-(NSArray *)labels;
-(unsigned long long)hash;
-(unsigned long long)identifier;
-(id<KGNode>)sourceNode;
-(NSDictionary *)properties;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 sourceNode:(id)arg5 targetNode:(id)arg6 ;
-(id)oppositeNodeFromNode:(id)arg1 ;
@end
