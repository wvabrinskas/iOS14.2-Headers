/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HDSPDiagnosticsProvider.h>

@class NSDate, HDSPEnvironment, NSString;

@interface HDSPSleepDaemon : NSObject <HDSPDiagnosticsProvider> {

	NSDate* _launchDate;
	HDSPEnvironment* _environment;

}

@property (nonatomic,readonly) NSDate * launchDate;                        //@synthesize launchDate=_launchDate - In the implementation block
@property (nonatomic,readonly) HDSPEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(id)diagnosticInfo;
-(id)init;
-(NSDate *)launchDate;
-(HDSPEnvironment *)environment;
-(id)initWithBehavior:(id)arg1 sleepEnabled:(BOOL)arg2 ;
-(id)diagnosticDescription;
@end

