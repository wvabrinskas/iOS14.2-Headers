/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXYearsLayoutMetrics : PXLayoutMetrics {

	long long _sizeClass;
	long long _orientation;
	double _interitemSpacing;
	double _defaultItemAspectRatio;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) long long sizeClass;                        //@synthesize sizeClass=_sizeClass - In the implementation block
@property (assign,nonatomic) long long orientation;                      //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                    //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) double defaultItemAspectRatio;              //@synthesize defaultItemAspectRatio=_defaultItemAspectRatio - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                       //@synthesize padding=_padding - In the implementation block
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(id)init;
-(long long)sizeClass;
-(unsigned long long)hash;
-(UIEdgeInsets)padding;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDefaultItemAspectRatio:(double)arg1 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)setSizeClass:(long long)arg1 ;
-(double)defaultItemAspectRatio;
-(long long)orientation;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

