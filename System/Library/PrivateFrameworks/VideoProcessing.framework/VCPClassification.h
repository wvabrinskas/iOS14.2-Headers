/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface VCPClassification : NSObject {

	float _duration;
	float _sumConfidence;
	NSString* _sceneId;

}

@property (retain) NSString * sceneId;               //@synthesize sceneId=_sceneId - In the implementation block
@property (assign) float duration;                   //@synthesize duration=_duration - In the implementation block
@property (assign) float sumConfidence;              //@synthesize sumConfidence=_sumConfidence - In the implementation block
-(void)setDuration:(float)arg1 ;
-(id)initWithSceneId:(id)arg1 withDuration:(float)arg2 withConfidence:(float)arg3 ;
-(void)setSceneId:(NSString *)arg1 ;
-(float)sumConfidence;
-(void)setSumConfidence:(float)arg1 ;
-(NSString *)sceneId;
-(float)duration;
@end

