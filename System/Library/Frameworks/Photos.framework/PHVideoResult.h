/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHCompositeMediaResult.h>

@class NSURL, NSString;

@interface PHVideoResult : PHCompositeMediaResult {

	NSURL* _videoURL;
	NSString* _uniformTypeIdentifier;

}

@property (nonatomic,retain) NSURL * videoURL;                            //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,copy) NSString * uniformTypeIdentifier;              //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
-(BOOL)containsValidData;
-(id)videoAdjustmentData;
-(void)setVideoAdjustmentData:(id)arg1 ;
-(NSURL *)videoURL;
-(id)allowedInfoKeys;
-(void)setVideoURL:(NSURL *)arg1 ;
-(void)setUniformTypeIdentifier:(NSString *)arg1 ;
-(NSString *)uniformTypeIdentifier;
@end

