/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PRSharingSessionDelegate <NSObject>
@optional
-(void)session:(id)arg1 didChangeProximitySensorState:(unsigned long long)arg2;

@required
-(void)session:(id)arg1 didFailwithError:(id)arg2;
-(void)session:(id)arg1 didEstimateScores:(id)arg2;

@end
