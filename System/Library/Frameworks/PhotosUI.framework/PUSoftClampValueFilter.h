/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUClampValueFilter.h>

@interface PUSoftClampValueFilter : PUClampValueFilter {

	double _resistance;

}

@property (assign,nonatomic) double resistance;              //@synthesize resistance=_resistance - In the implementation block
+(id)scrollViewFilter;
-(double)resistance;
-(double)updatedValue:(double)arg1 withTargetValue:(double)arg2 ;
-(void)setResistance:(double)arg1 ;
@end
