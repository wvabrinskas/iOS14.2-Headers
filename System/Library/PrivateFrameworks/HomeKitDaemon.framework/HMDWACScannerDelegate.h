/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMDWACScannerDelegate
@required
-(void)scanner:(id)arg1 didAddDevice:(id)arg2;
-(void)scanner:(id)arg1 didRemoveDevice:(id)arg2;
-(void)scanner:(id)arg1 didUpdateDevice:(id)arg2;
-(void)scanner:(id)arg1 didError:(id)arg2;
-(void)scannerDidStop:(id)arg1;

@end
