/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableArray;

@interface OITSUIndexedStringStore : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _indexByString;
	NSMutableArray* _stringByIndex;

}
-(id)init;
-(unsigned long long)count;
-(unsigned long long)indexForString:(id)arg1 ;
-(id)stringForIndex:(unsigned long long)arg1 ;
-(void)dealloc;
@end
