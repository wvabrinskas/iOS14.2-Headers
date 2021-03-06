/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@interface IMGIFUtils : NSObject
+(BOOL)isGifUti:(id)arg1 ;
+(id)fileWriter;
+(BOOL)setOutgoingError:(id*)arg1 errorCode:(long long)arg2 comment:(id)arg3 ;
+(BOOL)readFileProperties:(id*)arg1 fromImageSource:(CGImageSourceRef)arg2 error:(id*)arg3 ;
+(id)gifPropertiesFromFileProperties:(id)arg1 ;
+(id)randomFileName;
+(BOOL)readGifProperties:(id*)arg1 fromImageSource:(CGImageSourceRef)arg2 error:(id*)arg3 ;
+(id)setGifProperities:(id)arg1 onFileProperties:(id)arg2 ;
+(id)defaultFileProperties;
+(id)addGifProperties:(id)arg1 toFileProperties:(id)arg2 ;
+(id)randomTempFilePath;
+(BOOL)readFileProperties:(id*)arg1 fromImageSource:(CGImageSourceRef)arg2 withUpdatedLoopCount:(long long)arg3 error:(id*)arg4 ;
+(BOOL)writeNewFileAtPath:(id)arg1 withProperties:(id)arg2 fromImageSource:(CGImageSourceRef)arg3 error:(id*)arg4 ;
+(void)setFileWriter:(id)arg1 ;
+(BOOL)writeLoopCount:(long long)arg1 destinationFilePath:(id)arg2 fromImageSource:(CGImageSourceRef)arg3 error:(id*)arg4 ;
+(long long)loopCountFromGifProperties:(id)arg1 ;
+(BOOL)readLoopCount:(long long*)arg1 fromImageSource:(CGImageSourceRef)arg2 error:(id*)arg3 ;
+(BOOL)isGIFFileAtPath:(id)arg1 ;
+(BOOL)writeDefaultPropertiesToDestinationRef:(CGImageDestinationRef)arg1 withOptionalAdditionalGifProperties:(id)arg2 error:(id*)arg3 ;
+(BOOL)copyGifFromPath:(id)arg1 toDestinationPath:(id)arg2 error:(id*)arg3 ;
+(BOOL)writeLoopCount:(long long)arg1 withFileAtPath:(id)arg2 error:(id*)arg3 ;
+(id)logger;
-(id)logger;
@end

