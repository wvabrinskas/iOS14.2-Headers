/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AXMVisionEngineNodeConnectionDelegate <NSObject>
@required
-(void)triggerWithSource:(id)arg1 context:(id)arg2;
-(BOOL)engineWillAcceptTiggerWithSource:(id)arg1;
-(BOOL)diagnosticsEnabled:(id)arg1;
-(void)captureSessionNodeDidDropFrame:(id)arg1;
-(void)captureSessionNodeDidBeginProcessingFrames:(id)arg1;
-(void)captureSessionNodeDidEndProcessingFrames:(id)arg1;
-(void)captureSessionNodeWillProcessFrame:(id)arg1;

@end

