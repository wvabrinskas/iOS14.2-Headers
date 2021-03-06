/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricsKit/MTObject.h>

@protocol MTEnvironmentDelegate;
@interface MTEnvironment : MTObject {

	id<MTEnvironmentDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MTEnvironmentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)appVersion;
-(id)osVersion;
-(id)connectionType;
-(id)dsId;
-(id)cookies;
-(id<MTEnvironmentDelegate>)delegate;
-(BOOL)isAnonymous;
-(id)userType;
-(id)pageUrl;
-(id)screenWidth;
-(void)setDelegate:(id<MTEnvironmentDelegate>)arg1 ;
-(id)environmentDataCenter;
-(id)screenHeight;
-(id)app;
-(id)hostApp;
-(id)hardwareModel;
-(id)userAgent;
-(id)pixelRatio;
-(id)os;
-(id)osBuildNumber;
-(id)hostAppVersion;
-(id)capacityData;
-(id)capacityDataAvailable;
-(id)capacityDisk;
-(id)capacitySystem;
-(id)capacitySystemAvailable;
-(id)environmentBuild;
-(id)environmentInstance;
-(id)hardwareFamily;
-(id)osLanguages;
-(id)parentPageUrl;
-(id)resourceRevNum;
-(id)storeFrontHeader;
-(id)windowInnerHeight;
-(id)windowInnerWidth;
-(id)windowOuterHeight;
-(id)windowOuterWidth;
@end

