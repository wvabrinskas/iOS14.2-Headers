/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MBManagerDelegate.h>

@protocol OS_dispatch_queue;
@class MBManager, NSObject, NSError, RPFileTransferSession;

@interface MBDeviceTransferTask : NSObject <MBManagerDelegate> {

	MBManager* _manager;
	NSObject*<OS_dispatch_queue> _queue;
	AB _started;
	AB _canceled;
	AB _finished;
	AB _suspended;
	NSError* _completionError;
	/*^block*/id _progressHandler;
	/*^block*/id _connectionStateHandler;
	/*^block*/id _connectionInfoHandler;
	/*^block*/id _completionHandler;
	RPFileTransferSession* _fileTransferSession;

}

@property (nonatomic,retain) MBManager * manager;                                      //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) RPFileTransferSession * fileTransferSession;              //@synthesize fileTransferSession=_fileTransferSession - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,retain) NSError * completionError;                                //@synthesize completionError=_completionError - In the implementation block
@property (nonatomic,copy) id progressHandler;                                         //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id connectionStateHandler;                                  //@synthesize connectionStateHandler=_connectionStateHandler - In the implementation block
@property (nonatomic,copy) id connectionInfoHandler;                                   //@synthesize connectionInfoHandler=_connectionInfoHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                       //@synthesize completionHandler=_completionHandler - In the implementation block
-(BOOL)canceled;
-(void)start;
-(void)_start;
-(void)setManager:(MBManager *)arg1 ;
-(id)progressHandler;
-(BOOL)started;
-(void)_cancel;
-(void)_finishWithError:(id)arg1 ;
-(id)completionHandler;
-(id)initWithFileTransferSession:(id)arg1 ;
-(RPFileTransferSession *)fileTransferSession;
-(void)setFileTransferSession:(RPFileTransferSession *)arg1 ;
-(void)manager:(id)arg1 didUpdateDeviceTransferConnectionInfo:(id)arg2 ;
-(void)setCompletionError:(NSError *)arg1 ;
-(void)setConnectionInfoHandler:(id)arg1 ;
-(void)setConnectionStateHandler:(id)arg1 ;
-(NSError *)completionError;
-(id)connectionStateHandler;
-(id)connectionInfoHandler;
-(BOOL)_handleCompletionWithError:(id*)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(void)managerDidLoseConnectionToService:(id)arg1 ;
-(void)_suspend;
-(BOOL)finished;
-(long long)taskType;
-(void)setCompletionHandler:(id)arg1 ;
-(MBManager *)manager;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)cancel;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_resume;
-(void)dealloc;
@end
