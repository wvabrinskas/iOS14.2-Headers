/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RTIInputSystemSessionDelegate <NSObject>
@optional
-(void)inputSession:(id)arg1 documentStateDidChange:(id)arg2;
-(void)inputSession:(id)arg1 documentTraitsDidChange:(id)arg2;
-(void)inputSessionDidEnd:(id)arg1;
-(void)inputSession:(id)arg1 didChangePause:(BOOL)arg2 withReason:(id)arg3;
-(void)inputSessionDidDie:(id)arg1;
-(void)inputSessionDidBegin:(id)arg1;

@end

