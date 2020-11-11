/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRE/CoreRE-Structs.h>
#import <libobjc.A.dylib/REResourceFetchService.h>

@class NSString;

@interface REResourceFetchClientObject : NSObject <REResourceFetchService> {

	int _pid;
	int _pidversion;
	ResourceFetchManager* _resourceFetchManager;

}

@property (nonatomic,readonly) ResourceFetchManager* resourceFetchManager;              //@synthesize resourceFetchManager=_resourceFetchManager - In the implementation block
@property (nonatomic,copy,readonly) NSString * redactedDescription; 
@property (nonatomic,readonly) int pid;                                                 //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) int pidversion;                                          //@synthesize pidversion=_pidversion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)redactedDescription;
-(int)pid;
-(NSString *)description;
-(void)invalidate;
-(void)associateConnectionWithPeerID:(unsigned long long)arg1 ;
-(id)initWithResourceFetchManager:(ResourceFetchManager*)arg1 connection:(const Connection*)arg2 ;
-(ResourceFetchManager*)resourceFetchManager;
-(int)pidversion;
@end
