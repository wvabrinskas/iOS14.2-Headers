/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CSLanguageDetectorAssetMonitorDelegate, OS_dispatch_queue;
@class NSObject;

@interface CSLanguageDetectorAssetMonitor : NSObject {

	int _notifyToken;
	id<CSLanguageDetectorAssetMonitorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                      //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) int notifyToken;                                                         //@synthesize notifyToken=_notifyToken - In the implementation block
@property (assign,nonatomic,__weak) id<CSLanguageDetectorAssetMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(int)notifyToken;
-(id)init;
-(id<CSLanguageDetectorAssetMonitorDelegate>)delegate;
-(void)setNotifyToken:(int)arg1 ;
-(void)setDelegate:(id<CSLanguageDetectorAssetMonitorDelegate>)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_supportedLocale:(/*^block*/id)arg1 ;
-(void)startMonitor;
-(void)supportedLocale:(/*^block*/id)arg1 ;
@end
