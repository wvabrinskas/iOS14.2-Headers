/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableOrderedSet, NSMutableDictionary;

@interface PPQuickTypeItemCache : NSObject {

	NSMutableOrderedSet* _keys;
	NSMutableDictionary* _entries;

}
-(void)clear;
-(void)setEntry:(id)arg1 key:(id)arg2 ;
-(id)init;
-(id)entryWithKey:(id)arg1 ;
@end

