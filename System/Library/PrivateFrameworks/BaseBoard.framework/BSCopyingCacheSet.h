/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, NSSet;

@interface BSCopyingCacheSet : NSObject {

	NSMutableSet* _mutable;
	NSSet* _immutable;

}

@property (readonly) unsigned long long count; 
-(unsigned long long)count;
-(BOOL)containsObject:(id)arg1 ;
-(id)description;
-(void)addObject:(id)arg1 ;
-(id)immutableSet;
-(void)removeObject:(id)arg1 ;
@end
