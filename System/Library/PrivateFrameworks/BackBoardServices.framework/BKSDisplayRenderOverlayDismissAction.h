/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class BKSDisplayRenderOverlayDescriptor;


@protocol BKSDisplayRenderOverlayDismissAction <NSObject>
@property (nonatomic,readonly) BKSDisplayRenderOverlayDescriptor * overlayDescriptor; 
@required
-(void)dismiss;
-(void)dismissWithAnimation:(id)arg1;
-(BKSDisplayRenderOverlayDescriptor *)overlayDescriptor;

@end

