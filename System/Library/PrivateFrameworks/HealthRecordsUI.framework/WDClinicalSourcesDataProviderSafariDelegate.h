/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SFSafariViewControllerDelegate.h>

@class HKHealthRecordsStore, NSURL, NSString;

@interface WDClinicalSourcesDataProviderSafariDelegate : NSObject <SFSafariViewControllerDelegate> {

	HKHealthRecordsStore* _healthRecordsStore;
	NSURL* _loginURL;

}

@property (nonatomic,retain) HKHealthRecordsStore * healthRecordsStore;              //@synthesize healthRecordsStore=_healthRecordsStore - In the implementation block
@property (nonatomic,retain) NSURL * loginURL;                                       //@synthesize loginURL=_loginURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSafariDelegate;
-(id)init;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(void)setLoginURL:(NSURL *)arg1 ;
-(NSURL *)loginURL;
-(id)safariViewController:(id)arg1 excludedActivityTypesForURL:(id)arg2 title:(id)arg3 ;
-(id)_init;
-(HKHealthRecordsStore *)healthRecordsStore;
-(void)setHealthRecordsStore:(HKHealthRecordsStore *)arg1 ;
@end

