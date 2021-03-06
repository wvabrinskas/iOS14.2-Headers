/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class RBSystemState;


@protocol RBAssertionManaging <NSObject,RBDomainAttributeManaging>
@property (nonatomic,copy,readonly) RBSystemState * systemState; 
@required
-(void)processDidLaunch:(id)arg1;
-(id)stateForIdentity:(id)arg1;
-(id)limitationsForInstance:(id)arg1;
-(void)commitBatchWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)invalidateAssertionWithIdentifier:(id)arg1;
-(id)processForIdentity:(id)arg1;
-(BOOL)hasAssertionWithIdentifier:(id)arg1;
-(void)revalidateAssertionsForProcessIdentities:(id)arg1;
-(id)assertionsForOriginator:(id)arg1;
-(BOOL)isProcessForeground:(id)arg1;
-(void)processDidTerminate:(id)arg1;
-(RBSystemState *)systemState;
-(BOOL)invalidateAssertionsDueToCPUUsageViolationForProcessIdentifier:(id)arg1;
-(void)acquireAssertionWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)invalidateAssertionFromOriginator:(id)arg1 withIdentifier:(id)arg2;
-(id)assertionDescriptorsWithFlattenedAttributes:(BOOL)arg1;
-(BOOL)invalidateAssertion:(id)arg1;

@end

