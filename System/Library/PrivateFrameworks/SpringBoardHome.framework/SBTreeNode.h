/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol SBTreeNode <NSObject,SBHUniquelyIdentifiable,SBHUniqueIdentifierQueryable>
@property (nonatomic,readonly) NSArray * children; 
@property (assign,nonatomic,__weak) id<SBTreeNode> parent; 
@required
-(NSArray *)children;
-(void)setParent:(id)arg1;
-(id<SBTreeNode>)parent;
-(void)ancestryDidChange;

@end
