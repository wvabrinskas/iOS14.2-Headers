/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveExperimentsInternals.framework/ProactiveExperimentsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PREResponsesProtocol.h>

@protocol PREResponsesProtocol;
@class NSString, _PASBundleIdResolver;

@interface PREResponsesServerRequestHandler : NSObject <PREResponsesProtocol> {

	id<PREResponsesProtocol> _clientProxy;
	NSString* _clientProcessName;
	_PASBundleIdResolver* _bundleIdResolver;

}

@property (nonatomic,copy) NSString * clientProcessName;                           //@synthesize clientProcessName=_clientProcessName - In the implementation block
@property (nonatomic,retain) _PASBundleIdResolver * bundleIdResolver;              //@synthesize bundleIdResolver=_bundleIdResolver - In the implementation block
-(NSString *)clientProcessName;
-(void)setRemoteObjectProxy:(id)arg1 ;
-(void)setBundleIdResolver:(_PASBundleIdResolver *)arg1 ;
-(_PASBundleIdResolver *)bundleIdResolver;
-(void)setClientProcessName:(NSString *)arg1 ;
-(void)preResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 language:(id)arg6 recipientHandles:(id)arg7 modelFilePath:(id)arg8 modelConfigPath:(id)arg9 espressoBinFilePath:(id)arg10 lexiconFilePath:(id)arg11 registerDisplayed:(BOOL)arg12 completion:(/*^block*/id)arg13 ;
-(void)registerResponse:(id)arg1 position:(id)arg2 isCanned:(BOOL)arg3 isUsingQuickResponses:(BOOL)arg4 locale:(id)arg5 modelConfigPath:(id)arg6 ;
-(id)preResponseItemArrayFromQuickResponses:(id)arg1 ;
@end

