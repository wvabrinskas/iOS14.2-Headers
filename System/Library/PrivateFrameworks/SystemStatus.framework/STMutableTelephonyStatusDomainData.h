/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SystemStatus/SystemStatus-Structs.h>
#import <SystemStatus/STTelephonyStatusDomainData.h>
#import <libobjc.A.dylib/STMutableStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/STMutableStatusDomainData.h>

@class STTelephonyStatusDomainSIMInfo, NSString;

@interface STMutableTelephonyStatusDomainData : STTelephonyStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (nonatomic,copy) STTelephonyStatusDomainSIMInfo * SIMOneInfo; 
@property (nonatomic,copy) STTelephonyStatusDomainSIMInfo * SIMTwoInfo; 
@property (assign,getter=isCellularRadioCapabilityEnabled,nonatomic) BOOL cellularRadioCapabilityEnabled; 
@property (assign,getter=isDualSIMEnabled,nonatomic) BOOL dualSIMEnabled; 
@property (assign,getter=isRadioModuleDead,nonatomic) BOOL radioModuleDead; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDualSIMEnabled:(BOOL)arg1 ;
-(void)setSIMOneInfo:(STTelephonyStatusDomainSIMInfo *)arg1 ;
-(BOOL)applyDiff:(id)arg1 ;
-(void)setSIMTwoInfo:(STTelephonyStatusDomainSIMInfo *)arg1 ;
-(void)setCellularRadioCapabilityEnabled:(BOOL)arg1 ;
-(void)updateSIMTwoInfoWithBlock:(/*^block*/id)arg1 ;
-(void)updateSIMOneInfoWithBlock:(/*^block*/id)arg1 ;
-(void)setRadioModuleDead:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
