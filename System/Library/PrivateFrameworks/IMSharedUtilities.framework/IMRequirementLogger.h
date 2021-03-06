/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@interface IMRequirementLogger : NSObject {

	unsigned char _loggingLevel;
	BOOL _throwFailures;
	const char* _categoryOverride;

}

@property (assign) unsigned char loggingLevel;                //@synthesize loggingLevel=_loggingLevel - In the implementation block
@property (assign) const char* categoryOverride;              //@synthesize categoryOverride=_categoryOverride - In the implementation block
@property (assign) BOOL throwFailures;                        //@synthesize throwFailures=_throwFailures - In the implementation block
+(id)sharedInstance;
+(void)__setSingleton__im:(id)arg1 ;
+(id)__singleton__im;
-(void)setLoggingLevel:(unsigned char)arg1 ;
-(id)init;
-(id)description;
-(unsigned char)loggingLevel;
-(void)updateSettingsFromUserDefaults;
-(void)setThrowFailures:(BOOL)arg1 ;
-(BOOL)throwFailures;
-(const char*)categoryOverride;
-(void)setCategoryOverride:(const char*)arg1 ;
-(IMRequirementFailed_t)requirementDidFail:(const char*)arg1 ;
-(void)dealloc;
@end

