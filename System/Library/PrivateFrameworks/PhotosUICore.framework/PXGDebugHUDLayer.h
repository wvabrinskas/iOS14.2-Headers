/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSArray;

@interface PXGDebugHUDLayer : CALayer {

	NSArray* _graphLayers;
	CGColorRef _green;
	CGColorRef _yellow;
	CGColorRef _red;

}

@property (nonatomic,copy) NSArray * graphLayers;              //@synthesize graphLayers=_graphLayers - In the implementation block
@property (assign,nonatomic) CGColorRef green;                 //@synthesize green=_green - In the implementation block
@property (assign,nonatomic) CGColorRef yellow;                //@synthesize yellow=_yellow - In the implementation block
@property (assign,nonatomic) CGColorRef red;                   //@synthesize red=_red - In the implementation block
-(CGColorRef)red;
-(CGColorRef)yellow;
-(id)init;
-(void)setRed:(CGColorRef)arg1 ;
-(void)updateDebugHUDWithStats:(SCD_Struct_PX57*)arg1 ;
-(void)updateLayerAtIndex:(long long)arg1 time:(double)arg2 redZone:(double)arg3 yellowZone:(double)arg4 ;
-(NSArray *)graphLayers;
-(void)setGraphLayers:(NSArray *)arg1 ;
-(void)setYellow:(CGColorRef)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGColorRef)green;
-(void)setGreen:(CGColorRef)arg1 ;
-(void)dealloc;
@end

