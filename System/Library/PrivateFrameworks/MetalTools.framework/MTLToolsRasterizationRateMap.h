/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLRasterizationRateMapSPI.h>

@class NSString;

@interface MTLToolsRasterizationRateMap : MTLToolsObject <MTLRasterizationRateMapSPI>

@property (readonly) id<MTLDevice> device; 
@property (readonly) NSString * label; 
@property (readonly) SCD_Struct_MT0 screenSize; 
@property (readonly) SCD_Struct_MT0 physicalGranularity; 
@property (readonly) unsigned long long layerCount; 
@property (readonly) SCD_Struct_MT56 parameterBufferSizeAndAlign; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)label;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id<MTLDevice>)device;
-(void)copyParameterDataToBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(SCD_Struct_MT0)physicalGranularity;
-(SCD_Struct_MT56)parameterBufferSizeAndAlign;
-(SCD_Struct_MT0)physicalSizeForLayer:(unsigned long long)arg1 ;
-(SCD_Struct_MT55)mapScreenToPhysicalCoordinates:(SCD_Struct_MT55)arg1 forLayer:(unsigned long long)arg2 ;
-(SCD_Struct_MT55)mapPhysicalToScreenCoordinates:(SCD_Struct_MT55)arg1 forLayer:(unsigned long long)arg2 ;
-(SCD_Struct_MT0)screenSize;
-(unsigned long long)layerCount;
@end
