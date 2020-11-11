/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCapture/AVFCapture-Structs.h>
@class NSString, AVCaptureInput, AVMetadataObject;

@interface AVMetadataObjectInternal : NSObject {

	SCD_Struct_AV0 _time;
	SCD_Struct_AV0 _duration;
	CGRect _bounds;
	NSString* _type;
	AVCaptureInput* _input;
	AVMetadataObject* _originalMetadataObject;

}

@property (assign) SCD_Struct_AV0 time;                                    //@synthesize time=_time - In the implementation block
@property (assign) SCD_Struct_AV0 duration;                                //@synthesize duration=_duration - In the implementation block
@property (assign) CGRect bounds;                                          //@synthesize bounds=_bounds - In the implementation block
@property (retain) NSString * type;                                        //@synthesize type=_type - In the implementation block
@property (retain) AVCaptureInput * input;                                 //@synthesize input=_input - In the implementation block
@property (retain) AVMetadataObject * originalMetadataObject;              //@synthesize originalMetadataObject=_originalMetadataObject - In the implementation block
-(void)setInput:(AVCaptureInput *)arg1 ;
-(AVMetadataObject *)originalMetadataObject;
-(void)setDuration:(SCD_Struct_AV0)arg1 ;
-(id)init;
-(AVCaptureInput *)input;
-(void)setType:(NSString *)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTime:(SCD_Struct_AV0)arg1 ;
-(NSString *)type;
-(SCD_Struct_AV0)time;
-(CGRect)bounds;
-(SCD_Struct_AV0)duration;
-(void)setOriginalMetadataObject:(AVMetadataObject *)arg1 ;
-(void)dealloc;
@end
