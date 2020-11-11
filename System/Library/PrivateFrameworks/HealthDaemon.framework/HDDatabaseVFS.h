/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLiteVFS.h>

@class NSString;

@interface HDDatabaseVFS : HDSQLiteVFS {

	NSString* _protectedDatabaseName;

}

@property (nonatomic,copy) NSString * protectedDatabaseName;              //@synthesize protectedDatabaseName=_protectedDatabaseName - In the implementation block
-(void)setProtectedDatabaseName:(NSString *)arg1 ;
-(NSString *)protectedDatabaseName;
-(int)openWithPath:(const char*)arg1 file:(sqlite3_file*)arg2 flags:(int)arg3 outFlags:(int*)arg4 ;
@end
