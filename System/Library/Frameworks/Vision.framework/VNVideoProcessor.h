/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Vision/Vision-Structs.h>
@class VCPVideoProcessor;

@interface VNVideoProcessor : NSObject {

	VCPVideoProcessor* _videoProcessor;

}
-(id)initWithURL:(id)arg1 ;
-(BOOL)addRequest:(id)arg1 processingOptions:(id)arg2 error:(id*)arg3 ;
-(BOOL)addRequest:(id)arg1 withProcessingOptions:(id)arg2 error:(id*)arg3 ;
-(BOOL)analyzeWithTimeRange:(SCD_Struct_VN37)arg1 error:(id*)arg2 ;
-(BOOL)analyzeTimeRange:(SCD_Struct_VN37)arg1 error:(id*)arg2 ;
-(void)cancel;
-(BOOL)removeRequest:(id)arg1 error:(id*)arg2 ;
@end

