/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SCLSchoolModeManager;

@interface SCLWatchServer : NSObject {

	SCLSchoolModeManager* _schoolModeManager;

}

@property (nonatomic,readonly) SCLSchoolModeManager * schoolModeManager;              //@synthesize schoolModeManager=_schoolModeManager - In the implementation block
+(id)sharedWatchServer;
-(void)run;
-(SCLSchoolModeManager *)schoolModeManager;
@end
