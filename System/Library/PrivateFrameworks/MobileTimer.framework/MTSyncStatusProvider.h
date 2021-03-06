/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTSyncStatusProvider <NSObject>
@property (assign,nonatomic,__weak) id<MTSyncStatusProviderDelegate> syncStatusProviderDelegate; 
@required
+(BOOL)deviceSupportsSyncing;
-(id<MTSyncStatusProviderDelegate>)syncStatusProviderDelegate;
-(unsigned long long)syncStatus;
-(void)setSyncStatusProviderDelegate:(id)arg1;

@end

