/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventDeferringResolution.h>

@class BKSHIDEventDisplay, BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, NSString;

@interface BKSMutableHIDEventDeferringResolution : BKSHIDEventDeferringResolution

@property (nonatomic,copy) BKSHIDEventDisplay * display; 
@property (nonatomic,copy) BKSHIDEventDeferringEnvironment * environment; 
@property (assign,nonatomic) long long versionedPID; 
@property (assign,nonatomic) int pid; 
@property (nonatomic,copy) BKSHIDEventDeferringToken * token; 
@property (nonatomic,copy) NSString * bundleIdentifier; 
+(id)new;
-(void)setToken:(BKSHIDEventDeferringToken *)arg1 ;
-(void)setEnvironment:(BKSHIDEventDeferringEnvironment *)arg1 ;
-(id)init;
-(void)setDisplay:(BKSHIDEventDisplay *)arg1 ;
-(void)setPid:(int)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersionedPID:(long long)arg1 ;
@end

