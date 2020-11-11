/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol TLToneStoreDownloadController <NSObject>
@property (nonatomic,readonly) NSString * storeAccountName; 
@required
-(void)removeObserver:(id)arg1;
-(NSString *)storeAccountName;
-(void)addObserver:(id)arg1;
-(void)openAlertToneStore;
-(void)openRingtoneStore;
-(void)redownloadAllTones;

@end
