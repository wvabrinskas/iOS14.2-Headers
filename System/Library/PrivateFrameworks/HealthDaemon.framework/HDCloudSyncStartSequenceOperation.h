/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDCloudSyncOperation.h>

@class HDCloudSyncTarget, HDCloudSyncSequenceRecord;

@interface HDCloudSyncStartSequenceOperation : HDCloudSyncOperation {

	HDCloudSyncTarget* _target;
	HDCloudSyncSequenceRecord* _sequenceRecord;
	HDCloudSyncSequenceRecord* _replacedSequenceRecord;
	AB _shouldClearRebaselineDeadline;

}

@property (assign) BOOL shouldClearRebaselineDeadline; 
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 target:(id)arg3 sequence:(id)arg4 replacingSequence:(id)arg5 ;
-(void)setShouldClearRebaselineDeadline:(BOOL)arg1 ;
-(void)_deleteReplacedSequence;
-(void)_pushNewSequence;
-(BOOL)_updateDisplayNameForRegistryRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldClearRebaselineDeadline;
@end

