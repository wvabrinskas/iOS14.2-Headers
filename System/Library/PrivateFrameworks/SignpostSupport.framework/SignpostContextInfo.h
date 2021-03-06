/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SignpostSupport/SignpostCARenderServerFrameMetadata.h>

@class NSString;

@interface SignpostContextInfo : NSObject <SignpostCARenderServerFrameMetadata> {

	int _pid;
	unsigned _frameSeed;
	unsigned _contextId;
	unsigned _transactionSeed;
	unsigned long long _earliestMCT;
	NSString* _executablePath;

}

@property (nonatomic,readonly) int pid;                                     //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) unsigned frameSeed;                          //@synthesize frameSeed=_frameSeed - In the implementation block
@property (nonatomic,readonly) unsigned contextId;                          //@synthesize contextId=_contextId - In the implementation block
@property (nonatomic,readonly) unsigned transactionSeed;                    //@synthesize transactionSeed=_transactionSeed - In the implementation block
@property (nonatomic,readonly) unsigned long long earliestMCT;              //@synthesize earliestMCT=_earliestMCT - In the implementation block
@property (nonatomic,readonly) NSString * executablePath;                   //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,readonly) NSString * processName; 
-(NSString *)executablePath;
-(int)pid;
-(NSString *)processName;
-(unsigned)contextId;
-(unsigned)frameSeed;
-(id)initWithContextInfoEvent:(id)arg1 ;
-(unsigned)transactionSeed;
-(unsigned long long)earliestMCT;
@end

