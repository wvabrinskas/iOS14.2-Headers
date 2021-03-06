/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CalPreferences, NSString, NSArray, NSDateComponents;

@interface CalFoundationPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (nonatomic,readonly) BOOL logAutoFlush; 
@property (nonatomic,readonly) NSString * logFilePath; 
@property (nonatomic,readonly) NSArray * logSimpleConfiguration; 
@property (assign,nonatomic) double simulatedDateForNowOffset; 
@property (nonatomic,retain) NSString * stopTimeDemoMode; 
@property (nonatomic,readonly) BOOL stopTimeDemoModeActive; 
@property (nonatomic,readonly) NSDateComponents * stopTimeDemoModeComponents; 
+(id)shared;
-(NSString *)logFilePath;
-(id)init;
-(NSArray *)logSimpleConfiguration;
-(void)setSimulatedDateForNowOffset:(double)arg1 ;
-(BOOL)stopTimeDemoModeActive;
-(NSDateComponents *)stopTimeDemoModeComponents;
-(double)simulatedDateForNowOffset;
-(BOOL)logAutoFlush;
-(void)setStopTimeDemoMode:(NSString *)arg1 ;
-(NSString *)stopTimeDemoMode;
@end

