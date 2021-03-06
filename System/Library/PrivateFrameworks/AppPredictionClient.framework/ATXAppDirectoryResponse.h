/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError, NSArray, ATXResponse;

@interface ATXAppDirectoryResponse : NSObject {

	NSError* _error;
	NSArray* _predictedApps;
	NSArray* _recentApps;
	ATXResponse* _response;

}

@property (nonatomic,readonly) ATXResponse * response;                   //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSArray * recentAppsVisible; 
@property (nonatomic,readonly) NSError * error;                          //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSArray * predictedApps;                  //@synthesize predictedApps=_predictedApps - In the implementation block
@property (nonatomic,readonly) NSArray * recentApps;                     //@synthesize recentApps=_recentApps - In the implementation block
-(NSArray *)predictedApps;
-(NSError *)error;
-(ATXResponse *)response;
-(id)initWithResponse:(id)arg1 recentApps:(id)arg2 otherAppsOnScreen:(id)arg3 numAppsToPredict:(unsigned long long)arg4 error:(id)arg5 ;
-(NSArray *)recentAppsVisible;
-(id)initWithoutDedupingForRecents:(id)arg1 predictedApps:(id)arg2 error:(id)arg3 ;
-(NSArray *)recentApps;
@end

