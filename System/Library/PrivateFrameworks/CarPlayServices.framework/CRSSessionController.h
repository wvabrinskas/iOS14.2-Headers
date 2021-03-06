/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CarPlayServices/CarPlayServices-Structs.h>
#import <libobjc.A.dylib/CRSSessionServerToClientInterface.h>

@class RBSProcessHandle, BSServiceConnection, NSString;

@interface CRSSessionController : NSObject <CRSSessionServerToClientInterface> {

	os_unfair_lock_s _lock;
	BOOL _lock_invalidated;
	RBSProcessHandle* _process;
	BSServiceConnection* _connection;

}

@property (nonatomic,retain) RBSProcessHandle * process;                    //@synthesize process=_process - In the implementation block
@property (nonatomic,retain) BSServiceConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(RBSProcessHandle *)process;
-(void)setProcess:(RBSProcessHandle *)arg1 ;
-(void)setConnection:(BSServiceConnection *)arg1 ;
-(BSServiceConnection *)connection;
-(void)invalidate;
@end

