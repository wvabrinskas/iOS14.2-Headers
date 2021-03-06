/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKSelectionRenderingDelegate
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> selectionHullQueue; 
@required
-(CGColorRef)selectionColor;
-(BOOL)isRTL;
-(CGAffineTransform*)transformFromStrokeSpaceToViewInDrawing:(id)arg1;
-(CGRect*)selectedStrokesViewClipRectForDrawing:(id)arg1;
-(double)scaleForDrawing:(id)arg1;
-(id)_firstStrokesInStrokes:(id)arg1;
-(id)_lastStrokesInStrokes:(id)arg1;
-(long long)currentIntersectionAlgorithm;
-(NSObject*<OS_dispatch_queue>)selectionHullQueue;
-(void)setSelectionHullQueue:(id)arg1;

@end

