/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreCDP/CoreCDP-Structs.h>
#import <libobjc.A.dylib/CDPProtectedCloudStorageProxy.h>

@class NSString;

@interface CDPProtectedCloudStorageProxyImpl : NSObject <CDPProtectedCloudStorageProxy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)pcsRestoreLocalBackup:(id)arg1 error:(id*)arg2 ;
-(BOOL)pcsSynchronizeKeysWithInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)pcsIdentitySetIsInICDPNetwork:(PCSIdentitySetDataRef)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)pcsIdentitySetIsInICDPLocal:(PCSIdentitySetDataRef)arg1 error:(id*)arg2 ;
-(PCSIdentitySetDataRef)pcsIdentityCreateWithInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)pcsIdentitySetCompanionInCircle:(PCSIdentitySetDataRef)arg1 error:(id*)arg2 ;
-(PCSIdentitySetDataRef)pcsIdentitySetupWithInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)pcsIdentityMigrateToiCDPWithInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)pcsIdentityMigrateToStingrayWithInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)_performPCSBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
@end

