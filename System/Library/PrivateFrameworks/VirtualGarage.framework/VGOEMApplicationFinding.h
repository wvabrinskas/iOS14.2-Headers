/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VirtualGarage.framework/VirtualGarage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VGOEMApplicationFinding <NSObject>
@property (assign,nonatomic,__weak) id<VGOEMApplicationFinderUpdates> delegate; 
@required
-(id<VGOEMApplicationFinderUpdates>)delegate;
-(void)setDelegate:(id)arg1;
-(void)findOEMApplications;

@end

