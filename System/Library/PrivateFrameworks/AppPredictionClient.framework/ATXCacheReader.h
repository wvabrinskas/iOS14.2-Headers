/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class _PASLock, NSString, NSObject;

@interface ATXCacheReader : NSObject {

	_PASLock* _lock;
	NSString* _cacheBasePath;
	NSObject*<OS_dispatch_source> _vnodeSource;

}
-(id)init;
-(id)readCacheFileForCachePath:(id)arg1 ;
-(void)_handleDirChange;
-(id)initWithCacheBasePath:(id)arg1 ;
-(void)dealloc;
-(id)readCacheFileForConsumerSubtype:(unsigned char)arg1 ;
@end
