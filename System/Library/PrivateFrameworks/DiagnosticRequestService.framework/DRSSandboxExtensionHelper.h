/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface DRSSandboxExtensionHelper : NSObject {

	BOOL _didInit;
	long long _sandboxExtensionHandle;
	NSString* _logPath;

}

@property (assign,nonatomic) long long sandboxExtensionHandle;              //@synthesize sandboxExtensionHandle=_sandboxExtensionHandle - In the implementation block
@property (nonatomic,readonly) BOOL didInit;                                //@synthesize didInit=_didInit - In the implementation block
@property (nonatomic,readonly) NSString * logPath;                          //@synthesize logPath=_logPath - In the implementation block
-(long long)sandboxExtensionHandle;
-(void)setSandboxExtensionHandle:(long long)arg1 ;
-(BOOL)didInit;
-(NSString *)logPath;
-(void)dealloc;
-(id)initWithSandboxExtensionToken:(id)arg1 logPath:(id)arg2 errorOut:(id*)arg3 ;
@end
