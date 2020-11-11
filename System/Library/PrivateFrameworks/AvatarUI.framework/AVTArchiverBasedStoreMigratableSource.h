/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AVTStoreBackendMigratableSource.h>

@class NSURL, AVTCoreEnvironment, NSString;

@interface AVTArchiverBasedStoreMigratableSource : NSObject <AVTStoreBackendMigratableSource> {

	NSURL* _storeLocation;
	AVTCoreEnvironment* _environment;

}

@property (nonatomic,readonly) NSURL * storeLocation;                         //@synthesize storeLocation=_storeLocation - In the implementation block
@property (nonatomic,readonly) AVTCoreEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)migrationNeeded;
-(id)initWithStoreLocation:(id)arg1 environment:(id)arg2 ;
-(AVTCoreEnvironment *)environment;
-(id)createSourceBackend;
-(BOOL)finalizeMigration:(id*)arg1 ;
-(id)migratedRecordFromRecord:(id)arg1 index:(unsigned long long)arg2 totalCount:(unsigned long long)arg3 ;
-(NSURL *)storeLocation;
@end
