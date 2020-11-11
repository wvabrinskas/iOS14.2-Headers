/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class TVImage, NSError;


@protocol VUIImageLoadingOperation <NSObject>
@property (nonatomic,readonly) CGSize scaleToSize; 
@property (nonatomic,readonly) BOOL cropToFit; 
@property (nonatomic,readonly) TVImage * image; 
@property (nonatomic,readonly) unsigned long long scalingResult; 
@property (nonatomic,copy,readonly) NSError * error; 
@required
-(NSError *)error;
-(TVImage *)image;
-(unsigned long long)scalingResult;
-(CGSize)scaleToSize;
-(BOOL)cropToFit;

@end
