/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/HDSPIDSMessage.h>

@class NSString;

@interface HDSPSetSleepModeIDSMessage : NSObject <BSDescriptionProviding, HDSPIDSMessage> {

	BOOL _sleepModeOn;
	double _timeout;

}

@property (nonatomic,readonly) BOOL sleepModeOn;                        //@synthesize sleepModeOn=_sleepModeOn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) double timeout;                          //@synthesize timeout=_timeout - In the implementation block
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)sleepModeOn;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(double)timeout;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSleepModeOn:(BOOL)arg1 timeout:(double)arg2 ;
@end
