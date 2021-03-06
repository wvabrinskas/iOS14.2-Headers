/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBIconIndexNode <NSObject>
@required
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
-(id)nodeIdentifier;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
-(BOOL)containsNodeIdentifier:(id)arg1;
-(void)addNodeObserver:(id)arg1;
-(void)removeNodeObserver:(id)arg1;
-(id)nodeDescriptionWithPrefix:(id)arg1;
-(id)containedNodeIdentifiers;

@end

