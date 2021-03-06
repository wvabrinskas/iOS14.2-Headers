/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PSCloudStorageOffersManagerDelegate.h>

@class PSCloudStorageOffersManager, NSString;

@interface AAUICloudStorageOffersManager : NSObject <PSCloudStorageOffersManagerDelegate> {

	PSCloudStorageOffersManager* _cloudStorageOffersManager;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) PSCloudStorageOffersManager * cloudStorageOffersManager;              //@synthesize cloudStorageOffersManager=_cloudStorageOffersManager - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)managerDidCancel:(id)arg1 ;
-(void)manager:(id)arg1 loadDidFailWithError:(id)arg2 ;
-(void)manager:(id)arg1 didCompleteWithError:(id)arg2 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)presentCloudStorageOffersPageFromNavigationController:(id)arg1 requiredStorageThreshold:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(PSCloudStorageOffersManager *)cloudStorageOffersManager;
-(void)setCloudStorageOffersManager:(PSCloudStorageOffersManager *)arg1 ;
@end

