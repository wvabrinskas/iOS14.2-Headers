/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <FMCoreLite/FMCoreLite-Structs.h>
@class NSString;

@interface FMReadWriteLock : NSObject {

	NSString* _lockName;
	opaque_pthread_rwlock_t _lock;

}

@property (nonatomic,retain) NSString * lockName;                       //@synthesize lockName=_lockName - In the implementation block
@property (assign,nonatomic) opaque_pthread_rwlock_t lock;              //@synthesize lock=_lock - In the implementation block
-(opaque_pthread_rwlock_t)lock;
-(id)init;
-(void)setLock:(opaque_pthread_rwlock_t)arg1 ;
-(NSString *)lockName;
-(id)initWithLockName:(id)arg1 ;
-(void)performWithReadLock:(/*^block*/id)arg1 ;
-(void)setLockName:(NSString *)arg1 ;
-(void)performWithWriteLock:(/*^block*/id)arg1 ;
@end
