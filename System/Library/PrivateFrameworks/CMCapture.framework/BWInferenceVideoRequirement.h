/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWInferenceMediaRequirement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BWInferenceVideoFormat;

@interface BWInferenceVideoRequirement : BWInferenceMediaRequirement <NSCopying> {

	BWInferenceVideoFormat* _videoFormat;

}

@property (nonatomic,readonly) BWInferenceVideoFormat * videoFormat;              //@synthesize videoFormat=_videoFormat - In the implementation block
-(BWInferenceVideoFormat *)videoFormat;
-(BOOL)isSatisfiedByRequirement:(id)arg1 ;
-(id)initWithVideoRequirement:(id)arg1 ;
-(id)description;
-(id)initWithAttachedMediaKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)satisfactionHash;
-(void)dealloc;
-(id)initWithAttachedMediaKey:(id)arg1 videoFormat:(id)arg2 ;
@end

