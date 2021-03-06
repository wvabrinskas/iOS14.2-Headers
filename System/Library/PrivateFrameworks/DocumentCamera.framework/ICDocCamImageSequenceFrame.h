/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <DocumentCamera/DocumentCamera-Structs.h>
@class NSDictionary;

@interface ICDocCamImageSequenceFrame : NSObject {

	CVBufferRef _pb;
	NSDictionary* _frameOptions;

}

@property (assign,nonatomic) CVBufferRef pb;                         //@synthesize pb=_pb - In the implementation block
@property (nonatomic,copy) NSDictionary * frameOptions;              //@synthesize frameOptions=_frameOptions - In the implementation block
-(CVBufferRef)pb;
-(NSDictionary *)frameOptions;
-(void)setPb:(CVBufferRef)arg1 ;
-(void)setFrameOptions:(NSDictionary *)arg1 ;
@end

