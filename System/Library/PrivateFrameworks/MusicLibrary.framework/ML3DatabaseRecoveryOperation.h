/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class NSString, NSError;

@interface ML3DatabaseRecoveryOperation : NSOperation {

	NSString* _path;
	NSError* _error;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)main;
-(NSString *)path;
-(void)_recreateDatabaseWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDatabaseFilePath:(id)arg1 ;
-(id)_createSQLiteErrorWithCode:(int)arg1 description:(id)arg2 ;
-(id)_lastCorruptionRestoreAttemptDate;
-(void)_updateLastCorruptionRestoreAttemptDate;
@end

