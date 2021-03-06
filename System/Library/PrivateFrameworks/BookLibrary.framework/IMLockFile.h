/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface IMLockFile : NSObject {

	int _fd;
	BOOL _locked;
	NSString* _path;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL locked;                  //@synthesize locked=_locked - In the implementation block
+(id)iTunesSyncLockFile;
+(id)iTunesSyncLockFilePath;
-(id)initWithPath:(id)arg1 ;
-(void)unlock;
-(BOOL)lock:(BOOL)arg1 ;
-(BOOL)locked;
-(BOOL)tryLock:(BOOL)arg1 ;
-(BOOL)lockWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)_lock:(BOOL)arg1 blocking:(BOOL)arg2 ;
-(NSString *)path;
-(void)dealloc;
@end

