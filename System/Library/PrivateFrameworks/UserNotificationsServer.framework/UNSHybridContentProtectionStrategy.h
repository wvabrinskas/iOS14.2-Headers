/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/UNSContentProtectionStrategy.h>

@protocol UNSHybridContentProtectionStrategyDelegate;
@class NSString, UNSAtomicDataContentProtectionStrategy, UNSFileHandleContentProtectionStrategy;

@interface UNSHybridContentProtectionStrategy : NSObject <UNSContentProtectionStrategy> {

	id<UNSHybridContentProtectionStrategyDelegate> _delegate;
	NSString* _minimumProtection;
	BOOL _needsMerge;
	UNSAtomicDataContentProtectionStrategy* _protectedContentAvailableStrategy;
	UNSFileHandleContentProtectionStrategy* _protectedContentUnavailableStrategy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isProtectedDataAvailable;
-(void)migrateDataAtPath:(id)arg1 toPath:(id)arg2 ;
-(BOOL)writeData:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(id)dataAtPath:(id)arg1 ;
-(void)importDataWithImportHandler:(/*^block*/id)arg1 ;
-(BOOL)removeItemAtPath:(id)arg1 error:(id*)arg2 ;
-(id)initWithFileProtectionType:(id)arg1 delegate:(id)arg2 ;
-(BOOL)dataIsAvailableAtPath:(id)arg1 ;
-(BOOL)_mergeIsSupported;
-(id)_strategyForProtectionState;
@end

