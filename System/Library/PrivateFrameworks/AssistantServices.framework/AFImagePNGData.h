/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface AFImagePNGData : NSObject {

	NSData* _imageData;
	double _scale;

}

@property (nonatomic,retain) NSData * imageData;              //@synthesize imageData=_imageData - In the implementation block
@property (assign,nonatomic) double scale;                    //@synthesize scale=_scale - In the implementation block
-(void)setScale:(double)arg1 ;
-(NSData *)imageData;
-(void)setImageData:(NSData *)arg1 ;
-(double)scale;
@end
