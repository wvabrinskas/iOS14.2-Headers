/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCountedSet, NSMutableDictionary;

@interface SBCountedMap : NSObject {

	NSCountedSet* _countedKeys;
	NSMutableDictionary* _map;

}
-(id)checkoutValueForKey:(id)arg1 creationBlock:(/*^block*/id)arg2 ;
-(BOOL)containsKey:(id)arg1 ;
-(BOOL)checkinValue:(id)arg1 ;
-(id)init;
-(id)description;
-(void)checkinValues:(id)arg1 ;
-(BOOL)containsValue:(id)arg1 ;
@end
