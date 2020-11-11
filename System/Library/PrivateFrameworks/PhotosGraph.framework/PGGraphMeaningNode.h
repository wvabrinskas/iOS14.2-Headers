/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphPropertylessNode.h>
#import <libobjc.A.dylib/PGGraphPortraitTopic.h>
#import <libobjc.A.dylib/PGGraphLocalizable.h>
#import <libobjc.A.dylib/PGGraphSynonymSupport.h>

@class NSString, NSArray;

@interface PGGraphMeaningNode : PGGraphPropertylessNode <PGGraphPortraitTopic, PGGraphLocalizable, PGGraphSynonymSupport> {

	NSString* _label;
	long long _isVeryMeaningfulCachedValue;

}

@property (nonatomic,readonly) NSString * pg_topic; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long isVeryMeaningfulCachedValue;                      //@synthesize isVeryMeaningfulCachedValue=_isVeryMeaningfulCachedValue - In the implementation block
@property (readonly) PGGraphMeaningNode * parentMeaningNode; 
@property (getter=isVeryMeaningful,nonatomic,readonly) BOOL veryMeaningful; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSArray * localizedSynonyms; 
+(id)meaningLabelsForMeaningNodes:(id)arg1 ;
+(id)submeaningOfMeaning;
+(id)eventOfMeaning;
+(id)momentOfMeaning;
-(id)associatedNodesForRemoval;
-(void)enumerateMeaningfulEventsUsingBlock:(/*^block*/id)arg1 ;
-(id)label;
-(id)highlightNodes;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(id)momentNodes;
-(NSArray *)localizedSynonyms;
-(NSString *)pg_topic;
-(NSString *)localizedName;
-(unsigned short)domain;
-(void)enumerateHighlightNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithLabel:(id)arg1 ;
-(void)enumerateSubmeaningsUsingBlock:(/*^block*/id)arg1 ;
-(void)traverseSubmeaningHierarchyUsingBlock:(/*^block*/id)arg1 ;
-(void)traverseParentMeaningHierarchyUsingBlock:(/*^block*/id)arg1 ;
-(PGGraphMeaningNode *)parentMeaningNode;
-(BOOL)isVeryMeaningful;
-(id)_localizationKeyForMeaningLabel:(id)arg1 ;
-(long long)isVeryMeaningfulCachedValue;
-(void)setIsVeryMeaningfulCachedValue:(long long)arg1 ;
@end
